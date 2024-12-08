[PUBLIC1]
CAPTION=NUMBER OF PERMANENT EMPLOYEES BY SECTORS AND SEX
NODEHINT=PUBLIC SECTOR INDICATORS
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=PUBLIC1TRI
TABLINK2=PUBLIC1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[PUBLIC1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.PUB1

/----------------table section-------------------------------------
[PUBLIC1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


[PUBLIC2]
CAPTION=NUMBER OF PERMANENT EMPLOYEES BY AGE AND SEX
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=PUBLIC2TRI
TABLINK2=PUBLIC2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[PUBLIC2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.PUB2

/----------------table section-------------------------------------
[PUBLIC2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node SECTION 1-----------------------------------

[PUBLIC3]
CAPTION=NUMBER OF PERMANENT EMPLOYEES BY SERVICE YEAR AND SEX 
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=PUBLIC3TRI
TABLINK2=PUBLIC3FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[PUBLIC3TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.PUB3

/----------------table section-------------------------------------
[PUBLIC3FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node SECTION2-----------------------------------


