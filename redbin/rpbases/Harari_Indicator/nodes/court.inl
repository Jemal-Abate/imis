[COURT1]
CAPTION=CASE SUBMITTED AND DECIDED BY COURT 
NODEHINT=COURT Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=COURT1TRI
TABLINK2=COURT1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[COURT1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.COU1

/----------------table section-------------------------------------
[COURT1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


[COURT2]
CAPTION=Number of legal prisoners by term and sex
NODEHINT=COURT Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=COURT2TRI
TABLINK2=COURT2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[COURT2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.COU2

/----------------table section-------------------------------------
[COURT2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------

[COURT3]
CAPTION=LEGAL PRISONERS TRAINED IN DIFFERENT PROFFESIONS 
NODEHINT=COURT Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=COURT3TRI
TABLINK2=COURT3FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[COURT3TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.COU3

/----------------table section-------------------------------------
[COURT3FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER
/------------------end of the node -----------------------------------

