[WATER1]
CAPTION=Water supply in the region 
NODEHINT=WATER INDICATORS
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=WATER1TRI
TABLINK2=WATER1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[WATER1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.WAT1

/----------------table section-------------------------------------
[WATER1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------
[WATER2]
CAPTION=water coverage in the region
NODEHINT=WATER INDICATORS
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=WATER2TRI
TABLINK2=WATER2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[WATER2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.WAT2

/----------------table section-------------------------------------
[WATER2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------
