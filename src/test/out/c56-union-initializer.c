Table: Ids
EID	NAME	READONLY	UNDEFMACRO	MACRO	FUNMACRO	MACROARG	CPPCONST	CPPSTRVAL	DEFCCONSTVAL	NOTDEFCCONSTVAL	EXPCCONSTVAL	NOTEXPCCONSTVAL	ORDINARY	SUETAG	SUMEMBER	LABEL	TYPEDEF	ENUM	YACC	FUN	CSCOPE	LSCOPE	UNUSED
79	su	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0
91	MAXDIGIT	0	0	1	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	1
309	av	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	1
331	x	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
409	bv	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0
441	main	1	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	1	0	1	0
479	key	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0
571	qqq	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
639	ss	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0
879	av	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	1
891	foo	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	1	0	1	1
979	bv	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	1
1049	key	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	1
1249	d_ok	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
2975	__DATE__	1	0	1	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	1
3295	__TIME__	1	0	1	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	1
3469	su_a_err	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
3575	__FILE__	1	0	1	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	1
3865	__LINE__	1	0	1	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	1
4055	__STDC__	1	0	1	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	1
4089	ss_a_ok	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
5019	ss_a_err	0	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
5355	_cscout_dummy1	1	0	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	1	1	0	0
Table: Tokens
FID	FOFFSET	EID
2	297	2975
2	329	3295
2	357	3575
2	386	3865
2	405	4055
2	471	441
2	535	5355
2	558	5355
4	7	79
4	30	309
4	40	409
4	47	479
4	63	639
4	87	879
4	97	979
4	104	1049
4	121	79
4	124	1249
4	266	479
4	270	409
4	343	79
4	346	3469
4	405	639
4	408	4089
4	498	639
4	501	5019
5	8	91
5	32	331
5	43	441
5	56	571
5	88	891
Table: Rest
FID	FOFFSET	CODE
2	287	\u0000a\u0000a#define 
2	305	  
2	320	\u0000a#define 
2	337	 
2	348	\u0000a#define 
2	365	 
2	377	\u0000a#define 
2	394	 1\u0000a#define 
2	413	 1\u0000a\u0000a
2	466	\u0000aint 
2	475	();\u0000a
2	522	\u0000astatic void 
2	549	(void) { 
2	572	(); }\u0000a
3	152	\u0000a\u0000a\u0000a#pragma includepath 
3	195	\u0000a
3	239	\u0000astatic void _cscout_dummy2(void) { _cscout_dummy2(); }\u0000a
4	0	struct 
4	9	 {\u0000a	union {\u0000a		double 
4	32	;\u0000a		int 
4	42	;\u0000a	} 
4	50	;\u0000a};\u0000a\u0000astruct 
4	65	 {\u0000a	struct {\u0000a		double 
4	89	;\u0000a		int 
4	99	;\u0000a	} 
4	107	;\u0000a};\u0000a\u0000a\u0000astruct 
4	123	 
4	128	 = {\u0000a	
4	263	\u0000a	.
4	269	.
4	272	 = 0\u0000a};\u0000a\u0000a
4	336	struct 
4	345	 
4	354	[3] = {1, 2, 3, 4};\u0000a\u0000a
4	398	struct 
4	407	 
4	415	[3] = {1, 2, 3, 4};\u0000a\u0000a
4	491	struct 
4	500	 
4	509	[3] = {1, 2, 3, 4, 5, 6, 7};\u0000a
5	0	#define 
5	16	 11\u0000d\u0000aextern int 
5	33	;\u0000d\u0000aextern 
5	47	();\u0000d\u0000aint 
5	59	;\u0000d\u0000a\u0000d\u0000a
5	86	\u0000d\u0000a
5	91	() {\u0000d\u0000a	
5	116	}\u0000d\u0000a\u0000d\u0000a
Table: Projects
PID	NAME
23	unspecified
24	Prj1
25	Prj2
Table: IdProj
EID	PID
79	24
309	24
409	24
441	24
479	24
639	24
879	24
979	24
1049	24
1249	24
2975	24
3295	24
3469	24
3575	24
3865	24
4055	24
4089	24
5019	24
5355	24
79	25
91	25
309	25
331	25
409	25
441	25
479	25
571	25
639	25
879	25
891	25
979	25
1049	25
1249	25
2975	25
3295	25
3469	25
3575	25
3865	25
4055	25
4089	25
5019	25
5355	25
Table: Files
FID	NAME	RO
2	host-defs.h	1
3	host-incs.h	1
4	c56-union-initializer.c	0
5	prj2.c	0
Table: Filemetrics
FID	PRECPP	NCHAR	NCCOMMENT	NSPACE	NLCOMMENT	NBCOMMENT	NLINE	MAXLINELEN	MAXSTMTLEN	MAXSTMTNEST	MAXBRACENEST	MAXBRACKNEST	BRACENEST	BRACKNEST	NULINE	NPPDIRECTIVE	NPPCOND	NPPFMACRO	NPPOMACRO	NTOKEN	NSTMT	NOP	NUOP	NNCONST	NCLIT	NSTRING	NPPCONCATOP	NPPSTRINGOP	NIF	NELSE	NSWITCH	NCASE	NDEFAULT	NBREAK	NFOR	NWHILE	NDO	NCONTINUE	NGOTO	NRETURN	NASM	NTYPEOF	NPID	NFID	NMID	NID	NUPID	NUFID	NUMID	NUID	NLABEL	NMACROEXPANDTOKEN	NCOPIES	NINCFILE	NPFUNCTION	NFFUNCTION	NPVAR	NFVAR	NAGGREGATE	NAMEMBER	NENUM	NEMEMBER
2	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	16	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	18	2	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	NULL	NULL	0	1	0	0	0	0	0	0
2	1	548	367	29	0	3	22	61	47	NULL	1	1	0	0	0	5	0	0	5	37	2	0	0	2	0	3	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	2	5	8	1	1	5	7	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
3	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	15	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	1	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	NULL	NULL	0	0	0	0	0	0	0	0
3	1	243	187	13	0	2	13	48	28	NULL	1	1	0	0	0	1	0	0	0	16	1	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
4	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	34	0	2	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	103	12	7	0	19	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	8	0	NULL	8	4	0	NULL	4	0	NULL	NULL	NULL	0	0	4	0	4	6	0	0
4	1	503	249	81	3	1	31	70	37	NULL	2	0	0	0	0	0	0	0	0	102	12	7	0	19	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	4	0	0	4	4	0	0	4	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
5	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	8	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	18	3	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	4	0	NULL	4	4	0	NULL	4	0	NULL	NULL	NULL	1	0	2	0	0	0	0	0
5	1	106	34	26	2	0	11	21	14	NULL	1	1	0	0	0	1	0	0	1	21	3	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	4	0	1	5	4	0	1	5	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
Table: FileProj
FID	PID
2	24
3	24
4	24
1	25
2	25
3	25
4	25
5	25
Table: Definers
PID	CUID	BASEFILEID	DEFINERID
25	5	5	2
Table: Includers
PID	CUID	BASEFILEID	INCLUDERID
24	2	2	1
24	4	3	1
24	4	4	1
25	2	2	1
25	2	2	1
25	4	3	1
25	4	4	1
25	5	3	1
25	5	5	1
Table: Providers
PID	CUID	PROVIDERID
24	2	2
24	4	4
25	2	2
25	2	2
25	4	4
25	5	5
Table: IncTriggers
PID	CUID	BASEFILEID	DEFINERID	FOFFSET	LEN
25	5	5	2	471	4
Table: Functions
ID	NAME	ISMACRO	DEFINED	DECLARED	FILESCOPED	FID	FOFFSET	FANIN
891	foo	0	1	1	0	5	88	0
4715	main	0	0	1	0	2	471	0
5355	_cscout_dummy1	0	1	1	1	2	535	1
Table: FunctionDefs
FUNCTIONID	FIDBEGIN	FOFFSETBEGIN	FIDEND	FOFFSETEND
891	5	95	5	117
5355	2	557	2	577
Table: FunctionMetrics
FUNCTIONID	PRECPP	NCHAR	NCCOMMENT	NSPACE	NLCOMMENT	NBCOMMENT	NLINE	MAXLINELEN	MAXSTMTLEN	MAXSTMTNEST	MAXBRACENEST	MAXBRACKNEST	BRACENEST	BRACKNEST	NULINE	NPPDIRECTIVE	NPPCOND	NPPFMACRO	NPPOMACRO	NTOKEN	NSTMT	NOP	NUOP	NNCONST	NCLIT	NSTRING	NPPCONCATOP	NPPSTRINGOP	NIF	NELSE	NSWITCH	NCASE	NDEFAULT	NBREAK	NFOR	NWHILE	NDO	NCONTINUE	NGOTO	NRETURN	NASM	NTYPEOF	NPID	NFID	NMID	NID	NUPID	NUFID	NUMID	NUID	NLABEL	NMACROEXPANDTOKEN	NGNSOC	NMPARAM	NFPARAM	NEPARAM	FANIN	FANOUT	CCYCL1	CCYCL2	CCYCL3	CSTRUC	CHAL	IFLOW
891	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	1	0	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	20	NULL	0	NULL	0	0	1	1	1	0.0	0.0	0.0
891	1	23	15	4	1	0	2	18	0	NULL	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	NULL	0	0	0	1	1	1	0.0	0.0	0.0
5355	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	5	0	0	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	5	1	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	NULL	1	0	1	NULL	1	0	NULL	12	NULL	0	NULL	1	1	1	1	1	1.0	0.0	1.0
5355	1	22	0	3	0	0	1	21	5	NULL	0	1	0	0	0	0	0	0	0	5	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	1	0	1	0	1	0	0	NULL	0	NULL	0	1	1	1	1	1	1.0	0.0	1.0
Table: FunctionId
FUNCTIONID	ORDINAL	EID
891	0	891
4715	0	441
5355	0	5355
Table: Fcalls
SOURCEID	DESTID
5355	5355
Done
