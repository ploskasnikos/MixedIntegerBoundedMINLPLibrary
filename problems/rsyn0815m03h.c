#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0815m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b848,b849,b850,b851,b852,b853,b854,b855,b856,b860,b861,b862,b863,b864,b865,b866,b867,b868,b872,b873,b874,b875,b876,b877,b878,b879,b880,b884,b885,b886,b887,b888,b889,b890,b891,b892,b896,b897,b898,b899,b900,b901,b902,b903,b904,b908,b909,b910,b911,b912,b913,b914,b915,b916,b920,b921,b922,b923,b924,b925,b926,b927,b928,b932,b933,b934,b935,b936,b937,b938,b939,b940,x941,x942,x943,x959,x960,x961,x974,x975,x976,x1013,x1014,x1015,x1016,x1017,x1018,x1025,x1026,x1027,x1028,x1029,x1030,x1049,x1050,x1051,x1052,x1053,x1054,x1055,x1056,x1057,x1058,x1059,x1060,b1304,b1305,b1306,b1307,b1308,b1309,b1310,b1311,b1312,b1313,b1314,b1315,b1316,b1317,b1318,b1319,b1320,b1321,b1322,b1323,b1324,b1325,b1326,b1327,b1328,b1329,b1330,b1331,b1332,b1333,b1334,b1335,b1336,b1337,b1338,b1339,b1340,b1341,b1342,b1343,b1344,b1345,b1346,b1347,b1348;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &b848); 
   fscanf(fp,"%f", &b849); 
   fscanf(fp,"%f", &b850); 
   fscanf(fp,"%f", &b851); 
   fscanf(fp,"%f", &b852); 
   fscanf(fp,"%f", &b853); 
   fscanf(fp,"%f", &b854); 
   fscanf(fp,"%f", &b855); 
   fscanf(fp,"%f", &b856); 
   fscanf(fp,"%f", &b860); 
   fscanf(fp,"%f", &b861); 
   fscanf(fp,"%f", &b862); 
   fscanf(fp,"%f", &b863); 
   fscanf(fp,"%f", &b864); 
   fscanf(fp,"%f", &b865); 
   fscanf(fp,"%f", &b866); 
   fscanf(fp,"%f", &b867); 
   fscanf(fp,"%f", &b868); 
   fscanf(fp,"%f", &b872); 
   fscanf(fp,"%f", &b873); 
   fscanf(fp,"%f", &b874); 
   fscanf(fp,"%f", &b875); 
   fscanf(fp,"%f", &b876); 
   fscanf(fp,"%f", &b877); 
   fscanf(fp,"%f", &b878); 
   fscanf(fp,"%f", &b879); 
   fscanf(fp,"%f", &b880); 
   fscanf(fp,"%f", &b884); 
   fscanf(fp,"%f", &b885); 
   fscanf(fp,"%f", &b886); 
   fscanf(fp,"%f", &b887); 
   fscanf(fp,"%f", &b888); 
   fscanf(fp,"%f", &b889); 
   fscanf(fp,"%f", &b890); 
   fscanf(fp,"%f", &b891); 
   fscanf(fp,"%f", &b892); 
   fscanf(fp,"%f", &b896); 
   fscanf(fp,"%f", &b897); 
   fscanf(fp,"%f", &b898); 
   fscanf(fp,"%f", &b899); 
   fscanf(fp,"%f", &b900); 
   fscanf(fp,"%f", &b901); 
   fscanf(fp,"%f", &b902); 
   fscanf(fp,"%f", &b903); 
   fscanf(fp,"%f", &b904); 
   fscanf(fp,"%f", &b908); 
   fscanf(fp,"%f", &b909); 
   fscanf(fp,"%f", &b910); 
   fscanf(fp,"%f", &b911); 
   fscanf(fp,"%f", &b912); 
   fscanf(fp,"%f", &b913); 
   fscanf(fp,"%f", &b914); 
   fscanf(fp,"%f", &b915); 
   fscanf(fp,"%f", &b916); 
   fscanf(fp,"%f", &b920); 
   fscanf(fp,"%f", &b921); 
   fscanf(fp,"%f", &b922); 
   fscanf(fp,"%f", &b923); 
   fscanf(fp,"%f", &b924); 
   fscanf(fp,"%f", &b925); 
   fscanf(fp,"%f", &b926); 
   fscanf(fp,"%f", &b927); 
   fscanf(fp,"%f", &b928); 
   fscanf(fp,"%f", &b932); 
   fscanf(fp,"%f", &b933); 
   fscanf(fp,"%f", &b934); 
   fscanf(fp,"%f", &b935); 
   fscanf(fp,"%f", &b936); 
   fscanf(fp,"%f", &b937); 
   fscanf(fp,"%f", &b938); 
   fscanf(fp,"%f", &b939); 
   fscanf(fp,"%f", &b940); 
   fscanf(fp,"%f", &x941); 
   fscanf(fp,"%f", &x942); 
   fscanf(fp,"%f", &x943); 
   fscanf(fp,"%f", &x959); 
   fscanf(fp,"%f", &x960); 
   fscanf(fp,"%f", &x961); 
   fscanf(fp,"%f", &x974); 
   fscanf(fp,"%f", &x975); 
   fscanf(fp,"%f", &x976); 
   fscanf(fp,"%f", &x1013); 
   fscanf(fp,"%f", &x1014); 
   fscanf(fp,"%f", &x1015); 
   fscanf(fp,"%f", &x1016); 
   fscanf(fp,"%f", &x1017); 
   fscanf(fp,"%f", &x1018); 
   fscanf(fp,"%f", &x1025); 
   fscanf(fp,"%f", &x1026); 
   fscanf(fp,"%f", &x1027); 
   fscanf(fp,"%f", &x1028); 
   fscanf(fp,"%f", &x1029); 
   fscanf(fp,"%f", &x1030); 
   fscanf(fp,"%f", &x1049); 
   fscanf(fp,"%f", &x1050); 
   fscanf(fp,"%f", &x1051); 
   fscanf(fp,"%f", &x1052); 
   fscanf(fp,"%f", &x1053); 
   fscanf(fp,"%f", &x1054); 
   fscanf(fp,"%f", &x1055); 
   fscanf(fp,"%f", &x1056); 
   fscanf(fp,"%f", &x1057); 
   fscanf(fp,"%f", &x1058); 
   fscanf(fp,"%f", &x1059); 
   fscanf(fp,"%f", &x1060); 
   fscanf(fp,"%f", &b1304); 
   fscanf(fp,"%f", &b1305); 
   fscanf(fp,"%f", &b1306); 
   fscanf(fp,"%f", &b1307); 
   fscanf(fp,"%f", &b1308); 
   fscanf(fp,"%f", &b1309); 
   fscanf(fp,"%f", &b1310); 
   fscanf(fp,"%f", &b1311); 
   fscanf(fp,"%f", &b1312); 
   fscanf(fp,"%f", &b1313); 
   fscanf(fp,"%f", &b1314); 
   fscanf(fp,"%f", &b1315); 
   fscanf(fp,"%f", &b1316); 
   fscanf(fp,"%f", &b1317); 
   fscanf(fp,"%f", &b1318); 
   fscanf(fp,"%f", &b1319); 
   fscanf(fp,"%f", &b1320); 
   fscanf(fp,"%f", &b1321); 
   fscanf(fp,"%f", &b1322); 
   fscanf(fp,"%f", &b1323); 
   fscanf(fp,"%f", &b1324); 
   fscanf(fp,"%f", &b1325); 
   fscanf(fp,"%f", &b1326); 
   fscanf(fp,"%f", &b1327); 
   fscanf(fp,"%f", &b1328); 
   fscanf(fp,"%f", &b1329); 
   fscanf(fp,"%f", &b1330); 
   fscanf(fp,"%f", &b1331); 
   fscanf(fp,"%f", &b1332); 
   fscanf(fp,"%f", &b1333); 
   fscanf(fp,"%f", &b1334); 
   fscanf(fp,"%f", &b1335); 
   fscanf(fp,"%f", &b1336); 
   fscanf(fp,"%f", &b1337); 
   fscanf(fp,"%f", &b1338); 
   fscanf(fp,"%f", &b1339); 
   fscanf(fp,"%f", &b1340); 
   fscanf(fp,"%f", &b1341); 
   fscanf(fp,"%f", &b1342); 
   fscanf(fp,"%f", &b1343); 
   fscanf(fp,"%f", &b1344); 
   fscanf(fp,"%f", &b1345); 
   fscanf(fp,"%f", &b1346); 
   fscanf(fp,"%f", &b1347); 
   fscanf(fp,"%f", &b1348); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 20*x17 + 21*x18 + 19*x19 + 18*x29
 + 20*x30 + 20*x31 + 16*x65 + 19*x66 + 17*x67 - 26*x77 - 31*x78 - 31*x79
 - 30*x83 - 29*x84 - 37*x85 + 20*x86 + 18*x87 + 21*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 3*x101 - 3*x102 - 3*x103 - 2*x104
 - 2*x105 - 2*x106 + 6*b848 + 4*b849 + 3*b850 + 40*b851 + 35*b852
 + 20*b853 + 46*b854 + 39*b855 + 23*b856 + 7*b860 + 4*b861 + 4*b862
 + 30*b863 + 25*b864 + 20*b865 + 37*b866 + 29*b867 + 22*b868 + 7*b872
 + 5*b873 + 3*b874 + 15*b875 + 5*b876 + 2*b877 + 22*b878 + 10*b879
 + 5*b880 + 11*b884 + 8*b885 + 6*b886 + 13*b887 + 8*b888 + 3*b889
 + 24*b890 + 16*b891 + 9*b892 + 10*b896 + 7*b897 + 6*b898 + 13*b899
 + 8*b900 + 3*b901 + 23*b902 + 15*b903 + 9*b904 + 9*b908 + 9*b909 + 7*b910
 + 30*b911 + 30*b912 + 25*b913 + 39*b914 + 39*b915 + 32*b916 + 8*b920
 + 7*b921 + 7*b922 + 20*b923 + 15*b924 + 10*b925 + 28*b926 + 22*b927
 + 17*b928 + 8*b932 + 6*b933 + 5*b934 + 15*b935 + 10*b936 + 6*b937
 + 23*b938 + 16*b939 + 11*b940 + x941 + x942 + x943 - 5*x959 - 10*x960
 - 5*x961 + 2*x974 + x975 + 2*x976 - 500*x1013 - 600*x1014 - 350*x1015
 - 350*x1016 - 400*x1017 - 450*x1018 + 10*x1025 + 5*x1026 + 5*x1027
 + 5*x1028 + 5*x1029 + 5*x1030 - 80*x1049 - 130*x1050 - 215*x1051
 - 110*x1052 - 120*x1053 - 125*x1054 - 110*x1055 - 130*x1056 - 140*x1057
 - 80*x1058 - 90*x1059 - 120*x1060 + 5*b1304 + 4*b1305 + 6*b1306 + 8*b1307
 + 7*b1308 + 6*b1309 + 6*b1310 + 9*b1311 + 4*b1312 + 10*b1313 + 9*b1314
 + 5*b1315 + 6*b1316 + 10*b1317 + 6*b1318 + 7*b1319 + 7*b1320 + 4*b1321
 + 4*b1322 + 3*b1323 + 2*b1324 + 5*b1325 + 6*b1326 + 7*b1327 + 2*b1328
 + 5*b1329 + 2*b1330 + 4*b1331 + 7*b1332 + 4*b1333 + 3*b1334 + 9*b1335
 + 3*b1336 + 7*b1337 + 2*b1338 + 9*b1339 + 3*b1340 + b1341 + 9*b1342
 + 2*b1343 + 6*b1344 + 3*b1345 + 4*b1346 + 8*b1347 + b1348 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
