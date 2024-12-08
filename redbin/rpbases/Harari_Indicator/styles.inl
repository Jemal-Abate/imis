//---------------------------------------------------------------------
[ESTILO_CINTP1]
TABCAPTION1=SELECT REGION,ZONE,WOREDA, YEAR, INDICATORS and Filters
TABCAPTION2=SELECT THE TABLE FORMAT 
/------- end of the style ----------------------------------------------------------------

//------------------main style use in the nodes----------------------------------------
[STYLE_NOFILTER_POP]
TRIVARN=3
TRIVAR1N=1
TRIVAR11=COUNTRY.COUNTRY1
TRIVAR1CKCAPTION=Sel. all

TRIVAR2N=1
TRIVAR21=PERIOD.POPYEAR
TRIVAR2CKCAPTION=Sel. all

/---the 3rd parameter is in the node------
TRIVAR3CKCAPTION=Sel. all

/----no filters------------------------
FILTERN=0

VARINDIC=TRIVAR3
VARCONTROL=TRIVAR2
VARFILTER=TRIVAR1
GRAPHVAR=TRIVAR1
/------- en of the style ----------------------------------------------------------------


/--------------------------------Table style with NO filter ------------------------------
[STYLE_FREQ_NOFILTER]
CAPTION=Table variables
ROWCAPTION=Row:
ROW=ROWSNF
ROWLAST=1

COLCAPTION=Columns:
COL=COLSNF
COLLAST=1

CTLCAPTION=Control:
CTL=CTLSNF
CTLLAST=1

TALFIXED=INDIC.VALUE

ABKCAPTION=Areabreak Level  
//ABK=ABK_1

//---try output with maps -----
FMT=FORMAT_1

FORLABEL=Indicators

OMITMISSING=YES
OMITNOTAPPLICABLE=YES
OMITTOTALCOLUMN=YES
OMITTOTALROW=NO
OMITTOTALS=NO
TOTALS=YES
DECIMALS=0
/------- en of the style ----------------------------------------------------------------


//------------------No Filter With all years--------------------------------------------------








