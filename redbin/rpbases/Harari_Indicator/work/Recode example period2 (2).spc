RUNDEF programa
   SELECTION ALL

DEFINE PERIOD.YEARGR2
AS RECODE PERIOD.YEAR
(34= 1)
(37 =2)
(42=3)
(47=4)
(52=5)
(53=6)
(54=7)
ELSE 0
RANGE 1 - 7
TYPE INTEGER
VARLABEL "Periods"
VALUELABELS 
1 "1995-1999"
2 "2000-2004" 
3"2005-2009" 
4 "2010-2014" 
5 "2015-2019" 
6 "2020-2024" 
7 "2025-2029" 


TABLE T1 AS FREQUENCY OF PERIOD.YEARGR2