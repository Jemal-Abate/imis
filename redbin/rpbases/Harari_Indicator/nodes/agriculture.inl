[AGRICULTURE1]
CAPTION=CROP PRODUCTION
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=AGRICULTURE1TRI
TABLINK2=AGRICULTURE1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[AGRICULTURE1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.CRO

/----------------table section-------------------------------------
[AGRICULTURE1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------

[AGRICULTURE2]
CAPTION=Livestock
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=AGRICULTURE2TRI
TABLINK2=AGRICULTURE2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[AGRICULTURE2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.LIV

/----------------table section-------------------------------------
[AGRICULTURE2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------

[AGRICULTURE3]
CAPTION=VETERNERY
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=AGRICULTURE3TRI
TABLINK2=AGRICULTURE3FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[AGRICULTURE3TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.VETER

/----------------table section-------------------------------------
[AGRICULTURE3FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------




[AGRICULTURE4]
CAPTION=AGRICULTURE KPI
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=AGRICULTURE4TRI
TABLINK2=AGRICULTURE4FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[AGRICULTURE4TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.AGR4

/----------------table section-------------------------------------
[AGRICULTURE4FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------










