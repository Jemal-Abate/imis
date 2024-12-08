[INFRASTRUCTURE1]
CAPTION=ELPA INDICATOR
NODEHINT=INFRASTRUCTURE Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=INFRASTRUCTURE1TRI
TABLINK2=INFRASTRUCTURE1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[INFRASTRUCTURE1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.ELP

/----------------table section-------------------------------------
[INFRASTRUCTURE1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------
[INFRASTRUCTURE2]
CAPTION=TELE INDICATOR
NODEHINT=INFRASTRUCTURE Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=INFRASTRUCTURE2TRI
TABLINK2=INFRASTRUCTURE2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[INFRASTRUCTURE2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.Tel

/----------------table section-------------------------------------
[INFRASTRUCTURE2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------
[INFRASTRUCTURE3]
CAPTION=POSTA INDICATOR
NODEHINT=INFRASTRUCTURE Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=INFRASTRUCTURE3TRI
TABLINK2=INFRASTRUCTURE3FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[INFRASTRUCTURE3TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.POS

/----------------table section-------------------------------------
[INFRASTRUCTURE3FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------

