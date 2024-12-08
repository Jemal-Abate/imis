[TRANSPORT1]
CAPTION=road length in the region 
NODEHINT=TRANSPORT INDICATOR
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=TRANSPORT1TRI
TABLINK2=TRANSPORT1FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[TRANSPORT1TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.TRN1

/----------------table section-------------------------------------
[TRANSPORT1FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------


[TRANSPORT2]
CAPTION=Coverage of road base development 
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=TRANSPORT2TRI
TABLINK2=TRANSPORT2FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[TRANSPORT2TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.TRN2

/----------------table section-------------------------------------
[TRANSPORT2FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------

[TRANSPORT3]
CAPTION=The number of vehicles registered and their service
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=TRANSPORT3TRI
TABLINK2=TRANSPORT3FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[TRANSPORT3TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.TRN3

/----------------table section-------------------------------------
[TRANSPORT3FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node -----------------------------------

[TRANSPORT4]
CAPTION=The number of transport vehicle association and their vehicles 
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=TRANSPORT4TRI
TABLINK2=TRANSPORT4FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[TRANSPORT4TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.TRN4

/----------------table section-------------------------------------
[TRANSPORT4FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node SECTION 3-----------------------------------

[TRANSPORT5]
CAPTION=Number of different services provided to vehicles and drivers 
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=TRANSPORT5TRI
TABLINK2=TRANSPORT5FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[TRANSPORT5TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.TRN5

/----------------table section-------------------------------------
[TRANSPORT5FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------

[TRANSPORT6]
CAPTION=The number of traffic accident victims by age and SEX
NODEHINT=Indicators
NODETYPE=CINTP
NODESTYLE=ESTILO_CINTP1

TABLINK1=TRANSPORT6TRI
TABLINK2=TRANSPORT6FREQ
DECIMALS=2

/--------------parameter section---------------------------------------

[TRANSPORT6TRI]
NODETYPE=MULTIFILTER
NODESTYLE=STYLE_NOFILTER_POP

TRIVAR3N=1
TRIVAR31=INDIC.TRN6

/----------------table section-------------------------------------
[TRANSPORT6FREQ]
NODETYPE=TALLY
NODESTYLE=STYLE_FREQ_NOFILTER

/------------------end of the node-----------------------------------

