#include "../include/semantico.h"

#define min(a, b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })
#define max(a, b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })


void yyerror(const char *s);

// Definición de variables globales
entradaTS TablaSimbolos[MAX_TS];
long int TOPE = 0; // Inicializa el TOPE

dtipo tipoGlobal;
int Subprog = 0;

dtipo argumentos_tipo_datos[MAX_ARGS];
int n_argumentos = 0;

// linea actual (servirá para mostrar errores de una linea o hacer alguna indicación sobre esa linea analizada)
unsigned int linea;

// VARIABLES PARA INDICAR EL INICIO O FIN DE UNA ESTRUCTURA (BLOQUE, funcion, DECLARACIÓN DE VARIABLES, ETC)

// (0) indica que a la izquierda se ha creado un bloque, (1) indica que a la izquierda hay una cabecera de una funcion (subprog)
int funcion;

// (0) indica el inicio de la declaracion de variables locales, (1) indica el fin de la declaracion de variables locales
// (1) también se puede usar para indicar que la variable que se está usando y no que está en una declaración
int varLocal;

// (0) indica el inicio de la declaracion de parametros (0), (1) indica el fin de la declaración de parametros
int initParametros = 0;

// nParam como global para ir calculando los parametros que esta recibiendo una funcion
// a esta variable se le hará el nParam++ (es un contador)
unsigned int nParam;
unsigned int nExpresion;

// Sirve para controlar la funcion que se está analizando en este momento
int funcionActual;

dtipo tipo;


void printTabla() {
    printf("+-------------+----------------+------------+----------+---------+-------------+\n");
    printf("|   Nombre    | Tipo Entrada   | Tipo Dato  | nParam   | Vector  | nElementos  |\n");
    printf("+-------------+----------------+------------+----------+---------+-------------+\n");
    
    for (int i = TOPE; i >= 0; i--) {
        entradaTS elemento = TablaSimbolos[i];
        printf("| %-11s | %-14s | %-10s | %-8d | %-7d | %-11d |\n",
               elemento.lex, tipoEntradaString(elemento.in), tipoAString(elemento.tipo), elemento.nParam, elemento.nDim, elemento.dim1);
        printf("+-------------+----------------+------------+----------+---------+-------------+\n");
    }
    printf("Numero de elementos en la Pila: %ld\n", TOPE+1);
}

char* tipoEntradaString(tipoEntrada tipo_entrada){
    switch (tipo_entrada) {
        case MARCA:
            return "marca";
        case FUNCION:
            return "función";
        case VARIABLE:
            return "variable";
        case PARAMETRO:
            return "parametro";
        default:
            return "desconocido";
    }
}

char* tipoAString(dtipo tipo_dato){
  switch (tipo_dato) {
    case real:
      return "float";
    case entero:
      return "int";
    case booleano:
      return "bool";
    case caracter:
      return "char";
    case error:
      return "error";
    case na:
      return "nan";
    default:    //Incluye desconocido y no asignado
      return "desconocido";
  }
}

void setTipo(atributo valor){
  if (!esTipoValido(valor.tipo)) {
        yyerror("Error semántico, Tipo de dato no reconocido.\n");
    } else {
        // Asignar el tipo a una variable global o contexto
        tipoGlobal = valor.tipo;
    }
}

int esTipoValido(dtipo tipo) {
    return strcmp(tipoAString(tipo),"desconocido");
}

int esVector(atributo arr){
    return (arr.nDim > 0);
}

int igualDimension(atributo arr1, atributo arr2){
    return(
        arr1.nDim == arr2.nDim &&
        arr1.dim1 == arr2.dim1
    );
    // Revisar: No bastaría con comparar 'nDim'?
}

void comprobarTipoDevuelto(atributo expresion, atributo* devuelto){
    // Miro el indice de la siguiente función
    int idx = TOPE - 1;
    int encontrado = 0;

    // Recorro la tabla de símbolos
    while (idx > 0 && !encontrado){
        // Si la entrada es una marca
        // Se busca la marca porque es el inicio de la funcion que se está declarando
        if (TablaSimbolos[idx].in == MARCA){
            
            // Lo he encontrado
            encontrado = 1;
        }else{
            // Voy a la entrada anterior
            idx--;
        }
    }
    
            
    // Si lo encuentro devuelvo el indice, si no devuelvo un error
    if (encontrado == 0){
        idx = -1;
        yyerror("Error semántico: la variable no está declarada en la funcion.\n");
    }else{

        encontrado = 0;
        // Sirve en el caso de que haya que buscar el tipoDevuelto de una funcion que tiene dentro otra funcion
        // De esta forma se salta los parámetros y busca la función última de su bloque que es la que estamos declarando realmente
        // No la anidada dentro
        while (idx > 0 && !encontrado){
            // Si la entrada es una función
            if (TablaSimbolos[idx].in == FUNCION){
                
                // Lo he encontrado
                encontrado = 1;
            }else{
                // Voy a la entrada anterior
                idx--;
            }
        }

        // Si todo ha ido bien empiezo a comprobar si el tipo de la expresión
        // coincide con el de la función

        // Si es distinto, error.

        if (expresion.tipo != TablaSimbolos[idx].tipo){

            yyerror("Error semántico, el tipo de la función y el tipo del valor devuelto no coinciden.\n");
        }
        else{
            // Creamos este atributo temporal para comparar el tamaño
            // del tipo de dato de TablaSimbolos[idx]
            atributo tablaSimbolosIdx;
            tablaSimbolosIdx.nDim = TablaSimbolos[idx].nDim;
            tablaSimbolosIdx.dim1 = TablaSimbolos[idx].dim1;

            if (igualDimension(expresion, tablaSimbolosIdx)){
                // Igualamos
                devuelto->tipo = expresion.tipo;
                devuelto->nDim = expresion.nDim;
                devuelto->dim1 = expresion.dim1;
            }else{
                yyerror("Error semántico, no son del mismo tamaño que el return de la función.\n");
            }
        }
    }
}

void comprobarUnario(atributo expr, atributo* padre){
    // Revisar: Usamos 1 único parámetro?
    if (expr.tipo == booleano || !esVector(expr)){
        padre->tipo = booleano;
        padre->nDim = 0;
        padre->dim1 = 0;
    }else{
        yyerror("Error semántico, se esperaba un expresión lógica.\n");
    }
}

void comprobarBinario(atributo expr1, atributo expr2, atributo* padre){
    // Si no son del mismo tipo -> error
    if (expr1.tipo != expr2.tipo){
        yyerror("Error semántico, no son del mismo tipo.\n");
    }
    else{
        // Si son iguales pero no son entero o real -> error
        if (expr1.tipo != entero && expr1.tipo != real){
            yyerror("Error semántico, se esperaba un número entero o flotante.\n");
        }
        else{

            // Si son array ...
            if (esVector(expr1) && esVector(expr2)){
                // Si tienen la misma dimensión ...
                if (igualDimension(expr1,expr2)){
                    padre->tipo = expr1.tipo;
                    padre->nDim = expr1.nDim;
                    padre->dim1 = expr1.dim1;
                }else{
                    // Si no tienen la misma dimensión -> error
                    yyerror("Error semántico, no tienen la misma dimension.\n");
                }
            }else{ 
                if(igualDimension(expr1, expr2) == 0){
                    yyerror("Error semántico, no tienen la misma dimension.\n");
                }
            // Si no son array...
                // Revisar: Que opina el consejo de sabios
                // sobre las lineas 479 en adelante
                // Para el de multiplicar/dividir igual
            }
        }
    }
}

// Revisar: Esta función de abajo y la de arriba no podrían ser 1 sola?
void comprobarMultiplicativo(atributo expr1, atributo expr2, atributo* padre){
    
    // Si no son del mismo tipo -> error
    if (expr1.tipo != expr2.tipo){

        yyerror("Error semántico, no son del mismo tipo.\n");
    }
    else{
        // Si son iguales pero no son entero o real -> error
        if (expr1.tipo != entero && expr1.tipo != real){
            yyerror("Error semántico, se esperaba un número entero o flotante.\n");
        }
        else{
            // Si son array ...
            if (esVector(expr1) && esVector(expr2)){
                if (igualDimension(expr1,expr2)){
                    padre->tipo = expr1.tipo;
                    padre->nDim = expr1.nDim;
                    padre->dim1 = expr1.dim1;
                }else{
                    // Si no tienen la misma dimensión -> error
                    yyerror("Error semántico, no tienen la misma dimension.\n");
                }
            }else{// Si no son array...
                // Revisar: Que opina el consejo de sabios 
                // sobre las lineas 479 en adelante
                // Para el de multiplicar/dividir igual
            }
        }
    }
}

void expresionBooleana(dtipo tipo)
{
    if(tipo != booleano)
    {
        yyerror("Error semántico, se esperaba booleano\n");
    }
}

void comprobarOpLogico(atributo expr1, atributo expr2, atributo* padre){
    // Si no son del mismo tipo -> error
    if (expr1.tipo != expr2.tipo){
        yyerror("Error semántico, no son del mismo tipo.\n");
    }
    else{
        if (esVector(expr1) || esVector(expr2)){
            yyerror("Error semántico, los operandos han de ser del mismo tipo.\n");
        }
        else{
            padre->tipo = booleano;
            padre->nDim = 0;
            padre->dim1 = 0;
        }
    }
}

void comprobarIgualdad(atributo expr1, atributo expr2, atributo* padre){
    // Si no son del mismo tipo -> error
    if (expr1.tipo != expr2.tipo){
        yyerror("Error semántico, no son del mismo tipo.\n");
    }
    else{
        if (esVector(expr1) || esVector(expr2)){
            yyerror("Error semántico los operandos han de ser del mismo tipo.\n");
        }
        else{
            padre->tipo = booleano;
            padre->nDim = 0;
            padre->dim1 = 0;
        }
    }
}

void comprobarRelacion(atributo expr1, atributo expr2, atributo* padre){

    if (expr1.tipo != expr2.tipo){
        yyerror("Error semántico, las expresiones deberían de tener el mismo tipo.\n");
    }
    else{
        if ((expr1.tipo != entero && expr1.tipo != real) || esVector(expr1) || esVector(expr2)){
            yyerror("Error semántico, se esperaba entero o flotante.\n");
        }
        else{
            // Si todo ha ido bien
            padre->tipo = booleano;
            padre->nDim = 0;
            padre->dim1 = 0;
        }
    }
}


void addIdentificador(atributo ident){
    // Para añadir un id a la pila no se puede haber llegado al tope,
    // el id no puede existir y se deben estar declarando variables
    int i = TOPE - 1;
    int encontrado = 0;

    if(i >= 0 && varLocal == 0){
        // Se obtiene la posición de la marca del bloque
        while((TablaSimbolos[i].in != MARCA) && (i >= 0) && !encontrado){

            if(strcmp(TablaSimbolos[i].lex, ident.lex) != 0){
                i--;
            } else{
                encontrado = 1;
                yyerror("Error semántico, Identificador ya definido.\n");
            }
        }

        // Si no se ha encontrado significa que no existe, por lo que se añade a la pila
        if(!encontrado) {
            
            while ((TablaSimbolos[i].in != funcion && i > 0) && !encontrado){
                if(strcmp(TablaSimbolos[i].lex, ident.lex) != 0){
                    i--;
                } else{
                    encontrado = 1;
                }
            }

            if(!encontrado){
                entradaTS nuevaEntrada;
                nuevaEntrada.in = VARIABLE;
                nuevaEntrada.lex = ident.lex;
                nuevaEntrada.tipo = tipoGlobal;
                nuevaEntrada.nParam = 0;
                nuevaEntrada.nDim=ident.nDim;
                nuevaEntrada.dim1=ident.dim1;

                addEntrada(nuevaEntrada);

            }else{
                yyerror("Error semántico, Identificador esta definido como parametro.\n");
            }

            
        }

    }
}

void addEntrada(entradaTS in){

    if (TOPE < MAX_TS){        

        // Igualo todo
        TablaSimbolos[TOPE].in = in.in;
        if (in.lex == NULL) TablaSimbolos[TOPE].lex = "(null)"; else TablaSimbolos[TOPE].lex = strdup(in.lex);
        if (in.tipo < 0 || TablaSimbolos[TOPE].tipo > error) in.tipo = error; else TablaSimbolos[TOPE].tipo = in.tipo;
        TablaSimbolos[TOPE].nDim = in.nDim;
        TablaSimbolos[TOPE].dim1 = in.dim1;
        TablaSimbolos[TOPE].nParam = in.nParam; 
    
        // Si la entrada incluye un descriptor de control
        if (in.in == DESCRIPTOR) {
            // Asignar una copia del descriptor (reservando memoria)
            TablaSimbolos[TOPE].descr = malloc(sizeof(DescriptorDeInstrControl));
            if (TablaSimbolos[TOPE].descr == NULL) {
                yyerror("Error intermedio, no se pudo asignar memoria para el descriptor.\n");
                return;
            }
            // Copiar los campos del descriptor
            TablaSimbolos[TOPE].descr->etiquetaEntrada = strdup(in.descr->etiquetaEntrada);
            TablaSimbolos[TOPE].descr->etiquetaSalida = strdup(in.descr->etiquetaSalida);
            TablaSimbolos[TOPE].descr->etiquetaElse = strdup(in.descr->etiquetaElse);
        } else {
            // Si no hay descriptor, se asigna NULL
            TablaSimbolos[TOPE].descr = NULL;
        }

        // Aumento el limite
        TOPE++;

    }else{
        yyerror("Error semántico, Desbordamiento de la pila.\n");
    }
    
}

/*void delEntrada(){
    // Si no se ha agotado el TOPE
    
    if (TOPE > 0){
        TOPE--;

    }else{
        printf("Error semántico en la línea %d, Tabla de símbolos vacía.\n", linea);
    }
    
}*/

void eliminarEntradas(){
    // Elimino hasta el inicio de bloque
    while (TablaSimbolos[TOPE - 1].in != MARCA
    && TOPE > 0){
        TOPE--;
    }

    // Si llego a la marca decremento 1 más
    if (TablaSimbolos[TOPE - 1].in == MARCA){
        TOPE--;
    }

    // Si estamos en un función eliminamos todo salvo la cabecera
    if (TablaSimbolos[TOPE-1].in == PARAMETRO){
        while (TablaSimbolos[TOPE-1].in != funcion && TOPE >0){
            TOPE--;
        }
        // Tambien eliminamos la propia funcion
        //TOPE--; Hacer esto elimina una funcion dentro de otra funcion
    } 
}

void addMarca(){

    entradaTS entradaInicial;
    
    entradaInicial.in = MARCA;
    entradaInicial.lex ="{";
    entradaInicial.tipo = na;
    entradaInicial.nDim = 0;
    entradaInicial.dim1 = 0;
    entradaInicial.nParam = 0;

    addEntrada(entradaInicial);

    if (funcion == 0){
        int i = TOPE - 2;
        // y la siguiente que vas a añadir es el PARAMETRO
        int marca = 0;
        int funct = 0;

        while (i > 0 && TablaSimbolos[i].in == PARAMETRO)
        {
            if (TablaSimbolos[i].in == PARAMETRO)
            {
                entradaTS nuevaEntrada;
                nuevaEntrada.in = VARIABLE;
                nuevaEntrada.lex = strdup(TablaSimbolos[i].lex);
                nuevaEntrada.tipo = TablaSimbolos[i].tipo;
                nuevaEntrada.nParam = TablaSimbolos[i].nParam;
                nuevaEntrada.nDim = TablaSimbolos[i].nDim;
                nuevaEntrada.dim1 = TablaSimbolos[i].dim1;

                // AQUÍ NO ENTRA NUNCA

                addEntrada(nuevaEntrada);
            }
            
            i--;
        }
        
    }
}

void addFuncion(atributo f){
    entradaTS entradaInicial;
    
    entradaInicial.in = FUNCION;
    entradaInicial.lex = strdup(f.lex);
    entradaInicial.tipo = tipoGlobal;
    entradaInicial.nDim = 0;
    entradaInicial.dim1 = 0;
    entradaInicial.nParam = nParam;

    funcionActual = TOPE;

    addEntrada(entradaInicial);
    
}

void setNParam(atributo p){

    TablaSimbolos[funcionActual].nParam = nParam;
    TablaSimbolos[funcionActual].nDim = p.nDim;
    TablaSimbolos[funcionActual].dim1 = p.dim1;

}

void addParametro(atributo param){

    int i = TOPE -1;
    int encontrado = 0;

    while ((i != funcionActual) && encontrado == 0){

        if (strcmp(TablaSimbolos[i].lex, param.lex) != 0)
        {
            i--;
        }else{
            encontrado = 1;
        }
    }

    if (encontrado == 0)
    {
        entradaTS nuevaEntrada;
    
        nuevaEntrada.in = PARAMETRO;
        nuevaEntrada.lex = strdup(param.lex);
        nuevaEntrada.tipo = tipoGlobal;
        nuevaEntrada.nDim = 0;
        nuevaEntrada.dim1 = 0;
        nuevaEntrada.nParam = 0;

        addEntrada(nuevaEntrada);
    }
    else{
        yyerror("Error semántico, ya existe el parámetro.\n");
    }
    
    
}

int buscarIdentificador(atributo e){ 

    int i = TOPE - 1;
    int encontrado = 0;

    while (i > 0 && !encontrado)
    {
        if (TablaSimbolos[i].in != MARCA &&
        strcmp(e.lex, TablaSimbolos[i].lex) == 0)
        {
            encontrado = 1;
        }else{
            i--;
        }
    }

    if (!encontrado)
    {   
        return -1;
    }else{

        return i;
    }
}

dtipo buscarID(atributo id) {
  int i = buscarIdentificador(id);

  if (i < 0)
    return error;
  return TablaSimbolos[i].tipo;
}

void comprobarFuncion(atributo id, atributo* padre){

    int idx = buscarIdentificador(id);

    if (idx == -1)
    {
        funcionActual = -1;
    }else{
                
        if (nExpresion != TablaSimbolos[idx].nParam){
            yyerror("Error semántico, Número de parámetros no valido.\n");
        }else{
            funcionActual = idx;
            padre->lex = strdup(TablaSimbolos[idx].lex);
            padre->tipo = TablaSimbolos[idx].tipo;
            padre->nDim = TablaSimbolos[idx].nDim;
            padre->dim1 = TablaSimbolos[idx].dim1;
        }
        
    }
    
}



void getIdentificador(atributo id, atributo* padre){
    int indice = buscarIdentificador(id);

    // Si existe
    if(indice != -1){       

        padre->lex = strdup(TablaSimbolos[indice].lex);
        padre->tipo = TablaSimbolos[indice].tipo;
        padre->nDim = TablaSimbolos[indice].nDim;
        padre->dim1 = TablaSimbolos[indice].dim1;

    }
    else{   // Si no existe
        // Si la variable no existe en la tabla de símbolos, y si estamos fuera de una función
        // entonces, no podremos usar la variable, por lo que da error
        // Pero si estamos dentro de una función, aunque no se haya encontrado
        // el identificador en la tabla de símbolos, puede estar añadido como parámetro
        if(TablaSimbolos[indice].in != FUNCION)
            yyerror("Error semántico. Identificador no declarado.\n");
    }
}



void comprobarParametro(atributo param){
    
    int posicionParam = funcionActual + nExpresion;

    int parametroErroneo = nExpresion;

//    printf("\nParametro: %s\n", param.lex);
//    printf("nExpreison: %i\n", nExpresion);

    // Comprobamos que el tipo es correcto (coincide con la declaración)
    if(param.tipo != TablaSimbolos[posicionParam].tipo){

        yyerror("Error semántico, Tipo incorrecto \n");
    }
    else{ // Si el tipo es correcto, comprobamos que las dimensiones sean correctos
        if (param.nDim != TablaSimbolos[posicionParam].nDim || param.dim1 != TablaSimbolos[posicionParam].dim1)
        {
            yyerror("Error semántico, Dimension incorrecta en parametro.\n");
        }
    }
}


void comprobarLista(atributo ident){
    int idx = buscarIdentificador(ident);

    if (idx != -1)
    {
        if (TablaSimbolos[idx].nDim != 1){
            yyerror("Error semántico, No es Lista.\n");
        }
    }else{
                
        yyerror("Error semántico: No existe el Identificador");
        
    }
}


void comprobarAsignacion(atributo ident, atributo expr){
    if(igualDimension(ident, expr) == 0){
        yyerror("Error semántico, Dimensiones no compatibles para asignacion.\n");
    }

}

char* tipoIntermedio(atributo td) {
  /*if (esLista(td))
    return "Lista";*/
  return tipoAString(td.tipo);
}

void insertarDescriptor(char* etqEntrada, char* etqSalida, char* etqElse) {
  DescriptorDeInstrControl* descp = (DescriptorDeInstrControl*) malloc(sizeof(DescriptorDeInstrControl));
  descp->etiquetaEntrada = strdup(etqEntrada);
  descp->etiquetaSalida = strdup(etqSalida);
  descp->etiquetaElse = strdup(etqElse);

  entradaTS entrada = {
      DESCRIPTOR,         
      NULL,                
      na,                  
      0,                   
      0,                   
      0,                 
      descp              
  };

  addEntrada(entrada);

}

char* etiqueta() {
  static int indice = 1;
  char* etiqueta = malloc(sizeof(char) * 14);
  sprintf(etiqueta, "etiqueta%i", indice++);
  return etiqueta;
}

char* tipoImprimir(atributo tipo) {
  if (tipo.tipo == entero)
    return "%d";
  else if (tipo.tipo == real)
    return "%f";
  else if (tipo.tipo == booleano) 
    return "%s";
  else if (tipo.tipo == caracter)
    return "%s";
  else if (tipo.tipo == caracter)
    return "%c";
  else {
    if (!hayError) {
      yyerror("Error intermedio: tipo no válido.\n");
      exit(EXIT_FAILURE);
    }
  }
}

char* temporal() {
  static int indice = 1;
  char* temp = malloc(sizeof(char) * 10);
  sprintf(temp, "temp%i", indice++);
  return temp;
}


char* leerOpBinario(atributo atrib1, atributo atrib2, atributo atrib3) {
    dtipo td1 = atrib1.tipo;
    char* exp1 = atrib1.lex;
    char* op = atrib2.lex;
    char* exp2 = atrib3.lex;
    
  char* etiqueta = temporal();  

  gen("%s %s;\n", tipoIntermedio(tipoOp(td1, op)), etiqueta);
  gen("%s = %s %s %s;\n", etiqueta, exp1, op, exp2);
  
  return etiqueta;
}

char* leerOpUnario(atributo atrib1, atributo atrib2) {
  dtipo td1 = atrib1.tipo;
  char* exp1 = atrib1.lex;
  char* op = atrib2.lex;
    
  char* etiqueta = temporal();  

  gen("%s %s;\n", tipoIntermedio(tipoOp(td1, op)), etiqueta);
  gen("%s = %s %s;\n", etiqueta, op, exp1);
  
  return etiqueta;
}


atributo tipoOp(dtipo td, char * op) {
  dtipo tipo;
  if ( !strcmp(op, "+") || !strcmp(op, "-") || !strcmp(op, "*") || !strcmp(op, "/") ||
       !strcmp(op, "**") || !strcmp(op, "--") || !strcmp(op, "%")
     )
     tipo = td;

  if ( !strcmp(op, "!") || !strcmp(op, "&&") || !strcmp(op, "||") || !strcmp(op, ">") || 
       !strcmp(op, "<") || !strcmp(op, ">=") || !strcmp(op, "<=") || !strcmp(op, "!=") || !strcmp(op, "==")
     )
     tipo = booleano;

  if ( !strcmp(op, "#") )
     tipo = entero;

  atributo atrib = {
    -1,
    NULL,
    tipo,
    0,
    0,
    0
  };

  return atrib;
}