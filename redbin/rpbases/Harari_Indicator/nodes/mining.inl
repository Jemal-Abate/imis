[MINING1]
CAPTION=Income collected by the development of mineral resources
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=MINING1TRI
TABLINK2=MINING1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[MINING1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.MIN1

/----------------table section-------------------------------------
[MINING1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


[MINING2]
CAPTION=Mining manufacturers who have obtained and renewed Mining licenses
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=MINING2TRI
TABLINK2=MINING2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[MINING2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.MIN2

/----------------table section-------------------------------------
[MINING2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node SECTION 1-----------------------------------

