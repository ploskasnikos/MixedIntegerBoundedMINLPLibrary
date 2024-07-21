#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0810m04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b1110,b1111,b1112,b1113,b1114,b1115,b1116,b1117,b1118,b1119,b1120,b1121,b1126,b1127,b1128,b1129,b1130,b1131,b1132,b1133,b1134,b1135,b1136,b1137,b1142,b1143,b1144,b1145,b1146,b1147,b1148,b1149,b1150,b1151,b1152,b1153,b1158,b1159,b1160,b1161,b1162,b1163,b1164,b1165,b1166,b1167,b1168,b1169,b1174,b1175,b1176,b1177,b1178,b1179,b1180,b1181,b1182,b1183,b1184,b1185,b1190,b1191,b1192,b1193,b1194,b1195,b1196,b1197,b1198,b1199,b1200,b1201,b1206,b1207,b1208,b1209,b1210,b1211,b1212,b1213,b1214,b1215,b1216,b1217,b1222,b1223,b1224,b1225,b1226,b1227,b1228,b1229,b1230,b1231,b1232,b1233,x1234,x1235,x1236,x1237,x1258,x1259,x1260,x1261,x1278,x1279,x1280,x1281,x1310,x1311,x1312,x1313,x1314,x1315,x1316,x1317,x1318,x1319,x1320,x1321,x1322,x1323,x1324,x1325,x1326,x1327,x1328,x1329,x1330,x1331,x1332,x1333,b1542,b1543,b1544,b1545,b1546,b1547,b1548,b1549,b1550,b1551,b1552,b1553,b1554,b1555,b1556,b1557,b1558,b1559,b1560,b1561,b1562,b1563,b1564,b1565,b1566,b1567,b1568,b1569,b1570,b1571,b1572,b1573,b1574,b1575,b1576,b1577,b1578,b1579,b1580,b1581;
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
   fscanf(fp,"%f", &b1142); 
   fscanf(fp,"%f", &b1143); 
   fscanf(fp,"%f", &b1144); 
   fscanf(fp,"%f", &b1145); 
   fscanf(fp,"%f", &b1146); 
   fscanf(fp,"%f", &b1147); 
   fscanf(fp,"%f", &b1148); 
   fscanf(fp,"%f", &b1149); 
   fscanf(fp,"%f", &b1150); 
   fscanf(fp,"%f", &b1151); 
   fscanf(fp,"%f", &b1152); 
   fscanf(fp,"%f", &b1153); 
   fscanf(fp,"%f", &b1158); 
   fscanf(fp,"%f", &b1159); 
   fscanf(fp,"%f", &b1160); 
   fscanf(fp,"%f", &b1161); 
   fscanf(fp,"%f", &b1162); 
   fscanf(fp,"%f", &b1163); 
   fscanf(fp,"%f", &b1164); 
   fscanf(fp,"%f", &b1165); 
   fscanf(fp,"%f", &b1166); 
   fscanf(fp,"%f", &b1167); 
   fscanf(fp,"%f", &b1168); 
   fscanf(fp,"%f", &b1169); 
   fscanf(fp,"%f", &b1174); 
   fscanf(fp,"%f", &b1175); 
   fscanf(fp,"%f", &b1176); 
   fscanf(fp,"%f", &b1177); 
   fscanf(fp,"%f", &b1178); 
   fscanf(fp,"%f", &b1179); 
   fscanf(fp,"%f", &b1180); 
   fscanf(fp,"%f", &b1181); 
   fscanf(fp,"%f", &b1182); 
   fscanf(fp,"%f", &b1183); 
   fscanf(fp,"%f", &b1184); 
   fscanf(fp,"%f", &b1185); 
   fscanf(fp,"%f", &b1190); 
   fscanf(fp,"%f", &b1191); 
   fscanf(fp,"%f", &b1192); 
   fscanf(fp,"%f", &b1193); 
   fscanf(fp,"%f", &b1194); 
   fscanf(fp,"%f", &b1195); 
   fscanf(fp,"%f", &b1196); 
   fscanf(fp,"%f", &b1197); 
   fscanf(fp,"%f", &b1198); 
   fscanf(fp,"%f", &b1199); 
   fscanf(fp,"%f", &b1200); 
   fscanf(fp,"%f", &b1201); 
   fscanf(fp,"%f", &b1206); 
   fscanf(fp,"%f", &b1207); 
   fscanf(fp,"%f", &b1208); 
   fscanf(fp,"%f", &b1209); 
   fscanf(fp,"%f", &b1210); 
   fscanf(fp,"%f", &b1211); 
   fscanf(fp,"%f", &b1212); 
   fscanf(fp,"%f", &b1213); 
   fscanf(fp,"%f", &b1214); 
   fscanf(fp,"%f", &b1215); 
   fscanf(fp,"%f", &b1216); 
   fscanf(fp,"%f", &b1217); 
   fscanf(fp,"%f", &b1222); 
   fscanf(fp,"%f", &b1223); 
   fscanf(fp,"%f", &b1224); 
   fscanf(fp,"%f", &b1225); 
   fscanf(fp,"%f", &b1226); 
   fscanf(fp,"%f", &b1227); 
   fscanf(fp,"%f", &b1228); 
   fscanf(fp,"%f", &b1229); 
   fscanf(fp,"%f", &b1230); 
   fscanf(fp,"%f", &b1231); 
   fscanf(fp,"%f", &b1232); 
   fscanf(fp,"%f", &b1233); 
   fscanf(fp,"%f", &x1234); 
   fscanf(fp,"%f", &x1235); 
   fscanf(fp,"%f", &x1236); 
   fscanf(fp,"%f", &x1237); 
   fscanf(fp,"%f", &x1258); 
   fscanf(fp,"%f", &x1259); 
   fscanf(fp,"%f", &x1260); 
   fscanf(fp,"%f", &x1261); 
   fscanf(fp,"%f", &x1278); 
   fscanf(fp,"%f", &x1279); 
   fscanf(fp,"%f", &x1280); 
   fscanf(fp,"%f", &x1281); 
   fscanf(fp,"%f", &x1310); 
   fscanf(fp,"%f", &x1311); 
   fscanf(fp,"%f", &x1312); 
   fscanf(fp,"%f", &x1313); 
   fscanf(fp,"%f", &x1314); 
   fscanf(fp,"%f", &x1315); 
   fscanf(fp,"%f", &x1316); 
   fscanf(fp,"%f", &x1317); 
   fscanf(fp,"%f", &x1318); 
   fscanf(fp,"%f", &x1319); 
   fscanf(fp,"%f", &x1320); 
   fscanf(fp,"%f", &x1321); 
   fscanf(fp,"%f", &x1322); 
   fscanf(fp,"%f", &x1323); 
   fscanf(fp,"%f", &x1324); 
   fscanf(fp,"%f", &x1325); 
   fscanf(fp,"%f", &x1326); 
   fscanf(fp,"%f", &x1327); 
   fscanf(fp,"%f", &x1328); 
   fscanf(fp,"%f", &x1329); 
   fscanf(fp,"%f", &x1330); 
   fscanf(fp,"%f", &x1331); 
   fscanf(fp,"%f", &x1332); 
   fscanf(fp,"%f", &x1333); 
   fscanf(fp,"%f", &b1542); 
   fscanf(fp,"%f", &b1543); 
   fscanf(fp,"%f", &b1544); 
   fscanf(fp,"%f", &b1545); 
   fscanf(fp,"%f", &b1546); 
   fscanf(fp,"%f", &b1547); 
   fscanf(fp,"%f", &b1548); 
   fscanf(fp,"%f", &b1549); 
   fscanf(fp,"%f", &b1550); 
   fscanf(fp,"%f", &b1551); 
   fscanf(fp,"%f", &b1552); 
   fscanf(fp,"%f", &b1553); 
   fscanf(fp,"%f", &b1554); 
   fscanf(fp,"%f", &b1555); 
   fscanf(fp,"%f", &b1556); 
   fscanf(fp,"%f", &b1557); 
   fscanf(fp,"%f", &b1558); 
   fscanf(fp,"%f", &b1559); 
   fscanf(fp,"%f", &b1560); 
   fscanf(fp,"%f", &b1561); 
   fscanf(fp,"%f", &b1562); 
   fscanf(fp,"%f", &b1563); 
   fscanf(fp,"%f", &b1564); 
   fscanf(fp,"%f", &b1565); 
   fscanf(fp,"%f", &b1566); 
   fscanf(fp,"%f", &b1567); 
   fscanf(fp,"%f", &b1568); 
   fscanf(fp,"%f", &b1569); 
   fscanf(fp,"%f", &b1570); 
   fscanf(fp,"%f", &b1571); 
   fscanf(fp,"%f", &b1572); 
   fscanf(fp,"%f", &b1573); 
   fscanf(fp,"%f", &b1574); 
   fscanf(fp,"%f", &b1575); 
   fscanf(fp,"%f", &b1576); 
   fscanf(fp,"%f", &b1577); 
   fscanf(fp,"%f", &b1578); 
   fscanf(fp,"%f", &b1579); 
   fscanf(fp,"%f", &b1580); 
   fscanf(fp,"%f", &b1581); 

   fclose(fp);
   res=-( + 10*x2 + 7*x3 + 5*x4 + 5*x5 + 15*x22 + 11*x23 + 9*x24 + 9*x25
 + 18*x38 + 14*x39 + 10*x40 + 9*x41 + 19*x86 + 17*x87 + 17*x88 + 16*x89
 - 32*x102 - 41*x103 - 31*x104 - 35*x105 - 40*x110 - 39*x111 - 27*x112
 - 36*x113 + 16*x114 + 16*x115 + 15*x116 + 12*x117 - 3*x126 - 3*x127
 - 3*x128 - 3*x129 - 2*x130 - 2*x131 - 2*x132 - 2*x133 - 20*x134 - 23*x135
 - 32*x136 - 22*x137 - 21*x138 - 25*x139 - 22*x140 - 25*x141 + 6*b1110
 + 4*b1111 + 3*b1112 + 3*b1113 + 40*b1114 + 35*b1115 + 20*b1116 + 20*b1117
 + 46*b1118 + 39*b1119 + 23*b1120 + 23*b1121 + 7*b1126 + 4*b1127 + 4*b1128
 + 4*b1129 + 30*b1130 + 25*b1131 + 20*b1132 + 20*b1133 + 37*b1134
 + 29*b1135 + 22*b1136 + 24*b1137 + 7*b1142 + 5*b1143 + 3*b1144 + 3*b1145
 + 15*b1146 + 5*b1147 + 2*b1148 + 2*b1149 + 22*b1150 + 10*b1151 + 5*b1152
 + 5*b1153 + 11*b1158 + 8*b1159 + 6*b1160 + 5*b1161 + 13*b1162 + 8*b1163
 + 3*b1164 + 3*b1165 + 24*b1166 + 16*b1167 + 9*b1168 + 8*b1169 + 10*b1174
 + 7*b1175 + 6*b1176 + 6*b1177 + 13*b1178 + 8*b1179 + 3*b1180 + 2*b1181
 + 23*b1182 + 15*b1183 + 9*b1184 + 8*b1185 + 9*b1190 + 9*b1191 + 7*b1192
 + 6*b1193 + 30*b1194 + 30*b1195 + 25*b1196 + 20*b1197 + 39*b1198
 + 39*b1199 + 32*b1200 + 26*b1201 + 8*b1206 + 7*b1207 + 7*b1208 + 4*b1209
 + 20*b1210 + 15*b1211 + 10*b1212 + 10*b1213 + 28*b1214 + 22*b1215
 + 17*b1216 + 14*b1217 + 8*b1222 + 6*b1223 + 5*b1224 + 3*b1225 + 15*b1226
 + 10*b1227 + 6*b1228 + 3*b1229 + 23*b1230 + 16*b1231 + 11*b1232 + 6*b1233
 + x1234 + x1235 + x1236 + x1237 - 5*x1258 - 10*x1259 - 5*x1260 - 10*x1261
 + 2*x1278 + x1279 + 2*x1280 + x1281 - 80*x1310 - 90*x1311 - 120*x1312
 - 100*x1313 - 285*x1314 - 390*x1315 - 350*x1316 - 300*x1317 - 290*x1318
 - 405*x1319 - 190*x1320 - 340*x1321 - 280*x1322 - 400*x1323 - 430*x1324
 - 260*x1325 - 290*x1326 - 300*x1327 - 240*x1328 - 310*x1329 - 350*x1330
 - 250*x1331 - 300*x1332 - 400*x1333 + 5*b1542 + 4*b1543 + 6*b1544
 + 3*b1545 + 8*b1546 + 7*b1547 + 6*b1548 + 5*b1549 + 6*b1550 + 9*b1551
 + 4*b1552 + 3*b1553 + 10*b1554 + 9*b1555 + 5*b1556 + 6*b1557 + 6*b1558
 + 10*b1559 + 6*b1560 + 9*b1561 + 7*b1562 + 7*b1563 + 4*b1564 + 2*b1565
 + 4*b1566 + 3*b1567 + 2*b1568 + 8*b1569 + 5*b1570 + 6*b1571 + 7*b1572
 + 4*b1573 + 2*b1574 + 5*b1575 + 2*b1576 + 6*b1577 + 4*b1578 + 7*b1579
 + 4*b1580 + 7*b1581 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
