[STRUCTURE]
CAPTION=ESARO Demographic and Development Indicators
PLANID=CELADE/División de Población. Cepal
PLANVERSION=2.0

DATASETS=1
DEFAULTDATASET=1
PAGES=0
PAGE=0

SELSET=SELSET1
LASTSELECTION=1


DEFINES=7

FOOTNOTES=1
DEFAULTFOOTNOTE=1

MAPS=1
MAP1=MAP_HARARI

*-------------------- NODOS dentro de la seccion STRUCTURE --------------------------------------
NODES=20
NODE1=EDUCATION
NODE2=HEALTH
NODE3=COURT
NODE4=CULTURE
NODE5=INVESTMENT
NODE6=GENERAL_ATTORENY
NODE7=MERCHANT
NODE8=SPORT
NODE9=WATER
NODE10=TRANSPORT
NODE11=FINANCE
NODE12=WOMAN
NODE13=AGRICULTURE
NODE14=MINING
NODE15=PUBLIC_SECTOR
NODE16=interprise
NODE17=large scale manufacturing industry
NODE18=Social Affair
NODE19=INFRASTRUCTURE 
NODE20=INFOSIS

*-------------------- IMAGENES CENTRALES --------------------
HTMLSITE=Site\

//PORTALTITLE=
//PORTALSUBTITLE=

*----------------------- ARCHIVOS COMPLEMENTARIOS   -----------------------
#include \set\preferences.inl
#include \set\datasels.inl
#include \set\panels.inl
#include \set\pages.inl
#include \set\TableStyle.inl
#include \set\General.inl
#include \set\selections.inl

#include mapas.inl
#include styles.inl
#include varlist.inl
#include DocsReferencia.inl
#include Utilities.inl

*---------------------ARCHIVO COMPLEMENTARIO CON NODOS TEMATICOS---------
#include nodes.inl

*---------------------ARCHIVOS COMPLEMENTARIOS DE DEFINICIONES NUEVAS----------
#include \defines\defines_indic.inl

*----------------------- FIN DE LA SECCION STRUCTURE  -------------------