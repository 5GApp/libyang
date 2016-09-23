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
#define YYLAST   3242

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  347
/* YYNRULES -- Number of rules.  */
#define YYNRULES  772
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1242

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
       0,   257,   257,   258,   279,   279,   298,   300,   299,   331,
     344,   331,   353,   354,   362,   363,   366,   379,   366,   390,
     391,   399,   399,   408,   410,   412,   435,   436,   439,   439,
     459,   460,   466,   477,   488,   497,   499,   499,   522,   523,
     527,   528,   539,   550,   559,   571,   582,   571,   591,   593,
     594,   595,   596,   601,   607,   609,   611,   613,   615,   623,
     626,   626,   635,   636,   636,   641,   642,   647,   654,   654,
     663,   669,   708,   711,   712,   713,   714,   715,   716,   717,
     723,   724,   725,   727,   727,   746,   747,   751,   752,   759,
     766,   777,   789,   789,   791,   792,   796,   798,   799,   800,
     811,   813,   814,   813,   817,   818,   819,   820,   837,   837,
     846,   847,   852,   873,   886,   892,   897,   903,   905,   905,
     914,   915,   920,   960,   969,   978,   984,   989,   995,   999,
     997,  1014,  1024,  1024,  1031,  1034,  1034,  1052,  1053,  1059,
    1065,  1070,  1076,  1077,  1083,  1088,  1089,  1090,  1093,  1128,
    1132,  1140,  1148,  1149,  1153,  1154,  1155,  1163,  1176,  1182,
    1183,  1201,  1205,  1215,  1216,  1221,  1233,  1238,  1243,  1248,
    1254,  1263,  1276,  1277,  1281,  1282,  1294,  1299,  1304,  1309,
    1315,  1328,  1328,  1347,  1348,  1351,  1363,  1373,  1374,  1379,
    1403,  1412,  1421,  1427,  1432,  1438,  1450,  1451,  1469,  1474,
    1475,  1480,  1482,  1484,  1485,  1486,  1502,  1502,  1521,  1522,
    1524,  1535,  1545,  1546,  1551,  1575,  1584,  1593,  1599,  1604,
    1610,  1622,  1623,  1638,  1640,  1642,  1644,  1646,  1646,  1653,
    1654,  1659,  1681,  1687,  1692,  1697,  1698,  1705,  1706,  1707,
    1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1728,  1728,
    1736,  1737,  1742,  1778,  1778,  1780,  1787,  1787,  1795,  1796,
    1802,  1808,  1813,  1818,  1818,  1823,  1823,  1828,  1828,  1839,
    1839,  1847,  1847,  1854,  1861,  1854,  1879,  1909,  1909,  1911,
    1918,  1923,  1918,  1936,  1937,  1937,  1945,  1948,  1954,  1960,
    1966,  1971,  1977,  1984,  1977,  2019,  2060,  2060,  2062,  2069,
    2074,  2069,  2087,  2107,  2108,  2108,  2116,  2122,  2136,  2150,
    2162,  2168,  2173,  2179,  2186,  2179,  2211,  2256,  2256,  2258,
    2265,  2265,  2273,  2287,  2295,  2301,  2315,  2329,  2341,  2347,
    2352,  2357,  2357,  2365,  2365,  2370,  2370,  2375,  2375,  2386,
    2386,  2394,  2394,  2405,  2407,  2406,  2424,  2447,  2447,  2449,
    2462,  2474,  2482,  2490,  2498,  2507,  2516,  2516,  2526,  2527,
    2530,  2531,  2532,  2533,  2534,  2535,  2536,  2543,  2543,  2551,
    2552,  2556,  2578,  2578,  2580,  2587,  2593,  2598,  2603,  2603,
    2610,  2610,  2622,  2622,  2634,  2635,  2639,  2668,  2668,  2674,
    2681,  2681,  2689,  2696,  2703,  2710,  2715,  2721,  2721,  2737,
    2738,  2742,  2779,  2779,  2781,  2788,  2794,  2799,  2804,  2804,
    2812,  2812,  2827,  2827,  2836,  2837,  2842,  2843,  2846,  2896,
    2903,  2927,  2947,  2966,  2985,  3008,  3031,  3036,  3042,  3051,
    3042,  3058,  3059,  3062,  3071,  3062,  3083,  3104,  3104,  3106,
    3113,  3122,  3127,  3132,  3132,  3140,  3140,  3148,  3148,  3160,
    3160,  3170,  3171,  3174,  3174,  3185,  3185,  3196,  3197,  3202,
    3232,  3239,  3245,  3250,  3255,  3255,  3263,  3263,  3268,  3268,
    3280,  3280,  3293,  3307,  3293,  3314,  3345,  3345,  3353,  3353,
    3361,  3361,  3366,  3366,  3376,  3390,  3376,  3397,  3397,  3407,
    3411,  3416,  3456,  3456,  3464,  3471,  3477,  3482,  3487,  3487,
    3495,  3495,  3500,  3500,  3507,  3516,  3507,  3530,  3550,  3558,
    3566,  3576,  3577,  3579,  3584,  3586,  3587,  3588,  3591,  3593,
    3593,  3599,  3600,  3604,  3631,  3639,  3647,  3663,  3673,  3680,
    3687,  3698,  3710,  3710,  3716,  3717,  3737,  3764,  3772,  3783,
    3793,  3804,  3804,  3810,  3811,  3815,  3832,  3842,  3850,  3860,
    3867,  3874,  3885,  3897,  3897,  3900,  3901,  3905,  3906,  3911,
    3917,  3919,  3920,  3919,  3923,  3924,  3925,  3940,  3942,  3943,
    3942,  3946,  3947,  3948,  3963,  3965,  3967,  3968,  3989,  3991,
    3992,  3993,  4014,  4016,  4017,  4018,  4030,  4030,  4038,  4039,
    4044,  4046,  4047,  4049,  4050,  4052,  4054,  4054,  4063,  4066,
    4066,  4077,  4080,  4090,  4111,  4113,  4114,  4117,  4117,  4136,
    4136,  4145,  4145,  4154,  4157,  4159,  4161,  4162,  4164,  4166,
    4168,  4169,  4171,  4173,  4174,  4176,  4177,  4179,  4181,  4184,
    4188,  4190,  4191,  4193,  4194,  4196,  4198,  4209,  4210,  4213,
    4214,  4226,  4227,  4229,  4230,  4232,  4233,  4239,  4240,  4243,
    4244,  4245,  4271,  4272,  4275,  4276,  4277,  4280,  4280,  4288,
    4290,  4291,  4293,  4294,  4295,  4297,  4298,  4300,  4301,  4303,
    4304,  4306,  4307,  4309,  4310,  4313,  4314,  4317,  4319,  4320,
    4323,  4323,  4332,  4334,  4335,  4336,  4337,  4338,  4339,  4340,
    4342,  4343,  4344,  4345,  4346,  4347,  4348,  4349,  4350,  4351,
    4352,  4353,  4354,  4355,  4356,  4357,  4358,  4359,  4360,  4361,
    4362,  4363,  4364,  4365,  4366,  4367,  4368,  4369,  4370,  4371,
    4372,  4373,  4374,  4375,  4376,  4377,  4378,  4379,  4380,  4381,
    4382,  4383,  4384,  4385,  4386,  4387,  4388,  4389,  4390,  4391,
    4392,  4393,  4394,  4395,  4396,  4397,  4398,  4399,  4400,  4401,
    4402,  4403,  4404,  4405,  4406,  4407,  4408,  4409,  4410,  4411,
    4412,  4413,  4414,  4415,  4416,  4417,  4418,  4419,  4420,  4421,
    4422,  4425,  4434
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
  "base_stmt", "typedef_stmt", "$@21", "typedef_arg_str", "type_stmt",
  "$@22", "type_opt_stmt", "$@23", "type_end", "type_stmtsep",
  "type_body_stmts", "some_restrictions", "union_spec",
  "fraction_digits_stmt", "fraction_digits_arg_str", "length_stmt",
  "length_arg_str", "length_end", "message_opt_stmt", "pattern_stmt",
  "pattern_arg_str", "pattern_end", "pattern_opt_stmt", "modifier_stmt",
  "enum_specification", "$@24", "enum_stmts", "enum_stmt", "enum_arg_str",
  "enum_end", "enum_opt_stmt", "value_stmt", "integer_value_arg_str",
  "range_stmt", "range_end", "path_stmt", "require_instance_stmt",
  "require_instance_arg_str", "bits_specification", "$@25", "bit_stmts",
  "bit_stmt", "bit_arg_str", "bit_end", "bit_opt_stmt", "position_stmt",
  "position_value_arg_str", "error_message_stmt", "error_app_tag_stmt",
  "units_stmt", "default_stmt", "grouping_stmt", "$@26", "grouping_end",
  "grouping_opt_stmt", "data_def_stmt", "container_stmt", "$@27",
  "container_end", "container_opt_stmt", "$@28", "$@29", "$@30", "$@31",
  "$@32", "$@33", "$@34", "leaf_stmt", "$@35", "$@36", "leaf_opt_stmt",
  "$@37", "$@38", "$@39", "$@40", "leaf_list_stmt", "$@41", "$@42",
  "leaf_list_opt_stmt", "$@43", "$@44", "$@45", "$@46", "list_stmt",
  "$@47", "$@48", "list_opt_stmt", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "$@55", "choice_stmt", "$@56", "choice_end", "$@57",
  "choice_opt_stmt", "$@58", "$@59", "short_case_case_stmt",
  "short_case_stmt", "case_stmt", "$@60", "case_end", "case_opt_stmt",
  "$@61", "$@62", "anyxml_stmt", "$@63", "anydata_stmt", "$@64",
  "anyxml_end", "anyxml_opt_stmt", "$@65", "$@66", "uses_stmt", "$@67",
  "uses_end", "uses_opt_stmt", "$@68", "$@69", "$@70", "refine_stmt",
  "$@71", "refine_end", "refine_arg_str", "refine_body_opt_stmts",
  "uses_augment_stmt", "$@72", "$@73", "uses_augment_arg_str",
  "augment_stmt", "$@74", "$@75", "augment_opt_stmt", "$@76", "$@77",
  "$@78", "$@79", "$@80", "augment_arg_str", "action_stmt", "$@81",
  "rpc_stmt", "$@82", "rpc_end", "rpc_opt_stmt", "$@83", "$@84", "$@85",
  "$@86", "input_stmt", "$@87", "$@88", "input_output_opt_stmt", "$@89",
  "$@90", "$@91", "$@92", "output_stmt", "$@93", "$@94",
  "notification_stmt", "$@95", "notification_end", "notification_opt_stmt",
  "$@96", "$@97", "$@98", "$@99", "deviation_stmt", "$@100", "$@101",
  "deviation_opt_stmt", "deviation_arg_str", "deviate_body_stmt",
  "deviate_stmts", "deviate_not_supported_stmt", "deviate_add_stmt",
  "$@102", "deviate_add_end", "deviate_add_opt_stmt",
  "deviate_delete_stmt", "$@103", "deviate_delete_end",
  "deviate_delete_opt_stmt", "deviate_replace_stmt", "$@104",
  "deviate_replace_end", "deviate_replace_opt_stmt", "when_stmt", "$@105",
  "when_end", "when_opt_stmt", "config_stmt", "config_read_stmt", "$@106",
  "$@107", "config_arg_str", "mandatory_stmt", "mandatory_read_stmt",
  "$@108", "$@109", "mandatory_arg_str", "presence_stmt",
  "min_elements_stmt", "min_value_arg_str", "max_elements_stmt",
  "max_value_arg_str", "ordered_by_stmt", "ordered_by_arg_str",
  "must_stmt", "$@110", "must_end", "unique_stmt", "unique_arg_str",
  "unique_arg", "key_stmt", "key_arg_str", "$@111", "key_opt", "$@112",
  "range_arg_str", "absolute_schema_nodeid", "absolute_schema_nodeids",
  "absolute_schema_nodeid_opt", "descendant_schema_nodeid", "$@113",
  "path_arg_str", "$@114", "$@115", "absolute_path", "absolute_paths",
  "absolute_path_opt", "relative_path", "relative_path_part1",
  "relative_path_part1_opt", "descendant_path", "descendant_path_opt",
  "path_predicate", "path_equality_expr", "path_key_expr",
  "rel_path_keyexpr", "rel_path_keyexpr_part1",
  "rel_path_keyexpr_part1_opt", "rel_path_keyexpr_part2",
  "current_function_invocation", "positive_integer_value",
  "non_negative_integer_value", "integer_value", "integer_value_convert",
  "prefix_arg_str", "identifier_arg_str", "node_identifier",
  "identifier_ref_arg_str", "stmtend", "stmtsep", "unknown_statement",
  "$@116", "string_opt", "string_opt_part1", "string_opt_part2",
  "string_opt_part3", "unknown_statement_end", "unknown_statement2_opt",
  "unknown_statement2_end", "sep_stmt", "optsep", "sep", "whitespace_opt",
  "string", "$@117", "strings", "identifier", "identifiers",
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

#define YYPACT_NINF -978

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-978)))

#define YYTABLE_NINF -626

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -978,   103,  -978,  -978,   194,  -978,  -978,  -978,   276,   276,
    -978,  -978,  3049,  3049,   276,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,   -46,   276,   -12,   276,  -978,  -978,    46,
     383,   383,  -978,  -978,    74,  -978,  -978,    -8,   262,   276,
     276,   276,   276,  -978,  -978,  -978,  -978,  -978,   137,  -978,
    -978,   114,  2384,  -978,  2479,  3049,  2479,    69,    69,   276,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,   222,  -978,  -978,   222,
    -978,   222,   276,   276,  -978,  -978,   249,   249,  3049,   276,
    1706,   276,   276,  -978,  -978,  -978,  -978,  -978,   276,  -978,
    3049,  3049,   276,   276,   276,   276,  -978,  -978,  -978,  -978,
     125,   125,  -978,  -978,   276,    83,  -978,   101,    52,   383,
     276,  -978,  -978,  -978,  2479,  2479,  2479,  2479,   276,  -978,
     575,  1407,   142,   255,  -978,  -978,  -978,   147,   304,   222,
     222,   222,   222,   136,   383,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,   335,   383,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    3049,    20,  3049,  3049,  3049,    20,  3049,  3049,  3049,  3049,
    3049,  3049,  3049,  3049,  3049,  2574,  3049,   276,   383,   276,
     268,  1706,   276,  -978,   383,   383,   383,  -978,   313,  -978,
    3144,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,   153,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,   155,   276,
     235,   233,   276,  -978,  -978,  -978,   349,  -978,   160,   162,
     276,   397,   400,   404,   174,   276,   419,   424,   447,   178,
     205,   221,   462,   487,  -978,   500,   276,   276,   349,   170,
    -978,   276,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,   383,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,   383,  -978,  -978,  -978,  -978,
    -978,   276,   136,   383,  -978,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   577,
     383,   383,   222,    90,   753,  1960,  1242,  1078,    88,   138,
     416,   297,   219,   986,  1327,  1807,  1513,   308,   276,   276,
     276,  -978,  -978,  -978,   193,   234,  -978,  -978,   171,  -978,
    -978,  -978,  -978,   276,   276,   276,   276,   276,   276,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,   276,   276,
    -978,  -978,  -978,  -978,  -978,  -978,   213,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
     232,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,   276,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,   276,  -978,  -978,  -978,  -978,  -978,
     276,  -978,  -978,   240,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,   276,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,   248,   234,  -978,  -978,  -978,  -978,   276,   276,   276,
    -978,  -978,  -978,  -978,  -978,  -978,   251,   234,  -978,  -978,
    -978,  -978,  -978,  -978,   276,   276,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,   258,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  2479,    98,  2479,  -978,   276,  -978,
     276,   276,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  2479,  -978,  2479,  -978,  2479,  -978,  -978,  3049,  3049,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  2479,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  3049,   412,  -978,
     383,   383,   383,   383,   383,  2574,  -978,  -978,  -978,  -978,
      78,    81,    12,  -978,  -978,  -978,  -978,  2669,  2669,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,   276,   276,  -978,  -978,  -978,  -978,   222,  -978,  -978,
    -978,  -978,   222,   222,  2574,   383,  2669,  2669,  -978,  -978,
    -978,    41,   222,    48,  -978,    98,  -978,   383,   383,  -978,
    -978,   383,   383,   383,   383,   383,   383,   383,   222,   383,
     383,   383,   383,   383,   383,   383,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,   222,  -978,   383,
     383,  -978,  -978,  -978,   222,  -978,  -978,  -978,   222,  -978,
    -978,  -978,  -978,  -978,   222,  -978,   383,   383,   222,  -978,
    -978,   222,  -978,    31,  -978,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   256,   265,   383,   383,
     383,   383,  -978,   276,   276,   276,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,   383,   383,   383,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,   503,  -978,   512,
     518,   487,  -978,   519,   276,   276,    31,   276,   276,  -978,
     383,   276,  -978,   276,  -978,   276,   276,   276,  -978,   383,
    -978,    31,  -978,  -978,  -978,  3144,  -978,  -978,  -978,   533,
     266,   276,   543,   276,   276,   276,   222,   276,   276,   222,
    -978,  -978,  -978,   222,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,   556,   561,  -978,   562,  -978,  -978,
    3144,    31,   162,   383,   383,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,   383,  -978,   383,   383,   115,   383,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,   620,   620,   230,   383,   383,   383,   408,   119,  1597,
     276,   259,   383,   383,   383,    31,  -978,  -978,  -978,   273,
    -978,   281,   282,   752,  -978,   337,  -978,   363,  1960,   260,
     276,   276,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,    54,  -978,   359,
     116,   413,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
     276,   276,   276,   276,   276,   276,  -978,   234,  -978,  -978,
    -978,  -978,  -978,  -978,   276,  -978,   276,  -978,   290,   276,
     276,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  2479,  2479,  -978,  -978,  -978,  -978,  -978,   222,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,   383,   383,   383,   383,    79,  2479,   135,  2479,  2479,
      89,  -978,   383,  2479,   383,  3049,   363,  -978,    41,    48,
     383,   222,   222,   383,   383,   276,   276,  -978,   383,   383,
     383,  -978,   222,  -978,   578,  -978,  -978,   222,   289,   382,
     579,  -978,   585,  -978,  -978,  -978,  -978,   222,   383,   588,
    -978,   337,   589,  -978,  -978,   222,   222,  -978,  -978,  -978,
     276,  -978,  -978,  -978,  -978,  3144,  -978,  -978,   294,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,   276,   276,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,   383,
     383,  -978,   289,  -978,  2764,   383,   383,   383,   383,   383,
     383,   383,   527,   299,  -978,  -978,  -978,    24,   106,   564,
     209,   145,  -978,   411,  -978,   214,   276,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,   276,  -978,  -978,  -978,  -978,  -978,
    -978,   276,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  3144,
    -978,  2479,   241,    81,   411,   411,   222,  -978,  -978,  -978,
    -978,   222,  -978,  -978,  -978,   222,  -978,   315,   318,  -978,
    -978,   276,  -978,   276,  -978,   411,   353,   411,  -978,   411,
     327,   341,   411,   411,   340,   431,  -978,   411,  -978,  -978,
     350,  2859,   411,  -978,  -978,  -978,  2954,  -978,   364,   411,
    3144,  -978
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     675,     0,     2,     3,     0,     1,   673,   674,     0,     0,
     676,   675,     0,     0,   677,   691,     4,   690,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,   710,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   770,   646,     9,   771,
     675,    16,   675,     0,   645,     0,     6,   654,   654,     5,
      12,    19,   675,   657,    10,   656,   655,    17,     0,   660,
       0,     0,     0,    25,    13,    14,    15,    25,     0,    20,
       7,     0,   662,   661,     0,     0,     0,    49,    49,     0,
      22,   675,   675,   667,   658,   675,   683,   686,   684,   688,
     689,   687,   659,   675,   685,   682,     0,   680,   643,     0,
     675,     0,     0,     0,    26,    27,    58,    58,     0,     8,
     669,   665,   663,   654,   654,    24,   675,    48,   644,    23,
       0,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      71,    71,    45,   648,   660,     0,   647,   664,     0,   652,
     681,    28,    35,    36,     0,     0,     0,     0,     0,   654,
       0,     0,     0,     0,   668,   675,   654,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   675,   654,    73,    74,    75,    76,    77,    78,
     240,   241,   242,   243,   244,   245,   246,   247,    79,    80,
      81,    82,   675,   654,   675,   675,   670,     0,   653,   654,
     654,    38,   654,    55,    56,    54,    57,    68,    70,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    72,    18,
       0,   669,   671,   675,    30,    40,    37,   675,     0,   380,
       0,   452,   433,   605,   675,   341,   248,    83,   512,   504,
     675,   108,   227,   118,   273,   292,   313,   487,   455,     0,
     131,   772,   651,   397,   675,   675,   382,    46,     0,   666,
       0,     0,    69,   654,    62,    61,     0,   603,     0,   604,
     451,     0,     0,     0,     0,   511,     0,     0,     0,     0,
       0,     0,     0,     0,   654,     0,   649,   650,     0,     0,
     675,     0,   654,    34,    31,    32,    33,    39,    43,    41,
      42,    63,   654,   384,   381,   654,   606,   654,   343,   342,
     654,   250,   249,   654,    85,    84,   654,   654,   110,   109,
     654,   229,   228,   654,   120,   119,   654,   654,   654,   654,
     489,   488,   654,   457,   456,   134,   654,   399,   398,   383,
     654,   672,     0,    29,    65,   386,   436,   346,   252,    87,
     507,   112,   231,   122,   276,   295,   316,   491,   459,   129,
     401,    47,     0,     0,     0,   434,   344,     0,     0,   505,
       0,     0,     0,   274,   293,   314,     0,     0,     0,     0,
       0,   140,   141,   139,     0,     0,   137,   138,     0,    44,
      64,    66,    67,     0,     0,     0,     0,     0,     0,   385,
     395,   396,   394,   389,   387,   392,   393,   390,     0,     0,
     441,   442,   440,   439,   443,   449,     0,   445,   447,   437,
     354,   355,   353,   349,   350,   360,   361,   362,   363,   366,
       0,   356,   358,   359,   364,   365,   347,   351,   352,     0,
     251,   261,   262,   260,   255,   269,   263,   271,   265,   267,
     253,   259,   258,   256,     0,    86,    90,    91,    88,    89,
       0,   508,   509,     0,   111,   115,   116,   114,   113,   230,
     233,   234,   232,   654,   654,   654,   654,   654,     0,   121,
     126,   127,   125,   124,   123,   290,   291,   289,   279,   283,
     286,     0,     0,   277,   287,   288,   284,     0,     0,     0,
     311,   312,   310,   298,   303,   302,     0,     0,   296,   306,
     307,   308,   309,   304,     0,     0,   329,   330,   328,   319,
     331,   333,   339,     0,   335,   337,   317,   324,   325,   326,
     327,   320,   323,   322,   490,   496,   497,   495,   494,   498,
     500,   502,   492,   675,   675,   458,   462,   463,   461,   460,
     464,   466,   468,   470,     0,     0,     0,   130,     0,   654,
       0,     0,   400,   406,   407,   405,   404,   408,   410,   402,
     561,     0,   568,     0,   101,     0,   654,   654,     0,     0,
     654,   654,   435,   654,   654,   654,   345,   654,   654,     0,
     654,   654,   654,   654,   654,   654,   654,     0,     0,   506,
     236,   235,   237,   238,   239,     0,   275,   281,   654,   654,
       0,     0,     0,   294,   300,   654,   654,     0,     0,   654,
     654,   654,   315,   654,   654,   654,   654,   654,   654,   654,
     654,   472,   484,   654,   654,   654,   654,     0,   675,   675,
     675,   107,     0,     0,     0,   136,     0,     0,   654,   654,
     654,     0,     0,     0,   586,     0,   553,   388,   391,   367,
     453,   444,   450,   446,   448,   438,   357,   348,     0,   270,
     264,   272,   266,   268,   254,   257,    92,   675,   675,   675,
     675,   510,   675,   513,   515,   517,   516,     0,   654,   278,
     285,   636,   675,   581,     0,   675,   637,   577,     0,   638,
     675,   675,   675,   585,     0,   654,   297,   305,     0,   595,
     596,     0,   590,     0,   607,   332,   334,   340,   336,   338,
     318,   321,   499,   501,   503,   493,     0,     0,   465,   467,
     469,   471,   226,   104,   106,   105,   100,   225,   132,   432,
     428,   675,   417,   412,   675,   409,   411,   403,   675,   675,
     566,   562,   117,   675,   675,   573,   569,     0,   102,     0,
       0,     0,   574,     0,   519,   532,     0,   541,   514,   128,
     282,   579,   578,   580,   575,   576,   584,   583,   582,   301,
     598,     0,   592,   591,   594,     0,   605,   654,   654,     0,
       0,   431,     0,   416,   565,   564,     0,   572,   571,     0,
     654,   588,   587,     0,   654,   555,   554,   654,   369,   368,
     454,   654,    94,   654,     0,     0,   518,     0,   597,   601,
       0,     0,   608,   475,   475,   654,   142,   133,   654,   654,
     414,   413,   563,   570,   165,   103,   557,   371,     0,    93,
     654,   521,   520,   654,   534,   533,   654,   543,   542,   599,
     593,   473,   485,   148,   144,   436,   418,     0,     0,     0,
       0,     0,   523,   536,   545,     0,   478,   480,   482,     0,
     476,     0,     0,   145,   146,     0,   147,     0,   429,     0,
       0,     0,   589,   168,   169,   166,   167,   556,   558,   559,
     370,   376,   377,   375,   374,   378,   372,     0,    95,     0,
       0,     0,   600,   654,   654,   654,   474,   654,   486,   143,
       0,     0,     0,     0,     0,     0,   151,     0,   154,   152,
     153,   654,   150,   149,     0,   654,     0,   208,     0,     0,
       0,   415,   426,   427,   421,   422,   423,   420,   424,   425,
     654,     0,     0,   654,   654,   675,   675,    99,     0,   522,
     524,   527,   528,   529,   530,   531,   654,   526,   535,   537,
     540,   654,   539,   544,   654,   547,   548,   549,   550,   551,
     552,   479,   481,   483,   477,     0,     0,   609,     0,     0,
       0,   654,   155,     0,   183,     0,   207,   430,     0,     0,
     419,     0,     0,   379,   373,    98,    97,    96,   525,   538,
     546,   160,     0,   675,     0,   162,   613,     0,     0,     0,
       0,   171,     0,   602,   675,   675,   205,     0,   156,     0,
     186,   182,     0,   211,   209,     0,     0,   224,   223,   158,
     159,   654,   163,   654,   201,     0,   616,   610,     0,   612,
     620,   654,   172,   654,   654,   199,   198,   204,   203,   202,
     654,   187,   185,   654,   654,   212,   654,   560,   567,   165,
     161,   625,   615,   619,     0,   174,   170,   165,   189,   184,
     214,   210,     0,   614,   617,   621,   618,   623,     0,     0,
       0,     0,   164,   678,   622,     0,     0,   173,   178,   179,
     175,   176,   177,   200,     0,   188,   193,   194,   192,   190,
     191,     0,   213,   218,   219,   217,   215,   216,   679,     0,
     624,     0,     0,     0,   678,   678,     0,   641,   642,   639,
     197,     0,   675,   640,   222,     0,   675,     0,     0,   180,
     195,   196,   220,   221,   626,   678,     0,   678,   627,   678,
       0,     0,   678,   678,     0,     0,   635,   678,   628,   631,
       0,     0,   678,   632,   633,   630,   678,   629,     0,   678,
       0,   634
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -978,  -978,   195,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,   345,  -978,   325,  -978,  -978,
    -978,   287,  -978,  -978,  -978,  -978,   140,  -978,  -978,  -978,
    -216,   344,  -978,  -978,   746,   882,   319,  -978,  -978,  -978,
    -978,  -978,    65,  -978,   301,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -437,  -374,  -978,  -978,  -228,
    -978,  -978,  -978,  -978,  -423,  -978,  -978,  -978,  -978,  -442,
    -438,  -978,  -978,  -502,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -977,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -578,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -535,  -978,  -978,  -978,  -978,  -978,  -616,  -615,  -446,  -411,
    -346,  -978,  -978,  -978,  -387,   104,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,   105,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,   111,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,   117,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,   120,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,   121,  -978,  -978,  -978,  -978,  -978,   126,  -978,
     163,  -978,   216,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -347,  -978,  -978,  -978,  -978,
    -978,  -978,  -236,  -978,  -978,  -978,  -242,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -298,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -380,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,  -978,
    -978,  -407,  -978,  -978,  -978,  -520,   -75,  -978,  -978,  -430,
    -352,  -321,  -978,  -978,  -443,  -329,  -454,  -978,  -441,  -978,
     184,  -978,  -403,  -978,  -978,  -770,  -978,  -253,  -978,  -978,
    -978,  -292,  -978,  -978,  -343,   372,  -200,  -701,  -978,  -978,
    -978,  -978,  -471,  -481,  -978,  -978,  -452,  -978,  -978,  -978,
    -464,  -978,  -978,  -978,  -537,  -978,  -978,  -978,  -678,  -498,
    -978,  -978,  -978,   139,  -104,  -669,   513,  1253,  -978,  -978,
     504,  -978,  -978,  -978,  -978,   396,  -978,    -4,   143,   520,
     355,  -114,  -978,   568,   376,  -132,  -978
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    97,   102,   109,   141,     2,   103,   123,   114,
       3,   105,   127,   117,   128,   124,   125,   137,   164,   217,
     340,   201,   165,   218,   272,   341,   373,   140,   212,   369,
     126,   166,   186,   187,   963,   964,   190,   209,   308,   345,
     424,   443,   279,   307,   210,   243,   244,   353,   395,   448,
     538,   843,   893,   941,  1028,   492,   482,   735,   883,   722,
     245,   356,   399,   450,   493,   246,   358,   405,   452,   564,
     247,   464,   329,   639,   869,   439,   465,   907,   933,   952,
     953,   997,   998,  1082,   999,  1084,  1113,   937,  1000,  1090,
    1123,  1158,  1170,   954,   955,  1101,  1005,  1099,  1132,  1160,
    1180,  1201,  1001,  1126,  1002,  1003,  1097,   956,   957,  1066,
    1007,  1102,  1136,  1161,  1187,  1205,   965,   966,   466,   467,
     248,   357,   402,   451,   249,   250,   352,   392,   447,   675,
     676,   671,   673,   674,   670,   672,   251,   359,   571,   453,
     688,   572,   768,   689,   252,   360,   586,   454,   695,   587,
     785,   696,   253,   361,   603,   455,   705,   706,   699,   700,
     703,   704,   701,   254,   351,   389,   510,   446,   668,   667,
     511,   512,   495,   840,   889,   939,  1024,  1023,   255,   346,
     256,   368,   384,   444,   656,   657,   257,   365,   418,   468,
     730,   728,   729,   647,   872,   911,   823,   959,   648,   870,
    1008,   820,   258,   348,   496,   445,   665,   660,   663,   664,
     661,   312,   497,   841,   259,   363,   414,   457,   713,   714,
     715,   716,   632,   806,   949,   931,   987,   983,   984,   985,
     633,   807,   951,   260,   362,   411,   456,   710,   707,   708,
     709,   261,   354,   543,   449,   319,   761,   762,   763,   764,
     894,   922,   979,   765,   895,   925,   980,   766,   897,   928,
     981,   499,   839,   886,   938,  1015,   485,   731,   876,   831,
    1016,   486,   733,   879,   836,   532,   590,   778,   591,   774,
     592,   784,   950,   837,   882,   612,   792,   863,   613,   789,
     861,   898,   945,  1092,   313,   314,   349,   793,   866,  1087,
    1088,  1089,  1116,  1117,  1142,  1119,  1120,  1144,  1156,  1164,
    1153,  1194,  1218,  1228,  1229,  1231,  1236,  1219,   779,   780,
    1202,  1203,   159,   202,   794,   333,   864,   110,   115,   119,
     131,   132,   152,   197,   144,   195,   266,   116,     4,   133,
    1189,   156,   176,   157,    99,   100,   335
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   608,   463,   160,    11,    11,   386,   569,   584,   525,
      10,   539,   775,   553,   609,   -21,   767,   600,   619,   630,
      16,   483,   161,   503,   524,   821,   824,   548,    16,   563,
     568,   583,   599,   618,   629,   504,     6,   484,     7,   516,
     530,   487,   570,   585,   533,   646,   573,   588,   606,    16,
     576,   593,   611,   622,   107,   818,    16,     6,   494,     7,
     527,   649,    16,   113,   555,   498,   194,   529,   602,   621,
     687,   557,   502,   523,   122,   605,   547,   552,   562,   567,
     582,   598,   617,   628,   337,   694,    16,    16,   108,    16,
     219,   220,   221,   222,   645,   771,   771,    16,   771,   776,
      10,   526,    10,     5,   781,   554,    16,   782,   534,   601,
     620,   631,   162,   163,    10,    11,    11,    11,    11,   183,
       6,   183,     7,   310,   374,   518,   113,  -625,  -625,   828,
     120,   173,   575,   174,   829,    11,   833,   183,   121,   960,
     961,   834,  1025,    16,    16,   112,   458,  1026,   277,  -611,
     183,    98,   101,   216,    14,   185,   122,   185,    11,    11,
     139,   459,  1152,   334,   901,    10,    10,    10,    10,   183,
    1159,   476,   772,   185,    10,   540,   183,  1094,    11,    11,
      11,    11,  1095,   718,   214,   719,   185,   474,   720,   535,
      11,   470,   640,   595,   460,   208,    10,   194,   940,     6,
     215,     7,   183,  1166,    11,   185,   347,  1167,  1181,  1037,
    1042,   528,   185,   474,   142,   556,   143,  1038,   459,   604,
     967,    11,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,    11,   185,   641,
     183,   558,   263,   104,   477,   106,  1182,   269,     8,    16,
     183,   474,   478,   364,  -206,   118,   370,  1197,  1198,  1199,
     385,   474,  -181,    10,   183,   310,   183,     6,     9,     7,
     130,   420,   642,     6,   396,     7,   185,   182,   406,   113,
     183,     6,   459,     7,   169,   170,   185,  1009,   171,  1174,
     458,   183,   477,    10,   637,    10,   172,    10,    10,   121,
     185,   225,   185,   178,   371,   407,   371,   192,   184,   638,
    1175,  1010,   577,   578,   662,   476,   185,  1115,  1163,   200,
     559,   408,   173,   227,   174,   519,   228,   185,   183,   155,
     158,   155,   121,   666,   377,    10,   372,   232,    10,   183,
       6,   679,     7,   303,   234,   235,    10,   236,   232,   686,
     474,    10,   693,   623,   237,   264,   867,   265,   267,   702,
     978,  1011,    10,    10,   185,   868,   908,    11,   624,  1004,
     477,   517,   531,   239,   986,   185,   240,  1083,   574,   589,
     607,   477,   988,   989,   239,   297,  1009,  1006,     6,   458,
       7,  1067,  1115,   489,   113,   241,  1118,  1143,   549,   155,
     155,   155,   155,  1163,   270,   299,   271,   301,   302,   625,
    1010,   577,   578,   343,   476,   344,  1188,    10,   278,   309,
    1214,   315,   316,   317,  1215,   321,   322,   323,   324,   325,
     326,   327,   328,   330,  1222,   336,   595,   460,  1217,   183,
    1009,   960,   961,   458,  1223,  1227,   339,   183,  1226,   382,
     342,   383,   138,  1232,    11,    11,    11,   350,   474,  1032,
    1029,  1047,   129,   355,  1010,   577,   578,  1239,   203,    11,
      11,    11,    11,    11,    11,   185,   311,   366,   367,  1044,
     318,   378,   167,   185,    11,    11,   191,   442,   638,   477,
     332,   460,   211,   946,   946,  1061,   757,   387,   758,   388,
     390,   759,   391,   760,   393,  1018,   394,   838,   154,   962,
     154,   996,   154,   421,  1043,    11,   974,   544,  1019,   397,
     717,   398,   723,  1133,   400,  1034,   401,  1049,    12,    13,
      11,  1104,   976,  1030,  1039,  1045,    11,   732,  1035,   734,
    1050,   736,  1171,  1172,   948,   948,   196,   403,  1014,   404,
     505,   506,   975,   334,    11,   748,  1020,   507,   183,   386,
     960,   961,   409,   508,   410,   973,   509,   513,  1031,  1040,
    1046,   494,   514,    11,    11,    11,  1036,  1041,   498,   225,
     154,   154,   154,   154,   419,   947,   947,   412,   958,   413,
      11,    11,   334,   790,   185,   183,   226,   960,   961,   890,
     416,   227,   417,   880,   228,   881,   932,   458,   183,   515,
     229,   230,   884,   231,   885,   232,   233,   278,   887,   891,
     888,   892,   234,   235,   225,   236,  1106,  1033,  1162,  1048,
    1017,   185,   237,   905,    11,   906,    11,    11,  1105,   610,
     134,   135,   136,   909,   185,   910,   227,   238,   930,   228,
     459,   239,  -135,   982,   240,   460,   920,   320,   921,   168,
     232,   923,   926,   924,   927,  1173,   902,   234,   235,   175,
     236,  1154,   177,   241,   179,   476,   242,   196,  1111,  1121,
    1112,  1122,   180,   181,  1190,  1124,   196,  1125,  1130,  1134,
    1131,  1135,  1155,  1165,  1233,  1206,   239,   338,   213,   240,
     153,     0,   204,   205,   206,   207,     0,    10,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,     0,  1178,  1185,     0,     0,     0,   223,     0,
       0,     0,   273,   274,   275,   276,     0,  1179,  1186,     0,
       0,     0,     0,     0,     0,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,     0,     0,     0,     0,   711,   712,     0,     0,
       0,     0,     0,     0,   558,     0,     0,     0,     0,     0,
     473,     0,     0,     0,   183,     0,     0,     0,     0,    11,
       0,   990,     0,     0,     0,   474,   929,   739,   740,     0,
       0,   991,     0,     0,   475,     0,     0,     0,   476,    10,
      10,    10,     0,   992,   993,     0,   756,     0,   994,     0,
     185,   995,     0,     0,     0,     0,   477,  -157,     0,   155,
     721,   155,     0,     0,   478,     0,     0,     0,     0,     0,
      10,    10,    10,    10,    10,     0,   155,    10,   155,    10,
     155,    10,    10,    10,   479,     0,     0,    11,     0,     0,
       0,   813,   814,   815,   155,     0,     0,    10,     0,    10,
      10,    10,     0,    10,    10,     0,     0,     0,     0,     0,
     332,     0,     0,     0,     0,   773,   777,   783,     0,     0,
       0,   422,   788,   791,     0,     0,     0,    11,     0,     0,
     844,   845,   846,   847,     0,   848,     0,  1071,  1072,     0,
       0,     0,   188,   188,     0,   851,     0,     0,   853,   332,
       0,   819,   822,   855,   856,   857,   830,     0,   835,     0,
     721,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    11,  1085,     0,  1091,  1093,     0,     0,     0,  1100,
       0,     0,     0,     0,     0,   469,    11,    11,     0,     0,
       0,     0,     0,     0,   871,     0,     0,   873,     0,     0,
       0,   874,   875,     0,     0,     0,   877,   878,   634,   635,
     636,     0,     0,     0,     0,     0,    11,    11,    11,    11,
      11,    11,     0,   650,   651,   652,   653,   654,   655,     0,
      11,     0,    11,     0,     0,    11,    11,     0,   658,   659,
     154,  1141,   154,   473,     0,     0,   458,   183,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,   474,   154,
       0,   154,     0,     0,     0,     0,     0,   475,     0,   669,
    1157,   476,     0,     0,     0,   154,     0,     0,   189,   189,
       0,     0,     0,   185,   677,     0,     0,     0,     0,   477,
     678,  -280,     0,     0,   460,     0,     0,   478,     0,     0,
       0,    10,    10,   196,   196,     0,     0,  1196,   685,     0,
       0,     0,   225,     0,     0,  1195,   375,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   690,   691,   692,
       0,     0,   196,   196,   227,   473,    10,   228,     0,   183,
       0,     0,     0,     0,   697,   698,     0,     0,   232,     0,
     474,     0,     0,    10,    10,   234,   235,  1234,   236,     0,
       0,     0,  1237,   476,     0,   237,  1241,     0,     0,     0,
       0,     0,     0,   519,     0,   185,     0,     0,     0,     0,
       0,   477,     0,     0,   239,     0,     0,   240,   724,   478,
     726,   727,    11,     0,     0,     0,     0,     0,  1075,  1076,
      11,     0,  1027,     0,   489,     0,   241,    11,     0,   520,
       0,     0,     0,     0,     0,   461,     0,     0,     0,   471,
     480,   490,   500,   521,   536,   541,   545,   550,   560,   565,
     580,   596,   615,   626,  1103,     0,     0,    10,     0,    10,
       0,     0,     0,     0,   643,     0,   155,   155,     0,     0,
       0,     0,   376,   380,     0,     0,  1110,     0,     0,     0,
     812,     0,     0,     0,     0,   816,   817,  1127,  1128,     0,
       0,   196,     0,     0,     0,   832,   225,     0,     0,     0,
    1081,   155,  1086,   155,   155,  1096,     0,     0,   155,     0,
       0,   842,     0,   830,   835,     0,     0,   488,   227,   473,
       0,   228,   458,   183,     0,     0,   196,     0,     0,     0,
     849,     0,     0,     0,   474,     0,     0,   852,     0,   234,
     235,   854,   236,   475,     0,     0,     0,   858,     0,     0,
       0,   860,     0,     0,   862,     0,     0,     0,     0,   185,
       0,     0,     0,   865,     0,   477,     0,     0,     0,     0,
       0,   462,     0,   478,     0,   472,   481,   491,   501,   522,
     537,   542,   546,   551,   561,   566,   581,   597,   616,   627,
     241,     0,     0,     0,     0,  1211,     0,     0,     0,  1213,
     644,     0,     0,     0,   473,     0,     0,   458,   183,   896,
       0,   111,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   899,     0,     0,     0,     0,   577,
     578,   900,   476,     0,     0,   579,   155,  1200,  1204,   912,
       0,     0,   913,     0,   185,     0,   915,   154,   154,     0,
     477,     0,  -299,     0,     0,   460,     0,     0,   478,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   865,     0,     0,     0,     0,   198,   199,   226,     0,
       0,     0,   154,   227,   154,   154,   228,     0,     0,   154,
       0,     0,   229,   230,     0,   231,     0,   232,   233,     0,
       0,     0,     0,     0,   234,   235,     0,   236,   899,     0,
     977,     0,   224,     0,   237,   900,     0,     0,     0,   268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
    1021,  1022,     0,   239,     0,     0,   240,     0,     0,     0,
       0,   196,     0,     0,     0,     0,   298,     0,     0,     0,
       0,     0,     0,     0,     0,   241,     0,     0,   262,     0,
    1055,  1056,  1057,  1058,  1059,  1060,   300,   225,     0,     0,
     196,     0,   304,   305,  1063,   306,  1065,     0,     0,  1068,
    1069,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,  1077,   228,     0,   183,     0,     0,     0,     0,  1207,
    1208,     0,     0,   232,     0,   474,     0,     0,     0,     0,
     234,   235,     0,   236,     0,   196,     0,   154,   476,     0,
    1216,     0,  1220,     0,  1221,     0,     0,  1224,  1225,     0,
     185,     0,  1230,     0,  1107,  1108,   477,  1235,     0,   239,
       0,  1238,   240,     0,  1240,  1109,   381,     0,     0,     0,
    1114,   225,     0,     0,     0,     0,     0,   196,     0,     0,
    1129,   241,   196,     0,   614,     0,   196,   415,  1137,  1138,
       0,     0,     0,   227,     0,   423,   228,     0,   183,     0,
       0,     0,     0,     0,     0,   425,     0,     0,   426,   474,
     427,     0,     0,   428,   234,   235,   429,   236,     0,   430,
     431,     0,     0,   432,     0,     0,   433,     0,     0,   434,
     435,   436,   437,     0,   185,   438,     0,     0,     0,   440,
     477,     0,     0,   441,     0,     0,   240,     0,   478,     0,
       0,     0,     0,     0,   968,   971,  1191,     0,     0,     0,
       0,     0,     0,     0,  1192,   241,     0,     0,   970,     0,
       0,  1193,     0,     0,   490,  1012,     0,     0,     0,  1209,
      15,     6,     0,     7,  1210,     0,    17,   193,  1212,     0,
       0,     0,     0,     0,     0,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,   680,   681,   682,   683,
     684,   225,     0,     0,     0,     0,     0,     0,     0,     0,
     969,   972,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   227,   473,     0,   228,     0,   183,     0,
     491,  1013,     0,     0,     0,     0,     0,   232,     0,   474,
       0,     0,     0,   594,   234,   235,     0,   236,     0,   577,
     578,     0,   476,     0,   237,   579,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,     0,     0,     0,
     477,     0,     0,   239,   595,     0,   240,     0,   478,     0,
       0,     0,   725,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   489,  1168,   241,  1176,  1183,     0,   737,
     738,     0,     0,   741,   742,     0,   743,   744,   745,     0,
     746,   747,     0,   749,   750,   751,   752,   753,   754,   755,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   769,   770,     0,     0,     0,     0,     0,   786,   787,
       0,     0,   795,   796,   797,     0,   798,   799,   800,   801,
     802,   803,   804,   805,   225,     0,   808,   809,   810,   811,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   825,   826,   827,     0,   488,   227,     0,     0,   228,
       0,   183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   474,     0,     0,     0,     0,   234,   235,     0,
     236,     0,     0,     0,     0,     0,     0,   237,     0,     0,
       0,   850,     0,     0,     0,     0,     0,   185,     0,     0,
       0,     0,     0,   459,     0,     0,     0,     0,   859,   240,
    1169,   478,  1177,  1184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   489,     0,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     903,   904,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   914,     0,     0,     0,   916,     0,     0,
     917,     0,     0,     0,   918,     0,   919,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   934,     0,
       0,   935,   936,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   942,     0,     0,   943,     0,     0,   944,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1051,  1052,  1053,     0,
    1054,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1062,     0,     0,     0,  1064,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1070,     0,     0,  1073,  1074,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1078,
       0,     0,     0,     0,  1079,     0,     0,  1080,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1098,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1139,     0,  1140,     0,     0,     0,
       0,     0,     0,     0,  1145,     0,  1146,  1147,     0,     0,
       0,     0,     0,  1148,     0,     0,  1149,  1150,    15,  1151,
       0,     0,   145,   146,    17,   147,   148,     0,     0,     0,
     149,   150,   151,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    15,     0,     0,     0,    16,   146,    17,
     147,   148,     0,     0,     0,   149,   150,   151,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    15,     0,
       0,     0,    16,     0,    17,   331,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    15,     0,     0,     0,    16,     0,    17,
     193,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    15,     0,
       0,     0,     0,     0,    17,   193,     0,     0,  1118,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    15,     0,     0,     0,     0,     0,    17,
     193,     0,     0,  1227,     0,     0,     0,     0,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    15,  1188,
       0,     0,     0,     0,    17,   193,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    15,     0,     0,     0,    16,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    15,     0,
       0,     0,     0,     0,    17,   193,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96
};

static const yytype_int16 yycheck[] =
{
       4,   455,   439,   135,     8,     9,   349,   453,   454,   447,
      14,   448,   690,   451,   455,    23,   685,   455,   456,   457,
       8,   444,   136,   446,   447,   726,   727,   450,     8,   452,
     453,   454,   455,   456,   457,   446,     5,   444,     7,   446,
     447,   444,   453,   454,   447,   468,   453,   454,   455,     8,
     453,   454,   455,   456,   100,   724,     8,     5,   445,     7,
     447,   468,     8,    11,   451,   445,   170,   447,   455,   456,
     572,   451,   446,   447,    82,   455,   450,   451,   452,   453,
     454,   455,   456,   457,   300,   587,     8,     8,   100,     8,
     204,   205,   206,   207,   468,    17,    17,     8,    17,    18,
     104,   447,   106,     0,    92,   451,     8,    95,    20,   455,
     456,   457,    43,    44,   118,   119,   120,   121,   122,    31,
       5,    31,     7,   103,   340,   446,    11,   103,   104,    88,
      56,   100,   453,   102,    93,   139,    88,    31,    64,    33,
      34,    93,    88,     8,     8,    99,    30,    93,    12,    14,
      31,    12,    13,   101,    11,    67,    82,    67,   162,   163,
      23,    73,  1139,   295,   865,   169,   170,   171,   172,    31,
    1147,    55,    94,    67,   178,    37,    31,    88,   182,   183,
     184,   185,    93,    85,   101,    87,    67,    42,    90,   101,
     194,   101,    21,    77,    78,    70,   200,   301,    83,     5,
      99,     7,    31,    97,   208,    67,   310,   101,    63,   979,
     980,   447,    67,    42,   100,   451,   102,   101,    73,   455,
     101,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    67,    68,
      31,    22,   100,   100,    73,   102,   101,   100,    54,     8,
      31,    42,    81,   100,    24,   112,   101,    16,    17,    18,
     100,    42,    32,   267,    31,   103,    31,     5,    74,     7,
       8,   101,   101,     5,   100,     7,    67,    28,   100,    11,
      31,     5,    73,     7,   141,   142,    67,    27,   145,    80,
      30,    31,    73,   297,   101,   299,   153,   301,   302,    64,
      67,     4,    67,   160,    71,   100,    71,   168,    59,    75,
     101,    51,    52,    53,   101,    55,    67,   103,   104,   176,
     101,   100,   100,    26,   102,    65,    29,    67,    31,   134,
     135,   136,    64,   101,   101,   339,   101,    40,   342,    31,
       5,   101,     7,     8,    47,    48,   350,    50,    40,   101,
      42,   355,   101,    45,    57,   100,   100,   102,   215,   101,
     101,   101,   366,   367,    67,   100,   100,   371,    60,    32,
      73,   446,   447,    76,   101,    67,    79,  1055,   453,   454,
     455,    73,   101,   101,    76,   242,    27,    24,     5,    30,
       7,   101,   103,    96,    11,    98,    14,   103,   101,   204,
     205,   206,   207,   104,   100,   262,   102,   264,   265,   101,
      51,    52,    53,   100,    55,   102,     5,   421,   223,   280,
     105,   282,   283,   284,   106,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   107,   296,    77,    78,    85,    31,
      27,    33,    34,    30,   103,    14,   303,    31,   108,   100,
     307,   102,   127,   103,   458,   459,   460,   314,    42,   979,
     101,   981,   117,   320,    51,    52,    53,   103,   181,   473,
     474,   475,   476,   477,   478,    67,   281,   334,   335,   981,
     285,   341,   138,    67,   488,   489,   167,   422,    75,    73,
     295,    78,   191,   931,   932,   997,    84,   100,    86,   102,
     100,    89,   102,    91,   100,   959,   102,   735,   132,   101,
     134,   953,   136,   370,   101,   519,   939,   101,   959,   100,
     634,   102,   636,  1101,   100,   979,   102,   981,     8,     9,
     534,  1066,   939,   979,   980,   981,   540,   651,   979,   653,
     981,   655,  1158,  1158,   931,   932,   170,   100,   959,   102,
     446,   446,   939,   685,   558,   669,   959,   446,    31,   902,
      33,    34,   100,   446,   102,   939,   446,   446,   979,   980,
     981,   958,   446,   577,   578,   579,   979,   980,   958,     4,
     204,   205,   206,   207,   368,   931,   932,   100,   935,   102,
     594,   595,   724,   697,    67,    31,    21,    33,    34,   841,
     100,    26,   102,   100,    29,   102,   904,    30,    31,   446,
      35,    36,   100,    38,   102,    40,    41,   422,   100,   100,
     102,   102,    47,    48,     4,    50,  1069,   979,   101,   981,
     959,    67,    57,   100,   638,   102,   640,   641,  1068,   455,
     120,   121,   122,   100,    67,   102,    26,    72,   901,    29,
      73,    76,    75,   945,    79,    78,   100,   285,   102,   139,
      40,   100,   100,   102,   102,   101,   866,    47,    48,   156,
      50,  1142,   159,    98,   161,    55,   101,   301,   100,   100,
     102,   102,   162,   163,  1165,   100,   310,   102,   100,   100,
     102,   102,  1144,  1157,  1231,  1193,    76,   301,   194,    79,
     132,    -1,   182,   183,   184,   185,    -1,   711,   712,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,  1160,  1161,    -1,    -1,    -1,   208,    -1,
      -1,    -1,   219,   220,   221,   222,    -1,  1160,  1161,    -1,
      -1,    -1,    -1,    -1,    -1,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,    -1,    -1,    -1,   623,   624,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,   793,
      -1,    39,    -1,    -1,    -1,    42,   900,   658,   659,    -1,
      -1,    49,    -1,    -1,    51,    -1,    -1,    -1,    55,   813,
     814,   815,    -1,    61,    62,    -1,   677,    -1,    66,    -1,
      67,    69,    -1,    -1,    -1,    -1,    73,    75,    -1,   634,
     635,   636,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
     844,   845,   846,   847,   848,    -1,   651,   851,   653,   853,
     655,   855,   856,   857,   101,    -1,    -1,   861,    -1,    -1,
      -1,   718,   719,   720,   669,    -1,    -1,   871,    -1,   873,
     874,   875,    -1,   877,   878,    -1,    -1,    -1,    -1,    -1,
     685,    -1,    -1,    -1,    -1,   690,   691,   692,    -1,    -1,
      -1,   371,   697,   698,    -1,    -1,    -1,   901,    -1,    -1,
     757,   758,   759,   760,    -1,   762,    -1,  1021,  1022,    -1,
      -1,    -1,   166,   167,    -1,   772,    -1,    -1,   775,   724,
      -1,   726,   727,   780,   781,   782,   731,    -1,   733,    -1,
     735,    -1,    -1,    -1,    -1,    -1,   940,    -1,    -1,    -1,
      -1,   945,  1056,    -1,  1058,  1059,    -1,    -1,    -1,  1063,
      -1,    -1,    -1,    -1,    -1,   442,   960,   961,    -1,    -1,
      -1,    -1,    -1,    -1,   821,    -1,    -1,   824,    -1,    -1,
      -1,   828,   829,    -1,    -1,    -1,   833,   834,   458,   459,
     460,    -1,    -1,    -1,    -1,    -1,   990,   991,   992,   993,
     994,   995,    -1,   473,   474,   475,   476,   477,   478,    -1,
    1004,    -1,  1006,    -1,    -1,  1009,  1010,    -1,   488,   489,
     634,  1115,   636,    27,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   651,    42,   653,
      -1,   655,    -1,    -1,    -1,    -1,    -1,    51,    -1,   519,
    1144,    55,    -1,    -1,    -1,   669,    -1,    -1,   166,   167,
      -1,    -1,    -1,    67,   534,    -1,    -1,    -1,    -1,    73,
     540,    75,    -1,    -1,    78,    -1,    -1,    81,    -1,    -1,
      -1,  1075,  1076,   697,   698,    -1,    -1,  1191,   558,    -1,
      -1,    -1,     4,    -1,    -1,  1189,   340,   341,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   577,   578,   579,
      -1,    -1,   726,   727,    26,    27,  1110,    29,    -1,    31,
      -1,    -1,    -1,    -1,   594,   595,    -1,    -1,    40,    -1,
      42,    -1,    -1,  1127,  1128,    47,    48,  1231,    50,    -1,
      -1,    -1,  1236,    55,    -1,    57,  1240,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    76,    -1,    -1,    79,   638,    81,
     640,   641,  1166,    -1,    -1,    -1,    -1,    -1,  1025,  1026,
    1174,    -1,   977,    -1,    96,    -1,    98,  1181,    -1,   101,
      -1,    -1,    -1,    -1,    -1,   439,    -1,    -1,    -1,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,  1065,    -1,    -1,  1211,    -1,  1213,
      -1,    -1,    -1,    -1,   468,    -1,  1021,  1022,    -1,    -1,
      -1,    -1,   340,   341,    -1,    -1,  1083,    -1,    -1,    -1,
     717,    -1,    -1,    -1,    -1,   722,   723,  1094,  1095,    -1,
      -1,   865,    -1,    -1,    -1,   732,     4,    -1,    -1,    -1,
    1055,  1056,  1057,  1058,  1059,  1060,    -1,    -1,  1063,    -1,
      -1,   748,    -1,  1068,  1069,    -1,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    -1,   900,    -1,    -1,    -1,
     767,    -1,    -1,    -1,    42,    -1,    -1,   774,    -1,    47,
      48,   778,    50,    51,    -1,    -1,    -1,   784,    -1,    -1,
      -1,   788,    -1,    -1,   791,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,   793,    -1,    73,    -1,    -1,    -1,    -1,
      -1,   439,    -1,    81,    -1,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
      98,    -1,    -1,    -1,    -1,  1202,    -1,    -1,    -1,  1206,
     468,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,   846,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,   861,    -1,    -1,    -1,    -1,    52,
      53,   861,    55,    -1,    -1,    58,  1191,  1192,  1193,   876,
      -1,    -1,   879,    -1,    67,    -1,   883,  1021,  1022,    -1,
      73,    -1,    75,    -1,    -1,    78,    -1,    -1,    81,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   901,    -1,    -1,    -1,    -1,   173,   174,    21,    -1,
      -1,    -1,  1056,    26,  1058,  1059,    29,    -1,    -1,  1063,
      -1,    -1,    35,    36,    -1,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    50,   945,    -1,
     940,    -1,   209,    -1,    57,   945,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
     960,   961,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,
      -1,  1115,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,    -1,
     990,   991,   992,   993,   994,   995,   263,     4,    -1,    -1,
    1144,    -1,   269,   270,  1004,   272,  1006,    -1,    -1,  1009,
    1010,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,  1028,    29,    -1,    31,    -1,    -1,    -1,    -1,  1194,
    1195,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      47,    48,    -1,    50,    -1,  1189,    -1,  1191,    55,    -1,
    1215,    -1,  1217,    -1,  1219,    -1,    -1,  1222,  1223,    -1,
      67,    -1,  1227,    -1,  1071,  1072,    73,  1232,    -1,    76,
      -1,  1236,    79,    -1,  1239,  1082,   343,    -1,    -1,    -1,
    1087,     4,    -1,    -1,    -1,    -1,    -1,  1231,    -1,    -1,
    1097,    98,  1236,    -1,   101,    -1,  1240,   364,  1105,  1106,
      -1,    -1,    -1,    26,    -1,   372,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,   385,    42,
     387,    -1,    -1,   390,    47,    48,   393,    50,    -1,   396,
     397,    -1,    -1,   400,    -1,    -1,   403,    -1,    -1,   406,
     407,   408,   409,    -1,    67,   412,    -1,    -1,    -1,   416,
      73,    -1,    -1,   420,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    -1,   938,   939,  1166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1174,    98,    -1,    -1,   101,    -1,
      -1,  1181,    -1,    -1,   958,   959,    -1,    -1,    -1,  1196,
       4,     5,    -1,     7,  1201,    -1,    10,    11,  1205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,   553,   554,   555,   556,
     557,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     938,   939,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    -1,    29,    -1,    31,    -1,
     958,   959,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    -1,    52,
      53,    -1,    55,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    76,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,   639,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,  1158,    98,  1160,  1161,    -1,   656,
     657,    -1,    -1,   660,   661,    -1,   663,   664,   665,    -1,
     667,   668,    -1,   670,   671,   672,   673,   674,   675,   676,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   688,   689,    -1,    -1,    -1,    -1,    -1,   695,   696,
      -1,    -1,   699,   700,   701,    -1,   703,   704,   705,   706,
     707,   708,   709,   710,     4,    -1,   713,   714,   715,   716,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   728,   729,   730,    -1,    25,    26,    -1,    -1,    29,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,   768,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,   785,    79,
    1158,    81,  1160,  1161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     867,   868,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   880,    -1,    -1,    -1,   884,    -1,    -1,
     887,    -1,    -1,    -1,   891,    -1,   893,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   905,    -1,
      -1,   908,   909,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   920,    -1,    -1,   923,    -1,    -1,   926,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   983,   984,   985,    -1,
     987,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1001,    -1,    -1,    -1,  1005,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1020,    -1,    -1,  1023,  1024,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1036,
      -1,    -1,    -1,    -1,  1041,    -1,    -1,  1044,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1061,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1111,    -1,  1113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1121,    -1,  1123,  1124,    -1,    -1,
      -1,    -1,    -1,  1130,    -1,    -1,  1133,  1134,     4,  1136,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     4,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     4,    -1,
      -1,    -1,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     4,    -1,    -1,    -1,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     4,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     4,    -1,    -1,    -1,    -1,    -1,    10,
      11,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     4,    -1,    -1,    -1,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     4,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   110,   115,   119,   447,     0,     5,     7,    54,    74,
     446,   446,   448,   448,   447,     4,     8,    10,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   111,   432,   453,
     454,   432,   112,   116,   447,   120,   447,   100,   100,   113,
     436,   436,    99,    11,   118,   437,   446,   122,   447,   438,
      56,    64,    82,   117,   124,   125,   139,   121,   123,   124,
       8,   439,   440,   448,   448,   448,   448,   126,   126,    23,
     136,   114,   100,   102,   443,     8,     9,    11,    12,    16,
      17,    18,   441,   452,   453,   111,   450,   452,   111,   431,
     454,   450,    43,    44,   127,   131,   140,   140,   448,   447,
     447,   447,   447,   100,   102,   435,   451,   435,   447,   435,
     448,   448,    28,    31,    59,    67,   141,   142,   143,   144,
     145,   145,   432,    11,   433,   444,   453,   442,   436,   436,
     447,   130,   432,   130,   448,   448,   448,   448,    70,   146,
     153,   153,   137,   439,   101,    99,   101,   128,   132,   450,
     450,   450,   450,   448,   436,     4,    21,    26,    29,    35,
      36,    38,    40,    41,    47,    48,    50,    57,    72,    76,
      79,    98,   101,   154,   155,   169,   174,   179,   229,   233,
     234,   245,   253,   261,   272,   287,   289,   295,   311,   323,
     342,   350,   101,   100,   100,   102,   445,   447,   436,   100,
     100,   102,   133,   435,   435,   435,   435,    12,   111,   151,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   447,   436,   447,
     436,   447,   447,     8,   436,   436,   436,   152,   147,   432,
     103,   111,   320,   403,   404,   432,   432,   432,   111,   354,
     404,   432,   432,   432,   432,   432,   432,   432,   432,   181,
     432,    11,   111,   434,   454,   455,   432,   139,   444,   447,
     129,   134,   447,   100,   102,   148,   288,   433,   312,   405,
     447,   273,   235,   156,   351,   447,   170,   230,   175,   246,
     254,   262,   343,   324,   100,   296,   447,   447,   290,   138,
     101,    71,   101,   135,   139,   143,   144,   101,   135,   143,
     144,   436,   100,   102,   291,   100,   403,   100,   102,   274,
     100,   102,   236,   100,   102,   157,   100,   100,   102,   171,
     100,   102,   231,   100,   102,   176,   100,   100,   100,   100,
     102,   344,   100,   102,   325,   436,   100,   102,   297,   291,
     101,   447,   448,   436,   149,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   184,
     436,   436,   151,   150,   292,   314,   276,   237,   158,   353,
     172,   232,   177,   248,   256,   264,   345,   326,    30,    73,
      78,   143,   144,   164,   180,   185,   227,   228,   298,   435,
     101,   143,   144,    27,    42,    51,    55,    73,    81,   101,
     143,   144,   165,   173,   370,   375,   380,   391,    25,    96,
     143,   144,   164,   173,   233,   281,   313,   321,   342,   370,
     143,   144,   165,   173,   228,   234,   245,   253,   261,   272,
     275,   279,   280,   281,   287,   289,   370,   375,   380,    65,
     101,   143,   144,   165,   173,   179,   229,   233,   321,   342,
     370,   375,   384,   391,    20,   101,   143,   144,   159,   164,
      37,   143,   144,   352,   101,   143,   144,   165,   173,   101,
     143,   144,   165,   179,   229,   233,   321,   342,    22,   101,
     143,   144,   165,   173,   178,   143,   144,   165,   173,   227,
     228,   247,   250,   370,   375,   380,   391,    52,    53,    58,
     143,   144,   165,   173,   227,   228,   255,   258,   370,   375,
     385,   387,   389,   391,    46,    77,   143,   144,   165,   173,
     179,   229,   233,   263,   321,   342,   370,   375,   385,   387,
     389,   391,   394,   397,   101,   143,   144,   165,   173,   179,
     229,   233,   391,    45,    60,   101,   143,   144,   165,   173,
     179,   229,   331,   339,   448,   448,   448,   101,    75,   182,
      21,    68,   101,   143,   144,   165,   173,   302,   307,   370,
     448,   448,   448,   448,   448,   448,   293,   294,   448,   448,
     316,   319,   101,   317,   318,   315,   101,   278,   277,   448,
     243,   240,   244,   241,   242,   238,   239,   448,   448,   101,
     436,   436,   436,   436,   436,   448,   101,   182,   249,   252,
     448,   448,   448,   101,   182,   257,   260,   448,   448,   267,
     268,   271,   101,   269,   270,   265,   266,   347,   348,   349,
     346,   447,   447,   327,   328,   329,   330,   450,    85,    87,
      90,   111,   168,   450,   448,   436,   448,   448,   300,   301,
     299,   376,   450,   381,   450,   166,   450,   436,   436,   432,
     432,   436,   436,   436,   436,   436,   436,   436,   450,   436,
     436,   436,   436,   436,   436,   436,   432,    84,    86,    89,
      91,   355,   356,   357,   358,   362,   366,   434,   251,   436,
     436,    17,    94,   111,   388,   427,    18,   111,   386,   427,
     428,    92,    95,   111,   390,   259,   436,   436,   111,   398,
     433,   111,   395,   406,   433,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   332,   340,   436,   436,
     436,   436,   435,   447,   447,   447,   435,   435,   434,   111,
     310,   406,   111,   305,   406,   436,   436,   436,    88,    93,
     111,   378,   435,    88,    93,   111,   383,   392,   168,   371,
     282,   322,   435,   160,   447,   447,   447,   447,   447,   435,
     436,   447,   435,   447,   435,   447,   447,   447,   435,   436,
     435,   399,   435,   396,   435,   448,   407,   100,   100,   183,
     308,   447,   303,   447,   447,   447,   377,   447,   447,   382,
     100,   102,   393,   167,   100,   102,   372,   100,   102,   283,
     325,   100,   102,   161,   359,   363,   435,   367,   400,   435,
     448,   406,   405,   436,   436,   100,   102,   186,   100,   100,
     102,   304,   435,   435,   436,   435,   436,   436,   436,   436,
     100,   102,   360,   100,   102,   364,   100,   102,   368,   433,
     396,   334,   334,   187,   436,   436,   436,   196,   373,   284,
      83,   162,   436,   436,   436,   401,   179,   229,   233,   333,
     391,   341,   188,   189,   202,   203,   216,   217,   314,   306,
      33,    34,   101,   143,   144,   225,   226,   101,   143,   144,
     101,   143,   144,   165,   173,   233,   370,   448,   101,   361,
     365,   369,   400,   336,   337,   338,   101,   335,   101,   101,
      39,    49,    61,    62,    66,    69,   178,   190,   191,   193,
     197,   211,   213,   214,    32,   205,    24,   219,   309,    27,
      51,   101,   143,   144,   228,   374,   379,   384,   385,   387,
     391,   448,   448,   286,   285,    88,    93,   111,   163,   101,
     227,   228,   374,   379,   385,   387,   391,   394,   101,   227,
     228,   391,   394,   101,   182,   227,   228,   374,   379,   385,
     387,   436,   436,   436,   436,   448,   448,   448,   448,   448,
     448,   182,   436,   448,   436,   448,   218,   101,   448,   448,
     436,   450,   450,   436,   436,   447,   447,   435,   436,   436,
     436,   111,   192,   427,   194,   450,   111,   408,   409,   410,
     198,   450,   402,   450,    88,    93,   111,   215,   436,   206,
     450,   204,   220,   432,   219,   378,   383,   435,   435,   435,
     447,   100,   102,   195,   435,   103,   411,   412,    14,   414,
     415,   100,   102,   199,   100,   102,   212,   447,   447,   435,
     100,   102,   207,   205,   100,   102,   221,   435,   435,   436,
     436,   433,   413,   103,   416,   436,   436,   436,   436,   436,
     436,   436,   196,   419,   411,   415,   417,   433,   200,   196,
     208,   222,   101,   104,   418,   419,    97,   101,   143,   144,
     201,   225,   226,   101,    80,   101,   143,   144,   164,   173,
     209,    63,   101,   143,   144,   164,   173,   223,     5,   449,
     412,   448,   448,   448,   420,   433,   450,    16,    17,    18,
     111,   210,   429,   430,   111,   224,   428,   449,   449,   435,
     435,   447,   435,   447,   105,   106,   449,    85,   421,   426,
     449,   449,   107,   103,   449,   449,   108,    14,   422,   423,
     449,   424,   103,   423,   433,   449,   425,   433,   449,   103,
     449,   433
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
     176,   176,   177,   177,   177,   177,   177,   177,   178,   180,
     179,   181,   183,   182,   184,   185,   184,   184,   184,   184,
     184,   184,   186,   186,   187,   188,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   190,   191,   192,
     192,   193,   194,   195,   195,   196,   196,   196,   196,   196,
     197,   198,   199,   199,   200,   200,   200,   200,   200,   200,
     201,   203,   202,   204,   204,   205,   206,   207,   207,   208,
     208,   208,   208,   208,   208,   209,   210,   210,   211,   212,
     212,   213,   214,   215,   215,   215,   217,   216,   218,   218,
     219,   220,   221,   221,   222,   222,   222,   222,   222,   222,
     223,   224,   224,   225,   226,   227,   228,   230,   229,   231,
     231,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     233,   233,   233,   233,   233,   233,   233,   233,   235,   234,
     236,   236,   237,   238,   237,   237,   239,   237,   237,   237,
     237,   237,   237,   240,   237,   241,   237,   242,   237,   243,
     237,   244,   237,   246,   247,   245,   248,   249,   248,   248,
     250,   251,   248,   248,   252,   248,   248,   248,   248,   248,
     248,   248,   254,   255,   253,   256,   257,   256,   256,   258,
     259,   256,   256,   256,   260,   256,   256,   256,   256,   256,
     256,   256,   256,   262,   263,   261,   264,   265,   264,   264,
     266,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   267,   264,   268,   264,   269,   264,   270,   264,   271,
     264,   273,   272,   274,   275,   274,   276,   277,   276,   276,
     276,   276,   276,   276,   276,   276,   278,   276,   279,   279,
     280,   280,   280,   280,   280,   280,   280,   282,   281,   283,
     283,   284,   285,   284,   284,   284,   284,   284,   286,   284,
     288,   287,   290,   289,   291,   291,   292,   293,   292,   292,
     294,   292,   292,   292,   292,   292,   292,   296,   295,   297,
     297,   298,   299,   298,   298,   298,   298,   298,   300,   298,
     301,   298,   303,   302,   304,   304,   305,   305,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   308,   309,
     307,   310,   310,   312,   313,   311,   314,   315,   314,   314,
     314,   314,   314,   316,   314,   317,   314,   318,   314,   319,
     314,   320,   320,   322,   321,   324,   323,   325,   325,   326,
     326,   326,   326,   326,   327,   326,   328,   326,   329,   326,
     330,   326,   332,   333,   331,   334,   335,   334,   336,   334,
     337,   334,   338,   334,   340,   341,   339,   343,   342,   344,
     344,   345,   346,   345,   345,   345,   345,   345,   347,   345,
     348,   345,   349,   345,   351,   352,   350,   353,   353,   353,
     353,   354,   354,   355,   355,   356,   356,   356,   357,   359,
     358,   360,   360,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   363,   362,   364,   364,   365,   365,   365,   365,
     365,   367,   366,   368,   368,   369,   369,   369,   369,   369,
     369,   369,   369,   371,   370,   372,   372,   373,   373,   373,
     374,   376,   377,   375,   378,   378,   378,   379,   381,   382,
     380,   383,   383,   383,   384,   385,   386,   386,   387,   388,
     388,   388,   389,   390,   390,   390,   392,   391,   393,   393,
     394,   395,   395,   396,   396,   397,   399,   398,   398,   401,
     400,   400,   402,   403,   404,   405,   405,   407,   406,   409,
     408,   410,   408,   408,   411,   412,   413,   413,   414,   415,
     416,   416,   417,   418,   418,   419,   419,   420,   421,   422,
     423,   424,   424,   425,   425,   426,   427,   428,   428,   429,
     429,   430,   430,   431,   431,   432,   432,   433,   433,   434,
     434,   434,   435,   435,   436,   436,   436,   438,   437,   439,
     440,   440,   441,   441,   441,   442,   442,   443,   443,   444,
     444,   445,   445,   446,   446,   447,   447,   448,   449,   449,
     451,   450,   450,   452,   452,   452,   452,   452,   452,   452,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   454,   455
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
       1,     4,     0,     2,     2,     2,     2,     2,     4,     0,
       8,     1,     0,     5,     0,     0,     4,     2,     2,     2,
       2,     2,     1,     4,     1,     1,     1,     1,     0,     2,
       2,     2,     2,     2,     2,     3,     4,     0,     4,     2,
       1,     5,     1,     1,     4,     0,     2,     2,     2,     2,
       5,     1,     1,     4,     0,     2,     2,     2,     2,     2,
       4,     0,     4,     0,     3,     4,     1,     1,     4,     0,
       2,     2,     2,     2,     2,     4,     2,     1,     4,     1,
       4,     4,     4,     2,     2,     1,     0,     3,     0,     2,
       5,     1,     1,     4,     0,     2,     2,     2,     2,     2,
       4,     2,     1,     4,     4,     4,     4,     0,     5,     1,
       4,     0,     2,     2,     2,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       1,     4,     0,     0,     4,     2,     0,     4,     2,     2,
       2,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     0,     9,     0,     0,     4,     2,
       0,     0,     5,     2,     0,     4,     2,     2,     2,     2,
       2,     2,     0,     0,     9,     0,     0,     4,     2,     0,
       0,     5,     2,     2,     0,     4,     2,     2,     2,     2,
       2,     2,     2,     0,     0,     9,     0,     0,     4,     2,
       0,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     5,     1,     0,     5,     0,     0,     4,     2,
       2,     2,     2,     2,     2,     2,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     1,
       4,     0,     0,     4,     2,     2,     2,     2,     0,     4,
       0,     5,     0,     5,     1,     4,     0,     0,     4,     2,
       0,     4,     2,     2,     2,     2,     2,     0,     5,     1,
       4,     0,     0,     4,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     5,     1,     4,     2,     1,     0,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     0,
       9,     2,     1,     0,     0,     9,     0,     0,     4,     2,
       2,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     2,     1,     0,     5,     0,     5,     1,     4,     0,
       2,     2,     2,     2,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     0,     8,     0,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     0,     8,     0,     5,     1,
       4,     0,     0,     4,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     0,     9,     0,     2,     2,
       4,     2,     1,     1,     2,     1,     1,     1,     3,     0,
       4,     1,     4,     0,     2,     3,     2,     2,     2,     2,
       2,     2,     0,     4,     1,     4,     0,     2,     3,     2,
       2,     0,     4,     1,     4,     0,     3,     2,     2,     2,
       2,     2,     2,     0,     5,     1,     4,     0,     2,     2,
       4,     0,     0,     6,     2,     2,     1,     4,     0,     0,
       6,     2,     2,     1,     4,     4,     2,     1,     4,     2,
       2,     1,     4,     2,     2,     1,     0,     5,     1,     4,
       3,     2,     2,     3,     1,     3,     0,     3,     2,     0,
       4,     1,     1,     2,     2,     0,     2,     0,     3,     0,
       2,     0,     2,     1,     3,     2,     0,     2,     3,     2,
       0,     2,     2,     0,     2,     0,     6,     5,     5,     5,
       4,     0,     2,     0,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     2,
       2,     1,     2,     4,     0,     2,     2,     0,     4,     2,
       0,     1,     0,     2,     3,     0,     5,     1,     4,     0,
       3,     2,     5,     1,     1,     0,     2,     2,     0,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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

    case 187: /* type_stmtsep  */

      { if (read_all) {
                yang_delete_type(module, ((*yyvaluep).type));
              }
            }

        break;

    case 198: /* pattern_arg_str  */

      { free(((*yyvaluep).str)); }

        break;

    case 276: /* choice_opt_stmt  */

      { if (read_all && ((*yyvaluep).nodes).choice.s) { free(((*yyvaluep).nodes).choice.s); } }

        break;

    case 353: /* deviation_opt_stmt  */

      { if (read_all) {
                ly_set_free(((*yyvaluep).nodes).deviation->dflt_check);
                free(((*yyvaluep).nodes).deviation);
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
                                    if (!((yyvsp[0].nodes).node.flag & LYS_TYPE_DEF)) {
                                      LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "type", "typedef");
                                      YYABORT;
                                    }
                                    actual = tpdf_parent;

                                    /* check default value */
                                    if (unres_schema_add_str(trg, unres, &(yyvsp[0].nodes).node.ptr_tpdf->type, UNRES_TYPE_DFLT, (yyvsp[0].nodes).node.ptr_tpdf->dflt) == -1) {
                                      YYABORT;
                                    }
                                  }
                                }

    break;

  case 131:

    { if (read_all) {
                                        tpdf_parent = actual;
                                        if (!(actual = yang_read_typedef(trg, actual, s))) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                        actual_type = TYPEDEF_KEYWORD;
                                      }
                                    }

    break;

  case 132:

    { if (read_all && !(actual = yang_read_type(trg, actual, s, actual_type))) {
                                                       YYABORT;
                                                     }
                                                     s = NULL;
                                                   }

    break;

  case 134:

    { (yyval.nodes).node.ptr_tpdf = actual;
                        (yyval.nodes).node.flag = 0;
                      }

    break;

  case 135:

    { if (read_all && ((yyvsp[0].nodes).node.flag & LYS_TYPE_DEF)) {
                       LOGVAL(LYE_TOOMANY, LY_VLOG_NONE, (yyvsp[0].nodes).node.ptr_tpdf, "type", "typedef");
                       YYABORT;
                     }
                   }

    break;

  case 136:

    { if (read_all) {
                   actual = (yyvsp[-3].nodes).node.ptr_tpdf;
                   actual_type = TYPEDEF_KEYWORD;
                   (yyvsp[-3].nodes).node.flag |= LYS_TYPE_DEF;
                   (yyval.nodes) = (yyvsp[-3].nodes);
                   if (unres_schema_add_node(trg, unres, &(yyvsp[-3].nodes).node.ptr_tpdf->type, UNRES_TYPE_DER_TPDF, tpdf_parent) == -1) {
                     lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-3].nodes).node.ptr_tpdf->type.der)->name);
                     free((yyvsp[-3].nodes).node.ptr_tpdf->type.der);
                     (yyvsp[-3].nodes).node.ptr_tpdf->type.der = NULL;
                     YYABORT;
                   }
                 }
               }

    break;

  case 137:

    { if (read_all && yang_read_units(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, TYPEDEF_KEYWORD)) {YYABORT;} s = NULL; }

    break;

  case 138:

    { if (read_all && yang_read_default(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, TYPEDEF_KEYWORD)) {
                                    YYABORT;
                                  }
                                  s = NULL;
                                  (yyval.nodes) = (yyvsp[-1].nodes);
                                }

    break;

  case 139:

    { if (read_all) {
                                   if (yang_check_flags((uint16_t*)&(yyvsp[-1].nodes).node.ptr_tpdf->flags, LYS_STATUS_MASK, "status", "typedef", (yyvsp[0].i), 0)) {
                                     YYABORT;
                                   }
                                 }
                               }

    break;

  case 140:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, "typedef")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 141:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_tpdf, s, "typedef")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 144:

    { if (read_all) {
                          (yyval.type) = actual;
                        }
                      }

    break;

  case 148:

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

  case 149:

    { if (read_all && yang_read_require_instance(actual, (yyvsp[0].i))) {
                                                 YYABORT;
                                               }
                                             }

    break;

  case 150:

    { if (read_all) {
                                     /* leafref_specification */
                                     if (yang_read_leafref_path(trg, actual, s)) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }
                                 }

    break;

  case 151:

    { if (read_all) {
                                     /* identityref_specification */
                                     if (yang_read_identyref(trg, actual, s , unres)) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }
                                 }

    break;

  case 153:

    { if (!read_all) {
                                        size_arrays->node[(yyvsp[-1].uint)].pattern++; /* count of pattern*/
                                      }
                                    }

    break;

  case 156:

    { if (read_all) {
                                                        actual = (yyvsp[-2].v);
                                                      } else {
                                                        size_arrays->node[(yyvsp[-3].uint)].uni++; /* count of union*/
                                                      }
                                                    }

    break;

  case 157:

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

  case 158:

    { if (read_all && yang_read_fraction(actual, (yyvsp[-1].uint))) {
                                  YYABORT;
                                }
                              }

    break;

  case 159:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 160:

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

  case 161:

    { actual = (yyvsp[-2].v);
                                                                    actual_type = TYPE_KEYWORD;
                                                                  }

    break;

  case 162:

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

  case 165:

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

  case 166:

    { if (read_all && yang_read_message(trg, actual, s, (yyvsp[-1].str), ERROR_MESSAGE_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 167:

    { if (read_all && yang_read_message(trg, actual, s, (yyvsp[-1].str), ERROR_APP_TAG_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 168:

    { if (read_all && yang_read_description(trg, actual, s, (yyvsp[-1].str))) {
                                           YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 169:

    { if (read_all && yang_read_reference(trg, actual, s, (yyvsp[-1].str))) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     }

    break;

  case 170:

    { if (read_all) {
                                                                          if (yang_read_pattern(trg, actual, (yyvsp[-2].str), (yyvsp[-1].ch))) {
                                                                            YYABORT;
                                                                          }
                                                                          actual = yang_type;
                                                                          actual_type = TYPE_KEYWORD;
                                                                        }
                                                                      }

    break;

  case 171:

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

  case 172:

    { (yyval.ch) = 0x06; }

    break;

  case 173:

    { (yyval.ch) = (yyvsp[-1].ch); }

    break;

  case 174:

    { (yyval.ch) = 0x06; /* ACK */ }

    break;

  case 175:

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

  case 176:

    { if (read_all && yang_read_message(trg, actual, s, "pattern", ERROR_MESSAGE_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 177:

    { if (read_all && yang_read_message(trg, actual, s, "pattern", ERROR_APP_TAG_KEYWORD)) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 178:

    { if (read_all && yang_read_description(trg, actual, s, "pattern")) {
                                           YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 179:

    { if (read_all && yang_read_reference(trg, actual, s, "pattern")) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     }

    break;

  case 180:

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

  case 181:

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

  case 185:

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

  case 186:

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

  case 189:

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

  case 190:

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

  case 191:

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

  case 192:

    { if (read_all) {
                                   if (yang_check_flags((uint16_t*)&((struct lys_type_enum *)actual)->flags, LYS_STATUS_MASK, "status", "enum", (yyvsp[0].i), 1)) {
                                     YYABORT;
                                   }
                                 }
                               }

    break;

  case 193:

    { if (read_all && yang_read_description(trg, actual, s, "enum")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 194:

    { if (read_all && yang_read_reference(trg, actual, s, "enum")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 195:

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

  case 196:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 197:

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

  case 198:

    { actual = (yyvsp[-1].v);
                                                        actual_type = RANGE_KEYWORD;
                                                      }

    break;

  case 202:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 203:

    { (yyval.i) = 1; }

    break;

  case 204:

    { (yyval.i) = -1; }

    break;

  case 205:

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

  case 206:

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

  case 210:

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

  case 211:

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

  case 214:

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

  case 215:

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

  case 216:

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

  case 217:

    { if (read_all) {
                                  if (yang_check_flags((uint16_t*)&((struct lys_type_bit *)actual)->flags, LYS_STATUS_MASK, "status", "bit", (yyvsp[0].i), 1)) {
                                    YYABORT;
                                  }
                                }
                              }

    break;

  case 218:

    { if (read_all && yang_read_description(trg, actual, s, "bit")) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }

    break;

  case 219:

    { if (read_all && yang_read_reference(trg, actual, s, "bit")) {
                                     YYABORT;
                                   }
                                   s = NULL;
                                 }

    break;

  case 220:

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

  case 221:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 222:

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

  case 227:

    { if (read_all) {
                                                           if (!(actual = yang_read_node(trg,actual,s,LYS_GROUPING,sizeof(struct lys_node_grp)))) {YYABORT;}
                                                           s=NULL;
                                                         }
                                                       }

    break;

  case 231:

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

  case 232:

    { if (!read_all) {
                                            if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "grouping", (yyvsp[0].i), 0)) {
                                              YYABORT;
                                            }
                                          }
                                        }

    break;

  case 233:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).grouping, s, "grouping")) {
                                            YYABORT;
                                          }
                                          s = NULL;
                                        }

    break;

  case 234:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).grouping, s, "grouping")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 235:

    { actual = (yyvsp[-2].nodes).grouping; actual_type = GROUPING_KEYWORD; }

    break;

  case 236:

    { if (read_all) {
                                                actual = (yyvsp[-2].nodes).grouping;
                                                actual_type = GROUPING_KEYWORD;
                                              } else {
                                                size_arrays->node[(yyvsp[-2].nodes).index].tpdf++;
                                              }
                                            }

    break;

  case 237:

    { actual = (yyvsp[-2].nodes).grouping; actual_type = GROUPING_KEYWORD; }

    break;

  case 238:

    { actual = (yyvsp[-2].nodes).grouping; actual_type = GROUPING_KEYWORD; }

    break;

  case 239:

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

  case 248:

    { if (read_all) {
                                                             if (!(actual = yang_read_node(trg,actual,s,LYS_CONTAINER,sizeof(struct lys_node_container)))) {YYABORT;}
                                                             data_node = actual;
                                                             s=NULL;
                                                           }
                                                         }

    break;

  case 252:

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

  case 253:

    { actual = (yyvsp[-1].nodes).container; actual_type = CONTAINER_KEYWORD; }

    break;

  case 255:

    { if (read_all) {
                                            if (yang_read_if_feature(trg, (yyvsp[-1].nodes).container, s, unres, CONTAINER_KEYWORD)) {YYABORT;}
                                            s=NULL;
                                          } else {
                                            size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                          }
                                        }

    break;

  case 256:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).container;
                                      actual_type = CONTAINER_KEYWORD;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                    }
                                  }

    break;

  case 258:

    { if (read_all && yang_read_presence(trg, (yyvsp[-1].nodes).container, s)) {YYABORT;} s=NULL; }

    break;

  case 259:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "container", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 260:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "container", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 261:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).container, s, "container")) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 262:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).container, s, "container")) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }

    break;

  case 263:

    { actual = (yyvsp[-1].nodes).container;
                                        actual_type = CONTAINER_KEYWORD;
                                        data_node = actual;
                                      }

    break;

  case 265:

    { actual = (yyvsp[-1].nodes).container;
                                      actual_type = CONTAINER_KEYWORD;
                                      data_node = actual;
                                    }

    break;

  case 267:

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

  case 269:

    { if (read_all) {
                                                 actual = (yyvsp[-1].nodes).container;
                                                 actual_type = CONTAINER_KEYWORD;
                                               } else {
                                                 size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                               }
                                             }

    break;

  case 271:

    { actual = (yyvsp[-1].nodes).container;
                                        actual_type = CONTAINER_KEYWORD;
                                        data_node = actual;
                                      }

    break;

  case 273:

    { if (read_all) {
                                                   if (!(actual = yang_read_node(trg,actual,s,LYS_LEAF,sizeof(struct lys_node_leaf)))) {YYABORT;}
                                                   data_node = actual;
                                                   s=NULL;
                                                 }
                                               }

    break;

  case 274:

    { if (read_all) {
                                  if (!((yyvsp[0].nodes).node.flag & LYS_TYPE_DEF)) {
                                    LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_leaf, "type", "leaf");
                                    YYABORT;
                                  }
                                  if ((yyvsp[0].nodes).node.ptr_leaf->dflt && ((yyvsp[0].nodes).node.ptr_leaf->flags & LYS_MAND_TRUE)) {
                                    /* RFC 6020, 7.6.4 - default statement must not with mandatory true */
                                    LOGVAL(LYE_INCHILDSTMT, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_leaf, "mandatory", "leaf");
                                    LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL, "The \"mandatory\" statement is forbidden on leaf with \"default\".");
                                    YYABORT;
                                  }
                                  if (unres_schema_add_str(trg, unres, &(yyvsp[0].nodes).node.ptr_leaf->type, UNRES_TYPE_DFLT, (yyvsp[0].nodes).node.ptr_leaf->dflt) == -1) {
                                    YYABORT;
                                  }
                                }
                              }

    break;

  case 276:

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

  case 277:

    { actual = (yyvsp[-1].nodes).node.ptr_leaf; actual_type = LEAF_KEYWORD; }

    break;

  case 279:

    { if (read_all) {
                                         if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, unres, LEAF_KEYWORD)) {YYABORT;}
                                         s=NULL;
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                       }
                                     }

    break;

  case 280:

    { if (read_all && ((yyvsp[0].nodes).node.flag & LYS_TYPE_DEF)) {
                         LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_leaf, "type", "leaf");
                         YYABORT;
                       }
                     }

    break;

  case 281:

    { if (read_all) {
                     actual = (yyvsp[-2].nodes).node.ptr_leaf;
                     actual_type = LEAF_KEYWORD;
                     (yyvsp[-2].nodes).node.flag |= LYS_TYPE_DEF;
                     if (unres_schema_add_node(trg, unres, &(yyvsp[-2].nodes).node.ptr_leaf->type, UNRES_TYPE_DER,(struct lys_node *)(yyvsp[-2].nodes).node.ptr_leaf) == -1) {
                       lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-2].nodes).node.ptr_leaf->type.der)->name);
                       free((yyvsp[-2].nodes).node.ptr_leaf->type.der);
                       (yyvsp[-2].nodes).node.ptr_leaf->type.der = NULL;
                       YYABORT;
                     }
                   }
                 }

    break;

  case 282:

    { (yyval.nodes) = (yyvsp[-4].nodes);}

    break;

  case 283:

    { if (read_all && yang_read_units(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, LEAF_KEYWORD)) {YYABORT;} s = NULL; }

    break;

  case 284:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).node.ptr_leaf;
                                   actual_type = LEAF_KEYWORD;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                 }
                               }

    break;

  case 286:

    { if (read_all && yang_read_default(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, LEAF_KEYWORD)) {YYABORT;}
                                    s = NULL;
                                  }

    break;

  case 287:

    { if (!read_all) {
                                               if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "leaf", (yyvsp[0].i), 0)) {
                                                 YYABORT;
                                               }
                                             }
                                           }

    break;

  case 288:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_MAND_MASK, "mandatory", "leaf", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 289:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "leaf", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        }
                                      }

    break;

  case 290:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, "leaf")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 291:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_leaf, s, "leaf")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 292:

    { if (read_all) {
                                                               if (!(actual = yang_read_node(trg,actual,s,LYS_LEAFLIST,sizeof(struct lys_node_leaflist)))) {YYABORT;}
                                                               data_node = actual;
                                                               s=NULL;
                                                             }
                                                           }

    break;

  case 293:

    { if (read_all) {
                                             int i;

                                             if ((yyvsp[0].nodes).node.ptr_leaflist->flags & LYS_CONFIG_R) {
                                               /* RFC 6020, 7.7.5 - ignore ordering when the list represents state data
                                                * ignore oredering MASK - 0x7F
                                                */
                                               (yyvsp[0].nodes).node.ptr_leaflist->flags &= 0x7F;
                                             }
                                           if ((yyvsp[0].nodes).node.ptr_leaflist->max && (yyvsp[0].nodes).node.ptr_leaflist->min > (yyvsp[0].nodes).node.ptr_leaflist->max) {
                                             LOGVAL(LYE_SPEC, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_leaflist, "\"min-elements\" is bigger than \"max-elements\".");
                                             YYABORT;
                                           }
                                             if (!((yyvsp[0].nodes).node.flag & LYS_TYPE_DEF)) {
                                               LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_leaflist, "type", "leaf-list");
                                               YYABORT;
                                             }
                                             if ((yyvsp[0].nodes).node.ptr_leaflist->dflt_size && (yyvsp[0].nodes).node.ptr_leaflist->min) {
                                               LOGVAL(LYE_INCHILDSTMT, LY_VLOG_NONE, NULL, "min-elements", "leaf-list");
                                               LOGVAL(LYE_SPEC, LY_VLOG_NONE, NULL,
                                                      "The \"min-elements\" statement with non-zero value is forbidden on leaf-lists with the \"default\" statement.");
                                               YYABORT;
                                             }

                                             /* check default value (if not defined, there still could be some restrictions
                                              * that need to be checked against a default value from a derived type) */
                                             for (i = 0; i < (yyvsp[0].nodes).node.ptr_leaflist->dflt_size; i++) {
                                               if (unres_schema_add_str(module, unres, &(yyvsp[0].nodes).node.ptr_leaflist->type, UNRES_TYPE_DFLT, (yyvsp[0].nodes).node.ptr_leaflist->dflt[i]) == -1) {
                                                 YYABORT;
                                               }
                                             }
                                           }
                                         }

    break;

  case 295:

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

  case 296:

    { actual = (yyvsp[-1].nodes).node.ptr_leaflist; actual_type = LEAF_LIST_KEYWORD; }

    break;

  case 298:

    { if (read_all) {
                                            if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, unres, LEAF_LIST_KEYWORD)) {YYABORT;}
                                            s=NULL;
                                          } else {
                                            size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                          }
                                        }

    break;

  case 299:

    { if (read_all && ((yyvsp[0].nodes).node.flag & LYS_TYPE_DEF)) {
                            LOGVAL(LYE_TOOMANY, LY_VLOG_LYS, (yyvsp[0].nodes).node.ptr_leaflist, "type", "leaf-list");
                            YYABORT;
                          }
                        }

    break;

  case 300:

    { if (read_all) {
                   actual = (yyvsp[-2].nodes).node.ptr_leaflist;
                   actual_type = LEAF_LIST_KEYWORD;
                   (yyvsp[-2].nodes).node.flag |= LYS_TYPE_DEF;
                   if (unres_schema_add_node(trg, unres, &(yyvsp[-2].nodes).node.ptr_leaflist->type, UNRES_TYPE_DER, (struct lys_node *)(yyvsp[-2].nodes).node.ptr_leaflist) == -1) {
                     lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-2].nodes).node.ptr_leaflist->type.der)->name);
                     free((yyvsp[-2].nodes).node.ptr_leaflist->type.der);
                     (yyvsp[-2].nodes).node.ptr_leaflist->type.der = NULL;
                     YYABORT;
                   }
                 }
               }

    break;

  case 301:

    { (yyval.nodes) = (yyvsp[-4].nodes); }

    break;

  case 302:

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

  case 303:

    { if (read_all && yang_read_units(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, LEAF_LIST_KEYWORD)) {YYABORT;} s = NULL; }

    break;

  case 304:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).node.ptr_leaflist;
                                      actual_type = LEAF_LIST_KEYWORD;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                    }
                                  }

    break;

  case 306:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "leaf-list", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 307:

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

  case 308:

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

  case 309:

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

  case 310:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "leaf-list", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 311:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, "leaf-list")) {
                                             YYABORT;
                                           }
                                           s = NULL;
                                         }

    break;

  case 312:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_leaflist, s, "leaf-list")) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }

    break;

  case 313:

    { if (read_all) {
                                                   if (!(actual = yang_read_node(trg,actual,s,LYS_LIST,sizeof(struct lys_node_list)))) {YYABORT;}
                                                   data_node = actual;
                                                   s=NULL;
                                                 }
                                               }

    break;

  case 314:

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

  case 316:

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

  case 317:

    { actual = (yyvsp[-1].nodes).node.ptr_list; actual_type = LIST_KEYWORD; }

    break;

  case 319:

    { if (read_all) {
                                       if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_list, s, unres, LIST_KEYWORD)) {YYABORT;}
                                       s=NULL;
                                     } else {
                                       size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                     }
                                   }

    break;

  case 320:

    { if (read_all) {
                                 actual = (yyvsp[-1].nodes).node.ptr_list;
                                 actual_type = LIST_KEYWORD;
                               } else {
                                 size_arrays->node[(yyvsp[-1].nodes).index].must++;
                               }
                             }

    break;

  case 322:

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

  case 323:

    { if (read_all) {
                                   (yyvsp[-1].nodes).node.ptr_list->unique[(yyvsp[-1].nodes).node.ptr_list->unique_size++].expr = (const char **)s;
                                   (yyval.nodes) = (yyvsp[-1].nodes);
                                   s = NULL;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].unique++;
                                 }
                               }

    break;

  case 324:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "list", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 325:

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

  case 326:

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

  case 327:

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

  case 328:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "list", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 329:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_list, s, "list")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 330:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_list, s, "list")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 331:

    { if (read_all) {
                                            actual = (yyvsp[-1].nodes).node.ptr_list;
                                            actual_type = LIST_KEYWORD;
                                          } else {
                                            size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                          }
                                        }

    break;

  case 333:

    { actual = (yyvsp[-1].nodes).node.ptr_list;
                                   actual_type = LIST_KEYWORD;
                                   data_node = actual;
                                 }

    break;

  case 335:

    { actual = (yyvsp[-1].nodes).node.ptr_list;
                                 actual_type = LIST_KEYWORD;
                                 data_node = actual;
                               }

    break;

  case 337:

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

  case 339:

    { actual = (yyvsp[-1].nodes).node.ptr_list;
                                   actual_type = LIST_KEYWORD;
                                   (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                   data_node = actual;
                                 }

    break;

  case 340:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 341:

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

  case 344:

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

  case 346:

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

  case 347:

    { actual = (yyvsp[-1].nodes).choice.ptr_choice; actual_type = CHOICE_KEYWORD; }

    break;

  case 348:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 349:

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

  case 350:

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

  case 351:

    { if (!read_all) {
                                           if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config", "choice", (yyvsp[0].i), 0)) {
                                             YYABORT;
                                           }
                                         } else {
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                         }
                                       }

    break;

  case 352:

    { if (!read_all) {
                                      if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_MAND_MASK, "mandatory", "choice", (yyvsp[0].i), 0)) {
                                        YYABORT;
                                      }
                                    } else {
                                      (yyval.nodes) = (yyvsp[-1].nodes);
                                    }
                                  }

    break;

  case 353:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "choice", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        } else {
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                        }
                                      }

    break;

  case 354:

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

  case 355:

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

  case 356:

    { actual = (yyvsp[-1].nodes).choice.ptr_choice;
                                            actual_type = CHOICE_KEYWORD;
                                            data_node = actual;
                                            if (read_all && data_node->parent && (data_node->parent->nodetype == LYS_GROUPING)) {
                                              data_node = NULL;
                                            }
                                          }

    break;

  case 357:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 366:

    { if (read_all && trg->version < 2 ) {
                     LOGVAL(LYE_INSTMT, LY_VLOG_NONE, NULL, "choice");
                     YYABORT;
                   }
                 }

    break;

  case 367:

    { if (read_all) {
                                                   if (!(actual = yang_read_node(trg,actual,s,LYS_CASE,sizeof(struct lys_node_case)))) {YYABORT;}
                                                   data_node = actual;
                                                   s=NULL;
                                                 }
                                               }

    break;

  case 371:

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

  case 372:

    { actual = (yyvsp[-1].nodes).cs; actual_type = CASE_KEYWORD; }

    break;

  case 374:

    { if (read_all) {
                                       if (yang_read_if_feature(trg, (yyvsp[-1].nodes).cs, s, unres, CASE_KEYWORD)) {YYABORT;}
                                       s=NULL;
                                     } else {
                                       size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                     }
                                   }

    break;

  case 375:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "case", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 376:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).cs, s, "case")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 377:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).cs, s, "case")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 378:

    { actual = (yyvsp[-1].nodes).cs;
                                   actual_type = CASE_KEYWORD;
                                   data_node = actual;
                                 }

    break;

  case 380:

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

  case 382:

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

  case 386:

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

  case 387:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).node.ptr_anydata;
                                   actual_type = (yyvsp[-1].nodes).node.flag;
                                 }
                               }

    break;

  case 389:

    { if (read_all) {
                                         if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_anydata, s, unres, (yyvsp[-1].nodes).node.flag)) {YYABORT;}
                                         s=NULL;
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                       }
                                     }

    break;

  case 390:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).node.ptr_anydata;
                                   actual_type = (yyvsp[-1].nodes).node.flag;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                 }
                               }

    break;

  case 392:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_CONFIG_MASK, "config",
                                                               (actual_type == ANYXML_KEYWORD) ? "anyxml" : "anydata", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        }
                                      }

    break;

  case 393:

    { if (!read_all) {
                                             if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_MAND_MASK, "mandatory",
                                                                  (actual_type == ANYXML_KEYWORD) ? "anyxml" : "anydata", (yyvsp[0].i), 0)) {
                                               YYABORT;
                                             }
                                           }
                                         }

    break;

  case 394:

    { if (!read_all) {
                                          if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status",
                                                               (actual_type == ANYXML_KEYWORD) ? "anyxml" : "anydata", (yyvsp[0].i), 0)) {
                                            YYABORT;
                                          }
                                        }
                                      }

    break;

  case 395:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_anydata, s, ((yyvsp[-1].nodes).node.flag == ANYXML_KEYWORD) ? "anyxml" : "anydata")) {
                                          YYABORT;
                                        }
                                        s = NULL;
                                      }

    break;

  case 396:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_anydata, s, ((yyvsp[-1].nodes).node.flag == ANYXML_KEYWORD) ? "anyxml" : "anydata")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 397:

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

  case 398:

    { if (read_all) {
                        if (unres_schema_add_node(trg, unres, actual, UNRES_USES, NULL) == -1) {
                          YYABORT;
                        }
                      }
                    }

    break;

  case 401:

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

  case 402:

    { actual = (yyvsp[-1].nodes).uses.ptr_uses; actual_type = USES_KEYWORD; }

    break;

  case 404:

    { if (read_all) {
                                       if (yang_read_if_feature(trg, (yyvsp[-1].nodes).uses.ptr_uses, s, unres, USES_KEYWORD)) {YYABORT;}
                                       s=NULL;
                                     } else {
                                       size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                     }
                                   }

    break;

  case 405:

    { if (!read_all) {
                                        if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "uses", (yyvsp[0].i), 0)) {
                                          YYABORT;
                                        }
                                      }
                                    }

    break;

  case 406:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).uses.ptr_uses, s, "uses")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 407:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).uses.ptr_uses, s, "uses")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 408:

    { if (read_all) {
                                   actual = (yyvsp[-1].nodes).uses.ptr_uses;
                                   actual_type = USES_KEYWORD;
                                 } else {
                                   size_arrays->node[(yyvsp[-1].nodes).index].refine++;
                                 }
                               }

    break;

  case 410:

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

  case 412:

    { if (read_all) {
                                                   if (!(actual = yang_read_refine(trg, actual, s))) {
                                                     YYABORT;
                                                   }
                                                   s = NULL;
                                                 }
                                               }

    break;

  case 418:

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

  case 419:

    { if (read_all) {
                                         actual = (yyvsp[-2].nodes).refine;
                                         actual_type = REFINE_KEYWORD;
                                       } else {
                                         size_arrays->node[(yyvsp[-2].nodes).index].must++;
                                       }
                                     }

    break;

  case 420:

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

  case 421:

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

  case 422:

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

  case 423:

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

  case 424:

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

  case 425:

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

  case 426:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).refine, s, "refine")) {
                                                YYABORT;
                                              }
                                              s = NULL;
                                            }

    break;

  case 427:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).refine, s, "refine")) {
                                              YYABORT;
                                            }
                                            s = NULL;
                                          }

    break;

  case 428:

    { if (read_all) {
                                                                if (!(actual = yang_read_augment(trg, actual, s))) {
                                                                  YYABORT;
                                                                }
                                                                data_node = actual;
                                                                s = NULL;
                                                              }
                                                            }

    break;

  case 429:

    { if (read_all && !((yyvsp[0].nodes).node.flag & LYS_DATADEF)){
                                            LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, NULL, "data-def or case", "uses/augment");
                                            YYABORT;
                                          }
                                        }

    break;

  case 433:

    { if (read_all) {
                                                      if (!(actual = yang_read_augment(trg, NULL, s))) {
                                                        YYABORT;
                                                      }
                                                      data_node = actual;
                                                      s = NULL;
                                                    }
                                                  }

    break;

  case 434:

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

  case 436:

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

  case 437:

    { actual = (yyvsp[-1].nodes).node.ptr_augment; actual_type = AUGMENT_KEYWORD; }

    break;

  case 439:

    { if (read_all) {
                                          if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_augment, s, unres, AUGMENT_KEYWORD)) {YYABORT;}
                                          s=NULL;
                                        } else {
                                          size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                        }
                                      }

    break;

  case 440:

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

  case 441:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_augment, s, "augment")) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                       }

    break;

  case 442:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_augment, s, "augment")) {
                                         YYABORT;
                                       }
                                       s = NULL;
                                     }

    break;

  case 443:

    { if (read_all) {
                                        actual = (yyvsp[-1].nodes).node.ptr_augment;
                                        actual_type = AUGMENT_KEYWORD;
                                        (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                        data_node = actual;
                                      }
                                    }

    break;

  case 444:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 445:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).node.ptr_augment;
                                      actual_type = AUGMENT_KEYWORD;
                                      (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                      data_node = actual;
                                    }
                                  }

    break;

  case 446:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 447:

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

  case 448:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 449:

    { if (read_all) {
                                    actual = (yyvsp[-1].nodes).node.ptr_augment;
                                    actual_type = AUGMENT_KEYWORD;
                                    (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                    data_node = actual;
                                  }
                                }

    break;

  case 450:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 453:

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

  case 454:

    { config_inherit = ENABLE_INHERIT; }

    break;

  case 455:

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

  case 456:

    { config_inherit = ENABLE_INHERIT; }

    break;

  case 459:

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

  case 460:

    { if (read_all) {
                                      if (yang_read_if_feature(trg, (yyvsp[-1].nodes).node.ptr_rpc, s, unres, RPC_KEYWORD)) {YYABORT;}
                                      s=NULL;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                    }
                                  }

    break;

  case 461:

    { if (!read_all) {
                                       if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "rpc", (yyvsp[0].i), 0)) {
                                         YYABORT;
                                       }
                                     }
                                   }

    break;

  case 462:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).node.ptr_rpc, s, "rpc")) {
                                       YYABORT;
                                     }
                                     s = NULL;
                                   }

    break;

  case 463:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).node.ptr_rpc, s, "rpc")) {
                                     YYABORT;
                                   }
                                   s = NULL;
                                 }

    break;

  case 464:

    { if (read_all) {
                                           actual = (yyvsp[-1].nodes).node.ptr_rpc;
                                           actual_type = RPC_KEYWORD;
                                         } else {
                                           size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                         }
                                       }

    break;

  case 466:

    { actual = (yyvsp[-1].nodes).node.ptr_rpc;
                                  actual_type = RPC_KEYWORD;
                                  data_node = actual;
                                }

    break;

  case 468:

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

  case 469:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 470:

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

  case 471:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 472:

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

  case 473:

    { if (read_all && !((yyvsp[0].nodes).node.flag & LYS_DATADEF)) {
                                          LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, "data-def", "input");
                                          YYABORT;
                                        }
                                      }

    break;

  case 475:

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

  case 476:

    { if (read_all) {
                                         actual = (yyvsp[-1].nodes).node.ptr_inout;
                                         actual_type = INPUT_KEYWORD;
                                       } else {
                                         size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                       }
                                     }

    break;

  case 478:

    { if (read_all) {
                                                    actual = (yyvsp[-1].nodes).node.ptr_inout;
                                                    actual_type = INPUT_KEYWORD;
                                                  } else {
                                                    size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                                  }
                                                }

    break;

  case 480:

    { actual = (yyvsp[-1].nodes).node.ptr_inout;
                                           actual_type = INPUT_KEYWORD;
                                           data_node = actual;
                                         }

    break;

  case 482:

    { if (read_all) {
                                             actual = (yyvsp[-1].nodes).node.ptr_inout;
                                             actual_type = INPUT_KEYWORD;
                                             (yyvsp[-1].nodes).node.flag |= LYS_DATADEF;
                                             data_node = actual;
                                           }
                                         }

    break;

  case 483:

    { (yyval.nodes) = (yyvsp[-3].nodes); }

    break;

  case 484:

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

  case 485:

    { if (read_all && !((yyvsp[0].nodes).node.flag & LYS_DATADEF)) {
                                           LOGVAL(LYE_MISSCHILDSTMT, LY_VLOG_NONE, "data-def", "output");
                                           YYABORT;
                                         }
                                       }

    break;

  case 487:

    { if (read_all) {
                                                                   if (!(actual = yang_read_node(trg, actual, s, LYS_NOTIF, sizeof(struct lys_node_notif)))) {
                                                                    YYABORT;
                                                                   }
                                                                   data_node = actual;
                                                                 }
                                                                 config_inherit = DISABLE_INHERIT;
                                                               }

    break;

  case 488:

    { config_inherit = ENABLE_INHERIT; }

    break;

  case 489:

    { if (read_all) {
                          size_arrays->next++;
                        }
                      }

    break;

  case 491:

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

  case 492:

    { if (read_all) {
                                      actual = (yyvsp[-1].nodes).notif;
                                      actual_type = NOTIFICATION_KEYWORD;
                                    } else {
                                      size_arrays->node[(yyvsp[-1].nodes).index].must++;
                                    }
                                  }

    break;

  case 494:

    { if (read_all) {
                                               if (yang_read_if_feature(trg, (yyvsp[-1].nodes).notif, s, unres, NOTIFICATION_KEYWORD)) {YYABORT;}
                                               s=NULL;
                                             } else {
                                               size_arrays->node[(yyvsp[-1].nodes).index].if_features++;
                                             }
                                           }

    break;

  case 495:

    { if (!read_all) {
                                                if (yang_check_flags(&size_arrays->node[(yyvsp[-1].nodes).index].flags, LYS_STATUS_MASK, "status", "notification", (yyvsp[0].i), 0)) {
                                                  YYABORT;
                                                }
                                              }
                                            }

    break;

  case 496:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).notif, s, "notification")) {
                                                YYABORT;
                                              }
                                              s = NULL;
                                            }

    break;

  case 497:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).notif, s, "notification")) {
                                              YYABORT;
                                            }
                                            s = NULL;
                                          }

    break;

  case 498:

    { if (read_all) {
                                                    actual = (yyvsp[-1].nodes).notif;
                                                    actual_type = NOTIFICATION_KEYWORD;
                                                  } else {
                                                    size_arrays->node[(yyvsp[-1].nodes).index].tpdf++;
                                                  }
                                                }

    break;

  case 500:

    { actual = (yyvsp[-1].nodes).notif;
                                           actual_type = NOTIFICATION_KEYWORD;
                                           data_node = actual;
                                         }

    break;

  case 502:

    { actual = (yyvsp[-1].nodes).notif;
                                           actual_type = NOTIFICATION_KEYWORD;
                                           data_node = actual;
                                         }

    break;

  case 504:

    { if (read_all) {
                                                            if (!(actual = yang_read_deviation(trg, s))) {
                                                              YYABORT;
                                                            }
                                                            s = NULL;
                                                            trg->deviation_size++;
                                                            }
                                                        }

    break;

  case 505:

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

  case 507:

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

  case 508:

    { if (read_all && yang_read_description(trg, (yyvsp[-1].nodes).deviation->deviation, s, "deviation")) {
                                             ly_set_free((yyvsp[-1].nodes).deviation->dflt_check);
                                             free((yyvsp[-1].nodes).deviation);
                                             YYABORT;
                                           }
                                           s = NULL;
                                           (yyval.nodes) = (yyvsp[-1].nodes);
                                         }

    break;

  case 509:

    { if (read_all && yang_read_reference(trg, (yyvsp[-1].nodes).deviation->deviation, s, "deviation")) {
                                           ly_set_free((yyvsp[-1].nodes).deviation->dflt_check);
                                           free((yyvsp[-1].nodes).deviation);
                                           YYABORT;
                                         }
                                         s = NULL;
                                         (yyval.nodes) = (yyvsp[-1].nodes);
                                       }

    break;

  case 510:

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

  case 513:

    { if (read_all && yang_read_deviate_unsupported(actual)) {
                       YYABORT;
                     }
                   }

    break;

  case 519:

    { if (read_all && yang_read_deviate(actual, LY_DEVIATE_ADD)) {
                                         YYABORT;
                                       }
                                     }

    break;

  case 523:

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

  case 524:

    { if (read_all) {
                                         if (yang_read_deviate_units(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                           YYABORT;
                                         }
                                         s = NULL;
                                         (yyval.nodes) = (yyvsp[-1].nodes);
                                       }
                                     }

    break;

  case 525:

    { if (read_all) {
                                        actual = (yyvsp[-2].nodes).deviation;
                                        actual_type = ADD_KEYWORD;
                                        (yyval.nodes) = (yyvsp[-2].nodes);
                                      } else {
                                        size_arrays->node[(yyvsp[-2].nodes).index].must++;
                                      }
                                    }

    break;

  case 526:

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

  case 527:

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

  case 528:

    { if (read_all) {
                                          if (yang_read_deviate_config((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                            YYABORT;
                                          }
                                          (yyval.nodes) = (yyvsp[-1].nodes);
                                        }
                                      }

    break;

  case 529:

    { if (read_all) {
                                             if (yang_read_deviate_mandatory((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                               YYABORT;
                                             }
                                             (yyval.nodes) = (yyvsp[-1].nodes);
                                           }
                                         }

    break;

  case 530:

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

  case 531:

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

  case 532:

    { if (read_all && yang_read_deviate(actual, LY_DEVIATE_DEL)) {
                                               YYABORT;
                                             }
                                           }

    break;

  case 535:

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

  case 536:

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

  case 537:

    { if (read_all) {
                                            if (yang_read_deviate_units(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                              YYABORT;
                                            }
                                            s = NULL;
                                            (yyval.nodes) = (yyvsp[-1].nodes);
                                          }
                                        }

    break;

  case 538:

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

  case 539:

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

  case 540:

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

  case 541:

    { if (read_all && yang_read_deviate(actual, LY_DEVIATE_RPL)) {
                                                 YYABORT;
                                               }
                                             }

    break;

  case 545:

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

  case 546:

    { if (read_all) {
                                            if (unres_schema_add_node(trg, unres, (yyvsp[-2].nodes).deviation->deviate->type, UNRES_TYPE_DER, (yyvsp[-2].nodes).deviation->target) == -1) {
                                              lydict_remove(trg->ctx, ((struct yang_type *)(yyvsp[-2].nodes).deviation->deviate->type->der)->name);
                                              free((yyvsp[-2].nodes).deviation->deviate->type->der);
                                              (yyvsp[-2].nodes).deviation->deviate->type->der = NULL;
                                              YYABORT;
                                            }
                                            ly_set_add((yyvsp[-2].nodes).deviation->dflt_check, (yyvsp[-2].nodes).deviation->target, 0);
                                          }
                                        }

    break;

  case 547:

    { if (read_all) {
                                             if (yang_read_deviate_units(trg->ctx, (yyvsp[-1].nodes).deviation, s)) {
                                               YYABORT;
                                             }
                                             s = NULL;
                                             (yyval.nodes) = (yyvsp[-1].nodes);
                                           }
                                         }

    break;

  case 548:

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

  case 549:

    { if (read_all) {
                                              if (yang_read_deviate_config((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                                YYABORT;
                                              }
                                              (yyval.nodes) = (yyvsp[-1].nodes);
                                            }
                                          }

    break;

  case 550:

    { if (read_all) {
                                                 if (yang_read_deviate_mandatory((yyvsp[-1].nodes).deviation, (yyvsp[0].i))) {
                                                   YYABORT;
                                                 }
                                                 (yyval.nodes) = (yyvsp[-1].nodes);
                                               }
                                             }

    break;

  case 551:

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

  case 552:

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

  case 553:

    { if (read_all && !(actual=yang_read_when(trg, actual, actual_type, s))) {YYABORT;} s=NULL; actual_type=WHEN_KEYWORD;}

    break;

  case 558:

    { if (read_all && yang_read_description(trg, actual, s, "when")) {
                                        YYABORT;
                                      }
                                      s = NULL;
                                    }

    break;

  case 559:

    { if (read_all && yang_read_reference(trg, actual, s, "when")) {
                                      YYABORT;
                                    }
                                    s = NULL;
                                  }

    break;

  case 560:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 561:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 562:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 563:

    { (yyval.i) = (yyvsp[-2].i); }

    break;

  case 564:

    { (yyval.i) = LYS_CONFIG_W | LYS_CONFIG_SET; }

    break;

  case 565:

    { (yyval.i) = LYS_CONFIG_R | LYS_CONFIG_SET; }

    break;

  case 566:

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

  case 567:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 568:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 569:

    { read_all = (read_all) ? LY_READ_ONLY_SIZE : LY_READ_ALL; }

    break;

  case 570:

    { (yyval.i) = (yyvsp[-2].i); }

    break;

  case 571:

    { (yyval.i) = LYS_MAND_TRUE; }

    break;

  case 572:

    { (yyval.i) = LYS_MAND_FALSE; }

    break;

  case 573:

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

  case 575:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 576:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 577:

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

  case 578:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 579:

    { (yyval.uint) = 0; }

    break;

  case 580:

    { (yyval.uint) = (yyvsp[-1].uint); }

    break;

  case 581:

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

  case 582:

    { (yyval.i) = (yyvsp[-1].i); }

    break;

  case 583:

    { (yyval.i) = LYS_USERORDERED; }

    break;

  case 584:

    { (yyval.i) = LYS_SYSTEMORDERED; }

    break;

  case 585:

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

  case 586:

    { if (read_all) {
                                       if (!(actual=yang_read_must(trg, actual, s, actual_type))) {YYABORT;}
                                       s=NULL;
                                       actual_type=MUST_KEYWORD;
                                     }
                                   }

    break;

  case 596:

    { if (read_all){
                                 s = strdup(yyget_text(scanner));
                                 if (!s) {
                                   LOGMEM;
                                   YYABORT;
                                 }
                               }
                             }

    break;

  case 599:

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

  case 602:

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

  case 603:

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

  case 607:

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

  case 609:

    { tmp_s = yyget_text(scanner); }

    break;

  case 610:

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

  case 611:

    { tmp_s = yyget_text(scanner); }

    break;

  case 612:

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

  case 636:

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

  case 637:

    { (yyval.uint) = 0; }

    break;

  case 638:

    { (yyval.uint) = (yyvsp[0].uint); }

    break;

  case 639:

    { (yyval.i) = 0; }

    break;

  case 640:

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

  case 646:

    { if (read_all && lyp_check_identifier(s, LY_IDENT_SIMPLE, trg, NULL)) {
                    free(s);
                    YYABORT;
                }
              }

    break;

  case 651:

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

  case 657:

    { if (read_all ) {
                                       if (yang_use_extension(trg, data_node, actual, yyget_text(scanner))) {
                                         YYABORT;
                                       }
                                     }
                                   }

    break;

  case 680:

    { if (read_all){
                    s = strdup(yyget_text(scanner));
                    if (!s) {
                      LOGMEM;
                      YYABORT;
                    }
                  }
                }

    break;

  case 771:

    { if (read_all) {
                            s = strdup(yyget_text(scanner));
                            if (!s) {
                              LOGMEM;
                              YYABORT;
                            }
                          }
                        }

    break;

  case 772:

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
