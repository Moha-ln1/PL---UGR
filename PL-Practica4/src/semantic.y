
%{
#include "../include/semantico.h"

void yyerror(const char *s);
int yylex();

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
    PROGRAM identificador bloque 
    ;

bloque:
    LLAVE_IZQ {addMarca(); } declarar_variables declarar_funciones Sentencias LLAVE_DER {/*printTabla();*/ eliminarEntradas();}
    ;



declarar_funciones: declarar_funciones declarar_funcion
|
;

declarar_funcion:
     cabecera_funcion { funcion = 1; } bloque { funcion = 0; }
    ;

cabecera_funcion:
    TIPO_DATO { initParametros = 0; } identificador { setTipo(($1)); addFuncion($3); } PAR_IZQ { varLocal = 1; initParametros = 0; } Parametros { setNParam($7); nParam = 0; initParametros = 1; } PAR_DER
    | error
    ;

declarar_variables : INI_VAR_LOCAL { varLocal = 0; } Variables_locales { varLocal = 1; } FIN_VAR_LOCAL
|
;

Variables_locales : Variables_locales Cuerpo_declar_variables
                    | Cuerpo_declar_variables
;


Cuerpo_declar_variables : TIPO_DATO { setTipo($1); } lista_ID PYC // Si estaba al principio, lo tomaba como una derivación y aparecían conflictos r/r
                 | LISTA MENOR_QUE TIPO_DATO MAYOR_QUE { setTipo($3);} ID OP_ASIGNACION const_lista {
                    /*Si este valor está a 0, quiere decir que se esta declarando variables*/
                     if (varLocal == 0){
                            $6.nDim = 1;
                            $6.dim1 = $8.dim1;
                            
                            addIdentificador($6);
                     }else{
                            /*Estamos cogiendo un parametro y debe existir*/
                            getIdentificador($6, &$$);
                            
                     }
                    } PYC
                 | TIPO_DATO error { yyerror("Error tras el tipo de dato\n"); }
                 | error 
;

Parametros:
    Parametros COMA parametro 
    | parametro
    | Parametros error parametro
;

parametro: 
    TIPO_DATO identificador { nParam++; setTipo($1); addParametro($2); }
    ;


Sentencias:
    Sentencias { varLocal = 1; } Sentencia
    | {varLocal = 1; } Sentencia
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
    }
;


sentencia_if:
    IF expresion bloque sentencia_else_if {expresionBooleana($2.tipo);}
;

sentencia_else_if:
    ELSE IF expresion bloque sentencia_else_if {expresionBooleana($3.tipo);}
    | sentencia_else
    ;

sentencia_else:
    ELSE bloque
    | 
    ;


sentencia_while:
    WHILE expresion Sentencia { expresionBooleana($2.tipo); }
;

sentencia_entrada:
    INPUT lista_ID 
;

sentencia_salida:
    OUTPUT lista_expresiones_o_cadena
;


sentencia_return:
    RETURN expresion { comprobarTipoDevuelto($2, &$$); }
;

sentencia_repeat_until:
    REPEAT Sentencia UNTIL expresion { expresionBooleana($4.tipo); }
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

lista_expresion : lista_expresion COMA expresion {  nExpresion++; comprobarParametro($3); $$.dim1 = $1.dim1 + $3.dim1;}
                | expresion {  nExpresion++; comprobarParametro($1); }
                | lista_expresion error expresion
                ;

expresion:
    expresion_binaria
    | expresion_unaria
    | llamada_subprog { $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;}
    | constante  { $$.tipo = $1.tipo; $$.nDim = $1.nDim; $$.dim1 = $1.dim1;}
    | identificador
    | PAR_IZQ expresion PAR_DER {char auxExpr[100];
                                strcpy(auxExpr, ""); 
                                strcat(auxExpr, $1.lex);
                                strcat(auxExpr, $2.lex);                                        
                                strcat(auxExpr, $3.lex); 
                                strcpy($$.lex, auxExpr);
                                $$.tipo = $2.tipo;}
    | error
    ;

lista_expresiones_o_cadena:
    lista_expresiones_o_cadena COMA exp_cadena {nParam++;}
    | exp_cadena { nParam = 1;  }
    | lista_expresiones_o_cadena error exp_cadena {yyerror("Falta la coma"); yyerrok;}
    ;

exp_cadena : expresion
                | CADENA
;

lista_ID:
    identificador 
    | lista_ID COMA identificador
    | lista_ID error ID
;

expresion_binaria:
    expresion OP_SUM_RES expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarBinario($1, $3, &$$); }

    | expresion OP_MULT expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarBinario($1, $3, &$$); }

    | expresion MAYOR_QUE expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarRelacion($1, $3, &$$); }

    | expresion MENOR_QUE expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarRelacion($1, $3, &$$); }

    | expresion OP_LOGIC expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarOpLogico($1, $3, &$$); }

    | expresion OP_AND expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarOpLogico($1, $3, &$$); }

    | expresion OP_COMP expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarOpLogico($1, $3, &$$); }

    | expresion OP_ARIT expresion {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, $1.lex);
                                    strcat(auxExpr, $2.lex);
                                    strcat(auxExpr, $3.lex);
                                    strcpy($$.lex, auxExpr);
                                    $$.tipo = $1.tipo;
                                    comprobarBinario($1, $3, &$$); }
;

expresion_unaria:
    OP_INCREMENT expresion { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, $1.lex);
                            strcat(auxExpr, $2.lex);
                            strcpy($$.lex, auxExpr);
                            comprobarUnario($2, &$$); }

    | OP_DECREMENT expresion { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, $1.lex);
                            strcat(auxExpr, $2.lex);
                            strcpy($$.lex, auxExpr);
                            comprobarUnario($2, &$$); }

    | OP_R expresion { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, $1.lex);
                            strcat(auxExpr, $2.lex);
                            strcpy($$.lex, auxExpr);
                            comprobarUnario($2, &$$); }

    | OP_SUM_RES expresion { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, $1.lex);
                            strcat(auxExpr, $2.lex);
                            strcpy($$.lex, auxExpr);
                            comprobarUnario($2, &$$); }

    | OP_MULT expresion { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, $1.lex);
                            strcat(auxExpr, $2.lex);
                            strcpy($$.lex, auxExpr);
                            comprobarUnario($2, &$$); }

    | expresion OP_INCREMENT { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, $1.lex);
                            strcat(auxExpr, $2.lex);
                            strcpy($$.lex, auxExpr);
                            comprobarUnario($1, &$$); }

    | expresion OP_DECREMENT { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, $1.lex);
                            strcat(auxExpr, $2.lex);
                            strcpy($$.lex, auxExpr);
                            comprobarUnario($1, &$$); }
;

// Para no repetir codigo
identificador : ID {
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
    identificador PAR_IZQ  { nExpresion = 0; funcionActual = buscarIdentificador($1); } lista_expresion PAR_DER { comprobarFuncion($1, &$$); }
;

%%

#include "lex.yy.c"

// Se debe implementar la función yyerror. En este caso simplemente escribimos
// el mensaje de error en pantalla
void yyerror(const char *msg ){
	fprintf(stderr, "Línea %d: %s\n", yylineno, msg);
}