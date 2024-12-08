[DICGROUP]
CAPTION=Dictionary Information
NODETYPE=STRUCTURE
NODES=4
NODE1=DICALL
NODE2=*
NODE3=DICGEO
NODE4=DICPOB

[DICALL]
CAPTION=All Variables
PAGETYPE=Dictionary
TITLE=Database Dictionary
MODE=SHORT

[DICGEO]
CAPTION=Indicator Variables
PAGETYPE=Dictionary
MODE=SHORT
ENTITY=ZONE  WOREDA

[DICPOB]
CAPTION=Data Variables
PAGETYPE=Dictionary
MODE=SHORT
ENTITY=DATA
*---------------------------------------------------------------------------
[PROGGROUP]
NODETYPE=STRUCTURE
CAPTION=Programming/Documentation
NODES=2
NODE1=REDGROUP
NODE2=HELPGROUP
-----------------------------------------------------------------
[REDGROUP]
NODETYPE=STRUCTURE
CAPTION=Programming
NODES=2
NODE1=PROGRED
NODE2=DOWNDIC

[PROGRED]
CAPTION=Process R+SP Program
PAGETYPE=CmdSet
TITLE=Write Redatam+SP Program

[DOWNDIC]
PAGETYPE=Download
CAPTION=Download R+SP Dictionary
FILENAME=rpbases\Harari_Indicator\base\harari.dic

-------------------------------------------------------------------------------


[HELPGROUP]
NODETYPE=STRUCTURE
CAPTION=Documentation
NODES=2
NODE1=HELPRPSP
NODE2=HOME

[HELPRPSP]
PAGETYPE=DisplayHtml
CAPTION=Hard Copy Document
FILENAME=/imiseth/docs/lfs2013.pdf

[HOME]
PAGETYPE=DisplayHtml
CAPTION=Redatam HomePage
FILENAME=http://www.cepal.org/redatam/default.asp?idioma=IN
NEWPAGE=YES




*---------------------------------------------------------------------------

********************  FOOTNOTES    ****************************

/----------------------------------------------------------------------
[FOOTNOTE1]
LINES=3
LINE1=Processed with Redatam+SP
LINE2=CSA - Labour Force Survey 2013
LINE3=IMIS ETHIOPIA - UNECLAC/CELADE 2014
*---------------------------------------------------------------------------