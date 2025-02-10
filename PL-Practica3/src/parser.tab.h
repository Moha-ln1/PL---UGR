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

#ifndef YY_YY_SRC_PARSER_TAB_H_INCLUDED
# define YY_YY_SRC_PARSER_TAB_H_INCLUDED
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
    INPUT = 258,                   /* INPUT  */
    OUTPUT = 259,                  /* OUTPUT  */
    PROGRAM = 260,                 /* PROGRAM  */
    ID = 261,                      /* ID  */
    CADENA = 262,                  /* CADENA  */
    IF = 263,                      /* IF  */
    RETURN = 264,                  /* RETURN  */
    WHILE = 265,                   /* WHILE  */
    REPEAT = 266,                  /* REPEAT  */
    UNTIL = 267,                   /* UNTIL  */
    OP_ASIGNACION = 268,           /* OP_ASIGNACION  */
    PYC = 269,                     /* PYC  */
    COMA = 270,                    /* COMA  */
    PUNTO = 271,                   /* PUNTO  */
    COMILLAS = 272,                /* COMILLAS  */
    BOOL_VALUE = 273,              /* BOOL_VALUE  */
    LETRA = 274,                   /* LETRA  */
    NUMERO = 275,                  /* NUMERO  */
    COMENT = 276,                  /* COMENT  */
    END_FLOAT = 277,               /* END_FLOAT  */
    ELSE = 278,                    /* ELSE  */
    TIPO_DATO = 279,               /* TIPO_DATO  */
    LISTA = 280,                   /* LISTA  */
    PAR_IZQ = 281,                 /* PAR_IZQ  */
    LLAVE_IZQ = 282,               /* LLAVE_IZQ  */
    COR_IZQ = 283,                 /* COR_IZQ  */
    MENOR_QUE = 284,               /* MENOR_QUE  */
    PAR_DER = 285,                 /* PAR_DER  */
    LLAVE_DER = 286,               /* LLAVE_DER  */
    COR_DER = 287,                 /* COR_DER  */
    MAYOR_QUE = 288,               /* MAYOR_QUE  */
    OP_SUM_RES = 289,              /* OP_SUM_RES  */
    OP_MULT = 290,                 /* OP_MULT  */
    OP_ARIT = 291,                 /* OP_ARIT  */
    OP_COMP = 292,                 /* OP_COMP  */
    OP_LOGIC = 293,                /* OP_LOGIC  */
    OP_AND = 294,                  /* OP_AND  */
    OP_R = 295,                    /* OP_R  */
    OP_INIT_LISTA = 296,           /* OP_INIT_LISTA  */
    OP_INCREMENT = 297,            /* OP_INCREMENT  */
    OP_DECREMENT = 298,            /* OP_DECREMENT  */
    OP_LISTA = 299,                /* OP_LISTA  */
    OP_ACCESO = 300                /* OP_ACCESO  */
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


#endif /* !YY_YY_SRC_PARSER_TAB_H_INCLUDED  */
