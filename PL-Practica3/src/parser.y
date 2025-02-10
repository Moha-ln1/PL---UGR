%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int yylineno;  
int num_errores = 0;

void yyerror(const char *s) {
    fprintf(stderr, "Error de sintaxis en la línea %d: %s\n", yylineno, s);
    num_errores++;
    //printf("El número de errores es %d\n", num_errores);
}
%}
%define parse.error verbose

%token INPUT OUTPUT PROGRAM ID CADENA IF RETURN WHILE REPEAT UNTIL OP_ASIGNACION PYC COMA PUNTO COMILLAS BOOL_VALUE LETRA NUMERO COMENT END_FLOAT
%token ELSE TIPO_DATO LISTA 

%left PAR_IZQ LLAVE_IZQ COR_IZQ MENOR_QUE               /* Apertura de paréntesis, llaves, corchetes y comparador < */
%right PAR_DER LLAVE_DER COR_DER MAYOR_QUE              /* Cierre de paréntesis, llaves, corchetes y comparador > */

%left OP_SUM_RES                                        /* Suma y resta */
%left OP_MULT                                           /* Multiplicación y operadores relacionados */
%left OP_ARIT                                           /* Aritméticos avanzados como /, **, % */
%left OP_COMP                                           /* Comparadores como ==, !=, <=, >= */
%left OP_LOGIC                                          /* Operadores lógicos &&, || */
%left OP_AND                                            /* Operador AND bit a bit */
%left OP_R                                              /* Operadores especiales como !, ?, #, $ */
%left OP_INIT_LISTA
%left OP_INCREMENT OP_DECREMENT                         /* Incremento y decremento unarios */
%nonassoc OP_LISTA OP_ACCESO                            /* Operadores específicos para listas y acceso */



%%

Programa:
    PROGRAM ID bloque
    | error bloque { yyerror("Falta un punto y coma"); yyerrok; }
    ;

bloque:
    LLAVE_IZQ Declaracion Sentencias LLAVE_DER
    | LLAVE_IZQ Sentencias Declaracion LLAVE_DER
    | LLAVE_IZQ Declaracion Sentencias Declaracion LLAVE_DER
    | LLAVE_IZQ Declaracion LLAVE_DER
    | LLAVE_IZQ Sentencias LLAVE_DER
    | LLAVE_IZQ LLAVE_DER
    ;

Declaracion:
    declarar_variable
    | declarar_funcion
    | Declaracion declarar_variable
    | Declaracion declarar_funcion
    ;

declarar_variable:
    tipo_dato lista_ID PYC 
    | tipo_dato sentencia_asignacion
    | tipo_dato lista_ID error { yyerror("Falta un punto y coma"); yyerrok; }
    | error lista_ID PYC { yyerror("Falta un tipo de dato"); yyerrok; }
    ;

declarar_funcion:
    tipo_dato ID PAR_IZQ Parametros PAR_DER bloque
    | tipo_dato ID PAR_IZQ PAR_DER bloque
    ;

lista_ID:
    ID
    | lista_ID COMA ID
    | lista_ID ID error { yyerror("Falta una coma"); yyerrok; }
    ;

Parametros:
    tipo_dato ID
    | tipo_dato ID OP_ASIGNACION expresion
    | Parametros COMA tipo_dato ID
    | Parametros COMA tipo_dato ID OP_ASIGNACION expresion
    | ID error { yyerror("Falta la declaración del tipo de dato"); yyerrok; }
    | Parametros tipo_dato error { yyerror("Falta la coma"); yyerrok; }
    | tipo_dato error { yyerror("Falta el identificador"); yyerrok; }
    ;

Sentencias:
    Sentencias Sentencia
    | Sentencia
    ;

Sentencia:
    sentencia_asignacion
    | sentencia_if
    | sentencia_while
    | sentencia_entrada
    | sentencia_salida
    | sentencia_return
    | sentencia_repeat_until
    | sentencia_mover_lista
    | sentencia_comenzar_lista
    | sentencia_lista_aniadir_en
    | error PYC { yyerrok; }
    ;

llamada_subprog:
    ID PAR_IZQ lista_expresiones_o_cadena PAR_DER 
    | ID PAR_IZQ PAR_DER 
    | ID PAR_IZQ lista_expresiones_o_cadena error {yyerror("Falta el paréntesis derecho"); yyerrok; }
    ;

 
sentencia_asignacion:
    ID OP_ASIGNACION expresion PYC
    | ID OP_ASIGNACION COR_IZQ lista_expresiones_o_cadena COR_DER PYC
    | ID OP_ASIGNACION error {yyerror("Error en la sentencia de asignación"); yyerrok; }
    ;

sentencia_if:
    IF PAR_IZQ expresion PAR_DER bloque sentencia_else_if
    | IF PAR_IZQ expresion bloque {yyerror("Falta el paréntesis derecho"); yyerrok; }
    ;

sentencia_else_if:
    ELSE IF PAR_IZQ expresion PAR_DER bloque sentencia_else_if
    | sentencia_else
    | ELSE IF PAR_IZQ expresion bloque {yyerror("Falta el paréntesis derecho"); yyerrok; }
    ;

sentencia_else:
    ELSE bloque
    | 
    ;


sentencia_while:
    WHILE PAR_IZQ lista_expresiones_o_cadena PAR_DER bloque
    | WHILE PAR_IZQ lista_expresiones_o_cadena bloque { yyerror("Falta el paréntesis derecho"); yyerrok; }
    ;

sentencia_entrada:
    INPUT PAR_IZQ lista_expresiones_o_cadena PAR_DER PYC
    | INPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS COMA lista_ID PAR_DER PYC
    | INPUT PAR_IZQ lista_expresiones_o_cadena PAR_DER { yyerror("Falta el punto y coma"); yyerrok; }
    | INPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS COMA lista_ID PAR_DER error { yyerror("Falta el punto y coma"); yyerrok; }
    | INPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS lista_ID PAR_DER PYC { yyerror("Falta la coma"); yyerrok; }
    | INPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena PAR_DER { yyerror("Falta el cierre de las comillas"); yyerrok; }
    ;

sentencia_salida:
    OUTPUT PAR_IZQ lista_expresiones_o_cadena PAR_DER PYC
    | OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS PAR_DER PYC
    | OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS COMA lista_ID PAR_DER PYC
    | OUTPUT PAR_IZQ lista_expresiones_o_cadena PAR_DER error { yyerror("Falta el punto y coma"); yyerrok; }
    | OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS PAR_DER error { yyerror("Falta el punto y coma"); yyerrok; }
    | OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena PAR_DER { yyerror("Falta el cierre de las comillas"); yyerrok; }
    | OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS COMA lista_ID PAR_DER error { yyerror("Falta el punto y coma"); yyerrok; }
    | OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS lista_ID PAR_DER PYC { yyerror("Falta la coma"); yyerrok; }
    ;

sentencia_return:
    RETURN expresion PYC
    | RETURN PYC
    ;

sentencia_repeat_until:
    REPEAT bloque UNTIL PAR_IZQ expresion PAR_DER PYC
    | REPEAT bloque UNTIL PAR_IZQ expresion PAR_DER error { yyerror("Falta el punto y coma"); yyerrok; }
    ;

sentencia_mover_lista:
    ID OP_LISTA PYC
    | ID OP_LISTA ID PYC
    ;

sentencia_comenzar_lista:
    OP_INIT_LISTA ID PYC
    | ID OP_INIT_LISTA expresion PYC
    ;

sentencia_lista_aniadir_en:
    ID OP_ACCESO expresion PYC
    | ID OP_ACCESO expresion OP_INCREMENT expresion PYC
    | ID OP_ACCESO expresion error { yyerror("Error con las listas al añadir"); yyerrok;} 
    ;

lista_expresiones_o_cadena:
    expresion
    | lista_expresiones_o_cadena COMA expresion
    ;

expresion:
    expresion_binaria
    | expresion_unaria
    | llamada_subprog
    | constante
    | ID
    | PAR_IZQ expresion PAR_DER
    | PAR_IZQ expresion error { yyerror("Error con la expresión"); yyerrok; }
    ;

expresion_binaria:
    expresion OP_SUM_RES expresion
    | expresion OP_MULT expresion
    | expresion MAYOR_QUE expresion
    | expresion MENOR_QUE expresion
    | expresion OP_LOGIC expresion
    | expresion OP_AND expresion
    | expresion OP_COMP expresion
    | expresion OP_ARIT expresion
    | expresion OP_DECREMENT expresion
    ;

expresion_unaria:
    OP_INCREMENT expresion
    | OP_DECREMENT expresion
    | OP_R expresion
    | OP_SUM_RES expresion
    | OP_MULT expresion
    | expresion OP_INCREMENT
    | expresion OP_DECREMENT
    ;

tipo_dato:
    TIPO_DATO
    | LISTA MENOR_QUE tipo_dato MAYOR_QUE
    ;

constante:
    NUMERO
    | NUMERO END_FLOAT
    | CADENA
    | BOOL_VALUE
    | LETRA
    ;

%%

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *archivo = fopen(argv[1], "r");
        if (!archivo) {
            printf("Error al abrir el archivo %s\n", argv[1]);
            return 1;
        }
        yyin = archivo;
    }
    yyparse();
    return 0;
}