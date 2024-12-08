[MANUFACTURING1]
CAPTION=Heineken harar brewery
NODEHINT=MANUFACTURING Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=MANUFACTURING1TRI
TABLINK2=MANUFACTURING1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[MANUFACTURING1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.ber

/----------------table section-------------------------------------
[MANUFACTURING1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


[MANUFACTURING2]
CAPTION=Hamerssa edible oil share company
NODEHINT=MANUFACTURING Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=MANUFACTURING2TRI
TABLINK2=MANUFACTURING2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[MANUFACTURING2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.OIL1

/----------------table section-------------------------------------
[MANUFACTURING2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node SECTION 1-----------------------------------

