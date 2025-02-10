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
#line 2 "src/semantic.y"

#include "../include/semantico.h"

void yyerror(const char *s);
int yylex();

#define YYERROR_VERBOSE

#line 80 "src/y.tab.c"

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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_TIPO_DATO = 4,                  /* TIPO_DATO  */
  YYSYMBOL_NUMERO = 5,                     /* NUMERO  */
  YYSYMBOL_CADENA = 6,                     /* CADENA  */
  YYSYMBOL_BOOL_VALUE = 7,                 /* BOOL_VALUE  */
  YYSYMBOL_CONST_ENTERO = 8,               /* CONST_ENTERO  */
  YYSYMBOL_CONST_CARACTER = 9,             /* CONST_CARACTER  */
  YYSYMBOL_CONST_FLOAT = 10,               /* CONST_FLOAT  */
  YYSYMBOL_LETRA = 11,                     /* LETRA  */
  YYSYMBOL_LISTA = 12,                     /* LISTA  */
  YYSYMBOL_INPUT = 13,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 14,                    /* OUTPUT  */
  YYSYMBOL_PROGRAM = 15,                   /* PROGRAM  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_REPEAT = 19,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 20,                     /* UNTIL  */
  YYSYMBOL_PYC = 21,                       /* PYC  */
  YYSYMBOL_COMA = 22,                      /* COMA  */
  YYSYMBOL_PUNTO = 23,                     /* PUNTO  */
  YYSYMBOL_COMILLAS = 24,                  /* COMILLAS  */
  YYSYMBOL_COMENT = 25,                    /* COMENT  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_INI_VAR_LOCAL = 27,             /* INI_VAR_LOCAL  */
  YYSYMBOL_FIN_VAR_LOCAL = 28,             /* FIN_VAR_LOCAL  */
  YYSYMBOL_PAR_IZQ = 29,                   /* PAR_IZQ  */
  YYSYMBOL_LLAVE_IZQ = 30,                 /* LLAVE_IZQ  */
  YYSYMBOL_COR_IZQ = 31,                   /* COR_IZQ  */
  YYSYMBOL_MENOR_QUE = 32,                 /* MENOR_QUE  */
  YYSYMBOL_PAR_DER = 33,                   /* PAR_DER  */
  YYSYMBOL_LLAVE_DER = 34,                 /* LLAVE_DER  */
  YYSYMBOL_COR_DER = 35,                   /* COR_DER  */
  YYSYMBOL_MAYOR_QUE = 36,                 /* MAYOR_QUE  */
  YYSYMBOL_OP_SUM_RES = 37,                /* OP_SUM_RES  */
  YYSYMBOL_OP_MULT = 38,                   /* OP_MULT  */
  YYSYMBOL_OP_ASIGNACION = 39,             /* OP_ASIGNACION  */
  YYSYMBOL_OP_ARIT = 40,                   /* OP_ARIT  */
  YYSYMBOL_OP_COMP = 41,                   /* OP_COMP  */
  YYSYMBOL_OP_LOGIC = 42,                  /* OP_LOGIC  */
  YYSYMBOL_OP_AND = 43,                    /* OP_AND  */
  YYSYMBOL_OP_R = 44,                      /* OP_R  */
  YYSYMBOL_OP_INIT_LISTA = 45,             /* OP_INIT_LISTA  */
  YYSYMBOL_OP_INCREMENT = 46,              /* OP_INCREMENT  */
  YYSYMBOL_OP_DECREMENT = 47,              /* OP_DECREMENT  */
  YYSYMBOL_OP_LISTA = 48,                  /* OP_LISTA  */
  YYSYMBOL_OP_ACCESO = 49,                 /* OP_ACCESO  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_Programa = 51,                  /* Programa  */
  YYSYMBOL_bloque = 52,                    /* bloque  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_declarar_funciones = 54,        /* declarar_funciones  */
  YYSYMBOL_declarar_funcion = 55,          /* declarar_funcion  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_cabecera_funcion = 57,          /* cabecera_funcion  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_59_4 = 59,                      /* $@4  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_61_6 = 61,                      /* $@6  */
  YYSYMBOL_declarar_variables = 62,        /* declarar_variables  */
  YYSYMBOL_63_7 = 63,                      /* $@7  */
  YYSYMBOL_64_8 = 64,                      /* $@8  */
  YYSYMBOL_Variables_locales = 65,         /* Variables_locales  */
  YYSYMBOL_Cuerpo_declar_variables = 66,   /* Cuerpo_declar_variables  */
  YYSYMBOL_67_9 = 67,                      /* $@9  */
  YYSYMBOL_68_10 = 68,                     /* $@10  */
  YYSYMBOL_69_11 = 69,                     /* @11  */
  YYSYMBOL_Parametros = 70,                /* Parametros  */
  YYSYMBOL_parametro = 71,                 /* parametro  */
  YYSYMBOL_Sentencias = 72,                /* Sentencias  */
  YYSYMBOL_73_12 = 73,                     /* $@12  */
  YYSYMBOL_74_13 = 74,                     /* $@13  */
  YYSYMBOL_Sentencia = 75,                 /* Sentencia  */
  YYSYMBOL_sentencia_asignacion = 76,      /* sentencia_asignacion  */
  YYSYMBOL_sentencia_if = 77,              /* sentencia_if  */
  YYSYMBOL_sentencia_else_if = 78,         /* sentencia_else_if  */
  YYSYMBOL_sentencia_else = 79,            /* sentencia_else  */
  YYSYMBOL_sentencia_while = 80,           /* sentencia_while  */
  YYSYMBOL_sentencia_entrada = 81,         /* sentencia_entrada  */
  YYSYMBOL_sentencia_salida = 82,          /* sentencia_salida  */
  YYSYMBOL_sentencia_return = 83,          /* sentencia_return  */
  YYSYMBOL_sentencia_repeat_until = 84,    /* sentencia_repeat_until  */
  YYSYMBOL_sentencia_mover_lista = 85,     /* sentencia_mover_lista  */
  YYSYMBOL_sentencia_comenzar_lista = 86,  /* sentencia_comenzar_lista  */
  YYSYMBOL_sentencia_lista_aniadir_en = 87, /* sentencia_lista_aniadir_en  */
  YYSYMBOL_lista_expresion = 88,           /* lista_expresion  */
  YYSYMBOL_expresion = 89,                 /* expresion  */
  YYSYMBOL_lista_expresiones_o_cadena = 90, /* lista_expresiones_o_cadena  */
  YYSYMBOL_exp_cadena = 91,                /* exp_cadena  */
  YYSYMBOL_lista_ID = 92,                  /* lista_ID  */
  YYSYMBOL_expresion_binaria = 93,         /* expresion_binaria  */
  YYSYMBOL_expresion_unaria = 94,          /* expresion_unaria  */
  YYSYMBOL_identificador = 95,             /* identificador  */
  YYSYMBOL_constante = 96,                 /* constante  */
  YYSYMBOL_const_lista = 97,               /* const_lista  */
  YYSYMBOL_llamada_subprog = 98,           /* llamada_subprog  */
  YYSYMBOL_99_14 = 99                      /* $@14  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    40,    40,    45,    46,    50,    50,    54,
      54,    54,    54,    54,    55,    58,    58,    58,    59,    62,
      63,    67,    67,    68,    68,    68,    81,    82,    86,    87,
      88,    92,    97,    97,    98,    98,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   117,   129,   133,
     134,   138,   139,   144,   148,   152,   157,   161,   165,   166,
     170,   171,   175,   176,   179,   180,   181,   185,   186,   187,
     188,   189,   190,   197,   201,   202,   203,   206,   207,   211,
     212,   213,   217,   226,   235,   244,   253,   262,   271,   280,
     291,   298,   305,   312,   319,   326,   333,   342,   361,   362,
     363,   364,   365,   368,   372,   372
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "TIPO_DATO",
  "NUMERO", "CADENA", "BOOL_VALUE", "CONST_ENTERO", "CONST_CARACTER",
  "CONST_FLOAT", "LETRA", "LISTA", "INPUT", "OUTPUT", "PROGRAM", "IF",
  "RETURN", "WHILE", "REPEAT", "UNTIL", "PYC", "COMA", "PUNTO", "COMILLAS",
  "COMENT", "ELSE", "INI_VAR_LOCAL", "FIN_VAR_LOCAL", "PAR_IZQ",
  "LLAVE_IZQ", "COR_IZQ", "MENOR_QUE", "PAR_DER", "LLAVE_DER", "COR_DER",
  "MAYOR_QUE", "OP_SUM_RES", "OP_MULT", "OP_ASIGNACION", "OP_ARIT",
  "OP_COMP", "OP_LOGIC", "OP_AND", "OP_R", "OP_INIT_LISTA", "OP_INCREMENT",
  "OP_DECREMENT", "OP_LISTA", "OP_ACCESO", "$accept", "Programa", "bloque",
  "$@1", "declarar_funciones", "declarar_funcion", "$@2",
  "cabecera_funcion", "$@3", "$@4", "$@5", "$@6", "declarar_variables",
  "$@7", "$@8", "Variables_locales", "Cuerpo_declar_variables", "$@9",
  "$@10", "@11", "Parametros", "parametro", "Sentencias", "$@12", "$@13",
  "Sentencia", "sentencia_asignacion", "sentencia_if", "sentencia_else_if",
  "sentencia_else", "sentencia_while", "sentencia_entrada",
  "sentencia_salida", "sentencia_return", "sentencia_repeat_until",
  "sentencia_mover_lista", "sentencia_comenzar_lista",
  "sentencia_lista_aniadir_en", "lista_expresion", "expresion",
  "lista_expresiones_o_cadena", "exp_cadena", "lista_ID",
  "expresion_binaria", "expresion_unaria", "identificador", "constante",
  "const_lista", "llamada_subprog", "$@14", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    14,    65,  -115,    26,  -115,  -115,  -115,    43,  -115,
    -115,     7,   248,  -115,    19,    51,     1,  -115,  -115,  -115,
    -115,  -115,    50,   210,  -115,    14,   100,    78,  -115,    14,
      26,  -115,   210,    14,   165,    29,    29,    29,   210,    14,
    -115,  -115,    86,  -115,  -115,    89,    90,    96,  -115,  -115,
    -115,  -115,    60,    42,  -115,    77,  -115,  -115,  -115,  -115,
      56,  -115,  -115,  -115,  -115,  -115,  -115,    29,    29,    29,
      29,    29,    29,    29,   304,    59,  -115,  -115,  -115,    94,
    -115,  -115,  -115,   280,   304,   201,   109,   116,  -115,  -115,
    -115,  -115,    29,    29,     3,    29,   141,  -115,    14,  -115,
     121,   292,    11,   304,    84,   249,   -37,   -37,   -37,    29,
      29,    29,    29,    29,    29,    29,    29,  -115,  -115,   165,
     165,  -115,   119,  -115,    29,  -115,   304,   144,  -115,   135,
     239,  -115,  -115,   156,  -115,  -115,    29,    29,  -115,   316,
     316,    84,   249,    92,    55,    39,   -37,  -115,  -115,    29,
     -12,  -115,  -115,   304,  -115,  -115,  -115,   111,   122,   158,
     304,   304,    20,    29,  -115,   262,   130,    14,    22,  -115,
    -115,   280,  -115,  -115,  -115,   158,   158,   131,   119,   142,
    -115,  -115,  -115,  -115,  -115
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    97,     0,     1,     3,     2,    18,    15,
       6,     0,     0,    27,     0,     0,     0,    20,    14,     9,
       5,     7,    32,     0,    26,     0,     0,     0,    19,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    35,     0,    38,    39,     0,     0,     0,    43,    44,
      45,    46,     0,     0,    79,     0,    17,    10,     8,    33,
       0,    73,    78,   100,    98,   101,    99,     0,     0,     0,
       0,     0,     0,     0,    77,     0,    75,    67,    68,    71,
      70,   102,    69,     0,    56,     0,     0,     0,    37,    40,
      41,    42,     0,     0,     0,     0,     0,    22,     0,    23,
       0,     0,     0,    65,    93,    94,    92,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,     0,
       0,   104,    52,    53,     0,    60,    47,     0,    58,     0,
       0,    81,    80,     0,    11,    72,     0,     0,   103,    85,
      84,    82,    83,    89,    88,    86,    87,    76,    74,     0,
       0,    48,    50,    57,    61,    59,    62,     0,     0,     0,
      66,    64,     0,     0,    51,     0,     0,     0,     0,    29,
     105,     0,    63,    24,    31,     0,     0,     0,    52,     0,
      30,    28,    13,    49,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,    -4,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,   154,  -115,  -115,  -115,
    -115,  -114,  -115,  -115,  -115,   -31,  -115,  -115,    -1,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,    30,   -21,
    -115,   -51,   145,  -115,  -115,     2,  -115,    17,  -115,  -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    40,     8,    12,    20,    30,    21,    29,   100,
     159,   177,    10,    11,    27,    16,    17,    25,   133,   179,
     168,   169,    22,    32,    23,    41,    42,    43,   151,   152,
      44,    45,    46,    47,    48,    49,    50,    51,   102,    74,
      75,    76,    53,    77,    78,    79,    80,    81,    82,   149
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    59,    13,     4,   163,    14,     3,    86,    13,   117,
     118,    14,   136,    15,    83,    84,    85,     3,     6,    15,
      24,   136,   -21,   175,   128,    52,    58,    54,     1,   -16,
      61,    57,     3,   137,    52,    54,    63,    64,    65,    66,
      52,    87,   137,    96,   176,   138,   101,   103,   104,   105,
     106,   107,   108,   170,   123,   -12,     6,    96,    67,    68,
     119,   180,   181,    97,    98,     5,    69,    70,   147,   148,
       9,   126,   127,    71,   130,    72,    73,   -54,    98,   122,
     -55,   120,   116,    26,    31,   117,   118,    52,   139,   140,
     141,   142,   143,   144,   145,   146,   129,   115,   116,    92,
     132,   117,   118,   153,    55,    93,    56,    88,    94,    95,
      89,    90,    61,    99,     3,   160,   161,    91,    63,    64,
      65,    66,   112,   121,   113,   114,   115,   116,   103,   124,
     117,   118,   -95,   114,   115,   116,   165,   125,   117,   118,
      67,    68,   171,   -95,   131,   150,   164,   -95,   -95,   -95,
     134,   -95,   -95,   -95,   -95,    71,   155,    72,    73,   158,
      68,   166,   167,   184,   182,   154,    61,   178,     3,   174,
      28,    62,    63,    64,    65,    66,   109,   183,    60,   162,
     110,   111,   112,   173,   113,   114,   115,   116,     0,     0,
     117,   118,     0,     0,    67,    68,     0,     0,     0,     0,
       0,     0,    69,    70,     3,     0,     0,     0,     0,    71,
       0,    72,    73,     3,    33,    34,     0,    35,    36,    37,
      38,     0,     0,    33,    34,     0,    35,    36,    37,    38,
       0,     6,     0,   109,     0,     0,     0,   110,   111,   112,
       6,   113,   114,   115,   116,     0,    39,   117,   118,    18,
       0,   -34,    19,     0,     0,    39,     0,     0,     0,     0,
     156,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,
       0,   109,     0,     0,     0,   110,   111,   112,   -34,   113,
     114,   115,   116,   172,     0,   157,   118,     0,     0,   113,
     114,   115,   116,   -34,   109,   117,   118,     0,   110,   111,
     112,     0,   113,   114,   115,   116,     0,     0,   117,   118,
       6,     0,   109,     0,     0,     0,   110,   111,   112,     0,
     113,   114,   115,   116,   109,   135,   117,   118,   110,   111,
     112,     0,   113,   114,   115,   116,   109,     0,   117,   118,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
     117,   118,   110,   111,   112,     0,   113,   114,   115,   116,
       0,     0,   117,   118
};

static const yytype_int16 yycheck[] =
{
       4,    32,     1,     1,    16,     4,     3,    38,     1,    46,
      47,     4,     1,    12,    35,    36,    37,     3,    30,    12,
       1,     1,     3,     1,    21,    23,    30,    25,    15,    28,
       1,    29,     3,    22,    32,    33,     7,     8,     9,    10,
      38,    39,    22,     1,    22,    34,    67,    68,    69,    70,
      71,    72,    73,    33,    85,    33,    30,     1,    29,    30,
       1,   175,   176,    21,    22,     0,    37,    38,   119,   120,
      27,    92,    93,    44,    95,    46,    47,    21,    22,    83,
      21,    22,    43,    32,    34,    46,    47,    85,   109,   110,
     111,   112,   113,   114,   115,   116,    94,    42,    43,    39,
      98,    46,    47,   124,     4,    45,    28,    21,    48,    49,
      21,    21,     1,    36,     3,   136,   137,    21,     7,     8,
       9,    10,    38,    29,    40,    41,    42,    43,   149,    20,
      46,    47,    21,    41,    42,    43,   157,    21,    46,    47,
      29,    30,   163,    32,     3,    26,   150,    36,    37,    38,
      29,    40,    41,    42,    43,    44,    21,    46,    47,     3,
      30,    39,     4,    21,    33,    21,     1,   171,     3,   167,
      16,     6,     7,     8,     9,    10,    32,   178,    33,   149,
      36,    37,    38,   166,    40,    41,    42,    43,    -1,    -1,
      46,    47,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,     3,    -1,    -1,    -1,    -1,    44,
      -1,    46,    47,     3,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,
      30,    40,    41,    42,    43,    -1,    45,    46,    47,     1,
      -1,     3,     4,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      21,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    30,    40,
      41,    42,    43,    21,    -1,    46,    47,    -1,    -1,    40,
      41,    42,    43,    45,    32,    46,    47,    -1,    36,    37,
      38,    -1,    40,    41,    42,    43,    -1,    -1,    46,    47,
      30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,
      40,    41,    42,    43,    32,    33,    46,    47,    36,    37,
      38,    -1,    40,    41,    42,    43,    32,    -1,    46,    47,
      36,    37,    38,    -1,    40,    41,    42,    43,    -1,    -1,
      46,    47,    36,    37,    38,    -1,    40,    41,    42,    43,
      -1,    -1,    46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    51,     3,    95,     0,    30,    52,    53,    27,
      62,    63,    54,     1,     4,    12,    65,    66,     1,     4,
      55,    57,    72,    74,     1,    67,    32,    64,    66,    58,
      56,    34,    73,    13,    14,    16,    17,    18,    19,    45,
      52,    75,    76,    77,    80,    81,    82,    83,    84,    85,
      86,    87,    95,    92,    95,     4,    28,    95,    52,    75,
      92,     1,     6,     7,     8,     9,    10,    29,    30,    37,
      38,    44,    46,    47,    89,    90,    91,    93,    94,    95,
      96,    97,    98,    89,    89,    89,    75,    95,    21,    21,
      21,    21,    39,    45,    48,    49,     1,    21,    22,    36,
      59,    89,    88,    89,    89,    89,    89,    89,    89,    32,
      36,    37,    38,    40,    41,    42,    43,    46,    47,     1,
      22,    29,    52,    75,    20,    21,    89,    89,    21,    95,
      89,     3,    95,    68,    29,    33,     1,    22,    34,    89,
      89,    89,    89,    89,    89,    89,    89,    91,    91,    99,
      26,    78,    79,    89,    21,    21,    21,    46,     3,    60,
      89,    89,    88,    16,    52,    89,    39,     4,    70,    71,
      33,    89,    21,    97,    95,     1,    22,    61,    52,    69,
      71,    71,    33,    78,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    53,    52,    54,    54,    56,    55,    58,
      59,    60,    61,    57,    57,    63,    64,    62,    62,    65,
      65,    67,    66,    68,    69,    66,    66,    66,    70,    70,
      70,    71,    73,    72,    74,    72,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    77,    78,
      78,    79,    79,    80,    81,    82,    83,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    91,    91,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    95,    96,    96,
      96,    96,    96,    97,    99,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     6,     2,     0,     0,     3,     0,
       0,     0,     0,     9,     1,     0,     0,     5,     0,     2,
       1,     0,     4,     0,     0,    10,     2,     1,     3,     1,
       3,     2,     0,     3,     0,     2,     1,     2,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     3,     4,     5,
       1,     2,     0,     3,     2,     2,     2,     4,     3,     4,
       3,     4,     4,     6,     3,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     3,     0,     5
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
  case 3: /* $@1: %empty  */
#line 40 "src/semantic.y"
              {addMarca(); }
#line 1610 "src/y.tab.c"
    break;

  case 4: /* bloque: LLAVE_IZQ $@1 declarar_variables declarar_funciones Sentencias LLAVE_DER  */
#line 40 "src/semantic.y"
                                                                                        {/*printTabla();*/ eliminarEntradas();}
#line 1616 "src/y.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 50 "src/semantic.y"
                      { funcion = 1; }
#line 1622 "src/y.tab.c"
    break;

  case 8: /* declarar_funcion: cabecera_funcion $@2 bloque  */
#line 50 "src/semantic.y"
                                              { funcion = 0; }
#line 1628 "src/y.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 54 "src/semantic.y"
              { initParametros = 0; }
#line 1634 "src/y.tab.c"
    break;

  case 10: /* $@4: %empty  */
#line 54 "src/semantic.y"
                                                    { setTipo((yyvsp[-2])); addFuncion(yyvsp[0]); }
#line 1640 "src/y.tab.c"
    break;

  case 11: /* $@5: %empty  */
#line 54 "src/semantic.y"
                                                                                               { varLocal = 1; initParametros = 0; }
#line 1646 "src/y.tab.c"
    break;

  case 12: /* $@6: %empty  */
#line 54 "src/semantic.y"
                                                                                                                                                { setNParam(yyvsp[0]); nParam = 0; initParametros = 1; }
#line 1652 "src/y.tab.c"
    break;

  case 15: /* $@7: %empty  */
#line 58 "src/semantic.y"
                                   { varLocal = 0; }
#line 1658 "src/y.tab.c"
    break;

  case 16: /* $@8: %empty  */
#line 58 "src/semantic.y"
                                                                       { varLocal = 1; }
#line 1664 "src/y.tab.c"
    break;

  case 21: /* $@9: %empty  */
#line 67 "src/semantic.y"
                                    { setTipo(yyvsp[0]); }
#line 1670 "src/y.tab.c"
    break;

  case 23: /* $@10: %empty  */
#line 68 "src/semantic.y"
                                                       { setTipo(yyvsp[-1]);}
#line 1676 "src/y.tab.c"
    break;

  case 24: /* @11: %empty  */
#line 68 "src/semantic.y"
                                                                                                    {
                    /*Si este valor está a 0, quiere decir que se esta declarando variables*/
                     if (varLocal == 0){
                            yyvsp[-2].nDim = 1;
                            yyvsp[-2].dim1 = yyvsp[0].dim1;
                            
                            addIdentificador(yyvsp[-2]);
                     }else{
                            /*Estamos cogiendo un parametro y debe existir*/
                            getIdentificador(yyvsp[-2], &yyval);
                            
                     }
                    }
#line 1694 "src/y.tab.c"
    break;

  case 26: /* Cuerpo_declar_variables: TIPO_DATO error  */
#line 81 "src/semantic.y"
                                   { yyerror("Error tras el tipo de dato\n"); }
#line 1700 "src/y.tab.c"
    break;

  case 31: /* parametro: TIPO_DATO identificador  */
#line 92 "src/semantic.y"
                            { nParam++; setTipo(yyvsp[-1]); addParametro(yyvsp[0]); }
#line 1706 "src/y.tab.c"
    break;

  case 32: /* $@12: %empty  */
#line 97 "src/semantic.y"
               { varLocal = 1; }
#line 1712 "src/y.tab.c"
    break;

  case 34: /* $@13: %empty  */
#line 98 "src/semantic.y"
      {varLocal = 1; }
#line 1718 "src/y.tab.c"
    break;

  case 47: /* sentencia_asignacion: identificador OP_ASIGNACION expresion  */
#line 117 "src/semantic.y"
                                          {
        if (yyvsp[-2].tipo != yyvsp[0].tipo) {   
            yyerror("Error semantico: Tipos distintos\n");
        }
        else{
            comprobarAsignacion(yyvsp[-2], yyvsp[0]);
        }
    }
#line 1731 "src/y.tab.c"
    break;

  case 48: /* sentencia_if: IF expresion bloque sentencia_else_if  */
#line 129 "src/semantic.y"
                                          {expresionBooleana(yyvsp[-2].tipo);}
#line 1737 "src/y.tab.c"
    break;

  case 49: /* sentencia_else_if: ELSE IF expresion bloque sentencia_else_if  */
#line 133 "src/semantic.y"
                                               {expresionBooleana(yyvsp[-2].tipo);}
#line 1743 "src/y.tab.c"
    break;

  case 53: /* sentencia_while: WHILE expresion Sentencia  */
#line 144 "src/semantic.y"
                              { expresionBooleana(yyvsp[-1].tipo); }
#line 1749 "src/y.tab.c"
    break;

  case 56: /* sentencia_return: RETURN expresion  */
#line 157 "src/semantic.y"
                     { comprobarTipoDevuelto(yyvsp[0], &yyval); }
#line 1755 "src/y.tab.c"
    break;

  case 57: /* sentencia_repeat_until: REPEAT Sentencia UNTIL expresion  */
#line 161 "src/semantic.y"
                                     { expresionBooleana(yyvsp[0].tipo); }
#line 1761 "src/y.tab.c"
    break;

  case 58: /* sentencia_mover_lista: identificador OP_LISTA PYC  */
#line 165 "src/semantic.y"
                               { comprobarLista(yyvsp[-2]);}
#line 1767 "src/y.tab.c"
    break;

  case 64: /* lista_expresion: lista_expresion COMA expresion  */
#line 179 "src/semantic.y"
                                                 {  nExpresion++; comprobarParametro(yyvsp[0]); yyval.dim1 = yyvsp[-2].dim1 + yyvsp[0].dim1;}
#line 1773 "src/y.tab.c"
    break;

  case 65: /* lista_expresion: expresion  */
#line 180 "src/semantic.y"
                            {  nExpresion++; comprobarParametro(yyvsp[0]); }
#line 1779 "src/y.tab.c"
    break;

  case 69: /* expresion: llamada_subprog  */
#line 187 "src/semantic.y"
                      { yyval.tipo = yyvsp[0].tipo; yyval.nDim = yyvsp[0].nDim; yyval.dim1 = yyvsp[0].dim1;}
#line 1785 "src/y.tab.c"
    break;

  case 70: /* expresion: constante  */
#line 188 "src/semantic.y"
                 { yyval.tipo = yyvsp[0].tipo; yyval.nDim = yyvsp[0].nDim; yyval.dim1 = yyvsp[0].dim1;}
#line 1791 "src/y.tab.c"
    break;

  case 72: /* expresion: PAR_IZQ expresion PAR_DER  */
#line 190 "src/semantic.y"
                                {char auxExpr[100];
                                strcpy(auxExpr, ""); 
                                strcat(auxExpr, yyvsp[-2].lex);
                                strcat(auxExpr, yyvsp[-1].lex);                                        
                                strcat(auxExpr, yyvsp[0].lex); 
                                strcpy(yyval.lex, auxExpr);
                                yyval.tipo = yyvsp[-1].tipo;}
#line 1803 "src/y.tab.c"
    break;

  case 74: /* lista_expresiones_o_cadena: lista_expresiones_o_cadena COMA exp_cadena  */
#line 201 "src/semantic.y"
                                               {nParam++;}
#line 1809 "src/y.tab.c"
    break;

  case 75: /* lista_expresiones_o_cadena: exp_cadena  */
#line 202 "src/semantic.y"
                 { nParam = 1;  }
#line 1815 "src/y.tab.c"
    break;

  case 76: /* lista_expresiones_o_cadena: lista_expresiones_o_cadena error exp_cadena  */
#line 203 "src/semantic.y"
                                                  {yyerror("Falta la coma"); yyerrok;}
#line 1821 "src/y.tab.c"
    break;

  case 82: /* expresion_binaria: expresion OP_SUM_RES expresion  */
#line 217 "src/semantic.y"
                                   {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarBinario(yyvsp[-2], yyvsp[0], &yyval); }
#line 1834 "src/y.tab.c"
    break;

  case 83: /* expresion_binaria: expresion OP_MULT expresion  */
#line 226 "src/semantic.y"
                                  {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarBinario(yyvsp[-2], yyvsp[0], &yyval); }
#line 1847 "src/y.tab.c"
    break;

  case 84: /* expresion_binaria: expresion MAYOR_QUE expresion  */
#line 235 "src/semantic.y"
                                    {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarRelacion(yyvsp[-2], yyvsp[0], &yyval); }
#line 1860 "src/y.tab.c"
    break;

  case 85: /* expresion_binaria: expresion MENOR_QUE expresion  */
#line 244 "src/semantic.y"
                                    {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarRelacion(yyvsp[-2], yyvsp[0], &yyval); }
#line 1873 "src/y.tab.c"
    break;

  case 86: /* expresion_binaria: expresion OP_LOGIC expresion  */
#line 253 "src/semantic.y"
                                   {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarOpLogico(yyvsp[-2], yyvsp[0], &yyval); }
#line 1886 "src/y.tab.c"
    break;

  case 87: /* expresion_binaria: expresion OP_AND expresion  */
#line 262 "src/semantic.y"
                                 {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarOpLogico(yyvsp[-2], yyvsp[0], &yyval); }
#line 1899 "src/y.tab.c"
    break;

  case 88: /* expresion_binaria: expresion OP_COMP expresion  */
#line 271 "src/semantic.y"
                                  {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarOpLogico(yyvsp[-2], yyvsp[0], &yyval); }
#line 1912 "src/y.tab.c"
    break;

  case 89: /* expresion_binaria: expresion OP_ARIT expresion  */
#line 280 "src/semantic.y"
                                  {char auxExpr[100];
                                    strcpy(auxExpr, ""); 
                                    strcat(auxExpr, yyvsp[-2].lex);
                                    strcat(auxExpr, yyvsp[-1].lex);
                                    strcat(auxExpr, yyvsp[0].lex);
                                    strcpy(yyval.lex, auxExpr);
                                    yyval.tipo = yyvsp[-2].tipo;
                                    comprobarBinario(yyvsp[-2], yyvsp[0], &yyval); }
#line 1925 "src/y.tab.c"
    break;

  case 90: /* expresion_unaria: OP_INCREMENT expresion  */
#line 291 "src/semantic.y"
                           { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, yyvsp[-1].lex);
                            strcat(auxExpr, yyvsp[0].lex);
                            strcpy(yyval.lex, auxExpr);
                            comprobarUnario(yyvsp[0], &yyval); }
#line 1936 "src/y.tab.c"
    break;

  case 91: /* expresion_unaria: OP_DECREMENT expresion  */
#line 298 "src/semantic.y"
                             { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, yyvsp[-1].lex);
                            strcat(auxExpr, yyvsp[0].lex);
                            strcpy(yyval.lex, auxExpr);
                            comprobarUnario(yyvsp[0], &yyval); }
#line 1947 "src/y.tab.c"
    break;

  case 92: /* expresion_unaria: OP_R expresion  */
#line 305 "src/semantic.y"
                     { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, yyvsp[-1].lex);
                            strcat(auxExpr, yyvsp[0].lex);
                            strcpy(yyval.lex, auxExpr);
                            comprobarUnario(yyvsp[0], &yyval); }
#line 1958 "src/y.tab.c"
    break;

  case 93: /* expresion_unaria: OP_SUM_RES expresion  */
#line 312 "src/semantic.y"
                           { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, yyvsp[-1].lex);
                            strcat(auxExpr, yyvsp[0].lex);
                            strcpy(yyval.lex, auxExpr);
                            comprobarUnario(yyvsp[0], &yyval); }
#line 1969 "src/y.tab.c"
    break;

  case 94: /* expresion_unaria: OP_MULT expresion  */
#line 319 "src/semantic.y"
                        { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, yyvsp[-1].lex);
                            strcat(auxExpr, yyvsp[0].lex);
                            strcpy(yyval.lex, auxExpr);
                            comprobarUnario(yyvsp[0], &yyval); }
#line 1980 "src/y.tab.c"
    break;

  case 95: /* expresion_unaria: expresion OP_INCREMENT  */
#line 326 "src/semantic.y"
                             { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, yyvsp[-1].lex);
                            strcat(auxExpr, yyvsp[0].lex);
                            strcpy(yyval.lex, auxExpr);
                            comprobarUnario(yyvsp[-1], &yyval); }
#line 1991 "src/y.tab.c"
    break;

  case 96: /* expresion_unaria: expresion OP_DECREMENT  */
#line 333 "src/semantic.y"
                             { char auxExpr[100];
                            strcpy(auxExpr, ""); 
                            strcat(auxExpr, yyvsp[-1].lex);
                            strcat(auxExpr, yyvsp[0].lex);
                            strcpy(yyval.lex, auxExpr);
                            comprobarUnario(yyvsp[-1], &yyval); }
#line 2002 "src/y.tab.c"
    break;

  case 97: /* identificador: ID  */
#line 342 "src/semantic.y"
                   {
                     /*Si este valor está a 0, quiere decir que se esta declarando variables*/
                     if (varLocal == 0){
                            yyvsp[0].nDim = 0;
                            yyvsp[0].dim1 = 0;
                            
                            addIdentificador(yyvsp[0]);
                     }else{
                            /*Estamos cogiendo un parametro y debe existir*/
                            if(initParametros == 1){
                                   getIdentificador(yyvsp[0], &yyval);
                            }
                     }

                }
#line 2022 "src/y.tab.c"
    break;

  case 98: /* constante: CONST_ENTERO  */
#line 361 "src/semantic.y"
                 { yyval.tipo = entero; yyval.nDim = 0; yyval.dim1 = 0;}
#line 2028 "src/y.tab.c"
    break;

  case 99: /* constante: CONST_FLOAT  */
#line 362 "src/semantic.y"
                   { yyval.tipo = real; yyval.nDim = 0; yyval.dim1 = 0;}
#line 2034 "src/y.tab.c"
    break;

  case 100: /* constante: BOOL_VALUE  */
#line 363 "src/semantic.y"
                 { yyval.tipo = booleano; yyval.nDim = 0; yyval.dim1 = 0;}
#line 2040 "src/y.tab.c"
    break;

  case 101: /* constante: CONST_CARACTER  */
#line 364 "src/semantic.y"
                     { yyval.tipo = caracter; yyval.nDim = 0; yyval.dim1 = 0;}
#line 2046 "src/y.tab.c"
    break;

  case 102: /* constante: const_lista  */
#line 365 "src/semantic.y"
                  { yyval.tipo = yyvsp[0].tipo; yyval.nDim = yyvsp[0].nDim; yyval.dim1 = yyvsp[0].dim1;}
#line 2052 "src/y.tab.c"
    break;

  case 103: /* const_lista: LLAVE_IZQ lista_expresion LLAVE_DER  */
#line 368 "src/semantic.y"
                                                  { yyval.tipo = yyvsp[-1].tipo; yyval.nDim = 1; yyval.dim1 = atoi(yyvsp[-1].lex); yyval.lex = yyvsp[-1].lex; }
#line 2058 "src/y.tab.c"
    break;

  case 104: /* $@14: %empty  */
#line 372 "src/semantic.y"
                           { nExpresion = 0; funcionActual = buscarIdentificador(yyvsp[-1]); }
#line 2064 "src/y.tab.c"
    break;

  case 105: /* llamada_subprog: identificador PAR_IZQ $@14 lista_expresion PAR_DER  */
#line 372 "src/semantic.y"
                                                                                                                { comprobarFuncion(yyvsp[-4], &yyval); }
#line 2070 "src/y.tab.c"
    break;


#line 2074 "src/y.tab.c"

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

#line 375 "src/semantic.y"


#include "lex.yy.c"

// Se debe implementar la función yyerror. En este caso simplemente escribimos
// el mensaje de error en pantalla
void yyerror(const char *msg ){
	fprintf(stderr, "Línea %d: %s\n", yylineno, msg);
}
