/*--------------------------------------------------------------------
 * Symbols referenced in this file:
 * - ScanKeywords
 * - ScanKeywords_kw_string
 * - ScanKeywords_kw_offsets
 * - ScanKeywords_hash_func
 *--------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------
 *
 * kwlist_d.h
 *    List of keywords represented as a ScanKeywordList.
 *
 * Portions Copyright (c) 1996-2022, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/tools/gen_keywordlist.pl
 *
 *-------------------------------------------------------------------------
 */

#ifndef KWLIST_D_H
#define KWLIST_D_H

#include "common/kwlookup.h"

static const char ScanKeywords_kw_string[] =
	"abort\0"
	"absolute\0"
	"access\0"
	"action\0"
	"add\0"
	"admin\0"
	"after\0"
	"aggregate\0"
	"all\0"
	"also\0"
	"alter\0"
	"always\0"
	"analyse\0"
	"analyze\0"
	"and\0"
	"any\0"
	"array\0"
	"as\0"
	"asc\0"
	"asensitive\0"
	"assertion\0"
	"assignment\0"
	"asymmetric\0"
	"at\0"
	"atomic\0"
	"attach\0"
	"attribute\0"
	"authorization\0"
	"backward\0"
	"before\0"
	"begin\0"
	"between\0"
	"bigint\0"
	"binary\0"
	"bit\0"
	"boolean\0"
	"both\0"
	"breadth\0"
	"by\0"
	"cache\0"
	"call\0"
	"called\0"
	"cascade\0"
	"cascaded\0"
	"case\0"
	"cast\0"
	"catalog\0"
	"chain\0"
	"char\0"
	"character\0"
	"characteristics\0"
	"check\0"
	"checkpoint\0"
	"class\0"
	"close\0"
	"cluster\0"
	"coalesce\0"
	"collate\0"
	"collation\0"
	"column\0"
	"columns\0"
	"comment\0"
	"comments\0"
	"commit\0"
	"committed\0"
	"compression\0"
	"concurrently\0"
	"configuration\0"
	"conflict\0"
	"connection\0"
	"constraint\0"
	"constraints\0"
	"content\0"
	"continue\0"
	"conversion\0"
	"copy\0"
	"cost\0"
	"create\0"
	"cross\0"
	"csv\0"
	"cube\0"
	"current\0"
	"current_catalog\0"
	"current_date\0"
	"current_role\0"
	"current_schema\0"
	"current_time\0"
	"current_timestamp\0"
	"current_user\0"
	"cursor\0"
	"cycle\0"
	"data\0"
	"database\0"
	"day\0"
	"deallocate\0"
	"dec\0"
	"decimal\0"
	"declare\0"
	"default\0"
	"defaults\0"
	"deferrable\0"
	"deferred\0"
	"definer\0"
	"delete\0"
	"delimiter\0"
	"delimiters\0"
	"depends\0"
	"depth\0"
	"desc\0"
	"detach\0"
	"dictionary\0"
	"disable\0"
	"discard\0"
	"distinct\0"
	"do\0"
	"document\0"
	"domain\0"
	"double\0"
	"drop\0"
	"each\0"
	"else\0"
	"enable\0"
	"encoding\0"
	"encrypted\0"
	"end\0"
	"enum\0"
	"escape\0"
	"event\0"
	"except\0"
	"exclude\0"
	"excluding\0"
	"exclusive\0"
	"execute\0"
	"exists\0"
	"explain\0"
	"expression\0"
	"extension\0"
	"external\0"
	"extract\0"
	"false\0"
	"family\0"
	"fetch\0"
	"filter\0"
	"finalize\0"
	"first\0"
	"float\0"
	"following\0"
	"for\0"
	"force\0"
	"foreign\0"
	"forward\0"
	"freeze\0"
	"from\0"
	"full\0"
	"function\0"
	"functions\0"
	"generated\0"
	"global\0"
	"grant\0"
	"granted\0"
	"greatest\0"
	"group\0"
	"grouping\0"
	"groups\0"
	"handler\0"
	"having\0"
	"header\0"
	"hold\0"
	"hour\0"
	"identity\0"
	"if\0"
	"ilike\0"
	"immediate\0"
	"immutable\0"
	"implicit\0"
	"import\0"
	"in\0"
	"include\0"
	"including\0"
	"increment\0"
	"index\0"
	"indexes\0"
	"inherit\0"
	"inherits\0"
	"initially\0"
	"inline\0"
	"inner\0"
	"inout\0"
	"input\0"
	"insensitive\0"
	"insert\0"
	"instead\0"
	"int\0"
	"integer\0"
	"intersect\0"
	"interval\0"
	"into\0"
	"invoker\0"
	"is\0"
	"isnull\0"
	"isolation\0"
	"join\0"
	"key\0"
	"label\0"
	"language\0"
	"large\0"
	"last\0"
	"lateral\0"
	"leading\0"
	"leakproof\0"
	"least\0"
	"left\0"
	"level\0"
	"like\0"
	"limit\0"
	"listen\0"
	"load\0"
	"local\0"
	"localtime\0"
	"localtimestamp\0"
	"location\0"
	"lock\0"
	"locked\0"
	"logged\0"
	"mapping\0"
	"match\0"
	"matched\0"
	"materialized\0"
	"maxvalue\0"
	"merge\0"
	"method\0"
	"minute\0"
	"minvalue\0"
	"mode\0"
	"month\0"
	"move\0"
	"name\0"
	"names\0"
	"national\0"
	"natural\0"
	"nchar\0"
	"new\0"
	"next\0"
	"nfc\0"
	"nfd\0"
	"nfkc\0"
	"nfkd\0"
	"no\0"
	"none\0"
	"normalize\0"
	"normalized\0"
	"not\0"
	"nothing\0"
	"notify\0"
	"notnull\0"
	"nowait\0"
	"null\0"
	"nullif\0"
	"nulls\0"
	"numeric\0"
	"object\0"
	"of\0"
	"off\0"
	"offset\0"
	"oids\0"
	"old\0"
	"on\0"
	"only\0"
	"operator\0"
	"option\0"
	"options\0"
	"or\0"
	"order\0"
	"ordinality\0"
	"others\0"
	"out\0"
	"outer\0"
	"over\0"
	"overlaps\0"
	"overlay\0"
	"overriding\0"
	"owned\0"
	"owner\0"
	"parallel\0"
	"parameter\0"
	"parser\0"
	"partial\0"
	"partition\0"
	"passing\0"
	"password\0"
	"placing\0"
	"plans\0"
	"policy\0"
	"position\0"
	"preceding\0"
	"precision\0"
	"prepare\0"
	"prepared\0"
	"preserve\0"
	"primary\0"
	"prior\0"
	"privileges\0"
	"procedural\0"
	"procedure\0"
	"procedures\0"
	"program\0"
	"publication\0"
	"quote\0"
	"range\0"
	"read\0"
	"real\0"
	"reassign\0"
	"recheck\0"
	"recursive\0"
	"ref\0"
	"references\0"
	"referencing\0"
	"refresh\0"
	"reindex\0"
	"relative\0"
	"release\0"
	"rename\0"
	"repeatable\0"
	"replace\0"
	"replica\0"
	"reset\0"
	"restart\0"
	"restrict\0"
	"return\0"
	"returning\0"
	"returns\0"
	"revoke\0"
	"right\0"
	"role\0"
	"rollback\0"
	"rollup\0"
	"routine\0"
	"routines\0"
	"row\0"
	"rows\0"
	"rule\0"
	"savepoint\0"
	"schema\0"
	"schemas\0"
	"scroll\0"
	"search\0"
	"second\0"
	"security\0"
	"select\0"
	"sequence\0"
	"sequences\0"
	"serializable\0"
	"server\0"
	"session\0"
	"session_user\0"
	"set\0"
	"setof\0"
	"sets\0"
	"share\0"
	"show\0"
	"similar\0"
	"simple\0"
	"skip\0"
	"smallint\0"
	"snapshot\0"
	"some\0"
	"sql\0"
	"stable\0"
	"standalone\0"
	"start\0"
	"statement\0"
	"statistics\0"
	"stdin\0"
	"stdout\0"
	"storage\0"
	"stored\0"
	"strict\0"
	"strip\0"
	"subscription\0"
	"substring\0"
	"support\0"
	"symmetric\0"
	"sysid\0"
	"system\0"
	"table\0"
	"tables\0"
	"tablesample\0"
	"tablespace\0"
	"temp\0"
	"template\0"
	"temporary\0"
	"text\0"
	"then\0"
	"ties\0"
	"time\0"
	"timestamp\0"
	"to\0"
	"trailing\0"
	"transaction\0"
	"transform\0"
	"treat\0"
	"trigger\0"
	"trim\0"
	"true\0"
	"truncate\0"
	"trusted\0"
	"type\0"
	"types\0"
	"uescape\0"
	"unbounded\0"
	"uncommitted\0"
	"unencrypted\0"
	"union\0"
	"unique\0"
	"unknown\0"
	"unlisten\0"
	"unlogged\0"
	"until\0"
	"update\0"
	"user\0"
	"using\0"
	"vacuum\0"
	"valid\0"
	"validate\0"
	"validator\0"
	"value\0"
	"values\0"
	"varchar\0"
	"variadic\0"
	"varying\0"
	"verbose\0"
	"version\0"
	"view\0"
	"views\0"
	"volatile\0"
	"when\0"
	"where\0"
	"whitespace\0"
	"window\0"
	"with\0"
	"within\0"
	"without\0"
	"work\0"
	"wrapper\0"
	"write\0"
	"xml\0"
	"xmlattributes\0"
	"xmlconcat\0"
	"xmlelement\0"
	"xmlexists\0"
	"xmlforest\0"
	"xmlnamespaces\0"
	"xmlparse\0"
	"xmlpi\0"
	"xmlroot\0"
	"xmlserialize\0"
	"xmltable\0"
	"year\0"
	"yes\0"
	"zone";

static const uint16 ScanKeywords_kw_offsets[] = {
	0,
	6,
	15,
	22,
	29,
	33,
	39,
	45,
	55,
	59,
	64,
	70,
	77,
	85,
	93,
	97,
	101,
	107,
	110,
	114,
	125,
	135,
	146,
	157,
	160,
	167,
	174,
	184,
	198,
	207,
	214,
	220,
	228,
	235,
	242,
	246,
	254,
	259,
	267,
	270,
	276,
	281,
	288,
	296,
	305,
	310,
	315,
	323,
	329,
	334,
	344,
	360,
	366,
	377,
	383,
	389,
	397,
	406,
	414,
	424,
	431,
	439,
	447,
	456,
	463,
	473,
	485,
	498,
	512,
	521,
	532,
	543,
	555,
	563,
	572,
	583,
	588,
	593,
	600,
	606,
	610,
	615,
	623,
	639,
	652,
	665,
	680,
	693,
	711,
	724,
	731,
	737,
	742,
	751,
	755,
	766,
	770,
	778,
	786,
	794,
	803,
	814,
	823,
	831,
	838,
	848,
	859,
	867,
	873,
	878,
	885,
	896,
	904,
	912,
	921,
	924,
	933,
	940,
	947,
	952,
	957,
	962,
	969,
	978,
	988,
	992,
	997,
	1004,
	1010,
	1017,
	1025,
	1035,
	1045,
	1053,
	1060,
	1068,
	1079,
	1089,
	1098,
	1106,
	1112,
	1119,
	1125,
	1132,
	1141,
	1147,
	1153,
	1163,
	1167,
	1173,
	1181,
	1189,
	1196,
	1201,
	1206,
	1215,
	1225,
	1235,
	1242,
	1248,
	1256,
	1265,
	1271,
	1280,
	1287,
	1295,
	1302,
	1309,
	1314,
	1319,
	1328,
	1331,
	1337,
	1347,
	1357,
	1366,
	1373,
	1376,
	1384,
	1394,
	1404,
	1410,
	1418,
	1426,
	1435,
	1445,
	1452,
	1458,
	1464,
	1470,
	1482,
	1489,
	1497,
	1501,
	1509,
	1519,
	1528,
	1533,
	1541,
	1544,
	1551,
	1561,
	1566,
	1570,
	1576,
	1585,
	1591,
	1596,
	1604,
	1612,
	1622,
	1628,
	1633,
	1639,
	1644,
	1650,
	1657,
	1662,
	1668,
	1678,
	1693,
	1702,
	1707,
	1714,
	1721,
	1729,
	1735,
	1743,
	1756,
	1765,
	1771,
	1778,
	1785,
	1794,
	1799,
	1805,
	1810,
	1815,
	1821,
	1830,
	1838,
	1844,
	1848,
	1853,
	1857,
	1861,
	1866,
	1871,
	1874,
	1879,
	1889,
	1900,
	1904,
	1912,
	1919,
	1927,
	1934,
	1939,
	1946,
	1952,
	1960,
	1967,
	1970,
	1974,
	1981,
	1986,
	1990,
	1993,
	1998,
	2007,
	2014,
	2022,
	2025,
	2031,
	2042,
	2049,
	2053,
	2059,
	2064,
	2073,
	2081,
	2092,
	2098,
	2104,
	2113,
	2123,
	2130,
	2138,
	2148,
	2156,
	2165,
	2173,
	2179,
	2186,
	2195,
	2205,
	2215,
	2223,
	2232,
	2241,
	2249,
	2255,
	2266,
	2277,
	2287,
	2298,
	2306,
	2318,
	2324,
	2330,
	2335,
	2340,
	2349,
	2357,
	2367,
	2371,
	2382,
	2394,
	2402,
	2410,
	2419,
	2427,
	2434,
	2445,
	2453,
	2461,
	2467,
	2475,
	2484,
	2491,
	2501,
	2509,
	2516,
	2522,
	2527,
	2536,
	2543,
	2551,
	2560,
	2564,
	2569,
	2574,
	2584,
	2591,
	2599,
	2606,
	2613,
	2620,
	2629,
	2636,
	2645,
	2655,
	2668,
	2675,
	2683,
	2696,
	2700,
	2706,
	2711,
	2717,
	2722,
	2730,
	2737,
	2742,
	2751,
	2760,
	2765,
	2769,
	2776,
	2787,
	2793,
	2803,
	2814,
	2820,
	2827,
	2835,
	2842,
	2849,
	2855,
	2868,
	2878,
	2886,
	2896,
	2902,
	2909,
	2915,
	2922,
	2934,
	2945,
	2950,
	2959,
	2969,
	2974,
	2979,
	2984,
	2989,
	2999,
	3002,
	3011,
	3023,
	3033,
	3039,
	3047,
	3052,
	3057,
	3066,
	3074,
	3079,
	3085,
	3093,
	3103,
	3115,
	3127,
	3133,
	3140,
	3148,
	3157,
	3166,
	3172,
	3179,
	3184,
	3190,
	3197,
	3203,
	3212,
	3222,
	3228,
	3235,
	3243,
	3252,
	3260,
	3268,
	3276,
	3281,
	3287,
	3296,
	3301,
	3307,
	3318,
	3325,
	3330,
	3337,
	3345,
	3350,
	3358,
	3364,
	3368,
	3382,
	3392,
	3403,
	3413,
	3423,
	3437,
	3446,
	3452,
	3460,
	3473,
	3482,
	3487,
	3491,
};

#define SCANKEYWORDS_NUM_KEYWORDS 460

static int
ScanKeywords_hash_func(const void *key, size_t keylen)
{
	static const int16 h[921] = {
		207,   -201,  0,     223,   -255,  28,    32767, -86,
		32767, 0,     -35,   -938,  32767, 32767, -13,   32767,
		450,   62,    42,    327,   309,   -13,   0,     114,
		32767, -230,  135,   -12,   424,   191,   -114,  32767,
		45,    440,   673,   0,     0,     224,   286,   32767,
		32767, 16,    5,     0,     32767, 32767, -349,  32767,
		-43,   32767, 32767, 32767, 32767, 32767, 0,     32767,
		32767, 262,   573,   -75,   32767, 32767, 1113,  88,
		111,   32767, 7,     -41,   223,   32767, 478,   275,
		32767, 0,     245,   1004,  59,    32767, 322,   256,
		-130,  32767, 0,     378,   606,   994,   -59,   32767,
		-219,  32767, 489,   32767, -328,  32767, 88,    32767,
		-228,  0,     1181,  -705,  32767, 32767, 149,   32767,
		32767, 177,   0,     0,     32767, 32767, 32767, 473,
		142,   167,   130,   345,   461,   50,    426,   32767,
		32767, -104,  333,   32767, 5,     32767, 32767, 115,
		0,     34,    32767, -178,  32767, 32767, 0,     32767,
		32767, 32767, 429,   573,   32767, 3,     32767, 0,
		237,   32767, 324,   379,   32767, 409,   32767, 32767,
		362,   -707,  638,   32767, 32767, -18,   23,    127,
		32767, 32767, -55,   0,     254,   32767, 0,     32767,
		-16,   389,   32767, -287,  0,     -43,   32767, 0,
		32767, 157,   23,    438,   907,   0,     32767, -213,
		299,   32767, 0,     32767, 32767, 229,   32767, 32767,
		32767, 32767, 186,   32767, 81,    32767, -707,  525,
		732,   515,   32767, 32767, 0,     32767, 32767, 126,
		32767, 32767, 0,     443,   32767, 102,   -148,  188,
		393,   32767, 383,   32767, 212,   247,   32767, 389,
		54,    -258,  0,     6,     -32,   32767, 261,   -190,
		112,   32767, 32767, 32767, 0,     32767, 0,     32767,
		32767, 215,   32767, 196,   32767, 445,   32767, 32767,
		-456,  -66,   161,   32767, 617,   -484,  230,   32767,
		1078,  77,    124,   32767, 32767, -44,   32767, -271,
		148,   20,    344,   83,    32767, 32767, 32767, 108,
		-768,  269,   32767, 32767, -66,   0,     32767, 32767,
		524,   433,   32767, 32767, 0,     32767, -564,  -138,
		0,     4,     463,   354,   32767, 57,    0,     32767,
		552,   351,   32767, 32767, 0,     32767, 32767, 32767,
		65,    32767, 32767, 285,   158,   32767, 32767, -931,
		281,   32767, 32767, 32767, 32767, -357,  -115,  32767,
		294,   435,   2,     32767, 305,   32767, 35,    434,
		32767, 172,   0,     32767, 326,   -597,  263,   2,
		32767, -111,  -79,   32767, 32767, -717,  198,   32767,
		-715,  407,   32767, 32767, 159,   214,   -135,  379,
		672,   656,   278,   0,     32767, 32767, 32767, 1109,
		830,   -173,  32767, 32767, 334,   32767, 32767, 32767,
		32767, -447,  270,   61,    281,   32767, 0,     116,
		32767, 99,    -302,  32767, 32767, 0,     39,    32767,
		-61,   276,   -45,   144,   -121,  32767, 0,     198,
		325,   72,    294,   -174,  -218,  73,    -489,  32767,
		-372,  32767, 32767, 360,   345,   283,   -453,  32767,
		32767, 32767, 283,   806,   0,     32767, 32767, 32767,
		-65,   0,     32767, 8,     32767, 150,   32767, -251,
		132,   0,     32767, 32767, 272,   32767, 15,    -417,
		889,   -77,   0,     0,     16,    32767, 32767, 32767,
		94,    32767, 32767, 32767, 32767, 219,   32767, -416,
		391,   31,    208,   396,   0,     143,   -37,   32767,
		252,   0,     32767, 185,   32767, -140,  0,     32767,
		456,   -258,  32767, 381,   32767, 393,   32767, 32767,
		32767, 32767, 1160,  32767, 32767, 384,   201,   197,
		32767, 0,     131,   469,   89,    32767, 397,   0,
		32767, 211,   32767, 102,   138,   32767, -379,  264,
		32767, 386,   6,     32767, 32767, 162,   53,    -81,
		-135,  59,    338,   230,   0,     0,     19,    8,
		32767, 785,   423,   0,     257,   301,   523,   -398,
		421,   0,     32767, 0,     32767, 32767, 0,     -758,
		0,     562,   32767, 0,     32767, 32767, -213,  32767,
		28,    32767, -696,  173,   -413,  352,   -223,  472,
		275,   316,   32767, -186,  323,   32767, -163,  221,
		246,   29,    222,   -1042, 0,     33,    184,   32767,
		32767, 0,     32767, 32767, 805,   32767, 305,   8,
		226,   84,    32767, 379,   0,     32767, 134,   82,
		32767, 399,   32767, 0,     0,     617,   32767, 32767,
		31,    0,     256,   0,     32767, 103,   302,   32767,
		208,   32767, -56,   0,     -146,  32767, 243,   32767,
		0,     32767, 32767, 32767, 32767, 784,   32767, 32767,
		0,     197,   32767, 32767, 914,   155,   -50,   32767,
		32767, 32767, 292,   1122,  32767, 0,     32767, -167,
		32767, 139,   113,   113,   32767, 410,   32767, 459,
		331,   0,     295,   0,     0,     483,   -345,  32767,
		32767, -456,  32767, 32767, 0,     32767, 304,   32767,
		138,   32767, 520,   326,   412,   -237,  453,   32767,
		50,    328,   32767, 32767, 0,     -116,  0,     -754,
		0,     -149,  32767, 32767, 28,    -398,  0,     32767,
		32767, -89,   353,   -64,   51,    139,   32767, 32767,
		66,    32767, 314,   209,   1218,  32767, 32767, 325,
		0,     268,   32767, 32767, 446,   32767, 0,     32767,
		-115,  32767, 32767, 32767, 239,   344,   32767, 5,
		32767, 0,     -314,  0,     -327,  32767, 181,   32767,
		107,   393,   0,     32767, 12,    582,   119,   32767,
		-751,  32767, -578,  0,     349,   0,     32767, 404,
		307,   85,    32767, 452,   53,    -307,  0,     0,
		32767, 32767, 664,   32767, 32767, 32767, -44,   32767,
		0,     259,   366,   32767, 0,     0,     32767, -97,
		-131,  0,     32767, 178,   32767, 779,   -231,  -73,
		0,     0,     145,   487,   223,   0,     0,     86,
		32767, 0,     32767, 192,   321,   32767, 32767, 32767,
		-360,  -140,  32767, 32767, 32767, 507,   32767, 247,
		416,   32767, 0,     32767, 68,    98,    32767, 0,
		-268,  0,     32767, 204,   32767, 0,     739,   112,
		-283,  1180,  193,   32767, 32767, 220,   0,     0,
		0,     0,     0,     32767, 0,     32767, 32767, 32767,
		32767, 206,   -374,  0,     315,   32767, 0,     0,
		-37,   -363,  32767, 32767, 258,   32767, 459,   32767,
		128,   -1018, 374,   32767, 0,     32767, 0,     -602,
		32767, 346,   76,    363,   387,   296,   -186,  32,
		21,    32767, 32767, 32767, 32767, 32767, 32767, 32767,
		0,     32767, 0,     165,   32767, 32767, 32767, 0,
		790,   -10,   32767, 32767, 32767, 32767, 0,     32767,
		0,     228,   32767, -993,  32,    -878,  -154,  32767,
		72,    369,   411,   585,   32767, 32767, 124,   32767,
		-253,  -177,  294,   32767, 335,   0,     9,     0,
		32767, 442,   0,     0,     32767, 449,   448,   0,
		0,     32767, 0,     593,   0,     32767, 242,   432,
		0,     32767, 0,     32767, 32767, 1360,  0,     32767,
		238
	};

	const unsigned char *k = (const unsigned char *) key;
	uint32		a = 0;
	uint32		b = 0;

	while (keylen--)
	{
		unsigned char c = *k++ | 0x20;

		a = a * 257 + c;
		b = b * 127 + c;
	}
	return h[a % 921] + h[b % 921];
}

const ScanKeywordList ScanKeywords = {
	ScanKeywords_kw_string,
	ScanKeywords_kw_offsets,
	ScanKeywords_hash_func,
	SCANKEYWORDS_NUM_KEYWORDS,
	17
};

#endif							/* KWLIST_D_H */