/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "context.h"
#include "resolve.h"
#include "common.h"
#include "parser_yang.h"
#include "parser_yang_lex.h"
#include "parser.h"

/* only syntax rules */
#define EXTENSION_ARG 0x01
#define EXTENSION_STA 0x02
#define EXTENSION_DSC 0x04
#define EXTENSION_REF 0x08
#define DISABLE_INHERIT 0
#define ENABLE_INHERIT 0x01

void yyerror(YYLTYPE *yylloc, void *scanner, ...);
/* temporary pointer for the check extension nacm 'data_node' */
/* pointer on the current parsed element 'actual' */



# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser_yang_bis.h".  */
#ifndef YY_YY_PARSER_YANG_BIS_H_INCLUDED
# define YY_YY_PARSER_YANG_BIS_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNION_KEYWORD = 258,
    ANYXML_KEYWORD = 259,
    WHITESPACE = 260,
    ERROR = 261,
    EOL = 262,
    STRING = 263,
    STRINGS = 264,
    IDENTIFIER = 265,
    IDENTIFIERPREFIX = 266,
    REVISION_DATE = 267,
    TAB = 268,
    DOUBLEDOT = 269,
    URI = 270,
    INTEGER = 271,
    NON_NEGATIVE_INTEGER = 272,
    ZERO = 273,
    DECIMAL = 274,
    ARGUMENT_KEYWORD = 275,
    AUGMENT_KEYWORD = 276,
    BASE_KEYWORD = 277,
    BELONGS_TO_KEYWORD = 278,
    BIT_KEYWORD = 279,
    CASE_KEYWORD = 280,
    CHOICE_KEYWORD = 281,
    CONFIG_KEYWORD = 282,
    CONTACT_KEYWORD = 283,
    CONTAINER_KEYWORD = 284,
    DEFAULT_KEYWORD = 285,
    DESCRIPTION_KEYWORD = 286,
    ENUM_KEYWORD = 287,
    ERROR_APP_TAG_KEYWORD = 288,
    ERROR_MESSAGE_KEYWORD = 289,
    EXTENSION_KEYWORD = 290,
    DEVIATION_KEYWORD = 291,
    DEVIATE_KEYWORD = 292,
    FEATURE_KEYWORD = 293,
    FRACTION_DIGITS_KEYWORD = 294,
    GROUPING_KEYWORD = 295,
    IDENTITY_KEYWORD = 296,
    IF_FEATURE_KEYWORD = 297,
    IMPORT_KEYWORD = 298,
    INCLUDE_KEYWORD = 299,
    INPUT_KEYWORD = 300,
    KEY_KEYWORD = 301,
    LEAF_KEYWORD = 302,
    LEAF_LIST_KEYWORD = 303,
    LENGTH_KEYWORD = 304,
    LIST_KEYWORD = 305,
    MANDATORY_KEYWORD = 306,
    MAX_ELEMENTS_KEYWORD = 307,
    MIN_ELEMENTS_KEYWORD = 308,
    MODULE_KEYWORD = 309,
    MUST_KEYWORD = 310,
    NAMESPACE_KEYWORD = 311,
    NOTIFICATION_KEYWORD = 312,
    ORDERED_BY_KEYWORD = 313,
    ORGANIZATION_KEYWORD = 314,
    OUTPUT_KEYWORD = 315,
    PATH_KEYWORD = 316,
    PATTERN_KEYWORD = 317,
    POSITION_KEYWORD = 318,
    PREFIX_KEYWORD = 319,
    PRESENCE_KEYWORD = 320,
    RANGE_KEYWORD = 321,
    REFERENCE_KEYWORD = 322,
    REFINE_KEYWORD = 323,
    REQUIRE_INSTANCE_KEYWORD = 324,
    REVISION_KEYWORD = 325,
    REVISION_DATE_KEYWORD = 326,
    RPC_KEYWORD = 327,
    STATUS_KEYWORD = 328,
    SUBMODULE_KEYWORD = 329,
    TYPE_KEYWORD = 330,
    TYPEDEF_KEYWORD = 331,
    UNIQUE_KEYWORD = 332,
    UNITS_KEYWORD = 333,
    USES_KEYWORD = 334,
    VALUE_KEYWORD = 335,
    WHEN_KEYWORD = 336,
    YANG_VERSION_KEYWORD = 337,
    YIN_ELEMENT_KEYWORD = 338,
    ADD_KEYWORD = 339,
    CURRENT_KEYWORD = 340,
    DELETE_KEYWORD = 341,
    DEPRECATED_KEYWORD = 342,
    FALSE_KEYWORD = 343,
    NOT_SUPPORTED_KEYWORD = 344,
    OBSOLETE_KEYWORD = 345,
    REPLACE_KEYWORD = 346,
    SYSTEM_KEYWORD = 347,
    TRUE_KEYWORD = 348,
    UNBOUNDED_KEYWORD = 349,
    USER_KEYWORD = 350,
    ACTION_KEYWORD = 351,
    MODIFIER_KEYWORD = 352,
    ANYDATA_KEYWORD = 353
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{


  int32_t i;
  uint32_t uint;
  char *str;
  void *v;
  char ch;
  struct lys_module *inc;
  struct yang_type *type;
  union {
    uint32_t index;
    struct lys_node_container *container;
    struct lys_node_anydata *anydata;
    struct type_choice choice;
    struct type_node node;
    struct lys_node_case *cs;
    struct lys_node_grp *grouping;
    struct type_uses uses;
    struct lys_refine *refine;
    struct lys_node_notif *notif;
    struct type_deviation *deviation;
  } nodes;


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (void *scanner, struct lys_module *module, struct lys_submodule *submodule, struct unres_schema *unres, struct lys_array_size *size_arrays, int read_all);

#endif /* !YY_YY_PARSER_YANG_BIS_H_INCLUDED  */

/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   3291

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  341
/* YYNRULES -- Number of rules.  */
#define YYNRULES  766
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1236

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     107,   108,     2,    99,     2,     2,     2,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
       2,   106,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   104,     2,   105,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,     2,   101,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   267,   267,   268,   289,   289,   308,   310,   309,   341,
     354,   341,   363,   364,   372,   373,   376,   389,   376,   400,
     401,   409,   409,   418,   420,   422,   445,   446,   449,   449,
     469,   470,   476,   487,   498,   507,   509,   509,   532,   533,
     537,   538,   549,   560,   569,   581,   592,   581,   601,   603,
     604,   605,   606,   611,   617,   619,   621,   623,   625,   633,
     636,   636,   645,   646,   646,   651,   652,   657,   664,   664,
     673,   679,   718,   721,   722,   723,   724,   725,   726,   727,
     733,   734,   735,   737,   737,   756,   757,   761,   762,   769,
     776,   787,   799,   799,   801,   802,   806,   808,   809,   810,
     821,   823,   824,   823,   827,   828,   829,   830,   847,   847,
     856,   857,   862,   883,   896,   902,   907,   913,   915,   915,
     924,   925,   930,   970,   979,   988,   994,   999,  1005,  1007,
    1018,  1041,  1044,  1051,  1052,  1058,  1064,  1069,  1076,  1078,
    1086,  1087,  1092,  1093,  1094,  1097,  1132,  1136,  1144,  1152,
    1153,  1157,  1158,  1159,  1167,  1180,  1186,  1187,  1205,  1209,
    1219,  1220,  1225,  1237,  1242,  1247,  1252,  1258,  1267,  1280,
    1281,  1285,  1286,  1298,  1303,  1308,  1313,  1319,  1332,  1332,
    1351,  1352,  1355,  1367,  1377,  1378,  1383,  1407,  1416,  1425,
    1431,  1436,  1442,  1454,  1455,  1473,  1478,  1479,  1484,  1486,
    1488,  1489,  1490,  1506,  1506,  1525,  1526,  1528,  1539,  1549,
    1550,  1555,  1579,  1588,  1597,  1603,  1608,  1614,  1626,  1627,
    1642,  1644,  1646,  1648,  1650,  1650,  1657,  1658,  1663,  1685,
    1691,  1696,  1701,  1702,  1709,  1710,  1711,  1722,  1723,  1724,
    1725,  1726,  1727,  1728,  1729,  1732,  1732,  1740,  1741,  1746,
    1782,  1782,  1784,  1791,  1791,  1799,  1800,  1806,  1812,  1817,
    1822,  1822,  1827,  1827,  1832,  1832,  1843,  1843,  1851,  1851,
    1858,  1884,  1892,  1922,  1922,  1924,  1931,  1931,  1938,  1939,
    1939,  1947,  1950,  1956,  1962,  1968,  1973,  1978,  1988,  2031,
    2072,  2072,  2074,  2081,  2081,  2088,  2108,  2109,  2109,  2117,
    2123,  2137,  2151,  2163,  2169,  2174,  2180,  2187,  2180,  2212,
    2257,  2257,  2259,  2266,  2266,  2274,  2288,  2296,  2302,  2316,
    2330,  2342,  2348,  2353,  2358,  2358,  2366,  2366,  2371,  2371,
    2376,  2376,  2387,  2387,  2395,  2395,  2406,  2408,  2407,  2425,
    2448,  2448,  2450,  2463,  2475,  2483,  2491,  2499,  2508,  2517,
    2517,  2527,  2528,  2531,  2532,  2533,  2534,  2535,  2536,  2537,
    2544,  2544,  2552,  2553,  2557,  2579,  2579,  2581,  2588,  2594,
    2599,  2604,  2604,  2611,  2611,  2623,  2623,  2635,  2636,  2640,
    2669,  2669,  2675,  2682,  2682,  2690,  2697,  2704,  2711,  2716,
    2722,  2722,  2738,  2739,  2743,  2780,  2780,  2782,  2789,  2795,
    2800,  2805,  2805,  2813,  2813,  2828,  2828,  2837,  2838,  2843,
    2844,  2847,  2897,  2904,  2928,  2948,  2967,  2986,  3009,  3032,
    3037,  3043,  3052,  3043,  3059,  3060,  3063,  3072,  3063,  3084,
    3105,  3105,  3107,  3114,  3123,  3128,  3133,  3133,  3141,  3141,
    3149,  3149,  3161,  3161,  3171,  3172,  3175,  3175,  3186,  3186,
    3197,  3198,  3203,  3233,  3240,  3246,  3251,  3256,  3256,  3264,
    3264,  3269,  3269,  3281,  3281,  3294,  3308,  3294,  3315,  3346,
    3346,  3354,  3354,  3362,  3362,  3367,  3367,  3377,  3391,  3377,
    3398,  3398,  3408,  3412,  3417,  3457,  3457,  3465,  3472,  3478,
    3483,  3488,  3488,  3496,  3496,  3501,  3501,  3508,  3517,  3508,
    3531,  3551,  3559,  3567,  3577,  3578,  3580,  3585,  3587,  3588,
    3589,  3592,  3594,  3594,  3600,  3601,  3605,  3632,  3640,  3648,
    3664,  3674,  3681,  3688,  3699,  3711,  3711,  3717,  3718,  3738,
    3765,  3773,  3784,  3794,  3805,  3805,  3811,  3815,  3816,  3828,
    3845,  3849,  3857,  3867,  3874,  3881,  3892,  3904,  3904,  3907,
    3908,  3912,  3913,  3918,  3924,  3926,  3927,  3926,  3930,  3931,
    3932,  3947,  3949,  3950,  3949,  3953,  3954,  3955,  3970,  3972,
    3974,  3975,  3996,  3998,  3999,  4000,  4021,  4023,  4024,  4025,
    4037,  4037,  4045,  4046,  4051,  4053,  4054,  4056,  4057,  4059,
    4061,  4061,  4070,  4073,  4073,  4084,  4087,  4097,  4118,  4120,
    4121,  4124,  4124,  4143,  4143,  4152,  4152,  4161,  4164,  4166,
    4168,  4169,  4171,  4173,  4175,  4176,  4178,  4180,  4181,  4183,
    4184,  4186,  4188,  4191,  4195,  4197,  4198,  4200,  4201,  4203,
    4205,  4216,  4217,  4220,  4221,  4233,  4234,  4236,  4237,  4239,
    4240,  4246,  4247,  4250,  4251,  4252,  4278,  4279,  4282,  4283,
    4284,  4287,  4287,  4295,  4297,  4298,  4300,  4301,  4302,  4304,
    4305,  4307,  4308,  4310,  4311,  4313,  4314,  4316,  4317,  4320,
    4321,  4324,  4326,  4327,  4330,  4330,  4339,  4341,  4342,  4343,
    4344,  4345,  4346,  4347,  4349,  4350,  4351,  4352,  4353,  4354,
    4355,  4356,  4357,  4358,  4359,  4360,  4361,  4362,  4363,  4364,
    4365,  4366,  4367,  4368,  4369,  4370,  4371,  4372,  4373,  4374,
    4375,  4376,  4377,  4378,  4379,  4380,  4381,  4382,  4383,  4384,
    4385,  4386,  4387,  4388,  4389,  4390,  4391,  4392,  4393,  4394,
    4395,  4396,  4397,  4398,  4399,  4400,  4401,  4402,  4403,  4404,
    4405,  4406,  4407,  4408,  4409,  4410,  4411,  4412,  4413,  4414,
    4415,  4416,  4417,  4418,  4419,  4420,  4421,  4422,  4423,  4424,
    4425,  4426,  4427,  4428,  4429,  4432,  4441
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNION_KEYWORD", "ANYXML_KEYWORD",
  "WHITESPACE", "ERROR", "EOL", "STRING", "STRINGS", "IDENTIFIER",
  "IDENTIFIERPREFIX", "REVISION_DATE", "TAB", "DOUBLEDOT", "URI",
  "INTEGER", "NON_NEGATIVE_INTEGER", "ZERO", "DECIMAL", "ARGUMENT_KEYWORD",
  "AUGMENT_KEYWORD", "BASE_KEYWORD", "BELONGS_TO_KEYWORD", "BIT_KEYWORD",
  "CASE_KEYWORD", "CHOICE_KEYWORD", "CONFIG_KEYWORD", "CONTACT_KEYWORD",
  "CONTAINER_KEYWORD", "DEFAULT_KEYWORD", "DESCRIPTION_KEYWORD",
  "ENUM_KEYWORD", "ERROR_APP_TAG_KEYWORD", "ERROR_MESSAGE_KEYWORD",
  "EXTENSION_KEYWORD", "DEVIATION_KEYWORD", "DEVIATE_KEYWORD",
  "FEATURE_KEYWORD", "FRACTION_DIGITS_KEYWORD", "GROUPING_KEYWORD",
  "IDENTITY_KEYWORD", "IF_FEATURE_KEYWORD", "IMPORT_KEYWORD",
  "INCLUDE_KEYWORD", "INPUT_KEYWORD", "KEY_KEYWORD", "LEAF_KEYWORD",
  "LEAF_LIST_KEYWORD", "LENGTH_KEYWORD", "LIST_KEYWORD",
  "MANDATORY_KEYWORD", "MAX_ELEMENTS_KEYWORD", "MIN_ELEMENTS_KEYWORD",
  "MODULE_KEYWORD", "MUST_KEYWORD", "NAMESPACE_KEYWORD",
  "NOTIFICATION_KEYWORD", "ORDERED_BY_KEYWORD", "ORGANIZATION_KEYWORD",
  "OUTPUT_KEYWORD", "PATH_KEYWORD", "PATTERN_KEYWORD", "POSITION_KEYWORD",
  "PREFIX_KEYWORD", "PRESENCE_KEYWORD", "RANGE_KEYWORD",
  "REFERENCE_KEYWORD", "REFINE_KEYWORD", "REQUIRE_INSTANCE_KEYWORD",
  "REVISION_KEYWORD", "REVISION_DATE_KEYWORD", "RPC_KEYWORD",
  "STATUS_KEYWORD", "SUBMODULE_KEYWORD", "TYPE_KEYWORD", "TYPEDEF_KEYWORD",
  "UNIQUE_KEYWORD", "UNITS_KEYWORD", "USES_KEYWORD", "VALUE_KEYWORD",
  "WHEN_KEYWORD", "YANG_VERSION_KEYWORD", "YIN_ELEMENT_KEYWORD",
  "ADD_KEYWORD", "CURRENT_KEYWORD", "DELETE_KEYWORD", "DEPRECATED_KEYWORD",
  "FALSE_KEYWORD", "NOT_SUPPORTED_KEYWORD", "OBSOLETE_KEYWORD",
  "REPLACE_KEYWORD", "SYSTEM_KEYWORD", "TRUE_KEYWORD", "UNBOUNDED_KEYWORD",
  "USER_KEYWORD", "ACTION_KEYWORD", "MODIFIER_KEYWORD", "ANYDATA_KEYWORD",
  "'+'", "'{'", "'}'", "';'", "'/'", "'['", "']'", "'='", "'('", "')'",
  "$accept", "start", "string_1", "$@1", "string_2", "$@2", "module_stmt",
  "$@3", "$@4", "module_header_stmts", "submodule_stmt", "$@5", "$@6",
  "submodule_header_stmts", "$@7", "yang_version_stmt", "namespace_stmt",
  "linkage_stmts", "import_stmt", "$@8", "import_opt_stmt",
  "tmp_identifier_arg_str", "include_stmt", "$@9", "include_end",
  "include_opt_stmt", "revision_date_stmt", "belongs_to_stmt", "$@10",
  "$@11", "prefix_stmt", "meta_stmts", "organization_stmt", "contact_stmt",
  "description_stmt", "reference_stmt", "revision_stmts", "revision_stmt",
  "$@12", "revision_end", "$@13", "revision_opt_stmt", "date_arg_str",
  "$@14", "body_stmts", "body_stmt", "extension_stmt", "$@15",
  "extension_end", "extension_opt_stmt", "argument_stmt", "$@16",
  "argument_end", "yin_element_stmt", "yin_element_arg_str", "status_stmt",
  "status_read_stmt", "$@17", "$@18", "status_arg_str", "feature_stmt",
  "$@19", "feature_end", "feature_opt_stmt", "if_feature_stmt",
  "identity_stmt", "$@20", "identity_end", "identity_opt_stmt",
  "base_stmt", "typedef_arg_str", "typedef_stmt", "type_opt_stmt",
  "type_stmt", "type_arg_str", "type_end", "type_body_stmts",
  "some_restrictions", "union_spec", "fraction_digits_stmt",
  "fraction_digits_arg_str", "length_stmt", "length_arg_str", "length_end",
  "message_opt_stmt", "pattern_stmt", "pattern_arg_str", "pattern_end",
  "pattern_opt_stmt", "modifier_stmt", "enum_specification", "$@21",
  "enum_stmts", "enum_stmt", "enum_arg_str", "enum_end", "enum_opt_stmt",
  "value_stmt", "integer_value_arg_str", "range_stmt", "range_end",
  "path_stmt", "require_instance_stmt", "require_instance_arg_str",
  "bits_specification", "$@22", "bit_stmts", "bit_stmt", "bit_arg_str",
  "bit_end", "bit_opt_stmt", "position_stmt", "position_value_arg_str",
  "error_message_stmt", "error_app_tag_stmt", "units_stmt", "default_stmt",
  "grouping_stmt", "$@23", "grouping_end", "grouping_opt_stmt",
  "data_def_stmt", "container_stmt", "$@24", "container_end",
  "container_opt_stmt", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30",
  "$@31", "leaf_stmt", "leaf_arg_str", "leaf_opt_stmt", "$@32", "$@33",
  "$@34", "leaf_list_arg_str", "leaf_list_stmt", "leaf_list_opt_stmt",
  "$@35", "$@36", "$@37", "list_stmt", "$@38", "$@39", "list_opt_stmt",
  "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "choice_stmt",
  "$@47", "choice_end", "$@48", "choice_opt_stmt", "$@49", "$@50",
  "short_case_case_stmt", "short_case_stmt", "case_stmt", "$@51",
  "case_end", "case_opt_stmt", "$@52", "$@53", "anyxml_stmt", "$@54",
  "anydata_stmt", "$@55", "anyxml_end", "anyxml_opt_stmt", "$@56", "$@57",
  "uses_stmt", "$@58", "uses_end", "uses_opt_stmt", "$@59", "$@60", "$@61",
  "refine_stmt", "$@62", "refine_end", "refine_arg_str",
  "refine_body_opt_stmts", "uses_augment_stmt", "$@63", "$@64",
  "uses_augment_arg_str", "augment_stmt", "$@65", "$@66",
  "augment_opt_stmt", "$@67", "$@68", "$@69", "$@70", "$@71",
  "augment_arg_str", "action_stmt", "$@72", "rpc_stmt", "$@73", "rpc_end",
  "rpc_opt_stmt", "$@74", "$@75", "$@76", "$@77", "input_stmt", "$@78",
  "$@79", "input_output_opt_stmt", "$@80", "$@81", "$@82", "$@83",
  "output_stmt", "$@84", "$@85", "notification_stmt", "$@86",
  "notification_end", "notification_opt_stmt", "$@87", "$@88", "$@89",
  "$@90", "deviation_stmt", "$@91", "$@92", "deviation_opt_stmt",
  "deviation_arg_str", "deviate_body_stmt", "deviate_stmts",
  "deviate_not_supported_stmt", "deviate_add_stmt", "$@93",
  "deviate_add_end", "deviate_add_opt_stmt", "deviate_delete_stmt", "$@94",
  "deviate_delete_end", "deviate_delete_opt_stmt", "deviate_replace_stmt",
  "$@95", "deviate_replace_stmtsep", "deviate_replace_end",
  "deviate_replace_opt_stmt", "when_stmt", "$@96", "when_end",
  "when_opt_stmt", "config_stmt", "config_read_stmt", "$@97", "$@98",
  "config_arg_str", "mandatory_stmt", "mandatory_read_stmt", "$@99",
  "$@100", "mandatory_arg_str", "presence_stmt", "min_elements_stmt",
  "min_value_arg_str", "max_elements_stmt", "max_value_arg_str",
  "ordered_by_stmt", "ordered_by_arg_str", "must_stmt", "$@101",
  "must_end", "unique_stmt", "unique_arg_str", "unique_arg", "key_stmt",
  "key_arg_str", "$@102", "key_opt", "$@103", "range_arg_str",
  "absolute_schema_nodeid", "absolute_schema_nodeids",
  "absolute_schema_nodeid_opt", "descendant_schema_nodeid", "$@104",
  "path_arg_str", "$@105", "$@106", "absolute_path", "absolute_paths",
  "absolute_path_opt", "relative_path", "relative_path_part1",
  "relative_path_part1_opt", "descendant_path", "descendant_path_opt",
  "path_predicate", "path_equality_expr", "path_key_expr",
  "rel_path_keyexpr", "rel_path_keyexpr_part1",
  "rel_path_keyexpr_part1_opt", "rel_path_keyexpr_part2",
  "current_function_invocation", "positive_integer_value",
  "non_negative_integer_value", "integer_value", "integer_value_convert",
  "prefix_arg_str", "identifier_arg_str", "node_identifier",
  "identifier_ref_arg_str", "stmtend", "stmtsep", "unknown_statement",
  "$@107", "string_opt", "string_opt_part1", "string_opt_part2",
  "string_opt_part3", "unknown_statement_end", "unknown_statement2_opt",
  "unknown_statement2_end", "sep_stmt", "optsep", "sep", "whitespace_opt",
  "string", "$@108", "strings", "identifier", "identifiers",
  "identifiers_ref", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,    43,
     123,   125,    59,    47,    91,    93,    61,    40,    41
};
# endif

#define YYPACT_NINF -890

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-890)))

#define YYTABLE_NINF -620

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -890,    32,  -890,  -890,   117,  -890,  -890,  -890,   253,   253,
    -890,  -890,  3098,  3098,   253,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,   -54,   253,   -30,   253,  -890,  -890,   -19,
     340,   340,  -890,  -890,   129,  -890,  -890,    50,   207,   253,
     253,   253,   253,  -890,  -890,  -890,  -890,  -890,   102,  -890,
    -890,   214,  2338,  -890,  2433,  3098,  2433,    55,    55,   253,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,   226,  -890,  -890,   226,
    -890,   226,   253,   253,  -890,  -890,   233,   233,  3098,   253,
    2528,   253,   253,  -890,  -890,  -890,  -890,  -890,   253,  -890,
    3098,  3098,   253,   253,   253,   253,  -890,  -890,  -890,  -890,
      13,    13,  -890,  -890,   253,    19,  -890,    35,   116,   340,
     253,  -890,  -890,  -890,  2433,  2433,  2433,  2433,   253,  -890,
    1035,  1488,    48,   266,  -890,  -890,  -890,    52,   297,   226,
     226,   226,   226,   190,   340,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,   430,   340,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    3098,    36,  3098,  3098,  3098,    36,  3098,  3098,  3098,  3098,
    3098,  3098,  3098,  3098,  3098,  2623,  3098,   253,   340,   253,
     322,  2528,   253,  -890,   340,   340,   340,  -890,   301,  -890,
    3193,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,    77,  -890,   144,  -890,  -890,  -890,
    -890,   149,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
      94,   253,   105,   437,   253,  -890,  -890,  -890,   314,  -890,
     154,   113,   253,   318,   345,   360,   159,   253,   361,   409,
     410,  -890,  -890,   166,   420,   435,  -890,   450,   253,   253,
     314,   118,  -890,   253,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,   340,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   340,   340,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,   340,  -890,  -890,
    -890,  -890,  -890,   253,   190,   340,  -890,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   608,  1323,   340,   340,
     340,   654,   340,   340,   226,   151,   440,  1611,  1579,  1184,
     174,   120,   463,   348,   119,   253,   253,   253,   253,   253,
     253,   253,   253,   253,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,   253,   253,   253,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  1729,   867,   531,   253,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,   282,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   253,   253,
    -890,  -890,  -890,  -890,  -890,  -890,   195,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
     198,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   253,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,   253,  -890,  -890,  -890,  -890,  -890,
     253,  -890,  -890,   210,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   253,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  2433,  2433,  -890,  2433,
    -890,  2623,  2433,  2433,  -890,  -890,  -890,    44,    41,    45,
    -890,  -890,  -890,   253,   253,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,   220,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,   123,   340,   253,   253,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  3098,  3098,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  2433,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  3098,   298,  -890,   340,
     340,   340,   340,   340,  2623,    56,   226,   226,    82,  -890,
     123,   453,  -890,   226,  -890,   340,   340,   340,  -890,  -890,
    -890,   226,  -890,  -890,  -890,   226,  -890,  -890,  -890,  -890,
    -890,   226,   340,   340,   340,  2718,  2718,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   253,
     253,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   226,
    2718,  2718,  -890,  -890,  -890,   340,   340,  -890,  -890,   340,
     340,   340,   340,   340,   340,   340,   226,   340,   340,   340,
     340,   340,   340,   340,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,   226,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,   515,  -890,  -890,  -890,
    -890,  -890,   534,   253,  -890,   253,  -890,   253,   253,   253,
    -890,   226,  -890,  -890,   226,  -890,    26,  -890,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   215,
     225,   340,   340,   340,   340,   253,   253,   253,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,   340,   340,   340,   540,   435,
    -890,   541,   253,   253,    26,   253,   253,  -890,   253,   253,
     226,   253,   253,   226,  -890,  -890,  -890,   226,   418,  -890,
    -890,  -890,  -890,    26,  -890,  -890,  -890,  3193,  -890,  -890,
    -890,   236,   253,   544,   253,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,   545,   564,  -890,   565,  -890,  -890,   340,  -890,
     242,   638,  -890,   325,  -890,   334,   340,  -890,  -890,  3193,
      26,   113,   340,   340,  -890,  -890,  -890,  -890,   340,   196,
     340,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
     271,  -890,   253,   253,   253,   253,   253,   253,  -890,   292,
    -890,  -890,  -890,  -890,  -890,  -890,   253,  -890,   253,  -890,
     234,  -890,  -890,    31,    31,   340,   340,  1406,   253,   270,
     340,   340,  -890,   340,   253,   253,  -890,  -890,  -890,  -890,
    -890,    60,  2433,   237,  2433,  2433,    95,  -890,   340,  2433,
     340,  3098,   334,  -890,  -890,  -890,    26,  -890,  -890,  -890,
     293,  -890,   309,  1611,   279,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,    96,  -890,   448,   330,   216,  2433,  2433,  -890,
     226,  -890,   571,  -890,  -890,   226,   251,   399,   576,  -890,
     590,  -890,  -890,  -890,  -890,   226,   340,   594,  -890,   325,
     601,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
     321,   253,   253,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   226,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,   226,   226,  -890,   253,  -890,  -890,  -890,  -890,  3193,
    -890,  -890,   323,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,   253,   253,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,   340,   340,   340,   340,  -890,    56,    82,   340,   340,
     340,   253,   253,  -890,   340,   340,   340,  -890,  -890,   340,
     340,  -890,   251,  -890,  2813,   340,   340,   340,   340,   340,
     340,   340,   226,   226,   342,   332,  -890,  -890,  -890,   204,
     222,   500,   397,   339,  -890,  -890,  -890,   436,  -890,   362,
     253,  -890,  -890,  -890,  -890,  -890,  -890,  -890,   253,  -890,
    -890,  -890,  -890,  -890,  -890,   253,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  3193,  -890,  2433,   254,    41,   436,   436,
     226,  -890,  -890,  -890,  -890,   226,  -890,  -890,  -890,   226,
    -890,   343,   370,  -890,  -890,   253,  -890,   253,  -890,   436,
     395,   436,  -890,   436,   374,   382,   436,   436,   380,   479,
    -890,   436,  -890,  -890,   394,  2908,   436,  -890,  -890,  -890,
    3003,  -890,   403,   436,  3193,  -890
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     669,     0,     2,     3,     0,     1,   667,   668,     0,     0,
     670,   669,     0,     0,   671,   685,     4,   684,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   640,     9,   765,
     669,    16,   669,     0,   639,     0,     6,   648,   648,     5,
      12,    19,   669,   651,    10,   650,   649,    17,     0,   654,
       0,     0,     0,    25,    13,    14,    15,    25,     0,    20,
       7,     0,   656,   655,     0,     0,     0,    49,    49,     0,
      22,   669,   669,   661,   652,   669,   677,   680,   678,   682,
     683,   681,   653,   669,   679,   676,     0,   674,   637,     0,
     669,     0,     0,     0,    26,    27,    58,    58,     0,     8,
     663,   659,   657,   648,   648,    24,   669,    48,   638,    23,
       0,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      71,    71,    45,   642,   654,     0,   641,   658,     0,   646,
     675,    28,    35,    36,     0,     0,     0,     0,     0,   648,
       0,     0,     0,     0,   662,   669,   648,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   669,   648,    73,    74,    75,    76,    77,    78,
     237,   238,   239,   240,   241,   242,   243,   244,    79,    80,
      81,    82,   669,   648,   669,   669,   664,     0,   647,   648,
     648,    38,   648,    55,    56,    54,    57,    68,    70,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    72,    18,
       0,   663,   665,   669,    30,    40,    37,   669,     0,   373,
       0,   445,   426,   599,   669,   334,   245,    83,   505,   497,
     669,   108,   224,   118,     0,   271,     0,   287,   306,   480,
     448,     0,   129,   766,   645,   390,   669,   669,   375,    46,
       0,   660,     0,     0,    69,   648,    62,    61,     0,   597,
       0,   598,   444,     0,     0,     0,     0,   504,     0,     0,
       0,   648,   648,     0,     0,     0,   648,     0,   643,   644,
       0,     0,   669,     0,   648,    34,    31,    32,    33,    39,
      43,    41,    42,    63,   648,   377,   374,   648,   600,   648,
     336,   335,   648,   247,   246,   648,    85,    84,   648,   648,
     110,   109,   648,   226,   225,   648,   120,   119,   272,   289,
     648,   648,   482,   481,   648,   450,   449,   131,   648,   392,
     391,   376,   648,   666,     0,    29,    65,   379,   429,   339,
     249,    87,   500,   112,   228,   122,     0,     0,   309,   484,
     452,     0,   394,    47,     0,     0,     0,   427,   337,     0,
       0,   498,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,   285,   286,   284,   275,   276,
     278,   281,   273,   282,   283,   279,     0,     0,     0,   288,
     304,   305,   303,   292,   293,   296,   295,   290,   299,   300,
     301,   302,   297,   307,     0,     0,     0,   130,   136,   137,
     135,   648,   133,   134,     0,    44,    64,    66,    67,   378,
     388,   389,   387,   382,   380,   385,   386,   383,     0,     0,
     434,   435,   433,   432,   436,   442,     0,   438,   440,   430,
     347,   348,   346,   342,   343,   353,   354,   355,   356,   359,
       0,   349,   351,   352,   357,   358,   340,   344,   345,     0,
     248,   258,   259,   257,   252,   266,   260,   268,   262,   264,
     250,   256,   255,   253,     0,    86,    90,    91,    88,    89,
       0,   501,   502,     0,   111,   115,   116,   114,   113,   227,
     230,   231,   229,   648,   648,   648,   648,   648,     0,   121,
     126,   127,   125,   124,   123,   555,     0,     0,   562,     0,
     101,     0,     0,     0,   648,   648,   648,     0,     0,     0,
     648,   648,   648,     0,     0,   322,   323,   321,   312,   324,
     326,   332,     0,   328,   330,   310,   317,   318,   319,   320,
     313,   316,   315,   483,   489,   490,   488,   487,   491,   493,
     495,   485,   669,   669,   451,   455,   456,   454,   453,   457,
     459,   461,   463,     0,   132,     0,     0,   393,   399,   400,
     398,   397,   401,   403,   395,   648,   648,     0,     0,   648,
     648,   428,   648,   648,   648,   338,   648,   648,     0,   648,
     648,   648,   648,   648,   648,   648,     0,     0,   499,   233,
     232,   234,   235,   236,     0,     0,     0,     0,     0,   580,
       0,     0,   139,     0,   547,   277,   274,   280,   630,   669,
     575,     0,   669,   631,   571,     0,   632,   669,   669,   669,
     579,     0,   294,   291,   298,     0,     0,   648,   648,   648,
     308,   648,   648,   648,   648,   648,   648,   648,   648,   465,
     477,   648,   648,   648,   648,   669,   669,   669,   107,     0,
       0,     0,   648,   648,   648,   381,   384,   360,   446,   437,
     443,   439,   441,   431,   350,   341,     0,   267,   261,   269,
     263,   265,   251,   254,    92,   669,   669,   669,   669,   503,
     669,   506,   508,   510,   509,     0,   669,   669,   560,   556,
     223,   117,   669,   669,   567,   563,     0,   102,   648,   140,
     138,   222,     0,   573,   572,   574,   569,   570,   578,   577,
     576,     0,   589,   590,     0,   584,     0,   601,   325,   327,
     333,   329,   331,   311,   314,   492,   494,   496,   486,     0,
       0,   458,   460,   462,   464,   104,   106,   105,   100,   425,
     421,   669,   410,   405,   669,   402,   404,   396,     0,     0,
     568,     0,   512,   525,     0,   534,   507,   128,   559,   558,
       0,   566,   565,     0,   648,   582,   581,     0,   145,   648,
     549,   548,   592,     0,   586,   585,   588,     0,   599,   648,
     648,     0,   424,     0,   409,   648,   362,   361,   447,   648,
      94,   648,     0,     0,   511,     0,   557,   564,   162,   103,
       0,   142,   143,     0,   144,     0,   551,   591,   595,     0,
       0,   602,   468,   468,   648,   648,   407,   406,   364,     0,
      93,   648,   514,   513,   648,   527,   526,   648,   537,   535,
       0,   141,     0,     0,     0,     0,     0,     0,   148,     0,
     151,   149,   150,   648,   147,   146,     0,   648,     0,   205,
       0,   593,   587,   466,   478,   429,   411,     0,     0,     0,
     516,   529,   539,   536,     0,     0,   583,   165,   166,   163,
     164,     0,     0,   603,     0,     0,     0,   648,   152,     0,
     180,     0,   204,   550,   552,   553,     0,   471,   473,   475,
       0,   469,     0,   422,     0,   363,   369,   370,   368,   367,
     371,   365,     0,    95,     0,     0,     0,     0,     0,   157,
       0,   669,     0,   159,   607,     0,     0,     0,     0,   168,
       0,   596,   669,   669,   202,     0,   153,     0,   183,   179,
       0,   208,   206,   594,   648,   648,   648,   467,   648,   479,
       0,     0,     0,   408,   419,   420,   414,   415,   416,   413,
     417,   418,   648,   648,   648,   669,   669,    99,     0,   515,
     517,   520,   521,   522,   523,   524,   648,   519,   528,   530,
     533,   648,   532,   538,   648,   541,   542,   543,   544,   545,
     546,     0,     0,   155,   156,   648,   160,   648,   198,     0,
     610,   604,     0,   606,   614,   648,   169,   648,   648,   196,
     195,   201,   200,   199,   648,   184,   182,   648,   648,   209,
     648,   472,   474,   476,   470,   423,     0,     0,   412,   372,
     366,    98,    97,    96,   518,   531,   540,   221,   220,   162,
     158,   619,   609,   613,     0,   171,   167,   162,   186,   181,
     211,   207,     0,     0,     0,   608,   611,   615,   612,   617,
       0,     0,     0,     0,   554,   561,   161,   672,   616,     0,
       0,   170,   175,   176,   172,   173,   174,   197,     0,   185,
     190,   191,   189,   187,   188,     0,   210,   215,   216,   214,
     212,   213,   673,     0,   618,     0,     0,     0,   672,   672,
       0,   635,   636,   633,   194,     0,   669,   634,   219,     0,
     669,     0,     0,   177,   192,   193,   217,   218,   620,   672,
       0,   672,   621,   672,     0,     0,   672,   672,     0,     0,
     629,   672,   622,   625,     0,     0,   672,   626,   627,   624,
     672,   623,     0,   672,     0,   628
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -890,  -890,   765,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,   385,  -890,   389,  -890,  -890,
    -890,   338,  -890,  -890,  -890,  -890,   180,  -890,  -890,  -890,
    -231,   386,  -890,  -890,   175,   854,   372,  -890,  -890,  -890,
    -890,  -890,   103,  -890,   337,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -438,  -398,  -890,  -890,  -146,
    -890,  -890,  -890,  -890,  -428,  -890,  -890,  -890,  -890,  -338,
    -890,  -348,  -890,  -407,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -889,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -460,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -408,  -890,  -890,
    -890,  -890,  -890,  -580,  -575,  -412,  -426,  -340,  -890,  -890,
    -890,  -406,   133,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,   155,  -890,  -890,  -890,  -890,  -890,  -890,
     160,  -890,  -890,  -890,  -890,   170,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,   171,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,   182,  -890,  -890,  -890,  -890,
    -890,   183,  -890,   189,  -890,   227,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -307,  -890,
    -890,  -890,  -890,  -890,  -890,  -293,  -890,  -890,  -890,  -200,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -260,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -411,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,  -890,
    -890,  -890,  -890,  -890,  -890,  -374,  -890,  -890,  -890,  -574,
     140,  -890,  -890,  -462,  -464,   260,  -890,  -890,  -459,  -322,
    -448,  -890,  -404,  -890,   202,  -890,  -409,  -890,  -890,  -841,
    -890,  -228,  -890,  -890,  -890,  -284,  -890,  -890,  -350,   425,
    -173,  -734,  -890,  -890,  -890,  -890,  -421,  -447,  -890,  -890,
    -418,  -890,  -890,  -890,  -427,  -890,  -890,  -890,  -502,  -890,
    -890,  -890,  -593,  -461,  -890,  -890,  -890,    -6,  -168,  -582,
     532,  1233,  -890,  -890,   536,  -890,  -890,  -890,  -890,   427,
    -890,    -4,    97,   535,  -392,  -113,  -890,   599,   186,  -122,
    -890
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    97,   102,   109,   141,     2,   103,   123,   114,
       3,   105,   127,   117,   128,   124,   125,   137,   164,   217,
     342,   201,   165,   218,   272,   343,   375,   140,   212,   371,
     126,   166,   186,   187,   967,   968,   190,   209,   308,   347,
     426,   445,   279,   307,   210,   243,   244,   355,   397,   450,
     568,   851,   891,   959,  1058,   522,   467,   700,   867,   749,
     245,   358,   401,   452,   523,   246,   360,   407,   454,   594,
     331,   247,   441,   469,   701,   800,   900,   901,   939,   940,
    1010,   941,  1012,  1087,   930,   942,  1018,  1097,  1150,  1164,
     902,   903,  1029,   947,  1027,  1106,  1152,  1174,  1195,   943,
    1100,   944,   945,  1025,   904,   905,   982,   949,  1030,  1110,
    1153,  1181,  1199,   969,   970,   470,   471,   248,   359,   404,
     453,   249,   250,   354,   394,   449,   684,   685,   680,   682,
     683,   679,   681,   251,   324,   436,   605,   604,   606,   326,
     252,   437,   611,   610,   612,   253,   363,   622,   493,   733,
     734,   727,   728,   731,   732,   729,   254,   353,   391,   540,
     448,   677,   676,   541,   542,   525,   848,   887,   957,  1054,
    1053,   255,   348,   256,   370,   386,   446,   665,   666,   257,
     367,   420,   504,   754,   752,   753,   662,   883,   917,   843,
     994,   663,   881,  1040,   840,   258,   350,   526,   447,   674,
     669,   672,   673,   670,   312,   527,   849,   259,   365,   416,
     495,   741,   742,   743,   744,   651,   829,   990,   953,  1038,
    1034,  1035,  1036,   652,   830,   992,   260,   364,   413,   494,
     738,   735,   736,   737,   261,   356,   573,   451,   319,   779,
     780,   781,   782,   892,   923,  1004,   783,   893,   926,  1005,
     784,   895,   962,   929,  1006,   529,   802,   871,   950,  1047,
     473,   695,   860,   789,  1048,   474,   698,   863,   795,   562,
     489,   715,   490,   711,   491,   721,   991,   796,   866,   631,
     815,   875,   632,   812,   873,   907,   986,  1020,   313,   314,
     351,   816,   878,  1015,  1016,  1017,  1090,  1091,  1132,  1093,
    1094,  1134,  1148,  1158,  1145,  1188,  1212,  1222,  1223,  1225,
    1230,  1213,   716,   717,  1196,  1197,   159,   202,   817,   335,
     876,   110,   115,   119,   131,   132,   152,   197,   144,   195,
     266,   116,     4,   133,  1183,   156,   176,   157,    99,   100,
     337
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   388,   194,   500,    11,    11,    98,   101,   468,   483,
      10,   486,   569,   160,   712,   503,   841,   844,   513,   702,
     533,   554,   534,   161,   578,   485,   593,   475,   492,   502,
     484,     6,     5,     7,   501,   225,   528,   517,   559,   482,
     563,   524,   587,   557,    16,   627,   107,   585,   512,    16,
     532,   553,    16,    16,   577,   582,   592,   227,   708,   713,
     228,   708,   472,   487,    16,   618,   637,   648,    16,   339,
     108,   232,   514,   -21,   546,   560,   661,   708,   234,   235,
     112,   236,   624,   208,   630,   641,   459,   621,   640,   628,
      16,   219,   220,   221,   222,   617,   636,   647,   162,   163,
      10,   555,    10,    16,    16,   583,   660,   239,    14,   556,
     240,   376,   785,   584,    10,    11,    11,    11,    11,   625,
     214,     6,     6,     7,     7,   139,   173,   113,   174,   241,
     664,    16,   122,   194,   215,    11,   183,   718,   709,   310,
     719,   588,   349,   910,   786,   619,   638,   649,   263,   787,
     183,   183,   269,   620,   639,   650,   558,   570,    11,    11,
     586,   457,   192,  1067,  1072,    10,    10,    10,    10,   121,
     792,     8,   185,   336,    10,   793,   373,   361,    11,    11,
      11,    11,   183,  1022,  1055,   120,   185,   185,  1023,  1056,
      11,     9,   460,   121,   564,   372,    10,   104,    16,   106,
     623,     6,   277,     7,    11,   183,   374,   113,   745,   118,
     746,   122,     6,   747,     7,   130,   310,   216,   185,   422,
     589,    11,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,    11,   169,   170,
    1144,   185,   171,  1041,   362,    16,   456,   496,  1151,   366,
     172,  -605,   506,   183,   387,   964,   965,   178,     6,   398,
       7,   182,    16,    10,   183,   183,   410,  1042,   476,   477,
    1191,  1192,  1193,   200,   309,   565,   315,   316,   317,   958,
     321,   322,   323,   325,   327,   328,   329,   330,   332,   185,
     338,   461,   184,    10,   462,    10,   671,    10,    10,   675,
     185,   185,   183,   655,   964,   965,  1041,  -619,  -619,   456,
     183,   688,   267,   183,   142,   879,   143,  1073,   154,  1160,
     154,   730,   154,  1161,   457,   880,   173,     6,   174,     7,
    1042,   476,   477,   113,   459,   983,   914,    10,   185,   297,
      10,   188,   188,   931,   549,     6,   185,     7,    10,   185,
     656,   113,   225,    10,  1089,   460,   196,   946,   948,   299,
     456,   301,   302,   463,    10,    10,   264,   461,   265,    11,
     183,  1003,   966,   183,   227,   964,   965,   228,  1011,   183,
    1043,   457,   775,   657,   776,   459,   121,   777,   232,   778,
     154,   154,   154,   154,  1037,   234,   235,   270,   236,   271,
     341,   345,  1175,   346,   344,   237,   185,   614,   462,   185,
    1039,   352,   496,  1092,   384,   185,   385,   357,   389,    10,
     390,   460,  1115,     6,   239,     7,  1133,   240,   183,   113,
    1062,  1068,  1077,   368,   369,     6,  1157,     7,   303,   457,
    1176,  1182,  -203,  1156,   519,   392,   241,   393,  1208,   579,
    -178,    11,    11,    11,    11,    11,    11,    11,    11,    11,
     395,   399,   396,   400,   185,  1089,  1157,   455,   183,   423,
     496,   183,    11,    11,    11,  1041,  1209,  1168,   456,   336,
    1211,  1216,   457,   696,   697,  1217,   699,   196,  1220,   703,
     704,   458,    11,  1221,   183,   459,   196,  1226,  1169,  1042,
     476,   477,   129,   459,   185,   457,  1233,   185,   373,   402,
     405,   403,   406,   460,    11,    11,   138,   377,   381,   203,
     411,   463,   412,   380,   167,   614,   462,   444,   211,   999,
     185,   183,   977,   964,   965,   414,   460,   415,   379,   191,
    1063,   509,  1078,    12,    13,    11,  1050,   989,   989,  1059,
     418,  1000,   419,   798,   797,   799,  1064,   813,  1079,   998,
      11,   388,   183,   938,   574,   766,    11,   185,  1046,  1107,
    1165,   232,   336,   457,  1032,  1166,   642,   488,  1061,  1070,
    1076,   535,   528,  1001,    11,  1052,   515,   524,   547,   561,
    1051,   643,  1060,  1069,  1075,  1066,  1071,   421,   185,  1074,
    1065,  1167,  1080,   536,   460,   987,   987,   239,   537,    11,
      11,   465,   480,   988,   988,   864,   498,   865,   538,   539,
     507,   510,   520,   530,   551,   566,   571,   575,   580,   590,
     543,   544,   644,   626,   869,   455,   870,   545,   456,   183,
     885,   889,   886,   890,   915,   921,   916,   922,   993,   888,
     457,    11,    11,   954,  1142,   134,   135,   136,  1143,   458,
     588,   757,   758,   459,   924,   927,   925,   928,   615,   634,
     645,  1085,  1049,  1086,   168,   185,  1095,   932,  1096,   658,
     774,   460,   952,   461,   456,   183,   462,   933,   175,   463,
    1098,   177,  1099,   179,  1104,   629,  1105,   180,   181,   934,
     935,  1108,  1033,  1109,   936,   911,   516,   937,   548,   464,
     320,  1146,  1184,  -154,  1172,  1179,  1147,   204,   205,   206,
     207,   185,  1159,  1227,  1173,  1180,  1200,   496,   340,   461,
     213,   153,   462,     0,     0,    10,    10,     0,     0,   739,
     740,   951,     0,   223,     0,     0,     0,     0,     0,     0,
       0,   273,   274,   275,   276,   497,     0,     0,     0,     0,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,     0,     0,     0,
       0,     0,   154,   154,     0,   154,     0,     0,   154,   154,
       0,     0,     0,     0,     0,     0,  1201,  1202,     0,    10,
       0,    10,     0,    10,    10,    10,   803,     0,     0,   805,
       0,     0,    11,     0,   807,   808,   809,  1210,     0,  1214,
       0,  1215,     0,     0,  1218,  1219,     0,     0,     0,  1224,
       0,    10,    10,    10,  1229,     0,     0,     0,  1232,     0,
       0,  1234,   835,   836,   837,     0,     0,     0,    10,    10,
      10,    10,    10,     0,    10,    10,     0,    10,    10,  1013,
       0,  1019,  1021,     0,   154,     0,  1028,     0,     0,    11,
       0,   225,   852,   853,   854,   855,     0,   856,    10,     0,
      10,     0,     0,   858,   859,     0,     0,     0,     0,   861,
     862,     0,     0,   227,  1081,  1082,   228,     0,   183,   155,
     158,   155,     0,     0,     0,     0,    11,   232,   424,   457,
       0,   196,   196,     0,   234,   235,     0,   236,     0,     0,
       0,  1131,   459,     0,     0,     0,     0,     0,    11,    11,
      11,    11,    11,    11,   185,     0,   196,   196,   882,     0,
     460,   884,    11,   239,    11,     0,   240,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
      11,    11,     0,     0,     0,   241,  1149,     0,   633,   155,
     155,   155,   155,     0,     0,  1031,   505,     0,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,   278,     0,
     595,   596,   597,   598,   599,   600,   601,   602,   603,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   607,   608,   609,     0,  1189,     0,     0,     0,     0,
     189,   189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   653,     0,     0,     0,     0,     0,    11,    11,   225,
       0,     0,     0,     0,     0,     0,   311,     0,     0,     0,
     318,     0,     0,   667,   668,     0,   226,  1228,     0,     0,
     334,   227,  1231,   196,   228,     0,  1235,     0,     0,     0,
     229,   230,  1190,   231,     0,   232,   233,     0,     0,     0,
      10,     0,   234,   235,   678,   236,     0,     0,     0,     0,
       0,     0,   237,     0,     0,   196,     0,    10,    10,   686,
       0,     0,     0,     0,     0,   687,     0,   238,  1084,     0,
       0,   239,     0,     0,   240,     0,     0,    10,    10,  1101,
    1102,     0,     0,   694,     0,   984,     0,     0,     0,     0,
       0,     0,   996,   241,     0,     0,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   725,   726,
       0,     0,  1121,  1122,     0,     0,    11,     0,   154,     0,
     154,   154,     0,     0,    11,   154,     0,     0,   520,  1044,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   278,
     750,   751,     0,   154,   154,     0,   378,   382,     0,     0,
       0,    10,     0,    10,     0,     0,     0,     0,     0,     0,
     227,   455,     0,   228,     0,   183,     0,     0,     0,     0,
       0,     0,     0,     0,   232,     0,   457,     0,   790,   791,
       0,   234,   235,     0,   236,   801,     0,     0,     0,   459,
       0,   237,     0,   804,     0,     0,     0,   806,     0,   549,
       0,   185,     0,   810,     0,     0,     0,   460,     0,     0,
     239,     0,     0,   240,     0,   463,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,     0,     0,     0,     0,
     519,   838,   241,     0,     0,   550,     0,     0,     0,     0,
     466,   481,     0,  1205,     0,   499,     0,  1207,   850,   508,
     511,   521,   531,   552,   567,   572,   576,   581,   591,     0,
       0,     0,     0,     0,     0,     0,     0,   857,     0,     0,
     196,     0,     0,     0,     0,  1162,     0,  1170,  1177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,   872,     0,     0,   874,   616,   635,   646,
     455,   877,     0,   456,   183,     0,     0,     0,   659,     0,
       0,   155,   155,     0,   155,   457,   334,   155,   155,   196,
       0,   154,   710,   714,   720,   476,   477,     0,   459,     0,
       0,   478,     0,     0,     0,     0,   894,     0,     0,     0,
     185,     0,   896,     0,     0,   897,   460,     0,   461,   899,
       0,   462,     0,     0,   463,   908,   198,   199,   909,     0,
     225,   196,     0,     0,     0,     0,   196,     0,   748,     0,
     196,     0,     0,     0,   479,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,   228,     0,   183,     0,     0,
       0,     0,   224,   155,     0,   877,     0,     0,   457,   268,
       0,     0,     0,   234,   235,     0,   236,     0,     0,   334,
     788,     0,     0,   794,     0,   748,     0,   971,   972,   973,
     974,   975,   976,   185,     0,     0,   298,     0,     0,   460,
       0,   979,     0,   981,     0,   240,     0,   463,     0,     0,
     811,   814,   225,  1002,     0,     0,   300,     0,     0,  1007,
    1008,     0,   304,   305,   241,   306,     0,   995,     0,   226,
       0,     0,     0,     0,   227,   839,   842,   228,   908,     0,
       0,   909,     0,   229,   230,     0,   231,     0,   232,   233,
       0,     0,     0,     0,     0,   234,   235,     0,   236,     0,
       0,     0,  1083,     0,     0,   237,     0,  1088,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1103,     0,     0,
     238,     0,     0,     0,   239,     0,     0,   240,     0,     0,
       0,     0,     0,     0,     0,     0,  1116,  1117,   383,     0,
       0,     0,     0,   225,     0,     0,   241,     0,     0,   262,
    1123,     0,     0,     0,   408,   409,     0,     0,     0,   417,
       0,     0,     0,     0,   518,   227,   455,   425,   228,   456,
     183,     0,     0,  1127,  1128,   225,     0,   427,     0,     0,
     428,   457,   429,     0,     0,   430,   234,   235,   431,   236,
     458,   432,   433,     0,     0,   434,   518,   227,   435,     0,
     228,     0,   183,   438,   439,     0,   185,   440,     0,     0,
       0,   442,   460,   457,     0,   443,     0,     0,   234,   235,
     463,   236,     0,     0,     0,     0,     0,     0,   237,     0,
       0,     0,     0,     0,  1154,  1155,     0,   241,   185,     0,
       0,     0,     0,     0,   496,     0,     0,     0,     0,     0,
     240,     0,   463,     0,     0,  1185,     0,     0,     0,     0,
       0,     0,     0,  1186,     0,     0,     0,   519,     0,   241,
    1187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1203,     0,     0,     0,     0,  1204,     0,     0,
       0,  1206,     0,   225,   654,     0,  1009,   155,  1014,   155,
     155,  1024,     0,     0,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,   455,     0,   228,     0,
     183,     0,     0,     0,     0,     0,     0,  1057,     0,   232,
       0,   457,   155,   155,     0,   613,   234,   235,     0,   236,
       0,   476,   477,     0,   459,     0,   237,   478,     0,     0,
       0,     0,     0,     0,     0,     0,   185,     0,     0,     0,
       0,     0,   460,     0,   985,   239,   614,     0,   240,     0,
     463,   997,     0,     0,     0,     0,   689,   690,   691,   692,
     693,     0,     0,     0,     0,   519,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   705,   706,   707,
       0,     0,     0,   722,   723,   724,     0,   521,  1045,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   788,   794,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   755,   756,
       0,     0,   759,   760,     0,   761,   762,   763,     0,   764,
     765,     0,   767,   768,   769,   770,   771,   772,   773,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,  1194,  1198,     0,     0,     0,     0,     0,     0,     0,
     818,   819,   820,     0,   821,   822,   823,   824,   825,   826,
     827,   828,     0,     0,   831,   832,   833,   834,     0,     0,
       0,     0,     0,     0,     0,   845,   846,   847,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1163,     0,  1171,  1178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   868,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   898,     0,     0,
       0,     0,   906,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   912,   913,     0,     0,     0,     0,   918,     0,
       0,     0,   919,     0,   920,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   955,   956,     0,
       0,     0,     0,     0,   960,     0,     0,   961,     0,     0,
     963,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   978,     0,     0,     0,
     980,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1026,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1111,  1112,  1113,
       0,  1114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1118,  1119,  1120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1124,
       0,     0,     0,     0,  1125,     0,     0,  1126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1129,     0,
    1130,     0,     0,     0,     0,     0,     0,     0,  1135,     0,
    1136,  1137,     0,     0,     0,     0,     0,  1138,     0,     0,
    1139,  1140,    15,  1141,     0,     0,   145,   146,    17,   147,
     148,     0,     0,     0,   149,   150,   151,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    15,     0,     0,
       0,    16,   146,    17,   147,   148,     0,     0,     0,   149,
     150,   151,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    15,     6,     0,     7,     0,     0,    17,   193,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    15,     0,     0,
       0,    16,     0,    17,   333,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    15,     0,     0,     0,    16,     0,    17,   193,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    15,     0,     0,
       0,     0,     0,    17,   193,     0,     0,  1092,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    15,     0,     0,     0,     0,     0,    17,   193,
       0,     0,  1221,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    15,  1182,     0,
       0,     0,     0,    17,   193,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    15,     0,     0,     0,    16,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    15,     0,     0,
       0,     0,     0,    17,   193,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

static const yytype_int16 yycheck[] =
{
       4,   351,   170,   441,     8,     9,    12,    13,   436,   437,
      14,   437,   450,   135,   607,   441,   750,   751,   446,   601,
     448,   449,   448,   136,   452,   437,   454,   436,   437,   441,
     437,     5,     0,     7,   441,     4,   447,   446,   449,   437,
     449,   447,   453,   449,     8,   493,   100,   453,   446,     8,
     448,   449,     8,     8,   452,   453,   454,    26,    17,    18,
      29,    17,   436,   437,     8,   493,   494,   495,     8,   300,
     100,    40,   446,    23,   448,   449,   504,    17,    47,    48,
      99,    50,   493,    70,   493,   494,    55,   493,   494,   493,
       8,   204,   205,   206,   207,   493,   494,   495,    43,    44,
     104,   449,   106,     8,     8,   453,   504,    76,    11,   449,
      79,   342,   694,   453,   118,   119,   120,   121,   122,   493,
     101,     5,     5,     7,     7,    23,   100,    11,   102,    98,
     504,     8,    82,   301,    99,   139,    31,    92,    94,   103,
      95,    22,   310,   877,    88,   493,   494,   495,   100,    93,
      31,    31,   100,   493,   494,   495,   449,    37,   162,   163,
     453,    42,   168,  1004,  1005,   169,   170,   171,   172,    64,
      88,    54,    67,   295,   178,    93,    71,   100,   182,   183,
     184,   185,    31,    88,    88,    56,    67,    67,    93,    93,
     194,    74,    73,    64,    20,   101,   200,   100,     8,   102,
     493,     5,    12,     7,   208,    31,   101,    11,    85,   112,
      87,    82,     5,    90,     7,     8,   103,   101,    67,   101,
     101,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   141,   142,
    1129,    67,   145,    27,   100,     8,    30,    73,  1137,   100,
     153,    14,   101,    31,   100,    33,    34,   160,     5,   100,
       7,    28,     8,   267,    31,    31,   100,    51,    52,    53,
      16,    17,    18,   176,   280,   101,   282,   283,   284,    83,
     286,   287,   288,   289,   290,   291,   292,   293,   294,    67,
     296,    75,    59,   297,    78,   299,   101,   301,   302,   101,
      67,    67,    31,    21,    33,    34,    27,   103,   104,    30,
      31,   101,   215,    31,   100,   100,   102,   101,   132,    97,
     134,   101,   136,   101,    42,   100,   100,     5,   102,     7,
      51,    52,    53,    11,    55,   101,   100,   341,    67,   242,
     344,   166,   167,   101,    65,     5,    67,     7,   352,    67,
      68,    11,     4,   357,   103,    73,   170,    32,    24,   262,
      30,   264,   265,    81,   368,   369,   100,    75,   102,   373,
      31,   101,   101,    31,    26,    33,    34,    29,   971,    31,
     101,    42,    84,   101,    86,    55,    64,    89,    40,    91,
     204,   205,   206,   207,   101,    47,    48,   100,    50,   102,
     303,   100,    63,   102,   307,    57,    67,    77,    78,    67,
     101,   314,    73,    14,   100,    67,   102,   320,   100,   423,
     102,    73,   101,     5,    76,     7,   103,    79,    31,    11,
    1004,   101,  1006,   336,   337,     5,   104,     7,     8,    42,
     101,     5,    24,   101,    96,   100,    98,   102,   105,   101,
      32,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     100,   100,   102,   102,    67,   103,   104,    27,    31,   372,
      73,    31,   476,   477,   478,    27,   106,    80,    30,   601,
      85,   107,    42,   596,   597,   103,   599,   301,   108,   602,
     603,    51,   496,    14,    31,    55,   310,   103,   101,    51,
      52,    53,   117,    55,    67,    42,   103,    67,    71,   100,
     100,   102,   102,    73,   518,   519,   127,   342,   343,   181,
     100,    81,   102,   343,   138,    77,    78,   424,   191,   957,
      67,    31,   939,    33,    34,   100,    73,   102,   101,   167,
    1004,   101,  1006,     8,     9,   549,   994,   953,   954,   101,
     100,   957,   102,   100,   700,   102,  1004,   725,  1006,   957,
     564,   911,    31,   901,   101,   678,   570,    67,   994,  1029,
    1150,    40,   694,    42,   982,  1150,    45,   437,  1004,  1005,
    1006,   448,   993,   957,   588,   994,   446,   993,   448,   449,
     994,    60,  1004,  1005,  1006,  1004,  1005,   370,    67,  1006,
    1004,   101,  1006,   448,    73,   953,   954,    76,   448,   613,
     614,   436,   437,   953,   954,   100,   441,   102,   448,   448,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     448,   448,   101,   493,   100,    27,   102,   448,    30,    31,
     100,   100,   102,   102,   100,   100,   102,   102,   955,   849,
      42,   655,   656,   913,  1116,   120,   121,   122,  1117,    51,
      22,   667,   668,    55,   100,   100,   102,   102,   493,   494,
     495,   100,   994,   102,   139,    67,   100,    39,   102,   504,
     686,    73,   910,    75,    30,    31,    78,    49,   156,    81,
     100,   159,   102,   161,   100,   493,   102,   162,   163,    61,
      62,   100,   986,   102,    66,   878,   446,    69,   448,   101,
     285,  1132,  1159,    75,  1152,  1153,  1134,   182,   183,   184,
     185,    67,  1149,  1225,  1152,  1153,  1187,    73,   301,    75,
     194,   132,    78,    -1,    -1,   739,   740,    -1,    -1,   642,
     643,   909,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,   101,    -1,    -1,    -1,    -1,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,   596,   597,    -1,   599,    -1,    -1,   602,   603,
      -1,    -1,    -1,    -1,    -1,    -1,  1188,  1189,    -1,   803,
      -1,   805,    -1,   807,   808,   809,   709,    -1,    -1,   712,
      -1,    -1,   816,    -1,   717,   718,   719,  1209,    -1,  1211,
      -1,  1213,    -1,    -1,  1216,  1217,    -1,    -1,    -1,  1221,
      -1,   835,   836,   837,  1226,    -1,    -1,    -1,  1230,    -1,
      -1,  1233,   745,   746,   747,    -1,    -1,    -1,   852,   853,
     854,   855,   856,    -1,   858,   859,    -1,   861,   862,   972,
      -1,   974,   975,    -1,   678,    -1,   979,    -1,    -1,   873,
      -1,     4,   775,   776,   777,   778,    -1,   780,   882,    -1,
     884,    -1,    -1,   786,   787,    -1,    -1,    -1,    -1,   792,
     793,    -1,    -1,    26,  1007,  1008,    29,    -1,    31,   134,
     135,   136,    -1,    -1,    -1,    -1,   910,    40,   373,    42,
      -1,   725,   726,    -1,    47,    48,    -1,    50,    -1,    -1,
      -1,  1089,    55,    -1,    -1,    -1,    -1,    -1,   932,   933,
     934,   935,   936,   937,    67,    -1,   750,   751,   841,    -1,
      73,   844,   946,    76,   948,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   958,    -1,    -1,    -1,    -1,    -1,
     964,   965,    -1,    -1,    -1,    98,  1134,    -1,   101,   204,
     205,   206,   207,    -1,    -1,   981,   444,    -1,    -1,    -1,
      -1,    -1,   986,    -1,    -1,    -1,    -1,    -1,   223,    -1,
     455,   456,   457,   458,   459,   460,   461,   462,   463,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   476,   477,   478,    -1,  1183,    -1,    -1,    -1,    -1,
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   496,    -1,    -1,    -1,    -1,    -1,  1041,  1042,     4,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
     285,    -1,    -1,   518,   519,    -1,    21,  1225,    -1,    -1,
     295,    26,  1230,   877,    29,    -1,  1234,    -1,    -1,    -1,
      35,    36,  1185,    38,    -1,    40,    41,    -1,    -1,    -1,
    1084,    -1,    47,    48,   549,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,   909,    -1,  1101,  1102,   564,
      -1,    -1,    -1,    -1,    -1,   570,    -1,    72,  1011,    -1,
      -1,    76,    -1,    -1,    79,    -1,    -1,  1121,  1122,  1022,
    1023,    -1,    -1,   588,    -1,   950,    -1,    -1,    -1,    -1,
      -1,    -1,   957,    98,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   613,   614,
      -1,    -1,  1055,  1056,    -1,    -1,  1160,    -1,   972,    -1,
     974,   975,    -1,    -1,  1168,   979,    -1,    -1,   993,   994,
      -1,  1175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,   424,
     655,   656,    -1,  1007,  1008,    -1,   342,   343,    -1,    -1,
      -1,  1205,    -1,  1207,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,   696,   697,
      -1,    47,    48,    -1,    50,   703,    -1,    -1,    -1,    55,
      -1,    57,    -1,   711,    -1,    -1,    -1,   715,    -1,    65,
      -1,    67,    -1,   721,    -1,    -1,    -1,    73,    -1,    -1,
      76,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1089,    -1,    -1,    -1,    -1,
      96,   749,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     436,   437,    -1,  1196,    -1,   441,    -1,  1200,   766,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   785,    -1,    -1,
    1134,    -1,    -1,    -1,    -1,  1150,    -1,  1152,  1153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   811,    -1,    -1,   814,   493,   494,   495,
      27,   816,    -1,    30,    31,    -1,    -1,    -1,   504,    -1,
      -1,   596,   597,    -1,   599,    42,   601,   602,   603,  1183,
      -1,  1185,   607,   608,   609,    52,    53,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,   854,    -1,    -1,    -1,
      67,    -1,   860,    -1,    -1,   863,    73,    -1,    75,   867,
      -1,    78,    -1,    -1,    81,   873,   173,   174,   873,    -1,
       4,  1225,    -1,    -1,    -1,    -1,  1230,    -1,   653,    -1,
    1234,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,
      -1,    -1,   209,   678,    -1,   910,    -1,    -1,    42,   216,
      -1,    -1,    -1,    47,    48,    -1,    50,    -1,    -1,   694,
     695,    -1,    -1,   698,    -1,   700,    -1,   932,   933,   934,
     935,   936,   937,    67,    -1,    -1,   243,    -1,    -1,    73,
      -1,   946,    -1,   948,    -1,    79,    -1,    81,    -1,    -1,
     725,   726,     4,   958,    -1,    -1,   263,    -1,    -1,   964,
     965,    -1,   269,   270,    98,   272,    -1,   101,    -1,    21,
      -1,    -1,    -1,    -1,    26,   750,   751,    29,   986,    -1,
      -1,   986,    -1,    35,    36,    -1,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    50,    -1,
      -1,    -1,  1010,    -1,    -1,    57,    -1,  1015,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1025,    -1,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1041,  1042,   345,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    98,    -1,    -1,   101,
    1058,    -1,    -1,    -1,   361,   362,    -1,    -1,    -1,   366,
      -1,    -1,    -1,    -1,    25,    26,    27,   374,    29,    30,
      31,    -1,    -1,  1081,  1082,     4,    -1,   384,    -1,    -1,
     387,    42,   389,    -1,    -1,   392,    47,    48,   395,    50,
      51,   398,   399,    -1,    -1,   402,    25,    26,   405,    -1,
      29,    -1,    31,   410,   411,    -1,    67,   414,    -1,    -1,
      -1,   418,    73,    42,    -1,   422,    -1,    -1,    47,    48,
      81,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,  1142,  1143,    -1,    98,    67,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,  1160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1168,    -1,    -1,    -1,    96,    -1,    98,
    1175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1190,    -1,    -1,    -1,    -1,  1195,    -1,    -1,
      -1,  1199,    -1,     4,   501,    -1,   971,   972,   973,   974,
     975,   976,    -1,    -1,   979,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,  1002,    -1,    40,
      -1,    42,  1007,  1008,    -1,    46,    47,    48,    -1,    50,
      -1,    52,    53,    -1,    55,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,    -1,   950,    76,    77,    -1,    79,    -1,
      81,   957,    -1,    -1,    -1,    -1,   583,   584,   585,   586,
     587,    -1,    -1,    -1,    -1,    96,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   604,   605,   606,
      -1,    -1,    -1,   610,   611,   612,    -1,   993,   994,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1116,  1117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   665,   666,
      -1,    -1,   669,   670,    -1,   672,   673,   674,    -1,   676,
     677,    -1,   679,   680,   681,   682,   683,   684,   685,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1185,  1186,  1187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     727,   728,   729,    -1,   731,   732,   733,   734,   735,   736,
     737,   738,    -1,    -1,   741,   742,   743,   744,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   752,   753,   754,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1150,    -1,  1152,  1153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   798,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   864,    -1,    -1,
      -1,    -1,   869,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   879,   880,    -1,    -1,    -1,    -1,   885,    -1,
      -1,    -1,   889,    -1,   891,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   914,   915,    -1,
      -1,    -1,    -1,    -1,   921,    -1,    -1,   924,    -1,    -1,
     927,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   943,    -1,    -1,    -1,
     947,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     977,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1034,  1035,  1036,
      -1,  1038,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1052,  1053,  1054,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1066,
      -1,    -1,    -1,    -1,  1071,    -1,    -1,  1074,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1085,    -1,
    1087,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1095,    -1,
    1097,  1098,    -1,    -1,    -1,    -1,    -1,  1104,    -1,    -1,
    1107,  1108,     4,  1110,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     4,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     4,     5,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     4,    -1,    -1,
      -1,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     4,    -1,    -1,    -1,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     4,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     4,    -1,    -1,    -1,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     4,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   110,   115,   119,   441,     0,     5,     7,    54,    74,
     440,   440,   442,   442,   441,     4,     8,    10,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   111,   426,   447,
     448,   426,   112,   116,   441,   120,   441,   100,   100,   113,
     430,   430,    99,    11,   118,   431,   440,   122,   441,   432,
      56,    64,    82,   117,   124,   125,   139,   121,   123,   124,
       8,   433,   434,   442,   442,   442,   442,   126,   126,    23,
     136,   114,   100,   102,   437,     8,     9,    11,    12,    16,
      17,    18,   435,   446,   447,   111,   444,   446,   111,   425,
     448,   444,    43,    44,   127,   131,   140,   140,   442,   441,
     441,   441,   441,   100,   102,   429,   445,   429,   441,   429,
     442,   442,    28,    31,    59,    67,   141,   142,   143,   144,
     145,   145,   426,    11,   427,   438,   447,   436,   430,   430,
     441,   130,   426,   130,   442,   442,   442,   442,    70,   146,
     153,   153,   137,   433,   101,    99,   101,   128,   132,   444,
     444,   444,   444,   442,   430,     4,    21,    26,    29,    35,
      36,    38,    40,    41,    47,    48,    50,    57,    72,    76,
      79,    98,   101,   154,   155,   169,   174,   180,   226,   230,
     231,   242,   249,   254,   265,   280,   282,   288,   304,   316,
     335,   343,   101,   100,   100,   102,   439,   441,   430,   100,
     100,   102,   133,   429,   429,   429,   429,    12,   111,   151,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   441,   430,   441,
     430,   441,   441,     8,   430,   430,   430,   152,   147,   426,
     103,   111,   313,   397,   398,   426,   426,   426,   111,   347,
     398,   426,   426,   426,   243,   426,   248,   426,   426,   426,
     426,   179,   426,    11,   111,   428,   448,   449,   426,   139,
     438,   441,   129,   134,   441,   100,   102,   148,   281,   427,
     305,   399,   441,   266,   232,   156,   344,   441,   170,   227,
     175,   100,   100,   255,   336,   317,   100,   289,   441,   441,
     283,   138,   101,    71,   101,   135,   139,   143,   144,   101,
     135,   143,   144,   430,   100,   102,   284,   100,   397,   100,
     102,   267,   100,   102,   233,   100,   102,   157,   100,   100,
     102,   171,   100,   102,   228,   100,   102,   176,   430,   430,
     100,   100,   102,   337,   100,   102,   318,   430,   100,   102,
     290,   284,   101,   441,   442,   430,   149,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   244,   250,   430,   430,
     430,   181,   430,   430,   151,   150,   285,   307,   269,   234,
     158,   346,   172,   229,   177,    27,    30,    42,    51,    55,
      73,    75,    78,    81,   101,   143,   144,   165,   173,   182,
     224,   225,   364,   369,   374,   385,    52,    53,    58,   101,
     143,   144,   165,   173,   182,   224,   225,   364,   369,   379,
     381,   383,   385,   257,   338,   319,    73,   101,   143,   144,
     164,   182,   224,   225,   291,   429,   101,   143,   144,   101,
     143,   144,   165,   173,   364,   369,   374,   385,    25,    96,
     143,   144,   164,   173,   230,   274,   306,   314,   335,   364,
     143,   144,   165,   173,   225,   231,   242,   249,   254,   265,
     268,   272,   273,   274,   280,   282,   364,   369,   374,    65,
     101,   143,   144,   165,   173,   180,   226,   230,   314,   335,
     364,   369,   378,   385,    20,   101,   143,   144,   159,   164,
      37,   143,   144,   345,   101,   143,   144,   165,   173,   101,
     143,   144,   165,   180,   226,   230,   314,   335,    22,   101,
     143,   144,   165,   173,   178,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   246,   245,   247,   442,   442,   442,
     252,   251,   253,    46,    77,   143,   144,   165,   173,   180,
     226,   230,   256,   314,   335,   364,   369,   379,   381,   383,
     385,   388,   391,   101,   143,   144,   165,   173,   180,   226,
     230,   385,    45,    60,   101,   143,   144,   165,   173,   180,
     226,   324,   332,   442,   430,    21,    68,   101,   143,   144,
     165,   173,   295,   300,   364,   286,   287,   442,   442,   309,
     312,   101,   310,   311,   308,   101,   271,   270,   442,   240,
     237,   241,   238,   239,   235,   236,   442,   442,   101,   430,
     430,   430,   430,   430,   442,   370,   444,   444,   375,   444,
     166,   183,   428,   444,   444,   430,   430,   430,    17,    94,
     111,   382,   421,    18,   111,   380,   421,   422,    92,    95,
     111,   384,   430,   430,   430,   442,   442,   260,   261,   264,
     101,   262,   263,   258,   259,   340,   341,   342,   339,   441,
     441,   320,   321,   322,   323,    85,    87,    90,   111,   168,
     442,   442,   293,   294,   292,   430,   430,   426,   426,   430,
     430,   430,   430,   430,   430,   430,   444,   430,   430,   430,
     430,   430,   430,   430,   426,    84,    86,    89,    91,   348,
     349,   350,   351,   355,   359,   428,    88,    93,   111,   372,
     429,   429,    88,    93,   111,   377,   386,   168,   100,   102,
     184,   429,   365,   441,   429,   441,   429,   441,   441,   441,
     429,   111,   392,   427,   111,   389,   400,   427,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   325,
     333,   430,   430,   430,   430,   441,   441,   441,   429,   111,
     303,   400,   111,   298,   400,   430,   430,   430,   275,   315,
     429,   160,   441,   441,   441,   441,   441,   429,   441,   441,
     371,   441,   441,   376,   100,   102,   387,   167,   430,   100,
     102,   366,   429,   393,   429,   390,   429,   442,   401,   100,
     100,   301,   441,   296,   441,   100,   102,   276,   318,   100,
     102,   161,   352,   356,   429,   360,   429,   429,   430,   429,
     185,   186,   199,   200,   213,   214,   430,   394,   429,   442,
     400,   399,   430,   430,   100,   100,   102,   297,   430,   430,
     430,   100,   102,   353,   100,   102,   357,   100,   102,   362,
     193,   101,    39,    49,    61,    62,    66,    69,   178,   187,
     188,   190,   194,   208,   210,   211,    32,   202,    24,   216,
     367,   427,   390,   327,   327,   430,   430,   277,    83,   162,
     430,   430,   361,   430,    33,    34,   101,   143,   144,   222,
     223,   442,   442,   442,   442,   442,   442,   182,   430,   442,
     430,   442,   215,   101,   143,   144,   395,   180,   226,   230,
     326,   385,   334,   307,   299,   101,   143,   144,   165,   173,
     230,   364,   442,   101,   354,   358,   363,   442,   442,   111,
     189,   421,   191,   444,   111,   402,   403,   404,   195,   444,
     396,   444,    88,    93,   111,   212,   430,   203,   444,   201,
     217,   426,   216,   394,   329,   330,   331,   101,   328,   101,
     302,    27,    51,   101,   143,   144,   225,   368,   373,   378,
     379,   381,   385,   279,   278,    88,    93,   111,   163,   101,
     224,   225,   368,   373,   379,   381,   385,   388,   101,   224,
     225,   385,   388,   101,   182,   224,   225,   368,   373,   379,
     381,   444,   444,   429,   441,   100,   102,   192,   429,   103,
     405,   406,    14,   408,   409,   100,   102,   196,   100,   102,
     209,   441,   441,   429,   100,   102,   204,   202,   100,   102,
     218,   430,   430,   430,   430,   101,   442,   442,   430,   430,
     430,   441,   441,   429,   430,   430,   430,   429,   429,   430,
     430,   427,   407,   103,   410,   430,   430,   430,   430,   430,
     430,   430,   372,   377,   193,   413,   405,   409,   411,   427,
     197,   193,   205,   219,   429,   429,   101,   104,   412,   413,
      97,   101,   143,   144,   198,   222,   223,   101,    80,   101,
     143,   144,   164,   173,   206,    63,   101,   143,   144,   164,
     173,   220,     5,   443,   406,   442,   442,   442,   414,   427,
     444,    16,    17,    18,   111,   207,   423,   424,   111,   221,
     422,   443,   443,   429,   429,   441,   429,   441,   105,   106,
     443,    85,   415,   420,   443,   443,   107,   103,   443,   443,
     108,    14,   416,   417,   443,   418,   103,   417,   427,   443,
     419,   427,   443,   103,   443,   427
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   109,   110,   110,   112,   111,   113,   114,   113,   116,
     117,   115,   118,   118,   118,   118,   120,   121,   119,   122,
     122,   123,   122,   124,   125,   126,   126,   126,   128,   127,
     129,   129,   129,   129,   129,   130,   132,   131,   133,   133,
     134,   134,   134,   134,   135,   137,   138,   136,   139,   140,
     140,   140,   140,   140,   141,   142,   143,   144,   145,   145,
     147,   146,   148,   149,   148,   150,   150,   150,   152,   151,
     151,   153,   153,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   156,   155,   157,   157,   158,   158,   158,
     158,   158,   160,   159,   161,   161,   162,   163,   163,   163,
     164,   166,   167,   165,   168,   168,   168,   168,   170,   169,
     171,   171,   172,   172,   172,   172,   172,   173,   175,   174,
     176,   176,   177,   177,   177,   177,   177,   177,   178,   179,
     180,   181,   181,   181,   181,   181,   181,   181,   182,   183,
     184,   184,   185,   185,   185,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   187,   188,   189,   189,   190,   191,
     192,   192,   193,   193,   193,   193,   193,   194,   195,   196,
     196,   197,   197,   197,   197,   197,   197,   198,   200,   199,
     201,   201,   202,   203,   204,   204,   205,   205,   205,   205,
     205,   205,   206,   207,   207,   208,   209,   209,   210,   211,
     212,   212,   212,   214,   213,   215,   215,   216,   217,   218,
     218,   219,   219,   219,   219,   219,   219,   220,   221,   221,
     222,   223,   224,   225,   227,   226,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   230,   230,   230,
     230,   230,   230,   230,   230,   232,   231,   233,   233,   234,
     235,   234,   234,   236,   234,   234,   234,   234,   234,   234,
     237,   234,   238,   234,   239,   234,   240,   234,   241,   234,
     242,   243,   244,   245,   244,   244,   246,   244,   244,   247,
     244,   244,   244,   244,   244,   244,   244,   248,   249,   250,
     251,   250,   250,   252,   250,   250,   250,   253,   250,   250,
     250,   250,   250,   250,   250,   250,   255,   256,   254,   257,
     258,   257,   257,   259,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   260,   257,   261,   257,   262,   257,
     263,   257,   264,   257,   266,   265,   267,   268,   267,   269,
     270,   269,   269,   269,   269,   269,   269,   269,   269,   271,
     269,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     275,   274,   276,   276,   277,   278,   277,   277,   277,   277,
     277,   279,   277,   281,   280,   283,   282,   284,   284,   285,
     286,   285,   285,   287,   285,   285,   285,   285,   285,   285,
     289,   288,   290,   290,   291,   292,   291,   291,   291,   291,
     291,   293,   291,   294,   291,   296,   295,   297,   297,   298,
     298,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   301,   302,   300,   303,   303,   305,   306,   304,   307,
     308,   307,   307,   307,   307,   307,   309,   307,   310,   307,
     311,   307,   312,   307,   313,   313,   315,   314,   317,   316,
     318,   318,   319,   319,   319,   319,   319,   320,   319,   321,
     319,   322,   319,   323,   319,   325,   326,   324,   327,   328,
     327,   329,   327,   330,   327,   331,   327,   333,   334,   332,
     336,   335,   337,   337,   338,   339,   338,   338,   338,   338,
     338,   340,   338,   341,   338,   342,   338,   344,   345,   343,
     346,   346,   346,   346,   347,   347,   348,   348,   349,   349,
     349,   350,   352,   351,   353,   353,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   356,   355,   357,   357,   358,
     358,   358,   358,   358,   360,   359,   361,   362,   362,   363,
     363,   363,   363,   363,   363,   363,   363,   365,   364,   366,
     366,   367,   367,   367,   368,   370,   371,   369,   372,   372,
     372,   373,   375,   376,   374,   377,   377,   377,   378,   379,
     380,   380,   381,   382,   382,   382,   383,   384,   384,   384,
     386,   385,   387,   387,   388,   389,   389,   390,   390,   391,
     393,   392,   392,   395,   394,   394,   396,   397,   398,   399,
     399,   401,   400,   403,   402,   404,   402,   402,   405,   406,
     407,   407,   408,   409,   410,   410,   411,   412,   412,   413,
     413,   414,   415,   416,   417,   418,   418,   419,   419,   420,
     421,   422,   422,   423,   423,   424,   424,   425,   425,   426,
     426,   427,   427,   428,   428,   428,   429,   429,   430,   430,
     430,   432,   431,   433,   434,   434,   435,   435,   435,   436,
     436,   437,   437,   438,   438,   439,   439,   440,   440,   441,
     441,   442,   443,   443,   445,   444,   444,   446,   446,   446,
     446,   446,   446,   446,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   448,   449
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     4,     0,     0,     6,     0,
       0,    15,     0,     2,     2,     2,     0,     0,    15,     0,
       2,     0,     3,     4,     4,     0,     2,     2,     0,     9,
       0,     2,     2,     2,     2,     1,     0,     6,     1,     4,
       0,     2,     2,     2,     4,     0,     0,    10,     4,     0,
       2,     2,     2,     2,     4,     4,     4,     4,     0,     3,
       0,     5,     1,     0,     5,     0,     2,     2,     0,     3,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     1,     4,     0,     2,     2,
       2,     2,     0,     6,     1,     4,     4,     2,     2,     1,
       4,     0,     0,     6,     2,     2,     2,     1,     0,     5,
       1,     4,     0,     2,     2,     2,     2,     4,     0,     5,
       1,     4,     0,     2,     2,     2,     2,     2,     4,     1,
       7,     0,     3,     2,     2,     2,     2,     2,     4,     1,
       1,     4,     1,     1,     1,     0,     2,     2,     2,     2,
       2,     2,     3,     4,     0,     4,     2,     1,     5,     1,
       1,     4,     0,     2,     2,     2,     2,     5,     1,     1,
       4,     0,     2,     2,     2,     2,     2,     4,     0,     4,
       0,     3,     4,     1,     1,     4,     0,     2,     2,     2,
       2,     2,     4,     2,     1,     4,     1,     4,     4,     4,
       2,     2,     1,     0,     3,     0,     2,     5,     1,     1,
       4,     0,     2,     2,     2,     2,     2,     4,     2,     1,
       4,     4,     4,     4,     0,     5,     1,     4,     0,     2,
       2,     2,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     1,     4,     0,
       0,     4,     2,     0,     4,     2,     2,     2,     2,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       7,     1,     0,     0,     4,     2,     0,     4,     2,     0,
       4,     2,     2,     2,     2,     2,     2,     1,     7,     0,
       0,     4,     2,     0,     4,     2,     2,     0,     4,     2,
       2,     2,     2,     2,     2,     2,     0,     0,     9,     0,
       0,     4,     2,     0,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     5,     1,     0,     5,     0,
       0,     4,     2,     2,     2,     2,     2,     2,     2,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     1,     4,     0,     0,     4,     2,     2,     2,
       2,     0,     4,     0,     5,     0,     5,     1,     4,     0,
       0,     4,     2,     0,     4,     2,     2,     2,     2,     2,
       0,     5,     1,     4,     0,     0,     4,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     5,     1,     4,     2,
       1,     0,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     0,     9,     2,     1,     0,     0,     9,     0,
       0,     4,     2,     2,     2,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     2,     1,     0,     5,     0,     5,
       1,     4,     0,     2,     2,     2,     2,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     0,     8,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     0,     8,
       0,     5,     1,     4,     0,     0,     4,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     4,     0,     0,     9,
       0,     2,     2,     4,     2,     1,     1,     2,     1,     1,
       1,     3,     0,     4,     1,     4,     0,     2,     3,     2,
       2,     2,     2,     2,     2,     0,     4,     1,     4,     0,
       2,     3,     2,     2,     0,     4,     1,     1,     4,     0,
       3,     2,     2,     2,     2,     2,     2,     0,     5,     1,
       4,     0,     2,     2,     4,     0,     0,     6,     2,     2,
       1,     4,     0,     0,     6,     2,     2,     1,     4,     4,
       2,     1,     4,     2,     2,     1,     4,     2,     2,     1,
       0,     5,     1,     4,     3,     2,     2,     3,     1,     3,
       0,     3,     2,     0,     4,     1,     1,     2,     2,     0,
       2,     0,     3,     0,     2,     0,     2,     1,     3,     2,
       0,     2,     3,     2,     0,     2,     2,     0,     2,     0,
       6,     5,     5,     5,     4,     0,     2,     0,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     1,     2,     4,     0,     2,
       2,     0,     4,     2,     0,     1,     0,     2,     3,     0,
       5,     1,     4,     0,     3,     2,     5,     1,     1,     0,
       2,     2,     0,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, scanner, module, submodule, unres, size_arrays, read_all, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, module, submodule, unres, size_arrays, read_all); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, struct lys_module *module, struct lys_submodule *submodule, struct unres_schema *unres, struct lys_array_size *size_arrays, int read_all)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (module);
  YYUSE (submodule);
  YYUSE (unres);
  YYUSE (size_arrays);
  YYUSE (read_all);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, struct lys_module *module, struct lys_submodule *submodule, struct unres_schema *unres, struct lys_array_size *size_arrays, int read_all)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, module, submodule, unres, size_arrays, read_all);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, void *scanner, struct lys_module *module, struct lys_submodule *submodule, struct unres_schema *unres, struct lys_array_size *size_arrays, int read_all)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, module, submodule, unres, size_arrays, read_all);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, module, submodule, unres, size_arrays, read_all); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *scanner, struct lys_module *module, struct lys_submodule *submodule, struct unres_schema *unres, struct lys_array_size *size_arrays, int read_all)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (module);
  YYUSE (submodule);
  YYUSE (unres);
  YYUSE (size_arrays);
  YYUSE (read_all);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 130: /* tmp_identifier_arg_str  */

      { free(((*yyvaluep).str)); }

        break;

    case 179: /* typedef_arg_str  */

      { if (read_all) {
                yang_delete_type(module, (struct yang_type *)((*yyvaluep).nodes).node.ptr_tpdf->type.der);
              }
            }

        break;

    case 195: /* pattern_arg_str  */

      { free(((*yyvaluep).str)); }

        break;

    case 243: /* leaf_arg_str  */

      { if (read_all) {
                yang_delete_type(module, (struct yang_type *)((*yyvaluep).nodes).node.ptr_leaf->type.der);
              }
            }

        break;

    case 248: /* leaf_list_arg_str  */

      { if (read_all) {
                yang_delete_type(module, (struct yang_type *)((*yyvaluep).nodes).node.ptr_leaf->type.der);
              }
            }

        break;

    case 269: /* choice_opt_stmt  */

      { if (read_all && ((*yyvaluep).nodes).choice.s) { free(((*yyvaluep).nodes).choice.s); } }

        break;

    case 346: /* deviation_opt_stmt  */

      { if (read_all) {
                ly_set_free(((*yyvaluep).nodes).deviation->dflt_check);
                free(((*yyvaluep).nodes).deviation);
              }
            }

        break;

    case 361: /* deviate_replace_stmtsep  */

      { if (read_all && ((*yyvaluep).nodes).deviation->deviate->type) {
                yang_delete_type(module, (struct yang_type *)((*yyvaluep).nodes).deviation->deviate->type->der);
              }
            }

        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *scanner, struct lys_module *module, struct lys_submodule *submodule, struct unres_schema *unres, struct lys_array_size *size_arrays, int read_all)
{
/* The lookahead symbol.  */
int yychar;
char *s = NULL, *tmp_s = NULL;
struct lys_include inc;
struct lys_module *trg = NULL;
struct lys_node *tpdf_parent = NULL, *data_node = NULL;
void *actual = NULL;
int config_inherit = 0, actual_type = 0;
int64_t cnt_val;
void *yang_type = NULL;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */

{ yylloc.last_column = 0; }


  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

    { if (!submodule) {
                       /* update the size of the array, it can be smaller due to possible duplicities
                        * found in submodules */
                       if  (module->inc_size) {
                         module->inc = ly_realloc(module->inc, module->inc_size * sizeof *module->inc);
                         if (!module->inc) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                       if (module->imp_size) {
                         module->imp = ly_realloc(module->imp, module->imp_size * sizeof *module->imp);
                         if (!module->imp) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                     }
                   }

    break;

  case 4:

    { if (read_all) {
                      if (yyget_text(scanner)[0] == '"') {
                        s = yang_read_string(yyget_text(scanner) + 1, yyget_leng(scanner) - 2, yylloc.first_column, (trg) ? trg->version : 0);
                        if (!s) {
                          YYABORT;
                        }
                      } else {
                        s = calloc(1, yyget_leng(scanner) - 1);
                        if (!s) {
                          LOGMEM;
                          YYABORT;
                        }
                        memcpy(s, yyget_text(scanner) + 1, yyget_leng(scanner) - 2);
                      }
                    }
                  }

    break;

  case 7:

    { if (read_all){
                char *temp;
                if (yyget_text(scanner)[0] == '"') {
                  temp = yang_read_string(yyget_text(scanner) + 1, yyget_leng(scanner) - 2, yylloc.first_column, (trg) ? trg->version : 0);
                  if (!temp) {
                    YYABORT;
                  }
                  s = ly_realloc(s, strlen(temp) + strlen(s) + 1);
                  if (s) {
                    strcat(s, temp);
                    free(temp);
                  } else {
                    free(temp);
                    LOGMEM;
                    YYABORT;
                  }
                } else {
                  int length = yyget_leng(scanner) - 2 + strlen(s) + 1;
                  s = ly_realloc(s, length);
                  if (s) {
                    memcpy(s + strlen(s), yyget_text(scanner) + 1, yyget_leng(scanner) - 2);
                    s[length - 1] = '\0';
                  } else {
                    LOGMEM;
                    YYABORT;
                  }
                }
              }
            }

    break;

  case 9:

    { if (read_all) {
                                                              if (submodule) {
                                                                free(s);
                                                                LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "module");
                                                                YYABORT;
                                                              }
                                                              trg = module;
                                                              yang_read_common(trg,s,MODULE_KEYWORD);
                                                              s = NULL;
                                                              config_inherit = ENABLE_INHERIT;
                                                            }
                                                          }

    break;

  case 10:

    { if (read_all && !module->ns) { LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "namespace", "module"); YYABORT; }
                                       if (read_all && !module->prefix) { LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "prefix", "module"); YYABORT; }
                                     }

    break;

  case 12:

    { (yyval.i) = 0; }

    break;

  case 13:

    { if (read_all) {
                                               if (yang_check_version(module, submodule, s, (yyvsp[-1].i))) {
                                                 YYABORT;
                                               }
                                               (yyval.i) = 1;
                                               s = NULL;
                                             }
                                           }

    break;

  case 14:

    { if (read_all && yang_read_common(module, s, NAMESPACE_KEYWORD)) {YYABORT;} s=NULL; }

    break;

  case 15:

    { if (read_all && yang_read_prefix(module, NULL, s)) {YYABORT;} s=NULL; }

    break;

  case 16:

    { if (read_all) {
                                                                    if (!submodule) {
                                                                      free(s);
                                                                      LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "submodule");
                                                                      YYABORT;
                                                                    }
                                                                    trg = (struct lys_module *)submodule;
                                                                    yang_read_common(trg,s,MODULE_KEYWORD);
                                                                    s = NULL;
                                                                    config_inherit = ENABLE_INHERIT;
                                                                  }
                                                                }

    break;

  case 17:

    { if (read_all && !submodule->prefix) {
                                                LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "belongs-to", "submodule");
                                                YYABORT;
                                              }
                                            }

    break;

  case 19:

    { (yyval.i) = 0; }

    break;

  case 20:

    { if (read_all) {
                                                  if (yang_check_version(module, submodule, s, (yyvsp[-1].i))) {
                                                    YYABORT;
                                                  }
                                                  (yyval.i) = 1;
                                                  s = NULL;
                                                }
                                              }

    break;

  case 21:

    { if (read_all) {
                                if (submodule->prefix) {
                                  LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "belongs-to", "submodule");
                                  YYABORT;
                                }
                              }
                            }

    break;

  case 25:

    { if (read_all) {
                          if (size_arrays->imp) {
                            size_t size = (size_arrays->imp * sizeof *trg->imp) + sizeof(void*);
                            trg->imp = calloc(1, size);
                            if (!trg->imp) {
                              LOGMEM;
                              YYABORT;
                            }
                            /* set stop block for possible realloc */
                            trg->imp[size_arrays->imp].module = (void*)0x1;
                          }
                          if (size_arrays->inc) {
                            size_t size = (size_arrays->inc * sizeof *trg->inc) + sizeof(void*);
                            trg->inc = calloc(1, size);
                            if (!trg->inc) {
                              LOGMEM;
                              YYABORT;
                            }
                            /* set stop block for possible realloc */
                            trg->inc[size_arrays->inc].submodule = (void*)0x1;
                          }
                        }
                      }

    break;

  case 28:

    {
                 if (!read_all) {
                   size_arrays->imp++;
                 } else {
                   actual = &trg->imp[trg->imp_size];
                   actual_type=IMPORT_KEYWORD;
                 }
             }

    break;

  case 29:

    { if (read_all) {
                             (yyval.inc) = trg;
                             if (yang_fill_import(trg, actual, (yyvsp[-6].str))) {
                               YYABORT;
                             }
                             trg = (yyval.inc);
                             config_inherit = ENABLE_INHERIT;
                           }
                         }

    break;

  case 30:

    { (yyval.i) = 0; }

    break;

  case 31:

    { if (read_all && yang_read_prefix(trg, actual, s)) {
                                     YYABORT;
                                   }
                                   s = NULL;
                                   (yyval.i) = (yyvsp[-1].i);
                                 }

    break;

  case 32:

    { if (read_all) {
                                          if (trg->version != 2) {
                                            LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "description");
                                          }
                                          if (yang_read_description(trg, actual, s, "import")) {
                                            YYABORT;
                                          }
                                        }
                                        s = NULL;
                                        (yyval.i) = (yyvsp[-1].i);
                                      }

    break;

  case 33:

    { if (read_all) {
                                        if (trg->version != 2) {
                                          LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "reference");
                                        }
                                        if (yang_read_reference(trg, actual, s, "import")) {
                                          YYABORT;
                                        }
                                      }
                                      s = NULL;
                                      (yyval.i) = (yyvsp[-1].i);
                                    }

    break;

  case 34:

    { if (read_all) {
                                            if ((yyvsp[-1].i)) {
                                              LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "revision-date", "import");
                                              YYABORT;
                                            }
                                          }
                                          (yyval.i) = 1;
                                        }

    break;

  case 35:

    { (yyval.str) = s; s = NULL; }

    break;

  case 36:

    { if (read_all) {
                                                             memset(&inc, 0, sizeof inc);
                                                             actual = &inc;
                                                             actual_type = INCLUDE_KEYWORD;
                                                           }
                                                           else {
                                                             size_arrays->inc++;
                                                           }
                                                         }

    break;

  case 37:

    { if (read_all) {
                                      (yyval.inc) = trg;
                                      int rc;
                                      rc = yang_fill_include(module, submodule, (yyvsp[-3].str), actual, unres);
                                      if (!rc) {
                                        s = NULL;
                                        trg = (yyval.inc);
                                        config_inherit = ENABLE_INHERIT;
                                      } else if (rc == -1) {
                                        YYABORT;
                                      }
                                    }
                                  }

    break;

  case 40:

    { (yyval.i) = 0; }

    break;

  case 41:

    { if (read_all) {
                                           if (trg->version != 2) {
                                             LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "description");
                                           }
                                           if (yang_read_description(trg, actual, s, "import")) {
                                            YYABORT;
                                           }
                                         }
                                         s = NULL;
                                         (yyval.i) = (yyvsp[-1].i);
                                       }

    break;

  case 42:

    { if (read_all) {
                                         if (trg->version != 2) {
                                           LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "reference");
                                         }
                                         if (yang_read_reference(trg, actual, s, "import")) {
                                          YYABORT;
                                         }
                                       }
                                       s = NULL;
                                       (yyval.i) = (yyvsp[-1].i);
                                     }

    break;

  case 43:

    { if (read_all) {
                                             if ((yyvsp[-1].i)) {
                                               LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "revision-date", "include");
                                               YYABORT;
                                             }
                                           }
                                           (yyval.i) = 1;
                                         }

    break;

  case 44:

    { if (read_all) {
                                 if (actual_type==IMPORT_KEYWORD) {
                                     memcpy(((struct lys_import *)actual)->rev, s, LY_REV_SIZE-1);
                                 } else {                              // INCLUDE KEYWORD
                                     memcpy(((struct lys_include *)actual)->rev, s, LY_REV_SIZE-1);
                                 }
                                 free(s);
                                 s = NULL;
                               }
                             }

    break;

  case 45:

    { if (read_all) {
                                                               if (!ly_strequal(s, submodule->belongsto->name, 0)) {
                                                                 LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "belongs-to");
                                                                 free(s);
                                                                 YYABORT;
                                                               }
                                                               free(s);
                                                               s = NULL;
                                                             }
                                                           }

    break;

  case 46:

    { if (read_all) {
                                     if (yang_read_prefix(trg, NULL, s)) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }
                                 }

    break;

  case 50:

    { if (read_all && yang_read_common(trg, s, ORGANIZATION_KEYWORD)) {YYABORT;} s=NULL; }

    break;

  case 51:

    { if (read_all && yang_read_common(trg, s, CONTACT_KEYWORD)) {YYABORT;} s=NULL; }

    break;

  case 52:

    { if (read_all && yang_read_description(trg, NULL, s, NULL)) {
                                     YYABORT;
                                   }
                                   s = NULL;
                                 }

    break;

  case 53:

    { if (read_all && yang_read_reference(trg, NULL, s, NULL)) {
                                   YYABORT;
                                 }
                                 s=NULL;
                               }

    break;

  case 58:

    { if (read_all && size_arrays->rev) {
                           trg->rev = calloc(size_arrays->rev, sizeof *trg->rev);
                           if (!trg->rev) {
                             LOGMEM;
                             YYABORT;
                           }
                         }
                       }

    break;

  case 60:

    { if (read_all) {
                                                     if(!(actual=yang_read_revision(trg,s))) {YYABORT;}
                                                     s=NULL;
                                                   } else {
                                                     size_arrays->rev++;
                                                   }
                                                 }

    break;

  case 63:

    { actual_type = REVISION_KEYWORD; }

    break;

  case 66:

    { if (read_all && yang_read_description(trg, actual, s, "revision")) {
                                            YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 67:

    { if (read_all && yang_read_reference(trg, actual, s, "revision")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 68:

    { if (read_all) {
                                s = strdup(yyget_text(scanner));
                                if (!s) {
                                  LOGMEM;
                                  YYABORT;
                                }
                              }
                            }

    break;

  case 70:

    { if (read_all && lyp_check_date(s)) {
                   free(s);
                   YYABORT;
               }
             }

    break;

  case 71:

    { if (read_all) {
                       if (size_arrays->features) {
                         trg->features = calloc(size_arrays->features,sizeof *trg->features);
                         if (!trg->features) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                       if (size_arrays->ident) {
                         trg->ident = calloc(size_arrays->ident,sizeof *trg->ident);
                         if (!trg->ident) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                       if (size_arrays->augment) {
                         trg->augment = calloc(size_arrays->augment,sizeof *trg->augment);
                         if (!trg->augment) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                       if (size_arrays->tpdf) {
                         trg->tpdf = calloc(size_arrays->tpdf, sizeof *trg->tpdf);
                         if (!trg->tpdf) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                       if (size_arrays->deviation) {
                         trg->deviation = calloc(size_arrays->deviation, sizeof *trg->deviation);
                         if (!trg->deviation) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                       actual = NULL;
                     }
                   }

    break;

  case 72:

    { actual = NULL; }

    break;

  case 76:

    { if (!read_all) { size_arrays->tpdf++; } }

    break;

  case 79:

    { if (!read_all) {
                     size_arrays->augment++;
                   } else {
                     config_inherit = ENABLE_INHERIT;
                   }
                 }

    break;

  case 82:

    { if (!read_all) { size_arrays->deviation++; } }

    break;

  case 83:

    { if (read_all) {
                                                             /* we have the following supported (hardcoded) extensions: */
                                                             /* ietf-netconf's get-filter-element-attributes */
                                                             if (!strcmp(module->ns, LY_NSNC) && !strcmp(s, "get-filter-element-attributes")) {
                                                               LOGDBG("NETCONF filter extension found");
                                                              /* NACM's default-deny-write and default-deny-all */
                                                             } else if (!strcmp(module->ns, LY_NSNACM) &&
                                                                        (!strcmp(s, "default-deny-write") || !strcmp(s, "default-deny-all"))) {
                                                               LOGDBG("NACM extension found");
                                                               /* other extensions are not supported, so inform about such an extension */
                                                             } else {
                                                               LOGWRN("Not supported \"%s\" extension statement found, ignoring.", s);
                                                             }
                                                             free(s);
                                                             s = NULL;
                                                           }
                                                         }

    break;

  case 87:

    { (yyval.uint) = 0; }

    break;

  case 88:

    { if ((yyvsp[-1].uint) & EXTENSION_ARG) {
                                          LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "argument", "extension");
                                          YYABORT;
                                        }
                                        (yyvsp[-1].uint) |= EXTENSION_ARG;
                                        (yyval.uint) = (yyvsp[-1].uint);
                                      }

    break;

  case 89:

    { if ((yyvsp[-1].uint) & EXTENSION_STA) {
                                        LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "status", "extension");
                                        YYABORT;
                                      }
                                      (yyvsp[-1].uint) |= EXTENSION_STA;
                                      (yyval.uint) = (yyvsp[-1].uint);
                                    }

    break;

  case 90:

    { if (read_all) {
                                             free(s);
                                             s= NULL;
                                           }
                                           if ((yyvsp[-1].uint) & EXTENSION_DSC) {
                                             LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "description", "extension");
                                             YYABORT;
                                           }
                                           (yyvsp[-1].uint) |= EXTENSION_DSC;
                                           (yyval.uint) = (yyvsp[-1].uint);
                                         }

    break;

  case 91:

    { if (read_all) {
                                           free(s);
                                           s = NULL;
                                         }
                                         if ((yyvsp[-1].uint) & EXTENSION_REF) {
                                           LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "reference", "extension");
                                           YYABORT;
                                         }
                                         (yyvsp[-1].uint) |= EXTENSION_REF;
                                         (yyval.uint) = (yyvsp[-1].uint);
                                       }

    break;

  case 92:

    { free(s); s = NULL; }

    break;

  case 99:

    { if (read_all) {
                 if (strcmp(s, "true") && strcmp(s, "false")) {
                    LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, s);
                    free(s);
                    YYABORT;
                 }
                 free(s);
                 s = NULL;
               }
             }

    break;

  case 100:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 101:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 102:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 103:

    { (yyval.i) = (yyvsp[-2].i); }

    break;

  case 104:

    { (yyval.i) = LYS_STATUS_CURR; }

    break;

  case 105:

    { (yyval.i) = LYS_STATUS_OBSLT; }

    break;

  case 106:

    { (yyval.i) = LYS_STATUS_DEPRC; }

    break;

  case 107:

    { if (read_all) {
                 if (!strcmp(s, "current")) {
                   (yyval.i) = LYS_STATUS_CURR;
                 } else if (!strcmp(s, "obsolete")) {
                   (yyval.i) = LYS_STATUS_OBSLT;
                 } else if (!strcmp(s, "deprecated")) {
                   (yyval.i) = LYS_STATUS_DEPRC;
                 } else {
                   LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, s);
                   free(s);
                   YYABORT;
                 }
                 free(s);
                 s = NULL;
               }
             }

    break;

  case 108:

    { if (read_all) {
                                                         if (!(actual = yang_read_feature(trg, s))) {YYABORT;}
                                                         s=NULL;
                                                       } else {
                                                         size_arrays->features++;
                                                       }
                                                     }

    break;

  case 112:

    { if (read_all) {
                             if (size_arrays->node[size_arrays->next].if_features) {
                               ((struct lys_feature*)actual)->iffeature = calloc(size_arrays->node[size_arrays->next].if_features,
                                                                                sizeof *((struct lys_feature*)actual)->iffeature);
                               if (!((struct lys_feature*)actual)->iffeature) {
                                 LOGMEM;
                                 YYABORT;
                               }
                             }
                             if (store_flags((struct lys_node *)actual, size_arrays->node[size_arrays->next].flags, 0)) {
                                 YYABORT;
                             }
                             size_arrays->next++;
                           } else {
                             (yyval.i) = size_arrays->size;
                             if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                               LOGMEM;
                               YYABORT;
                             }
                           }
                         }

    break;

  case 113:

    { if (read_all) {
                                          if (yang_read_if_feature(trg, actual, s, unres, FEATURE_KEYWORD)) {YYABORT;}
                                          s=NULL;
                                          /* check for circular dependencies */
                                          if (((struct lys_feature *)actual)->iffeature_size) {
                                            if (unres_schema_add_node(module, unres, (struct lys_feature *)actual, UNRES_FEATURE, NULL) == -1) {
                                                YYABORT;
                                            }
                                          }
                                        } else {
                                          size_arrays->node[(yyvsp[-1].i)].if_features++;
                                        }
                                      }

    break;

  case 114:

    { if (!read_all) {
                                           if (yang_check_flags(&size_arrays->node[(yyvsp[-1].i)].flags, LYS_STATUS_MASK, "status", "feature", (yyvsp[0].i), 0)) {
                                             YYABORT;
                                           }
                                         }
                                       }

    break;

  case 115:

    { if (read_all && yang_read_description(trg, actual, s, "feature")) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }

    break;

  case 116:

    { if (read_all && yang_read_reference(trg, actual, s, "feature")) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     }

    break;

  case 118:

    { if (read_all) {
                                                           if (!(actual = yang_read_identity(trg,s))) {YYABORT;}
                                                           s = NULL;
                                                         } else {
                                                           size_arrays->ident++;
                                                         }
                                                       }

    break;

  case 122:

    { if (read_all) {
                                  struct lys_ident *ident = actual;

                                  if (size_arrays->node[size_arrays->next].base > 1 && (trg->version < 2)) {
                                    LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "base", "identity");
                                    YYABORT;
                                  }

                                  if ((trg->version < 2) && size_arrays->node[size_arrays->next].if_features) {
                                    LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "if-feature", "identity");
                                    YYABORT;
                                  }

                                  if (size_arrays->node[size_arrays->next].base) {
                                    ident->base_size = 0;
                                    ident->base = calloc(size_arrays->node[size_arrays->next].base, sizeof *ident->base);
                                    if (!ident->base) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                  }

                                  if (size_arrays->node[size_arrays->next].if_features) {
                                      ident->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *ident->iffeature);
                                      if (!ident->iffeature) {
                                          LOGMEM;
                                          YYABORT;
                                      }
                                  }

                                  ident->flags |= size_arrays->node[size_arrays->next].flags;
                                  size_arrays->next++;
                                } else {
                                  (yyval.i) = size_arrays->size;
                                  if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                    LOGMEM;
                                    YYABORT;
                                  }
                                }
                              }

    break;

  case 123:

    { if (read_all) {
                                     if (yang_read_base(trg, actual, s, unres)) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   } else {
                                     size_arrays->node[(yyvsp[-1].i)].base++;
                                   }
                                 }

    break;

  case 124:

    { if (read_all) {
                                           if (yang_read_if_feature(trg, actual, s, unres, IDENTITY_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s=NULL;
                                         } else {
                                           size_arrays->node[(yyvsp[-1].i)].if_features++;
                                         }
                                       }

    break;

  case 125:

    { if (!read_all) {
                                            if (yang_check_flags(&size_arrays->node[(yyvsp[-1].i)].flags, LYS_STATUS_MASK, "status", "identity", (yyvsp[0].i), 0)) {
                                              YYABORT;
                                            }
                                          }
                                        }

    break;

  case 126:

    { if (read_all && yang_read_description(trg, actual, s, "identity")) {
                                            YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 127:

    { if (read_all && yang_read_reference(trg, actual, s, "identity")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 129:

    { if (read_all) {
                                        tpdf_parent = actual;
                                        if (!(actual = yang_read_typedef(trg, actual, s))) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                        actual_type = TYPEDEF_KEYWORD;
                                        (yyval.nodes).node.ptr_tpdf = actual;
                                      }
                                    }

    break;

  case 130:

    { if (read_all) {
                      if (!((yyvsp[-1].nodes).node.flag & LYS_TYPE_DEF)) {
                        LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "type", "typedef");
                        YYABORT;
                      }
                      if (unres_schema_add_node(trg, unres, &(yyvsp[-1].nodes).node.ptr_tpdf->type, UNRES_TYPE_DER_TPDF, tpdf_parent) == -1) {
                        lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-1].nodes).node.ptr_tpdf->type.der)->name);
                        free((yyvsp[-1].nodes).node.ptr_tpdf->type.der);
                        (yyvsp[-1].nodes).node.ptr_tpdf->type.der = NULL;
                        YYABORT;
                      }
                      actual = tpdf_parent;

                      /* check default value */
                      if (unres_schema_add_str(trg, unres, &(yyvsp[-1].nodes).node.ptr_tpdf->type, UNRES_TYPE_DFLT, (yyvsp[-1].nodes).node.ptr_tpdf->dflt) == -1) {
                        YYABORT;
                      }
                    }
                  }

    break;

  case 131:

    { (yyval.nodes).node.ptr_tpdf = actual;
                        (yyval.nodes).node.flag = 0;
                      }

    break;

  case 132:

    { if (read_all) {
                                         actual = (yyvsp[-2].nodes).node.ptr_tpdf;
                                         actual_type = TYPEDEF_KEYWORD;
                                         (yyvsp[-2].nodes).node.flag |= LYS_TYPE_DEF;
                                         (yyval.nodes) = (yyvsp[-2].nodes);
                                       }
                                     }

    break;

  case 133:

    { if (read_all && yang_read_units(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, TYPEDEF_KEYWORD)) {YYABORT;} s = NULL; }

    break;

  case 134:

    { if (read_all && yang_read_default(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, TYPEDEF_KEYWORD)) {
                                    YYABORT;
                                  }
                                  s = NULL;
                                  (yyval.nodes) = (yyvsp[-1].nodes);
                                }

    break;

  case 135:

    { if (read_all) {
                                   if (yang_check_flags((uint16_t*)&(yyvsp[-1].nodes).node.ptr_tpdf->flags, LYS_STATUS_MASK, "status", "typedef", (yyvsp[0].i), 0)) {
                                     YYABORT;
                                   }
                                 }
                               }

    break;

  case 136:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, "typedef")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 137:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, "typedef")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 139:

    { if (read_all) {
                                         if(!(actual = yang_read_type(trg, actual, s, actual_type))) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }
                                     }

    break;

  case 145:

    { if (read_all) {
                                   if (size_arrays->node[size_arrays->next].uni && size_arrays->node[size_arrays->next].pattern) {
                                     LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid restriction in type \"%s\".", ((struct yang_type *)actual)->type->parent->name);
                                     YYABORT;
                                   }
                                   if (size_arrays->node[size_arrays->next].pattern) {
                                     ((struct yang_type *)actual)->type->info.str.patterns = calloc(size_arrays->node[size_arrays->next].pattern, sizeof(struct lys_restr));
                                     if (!((struct yang_type *)actual)->type->info.str.patterns) {
                                       LOGMEM;
                                       YYABORT;
                                     }
                                     ((struct yang_type *)actual)->base = LY_TYPE_STRING;
                                   }
                                   if (size_arrays->node[size_arrays->next].uni) {
                                     if (strcmp(((struct yang_type *)actual)->name, "union")) {
                                       /* type can be a substatement only in "union" type, not in derived types */
                                       LOGVAL(LYE_INCHILDSTMT, LY_VLOG_NONE, NULL, "type", "derived type");
                                       YYABORT;
                                     }
                                     ((struct yang_type *)actual)->type->info.uni.types = calloc(size_arrays->node[size_arrays->next].uni, sizeof(struct lys_type));
                                     if (!((struct yang_type *)actual)->type->info.uni.types) {
                                       LOGMEM;
                                       YYABORT;
                                     }
                                     ((struct yang_type *)actual)->base = LY_TYPE_UNION;
                                   }
                                   size_arrays->next++;
                                 } else {
                                   if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                     LOGMEM;
                                     YYABORT;
                                   }
                                   (yyval.uint) = size_arrays->size-1;
                                 }
                               }

    break;

  case 146:

    { if (read_all && yang_read_require_instance(actual, (yyvsp[0].i))) {
                                                 YYABORT;
                                               }
                                             }

    break;

  case 147:

    { if (read_all) {
                                     /* leafref_specification */
                                     if (yang_read_leafref_path(trg, actual, s)) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }
                                 }

    break;

  case 148:

    { if (read_all) {
                                     /* identityref_specification */
                                     if (yang_read_identyref(trg, actual, s , unres)) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }
                                 }

    break;

  case 150:

    { if (!read_all) {
                                        size_arrays->node[(yyvsp[-1].uint)].pattern++; /* count of pattern*/
                                      }
                                    }

    break;

  case 153:

    { if (read_all) {
                                                        actual = (yyvsp[-2].v);
                                                      } else {
                                                        size_arrays->node[(yyvsp[-3].uint)].uni++; /* count of union*/
                                                      }
                                                    }

    break;

  case 154:

    { if (read_all) {
                         struct yang_type *typ;
                         struct lys_type *type;

                         typ = (struct yang_type *)actual;
                         (yyval.v) = actual;
                         type = &typ->type->info.uni.types[typ->type->info.uni.count++];
                         type->parent = typ->type->parent;
                         actual = type;
                         actual_type = UNION_KEYWORD;
                       }
                     }

    break;

  case 155:

    { if (read_all && yang_read_fraction(actual, (yyvsp[-1].uint))) {
                                  YYABORT;
                                }
                              }

    break;

  case 156:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 157:

    { if (read_all) {
                 char *endptr = NULL;
                 unsigned long val;

                 val = strtoul(s, &endptr, 10);
                 if (*endptr || s[0] == '-' || val == 0 || val > UINT32_MAX) {
                   LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "fraction-digits");
                   free(s);
                   s = NULL;
                   YYABORT;
                 }
                 (yyval.uint) = (uint32_t) val;
                 free(s);
                 s =NULL;
               }
             }

    break;

  case 158:

    { actual = (yyvsp[-2].v);
                                                                    actual_type = TYPE_KEYWORD;
                                                                  }

    break;

  case 159:

    { if (read_all) {
                           (yyval.v) = actual;
                           if (!(actual = yang_read_length(trg, actual, s))) {
                             YYABORT;
                           }
                           actual_type = LENGTH_KEYWORD;
                           s = NULL;
                         }
                       }

    break;

  case 162:

    { switch (actual_type) {
                           case MUST_KEYWORD:
                             (yyval.str) = "must";
                             break;
                           case LENGTH_KEYWORD:
                             (yyval.str) = "length";
                             break;
                           case RANGE_KEYWORD:
                             (yyval.str) = "range";
                             break;
                           }
                         }

    break;

  case 163:

    { if (read_all && yang_read_message(trg, actual, s, (yyvsp[-1].str), ERROR_MESSAGE_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 164:

    { if (read_all && yang_read_message(trg, actual, s, (yyvsp[-1].str), ERROR_APP_TAG_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 165:

    { if (read_all && yang_read_description(trg, actual, s, (yyvsp[-1].str))) {
                                           YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 166:

    { if (read_all && yang_read_reference(trg, actual, s, (yyvsp[-1].str))) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     }

    break;

  case 167:

    { if (read_all) {
                                                                          if (yang_read_pattern(trg, actual, (yyvsp[-2].str), (yyvsp[-1].ch))) {
                                                                            YYABORT;
                                                                          }
                                                                          actual = yang_type;
                                                                          actual_type = TYPE_KEYWORD;
                                                                        }
                                                                      }

    break;

  case 168:

    { if (read_all) {
                            struct yang_type *tmp = (struct yang_type *)actual;

                            yang_type = actual;
                            actual = &tmp->type->info.str.patterns[tmp->type->info.str.pat_count];
                            tmp->type->info.str.pat_count++;
                            (yyval.str) = s;
                            s = NULL;
                          } else {
                            (yyval.str) = NULL;
                          }
                        }

    break;

  case 169:

    { (yyval.ch) = 0x06; }

    break;

  case 170:

    { (yyval.ch) = (yyvsp[-1].ch); }

    break;

  case 171:

    { (yyval.ch) = 0x06; /* ACK */ }

    break;

  case 172:

    { if (read_all) {
                                        if (trg->version < 2) {
                                          LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "modifier");
                                          YYABORT;
                                        }
                                        if ((yyvsp[-1].ch) != 0x06) {
                                          LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "modifier", "pattern");
                                          YYABORT;
                                        }
                                        (yyval.ch) = (yyvsp[0].ch);
                                      }
                                    }

    break;

  case 173:

    { if (read_all && yang_read_message(trg, actual, s, "pattern", ERROR_MESSAGE_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 174:

    { if (read_all && yang_read_message(trg, actual, s, "pattern", ERROR_APP_TAG_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 175:

    { if (read_all && yang_read_description(trg, actual, s, "pattern")) {
                                           YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 176:

    { if (read_all && yang_read_reference(trg, actual, s, "pattern")) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     }

    break;

  case 177:

    { if (read_all) {
                                                       if (!strcmp(s, "invert-match")) {
                                                         (yyval.ch) = 0x15;
                                                         free(s);
                                                         s = NULL;
                                                       } else {
                                                         LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, s);
                                                         free(s);
                                                         YYABORT;
                                                       }
                                                     }
                                                   }

    break;

  case 178:

    { if (read_all) {
                        if (size_arrays->node[size_arrays->next].enm) {
                          ((struct yang_type *)actual)->type->info.enums.enm = calloc(size_arrays->node[size_arrays->next++].enm, sizeof(struct lys_type_enum));
                          if (!((struct yang_type *)actual)->type->info.enums.enm) {
                            LOGMEM;
                            YYABORT;
                          }
                        }
                        ((struct yang_type *)actual)->base = LY_TYPE_ENUM;
                        cnt_val = 0;
                      } else {
                        cnt_val = size_arrays->size; /* hack store index of node array */
                        if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                          LOGMEM;
                          YYABORT;
                        }
                      }
                    }

    break;

  case 182:

    { if (read_all) {
               if (yang_check_enum(yang_type, actual, &cnt_val, actual_type)) {
                 YYABORT;
               }
               actual = yang_type;
               actual_type = TYPE_KEYWORD;
             } else {
               size_arrays->node[cnt_val].enm++; /* count of enum*/
             }
           }

    break;

  case 183:

    { if (read_all) {
                         yang_type = actual;
                         if (!(actual = yang_read_enum(trg, actual, s))) {
                           YYABORT;
                         }
                         s = NULL;
                         actual_type = 0;
                       }
                     }

    break;

  case 186:

    { if (read_all) {
                              if ((trg->version < 2) && size_arrays->node[size_arrays->next].if_features) {
                                LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "if-feature", "enum");
                                YYABORT;
                              }

                              if (size_arrays->node[size_arrays->next].if_features) {
                                ((struct lys_type_enum *)actual)->iffeature = calloc(size_arrays->node[size_arrays->next].if_features,
                                                                                     sizeof *((struct lys_type_enum *)actual)->iffeature);
                                if (!((struct lys_type_enum *)actual)->iffeature) {
                                  LOGMEM;
                                  YYABORT;
                                }
                              }

                              size_arrays->next++;
                            } else {
                              (yyval.i) = size_arrays->size;
                              if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                LOGMEM;
                                YYABORT;
                              }
                            }
                          }

    break;

  case 187:

    { if (read_all) {
                                       if (yang_read_if_feature(trg, yang_type, s, unres, ENUM_KEYWORD)) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     } else {
                                       size_arrays->node[(yyvsp[-1].i)].if_features++;
                                     }
                                   }

    break;

  case 188:

    { /* actual_type - it is used to check value of enum statement*/
                                if (read_all) {
                                  if (actual_type) {
                                    LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "value", "enum");
                                    YYABORT;
                                  }
                                  actual_type = 1;
                                }
                              }

    break;

  case 189:

    { if (read_all) {
                                   if (yang_check_flags((uint16_t*)&((struct lys_type_enum *)actual)->flags, LYS_STATUS_MASK, "status", "enum", (yyvsp[0].i), 1)) {
                                     YYABORT;
                                   }
                                 }
                               }

    break;

  case 190:

    { if (read_all && yang_read_description(trg, actual, s, "enum")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 191:

    { if (read_all && yang_read_reference(trg, actual, s, "enum")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 192:

    { if (read_all) {
                        ((struct lys_type_enum *)actual)->value = (yyvsp[-1].i);

                        /* keep the highest enum value for automatic increment */
                        if ((yyvsp[-1].i) >= cnt_val) {
                          cnt_val = (yyvsp[-1].i);
                          cnt_val++;
                        }
                      }
                    }

    break;

  case 193:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 194:

    { if (read_all) {
                  /* convert it to int32_t */
                  int64_t val;
                  char *endptr;

                  val = strtoll(s, &endptr, 10);
                  if (val < INT32_MIN || val > INT32_MAX || *endptr) {
                      LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "value");
                      free(s);
                      YYABORT;
                  }
                  free(s);
                  s = NULL;
                  (yyval.i) = (int32_t) val;
               }
             }

    break;

  case 195:

    { actual = (yyvsp[-1].v);
                                                        actual_type = RANGE_KEYWORD;
                                                      }

    break;

  case 199:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 200:

    { (yyval.i) = 1; }

    break;

  case 201:

    { (yyval.i) = -1; }

    break;

  case 202:

    { if (read_all) {
                  if (!strcmp(s,"true")) {
                    (yyval.i) = 1;
                  } else if (!strcmp(s,"false")) {
                    (yyval.i) = -1;
                  } else {
                    LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "require-instance");
                    free(s);
                    YYABORT;
                  }
                  free(s);
                  s = NULL;
                }
              }

    break;

  case 203:

    { if (read_all) {
                        if (size_arrays->node[size_arrays->next].bit) {
                          ((struct yang_type *)actual)->type->info.bits.bit = calloc(size_arrays->node[size_arrays->next++].bit, sizeof(struct lys_type_bit));
                          if (!((struct yang_type *)actual)->type->info.bits.bit) {
                            LOGMEM;
                            YYABORT;
                          }
                        }
                        ((struct yang_type *)actual)->base = LY_TYPE_BITS;
                        cnt_val = 0;
                      } else {
                        cnt_val = size_arrays->size; /* hack store index of node array */
                        if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                          LOGMEM;
                          YYABORT;
                        }
                      }
                    }

    break;

  case 207:

    { if (read_all) {
                      if (yang_check_bit(yang_type, actual, &cnt_val, actual_type)) {
                        YYABORT;
                      }
                      actual = yang_type;
                    } else {
                      size_arrays->node[cnt_val].bit++; /* count of bit*/
                    }
                  }

    break;

  case 208:

    { if (read_all) {
                                    yang_type = actual;
                                    if (!(actual = yang_read_bit(trg, actual, s))) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                    actual_type = 0;
                                  }
                                }

    break;

  case 211:

    { if (read_all) {
                              if ((trg->version < 2) && size_arrays->node[size_arrays->next].if_features) {
                                LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "if-feature", "bit");
                                YYABORT;
                              }

                              if (size_arrays->node[size_arrays->next].if_features) {
                                ((struct lys_type_bit *)actual)->iffeature = calloc(size_arrays->node[size_arrays->next].if_features,
                                                                                     sizeof *((struct lys_type_bit *)actual)->iffeature);
                                if (!((struct lys_type_bit *)actual)->iffeature) {
                                  LOGMEM;
                                  YYABORT;
                                }
                              }

                              size_arrays->next++;
                            } else {
                              (yyval.i) = size_arrays->size;
                              if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                LOGMEM;
                                YYABORT;
                              }
                            }
                          }

    break;

  case 212:

    { if (read_all) {
                                      if (yang_read_if_feature(trg, yang_type, s, unres, BIT_KEYWORD)) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].i)].if_features++;
                                    }
                                  }

    break;

  case 213:

    { /* actual_type - it is used to check position of bit statement*/
                                  if (read_all) {
                                    if (actual_type) {
                                      LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "position", "bit");
                                      YYABORT;
                                    }
                                    actual_type = 1;
                                  }
                                }

    break;

  case 214:

    { if (read_all) {
                                  if (yang_check_flags((uint16_t*)&((struct lys_type_bit *)actual)->flags, LYS_STATUS_MASK, "status", "bit", (yyvsp[0].i), 1)) {
                                    YYABORT;
                                  }
                                }
                              }

    break;

  case 215:

    { if (read_all && yang_read_description(trg, actual, s, "bit")) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }

    break;

  case 216:

    { if (read_all && yang_read_reference(trg, actual, s, "bit")) {
                                     YYABORT;
                                   }
                                   s = NULL;
                                 }

    break;

  case 217:

    { if (read_all) {
                           ((struct lys_type_bit *)actual)->pos = (yyvsp[-1].uint);

                           /* keep the highest position value for automatic increment */
                           if ((yyvsp[-1].uint) >= cnt_val) {
                             cnt_val = (yyvsp[-1].uint);
                             cnt_val++;
                           }
                         }
                       }

    break;

  case 218:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 219:

    { /* convert it to uint32_t */
                unsigned long val;
                char *endptr;

                val = strtoul(s, &endptr, 10);
                if (val > UINT32_MAX || s[0] == '-' || *endptr) {
                    LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "position");
                    free(s);
                    YYABORT;
                }
                free(s);
                s = NULL;
                (yyval.uint) = (uint32_t) val;
              }

    break;

  case 224:

    { if (read_all) {
                                                           if (!(actual = yang_read_node(trg,actual,s,LYS_GROUPING,sizeof(struct lys_node_grp)))) {YYABORT;}
                                                           s=NULL;
                                                         }
                                                       }

    break;

  case 228:

    { if (read_all) {
                               (yyval.nodes).grouping = actual;
                               actual_type = GROUPING_KEYWORD;
                               if (size_arrays->node[size_arrays->next].tpdf) {
                                 (yyval.nodes).grouping->tpdf = calloc(size_arrays->node[size_arrays->next].tpdf, sizeof *(yyval.nodes).grouping->tpdf);
                                 if (!(yyval.nodes).grouping->tpdf) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                               if (store_flags((struct lys_node *)(yyval.nodes).grouping, size_arrays->node[size_arrays->next].flags, 0)) {
                                   YYABORT;
                               }
                               size_arrays->next++;
                             } else {
                               (yyval.nodes).index = size_arrays->size;
                               if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                 LOGMEM;
                                 YYABORT;
                               }
                             }
                           }

    break;

  case 229:

    { if (!read_all) {
                                            if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "grouping", (yyvsp[0].i), 0)) {
                                              YYABORT;
                                            }
                                          }
                                        }

    break;

  case 230:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).grouping, s, "grouping")) {
                                            YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 231:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).grouping, s, "grouping")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 232:

    { actual = (yyvsp[-2].nodes).grouping; actual_type = GROUPING_KEYWORD; }

    break;

  case 233:

    { if (read_all) {
                                                actual = (yyvsp[-2].nodes).grouping;
                                                actual_type = GROUPING_KEYWORD;
                                              } else {
                                                size_arrays->node[(yyvsp[-2].nodes).index].tpdf++;
                                              }
                                            }

    break;

  case 234:

    { actual = (yyvsp[-2].nodes).grouping; actual_type = GROUPING_KEYWORD; }

    break;

  case 235:

    { actual = (yyvsp[-2].nodes).grouping; actual_type = GROUPING_KEYWORD; }

    break;

  case 236:

    { if (read_all) {
                                                     actual = (yyvsp[-2].nodes).grouping;
                                                     actual_type = GROUPING_KEYWORD;
                                                     if (trg->version < 2) {
                                                       LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "notification");
                                                       YYABORT;
                                                     }
                                                   }
                                                 }

    break;

  case 245:

    { if (read_all) {
                                                             if (!(actual = yang_read_node(trg,actual,s,LYS_CONTAINER,sizeof(struct lys_node_container)))) {YYABORT;}
                                                             data_node = actual;
                                                             s=NULL;
                                                           }
                                                         }

    break;

  case 249:

    { if (read_all) {
                               (yyval.nodes).container = actual;
                               actual_type = CONTAINER_KEYWORD;
                               if (size_arrays->node[size_arrays->next].if_features) {
                                 (yyval.nodes).container->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).container->iffeature);
                                 if (!(yyval.nodes).container->iffeature) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                               if (size_arrays->node[size_arrays->next].must) {
                                 (yyval.nodes).container->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).container->must);
                                 if (!(yyval.nodes).container->must) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                               if (size_arrays->node[size_arrays->next].tpdf) {
                                 (yyval.nodes).container->tpdf = calloc(size_arrays->node[size_arrays->next].tpdf, sizeof *(yyval.nodes).container->tpdf);
                                 if (!(yyval.nodes).container->tpdf) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                               if (store_flags((struct lys_node *)(yyval.nodes).container, size_arrays->node[size_arrays->next].flags, config_inherit)) {
                                   YYABORT;
                               }
                               size_arrays->next++;
                             } else {
                               (yyval.nodes).index = size_arrays->size;
                               if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                 LOGMEM;
                                 YYABORT;
                               }
                             }
                           }

    break;

  case 250:

    { actual = (yyvsp[-1].nodes).container; actual_type = CONTAINER_KEYWORD; }

    break;

  case 252:

    { if (read_all) {
                                            if (yang_read_if_feature(trg, (yyvsp[-1].nodes).container, s, unres, CONTAINER_KEYWORD)) {YYABORT;}
                                            s=NULL;
                                          } else {
                                            size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                          }
                                        }

    break;

  case 253:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).container;
                                      actual_type = CONTAINER_KEYWORD;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                    }
                                  }

    break;

  case 255:

    { if (read_all && yang_read_presence(trg, (yyvsp[-1].nodes).container, s)) {YYABORT;} s=NULL; }

    break;

  case 256:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "container", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 257:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "container", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 258:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).container, s, "container")) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 259:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).container, s, "container")) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }

    break;

  case 260:

    { actual = (yyvsp[-1].nodes).container;
                                        actual_type = CONTAINER_KEYWORD;
                                        data_node = actual;
                                      }

    break;

  case 262:

    { actual = (yyvsp[-1].nodes).container;
                                      actual_type = CONTAINER_KEYWORD;
                                      data_node = actual;
                                    }

    break;

  case 264:

    { if (read_all) {
                                              actual = (yyvsp[-1].nodes).container;
                                              actual_type = CONTAINER_KEYWORD;
                                              data_node = actual;
                                              if (trg->version < 2) {
                                                LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "notification");
                                                YYABORT;
                                              }
                                            }
                                          }

    break;

  case 266:

    { if (read_all) {
                                                 actual = (yyvsp[-1].nodes).container;
                                                 actual_type = CONTAINER_KEYWORD;
                                               } else {
                                                 size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                               }
                                             }

    break;

  case 268:

    { actual = (yyvsp[-1].nodes).container;
                                        actual_type = CONTAINER_KEYWORD;
                                        data_node = actual;
                                      }

    break;

  case 270:

    { if (read_all) {
                    if (!((yyvsp[-1].nodes).node.flag & LYS_TYPE_DEF)) {
                      LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_leaf, "type", "leaf");
                      YYABORT;
                    }
                    if ((yyvsp[-1].nodes).node.ptr_leaf->dflt && ((yyvsp[-1].nodes).node.ptr_leaf->flags & LYS_MAND_TRUE)) {
                      /* RFC 6020, 7.6.4 - default statement must not with mandatory true */
                      LOGVAL(LYE_INCHILDSTMT, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_leaf, "mandatory", "leaf");
                      LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "The \"mandatory\" statement is forbidden on leaf with \"default\".");
                      YYABORT;
                    }
                    if (unres_schema_add_node(trg, unres, &(yyvsp[-1].nodes).node.ptr_leaf->type, UNRES_TYPE_DER,(struct lys_node *)(yyvsp[-1].nodes).node.ptr_leaf) == -1) {
                      lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-1].nodes).node.ptr_leaf->type.der)->name);
                      free((yyvsp[-1].nodes).node.ptr_leaf->type.der);
                      (yyvsp[-1].nodes).node.ptr_leaf->type.der = NULL;
                      YYABORT;
                    }
                    if (unres_schema_add_str(trg, unres, &(yyvsp[-1].nodes).node.ptr_leaf->type, UNRES_TYPE_DFLT, (yyvsp[-1].nodes).node.ptr_leaf->dflt) == -1) {
                      YYABORT;
                    }
                  }
                }

    break;

  case 271:

    { if (read_all) {
                                     if (!(actual = yang_read_node(trg,actual,s,LYS_LEAF,sizeof(struct lys_node_leaf)))) {YYABORT;}
                                     data_node = actual;
                                     s=NULL;
                                     (yyval.nodes).node.ptr_leaf = actual;
                                   }
                                 }

    break;

  case 272:

    { if (read_all) {
                            (yyval.nodes).node.ptr_leaf = actual;
                            (yyval.nodes).node.flag = 0;
                            actual_type = LEAF_KEYWORD;
                            if (size_arrays->node[size_arrays->next].if_features) {
                              (yyval.nodes).node.ptr_leaf->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).node.ptr_leaf->iffeature);
                              if (!(yyval.nodes).node.ptr_leaf->iffeature) {
                                LOGMEM;
                                YYABORT;
                              }
                            }
                            if (size_arrays->node[size_arrays->next].must) {
                              (yyval.nodes).node.ptr_leaf->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).node.ptr_leaf->must);
                              if (!(yyval.nodes).node.ptr_leaf->must) {
                                LOGMEM;
                                YYABORT;
                              }
                            }
                            if (store_flags((struct lys_node *)(yyval.nodes).node.ptr_leaf, size_arrays->node[size_arrays->next].flags, config_inherit)) {
                                YYABORT;
                            }
                            size_arrays->next++;
                          } else {
                            (yyval.nodes).index = size_arrays->size;
                            if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                        }

    break;

  case 273:

    { actual = (yyvsp[-1].nodes).node.ptr_leaf; actual_type = LEAF_KEYWORD; }

    break;

  case 275:

    { if (read_all) {
                                         if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, unres, LEAF_KEYWORD)) {YYABORT;}
                                         s=NULL;
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                       }
                                     }

    break;

  case 276:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).node.ptr_leaf;
                                   actual_type = LEAF_KEYWORD;
                                   (yyvsp[-1].nodes).node.flag |= LYS_TYPE_DEF;
                                 }
                               }

    break;

  case 277:

    { (yyval.nodes) = (yyvsp[-3].nodes);}

    break;

  case 278:

    { if (read_all && yang_read_units(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, LEAF_KEYWORD)) {YYABORT;} s = NULL; }

    break;

  case 279:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).node.ptr_leaf;
                                   actual_type = LEAF_KEYWORD;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                 }
                               }

    break;

  case 281:

    { if (read_all && yang_read_default(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, LEAF_KEYWORD)) {YYABORT;}
                                    s = NULL;
                                  }

    break;

  case 282:

    { if (!read_all) {
                                               if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "leaf", (yyvsp[0].i), 0)) {
                                                 YYABORT;
                                               }
                                             }
                                           }

    break;

  case 283:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_MAND_MASK, "mandatory", "leaf", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 284:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "leaf", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        }
                                      }

    break;

  case 285:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, "leaf")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 286:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, "leaf")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 287:

    { if (read_all) {
                                          if (!(actual = yang_read_node(trg,actual,s,LYS_LEAFLIST,sizeof(struct lys_node_leaflist)))) {
                                            YYABORT;
                                          }
                                          data_node = actual;
                                          s=NULL;
                                          (yyval.nodes).node.ptr_leaflist = actual;
                                        }
                                      }

    break;

  case 288:

    { if (read_all) {
                          int i;

                          if ((yyvsp[-1].nodes).node.ptr_leaflist->flags & LYS_CONFIG_R) {
                            /* RFC 6020, 7.7.5 - ignore ordering when the list represents state data
                             * ignore oredering MASK - 0x7F
                             */
                            (yyvsp[-1].nodes).node.ptr_leaflist->flags &= 0x7F;
                          }
                          if ((yyvsp[-1].nodes).node.ptr_leaflist->max && (yyvsp[-1].nodes).node.ptr_leaflist->min > (yyvsp[-1].nodes).node.ptr_leaflist->max) {
                            LOGVAL(LYE_SPEC, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_leaflist, "\"min-elements\" is bigger than \"max-elements\".");
                            YYABORT;
                          }
                          if (!((yyvsp[-1].nodes).node.flag & LYS_TYPE_DEF)) {
                            LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_leaflist, "type", "leaf-list");
                            YYABORT;
                          }
                          if (unres_schema_add_node(trg, unres, &(yyvsp[-1].nodes).node.ptr_leaflist->type, UNRES_TYPE_DER, (struct lys_node *)(yyvsp[-1].nodes).node.ptr_leaflist) == -1) {
                            lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-1].nodes).node.ptr_leaflist->type.der)->name);
                            free((yyvsp[-1].nodes).node.ptr_leaflist->type.der);
                            (yyvsp[-1].nodes).node.ptr_leaflist->type.der = NULL;
                            YYABORT;
                          }
                          if ((yyvsp[-1].nodes).node.ptr_leaflist->dflt_size && (yyvsp[-1].nodes).node.ptr_leaflist->min) {
                            LOGVAL(LYE_INCHILDSTMT, LY_VLOG_NONE, NULL, "min-elements", "leaf-list");
                            LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL,
                                   "The \"min-elements\" statement with non-zero value is forbidden on leaf-lists with the \"default\" statement.");
                            YYABORT;
                          }

                          /* check default value (if not defined, there still could be some restrictions
                           * that need to be checked against a default value from a derived type) */
                          for (i = 0; i < (yyvsp[-1].nodes).node.ptr_leaflist->dflt_size; i++) {
                            if (unres_schema_add_str(module, unres, &(yyvsp[-1].nodes).node.ptr_leaflist->type, UNRES_TYPE_DFLT, (yyvsp[-1].nodes).node.ptr_leaflist->dflt[i]) == -1) {
                              YYABORT;
                            }
                          }
                        }
                      }

    break;

  case 289:

    { if (read_all) {
                               (yyval.nodes).node.ptr_leaflist = actual;
                               (yyval.nodes).node.flag = 0;
                               actual_type = LEAF_LIST_KEYWORD;
                               if (size_arrays->node[size_arrays->next].if_features) {
                                 (yyval.nodes).node.ptr_leaflist->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).node.ptr_leaflist->iffeature);
                                 if (!(yyval.nodes).node.ptr_leaflist->iffeature) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                               if (size_arrays->node[size_arrays->next].must) {
                                 (yyval.nodes).node.ptr_leaflist->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).node.ptr_leaflist->must);
                                 if (!(yyval.nodes).node.ptr_leaflist->must) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                               if (size_arrays->node[size_arrays->next].dflt) {
                                 if (trg->version < 2) {
                                   LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "default");
                                   YYABORT;
                                 }
                                 (yyval.nodes).node.ptr_leaflist->dflt = calloc(size_arrays->node[size_arrays->next].dflt, sizeof *(yyval.nodes).node.ptr_leaflist->dflt);
                                 if (!(yyval.nodes).node.ptr_leaflist->dflt) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                               if (store_flags((struct lys_node *)(yyval.nodes).node.ptr_leaflist, size_arrays->node[size_arrays->next].flags, config_inherit)) {
                                   YYABORT;
                               }
                               size_arrays->next++;
                             } else {
                               (yyval.nodes).index = size_arrays->size;
                               if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                 LOGMEM;
                                 YYABORT;
                               }
                             }
                           }

    break;

  case 290:

    { actual = (yyvsp[-1].nodes).node.ptr_leaflist; actual_type = LEAF_LIST_KEYWORD; }

    break;

  case 292:

    { if (read_all) {
                                            if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, unres, LEAF_LIST_KEYWORD)) {YYABORT;}
                                            s=NULL;
                                          } else {
                                            size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                          }
                                        }

    break;

  case 293:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).node.ptr_leaflist;
                                      actual_type = LEAF_LIST_KEYWORD;
                                      (yyvsp[-1].nodes).node.flag |= LYS_TYPE_DEF;
                                    }
                                  }

    break;

  case 294:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 295:

    { if (read_all) {
                                         int i;

                                         /* check for duplicity in case of configuration data,
                                          * in case of status data duplicities are allowed */
                                         if ((yyvsp[-1].nodes).node.ptr_leaflist->flags & LYS_CONFIG_W) {
                                           for (i = 0; i < (yyvsp[-1].nodes).node.ptr_leaflist->dflt_size; i++) {
                                             if (ly_strequal((yyvsp[-1].nodes).node.ptr_leaflist->dflt[i], s, 0)) {
                                               LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "default");
                                               LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Duplicated default value \"%s\".", s);
                                               free(s);
                                               YYABORT;
                                             }
                                           }
                                         }
                                         (yyvsp[-1].nodes).node.ptr_leaflist->dflt[(yyvsp[-1].nodes).node.ptr_leaflist->dflt_size++] = lydict_insert_zc(module->ctx, s);
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].dflt++;
                                       }
                                     }

    break;

  case 296:

    { if (read_all && yang_read_units(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, LEAF_LIST_KEYWORD)) {YYABORT;} s = NULL; }

    break;

  case 297:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).node.ptr_leaflist;
                                      actual_type = LEAF_LIST_KEYWORD;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                    }
                                  }

    break;

  case 299:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "leaf-list", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 300:

    { if (read_all) {
                                              if ((yyvsp[-1].nodes).node.flag & LYS_MIN_ELEMENTS) {
                                                LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_leaflist, "min-elements", "leaf-list");
                                                YYABORT;
                                              }
                                              (yyvsp[-1].nodes).node.ptr_leaflist->min = (yyvsp[0].uint);
                                              (yyvsp[-1].nodes).node.flag |= LYS_MIN_ELEMENTS;
                                              (yyval.nodes) = (yyvsp[-1].nodes);
                                              if ((yyvsp[-1].nodes).node.ptr_leaflist->max && ((yyvsp[-1].nodes).node.ptr_leaflist->min > (yyvsp[-1].nodes).node.ptr_leaflist->max)) {
                                                LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid value \"%d\" of \"%s\".", (yyvsp[0].uint), "min-elements");
                                                LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "\"min-elements\" is bigger than \"max-elements\".");
                                              }
                                            }
                                          }

    break;

  case 301:

    { if (read_all) {
                                              if ((yyvsp[-1].nodes).node.flag & LYS_MAX_ELEMENTS) {
                                                LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_leaflist, "max-elements", "leaf-list");
                                                YYABORT;
                                              }
                                              (yyvsp[-1].nodes).node.ptr_leaflist->max = (yyvsp[0].uint);
                                              (yyvsp[-1].nodes).node.flag |= LYS_MAX_ELEMENTS;
                                              (yyval.nodes) = (yyvsp[-1].nodes);
                                              if ((yyvsp[-1].nodes).node.ptr_leaflist->min > (yyvsp[-1].nodes).node.ptr_leaflist->max) {
                                                LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid value \"%d\" of \"%s\".", (yyvsp[0].uint), "max-elements");
                                                LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "\"max-elements\" is smaller than \"min-elements\".");
                                              }
                                            }
                                          }

    break;

  case 302:

    { if (read_all) {
                                            if ((yyvsp[-1].nodes).node.flag & LYS_ORDERED_MASK) {
                                              LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_leaflist, "ordered by", "leaf-list");
                                              YYABORT;
                                            }
                                            if ((yyvsp[0].i) & LYS_USERORDERED) {
                                              (yyvsp[-1].nodes).node.ptr_leaflist->flags |= LYS_USERORDERED;
                                            }
                                            (yyvsp[-1].nodes).node.flag |= (yyvsp[0].i);
                                            (yyval.nodes) = (yyvsp[-1].nodes);
                                          }
                                        }

    break;

  case 303:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "leaf-list", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 304:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, "leaf-list")) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 305:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, "leaf-list")) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }

    break;

  case 306:

    { if (read_all) {
                                                   if (!(actual = yang_read_node(trg,actual,s,LYS_LIST,sizeof(struct lys_node_list)))) {YYABORT;}
                                                   data_node = actual;
                                                   s=NULL;
                                                 }
                                               }

    break;

  case 307:

    { if (read_all) {
                                 if ((yyvsp[0].nodes).node.ptr_list->flags & LYS_CONFIG_R) {
                                   /* RFC 6020, 7.7.5 - ignore ordering when the list represents state data
                                    * ignore oredering MASK - 0x7F
                                    */
                                   (yyvsp[0].nodes).node.ptr_list->flags &= 0x7F;
                                 }
                                 if (((yyvsp[0].nodes).node.ptr_list->flags & LYS_CONFIG_W) && !(yyvsp[0].nodes).node.ptr_list->keys) {
                                   LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_list, "key", "list");
                                   YYABORT;
                                 }
                                 if ((yyvsp[0].nodes).node.ptr_list->keys && yang_read_key(trg, (yyvsp[0].nodes).node.ptr_list, unres)) {
                                   YYABORT;
                                 }
                                 if (!((yyvsp[0].nodes).node.flag & LYS_DATADEF)) {
                                   LOGVAL(LYE_SPEC, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_list, "data-def statement missing.");
                                   YYABORT;
                                 }
                                 if (yang_read_unique(trg, (yyvsp[0].nodes).node.ptr_list, unres)) {
                                   YYABORT;
                                 }
                               }
                             }

    break;

  case 309:

    { if (read_all) {
                          (yyval.nodes).node.ptr_list = actual;
                          (yyval.nodes).node.flag = 0;
                          actual_type = LIST_KEYWORD;
                          if (size_arrays->node[size_arrays->next].if_features) {
                            (yyval.nodes).node.ptr_list->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).node.ptr_list->iffeature);
                            if (!(yyval.nodes).node.ptr_list->iffeature) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          if (size_arrays->node[size_arrays->next].must) {
                            (yyval.nodes).node.ptr_list->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).node.ptr_list->must);
                            if (!(yyval.nodes).node.ptr_list->must) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          if (size_arrays->node[size_arrays->next].tpdf) {
                            (yyval.nodes).node.ptr_list->tpdf = calloc(size_arrays->node[size_arrays->next].tpdf, sizeof *(yyval.nodes).node.ptr_list->tpdf);
                            if (!(yyval.nodes).node.ptr_list->tpdf) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          if (size_arrays->node[size_arrays->next].unique) {
                            (yyval.nodes).node.ptr_list->unique = calloc(size_arrays->node[size_arrays->next].unique, sizeof *(yyval.nodes).node.ptr_list->unique);
                            if (!(yyval.nodes).node.ptr_list->unique) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          (yyval.nodes).node.ptr_list->keys_size = size_arrays->node[size_arrays->next].keys;
                          if (store_flags((struct lys_node *)(yyval.nodes).node.ptr_list, size_arrays->node[size_arrays->next].flags, config_inherit)) {
                              YYABORT;
                          }
                          size_arrays->next++;
                        } else {
                          (yyval.nodes).index = size_arrays->size;
                          if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                            LOGMEM;
                            YYABORT;
                          }
                        }
                      }

    break;

  case 310:

    { actual = (yyvsp[-1].nodes).node.ptr_list; actual_type = LIST_KEYWORD; }

    break;

  case 312:

    { if (read_all) {
                                       if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_list, s, unres, LIST_KEYWORD)) {YYABORT;}
                                       s=NULL;
                                     } else {
                                       size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                     }
                                   }

    break;

  case 313:

    { if (read_all) {
                                 actual = (yyvsp[-1].nodes).node.ptr_list;
                                 actual_type = LIST_KEYWORD;
                               } else {
                                 size_arrays->node[(yyvsp[-1].nodes).index].must++;
                               }
                             }

    break;

  case 315:

    { if (read_all) {
                                if ((yyvsp[-1].nodes).node.ptr_list->keys) {
                                  LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_list, "key", "list");
                                  free(s);
                                  YYABORT;
                                }
                                (yyvsp[-1].nodes).node.ptr_list->keys = (struct lys_node_leaf **)s;
                                (yyval.nodes) = (yyvsp[-1].nodes);
                                s=NULL;
                              } else {
                                /* list has keys */
                                size_arrays->node[(yyvsp[-1].nodes).index].keys = 1;
                              }
                            }

    break;

  case 316:

    { if (read_all) {
                                   (yyvsp[-1].nodes).node.ptr_list->unique[(yyvsp[-1].nodes).node.ptr_list->unique_size++].expr = (const char **)s;
                                   (yyval.nodes) = (yyvsp[-1].nodes);
                                   s = NULL;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].unique++;
                                 }
                               }

    break;

  case 317:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "list", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 318:

    { if (read_all) {
                                         if ((yyvsp[-1].nodes).node.flag & LYS_MIN_ELEMENTS) {
                                           LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_list, "min-elements", "list");
                                           YYABORT;
                                         }
                                         (yyvsp[-1].nodes).node.ptr_list->min = (yyvsp[0].uint);
                                         (yyvsp[-1].nodes).node.flag |= LYS_MIN_ELEMENTS;
                                         (yyval.nodes) = (yyvsp[-1].nodes);
                                         if ((yyvsp[-1].nodes).node.ptr_list->max && ((yyvsp[-1].nodes).node.ptr_list->min > (yyvsp[-1].nodes).node.ptr_list->max)) {
                                           LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid value \"%d\" of \"%s\".", (yyvsp[0].uint), "min-elements");
                                           LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "\"min-elements\" is bigger than \"max-elements\".");
                                         }
                                       }
                                     }

    break;

  case 319:

    { if (read_all) {
                                         if ((yyvsp[-1].nodes).node.flag & LYS_MAX_ELEMENTS) {
                                           LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_list, "max-elements", "list");
                                           YYABORT;
                                         }
                                         (yyvsp[-1].nodes).node.ptr_list->max = (yyvsp[0].uint);
                                         (yyvsp[-1].nodes).node.flag |= LYS_MAX_ELEMENTS;
                                         (yyval.nodes) = (yyvsp[-1].nodes);
                                         if ((yyvsp[-1].nodes).node.ptr_list->min > (yyvsp[-1].nodes).node.ptr_list->max) {
                                           LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid value \"%d\" of \"%s\".", (yyvsp[0].uint), "min-elements");
                                           LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "\"max-elements\" is smaller than \"min-elements\".");
                                         }
                                       }
                                     }

    break;

  case 320:

    { if (read_all) {
                                       if ((yyvsp[-1].nodes).node.flag & LYS_ORDERED_MASK) {
                                         LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_list, "ordered by", "list");
                                         YYABORT;
                                       }
                                       if ((yyvsp[0].i) & LYS_USERORDERED) {
                                         (yyvsp[-1].nodes).node.ptr_list->flags |= LYS_USERORDERED;
                                       }
                                       (yyvsp[-1].nodes).node.flag |= (yyvsp[0].i);
                                       (yyval.nodes) = (yyvsp[-1].nodes);
                                     }
                                   }

    break;

  case 321:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "list", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 322:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_list, s, "list")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 323:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_list, s, "list")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 324:

    { if (read_all) {
                                            actual = (yyvsp[-1].nodes).node.ptr_list;
                                            actual_type = LIST_KEYWORD;
                                          } else {
                                            size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                          }
                                        }

    break;

  case 326:

    { actual = (yyvsp[-1].nodes).node.ptr_list;
                                   actual_type = LIST_KEYWORD;
                                   data_node = actual;
                                 }

    break;

  case 328:

    { actual = (yyvsp[-1].nodes).node.ptr_list;
                                 actual_type = LIST_KEYWORD;
                                 data_node = actual;
                               }

    break;

  case 330:

    { if (read_all) {
                                         actual = (yyvsp[-1].nodes).node.ptr_list;
                                         actual_type = LIST_KEYWORD;
                                         data_node = actual;
                                         if (trg->version < 2) {
                                           LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "notification");
                                           YYABORT;
                                         }
                                       }
                                     }

    break;

  case 332:

    { actual = (yyvsp[-1].nodes).node.ptr_list;
                                   actual_type = LIST_KEYWORD;
                                   (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                   data_node = actual;
                                 }

    break;

  case 333:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 334:

    { if (read_all) {
                                                       if (!(actual = yang_read_node(trg,actual,s,LYS_CHOICE,sizeof(struct lys_node_choice)))) {YYABORT;}
                                                       data_node = actual;
                                                       if (data_node->parent && (data_node->parent->nodetype == LYS_GROUPING)) {
                                                         data_node = NULL;
                                                       }
                                                       s=NULL;
                                                     }
                                                   }

    break;

  case 337:

    { if (read_all) {
                              if ((yyvsp[0].nodes).choice.s && ((yyvsp[0].nodes).choice.ptr_choice->flags & LYS_MAND_TRUE)) {
                                LOGVAL(LYE_INCHILDSTMT, LY_VLOG_NONE, NULL, "default", "choice");
                                LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "The \"default\" statement is forbidden on choices with \"mandatory\".");
                                YYABORT;
                              }
                              /* link default with the case */
                              if ((yyvsp[0].nodes).choice.s) {
                                if (unres_schema_add_str(trg, unres, (yyvsp[0].nodes).choice.ptr_choice, UNRES_CHOICE_DFLT, (yyvsp[0].nodes).choice.s) == -1) {
                                  YYABORT;
                                }
                                free((yyvsp[0].nodes).choice.s);
                              }
                            }
                          }

    break;

  case 339:

    { if (read_all) {
                            (yyval.nodes).choice.ptr_choice = actual;
                            (yyval.nodes).choice.s = NULL;
                            actual_type = CHOICE_KEYWORD;
                            if (size_arrays->node[size_arrays->next].if_features) {
                              (yyval.nodes).choice.ptr_choice->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).choice.ptr_choice->iffeature);
                              if (!(yyval.nodes).choice.ptr_choice->iffeature) {
                                LOGMEM;
                                YYABORT;
                              }
                            }
                            if (store_flags((struct lys_node *)(yyval.nodes).choice.ptr_choice, size_arrays->node[size_arrays->next].flags, config_inherit)) {
                                YYABORT;
                            }
                            size_arrays->next++;
                          } else {
                            (yyval.nodes).index = size_arrays->size;
                            if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                        }

    break;

  case 340:

    { actual = (yyvsp[-1].nodes).choice.ptr_choice; actual_type = CHOICE_KEYWORD; }

    break;

  case 341:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 342:

    { if (read_all) {
                                         if (yang_read_if_feature(trg, (yyvsp[-1].nodes).choice.ptr_choice,s, unres, CHOICE_KEYWORD)) {
                                           if ((yyvsp[-1].nodes).choice.s) {
                                             free((yyvsp[-1].nodes).choice.s);
                                           }
                                           YYABORT;
                                         }
                                         s=NULL;
                                         (yyval.nodes) = (yyvsp[-1].nodes);
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                       }
                                     }

    break;

  case 343:

    { if (read_all) {
                                      if ((yyvsp[-1].nodes).choice.s) {
                                        LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).choice.ptr_choice, "default", "choice");
                                        free((yyvsp[-1].nodes).choice.s);
                                        free(s);
                                        YYABORT;
                                      }
                                      (yyvsp[-1].nodes).choice.s = s;
                                      s = NULL;
                                      (yyval.nodes) = (yyvsp[-1].nodes);
                                    }
                                  }

    break;

  case 344:

    { if (!read_all) {
                                           if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "choice", (yyvsp[0].i), 0)) {
                                             YYABORT;
                                           }
                                         } else {
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                         }
                                       }

    break;

  case 345:

    { if (!read_all) {
                                      if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_MAND_MASK, "mandatory", "choice", (yyvsp[0].i), 0)) {
                                        YYABORT;
                                      }
                                    } else {
                                      (yyval.nodes) = (yyvsp[-1].nodes);
                                    }
                                  }

    break;

  case 346:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "choice", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        } else {
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                        }
                                      }

    break;

  case 347:

    { if (read_all) {
                                          if (yang_read_description(trg, (yyvsp[-1].nodes).choice.ptr_choice, s, "choice")) {
                                            free((yyvsp[-1].nodes).choice.s);
                                            YYABORT;
                                          }
                                          s = NULL;
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                        }
                                      }

    break;

  case 348:

    { if (read_all) {
                                        if (yang_read_reference(trg, (yyvsp[-1].nodes).choice.ptr_choice, s, "choice")) {
                                          free((yyvsp[-1].nodes).choice.s);
                                          YYABORT;
                                        }
                                        s = NULL;
                                        (yyval.nodes) = (yyvsp[-1].nodes);
                                      }
                                    }

    break;

  case 349:

    { actual = (yyvsp[-1].nodes).choice.ptr_choice;
                                            actual_type = CHOICE_KEYWORD;
                                            data_node = actual;
                                            if (read_all && data_node->parent && (data_node->parent->nodetype == LYS_GROUPING)) {
                                              data_node = NULL;
                                            }
                                          }

    break;

  case 350:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 359:

    { if (read_all && trg->version < 2 ) {
                     LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "choice");
                     YYABORT;
                   }
                 }

    break;

  case 360:

    { if (read_all) {
                                                   if (!(actual = yang_read_node(trg,actual,s,LYS_CASE,sizeof(struct lys_node_case)))) {YYABORT;}
                                                   data_node = actual;
                                                   s=NULL;
                                                 }
                                               }

    break;

  case 364:

    { if (read_all) {
                          (yyval.nodes).cs = actual;
                          actual_type = CASE_KEYWORD;
                          if (size_arrays->node[size_arrays->next].if_features) {
                            (yyval.nodes).cs->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).cs->iffeature);
                            if (!(yyval.nodes).cs->iffeature) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          if (store_flags((struct lys_node *)(yyval.nodes).cs, size_arrays->node[size_arrays->next].flags, 1)) {
                              YYABORT;
                          }
                          size_arrays->next++;
                        } else {
                          (yyval.nodes).index = size_arrays->size;
                          if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                            LOGMEM;
                            YYABORT;
                          }
                        }
                      }

    break;

  case 365:

    { actual = (yyvsp[-1].nodes).cs; actual_type = CASE_KEYWORD; }

    break;

  case 367:

    { if (read_all) {
                                       if (yang_read_if_feature(trg, (yyvsp[-1].nodes).cs, s, unres, CASE_KEYWORD)) {YYABORT;}
                                       s=NULL;
                                     } else {
                                       size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                     }
                                   }

    break;

  case 368:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "case", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 369:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).cs, s, "case")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 370:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).cs, s, "case")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 371:

    { actual = (yyvsp[-1].nodes).cs;
                                   actual_type = CASE_KEYWORD;
                                   data_node = actual;
                                 }

    break;

  case 373:

    { if (read_all) {
                                                       if (!(actual = yang_read_node(trg,actual,s,LYS_ANYXML,sizeof(struct lys_node_anydata)))) {YYABORT;}
                                                       data_node = actual;
                                                       if (data_node->parent && (data_node->parent->nodetype == LYS_GROUPING)) {
                                                         data_node = NULL;
                                                       }
                                                       s=NULL;
                                                     }
                                                     actual_type = ANYXML_KEYWORD;
                                                   }

    break;

  case 375:

    { if (read_all) {
                                                         if (!(actual = yang_read_node(trg, actual, s, LYS_ANYDATA, sizeof(struct lys_node_anydata)))) {YYABORT;}
                                                         data_node = actual;
                                                         if (data_node->parent && (data_node->parent->nodetype == LYS_GROUPING)) {
                                                           data_node = NULL;
                                                         }
                                                         s = NULL;
                                                       }
                                                       actual_type = ANYDATA_KEYWORD;
                                                     }

    break;

  case 379:

    { if (read_all) {
                            (yyval.nodes).node.ptr_anydata = actual;
                            (yyval.nodes).node.flag = actual_type;
                            if (size_arrays->node[size_arrays->next].if_features) {
                              (yyval.nodes).node.ptr_anydata->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).node.ptr_anydata->iffeature);
                              if (!(yyval.nodes).node.ptr_anydata->iffeature) {
                                LOGMEM;
                                YYABORT;
                              }
                            }
                            if (size_arrays->node[size_arrays->next].must) {
                              (yyval.nodes).node.ptr_anydata->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).node.ptr_anydata->must);
                              if (!(yyval.nodes).node.ptr_anydata->must) {
                                LOGMEM;
                                YYABORT;
                              }
                            }
                            if (store_flags((struct lys_node *)(yyval.nodes).node.ptr_anydata, size_arrays->node[size_arrays->next].flags, config_inherit)) {
                                YYABORT;
                            }
                            size_arrays->next++;
                          } else {
                            (yyval.nodes).index = size_arrays->size;
                            if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                        }

    break;

  case 380:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).node.ptr_anydata;
                                   actual_type = (yyvsp[-1].nodes).node.flag;
                                 }
                               }

    break;

  case 382:

    { if (read_all) {
                                         if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_anydata, s, unres, (yyvsp[-1].nodes).node.flag)) {YYABORT;}
                                         s=NULL;
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                       }
                                     }

    break;

  case 383:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).node.ptr_anydata;
                                   actual_type = (yyvsp[-1].nodes).node.flag;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                 }
                               }

    break;

  case 385:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config",
                                                               (actual_type == ANYXML_KEYWORD) ? "anyxml" : "anydata", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        }
                                      }

    break;

  case 386:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_MAND_MASK, "mandatory",
                                                                  (actual_type == ANYXML_KEYWORD) ? "anyxml" : "anydata", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 387:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status",
                                                               (actual_type == ANYXML_KEYWORD) ? "anyxml" : "anydata", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        }
                                      }

    break;

  case 388:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_anydata, s, ((yyvsp[-1].nodes).node.flag == ANYXML_KEYWORD) ? "anyxml" : "anydata")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 389:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_anydata, s, ((yyvsp[-1].nodes).node.flag == ANYXML_KEYWORD) ? "anyxml" : "anydata")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 390:

    { if (read_all) {
                                                       if (!(actual = yang_read_node(trg,actual,s,LYS_USES,sizeof(struct lys_node_uses)))) {YYABORT;}
                                                       data_node = actual;
                                                       if (data_node->parent && (data_node->parent->nodetype == LYS_GROUPING)) {
                                                         data_node = NULL;
                                                       }
                                                       s=NULL;
                                                     }
                                                   }

    break;

  case 391:

    { if (read_all) {
                        if (unres_schema_add_node(trg, unres, actual, UNRES_USES, NULL) == -1) {
                          YYABORT;
                        }
                      }
                    }

    break;

  case 394:

    { if (read_all) {
                          (yyval.nodes).uses.ptr_uses = actual;
                          (yyval.nodes).uses.config_inherit = config_inherit;
                          actual_type = USES_KEYWORD;
                          if (size_arrays->node[size_arrays->next].if_features) {
                            (yyval.nodes).uses.ptr_uses->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).uses.ptr_uses->iffeature);
                            if (!(yyval.nodes).uses.ptr_uses->iffeature) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          if (size_arrays->node[size_arrays->next].refine) {
                            (yyval.nodes).uses.ptr_uses->refine = calloc(size_arrays->node[size_arrays->next].refine, sizeof *(yyval.nodes).uses.ptr_uses->refine);
                            if (!(yyval.nodes).uses.ptr_uses->refine) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          if (size_arrays->node[size_arrays->next].augment) {
                            (yyval.nodes).uses.ptr_uses->augment = calloc(size_arrays->node[size_arrays->next].augment, sizeof *(yyval.nodes).uses.ptr_uses->augment);
                            if (!(yyval.nodes).uses.ptr_uses->augment) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                          if (store_flags((struct lys_node *)(yyval.nodes).uses.ptr_uses, size_arrays->node[size_arrays->next].flags, 0)) {
                              YYABORT;
                          }
                          size_arrays->next++;
                        } else {
                          (yyval.nodes).index = size_arrays->size;
                          if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                            LOGMEM;
                            YYABORT;
                          }
                        }
                      }

    break;

  case 395:

    { actual = (yyvsp[-1].nodes).uses.ptr_uses; actual_type = USES_KEYWORD; }

    break;

  case 397:

    { if (read_all) {
                                       if (yang_read_if_feature(trg, (yyvsp[-1].nodes).uses.ptr_uses, s, unres, USES_KEYWORD)) {YYABORT;}
                                       s=NULL;
                                     } else {
                                       size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                     }
                                   }

    break;

  case 398:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "uses", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 399:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).uses.ptr_uses, s, "uses")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 400:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).uses.ptr_uses, s, "uses")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 401:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).uses.ptr_uses;
                                   actual_type = USES_KEYWORD;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].refine++;
                                 }
                               }

    break;

  case 403:

    { if (read_all) {
                                         actual = (yyvsp[-1].nodes).uses.ptr_uses;
                                         actual_type = USES_KEYWORD;
                                         data_node = actual;
                                         if (data_node->parent && (data_node->parent->nodetype == LYS_GROUPING)) {
                                           data_node = NULL;
                                         }
                                         config_inherit = (yyvsp[-1].nodes).uses.config_inherit;
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].augment++;
                                       }
                                     }

    break;

  case 405:

    { if (read_all) {
                                                   if (!(actual = yang_read_refine(trg, actual, s))) {
                                                     YYABORT;
                                                   }
                                                   s = NULL;
                                                 }
                                               }

    break;

  case 411:

    { if (read_all) {
                                  (yyval.nodes).refine = actual;
                                  actual_type = REFINE_KEYWORD;
                                  if (size_arrays->node[size_arrays->next].must) {
                                    (yyval.nodes).refine->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).refine->must);
                                    if (!(yyval.nodes).refine->must) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                    (yyval.nodes).refine->target_type = LYS_LEAF | LYS_LIST | LYS_LEAFLIST | LYS_CONTAINER | LYS_ANYXML;
                                  }
                                  if (size_arrays->node[size_arrays->next].dflt) {
                                    (yyval.nodes).refine->dflt = calloc(size_arrays->node[size_arrays->next].dflt, sizeof *(yyval.nodes).refine->dflt);
                                    if (!(yyval.nodes).refine->dflt) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                    if (size_arrays->node[size_arrays->next].dflt > 1) {
                                      if (trg->version < 2) {
                                        LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "default", "refine");
                                        YYABORT;
                                      }
                                      (yyval.nodes).refine->target_type = LYS_LEAFLIST;
                                    } else {
                                      if ((yyval.nodes).refine->target_type) {
                                        if (trg->version < 2) {
                                          (yyval.nodes).refine->target_type &= (LYS_LEAF | LYS_CHOICE);
                                        } else {
                                          /* YANG 1.1 */
                                          (yyval.nodes).refine->target_type &= (LYS_LEAF | LYS_LEAFLIST | LYS_CHOICE);
                                        }
                                      } else {
                                        if (trg->version < 2) {
                                          (yyval.nodes).refine->target_type = LYS_LEAF | LYS_CHOICE;
                                        } else {
                                          /* YANG 1.1 */
                                          (yyval.nodes).refine->target_type = LYS_LEAF | LYS_LEAFLIST | LYS_CHOICE;
                                        }
                                      }
                                    }
                                  }
                                  size_arrays->next++;
                                } else {
                                  (yyval.nodes).index = size_arrays->size;
                                  if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                    LOGMEM;
                                    YYABORT;
                                  }
                                }
                              }

    break;

  case 412:

    { if (read_all) {
                                         actual = (yyvsp[-2].nodes).refine;
                                         actual_type = REFINE_KEYWORD;
                                       } else {
                                         size_arrays->node[(yyvsp[-2].nodes).index].must++;
                                       }
                                     }

    break;

  case 413:

    { if (read_all) {
                                             if ((yyvsp[-1].nodes).refine->target_type) {
                                               if ((yyvsp[-1].nodes).refine->target_type & LYS_CONTAINER) {
                                                 if ((yyvsp[-1].nodes).refine->mod.presence) {
                                                   LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "presence", "refine");
                                                   free(s);
                                                   YYABORT;
                                                 }
                                                 (yyvsp[-1].nodes).refine->target_type = LYS_CONTAINER;
                                                 (yyvsp[-1].nodes).refine->mod.presence = lydict_insert_zc(trg->ctx, s);
                                               } else {
                                                 free(s);
                                                 LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "presence", "refine");
                                                 LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid refine target nodetype for the substatements.");
                                                 YYABORT;
                                               }
                                             } else {
                                               (yyvsp[-1].nodes).refine->target_type = LYS_CONTAINER;
                                               (yyvsp[-1].nodes).refine->mod.presence = lydict_insert_zc(trg->ctx, s);
                                             }
                                             s = NULL;
                                             (yyval.nodes) = (yyvsp[-1].nodes);
                                           }
                                         }

    break;

  case 414:

    { if (read_all) {
                                            int i;

                                            (yyvsp[-1].nodes).refine->dflt[(yyvsp[-1].nodes).refine->dflt_size] = lydict_insert_zc(trg->ctx, s);
                                            /* check for duplicity */
                                            for (i = 0; i < (yyvsp[-1].nodes).refine->dflt_size; ++i) {
                                                if (ly_strequal((yyvsp[-1].nodes).refine->dflt[i], (yyvsp[-1].nodes).refine->dflt[(yyvsp[-1].nodes).refine->dflt_size], 1)) {
                                                    LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, (yyvsp[-1].nodes).refine->dflt[(yyvsp[-1].nodes).refine->dflt_size], "default");
                                                    LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Duplicated default value \"%s\".", (yyvsp[-1].nodes).refine->dflt[(yyvsp[-1].nodes).refine->dflt_size]);
                                                    (yyvsp[-1].nodes).refine->dflt_size++;
                                                    YYABORT;
                                                }
                                            }
                                            (yyvsp[-1].nodes).refine->dflt_size++;
                                            s = NULL;
                                            (yyval.nodes) = (yyvsp[-1].nodes);
                                          } else {
                                            size_arrays->node[(yyvsp[-1].nodes).index].dflt++;
                                          }
                                        }

    break;

  case 415:

    { if (read_all) {
                                           if ((yyvsp[-1].nodes).refine->target_type) {
                                             if ((yyvsp[-1].nodes).refine->target_type & (LYS_LEAF | LYS_CHOICE | LYS_LIST | LYS_CONTAINER | LYS_LEAFLIST)) {
                                               (yyvsp[-1].nodes).refine->target_type &= (LYS_LEAF | LYS_CHOICE | LYS_LIST | LYS_CONTAINER | LYS_LEAFLIST);
                                               if (yang_check_flags((uint16_t*)&(yyvsp[-1].nodes).refine->flags, LYS_CONFIG_MASK, "config", "refine", (yyvsp[0].i), 1)) {
                                                 YYABORT;
                                               }
                                             } else {
                                               LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "config", "refine");
                                               LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid refine target nodetype for the substatements.");
                                               YYABORT;
                                             }
                                           } else {
                                             (yyvsp[-1].nodes).refine->target_type = LYS_LEAF | LYS_CHOICE | LYS_LIST | LYS_CONTAINER | LYS_LEAFLIST;
                                             (yyvsp[-1].nodes).refine->flags |= (yyvsp[0].i);
                                           }
                                           (yyval.nodes) = (yyvsp[-1].nodes);
                                         }
                                       }

    break;

  case 416:

    { if (read_all) {
                                              if ((yyvsp[-1].nodes).refine->target_type) {
                                                if ((yyvsp[-1].nodes).refine->target_type & (LYS_LEAF | LYS_CHOICE | LYS_ANYXML)) {
                                                  (yyvsp[-1].nodes).refine->target_type &= (LYS_LEAF | LYS_CHOICE | LYS_ANYXML);
                                                  if (yang_check_flags((uint16_t*)&(yyvsp[-1].nodes).refine->flags, LYS_MAND_MASK, "mandatory", "refine", (yyvsp[0].i), 1)) {
                                                    YYABORT;
                                                  }
                                                } else {
                                                  LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "mandatory", "refine");
                                                  LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid refine target nodetype for the substatements.");
                                                  YYABORT;
                                                }
                                              } else {
                                                (yyvsp[-1].nodes).refine->target_type = LYS_LEAF | LYS_CHOICE | LYS_ANYXML;
                                                (yyvsp[-1].nodes).refine->flags |= (yyvsp[0].i);
                                              }
                                              (yyval.nodes) = (yyvsp[-1].nodes);
                                            }
                                          }

    break;

  case 417:

    { if (read_all) {
                                                 if ((yyvsp[-1].nodes).refine->target_type) {
                                                   if ((yyvsp[-1].nodes).refine->target_type & (LYS_LIST | LYS_LEAFLIST)) {
                                                     (yyvsp[-1].nodes).refine->target_type &= (LYS_LIST | LYS_LEAFLIST);
                                                     if ((yyvsp[-1].nodes).refine->flags & LYS_RFN_MINSET) {
                                                       LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "min-elements", "refine");
                                                       YYABORT;
                                                     }
                                                     (yyvsp[-1].nodes).refine->flags |= LYS_RFN_MINSET;
                                                     (yyvsp[-1].nodes).refine->mod.list.min = (yyvsp[0].uint);
                                                   } else {
                                                     LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "min-elements", "refine");
                                                     LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid refine target nodetype for the substatements.");
                                                     YYABORT;
                                                   }
                                                 } else {
                                                   (yyvsp[-1].nodes).refine->target_type = LYS_LIST | LYS_LEAFLIST;
                                                   (yyvsp[-1].nodes).refine->flags |= LYS_RFN_MINSET;
                                                   (yyvsp[-1].nodes).refine->mod.list.min = (yyvsp[0].uint);
                                                 }
                                                 (yyval.nodes) = (yyvsp[-1].nodes);
                                               }
                                             }

    break;

  case 418:

    { if (read_all) {
                                                 if ((yyvsp[-1].nodes).refine->target_type) {
                                                   if ((yyvsp[-1].nodes).refine->target_type & (LYS_LIST | LYS_LEAFLIST)) {
                                                     (yyvsp[-1].nodes).refine->target_type &= (LYS_LIST | LYS_LEAFLIST);
                                                     if ((yyvsp[-1].nodes).refine->flags & LYS_RFN_MAXSET) {
                                                       LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "max-elements", "refine");
                                                       YYABORT;
                                                     }
                                                     (yyvsp[-1].nodes).refine->flags |= LYS_RFN_MAXSET;
                                                     (yyvsp[-1].nodes).refine->mod.list.max = (yyvsp[0].uint);
                                                   } else {
                                                     LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "max-elements", "refine");
                                                     LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Invalid refine target nodetype for the substatements.");
                                                     YYABORT;
                                                   }
                                                 } else {
                                                   (yyvsp[-1].nodes).refine->target_type = LYS_LIST | LYS_LEAFLIST;
                                                   (yyvsp[-1].nodes).refine->flags |= LYS_RFN_MAXSET;
                                                   (yyvsp[-1].nodes).refine->mod.list.max = (yyvsp[0].uint);
                                                 }
                                                 (yyval.nodes) = (yyvsp[-1].nodes);
                                               }
                                             }

    break;

  case 419:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).refine, s, "refine")) {
                                                YYABORT;
                                              }
                                              s = NULL;
                                            }

    break;

  case 420:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).refine, s, "refine")) {
                                              YYABORT;
                                            }
                                            s = NULL;
                                          }

    break;

  case 421:

    { if (read_all) {
                                                                if (!(actual = yang_read_augment(trg, actual, s))) {
                                                                  YYABORT;
                                                                }
                                                                data_node = actual;
                                                                s = NULL;
                                                              }
                                                            }

    break;

  case 422:

    { if (read_all && !((yyvsp[0].nodes).node.flag & LYS_DATADEF)){
                                            LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "data-def or case", "uses/augment");
                                            YYABORT;
                                          }
                                        }

    break;

  case 426:

    { if (read_all) {
                                                      if (!(actual = yang_read_augment(trg, NULL, s))) {
                                                        YYABORT;
                                                      }
                                                      data_node = actual;
                                                      s = NULL;
                                                    }
                                                  }

    break;

  case 427:

    { if (read_all) {
                                       if (!((yyvsp[0].nodes).node.flag & LYS_DATADEF)){
                                         LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "data-def or case", "augment");
                                         YYABORT;
                                       }
                                       if (unres_schema_add_node(trg, unres, actual, UNRES_AUGMENT, NULL) == -1) {
                                         YYABORT;
                                       }
                                     }
                                   }

    break;

  case 429:

    { if (read_all) {
                             (yyval.nodes).node.ptr_augment = actual;
                             (yyval.nodes).node.flag = 0;
                             actual_type = AUGMENT_KEYWORD;
                             if (size_arrays->node[size_arrays->next].if_features) {
                               (yyval.nodes).node.ptr_augment->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).node.ptr_augment->iffeature);
                               if (!(yyval.nodes).node.ptr_augment->iffeature) {
                                 LOGMEM;
                                 YYABORT;
                               }
                             }
                             config_inherit = DISABLE_INHERIT;
                             size_arrays->next++;
                           } else {
                             (yyval.nodes).index = size_arrays->size;
                             if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                               LOGMEM;
                               YYABORT;
                             }
                           }
                         }

    break;

  case 430:

    { actual = (yyvsp[-1].nodes).node.ptr_augment; actual_type = AUGMENT_KEYWORD; }

    break;

  case 432:

    { if (read_all) {
                                          if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_augment, s, unres, AUGMENT_KEYWORD)) {YYABORT;}
                                          s=NULL;
                                        } else {
                                          size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                        }
                                      }

    break;

  case 433:

    { if (read_all) {
                                      /* hack - flags is bit field, so its address is taken as a member after
                                       * 3 const char pointers in the lys_node_augment structure */
                                      if (yang_check_flags((uint16_t*)((const char **)(yyvsp[-1].nodes).node.ptr_augment + 3),
                                                           LYS_STATUS_MASK, "status", "augment", (yyvsp[0].i), 0)) {
                                        YYABORT;
                                      }
                                    }
                                  }

    break;

  case 434:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_augment, s, "augment")) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }

    break;

  case 435:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_augment, s, "augment")) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     }

    break;

  case 436:

    { if (read_all) {
                                        actual = (yyvsp[-1].nodes).node.ptr_augment;
                                        actual_type = AUGMENT_KEYWORD;
                                        (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                        data_node = actual;
                                      }
                                    }

    break;

  case 437:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 438:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).node.ptr_augment;
                                      actual_type = AUGMENT_KEYWORD;
                                      (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                      data_node = actual;
                                    }
                                  }

    break;

  case 439:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 440:

    { if (read_all) {
                                            actual = (yyvsp[-1].nodes).node.ptr_augment;
                                            actual_type = AUGMENT_KEYWORD;
                                            (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                            data_node = actual;
                                            if (trg->version < 2) {
                                              LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "notification");
                                              YYABORT;
                                            }
                                          }
                                        }

    break;

  case 441:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 442:

    { if (read_all) {
                                    actual = (yyvsp[-1].nodes).node.ptr_augment;
                                    actual_type = AUGMENT_KEYWORD;
                                    (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                    data_node = actual;
                                  }
                                }

    break;

  case 443:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 446:

    { if (read_all) {
                                                 if (!(actual = yang_read_action(trg, actual, s))) {
                                                   YYABORT;
                                                 }
                                                 data_node = actual;
                                                 s = NULL;
                                               }
                                               config_inherit = DISABLE_INHERIT;
                                             }

    break;

  case 447:

    { config_inherit = ENABLE_INHERIT; }

    break;

  case 448:

    { if (read_all) {
                                                 if (!(actual = yang_read_node(trg, NULL, s, LYS_RPC, sizeof(struct lys_node_rpc_action)))) {
                                                   YYABORT;
                                                 }
                                                 data_node = actual;
                                                 s = NULL;
                                               }
                                               config_inherit = DISABLE_INHERIT;
                                             }

    break;

  case 449:

    { config_inherit = ENABLE_INHERIT; }

    break;

  case 452:

    { if (read_all) {
                         (yyval.nodes).node.ptr_rpc = actual;
                         (yyval.nodes).node.flag = 0;
                         actual_type = RPC_KEYWORD;
                         if (size_arrays->node[size_arrays->next].if_features) {
                           (yyval.nodes).node.ptr_rpc->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).node.ptr_rpc->iffeature);
                           if (!(yyval.nodes).node.ptr_rpc->iffeature) {
                             LOGMEM;
                             YYABORT;
                           }
                         }
                         if (size_arrays->node[size_arrays->next].tpdf) {
                           (yyval.nodes).node.ptr_rpc->tpdf = calloc(size_arrays->node[size_arrays->next].tpdf, sizeof *(yyval.nodes).node.ptr_rpc->tpdf);
                           if (!(yyval.nodes).node.ptr_rpc->tpdf) {
                             LOGMEM;
                             YYABORT;
                           }
                         }
                         if (store_flags((struct lys_node *)(yyval.nodes).node.ptr_rpc, size_arrays->node[size_arrays->next].flags, 0)) {
                             YYABORT;
                         }
                         size_arrays->next++;
                       } else {
                         (yyval.nodes).index = size_arrays->size;
                         if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                           LOGMEM;
                           YYABORT;
                         }
                       }
                     }

    break;

  case 453:

    { if (read_all) {
                                      if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_rpc, s, unres, RPC_KEYWORD)) {YYABORT;}
                                      s=NULL;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                    }
                                  }

    break;

  case 454:

    { if (!read_all) {
                                       if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "rpc", (yyvsp[0].i), 0)) {
                                         YYABORT;
                                       }
                                     }
                                   }

    break;

  case 455:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_rpc, s, "rpc")) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }

    break;

  case 456:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_rpc, s, "rpc")) {
                                     YYABORT;
                                   }
                                   s = NULL;
                                 }

    break;

  case 457:

    { if (read_all) {
                                           actual = (yyvsp[-1].nodes).node.ptr_rpc;
                                           actual_type = RPC_KEYWORD;
                                         } else {
                                           size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                         }
                                       }

    break;

  case 459:

    { actual = (yyvsp[-1].nodes).node.ptr_rpc;
                                  actual_type = RPC_KEYWORD;
                                  data_node = actual;
                                }

    break;

  case 461:

    { if (read_all) {
                                 if ((yyvsp[-1].nodes).node.flag & LYS_RPC_INPUT) {
                                   LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_rpc, "input", "rpc");
                                   YYABORT;
                                 }
                                 (yyvsp[-1].nodes).node.flag |= LYS_RPC_INPUT;
                                 actual = (yyvsp[-1].nodes).node.ptr_rpc;
                                 actual_type = RPC_KEYWORD;
                                 data_node = actual;
                               }
                             }

    break;

  case 462:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 463:

    { if (read_all) {
                                  if ((yyvsp[-1].nodes).node.flag & LYS_RPC_OUTPUT) {
                                    LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[-1].nodes).node.ptr_rpc, "output", "rpc");
                                    YYABORT;
                                  }
                                  (yyvsp[-1].nodes).node.flag |= LYS_RPC_OUTPUT;
                                  actual = (yyvsp[-1].nodes).node.ptr_rpc;
                                  actual_type = RPC_KEYWORD;
                                  data_node = actual;
                                }
                              }

    break;

  case 464:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 465:

    { if (read_all) {
                                     s = strdup("input");
                                     if (!s) {
                                       LOGMEM;
                                       YYABORT;
                                     }
                                     if (!(actual = yang_read_node(trg, actual, s, LYS_INPUT, sizeof(struct lys_node_inout)))) {
                                      YYABORT;
                                     }
                                     data_node = actual;
                                     s = NULL;
                                   }
                                 }

    break;

  case 466:

    { if (read_all && !((yyvsp[0].nodes).node.flag & LYS_DATADEF)) {
                                          LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, "data-def", "input");
                                          YYABORT;
                                        }
                                      }

    break;

  case 468:

    { if (read_all) {
                                  (yyval.nodes).node.ptr_inout = actual;
                                  (yyval.nodes).node.flag = 0;
                                  actual_type = INPUT_KEYWORD;
                                  if (trg->version < 2 && size_arrays->node[size_arrays->next].must) {
                                    LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "must");
                                    YYABORT;
                                  }
                                  if (size_arrays->node[size_arrays->next].tpdf) {
                                    (yyval.nodes).node.ptr_inout->tpdf = calloc(size_arrays->node[size_arrays->next].tpdf, sizeof *(yyval.nodes).node.ptr_inout->tpdf);
                                    if (!(yyval.nodes).node.ptr_inout->tpdf) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                  }
                                  if (size_arrays->node[size_arrays->next].must) {
                                    (yyval.nodes).node.ptr_inout->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).node.ptr_inout->must);
                                    if (!(yyval.nodes).node.ptr_inout->must) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                  }
                                  size_arrays->next++;
                                } else {
                                  (yyval.nodes).index = size_arrays->size;
                                  if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                    LOGMEM;
                                    YYABORT;
                                  }
                                }
                              }

    break;

  case 469:

    { if (read_all) {
                                         actual = (yyvsp[-1].nodes).node.ptr_inout;
                                         actual_type = INPUT_KEYWORD;
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                       }
                                     }

    break;

  case 471:

    { if (read_all) {
                                                    actual = (yyvsp[-1].nodes).node.ptr_inout;
                                                    actual_type = INPUT_KEYWORD;
                                                  } else {
                                                    size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                                  }
                                                }

    break;

  case 473:

    { actual = (yyvsp[-1].nodes).node.ptr_inout;
                                           actual_type = INPUT_KEYWORD;
                                           data_node = actual;
                                         }

    break;

  case 475:

    { if (read_all) {
                                             actual = (yyvsp[-1].nodes).node.ptr_inout;
                                             actual_type = INPUT_KEYWORD;
                                             (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                             data_node = actual;
                                           }
                                         }

    break;

  case 476:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 477:

    { if (read_all) {
                                       s = strdup("output");
                                       if (!s) {
                                         LOGMEM;
                                         YYABORT;
                                       }
                                       if (!(actual = yang_read_node(trg, actual, s, LYS_OUTPUT, sizeof(struct lys_node_inout)))) {
                                        YYABORT;
                                       }
                                       data_node = actual;
                                       s = NULL;
                                     }
                                   }

    break;

  case 478:

    { if (read_all && !((yyvsp[0].nodes).node.flag & LYS_DATADEF)) {
                                           LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, "data-def", "output");
                                           YYABORT;
                                         }
                                       }

    break;

  case 480:

    { if (read_all) {
                                                                   if (!(actual = yang_read_node(trg, actual, s, LYS_NOTIF, sizeof(struct lys_node_notif)))) {
                                                                    YYABORT;
                                                                   }
                                                                   data_node = actual;
                                                                 }
                                                                 config_inherit = DISABLE_INHERIT;
                                                               }

    break;

  case 481:

    { config_inherit = ENABLE_INHERIT; }

    break;

  case 482:

    { if (read_all) {
                          size_arrays->next++;
                        }
                      }

    break;

  case 484:

    { if (read_all) {
                                  (yyval.nodes).notif = actual;
                                  actual_type = NOTIFICATION_KEYWORD;
                                  if (size_arrays->node[size_arrays->next].if_features) {
                                    (yyval.nodes).notif->iffeature = calloc(size_arrays->node[size_arrays->next].if_features, sizeof *(yyval.nodes).notif->iffeature);
                                    if (!(yyval.nodes).notif->iffeature) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                  }
                                  if (size_arrays->node[size_arrays->next].tpdf) {
                                    (yyval.nodes).notif->tpdf = calloc(size_arrays->node[size_arrays->next].tpdf, sizeof *(yyval.nodes).notif->tpdf);
                                    if (!(yyval.nodes).notif->tpdf) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                  }
                                  if (trg->version < 2 && size_arrays->node[size_arrays->next].must) {
                                    LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "must");
                                    YYABORT;
                                  }
                                  if (size_arrays->node[size_arrays->next].must) {
                                    (yyval.nodes).notif->must = calloc(size_arrays->node[size_arrays->next].must, sizeof *(yyval.nodes).notif->must);
                                    if (!(yyval.nodes).notif->must) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                  }
                                  if (store_flags((struct lys_node *)(yyval.nodes).notif, size_arrays->node[size_arrays->next].flags, config_inherit)) {
                                      YYABORT;
                                  }
                                  size_arrays->next++;
                                } else {
                                  (yyval.nodes).index = size_arrays->size;
                                  if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                    LOGMEM;
                                    YYABORT;
                                  }
                                }
                              }

    break;

  case 485:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).notif;
                                      actual_type = NOTIFICATION_KEYWORD;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                    }
                                  }

    break;

  case 487:

    { if (read_all) {
                                               if (yang_read_if_feature(trg, (yyvsp[-1].nodes).notif, s, unres, NOTIFICATION_KEYWORD)) {YYABORT;}
                                               s=NULL;
                                             } else {
                                               size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                             }
                                           }

    break;

  case 488:

    { if (!read_all) {
                                                if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "notification", (yyvsp[0].i), 0)) {
                                                  YYABORT;
                                                }
                                              }
                                            }

    break;

  case 489:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).notif, s, "notification")) {
                                                YYABORT;
                                              }
                                              s = NULL;
                                            }

    break;

  case 490:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).notif, s, "notification")) {
                                              YYABORT;
                                            }
                                            s = NULL;
                                          }

    break;

  case 491:

    { if (read_all) {
                                                    actual = (yyvsp[-1].nodes).notif;
                                                    actual_type = NOTIFICATION_KEYWORD;
                                                  } else {
                                                    size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                                  }
                                                }

    break;

  case 493:

    { actual = (yyvsp[-1].nodes).notif;
                                           actual_type = NOTIFICATION_KEYWORD;
                                           data_node = actual;
                                         }

    break;

  case 495:

    { actual = (yyvsp[-1].nodes).notif;
                                           actual_type = NOTIFICATION_KEYWORD;
                                           data_node = actual;
                                         }

    break;

  case 497:

    { if (read_all) {
                                                            if (!(actual = yang_read_deviation(trg, s))) {
                                                              YYABORT;
                                                            }
                                                            s = NULL;
                                                            trg->deviation_size++;
                                                            }
                                                        }

    break;

  case 498:

    { if (read_all) {
                                            if (actual_type == DEVIATION_KEYWORD) {
                                              LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "deviate", "deviation");
                                              YYABORT;
                                            }
                                            if (yang_check_deviation(trg, (yyvsp[0].nodes).deviation->dflt_check, unres)) {
                                              YYABORT;
                                            }
                                            ly_set_free((yyvsp[0].nodes).deviation->dflt_check);
                                            free((yyvsp[0].nodes).deviation);
                                          }
                                        }

    break;

  case 500:

    { if (read_all) {
                               (yyval.nodes).deviation = actual;
                               actual_type = DEVIATION_KEYWORD;
                               if (size_arrays->node[size_arrays->next].deviate) {
                                 (yyval.nodes).deviation->deviation->deviate = calloc(size_arrays->node[size_arrays->next].deviate, sizeof *(yyval.nodes).deviation->deviation->deviate);
                                 if (!(yyval.nodes).deviation->deviation->deviate) {
                                   LOGMEM;
                                   ly_set_free((yyval.nodes).deviation->dflt_check);
                                   YYABORT;
                                 }
                               }
                               size_arrays->next++;
                             } else {
                               (yyval.nodes).index = size_arrays->size;
                               if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                 LOGMEM;
                                 YYABORT;
                               }
                             }
                           }

    break;

  case 501:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).deviation->deviation, s, "deviation")) {
                                             ly_set_free((yyvsp[-1].nodes).deviation->dflt_check);
                                             free((yyvsp[-1].nodes).deviation);
                                             YYABORT;
                                           }
                                           s = NULL;
                                           (yyval.nodes) = (yyvsp[-1].nodes);
                                         }

    break;

  case 502:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).deviation->deviation, s, "deviation")) {
                                           ly_set_free((yyvsp[-1].nodes).deviation->dflt_check);
                                           free((yyvsp[-1].nodes).deviation);
                                           YYABORT;
                                         }
                                         s = NULL;
                                         (yyval.nodes) = (yyvsp[-1].nodes);
                                       }

    break;

  case 503:

    { if (read_all) {
                                                                  actual = (yyvsp[-3].nodes).deviation;
                                                                  actual_type = DEVIATE_KEYWORD;
                                                                  (yyval.nodes) = (yyvsp[-3].nodes);
                                                                } else {
                                                                  /* count of deviate statemenet */
                                                                  size_arrays->node[(yyvsp[-3].nodes).index].deviate++;
                                                                }
                                                              }

    break;

  case 506:

    { if (read_all && yang_read_deviate_unsupported(actual)) {
                       YYABORT;
                     }
                   }

    break;

  case 512:

    { if (read_all && yang_read_deviate(actual, LY_DEVIATE_ADD)) {
                                         YYABORT;
                                       }
                                     }

    break;

  case 516:

    { if (read_all) {
                                 (yyval.nodes).deviation = actual;
                                 actual_type = ADD_KEYWORD;
                                 if (size_arrays->node[size_arrays->next].must) {
                                    if (yang_read_deviate_must(actual, size_arrays->node[size_arrays->next].must)) {
                                      YYABORT;
                                    }
                                  }
                                  if (size_arrays->node[size_arrays->next].unique) {
                                    if (yang_read_deviate_unique(actual, size_arrays->node[size_arrays->next].unique)) {
                                      YYABORT;
                                    }
                                  }
                                  if (size_arrays->node[size_arrays->next].dflt) {
                                    if (yang_read_deviate_default(trg, actual, size_arrays->node[size_arrays->next].dflt)) {
                                      YYABORT;
                                    }
                                  }
                                  size_arrays->next++;
                               } else {
                                 (yyval.nodes).index = size_arrays->size;
                                 if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                             }

    break;

  case 517:

    { if (read_all) {
                                         if (yang_read_deviate_units(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                         (yyval.nodes) = (yyvsp[-1].nodes);
                                       }
                                     }

    break;

  case 518:

    { if (read_all) {
                                        actual = (yyvsp[-2].nodes).deviation;
                                        actual_type = ADD_KEYWORD;
                                        (yyval.nodes) = (yyvsp[-2].nodes);
                                      } else {
                                        size_arrays->node[(yyvsp[-2].nodes).index].must++;
                                      }
                                    }

    break;

  case 519:

    { if (read_all) {
                                          struct lys_node_list *list;

                                          list = (struct lys_node_list *)(yyvsp[-1].nodes).deviation->target;
                                          if (yang_fill_unique(trg, list, &list->unique[list->unique_size], s, NULL)) {
                                            list->unique_size++;
                                            YYABORT;
                                          }
                                          list->unique_size++;
                                          free(s);
                                          s = NULL;
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                        } else {
                                          size_arrays->node[(yyvsp[-1].nodes).index].unique++;
                                        }
                                      }

    break;

  case 520:

    { if (read_all) {
                                           if (yang_fill_deviate_default(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                           (yyval.nodes) = (yyvsp[-1].nodes);
                                         } else {
                                           size_arrays->node[(yyvsp[-1].nodes).index].dflt++;
                                         }
                                       }

    break;

  case 521:

    { if (read_all) {
                                          if (yang_read_deviate_config((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                            YYABORT;
                                          }
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                        }
                                      }

    break;

  case 522:

    { if (read_all) {
                                             if (yang_read_deviate_mandatory((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                               YYABORT;
                                             }
                                             (yyval.nodes) = (yyvsp[-1].nodes);
                                           }
                                         }

    break;

  case 523:

    { if (read_all) {
                                                if ((yyvsp[-1].nodes).deviation->deviate->min_set) {
                                                  LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "min-elements", "deviation");
                                                  YYABORT;
                                                }
                                                if (yang_read_deviate_minmax((yyvsp[-1].nodes).deviation, (yyvsp[0].uint), 0)) {
                                                  YYABORT;
                                                }
                                                (yyval.nodes) =  (yyvsp[-1].nodes);
                                              }
                                            }

    break;

  case 524:

    { if (read_all) {
                                                if ((yyvsp[-1].nodes).deviation->deviate->max_set) {
                                                  LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "max-elements", "deviation");
                                                  YYABORT;
                                                }
                                                if (yang_read_deviate_minmax((yyvsp[-1].nodes).deviation, (yyvsp[0].uint), 1)) {
                                                  YYABORT;
                                                }
                                                (yyval.nodes) =  (yyvsp[-1].nodes);
                                              }
                                            }

    break;

  case 525:

    { if (read_all && yang_read_deviate(actual, LY_DEVIATE_DEL)) {
                                               YYABORT;
                                             }
                                           }

    break;

  case 528:

    { if (read_all) {
              struct lys_node_leaflist *llist;
              int i,j;

              if ((yyvsp[-1].nodes).deviation->deviate->dflt_size && (yyvsp[-1].nodes).deviation->target->nodetype == LYS_LEAFLIST) {
                /* consolidate the final list in the target after removing items from it */
                llist = (struct lys_node_leaflist *)(yyvsp[-1].nodes).deviation->target;
                for (i = j = 0; j < llist->dflt_size; j++) {
                  llist->dflt[i] = llist->dflt[j];
                  if (llist->dflt[i]) {
                    i++;
                  }
                }
                llist->dflt_size = i + 1;
              }
            }
          }

    break;

  case 529:

    { if (read_all) {
                                    (yyval.nodes).deviation = actual;
                                    actual_type = DELETE_KEYWORD;
                                    if (size_arrays->node[size_arrays->next].must) {
                                      if (yang_read_deviate_must(actual, size_arrays->node[size_arrays->next].must)) {
                                        YYABORT;
                                      }
                                    }
                                    if (size_arrays->node[size_arrays->next].unique) {
                                      if (yang_read_deviate_unique(actual, size_arrays->node[size_arrays->next].unique)) {
                                        YYABORT;
                                      }
                                    }
                                    if (size_arrays->node[size_arrays->next].dflt) {
                                      if (yang_read_deviate_default(trg, actual, size_arrays->node[size_arrays->next].dflt)) {
                                        YYABORT;
                                      }
                                    }
                                    size_arrays->next++;
                                  } else {
                                    (yyval.nodes).index = size_arrays->size;
                                    if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                      LOGMEM;
                                      YYABORT;
                                    }
                                  }
                                }

    break;

  case 530:

    { if (read_all) {
                                            if (yang_read_deviate_units(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                              YYABORT;
                                            }
                                            s = NULL;
                                            (yyval.nodes) = (yyvsp[-1].nodes);
                                          }
                                        }

    break;

  case 531:

    { if (read_all) {
                                           if (yang_check_deviate_must(trg->ctx, (yyvsp[-2].nodes).deviation)) {
                                             YYABORT;
                                           }
                                           actual = (yyvsp[-2].nodes).deviation;
                                           actual_type = DELETE_KEYWORD;
                                           (yyval.nodes) = (yyvsp[-2].nodes);
                                         } else {
                                           size_arrays->node[(yyvsp[-2].nodes).index].must++;
                                         }
                                       }

    break;

  case 532:

    { if (read_all) {
                                             if (yang_check_deviate_unique(trg, (yyvsp[-1].nodes).deviation, s)) {
                                               YYABORT;
                                             }
                                             s = NULL;
                                             (yyval.nodes) = (yyvsp[-1].nodes);
                                           } else {
                                             size_arrays->node[(yyvsp[-1].nodes).index].unique++;
                                           }
                                         }

    break;

  case 533:

    { if (read_all) {
                                              if (yang_fill_deviate_default(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                                YYABORT;
                                              }
                                              s = NULL;
                                              (yyval.nodes) = (yyvsp[-1].nodes);
                                            } else {
                                              size_arrays->node[(yyvsp[-1].nodes).index].dflt++;
                                            }
                                          }

    break;

  case 534:

    { if (read_all && yang_read_deviate(actual, LY_DEVIATE_RPL)) {
                                                 YYABORT;
                                               }
                                             }

    break;

  case 536:

    { if (read_all) {
                                     (yyval.nodes).deviation = actual;
                                   }
                                 }

    break;

  case 538:

    { if (read_all && (yyvsp[-1].nodes).deviation->deviate->type) {
             if (unres_schema_add_node(trg, unres, (yyvsp[-1].nodes).deviation->deviate->type, UNRES_TYPE_DER, (yyvsp[-1].nodes).deviation->target) == -1) {
               lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-1].nodes).deviation->deviate->type->der)->name);
               free((yyvsp[-1].nodes).deviation->deviate->type->der);
               (yyvsp[-1].nodes).deviation->deviate->type->der = NULL;
               YYABORT;
             }
           }
         }

    break;

  case 539:

    { if (read_all) {
                                         (yyval.nodes).deviation = actual;
                                         actual_type = REPLACE_KEYWORD;
                                         if (size_arrays->node[size_arrays->next].dflt) {
                                           if (yang_read_deviate_default(trg, actual, size_arrays->node[size_arrays->next].dflt)) {
                                             YYABORT;
                                           }
                                        }
                                        size_arrays->next++;
                                      } else {
                                        (yyval.nodes).index = size_arrays->size;
                                        if (yang_add_elem(&size_arrays->node, &size_arrays->size)) {
                                          LOGMEM;
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 540:

    { if (read_all) {
                                                    ly_set_add((yyvsp[-2].nodes).deviation->dflt_check, (yyvsp[-2].nodes).deviation->target, 0);
                                                  }
                                                }

    break;

  case 541:

    { if (read_all) {
                                             if (yang_read_deviate_units(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                               YYABORT;
                                             }
                                             s = NULL;
                                             (yyval.nodes) = (yyvsp[-1].nodes);
                                           }
                                         }

    break;

  case 542:

    { if (read_all) {
                                               if (yang_fill_deviate_default(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                                 YYABORT;
                                               }
                                               s = NULL;
                                               (yyval.nodes) = (yyvsp[-1].nodes);
                                             } else {
                                               size_arrays->node[(yyvsp[-1].nodes).index].dflt++;
                                             }
                                           }

    break;

  case 543:

    { if (read_all) {
                                              if (yang_read_deviate_config((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                                YYABORT;
                                              }
                                              (yyval.nodes) = (yyvsp[-1].nodes);
                                            }
                                          }

    break;

  case 544:

    { if (read_all) {
                                                 if (yang_read_deviate_mandatory((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                                   YYABORT;
                                                 }
                                                 (yyval.nodes) = (yyvsp[-1].nodes);
                                               }
                                             }

    break;

  case 545:

    { if (read_all) {
                                                    if ((yyvsp[-1].nodes).deviation->deviate->min_set) {
                                                      LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "min-elements", "deviate");
                                                      YYABORT;
                                                    }
                                                    if (yang_read_deviate_minmax((yyvsp[-1].nodes).deviation, (yyvsp[0].uint), 0)) {
                                                      YYABORT;
                                                    }
                                                    (yyval.nodes) =  (yyvsp[-1].nodes);
                                                  }
                                                }

    break;

  case 546:

    { if (read_all) {
                                                    if ((yyvsp[-1].nodes).deviation->deviate->max_set) {
                                                      LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, NULL, "max-elements", "deviate");
                                                      YYABORT;
                                                    }
                                                    if (yang_read_deviate_minmax((yyvsp[-1].nodes).deviation, (yyvsp[0].uint), 1)) {
                                                      YYABORT;
                                                    }
                                                    (yyval.nodes) =  (yyvsp[-1].nodes);
                                                  }
                                                }

    break;

  case 547:

    { if (read_all && !(actual=yang_read_when(trg, actual, actual_type, s))) {YYABORT;} s=NULL; actual_type=WHEN_KEYWORD;}

    break;

  case 552:

    { if (read_all && yang_read_description(trg, actual, s, "when")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 553:

    { if (read_all && yang_read_reference(trg, actual, s, "when")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 554:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 555:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 556:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 557:

    { (yyval.i) = (yyvsp[-2].i); }

    break;

  case 558:

    { (yyval.i) = LYS_CONFIG_W | LYS_CONFIG_SET; }

    break;

  case 559:

    { (yyval.i) = LYS_CONFIG_R | LYS_CONFIG_SET; }

    break;

  case 560:

    { if (read_all) {
                  if (!strcmp(s, "true")) {
                    (yyval.i) = LYS_CONFIG_W | LYS_CONFIG_SET;
                  } else if (!strcmp(s, "false")) {
                    (yyval.i) = LYS_CONFIG_R | LYS_CONFIG_SET;
                  } else {
                    LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "config");
                    free(s);
                    YYABORT;
                  }
                  free(s);
                  s = NULL;
                }
              }

    break;

  case 561:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 562:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 563:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 564:

    { (yyval.i) = (yyvsp[-2].i); }

    break;

  case 565:

    { (yyval.i) = LYS_MAND_TRUE; }

    break;

  case 566:

    { (yyval.i) = LYS_MAND_FALSE; }

    break;

  case 567:

    { if (read_all) {
                  if (!strcmp(s, "true")) {
                    (yyval.i) = LYS_MAND_TRUE;
                  } else if (!strcmp(s, "false")) {
                    (yyval.i) = LYS_MAND_FALSE;
                  } else {
                    LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "mandatory");
                    free(s);
                    YYABORT;
                  }
                  free(s);
                  s = NULL;
                }
              }

    break;

  case 569:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 570:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 571:

    { if (read_all) {
                  if (strlen(s) == 1 && s[0] == '0') {
                    (yyval.uint) = 0;
                  } else {
                    /* convert it to uint32_t */
                    uint64_t val;
                    char *endptr;

                    val = strtoul(s, &endptr, 10);
                    if (val > UINT32_MAX || *endptr) {
                        LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "min-elements");
                        free(s);
                        YYABORT;
                    }
                    (yyval.uint) = (uint32_t) val;
                  }
                  free(s);
                  s = NULL;
                }
              }

    break;

  case 572:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 573:

    { (yyval.uint) = 0; }

    break;

  case 574:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 575:

    { if (read_all) {
                  if (!strcmp(s, "unbounded")) {
                    (yyval.uint) = 0;
                  } else {
                    /* convert it to uint32_t */
                    uint64_t val;
                    char *endptr;

                    val = strtoul(s, &endptr, 10);
                    if (val > UINT32_MAX || *endptr) {
                        LOGVAL(LYE_INARG, LY_VLOG_NONE, NULL, s, "max-elements");
                        free(s);
                        YYABORT;
                    }
                    (yyval.uint) = (uint32_t) val;
                  }
                  free(s);
                  s = NULL;
                }
              }

    break;

  case 576:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 577:

    { (yyval.i) = LYS_USERORDERED; }

    break;

  case 578:

    { (yyval.i) = LYS_SYSTEMORDERED; }

    break;

  case 579:

    { if (!strcmp(s, "user")) {
                  (yyval.i) = LYS_USERORDERED;
                } else if (!strcmp(s, "system")) {
                  (yyval.i) = LYS_SYSTEMORDERED;
                } else {
                  free(s);
                  YYABORT;
                }
                free(s);
                s=NULL;
              }

    break;

  case 580:

    { if (read_all) {
                                       if (!(actual=yang_read_must(trg, actual, s, actual_type))) {YYABORT;}
                                       s=NULL;
                                       actual_type=MUST_KEYWORD;
                                     }
                                   }

    break;

  case 590:

    { if (read_all){
                                 s = strdup(yyget_text(scanner));
                                 if (!s) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                             }

    break;

  case 593:

    { if (read_all) {
                                 s = ly_realloc(s,strlen(s) + yyget_leng(scanner) + 2);
                                 if (!s) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                                 strcat(s," ");
                                 strcat(s, yyget_text(scanner));
                                }
                             }

    break;

  case 596:

    { if (read_all) {
                          (yyval.v) = actual;
                          if (!(actual = yang_read_range(trg, actual, s))) {
                             YYABORT;
                          }
                          actual_type = RANGE_KEYWORD;
                          s = NULL;
                        }
                      }

    break;

  case 597:

    { if (read_all) {
                                                if (s) {
                                                  s = ly_realloc(s,strlen(s) + yyget_leng(scanner) + 2);
                                                  if (!s) {
                                                    LOGMEM;
                                                    YYABORT;
                                                  }
                                                  strcat(s,"/");
                                                  strcat(s, yyget_text(scanner));
                                                } else {
                                                  s = malloc(yyget_leng(scanner) + 2);
                                                  if (!s) {
                                                    LOGMEM;
                                                    YYABORT;
                                                  }
                                                  s[0]='/';
                                                  memcpy(s + 1, yyget_text(scanner), yyget_leng(scanner) + 1);
                                                }
                                              }
                                            }

    break;

  case 601:

    { if (read_all)  {
                                              if (s) {
                                                s = ly_realloc(s,strlen(s) + yyget_leng(scanner) + 1);
                                                if (!s) {
                                                  LOGMEM;
                                                  YYABORT;
                                                }
                                                strcat(s, yyget_text(scanner));
                                              } else {
                                                s = strdup(yyget_text(scanner));
                                                if (!s) {
                                                  LOGMEM;
                                                  YYABORT;
                                                }
                                              }
                                            }
                                          }

    break;

  case 603:

    { tmp_s = yyget_text(scanner); }

    break;

  case 604:

    { if (read_all) {
                                                     s = strdup(tmp_s);
                                                     if (!s) {
                                                       LOGMEM;
                                                       YYABORT;
                                                     }
                                                     s[strlen(s) - 1] = '\0';
                                                   }
                                                 }

    break;

  case 605:

    { tmp_s = yyget_text(scanner); }

    break;

  case 606:

    { if (read_all) {
                                           s = strdup(tmp_s);
                                           if (!s) {
                                             LOGMEM;
                                             YYABORT;
                                           }
                                           s[strlen(s) - 1] = '\0';
                                         }
                                       }

    break;

  case 630:

    { /* convert it to uint32_t */
                                                unsigned long val;

                                                val = strtoul(yyget_text(scanner), NULL, 10);
                                                if (val > UINT32_MAX) {
                                                    LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "Converted number is very long.");
                                                    YYABORT;
                                                }
                                                (yyval.uint) = (uint32_t) val;
                                             }

    break;

  case 631:

    { (yyval.uint) = 0; }

    break;

  case 632:

    { (yyval.uint) = (yyvsp[0].uint); }

    break;

  case 633:

    { (yyval.i) = 0; }

    break;

  case 634:

    { /* convert it to int32_t */
               int64_t val;

               val = strtoll(yyget_text(scanner), NULL, 10);
               if (val < INT32_MIN || val > INT32_MAX) {
                   LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "The number is not in the correct range (INT32_MIN..INT32_MAX): \"%d\"",val);
                   YYABORT;
               }
               (yyval.i) = (int32_t) val;
             }

    break;

  case 640:

    { if (read_all && lyp_check_identifier(s, LY_IDENT_SIMPLE, trg, NULL)) {
                    free(s);
                    YYABORT;
                }
              }

    break;

  case 645:

    { if (read_all) {
                 char *tmp;

                 if ((tmp = strchr(s, ':'))) {
                   *tmp = '\0';
                   /* check prefix */
                   if (lyp_check_identifier(s, LY_IDENT_SIMPLE, trg, NULL)) {
                     free(s);
                     YYABORT;
                   }
                   /* check identifier */
                   if (lyp_check_identifier(tmp + 1, LY_IDENT_SIMPLE, trg, NULL)) {
                     free(s);
                     YYABORT;
                   }
                   *tmp = ':';
                 } else {
                   /* check identifier */
                   if (lyp_check_identifier(s, LY_IDENT_SIMPLE, trg, NULL)) {
                     free(s);
                     YYABORT;
                   }
                 }
               }
             }

    break;

  case 651:

    { if (read_all ) {
                                       if (yang_use_extension(trg, data_node, actual, yyget_text(scanner))) {
                                         YYABORT;
                                       }
                                     }
                                   }

    break;

  case 674:

    { if (read_all){
                    s = strdup(yyget_text(scanner));
                    if (!s) {
                      LOGMEM;
                      YYABORT;
                    }
                  }
                }

    break;

  case 765:

    { if (read_all) {
                            s = strdup(yyget_text(scanner));
                            if (!s) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                        }

    break;

  case 766:

    { if (read_all) {
                                      s = strdup(yyget_text(scanner));
                                      if (!s) {
                                        LOGMEM;
                                        YYABORT;
                                      }
                                    }
                                  }

    break;



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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, module, submodule, unres, size_arrays, read_all, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, module, submodule, unres, size_arrays, read_all, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, scanner, module, submodule, unres, size_arrays, read_all);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, module, submodule, unres, size_arrays, read_all);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, module, submodule, unres, size_arrays, read_all, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, module, submodule, unres, size_arrays, read_all);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, module, submodule, unres, size_arrays, read_all);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}



void yyerror(YYLTYPE *yylloc, void *scanner, ...){

  (void)yylloc; /* unused */
  LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, yyget_text(scanner));
}
