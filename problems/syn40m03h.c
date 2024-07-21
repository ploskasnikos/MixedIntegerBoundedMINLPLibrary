#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn40m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x122,x123,x124,x140,x141,x142,x155,x156,x157,x206,x207,x208,x209,x210,x211,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x275,x276,x277,x290,x291,x292,x341,x342,x343,x344,x345,x346,x365,x366,x367,x368,x369,x370,x371,x372,x373,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,b1028,b1029,b1030,b1031,b1032,b1033,b1034,b1035,b1036,b1037,b1038,b1039,b1040,b1041,b1042,b1043,b1044,b1045,b1046,b1047,b1048,b1049,b1050,b1051,b1052,b1053,b1054,b1055,b1056,b1057,b1058,b1059,b1060,b1061,b1062,b1063,b1064,b1065,b1066,b1067,b1068,b1069,b1070,b1071,b1072,b1073,b1074,b1075,b1076,b1077,b1078,b1079,b1080,b1081,b1082,b1083,b1084,b1085,b1086,b1087,b1088,b1089,b1090,b1091,b1092,b1093,b1094,b1095,b1096,b1097,b1098,b1099,b1100,b1101,b1102,b1103,b1104,b1105,b1106,b1107,b1108,b1109,b1110,b1111,b1112,b1113,b1114,b1115,b1116,b1117,b1118,b1119,b1120,b1121,b1122,b1123,b1124,b1125,b1126,b1127,b1128,b1129,b1130,b1131,b1132,b1133,b1134,b1135,b1136,b1137,b1138,b1139,b1140,b1141,b1142,b1143,b1144,b1145,b1146,b1147;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x290); 
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x365); 
   fscanf(fp,"%f", &x366); 
   fscanf(fp,"%f", &x367); 
   fscanf(fp,"%f", &x368); 
   fscanf(fp,"%f", &x369); 
   fscanf(fp,"%f", &x370); 
   fscanf(fp,"%f", &x371); 
   fscanf(fp,"%f", &x372); 
   fscanf(fp,"%f", &x373); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &b1028); 
   fscanf(fp,"%f", &b1029); 
   fscanf(fp,"%f", &b1030); 
   fscanf(fp,"%f", &b1031); 
   fscanf(fp,"%f", &b1032); 
   fscanf(fp,"%f", &b1033); 
   fscanf(fp,"%f", &b1034); 
   fscanf(fp,"%f", &b1035); 
   fscanf(fp,"%f", &b1036); 
   fscanf(fp,"%f", &b1037); 
   fscanf(fp,"%f", &b1038); 
   fscanf(fp,"%f", &b1039); 
   fscanf(fp,"%f", &b1040); 
   fscanf(fp,"%f", &b1041); 
   fscanf(fp,"%f", &b1042); 
   fscanf(fp,"%f", &b1043); 
   fscanf(fp,"%f", &b1044); 
   fscanf(fp,"%f", &b1045); 
   fscanf(fp,"%f", &b1046); 
   fscanf(fp,"%f", &b1047); 
   fscanf(fp,"%f", &b1048); 
   fscanf(fp,"%f", &b1049); 
   fscanf(fp,"%f", &b1050); 
   fscanf(fp,"%f", &b1051); 
   fscanf(fp,"%f", &b1052); 
   fscanf(fp,"%f", &b1053); 
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
   fscanf(fp,"%f", &b1114); 
   fscanf(fp,"%f", &b1115); 
   fscanf(fp,"%f", &b1116); 
   fscanf(fp,"%f", &b1117); 
   fscanf(fp,"%f", &b1118); 
   fscanf(fp,"%f", &b1119); 
   fscanf(fp,"%f", &b1120); 
   fscanf(fp,"%f", &b1121); 
   fscanf(fp,"%f", &b1122); 
   fscanf(fp,"%f", &b1123); 
   fscanf(fp,"%f", &b1124); 
   fscanf(fp,"%f", &b1125); 
   fscanf(fp,"%f", &b1126); 
   fscanf(fp,"%f", &b1127); 
   fscanf(fp,"%f", &b1128); 
   fscanf(fp,"%f", &b1129); 
   fscanf(fp,"%f", &b1130); 
   fscanf(fp,"%f", &b1131); 
   fscanf(fp,"%f", &b1132); 
   fscanf(fp,"%f", &b1133); 
   fscanf(fp,"%f", &b1134); 
   fscanf(fp,"%f", &b1135); 
   fscanf(fp,"%f", &b1136); 
   fscanf(fp,"%f", &b1137); 
   fscanf(fp,"%f", &b1138); 
   fscanf(fp,"%f", &b1139); 
   fscanf(fp,"%f", &b1140); 
   fscanf(fp,"%f", &b1141); 
   fscanf(fp,"%f", &b1142); 
   fscanf(fp,"%f", &b1143); 
   fscanf(fp,"%f", &b1144); 
   fscanf(fp,"%f", &b1145); 
   fscanf(fp,"%f", &b1146); 
   fscanf(fp,"%f", &b1147); 

   fclose(fp);
   res=-( + x122 + x123 + x124 - 5*x140 - 10*x141 - 5*x142 + 2*x155 + x156
 + 2*x157 + 10*x206 + 5*x207 + 5*x208 + 5*x209 + 5*x210 + 5*x211 - 40*x230
 - 30*x231 - 15*x232 - 15*x233 - 20*x234 - 25*x235 - 10*x236 - 30*x237
 - 40*x238 - 30*x239 - 20*x240 - 20*x241 - 35*x242 - 50*x243 - 20*x244
 - 20*x245 - 30*x246 - 35*x247 - 25*x248 - 50*x249 - 10*x250 - 15*x251
 - 20*x252 - 20*x253 - 30*x275 - 40*x276 - 40*x277 + x290 + x291 + x292
 + 5*x341 + 3*x342 + 4*x343 + x344 + x345 + x346 - 120*x365 - 110*x366
 - 150*x367 - 140*x368 - 120*x369 - 100*x370 - 90*x371 - 60*x372
 - 150*x373 - 80*x374 - 90*x375 - 120*x376 - 285*x377 - 390*x378
 - 350*x379 - 290*x380 - 405*x381 - 190*x382 - 280*x383 - 400*x384
 - 430*x385 - 290*x386 - 300*x387 - 240*x388 - 350*x389 - 250*x390
 - 300*x391 + 5*b1028 + 4*b1029 + 6*b1030 + 8*b1031 + 7*b1032 + 6*b1033
 + 6*b1034 + 9*b1035 + 4*b1036 + 10*b1037 + 9*b1038 + 5*b1039 + 6*b1040
 + 10*b1041 + 6*b1042 + 7*b1043 + 7*b1044 + 4*b1045 + 4*b1046 + 3*b1047
 + 2*b1048 + 5*b1049 + 6*b1050 + 7*b1051 + 2*b1052 + 5*b1053 + 2*b1054
 + 4*b1055 + 7*b1056 + 4*b1057 + 3*b1058 + 9*b1059 + 3*b1060 + 7*b1061
 + 2*b1062 + 9*b1063 + 3*b1064 + b1065 + 9*b1066 + 2*b1067 + 6*b1068
 + 3*b1069 + 4*b1070 + 8*b1071 + b1072 + 2*b1073 + 5*b1074 + 2*b1075
 + 3*b1076 + 4*b1077 + 3*b1078 + 5*b1079 + 7*b1080 + 6*b1081 + 2*b1082
 + 8*b1083 + 4*b1084 + b1085 + 4*b1086 + b1087 + 2*b1088 + 5*b1089
 + 2*b1090 + 9*b1091 + 2*b1092 + 9*b1093 + 5*b1094 + 8*b1095 + 4*b1096
 + 2*b1097 + 3*b1098 + 8*b1099 + 10*b1100 + 6*b1101 + 3*b1102 + 4*b1103
 + 8*b1104 + 7*b1105 + 7*b1106 + 3*b1107 + 9*b1108 + 4*b1109 + 8*b1110
 + 6*b1111 + 2*b1112 + b1113 + 3*b1114 + 8*b1115 + 3*b1116 + 4*b1117
 + 9*b1118 + 5*b1119 + b1120 + 3*b1121 + 9*b1122 + 5*b1123 + 5*b1124
 + 3*b1125 + 3*b1126 + 5*b1127 + 3*b1128 + 2*b1129 + 6*b1130 + 4*b1131
 + 6*b1132 + 2*b1133 + 6*b1134 + 6*b1135 + 6*b1136 + 4*b1137 + 3*b1138
 + 3*b1139 + 2*b1140 + b1141 + 5*b1142 + 8*b1143 + 6*b1144 + 9*b1145
 + 5*b1146 + 2*b1147 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
