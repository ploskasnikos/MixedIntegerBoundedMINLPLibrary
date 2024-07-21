#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0805m04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b1090,b1091,b1092,b1093,b1094,b1095,b1096,b1097,b1098,b1099,b1100,b1101,b1106,b1107,b1108,b1109,b1110,b1111,b1112,b1113,b1114,b1115,b1116,b1117,b1122,b1123,b1124,b1125,b1126,b1127,b1128,b1129,b1130,b1131,b1132,b1133,b1138,b1139,b1140,b1141,b1142,b1143,b1144,b1145,b1146,b1147,b1148,b1149,b1154,b1155,b1156,b1157,b1158,b1159,b1160,b1161,b1162,b1163,b1164,b1165,b1170,b1171,b1172,b1173,b1174,b1175,b1176,b1177,b1178,b1179,b1180,b1181,b1186,b1187,b1188,b1189,b1190,b1191,b1192,b1193,b1194,b1195,b1196,b1197,b1202,b1203,b1204,b1205,b1206,b1207,b1208,b1209,b1210,b1211,b1212,b1213,x1214,x1215,x1216,x1217,x1238,x1239,x1240,x1241,x1258,x1259,x1260,x1261,x1262,x1263,x1264,x1265,x1266,x1267,x1268,x1269,x1270,x1271,x1272,x1273,b1382,b1383,b1384,b1385,b1386,b1387,b1388,b1389,b1390,b1391,b1392,b1393,b1394,b1395,b1396,b1397,b1398,b1399,b1400,b1401;
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
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
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
   fscanf(fp,"%f", &b1148); 
   fscanf(fp,"%f", &b1149); 
   fscanf(fp,"%f", &b1154); 
   fscanf(fp,"%f", &b1155); 
   fscanf(fp,"%f", &b1156); 
   fscanf(fp,"%f", &b1157); 
   fscanf(fp,"%f", &b1158); 
   fscanf(fp,"%f", &b1159); 
   fscanf(fp,"%f", &b1160); 
   fscanf(fp,"%f", &b1161); 
   fscanf(fp,"%f", &b1162); 
   fscanf(fp,"%f", &b1163); 
   fscanf(fp,"%f", &b1164); 
   fscanf(fp,"%f", &b1165); 
   fscanf(fp,"%f", &b1170); 
   fscanf(fp,"%f", &b1171); 
   fscanf(fp,"%f", &b1172); 
   fscanf(fp,"%f", &b1173); 
   fscanf(fp,"%f", &b1174); 
   fscanf(fp,"%f", &b1175); 
   fscanf(fp,"%f", &b1176); 
   fscanf(fp,"%f", &b1177); 
   fscanf(fp,"%f", &b1178); 
   fscanf(fp,"%f", &b1179); 
   fscanf(fp,"%f", &b1180); 
   fscanf(fp,"%f", &b1181); 
   fscanf(fp,"%f", &b1186); 
   fscanf(fp,"%f", &b1187); 
   fscanf(fp,"%f", &b1188); 
   fscanf(fp,"%f", &b1189); 
   fscanf(fp,"%f", &b1190); 
   fscanf(fp,"%f", &b1191); 
   fscanf(fp,"%f", &b1192); 
   fscanf(fp,"%f", &b1193); 
   fscanf(fp,"%f", &b1194); 
   fscanf(fp,"%f", &b1195); 
   fscanf(fp,"%f", &b1196); 
   fscanf(fp,"%f", &b1197); 
   fscanf(fp,"%f", &b1202); 
   fscanf(fp,"%f", &b1203); 
   fscanf(fp,"%f", &b1204); 
   fscanf(fp,"%f", &b1205); 
   fscanf(fp,"%f", &b1206); 
   fscanf(fp,"%f", &b1207); 
   fscanf(fp,"%f", &b1208); 
   fscanf(fp,"%f", &b1209); 
   fscanf(fp,"%f", &b1210); 
   fscanf(fp,"%f", &b1211); 
   fscanf(fp,"%f", &b1212); 
   fscanf(fp,"%f", &b1213); 
   fscanf(fp,"%f", &x1214); 
   fscanf(fp,"%f", &x1215); 
   fscanf(fp,"%f", &x1216); 
   fscanf(fp,"%f", &x1217); 
   fscanf(fp,"%f", &x1238); 
   fscanf(fp,"%f", &x1239); 
   fscanf(fp,"%f", &x1240); 
   fscanf(fp,"%f", &x1241); 
   fscanf(fp,"%f", &x1258); 
   fscanf(fp,"%f", &x1259); 
   fscanf(fp,"%f", &x1260); 
   fscanf(fp,"%f", &x1261); 
   fscanf(fp,"%f", &x1262); 
   fscanf(fp,"%f", &x1263); 
   fscanf(fp,"%f", &x1264); 
   fscanf(fp,"%f", &x1265); 
   fscanf(fp,"%f", &x1266); 
   fscanf(fp,"%f", &x1267); 
   fscanf(fp,"%f", &x1268); 
   fscanf(fp,"%f", &x1269); 
   fscanf(fp,"%f", &x1270); 
   fscanf(fp,"%f", &x1271); 
   fscanf(fp,"%f", &x1272); 
   fscanf(fp,"%f", &x1273); 
   fscanf(fp,"%f", &b1382); 
   fscanf(fp,"%f", &b1383); 
   fscanf(fp,"%f", &b1384); 
   fscanf(fp,"%f", &b1385); 
   fscanf(fp,"%f", &b1386); 
   fscanf(fp,"%f", &b1387); 
   fscanf(fp,"%f", &b1388); 
   fscanf(fp,"%f", &b1389); 
   fscanf(fp,"%f", &b1390); 
   fscanf(fp,"%f", &b1391); 
   fscanf(fp,"%f", &b1392); 
   fscanf(fp,"%f", &b1393); 
   fscanf(fp,"%f", &b1394); 
   fscanf(fp,"%f", &b1395); 
   fscanf(fp,"%f", &b1396); 
   fscanf(fp,"%f", &b1397); 
   fscanf(fp,"%f", &b1398); 
   fscanf(fp,"%f", &b1399); 
   fscanf(fp,"%f", &b1400); 
   fscanf(fp,"%f", &b1401); 

   fclose(fp);
   res=-( + 10*x2 + 7*x3 + 5*x4 + 5*x5 + 15*x22 + 11*x23 + 9*x24 + 9*x25
 + 18*x38 + 14*x39 + 10*x40 + 9*x41 + 19*x86 + 17*x87 + 17*x88 + 16*x89
 - 32*x102 - 41*x103 - 31*x104 - 35*x105 - 40*x110 - 39*x111 - 27*x112
 - 36*x113 + 16*x114 + 16*x115 + 15*x116 + 12*x117 - 3*x126 - 3*x127
 - 3*x128 - 3*x129 - 2*x130 - 2*x131 - 2*x132 - 2*x133 - 20*x134 - 23*x135
 - 32*x136 - 22*x137 - 21*x138 - 25*x139 - 22*x140 - 25*x141 + 6*b1090
 + 4*b1091 + 3*b1092 + 3*b1093 + 40*b1094 + 35*b1095 + 20*b1096 + 20*b1097
 + 46*b1098 + 39*b1099 + 23*b1100 + 23*b1101 + 7*b1106 + 4*b1107 + 4*b1108
 + 4*b1109 + 30*b1110 + 25*b1111 + 20*b1112 + 20*b1113 + 37*b1114
 + 29*b1115 + 22*b1116 + 24*b1117 + 7*b1122 + 5*b1123 + 3*b1124 + 3*b1125
 + 15*b1126 + 5*b1127 + 2*b1128 + 2*b1129 + 22*b1130 + 10*b1131 + 5*b1132
 + 5*b1133 + 11*b1138 + 8*b1139 + 6*b1140 + 5*b1141 + 13*b1142 + 8*b1143
 + 3*b1144 + 3*b1145 + 24*b1146 + 16*b1147 + 9*b1148 + 8*b1149 + 10*b1154
 + 7*b1155 + 6*b1156 + 6*b1157 + 13*b1158 + 8*b1159 + 3*b1160 + 2*b1161
 + 23*b1162 + 15*b1163 + 9*b1164 + 8*b1165 + 9*b1170 + 9*b1171 + 7*b1172
 + 6*b1173 + 30*b1174 + 30*b1175 + 25*b1176 + 20*b1177 + 39*b1178
 + 39*b1179 + 32*b1180 + 26*b1181 + 8*b1186 + 7*b1187 + 7*b1188 + 4*b1189
 + 20*b1190 + 15*b1191 + 10*b1192 + 10*b1193 + 28*b1194 + 22*b1195
 + 17*b1196 + 14*b1197 + 8*b1202 + 6*b1203 + 5*b1204 + 3*b1205 + 15*b1206
 + 10*b1207 + 6*b1208 + 3*b1209 + 23*b1210 + 16*b1211 + 11*b1212 + 6*b1213
 + x1214 + x1215 + x1216 + x1217 - 5*x1238 - 10*x1239 - 5*x1240 - 10*x1241
 + 2*x1258 + x1259 + 2*x1260 + x1261 - 80*x1262 - 90*x1263 - 120*x1264
 - 100*x1265 - 285*x1266 - 390*x1267 - 350*x1268 - 300*x1269 - 290*x1270
 - 405*x1271 - 190*x1272 - 340*x1273 + 5*b1382 + 4*b1383 + 6*b1384
 + 3*b1385 + 8*b1386 + 7*b1387 + 6*b1388 + 5*b1389 + 6*b1390 + 9*b1391
 + 4*b1392 + 3*b1393 + 10*b1394 + 9*b1395 + 5*b1396 + 6*b1397 + 6*b1398
 + 10*b1399 + 6*b1400 + 9*b1401 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
