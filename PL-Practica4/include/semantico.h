// semantic.h
#ifndef SEMANTIC_H
#define SEMANTIC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TS 500
#define MAX_ARGS 50

// Tipo de entradas de la tabla
typedef enum {
    MARCA,
    FUNCION,
    VARIABLE,
    PARAMETRO
} tipoEntrada;

// Tipo de datos
typedef enum {
    na = -1,
    entero,
    real,
    caracter,
    booleano,
    error // Si da un error con expresiones
} dtipo;

// Estructura de la tabla de símbolos
typedef struct {
    tipoEntrada in;
    char* lex;
    dtipo tipo;
    int nParam;
    unsigned int nDim;	// Número de dimensiones (0: variable, 1: lista)
    unsigned int dim1;	// > 1 si nDim != 0
} entradaTS;



extern entradaTS TablaSimbolos[MAX_TS];
extern long int TOPE;
extern dtipo tipoGlobal;
extern int Subprog;

typedef struct {
    int identificador;
    char *lex;	// String que la simboliza
    dtipo tipo;	// Tipo de dato
    int nParam;	// Número de parámetros en caso de ser función
    unsigned int nDim;	// Número de dimensiones (0: variable, 1: lista)
    unsigned int dim1;	// > 1 si nDim != 0
} atributo;

#define YYSTYPE atributo

extern dtipo argumentos_tipo_datos[MAX_ARGS];
extern int n_argumentos;

// linea actual (servirá para mostrar errores de una linea o hacer alguna indicación sobre esa linea analizada)
extern unsigned int linea;

// VARIABLES PARA INDICAR EL INICIO O FIN DE UNA ESTRUCTURA (BLOQUE, funcion, DECLARACIÓN DE VARIABLES, ETC)

// (0) indica que a la izquierda se ha creado un bloque, (1) indica que a la izquierda hay una cabecera de una funcion (subprog)
extern int funcion;

// Debe tomar valor 0 cuando el identificador no debe estar en la tabla de símbolos (declaración de esa variable)
// Debe tomar valor 1 cuando hay que buscar en la tabla de símbolos (uso de la variable)
extern int varLocal;

// (0) indica el inicio de la declaracion de parametros (0), (1) indica el fin de la declaración de parametros
extern int initParametros;

// nParam como global para ir calculando los parametros que esta recibiendo una funcion
// a esta variable se le hará el nParam++ (es un contador)
extern unsigned int nParam;
extern unsigned int nExpresion;

// Sirve para controlar la funcion que se está analizando en este momento
extern int funcionActual;

// Tipo de una variable
extern dtipo tipo;

void getIdentificador(atributo ident, atributo* padre);
void comprobarParametro(atributo param);
void comprobarTipoDevuelto(atributo expresion, atributo* devuelto);

void comprobarUnario(atributo expr, atributo* padre);
void comprobarBinario(atributo expr1, atributo expr2, atributo* padre);
void comprobarOpLogico(atributo expr1, atributo expr2, atributo* padre);
void comprobarIgualdad(atributo expr1, atributo expr2, atributo* padre);
void comprobarRelacion(atributo expr1, atributo expr2, atributo* padre);

void expresionBooleana(dtipo tipo);

// funcionES PARA GESTIONAR LA TABLA DE SIMBOLOS
void printTabla();
int buscarIdentificador(atributo e);
void addIdentificador(atributo ident);
void addEntrada(entradaTS in);
void eliminarEntradas();

void addMarca();
void addFuncion(atributo f);
void setNParam(atributo p);
void addParametro(atributo param);
void comprobarFuncion(atributo func, atributo* padre);

void comprobarAsignacion(atributo ident, atributo expr);
char* tipoAString(dtipo tipo_dato);
char* tipoEntradaString(tipoEntrada tipo_entrada);
void setTipo(atributo valor);
int esTipoValido(dtipo tipo);
void comprobarLista(atributo ident);

#endif // SEMANTIC_H