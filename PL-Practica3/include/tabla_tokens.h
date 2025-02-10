#ifndef TABLA_TOKENS_H
#define TABLA_TOKENS_H

// Definición de los códigos de los tokens
#define INPUT 257
#define OUTPUT 258
#define REPEAT 259
#define UNTIL 260
#define PROGRAM 261
#define WHILE 262
#define IF 263
#define ELSE 264
#define RETURN 265
#define BOOL_VALUE 266
#define PYC 267
#define COMA 268
#define COMILLAS 269
#define PUNTO 270
#define OP_ASIGNACION 271
#define OP_LISTA 272
#define OP_DECREMNT 273
#define OP_INCREMNT 274
#define OP_ACCESO 275
#define OP1 276
#define OP2 277
#define OP3 278
#define PAR_IZQ 279
#define PAR_DER 280
#define LLAVE_IZQ 281
#define LLAVE_DER 282
#define COR_IZQ 283
#define COR_DER 284
#define TIPO_DATO 285
#define LISTA 286
#define END_FLOAT 287
#define ID 288
#define NUMERO = 289
#define LETRA = 290
#define CADENA = 291
#define COMENT = 292
#define MENOR_QUE = 293
#define MAYOR_QUE = 294

//Nuevos tokens revisar

// // Definición de la unión para almacenar los atributos de los tokens
// typedef union {
//     char *nombre;     // Para identificadores y cadenas
//     int valor;        // Para constantes numéricas y atributos como BOOL, OP1, TIPO_DATO, FORMATO
//     double fvalor;    // Para números con punto flotante
//     char operador;    // Para operadores individuales como '-', '!', '+'
// } YYSTYPE;

// extern YYSTYPE yylval;

#endif // TABLA_TOKENS_H
