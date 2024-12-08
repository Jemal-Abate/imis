

[HEALTH2]
CAPTION=The number of pharmacies and drug stores in the region
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=HEALTH2TRI
TABLINK2=HEALTH2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[HEALTH2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.HSO2

/----------------table section-------------------------------------
[HEALTH2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------

[HEALTH3]
CAPTION=Number of health professionals by type of profession
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=HEALTH3TRI
TABLINK2=HEALTH3FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[HEALTH3TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.HSO3

/----------------table section-------------------------------------
[HEALTH3FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node SECTION2-----------------------------------

[HEALTH4]
CAPTION=Number of patients receiving medical services by type of treatment 
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=HEALTH4TRI
TABLINK2=HEALTH4FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[HEALTH4TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.HSO4

/----------------table section-------------------------------------
[HEALTH4FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node SECTION 3-----------------------------------

[HEALTH5]
CAPTION=Number of children and mother who received special health services by type of service
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=HEALTH5TRI
TABLINK2=HEALTH5FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[HEALTH5TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.HSO5

/----------------table section-------------------------------------
[HEALTH5FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


