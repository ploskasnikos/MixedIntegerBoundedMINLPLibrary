#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0820m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b863,b864,b865,b866,b867,b868,b869,b870,b871,b875,b876,b877,b878,b879,b880,b881,b882,b883,b887,b888,b889,b890,b891,b892,b893,b894,b895,b899,b900,b901,b902,b903,b904,b905,b906,b907,b911,b912,b913,b914,b915,b916,b917,b918,b919,b923,b924,b925,b926,b927,b928,b929,b930,b931,b935,b936,b937,b938,b939,b940,b941,b942,b943,b947,b948,b949,b950,b951,b952,b953,b954,b955,x956,x957,x958,x974,x975,x976,x989,x990,x991,x1040,x1041,x1042,x1043,x1044,x1045,x1064,x1065,x1066,x1067,x1068,x1069,x1070,x1071,x1072,x1073,x1074,x1075,x1076,x1077,x1078,x1079,x1080,x1081,x1082,x1083,x1084,x1085,x1086,x1087,x1088,x1089,x1090,b1409,b1410,b1411,b1412,b1413,b1414,b1415,b1416,b1417,b1418,b1419,b1420,b1421,b1422,b1423,b1424,b1425,b1426,b1427,b1428,b1429,b1430,b1431,b1432,b1433,b1434,b1435,b1436,b1437,b1438,b1439,b1440,b1441,b1442,b1443,b1444,b1445,b1446,b1447,b1448,b1449,b1450,b1451,b1452,b1453,b1454,b1455,b1456,b1457,b1458,b1459,b1460,b1461,b1462,b1463,b1464,b1465,b1466,b1467,b1468;
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
   fscanf(fp,"%f", &b863); 
   fscanf(fp,"%f", &b864); 
   fscanf(fp,"%f", &b865); 
   fscanf(fp,"%f", &b866); 
   fscanf(fp,"%f", &b867); 
   fscanf(fp,"%f", &b868); 
   fscanf(fp,"%f", &b869); 
   fscanf(fp,"%f", &b870); 
   fscanf(fp,"%f", &b871); 
   fscanf(fp,"%f", &b875); 
   fscanf(fp,"%f", &b876); 
   fscanf(fp,"%f", &b877); 
   fscanf(fp,"%f", &b878); 
   fscanf(fp,"%f", &b879); 
   fscanf(fp,"%f", &b880); 
   fscanf(fp,"%f", &b881); 
   fscanf(fp,"%f", &b882); 
   fscanf(fp,"%f", &b883); 
   fscanf(fp,"%f", &b887); 
   fscanf(fp,"%f", &b888); 
   fscanf(fp,"%f", &b889); 
   fscanf(fp,"%f", &b890); 
   fscanf(fp,"%f", &b891); 
   fscanf(fp,"%f", &b892); 
   fscanf(fp,"%f", &b893); 
   fscanf(fp,"%f", &b894); 
   fscanf(fp,"%f", &b895); 
   fscanf(fp,"%f", &b899); 
   fscanf(fp,"%f", &b900); 
   fscanf(fp,"%f", &b901); 
   fscanf(fp,"%f", &b902); 
   fscanf(fp,"%f", &b903); 
   fscanf(fp,"%f", &b904); 
   fscanf(fp,"%f", &b905); 
   fscanf(fp,"%f", &b906); 
   fscanf(fp,"%f", &b907); 
   fscanf(fp,"%f", &b911); 
   fscanf(fp,"%f", &b912); 
   fscanf(fp,"%f", &b913); 
   fscanf(fp,"%f", &b914); 
   fscanf(fp,"%f", &b915); 
   fscanf(fp,"%f", &b916); 
   fscanf(fp,"%f", &b917); 
   fscanf(fp,"%f", &b918); 
   fscanf(fp,"%f", &b919); 
   fscanf(fp,"%f", &b923); 
   fscanf(fp,"%f", &b924); 
   fscanf(fp,"%f", &b925); 
   fscanf(fp,"%f", &b926); 
   fscanf(fp,"%f", &b927); 
   fscanf(fp,"%f", &b928); 
   fscanf(fp,"%f", &b929); 
   fscanf(fp,"%f", &b930); 
   fscanf(fp,"%f", &b931); 
   fscanf(fp,"%f", &b935); 
   fscanf(fp,"%f", &b936); 
   fscanf(fp,"%f", &b937); 
   fscanf(fp,"%f", &b938); 
   fscanf(fp,"%f", &b939); 
   fscanf(fp,"%f", &b940); 
   fscanf(fp,"%f", &b941); 
   fscanf(fp,"%f", &b942); 
   fscanf(fp,"%f", &b943); 
   fscanf(fp,"%f", &b947); 
   fscanf(fp,"%f", &b948); 
   fscanf(fp,"%f", &b949); 
   fscanf(fp,"%f", &b950); 
   fscanf(fp,"%f", &b951); 
   fscanf(fp,"%f", &b952); 
   fscanf(fp,"%f", &b953); 
   fscanf(fp,"%f", &b954); 
   fscanf(fp,"%f", &b955); 
   fscanf(fp,"%f", &x956); 
   fscanf(fp,"%f", &x957); 
   fscanf(fp,"%f", &x958); 
   fscanf(fp,"%f", &x974); 
   fscanf(fp,"%f", &x975); 
   fscanf(fp,"%f", &x976); 
   fscanf(fp,"%f", &x989); 
   fscanf(fp,"%f", &x990); 
   fscanf(fp,"%f", &x991); 
   fscanf(fp,"%f", &x1040); 
   fscanf(fp,"%f", &x1041); 
   fscanf(fp,"%f", &x1042); 
   fscanf(fp,"%f", &x1043); 
   fscanf(fp,"%f", &x1044); 
   fscanf(fp,"%f", &x1045); 
   fscanf(fp,"%f", &x1064); 
   fscanf(fp,"%f", &x1065); 
   fscanf(fp,"%f", &x1066); 
   fscanf(fp,"%f", &x1067); 
   fscanf(fp,"%f", &x1068); 
   fscanf(fp,"%f", &x1069); 
   fscanf(fp,"%f", &x1070); 
   fscanf(fp,"%f", &x1071); 
   fscanf(fp,"%f", &x1072); 
   fscanf(fp,"%f", &x1073); 
   fscanf(fp,"%f", &x1074); 
   fscanf(fp,"%f", &x1075); 
   fscanf(fp,"%f", &x1076); 
   fscanf(fp,"%f", &x1077); 
   fscanf(fp,"%f", &x1078); 
   fscanf(fp,"%f", &x1079); 
   fscanf(fp,"%f", &x1080); 
   fscanf(fp,"%f", &x1081); 
   fscanf(fp,"%f", &x1082); 
   fscanf(fp,"%f", &x1083); 
   fscanf(fp,"%f", &x1084); 
   fscanf(fp,"%f", &x1085); 
   fscanf(fp,"%f", &x1086); 
   fscanf(fp,"%f", &x1087); 
   fscanf(fp,"%f", &x1088); 
   fscanf(fp,"%f", &x1089); 
   fscanf(fp,"%f", &x1090); 
   fscanf(fp,"%f", &b1409); 
   fscanf(fp,"%f", &b1410); 
   fscanf(fp,"%f", &b1411); 
   fscanf(fp,"%f", &b1412); 
   fscanf(fp,"%f", &b1413); 
   fscanf(fp,"%f", &b1414); 
   fscanf(fp,"%f", &b1415); 
   fscanf(fp,"%f", &b1416); 
   fscanf(fp,"%f", &b1417); 
   fscanf(fp,"%f", &b1418); 
   fscanf(fp,"%f", &b1419); 
   fscanf(fp,"%f", &b1420); 
   fscanf(fp,"%f", &b1421); 
   fscanf(fp,"%f", &b1422); 
   fscanf(fp,"%f", &b1423); 
   fscanf(fp,"%f", &b1424); 
   fscanf(fp,"%f", &b1425); 
   fscanf(fp,"%f", &b1426); 
   fscanf(fp,"%f", &b1427); 
   fscanf(fp,"%f", &b1428); 
   fscanf(fp,"%f", &b1429); 
   fscanf(fp,"%f", &b1430); 
   fscanf(fp,"%f", &b1431); 
   fscanf(fp,"%f", &b1432); 
   fscanf(fp,"%f", &b1433); 
   fscanf(fp,"%f", &b1434); 
   fscanf(fp,"%f", &b1435); 
   fscanf(fp,"%f", &b1436); 
   fscanf(fp,"%f", &b1437); 
   fscanf(fp,"%f", &b1438); 
   fscanf(fp,"%f", &b1439); 
   fscanf(fp,"%f", &b1440); 
   fscanf(fp,"%f", &b1441); 
   fscanf(fp,"%f", &b1442); 
   fscanf(fp,"%f", &b1443); 
   fscanf(fp,"%f", &b1444); 
   fscanf(fp,"%f", &b1445); 
   fscanf(fp,"%f", &b1446); 
   fscanf(fp,"%f", &b1447); 
   fscanf(fp,"%f", &b1448); 
   fscanf(fp,"%f", &b1449); 
   fscanf(fp,"%f", &b1450); 
   fscanf(fp,"%f", &b1451); 
   fscanf(fp,"%f", &b1452); 
   fscanf(fp,"%f", &b1453); 
   fscanf(fp,"%f", &b1454); 
   fscanf(fp,"%f", &b1455); 
   fscanf(fp,"%f", &b1456); 
   fscanf(fp,"%f", &b1457); 
   fscanf(fp,"%f", &b1458); 
   fscanf(fp,"%f", &b1459); 
   fscanf(fp,"%f", &b1460); 
   fscanf(fp,"%f", &b1461); 
   fscanf(fp,"%f", &b1462); 
   fscanf(fp,"%f", &b1463); 
   fscanf(fp,"%f", &b1464); 
   fscanf(fp,"%f", &b1465); 
   fscanf(fp,"%f", &b1466); 
   fscanf(fp,"%f", &b1467); 
   fscanf(fp,"%f", &b1468); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 20*x17 + 21*x18 + 19*x19 + 18*x29
 + 20*x30 + 20*x31 + 16*x65 + 19*x66 + 17*x67 - 26*x77 - 31*x78 - 31*x79
 - 30*x83 - 29*x84 - 37*x85 + 20*x86 + 18*x87 + 21*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 3*x101 - 3*x102 - 3*x103 - 2*x104
 - 2*x105 - 2*x106 + 6*b863 + 4*b864 + 3*b865 + 40*b866 + 35*b867
 + 20*b868 + 46*b869 + 39*b870 + 23*b871 + 7*b875 + 4*b876 + 4*b877
 + 30*b878 + 25*b879 + 20*b880 + 37*b881 + 29*b882 + 22*b883 + 7*b887
 + 5*b888 + 3*b889 + 15*b890 + 5*b891 + 2*b892 + 22*b893 + 10*b894
 + 5*b895 + 11*b899 + 8*b900 + 6*b901 + 13*b902 + 8*b903 + 3*b904
 + 24*b905 + 16*b906 + 9*b907 + 10*b911 + 7*b912 + 6*b913 + 13*b914
 + 8*b915 + 3*b916 + 23*b917 + 15*b918 + 9*b919 + 9*b923 + 9*b924 + 7*b925
 + 30*b926 + 30*b927 + 25*b928 + 39*b929 + 39*b930 + 32*b931 + 8*b935
 + 7*b936 + 7*b937 + 20*b938 + 15*b939 + 10*b940 + 28*b941 + 22*b942
 + 17*b943 + 8*b947 + 6*b948 + 5*b949 + 15*b950 + 10*b951 + 6*b952
 + 23*b953 + 16*b954 + 11*b955 + x956 + x957 + x958 - 5*x974 - 10*x975
 - 5*x976 + 2*x989 + x990 + 2*x991 + 10*x1040 + 5*x1041 + 5*x1042
 + 5*x1043 + 5*x1044 + 5*x1045 - 80*x1064 - 130*x1065 - 215*x1066
 - 110*x1067 - 120*x1068 - 125*x1069 - 110*x1070 - 130*x1071 - 140*x1072
 - 80*x1073 - 90*x1074 - 120*x1075 - 285*x1076 - 390*x1077 - 350*x1078
 - 290*x1079 - 405*x1080 - 190*x1081 - 280*x1082 - 400*x1083 - 430*x1084
 - 290*x1085 - 300*x1086 - 240*x1087 - 350*x1088 - 250*x1089 - 300*x1090
 + 5*b1409 + 4*b1410 + 6*b1411 + 8*b1412 + 7*b1413 + 6*b1414 + 6*b1415
 + 9*b1416 + 4*b1417 + 10*b1418 + 9*b1419 + 5*b1420 + 6*b1421 + 10*b1422
 + 6*b1423 + 7*b1424 + 7*b1425 + 4*b1426 + 4*b1427 + 3*b1428 + 2*b1429
 + 5*b1430 + 6*b1431 + 7*b1432 + 2*b1433 + 5*b1434 + 2*b1435 + 4*b1436
 + 7*b1437 + 4*b1438 + 3*b1439 + 9*b1440 + 3*b1441 + 7*b1442 + 2*b1443
 + 9*b1444 + 3*b1445 + b1446 + 9*b1447 + 2*b1448 + 6*b1449 + 3*b1450
 + 4*b1451 + 8*b1452 + b1453 + 2*b1454 + 5*b1455 + 2*b1456 + 3*b1457
 + 4*b1458 + 3*b1459 + 5*b1460 + 7*b1461 + 6*b1462 + 2*b1463 + 8*b1464
 + 4*b1465 + b1466 + 4*b1467 + b1468 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
