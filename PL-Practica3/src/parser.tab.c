/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

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

#line 88 "src/parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INPUT = 3,                      /* INPUT  */
  YYSYMBOL_OUTPUT = 4,                     /* OUTPUT  */
  YYSYMBOL_PROGRAM = 5,                    /* PROGRAM  */
  YYSYMBOL_ID = 6,                         /* ID  */
  YYSYMBOL_CADENA = 7,                     /* CADENA  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_REPEAT = 11,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 12,                     /* UNTIL  */
  YYSYMBOL_OP_ASIGNACION = 13,             /* OP_ASIGNACION  */
  YYSYMBOL_PYC = 14,                       /* PYC  */
  YYSYMBOL_COMA = 15,                      /* COMA  */
  YYSYMBOL_PUNTO = 16,                     /* PUNTO  */
  YYSYMBOL_COMILLAS = 17,                  /* COMILLAS  */
  YYSYMBOL_BOOL_VALUE = 18,                /* BOOL_VALUE  */
  YYSYMBOL_LETRA = 19,                     /* LETRA  */
  YYSYMBOL_NUMERO = 20,                    /* NUMERO  */
  YYSYMBOL_COMENT = 21,                    /* COMENT  */
  YYSYMBOL_END_FLOAT = 22,                 /* END_FLOAT  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_TIPO_DATO = 24,                 /* TIPO_DATO  */
  YYSYMBOL_LISTA = 25,                     /* LISTA  */
  YYSYMBOL_PAR_IZQ = 26,                   /* PAR_IZQ  */
  YYSYMBOL_LLAVE_IZQ = 27,                 /* LLAVE_IZQ  */
  YYSYMBOL_COR_IZQ = 28,                   /* COR_IZQ  */
  YYSYMBOL_MENOR_QUE = 29,                 /* MENOR_QUE  */
  YYSYMBOL_PAR_DER = 30,                   /* PAR_DER  */
  YYSYMBOL_LLAVE_DER = 31,                 /* LLAVE_DER  */
  YYSYMBOL_COR_DER = 32,                   /* COR_DER  */
  YYSYMBOL_MAYOR_QUE = 33,                 /* MAYOR_QUE  */
  YYSYMBOL_OP_SUM_RES = 34,                /* OP_SUM_RES  */
  YYSYMBOL_OP_MULT = 35,                   /* OP_MULT  */
  YYSYMBOL_OP_ARIT = 36,                   /* OP_ARIT  */
  YYSYMBOL_OP_COMP = 37,                   /* OP_COMP  */
  YYSYMBOL_OP_LOGIC = 38,                  /* OP_LOGIC  */
  YYSYMBOL_OP_AND = 39,                    /* OP_AND  */
  YYSYMBOL_OP_R = 40,                      /* OP_R  */
  YYSYMBOL_OP_INIT_LISTA = 41,             /* OP_INIT_LISTA  */
  YYSYMBOL_OP_INCREMENT = 42,              /* OP_INCREMENT  */
  YYSYMBOL_OP_DECREMENT = 43,              /* OP_DECREMENT  */
  YYSYMBOL_OP_LISTA = 44,                  /* OP_LISTA  */
  YYSYMBOL_OP_ACCESO = 45,                 /* OP_ACCESO  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_Programa = 47,                  /* Programa  */
  YYSYMBOL_bloque = 48,                    /* bloque  */
  YYSYMBOL_Declaracion = 49,               /* Declaracion  */
  YYSYMBOL_declarar_variable = 50,         /* declarar_variable  */
  YYSYMBOL_declarar_funcion = 51,          /* declarar_funcion  */
  YYSYMBOL_lista_ID = 52,                  /* lista_ID  */
  YYSYMBOL_Parametros = 53,                /* Parametros  */
  YYSYMBOL_Sentencias = 54,                /* Sentencias  */
  YYSYMBOL_Sentencia = 55,                 /* Sentencia  */
  YYSYMBOL_llamada_subprog = 56,           /* llamada_subprog  */
  YYSYMBOL_sentencia_asignacion = 57,      /* sentencia_asignacion  */
  YYSYMBOL_sentencia_if = 58,              /* sentencia_if  */
  YYSYMBOL_sentencia_else_if = 59,         /* sentencia_else_if  */
  YYSYMBOL_sentencia_else = 60,            /* sentencia_else  */
  YYSYMBOL_sentencia_while = 61,           /* sentencia_while  */
  YYSYMBOL_sentencia_entrada = 62,         /* sentencia_entrada  */
  YYSYMBOL_sentencia_salida = 63,          /* sentencia_salida  */
  YYSYMBOL_sentencia_return = 64,          /* sentencia_return  */
  YYSYMBOL_sentencia_repeat_until = 65,    /* sentencia_repeat_until  */
  YYSYMBOL_sentencia_mover_lista = 66,     /* sentencia_mover_lista  */
  YYSYMBOL_sentencia_comenzar_lista = 67,  /* sentencia_comenzar_lista  */
  YYSYMBOL_sentencia_lista_aniadir_en = 68, /* sentencia_lista_aniadir_en  */
  YYSYMBOL_lista_expresiones_o_cadena = 69, /* lista_expresiones_o_cadena  */
  YYSYMBOL_expresion = 70,                 /* expresion  */
  YYSYMBOL_expresion_binaria = 71,         /* expresion_binaria  */
  YYSYMBOL_expresion_unaria = 72,          /* expresion_unaria  */
  YYSYMBOL_tipo_dato = 73,                 /* tipo_dato  */
  YYSYMBOL_constante = 74                  /* constante  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   537

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    42,    46,    47,    48,    49,    50,    51,
      55,    56,    57,    58,    62,    63,    64,    65,    69,    70,
      74,    75,    76,    80,    81,    82,    83,    84,    85,    86,
      90,    91,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   109,   110,   111,   116,   117,   118,   122,
     123,   127,   128,   129,   133,   134,   139,   140,   144,   145,
     146,   147,   148,   149,   153,   154,   155,   156,   157,   158,
     159,   160,   164,   165,   169,   170,   174,   175,   179,   180,
     184,   185,   186,   190,   191,   195,   196,   197,   198,   199,
     200,   201,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   217,   218,   219,   220,   221,   222,   223,   227,   228,
     232,   233,   234,   235,   236
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INPUT", "OUTPUT",
  "PROGRAM", "ID", "CADENA", "IF", "RETURN", "WHILE", "REPEAT", "UNTIL",
  "OP_ASIGNACION", "PYC", "COMA", "PUNTO", "COMILLAS", "BOOL_VALUE",
  "LETRA", "NUMERO", "COMENT", "END_FLOAT", "ELSE", "TIPO_DATO", "LISTA",
  "PAR_IZQ", "LLAVE_IZQ", "COR_IZQ", "MENOR_QUE", "PAR_DER", "LLAVE_DER",
  "COR_DER", "MAYOR_QUE", "OP_SUM_RES", "OP_MULT", "OP_ARIT", "OP_COMP",
  "OP_LOGIC", "OP_AND", "OP_R", "OP_INIT_LISTA", "OP_INCREMENT",
  "OP_DECREMENT", "OP_LISTA", "OP_ACCESO", "$accept", "Programa", "bloque",
  "Declaracion", "declarar_variable", "declarar_funcion", "lista_ID",
  "Parametros", "Sentencias", "Sentencia", "llamada_subprog",
  "sentencia_asignacion", "sentencia_if", "sentencia_else_if",
  "sentencia_else", "sentencia_while", "sentencia_entrada",
  "sentencia_salida", "sentencia_return", "sentencia_repeat_until",
  "sentencia_mover_lista", "sentencia_comenzar_lista",
  "sentencia_lista_aniadir_en", "lista_expresiones_o_cadena", "expresion",
  "expresion_binaria", "expresion_unaria", "tipo_dato", "constante", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     144,    -8,    15,   101,   167,   -62,    -8,   -62,   149,    91,
     112,    92,   143,   263,   146,    -8,   -62,   150,   -62,   178,
     210,   -62,   -62,   221,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   184,   -62,   -62,   -62,   195,
     293,   323,   122,   367,   193,   367,   367,   169,   -62,   -62,
     -62,   -62,   190,   367,   367,   367,   367,   367,   367,   -62,
     384,   -62,   -62,   -62,   367,   214,    37,   209,   -62,   -62,
     -62,   255,   -62,    85,   -62,    41,   182,   -62,   227,   -62,
     236,   367,    33,   483,   367,   116,   -62,   367,   400,   411,
     219,   -62,    35,   444,   341,   -62,    46,   201,   211,   163,
     -62,   -62,   -62,   367,   367,   367,   367,   367,   367,   367,
     367,   -62,   371,     2,   231,   222,   -62,   -62,    89,   254,
     -62,    97,   -62,   -62,   -62,   -62,    36,   367,   259,   109,
     105,    -4,   -62,   -62,   -62,   -62,   -62,   371,    -8,   -62,
     -62,     9,   -62,   -62,   494,   494,   201,   211,   278,   229,
      69,   163,   -62,    -8,   -62,   367,   -62,   -62,   273,    -8,
     136,    14,    12,   -62,   483,   -62,     7,   -62,   -62,   -62,
     261,   427,   253,   -62,   -62,   -62,   472,   -62,   -62,    37,
      -8,   277,   -62,   271,   254,     8,   254,   179,    10,   -62,
     -62,    -1,   -62,   -62,   180,   279,   -62,   -62,   367,   129,
     274,   152,   -62,   -62,   276,   265,   -62,   -62,   -62,   280,
     483,   186,   -62,   188,   -62,   367,   367,   -62,   -62,   -62,
     -62,   461,   483,    -8,   -62,   253,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,     9,     0,
       0,    10,    11,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     0,     2,    20,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    89,   112,    73,
     113,   114,   110,     0,     0,     0,     0,     0,     0,    87,
       0,    85,    86,    88,     0,     0,     0,     0,     7,    12,
      13,     0,     8,     0,    30,    20,     0,    15,     0,    17,
       0,     0,     0,    83,     0,     0,    48,     0,     0,     0,
       0,    76,     0,     0,     0,   111,     0,   104,   105,   103,
     101,   102,    72,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,     0,     0,     0,    78,     4,     0,     0,
       5,     0,    16,    14,    22,    21,     0,     0,    60,     0,
       0,     0,    46,    79,    77,    82,    80,   106,     0,    50,
      44,     0,    91,    90,    95,    94,    92,    93,    99,    98,
      96,    97,   100,     0,    57,     0,   109,     6,     0,     0,
       0,     0,     0,    63,    84,    58,     0,    69,    67,    64,
       0,     0,    55,    45,    43,    56,     0,    27,    19,     0,
       0,     0,    29,    23,     0,     0,     0,     0,     0,    47,
      81,     0,    49,    52,     0,     0,    18,    28,     0,     0,
       0,     0,    68,    65,     0,     0,    54,    75,    74,    25,
      24,     0,    62,     0,    71,     0,     0,    61,    59,    70,
      66,     0,    26,     0,    53,    55,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,    -6,   -21,   -16,   -14,   -32,   -62,   267,   -15,
     -62,   257,   -62,    70,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -29,   -12,   -62,   -62,   -61,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     5,    20,    21,    22,    39,   160,    23,    24,
      59,    25,    26,   192,   193,    27,    28,    29,    30,    31,
      32,    33,    34,    82,    83,    61,    62,    35,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    60,    73,    76,    69,   115,    70,   205,    74,    65,
     173,   127,    85,    37,    78,   182,    78,   127,    37,     4,
     183,     6,   186,    80,   127,    80,     4,   184,   170,     4,
      88,    89,   153,    92,    93,   113,   135,   187,   200,   174,
     204,    96,    97,    98,    99,   100,   101,   142,   127,   136,
     118,   127,   126,   162,    42,   129,    74,    69,   131,    70,
     161,    16,    17,   128,   103,   141,   163,   121,   104,   105,
     106,   107,   108,   109,   110,   103,   143,   137,   112,   104,
     105,   106,   107,   108,   109,   110,   119,   139,   111,   112,
     119,   144,   145,   146,   147,   148,   149,   150,   151,   181,
     152,     7,    69,   158,    70,    42,   168,   154,   110,    16,
      17,   111,   112,    16,    17,   164,   120,    40,   195,   169,
     157,    16,    17,    86,   127,   171,   166,   159,    47,    48,
     185,   127,   172,    43,   188,    78,    44,    45,    41,   167,
      50,    51,    52,   176,    80,     1,   130,   175,    53,     2,
      87,   179,   199,   178,   201,    37,    54,    55,    78,   211,
      16,    17,    56,    38,    57,    58,   180,    80,     8,    46,
       9,    10,    64,    11,   196,    12,    13,    14,    15,    66,
     202,   207,   213,   122,    67,   206,   210,   217,    78,   219,
      75,    16,    17,   203,   208,    94,   123,    80,    18,    90,
     218,    78,   220,   221,   222,   111,   112,    91,    19,    79,
      80,     8,    95,     9,    10,   224,    11,   225,    12,    13,
      14,    15,     8,   116,     9,    10,   114,    11,   124,    12,
      13,    14,    15,   134,    16,    17,   106,   107,   108,   109,
     110,    68,   125,   111,   112,    16,    17,   107,   108,   109,
     110,    19,    72,   111,   112,   156,     8,   155,     9,    10,
      37,    11,    19,    12,    13,    14,    15,   109,   110,    47,
      48,   111,   112,   165,   177,   189,   191,    49,   197,    16,
      17,    50,    51,    52,   198,   209,   117,    71,   212,    53,
     214,   215,    77,   216,     0,   226,    19,    54,    55,    47,
      48,     0,     0,    56,     0,    57,    58,     0,     0,     0,
      81,    50,    51,    52,     0,   108,   109,   110,     0,    53,
     111,   112,     0,     0,     0,     0,     0,    54,    55,    47,
      48,     0,     0,    56,     0,    57,    58,     0,     0,     0,
      84,    50,    51,    52,     0,     0,     0,    47,    48,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    50,
      51,    52,     0,    56,     0,    57,    58,    53,     0,     0,
       0,   140,     0,    47,    48,    54,    55,    47,    48,     0,
       0,    56,     0,    57,    58,    50,    51,    52,     0,    50,
      51,    52,     0,    53,     0,     0,     0,    53,   102,     0,
       0,    54,    55,     0,     0,     0,     0,    56,     0,    57,
      58,    56,     0,   103,   132,     0,     0,   104,   105,   106,
     107,   108,   109,   110,     0,   133,   111,   112,     0,   103,
       0,     0,     0,   104,   105,   106,   107,   108,   109,   110,
     103,   190,   111,   112,   104,   105,   106,   107,   108,   109,
     110,     0,     0,   111,   112,     0,   103,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   110,     0,     0,   111,
     112,     4,     0,   103,   138,     0,     0,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112,     4,     0,
     103,   223,     0,     0,   104,   105,   106,   107,   108,   109,
     110,   103,   194,   111,   112,   104,   105,   106,   107,   108,
     109,   110,   103,     0,   111,   112,   104,   105,   106,   107,
     108,   109,   110,     0,     0,   111,   112,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   111,   112
};

static const yytype_int16 yycheck[] =
{
       6,    13,    23,    35,    20,    66,    20,     8,    23,    15,
       1,    15,    41,     6,     6,     1,     6,    15,     6,    27,
       6,     6,    15,    15,    15,    15,    27,    15,    32,    27,
      42,    43,    30,    45,    46,    64,     1,    30,    30,    30,
      30,    53,    54,    55,    56,    57,    58,     1,    15,    14,
      71,    15,    81,    17,    13,    84,    71,    73,    87,    73,
     121,    24,    25,    30,    29,    94,    30,    26,    33,    34,
      35,    36,    37,    38,    39,    29,    30,    42,    43,    33,
      34,    35,    36,    37,    38,    39,     1,    93,    42,    43,
       1,   103,   104,   105,   106,   107,   108,   109,   110,   160,
     112,     0,   118,     6,   118,    13,     1,   113,    39,    24,
      25,    42,    43,    24,    25,   127,    31,    26,   179,    14,
      31,    24,    25,     1,    15,   137,    17,    30,     6,     7,
     162,    15,   138,    41,   166,     6,    44,    45,    26,    30,
      18,    19,    20,   155,    15,     1,    30,   153,    26,     5,
      28,    15,   184,   159,   186,     6,    34,    35,     6,    30,
      24,    25,    40,    14,    42,    43,    30,    15,     1,    26,
       3,     4,    26,     6,   180,     8,     9,    10,    11,    29,
       1,     1,    30,     1,     6,   191,   198,     1,     6,     1,
       6,    24,    25,    14,    14,    26,    14,    15,    31,     6,
      14,     6,    14,   215,   216,    42,    43,    14,    41,    14,
      15,     1,    22,     3,     4,   221,     6,   223,     8,     9,
      10,    11,     1,    14,     3,     4,    12,     6,     1,     8,
       9,    10,    11,    14,    24,    25,    35,    36,    37,    38,
      39,    31,     6,    42,    43,    24,    25,    36,    37,    38,
      39,    41,    31,    42,    43,    33,     1,    26,     3,     4,
       6,     6,    41,     8,     9,    10,    11,    38,    39,     6,
       7,    42,    43,    14,     1,    14,    23,    14,     1,    24,
      25,    18,    19,    20,    13,     6,    31,    20,    14,    26,
      14,    26,    35,    13,    -1,   225,    41,    34,    35,     6,
       7,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    37,    38,    39,    -1,    26,
      42,    43,    -1,    -1,    -1,    -1,    -1,    34,    35,     6,
       7,    -1,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,     6,     7,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    18,
      19,    20,    -1,    40,    -1,    42,    43,    26,    -1,    -1,
      -1,    30,    -1,     6,     7,    34,    35,     6,     7,    -1,
      -1,    40,    -1,    42,    43,    18,    19,    20,    -1,    18,
      19,    20,    -1,    26,    -1,    -1,    -1,    26,    14,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    40,    -1,    29,    14,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,    14,    42,    43,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      29,    14,    42,    43,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    27,    -1,    29,    30,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43,    27,    -1,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    29,    30,    42,    43,    33,    34,    35,    36,    37,
      38,    39,    29,    -1,    42,    43,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    47,    27,    48,     6,     0,     1,     3,
       4,     6,     8,     9,    10,    11,    24,    25,    31,    41,
      49,    50,    51,    54,    55,    57,    58,    61,    62,    63,
      64,    65,    66,    67,    68,    73,    48,     6,    14,    52,
      26,    26,    13,    41,    44,    45,    26,     6,     7,    14,
      18,    19,    20,    26,    34,    35,    40,    42,    43,    56,
      70,    71,    72,    74,    26,    48,    29,     6,    31,    50,
      51,    54,    31,    49,    55,     6,    52,    57,     6,    14,
      15,    17,    69,    70,    17,    69,     1,    28,    70,    70,
       6,    14,    70,    70,    26,    22,    70,    70,    70,    70,
      70,    70,    14,    29,    33,    34,    35,    36,    37,    38,
      39,    42,    43,    69,    12,    73,    14,    31,    49,     1,
      31,    26,     1,    14,     1,     6,    69,    15,    30,    69,
      30,    69,    14,    14,    14,     1,    14,    42,    30,    48,
      30,    69,     1,    30,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    30,    48,    26,    33,    31,     6,    30,
      53,    73,    17,    30,    70,    14,    17,    30,     1,    14,
      32,    70,    48,     1,    30,    48,    70,     1,    48,    15,
      30,    73,     1,     6,    15,    52,    15,    30,    52,    14,
      14,    23,    59,    60,    30,    73,    48,     1,    13,    52,
      30,    52,     1,    14,    30,     8,    48,     1,    14,     6,
      70,    30,    14,    30,    14,    26,    13,     1,    14,     1,
      14,    70,    70,    30,    48,    48,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      49,    49,    49,    49,    50,    50,    50,    50,    51,    51,
      52,    52,    52,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    57,    57,    57,    58,
      58,    59,    59,    59,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     4,     4,     5,     3,     3,     2,
       1,     1,     2,     2,     3,     2,     3,     3,     6,     5,
       1,     3,     3,     2,     4,     4,     6,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     4,     4,     6,     3,     6,
       4,     7,     1,     5,     2,     0,     5,     4,     5,     9,
       4,     9,     8,     5,     5,     7,     9,     5,     7,     5,
       9,     8,     3,     2,     7,     7,     3,     4,     3,     4,
       4,     6,     4,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       1,     2,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* Programa: error bloque  */
#line 42 "src/parser.y"
                   { yyerror("Falta un punto y coma"); yyerrok; }
#line 1633 "src/parser.tab.c"
    break;

  case 16: /* declarar_variable: tipo_dato lista_ID error  */
#line 64 "src/parser.y"
                               { yyerror("Falta un punto y coma"); yyerrok; }
#line 1639 "src/parser.tab.c"
    break;

  case 17: /* declarar_variable: error lista_ID PYC  */
#line 65 "src/parser.y"
                         { yyerror("Falta un tipo de dato"); yyerrok; }
#line 1645 "src/parser.tab.c"
    break;

  case 22: /* lista_ID: lista_ID ID error  */
#line 76 "src/parser.y"
                        { yyerror("Falta una coma"); yyerrok; }
#line 1651 "src/parser.tab.c"
    break;

  case 27: /* Parametros: ID error  */
#line 84 "src/parser.y"
               { yyerror("Falta la declaración del tipo de dato"); yyerrok; }
#line 1657 "src/parser.tab.c"
    break;

  case 28: /* Parametros: Parametros tipo_dato error  */
#line 85 "src/parser.y"
                                 { yyerror("Falta la coma"); yyerrok; }
#line 1663 "src/parser.tab.c"
    break;

  case 29: /* Parametros: tipo_dato error  */
#line 86 "src/parser.y"
                      { yyerror("Falta el identificador"); yyerrok; }
#line 1669 "src/parser.tab.c"
    break;

  case 42: /* Sentencia: error PYC  */
#line 105 "src/parser.y"
                { yyerrok; }
#line 1675 "src/parser.tab.c"
    break;

  case 45: /* llamada_subprog: ID PAR_IZQ lista_expresiones_o_cadena error  */
#line 111 "src/parser.y"
                                                  {yyerror("Falta el paréntesis derecho"); yyerrok; }
#line 1681 "src/parser.tab.c"
    break;

  case 48: /* sentencia_asignacion: ID OP_ASIGNACION error  */
#line 118 "src/parser.y"
                             {yyerror("Error en la sentencia de asignación"); yyerrok; }
#line 1687 "src/parser.tab.c"
    break;

  case 50: /* sentencia_if: IF PAR_IZQ expresion bloque  */
#line 123 "src/parser.y"
                                  {yyerror("Falta el paréntesis derecho"); yyerrok; }
#line 1693 "src/parser.tab.c"
    break;

  case 53: /* sentencia_else_if: ELSE IF PAR_IZQ expresion bloque  */
#line 129 "src/parser.y"
                                       {yyerror("Falta el paréntesis derecho"); yyerrok; }
#line 1699 "src/parser.tab.c"
    break;

  case 57: /* sentencia_while: WHILE PAR_IZQ lista_expresiones_o_cadena bloque  */
#line 140 "src/parser.y"
                                                      { yyerror("Falta el paréntesis derecho"); yyerrok; }
#line 1705 "src/parser.tab.c"
    break;

  case 60: /* sentencia_entrada: INPUT PAR_IZQ lista_expresiones_o_cadena PAR_DER  */
#line 146 "src/parser.y"
                                                       { yyerror("Falta el punto y coma"); yyerrok; }
#line 1711 "src/parser.tab.c"
    break;

  case 61: /* sentencia_entrada: INPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS COMA lista_ID PAR_DER error  */
#line 147 "src/parser.y"
                                                                                             { yyerror("Falta el punto y coma"); yyerrok; }
#line 1717 "src/parser.tab.c"
    break;

  case 62: /* sentencia_entrada: INPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS lista_ID PAR_DER PYC  */
#line 148 "src/parser.y"
                                                                                      { yyerror("Falta la coma"); yyerrok; }
#line 1723 "src/parser.tab.c"
    break;

  case 63: /* sentencia_entrada: INPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena PAR_DER  */
#line 149 "src/parser.y"
                                                                { yyerror("Falta el cierre de las comillas"); yyerrok; }
#line 1729 "src/parser.tab.c"
    break;

  case 67: /* sentencia_salida: OUTPUT PAR_IZQ lista_expresiones_o_cadena PAR_DER error  */
#line 156 "src/parser.y"
                                                              { yyerror("Falta el punto y coma"); yyerrok; }
#line 1735 "src/parser.tab.c"
    break;

  case 68: /* sentencia_salida: OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS PAR_DER error  */
#line 157 "src/parser.y"
                                                                                { yyerror("Falta el punto y coma"); yyerrok; }
#line 1741 "src/parser.tab.c"
    break;

  case 69: /* sentencia_salida: OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena PAR_DER  */
#line 158 "src/parser.y"
                                                                 { yyerror("Falta el cierre de las comillas"); yyerrok; }
#line 1747 "src/parser.tab.c"
    break;

  case 70: /* sentencia_salida: OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS COMA lista_ID PAR_DER error  */
#line 159 "src/parser.y"
                                                                                              { yyerror("Falta el punto y coma"); yyerrok; }
#line 1753 "src/parser.tab.c"
    break;

  case 71: /* sentencia_salida: OUTPUT PAR_IZQ COMILLAS lista_expresiones_o_cadena COMILLAS lista_ID PAR_DER PYC  */
#line 160 "src/parser.y"
                                                                                       { yyerror("Falta la coma"); yyerrok; }
#line 1759 "src/parser.tab.c"
    break;

  case 75: /* sentencia_repeat_until: REPEAT bloque UNTIL PAR_IZQ expresion PAR_DER error  */
#line 170 "src/parser.y"
                                                          { yyerror("Falta el punto y coma"); yyerrok; }
#line 1765 "src/parser.tab.c"
    break;

  case 82: /* sentencia_lista_aniadir_en: ID OP_ACCESO expresion error  */
#line 186 "src/parser.y"
                                   { yyerror("Error con las listas al añadir"); yyerrok;}
#line 1771 "src/parser.tab.c"
    break;

  case 91: /* expresion: PAR_IZQ expresion error  */
#line 201 "src/parser.y"
                              { yyerror("Error con la expresión"); yyerrok; }
#line 1777 "src/parser.tab.c"
    break;


#line 1781 "src/parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 239 "src/parser.y"


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
