#ifndef TABLA_TOKENS_H
#define TABLA_TOKENS_H

// Definición de los códigos de los tokens
#define	ID	258
#define	NUMERO	259
#define	LETRA	260
#define	CADENA	261
#define	OP_SUM_RES	262
#define	OP_LOGIC	263
#define	OP_COMP	264
#define	OP_ARIT	265
#define	BOOL_VALUE	266
#define	MENOR_QUE	267
#define	MAYOR_QUE	268
#define	TIPO_DATO	269
#define	INPUT	270
#define	OUTPUT	271
#define	PROGRAM	272
#define	IF	273
#define	RETURN	274
#define	LISTA	275
#define	WHILE	276
#define	REPEAT	277
#define	UNTIL	278
#define	OP_ASIGNACION	279
#define	PYC	280
#define	COMA	281
#define	PUNTO	282
#define	COMILLAS	283
#define	COMENT	284
#define	END_FLOAT	285
#define	ELSE	286
#define	PAR_IZQ	287
#define	LLAVE_IZQ	288
#define	COR_IZQ	289
#define	PAR_DER	290
#define	LLAVE_DER	291
#define	COR_DER	292
#define	OP_MULT	293
#define	OP_AND	294
#define	OP_R	295
#define	OP_INIT_LISTA	296
#define	OP_INCREMENT	297
#define	OP_DECREMENT	298
#define	OP_LISTA	299
#define	OP_ACCESO	300
#define INI_VAR_LOCAL = 301
#define FIN_VAR_LOCAL = 302

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
