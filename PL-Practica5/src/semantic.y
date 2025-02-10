
%{
#include "../include/semantico.h"

void yyerror(const char *s);
int yylex();
FILE* yyout;
int hayError = 0;
int deep = 0;
FILE * fMain;
FILE * fFunc;


#define YYERROR_VERBOSE
%}

%define parse.error verbose

%token ID TIPO_DATO NUMERO CADENA BOOL_VALUE CONST_ENTERO CONST_CARACTER CONST_FLOAT LETRA LISTA
%token INPUT OUTPUT PROGRAM IF RETURN WHILE REPEAT UNTIL PYC COMA PUNTO COMILLAS COMENT
%token ELSE  
%token INI_VAR_LOCAL FIN_VAR_LOCAL

%left PAR_IZQ LLAVE_IZQ COR_IZQ MENOR_QUE INI_VAR_LOCAL              /* Apertura de paréntesis, llaves, corchetes y comparador < */
%right PAR_DER LLAVE_DER COR_DER MAYOR_QUE FIN_VAR_LOCAL              /* Cierre de paréntesis, llaves, corchetes y comparador > */

%left OP_SUM_RES                                        /* Suma y resta */
%left OP_MULT                                           /* Multiplicación y operadores relacionados */
%left OP_ASIGNACION
%left OP_ARIT                                           /* Aritméticos avanzados como /, **, % */
%left OP_COMP                                           /* Comparadores como ==, !=, <=, >= */
%left OP_LOGIC                                          /* Operadores lógicos &&, || */
%left OP_AND                                            /* Operador AND bit a bit */
%left OP_R                                              /* Operadores especiales como !, ?, #, $ */
%left OP_INIT_LISTA
%right OP_INCREMENT OP_DECREMENT                         /* Incremento y decremento unarios */
%nonassoc OP_LISTA OP_ACCESO                            /* Operadores específicos para listas y acceso */

%%

Programa:
    PROGRAM identificador {
              gen("#include <stdlib.h>\n");
              gen("#include <stdio.h>\n");
              gen("#include <stdbool.h>\n");
              gen("int main()");
            } bloque 
    ;

bloque:
    LLAVE_IZQ {addMarca(); if (yyout != fMain || (yyout == fMain && deep > 0)) { gen("{\n"); ++deep; } }
    declarar_variables  { if (deep == 0) yyout = fFunc; }
    declarar_funciones { if (deep == 0) { yyout = fMain; gen("\n{\n"); ++deep; } }
    Sentencias LLAVE_DER {/*printTabla();*/ eliminarEntradas(); --deep; gen("}\n\n");};

declarar_funciones: declarar_funciones declarar_funcion
|
;

declarar_funcion:
     cabecera_funcion { funcion = 1; } bloque { funcion = 0;}
    ;

cabecera_funcion:
    TIPO_DATO { initParametros = 0; } identificador { setTipo(($1)); addFuncion($3); } 
    PAR_IZQ { varLocal = 1; initParametros = 0; } 
    Parametros { setNParam($7); nParam = 0; initParametros = 1; } 
    PAR_DER { gen("%s %s(%s)\n", tipoIntermedio($1), $3.lex, $7.lex); } ;
    | error
    ; 
    
declarar_variables : INI_VAR_LOCAL { varLocal = 0; } Variables_locales { varLocal = 1; } FIN_VAR_LOCAL { gen("\n"); }
    | { gen("\n"); }
;

Variables_locales : Variables_locales Cuerpo_declar_variables
                    | Cuerpo_declar_variables
;


Cuerpo_declar_variables : TIPO_DATO { setTipo($1); } lista_ID PYC { gen("%s %s;\n", tipoIntermedio($1), $3.lex); }
                 | TIPO_DATO error { yyerror("Error tras el tipo de dato\n"); }
                 | error 
;

Parametros:
    Parametros COMA parametro {
                $$.lex = malloc(strlen($1.lex) + strlen($3.lex) + 3);
                sprintf($$.lex, "%s, %s", $1.lex, $3.lex);
             }
    | parametro  { $$.lex = $1.lex; } 
    | Parametros error parametro
;

parametro: 
    TIPO_DATO identificador { nParam++; setTipo($1); 
                            addParametro($2); 
                            $$.lex = malloc(strlen($1.lex) + strlen($2.lex) + 2);
                            sprintf($$.lex, "%s %s", tipoIntermedio($1), $2.lex);}
;


Sentencias:
    Sentencias { varLocal = 1; gen("{\n"); ++deep;} Sentencia { --deep; gen("}\n"); }
    | {varLocal = 1; } {gen("{\n"); ++deep; } Sentencia { --deep; gen("}\n");}
    ;

Sentencia:
    bloque
    | sentencia_asignacion PYC 
    | sentencia_if
    | sentencia_while
    | sentencia_entrada PYC
    | sentencia_salida  PYC
    | sentencia_return  PYC
    | sentencia_repeat_until
    | sentencia_mover_lista
    | sentencia_comenzar_lista
    | sentencia_lista_aniadir_en 
    ;

 
sentencia_asignacion:
    identificador OP_ASIGNACION expresion {
        if ($1.tipo != $3.tipo) {   
            yyerror("Error semantico: Tipos distintos\n");
        }
        else{
            comprobarAsignacion($1, $3);
        }
        gen("%s = %s;\n", $1.lex, $3.lex);}
;


sentencia_if:
    IF PAR_IZQ { insertarDescriptor("", etiqueta(), etiqueta());}
    expresion  { expresionBooleana($4.tipo); gen("\n"); gen("if (!%s) goto %s;\n", $4.lex, TablaSimbolos[TOPE-1].descr->etiquetaElse);}
    PAR_DER { gen("{\n"); ++deep; }
    bloque { { --deep; gen("}\n"); }
            DescriptorDeInstrControl* ds = TablaSimbolos[TOPE-1].descr;
            gen("goto %s;\n\n", ds->etiquetaSalida);
            gen("%s:", ds->etiquetaElse);}
    sentencia_else_if {gen("\n"); gen("%s: {} \n", TablaSimbolos[TOPE-1].descr->etiquetaSalida); --TOPE;}
;

sentencia_else_if:
    ELSE sentencia_if
    | sentencia_else
    ;

sentencia_else:
    ELSE { gen("\n"); gen("{\n"); ++deep; } bloque  { --deep; gen("}\n"); }
    |  { int aux = deep; deep = 0; gen(" {}\n"); deep = aux; } 
    ;
    


sentencia_while:
    WHILE PAR_IZQ { insertarDescriptor(etiqueta(), etiqueta(), "");
                    gen("%s:\n", TablaSimbolos[TOPE-1].descr->etiquetaEntrada);
                    gen("{\n"); ++deep; gen("{\n"); ++deep;}
    expresion { expresionBooleana($4.tipo);
                gen("\n");
                gen("if (!%s) goto %s;\n", $4.lex, TablaSimbolos[TOPE-1].descr->etiquetaSalida);
                --deep; gen("}\n\n");}
    PAR_DER bloque { gen("goto %s;\n\n", TablaSimbolos[TOPE-1].descr->etiquetaEntrada);
                        --deep; gen("}\n");
                        gen("%s: {}\n", TablaSimbolos[TOPE-1].descr->etiquetaSalida);
                        --TOPE;} 
;

sentencia_entrada:
    INPUT PAR_IZQ sentencia_input PAR_DER 
;

sentencia_input:
    ID { gen("scanf(&%s);\n", $1.lex); }
    | sentencia_input COMA ID { gen("scanf(%s, &%s);\n", $1.lex, $3.lex); }
    | CADENA COMA ID { gen("scanf(%s, &%s);\n", $1.lex, $3.lex); }
    | sentencia_input error ID     
    | CADENA error ID  
;

sentencia_salida:
    OUTPUT PAR_IZQ sentencia_output PAR_DER 
;

sentencia_output:
    CADENA { gen("printf(%s);\n", $1.lex); }
    | CADENA COMA ID { gen("printf(%s, %s);\n", $1.lex, $3.lex); }
    | CADENA error ID
;

sentencia_return:
    RETURN expresion { comprobarTipoDevuelto($2, &$$);  gen("return(%s);\n", $2.lex); }
;


sentencia_repeat_until:
    REPEAT {insertarDescriptor(etiqueta(), "", "");
            gen("%s:\n", TablaSimbolos[TOPE-1].descr->etiquetaEntrada);
            gen("{\n");++deep;
            gen("{\n");++deep;}
    Sentencia  { --deep; gen("}\n"); }
    UNTIL expresion {expresionBooleana($6.tipo);
                    gen("\n");
                    gen("if (%s) goto %s;\n", $6.lex, TablaSimbolos[TOPE-1].descr->etiquetaEntrada);
                    --deep;
                    gen("}\n");--TOPE;}
;

sentencia_mover_lista:
    identificador OP_LISTA PYC { comprobarLista($1);}
    | identificador OP_LISTA identificador PYC
    ;

sentencia_comenzar_lista:
    OP_INIT_LISTA identificador PYC
    | identificador OP_INIT_LISTA expresion PYC
    ;

sentencia_lista_aniadir_en:
    identificador OP_ACCESO expresion PYC
    | identificador OP_ACCESO expresion OP_INCREMENT expresion PYC
    ;

lista_expresion : lista_expresion COMA expresion {
                        $$.lex = malloc(sizeof(char) * (strlen($1.lex) + strlen($3.lex) + 3));
                        sprintf($$.lex, "%s, %s", $1.lex, $3.lex); 
                        nExpresion++; comprobarParametro($3); $$.dim1 = $1.dim1 + $3.dim1;}
                | expresion {$$.lex = $1.lex;  nExpresion++; comprobarParametro($1); }
                | lista_expresion error expresion
                ;

expresion:
    expresion_binaria { $$.lex = $1.lex; $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;}
    | expresion_unaria { $$.lex = $1.lex; $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;}
    | llamada_subprog { $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;}
    | constante  { $$.lex = $1.lex; $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;}
    | identificador { $$.lex = $1.lex; $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;}
    | PAR_IZQ expresion PAR_DER {char auxExpr[100];
                                strcpy(auxExpr, ""); 
                                strcat(auxExpr, "(");
                                strcat(auxExpr, $2.lex);                                        
                                strcat(auxExpr, ")"); 
                                strcpy($$.lex, auxExpr);
                                $$.tipo = $2.tipo;}
    | error
    ;

                    
lista_ID:
    identificador 
    | lista_ID COMA identificador {$$.lex = malloc(sizeof(char) * (strlen($1.lex) + strlen($3.lex) + 3));
                                    sprintf($$.lex, "%s, %s", $1.lex, $3.lex);}
    | lista_ID error ID       
;


/*

expresion : LPAR expresion RPAR                  	{ $$.lexema = $2.lexema; $$.dtipo = $2.dtipo; }
          | OPSUMRES expresion %prec OPNOT              { $$.lexema = leerOp($2.dtipo, $2.lexema, $1.lexema, "", -1); $$.dtipo = sumRes($1.atributo, $2.dtipo); }
          | OPNOT expresion                             { $$.lexema = leerOp($2.dtipo, $2.lexema, $1.lexema, "", -1); $$.dtipo = not($2.dtipo); }
          | OPINTHASH expresion                         { $$.lexema = leerOp($2.dtipo, $2.lexema, $1.lexema, "", -1); $$.dtipo = intHash($1.atributo, $2.dtipo); }
          | expresion OPAT expresion                    { $$.lexema = leerOp($1.dtipo, $1.lexema, $2.lexema, $3.lexema, $3.dtipo); $$.dtipo = at($1.dtipo, $3.dtipo); }
         
          */

expresion_binaria:
    expresion OP_SUM_RES expresion {$$.tipo = $1.tipo;
                                    comprobarBinario($1, $3, &$$);
                                    $$.lex = leerOpBinario($1, $2, $3);} 

    | expresion OP_MULT expresion { $$.tipo = $1.tipo;
                                    comprobarBinario($1, $3, &$$); 
                                    $$.lex = leerOpBinario($1, $2, $3);}

    | expresion MAYOR_QUE expresion {$$.tipo = booleano;
                                    comprobarRelacion($1, $3, &$$); 
                                    $$.lex = leerOpBinario($1, $2, $3);}

    | expresion MENOR_QUE expresion {$$.tipo = booleano;
                                    comprobarRelacion($1, $3, &$$); 
                                    $$.lex = leerOpBinario($1, $2, $3);}

    | expresion OP_LOGIC expresion {$$.tipo = $1.tipo;
                                    comprobarOpLogico($1, $3, &$$);
                                    $$.lex = leerOpBinario($1, $2, $3); }

    | expresion OP_AND expresion { $$.tipo = $1.tipo;
                                    comprobarOpLogico($1, $3, &$$); 
                                    $$.lex = leerOpBinario($1, $2, $3);}

    | expresion OP_COMP expresion { $$.tipo = booleano;
                                    comprobarOpLogico($1, $3, &$$); 
                                    $$.lex = leerOpBinario($1, $2, $3);}

    | expresion OP_ARIT expresion { $$.tipo = $1.tipo;
                                    comprobarBinario($1, $3, &$$); 
                                    $$.lex = leerOpBinario($1, $2, $3);}
;

expresion_unaria:
    OP_INCREMENT expresion {$$.tipo = $2.tipo;
                            comprobarUnario($2, &$$);
                            $$.lex = leerOpUnario($2, $1);}

    | OP_DECREMENT expresion {$$.tipo = $2.tipo;
                            comprobarUnario($2, &$$); 
                            $$.lex = leerOpUnario($2, $1);}

    | OP_R expresion { $$.tipo = $2.tipo;
                       comprobarUnario($2, &$$); 
                       $$.lex = leerOpUnario($2, $1);}

    | OP_SUM_RES expresion {$$.tipo = $2.tipo;
                            comprobarUnario($2, &$$); 
                            $$.lex = leerOpUnario($2, $1);}

    | OP_MULT expresion { $$.tipo = $2.tipo;
                          comprobarUnario($2, &$$);
                          $$.lex = leerOpUnario($2, $1);}

    | expresion OP_INCREMENT {$$.tipo = $1.tipo;
                            comprobarUnario($1, &$$);
                            $$.lex = leerOpUnario($1, $2); }

    | expresion OP_DECREMENT {$$.tipo = $1.tipo;
                            comprobarUnario($1, &$$); 
                            $$.lex = leerOpUnario($1, $2);}
; 


// Para no repetir codigo
identificador: ID {
                     /*Si este valor está a 0, quiere decir que se esta declarando variables*/
                     if (varLocal == 0){
                            $1.nDim = 0;
                            $1.dim1 = 0;
                            
                            addIdentificador($1);
                     }else{
                            /*Estamos cogiendo un parametro y debe existir*/
                            if(initParametros == 1){
                                   getIdentificador($1, &$$);
                            }
                    }
                    $$.lex=$1.lex;
                }
;

constante:
    CONST_ENTERO { $$.tipo = entero; $$.nDim = 0; $$.dim1 = 0;}
    | CONST_FLOAT  { $$.tipo = real; $$.nDim = 0; $$.dim1 = 0;}
    | BOOL_VALUE { $$.tipo = booleano; $$.nDim = 0; $$.dim1 = 0;}
    | CONST_CARACTER { $$.tipo = caracter; $$.nDim = 0; $$.dim1 = 0;}
    | const_lista { $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;} 
;

const_lista : LLAVE_IZQ lista_expresion LLAVE_DER { $$.tipo = $2.tipo; $$.nDim = 1; $$.dim1 = atoi($2.lex); $$.lex = $2.lex; } 
;

llamada_subprog:
    identificador PAR_IZQ  { nExpresion = 0; funcionActual = buscarIdentificador($1); } lista_expresion PAR_DER { comprobarFuncion($1, &$$); sprintf($$.lex, "%s(%s)", $1.lex, $4.lex);}
;

%%

#include "lex.yy.c"

// Se debe implementar la función yyerror. En este caso simplemente escribimos
// el mensaje de error en pantalla
void yyerror(const char *msg ){
	fprintf(stderr, "Línea %d: %s\n", yylineno, msg);
}

