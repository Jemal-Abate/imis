[finance1]
CAPTION=regional performance indicator 
NODEHINT=FINANCE 
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=FINANCE1TRI
TABLINK2=FINANCE1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[FINANCE1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.FIN1

/----------------table section-------------------------------------
[FINANCE1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------

[finance2]
CAPTION=aproved regular budget sector
NODEHINT=FINANCE 
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=FINANCE2TRI
TABLINK2=FINANCE2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[FINANCE2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.FIN2

/----------------table section-------------------------------------
[FINANCE2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


[finance3]
CAPTION=aproved capital budget sector
NODEHINT=FINANCE 
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=FINANCE3TRI
TABLINK2=FINANCE3FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[FINANCE3TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.FIN3

/----------------table section-------------------------------------
[FINANCE3FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


[finance4]
CAPTION=approved capital budget for wereda district
NODEHINT=FINANCE 
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=FINANCE4TRI
TABLINK2=FINANCE4FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[FINANCE4TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.FIN4

/----------------table section-------------------------------------
[FINANCE4FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------




