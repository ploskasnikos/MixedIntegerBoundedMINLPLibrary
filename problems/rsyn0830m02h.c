#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830m02h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b536,b537,b538,b539,b540,b541,b544,b545,b546,b547,b548,b549,b552,b553,b554,b555,b556,b557,b560,b561,b562,b563,b564,b565,b568,b569,b570,b571,b572,b573,b576,b577,b578,b579,b580,b581,b584,b585,b586,b587,b588,b589,b592,b593,b594,b595,b596,b597,x598,x599,x610,x611,x620,x621,x654,x655,x656,x657,x670,x671,x672,x673,x674,x675,x676,x677,x678,x679,x680,x681,x682,x683,x684,x685,x700,x701,x710,x711,x726,x727,x728,x729,x730,x731,x732,x733,x734,x735,x736,x737,b1054,b1055,b1056,b1057,b1058,b1059,b1060,b1061,b1062,b1063,b1064,b1065,b1066,b1067,b1068,b1069,b1070,b1071,b1072,b1073,b1074,b1075,b1076,b1077,b1078,b1079,b1080,b1081,b1082,b1083,b1084,b1085,b1086,b1087,b1088,b1089,b1090,b1091,b1092,b1093,b1094,b1095,b1096,b1097,b1098,b1099,b1100,b1101,b1102,b1103,b1104,b1105,b1106,b1107,b1108,b1109,b1110,b1111,b1112,b1113;
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
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &b536); 
   fscanf(fp,"%f", &b537); 
   fscanf(fp,"%f", &b538); 
   fscanf(fp,"%f", &b539); 
   fscanf(fp,"%f", &b540); 
   fscanf(fp,"%f", &b541); 
   fscanf(fp,"%f", &b544); 
   fscanf(fp,"%f", &b545); 
   fscanf(fp,"%f", &b546); 
   fscanf(fp,"%f", &b547); 
   fscanf(fp,"%f", &b548); 
   fscanf(fp,"%f", &b549); 
   fscanf(fp,"%f", &b552); 
   fscanf(fp,"%f", &b553); 
   fscanf(fp,"%f", &b554); 
   fscanf(fp,"%f", &b555); 
   fscanf(fp,"%f", &b556); 
   fscanf(fp,"%f", &b557); 
   fscanf(fp,"%f", &b560); 
   fscanf(fp,"%f", &b561); 
   fscanf(fp,"%f", &b562); 
   fscanf(fp,"%f", &b563); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 
   fscanf(fp,"%f", &b570); 
   fscanf(fp,"%f", &b571); 
   fscanf(fp,"%f", &b572); 
   fscanf(fp,"%f", &b573); 
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b586); 
   fscanf(fp,"%f", &b587); 
   fscanf(fp,"%f", &b588); 
   fscanf(fp,"%f", &b589); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &x598); 
   fscanf(fp,"%f", &x599); 
   fscanf(fp,"%f", &x610); 
   fscanf(fp,"%f", &x611); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x654); 
   fscanf(fp,"%f", &x655); 
   fscanf(fp,"%f", &x656); 
   fscanf(fp,"%f", &x657); 
   fscanf(fp,"%f", &x670); 
   fscanf(fp,"%f", &x671); 
   fscanf(fp,"%f", &x672); 
   fscanf(fp,"%f", &x673); 
   fscanf(fp,"%f", &x674); 
   fscanf(fp,"%f", &x675); 
   fscanf(fp,"%f", &x676); 
   fscanf(fp,"%f", &x677); 
   fscanf(fp,"%f", &x678); 
   fscanf(fp,"%f", &x679); 
   fscanf(fp,"%f", &x680); 
   fscanf(fp,"%f", &x681); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x710); 
   fscanf(fp,"%f", &x711); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x729); 
   fscanf(fp,"%f", &x730); 
   fscanf(fp,"%f", &x731); 
   fscanf(fp,"%f", &x732); 
   fscanf(fp,"%f", &x733); 
   fscanf(fp,"%f", &x734); 
   fscanf(fp,"%f", &x735); 
   fscanf(fp,"%f", &x736); 
   fscanf(fp,"%f", &x737); 
   fscanf(fp,"%f", &b1054); 
   fscanf(fp,"%f", &b1055); 
   fscanf(fp,"%f", &b1056); 
   fscanf(fp,"%f", &b1057); 
   fscanf(fp,"%f", &b1058); 
   fscanf(fp,"%f", &b1059); 
   fscanf(fp,"%f", &b1060); 
   fscanf(fp,"%f", &b1061); 
   fscanf(fp,"%f", &b1062); 
   fscanf(fp,"%f", &b1063); 
   fscanf(fp,"%f", &b1064); 
   fscanf(fp,"%f", &b1065); 
   fscanf(fp,"%f", &b1066); 
   fscanf(fp,"%f", &b1067); 
   fscanf(fp,"%f", &b1068); 
   fscanf(fp,"%f", &b1069); 
   fscanf(fp,"%f", &b1070); 
   fscanf(fp,"%f", &b1071); 
   fscanf(fp,"%f", &b1072); 
   fscanf(fp,"%f", &b1073); 
   fscanf(fp,"%f", &b1074); 
   fscanf(fp,"%f", &b1075); 
   fscanf(fp,"%f", &b1076); 
   fscanf(fp,"%f", &b1077); 
   fscanf(fp,"%f", &b1078); 
   fscanf(fp,"%f", &b1079); 
   fscanf(fp,"%f", &b1080); 
   fscanf(fp,"%f", &b1081); 
   fscanf(fp,"%f", &b1082); 
   fscanf(fp,"%f", &b1083); 
   fscanf(fp,"%f", &b1084); 
   fscanf(fp,"%f", &b1085); 
   fscanf(fp,"%f", &b1086); 
   fscanf(fp,"%f", &b1087); 
   fscanf(fp,"%f", &b1088); 
   fscanf(fp,"%f", &b1089); 
   fscanf(fp,"%f", &b1090); 
   fscanf(fp,"%f", &b1091); 
   fscanf(fp,"%f", &b1092); 
   fscanf(fp,"%f", &b1093); 
   fscanf(fp,"%f", &b1094); 
   fscanf(fp,"%f", &b1095); 
   fscanf(fp,"%f", &b1096); 
   fscanf(fp,"%f", &b1097); 
   fscanf(fp,"%f", &b1098); 
   fscanf(fp,"%f", &b1099); 
   fscanf(fp,"%f", &b1100); 
   fscanf(fp,"%f", &b1101); 
   fscanf(fp,"%f", &b1102); 
   fscanf(fp,"%f", &b1103); 
   fscanf(fp,"%f", &b1104); 
   fscanf(fp,"%f", &b1105); 
   fscanf(fp,"%f", &b1106); 
   fscanf(fp,"%f", &b1107); 
   fscanf(fp,"%f", &b1108); 
   fscanf(fp,"%f", &b1109); 
   fscanf(fp,"%f", &b1110); 
   fscanf(fp,"%f", &b1111); 
   fscanf(fp,"%f", &b1112); 
   fscanf(fp,"%f", &b1113); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 3*x68 - 3*x69 - 2*x70 - 2*x71 + 6*b536 + 4*b537
 + 40*b538 + 35*b539 + 46*b540 + 39*b541 + 7*b544 + 4*b545 + 30*b546
 + 25*b547 + 37*b548 + 29*b549 + 7*b552 + 5*b553 + 15*b554 + 5*b555
 + 22*b556 + 10*b557 + 11*b560 + 8*b561 + 13*b562 + 8*b563 + 24*b564
 + 16*b565 + 10*b568 + 7*b569 + 13*b570 + 8*b571 + 23*b572 + 15*b573
 + 9*b576 + 9*b577 + 30*b578 + 30*b579 + 39*b580 + 39*b581 + 8*b584
 + 7*b585 + 20*b586 + 15*b587 + 28*b588 + 22*b589 + 8*b592 + 6*b593
 + 15*b594 + 10*b595 + 23*b596 + 16*b597 + x598 + x599 - 5*x610 - 10*x611
 + 2*x620 + x621 + 10*x654 + 5*x655 + 5*x656 + 5*x657 - 40*x670 - 30*x671
 - 15*x672 - 20*x673 - 10*x674 - 30*x675 - 30*x676 - 20*x677 - 35*x678
 - 50*x679 - 20*x680 - 30*x681 - 25*x682 - 50*x683 - 15*x684 - 20*x685
 - 30*x700 - 40*x701 + x710 + x711 - 80*x726 - 90*x727 - 285*x728
 - 390*x729 - 290*x730 - 405*x731 - 280*x732 - 400*x733 - 290*x734
 - 300*x735 - 350*x736 - 250*x737 + 5*b1054 + 4*b1055 + 8*b1056 + 7*b1057
 + 6*b1058 + 9*b1059 + 10*b1060 + 9*b1061 + 6*b1062 + 10*b1063 + 7*b1064
 + 7*b1065 + 4*b1066 + 3*b1067 + 5*b1068 + 6*b1069 + 2*b1070 + 5*b1071
 + 4*b1072 + 7*b1073 + 3*b1074 + 9*b1075 + 7*b1076 + 2*b1077 + 3*b1078
 + b1079 + 2*b1080 + 6*b1081 + 4*b1082 + 8*b1083 + 2*b1084 + 5*b1085
 + 3*b1086 + 4*b1087 + 5*b1088 + 7*b1089 + 2*b1090 + 8*b1091 + b1092
 + 4*b1093 + 2*b1094 + 5*b1095 + 9*b1096 + 2*b1097 + 5*b1098 + 8*b1099
 + 2*b1100 + 3*b1101 + 10*b1102 + 6*b1103 + 4*b1104 + 8*b1105 + 7*b1106
 + 3*b1107 + 4*b1108 + 8*b1109 + 2*b1110 + b1111 + 8*b1112 + 3*b1113 - 0
);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
