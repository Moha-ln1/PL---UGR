/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_Y_TAB_H_INCLUDED
# define YY_YY_SRC_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    TIPO_DATO = 259,               /* TIPO_DATO  */
    NUMERO = 260,                  /* NUMERO  */
    CADENA = 261,                  /* CADENA  */
    BOOL_VALUE = 262,              /* BOOL_VALUE  */
    CONST_ENTERO = 263,            /* CONST_ENTERO  */
    CONST_CARACTER = 264,          /* CONST_CARACTER  */
    CONST_FLOAT = 265,             /* CONST_FLOAT  */
    LETRA = 266,                   /* LETRA  */
    LISTA = 267,                   /* LISTA  */
    INPUT = 268,                   /* INPUT  */
    OUTPUT = 269,                  /* OUTPUT  */
    PROGRAM = 270,                 /* PROGRAM  */
    IF = 271,                      /* IF  */
    RETURN = 272,                  /* RETURN  */
    WHILE = 273,                   /* WHILE  */
    REPEAT = 274,                  /* REPEAT  */
    UNTIL = 275,                   /* UNTIL  */
    PYC = 276,                     /* PYC  */
    COMA = 277,                    /* COMA  */
    PUNTO = 278,                   /* PUNTO  */
    COMILLAS = 279,                /* COMILLAS  */
    COMENT = 280,                  /* COMENT  */
    ELSE = 281,                    /* ELSE  */
    INI_VAR_LOCAL = 282,           /* INI_VAR_LOCAL  */
    FIN_VAR_LOCAL = 283,           /* FIN_VAR_LOCAL  */
    PAR_IZQ = 284,                 /* PAR_IZQ  */
    LLAVE_IZQ = 285,               /* LLAVE_IZQ  */
    COR_IZQ = 286,                 /* COR_IZQ  */
    MENOR_QUE = 287,               /* MENOR_QUE  */
    PAR_DER = 288,                 /* PAR_DER  */
    LLAVE_DER = 289,               /* LLAVE_DER  */
    COR_DER = 290,                 /* COR_DER  */
    MAYOR_QUE = 291,               /* MAYOR_QUE  */
    OP_SUM_RES = 292,              /* OP_SUM_RES  */
    OP_MULT = 293,                 /* OP_MULT  */
    OP_ASIGNACION = 294,           /* OP_ASIGNACION  */
    OP_ARIT = 295,                 /* OP_ARIT  */
    OP_COMP = 296,                 /* OP_COMP  */
    OP_LOGIC = 297,                /* OP_LOGIC  */
    OP_AND = 298,                  /* OP_AND  */
    OP_R = 299,                    /* OP_R  */
    OP_INIT_LISTA = 300,           /* OP_INIT_LISTA  */
    OP_INCREMENT = 301,            /* OP_INCREMENT  */
    OP_DECREMENT = 302,            /* OP_DECREMENT  */
    OP_LISTA = 303,                /* OP_LISTA  */
    OP_ACCESO = 304                /* OP_ACCESO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_Y_TAB_H_INCLUDED  */
