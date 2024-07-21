#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0815m04hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b1130,b1131,b1132,b1133,b1134,b1135,b1136,b1137,b1138,b1139,b1140,b1141,b1146,b1147,b1148,b1149,b1150,b1151,b1152,b1153,b1154,b1155,b1156,b1157,b1162,b1163,b1164,b1165,b1166,b1167,b1168,b1169,b1170,b1171,b1172,b1173,b1178,b1179,b1180,b1181,b1182,b1183,b1184,b1185,b1186,b1187,b1188,b1189,b1194,b1195,b1196,b1197,b1198,b1199,b1200,b1201,b1202,b1203,b1204,b1205,b1210,b1211,b1212,b1213,b1214,b1215,b1216,b1217,b1218,b1219,b1220,b1221,b1226,b1227,b1228,b1229,b1230,b1231,b1232,b1233,b1234,b1235,b1236,b1237,b1242,b1243,b1244,b1245,b1246,b1247,b1248,b1249,b1250,b1251,b1252,b1253,x1254,x1255,x1256,x1257,x1278,x1279,x1280,x1281,x1298,x1299,x1300,x1301,x1350,x1351,x1352,x1353,x1354,x1355,x1356,x1357,x1366,x1367,x1368,x1369,x1370,x1371,x1372,x1373,x1398,x1399,x1400,x1401,x1402,x1403,x1404,x1405,x1406,x1407,x1408,x1409,x1410,x1411,x1412,x1413,b1738,b1739,b1740,b1741,b1742,b1743,b1744,b1745,b1746,b1747,b1748,b1749,b1750,b1751,b1752,b1753,b1754,b1755,b1756,b1757,b1758,b1759,b1760,b1761,b1762,b1763,b1764,b1765,b1766,b1767,b1768,b1769,b1770,b1771,b1772,b1773,b1774,b1775,b1776,b1777,b1778,b1779,b1780,b1781,b1782,b1783,b1784,b1785,b1786,b1787,b1788,b1789,b1790,b1791,b1792,b1793,b1794,b1795,b1796,b1797;
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
   fscanf(fp,"%f", &b1146); 
   fscanf(fp,"%f", &b1147); 
   fscanf(fp,"%f", &b1148); 
   fscanf(fp,"%f", &b1149); 
   fscanf(fp,"%f", &b1150); 
   fscanf(fp,"%f", &b1151); 
   fscanf(fp,"%f", &b1152); 
   fscanf(fp,"%f", &b1153); 
   fscanf(fp,"%f", &b1154); 
   fscanf(fp,"%f", &b1155); 
   fscanf(fp,"%f", &b1156); 
   fscanf(fp,"%f", &b1157); 
   fscanf(fp,"%f", &b1162); 
   fscanf(fp,"%f", &b1163); 
   fscanf(fp,"%f", &b1164); 
   fscanf(fp,"%f", &b1165); 
   fscanf(fp,"%f", &b1166); 
   fscanf(fp,"%f", &b1167); 
   fscanf(fp,"%f", &b1168); 
   fscanf(fp,"%f", &b1169); 
   fscanf(fp,"%f", &b1170); 
   fscanf(fp,"%f", &b1171); 
   fscanf(fp,"%f", &b1172); 
   fscanf(fp,"%f", &b1173); 
   fscanf(fp,"%f", &b1178); 
   fscanf(fp,"%f", &b1179); 
   fscanf(fp,"%f", &b1180); 
   fscanf(fp,"%f", &b1181); 
   fscanf(fp,"%f", &b1182); 
   fscanf(fp,"%f", &b1183); 
   fscanf(fp,"%f", &b1184); 
   fscanf(fp,"%f", &b1185); 
   fscanf(fp,"%f", &b1186); 
   fscanf(fp,"%f", &b1187); 
   fscanf(fp,"%f", &b1188); 
   fscanf(fp,"%f", &b1189); 
   fscanf(fp,"%f", &b1194); 
   fscanf(fp,"%f", &b1195); 
   fscanf(fp,"%f", &b1196); 
   fscanf(fp,"%f", &b1197); 
   fscanf(fp,"%f", &b1198); 
   fscanf(fp,"%f", &b1199); 
   fscanf(fp,"%f", &b1200); 
   fscanf(fp,"%f", &b1201); 
   fscanf(fp,"%f", &b1202); 
   fscanf(fp,"%f", &b1203); 
   fscanf(fp,"%f", &b1204); 
   fscanf(fp,"%f", &b1205); 
   fscanf(fp,"%f", &b1210); 
   fscanf(fp,"%f", &b1211); 
   fscanf(fp,"%f", &b1212); 
   fscanf(fp,"%f", &b1213); 
   fscanf(fp,"%f", &b1214); 
   fscanf(fp,"%f", &b1215); 
   fscanf(fp,"%f", &b1216); 
   fscanf(fp,"%f", &b1217); 
   fscanf(fp,"%f", &b1218); 
   fscanf(fp,"%f", &b1219); 
   fscanf(fp,"%f", &b1220); 
   fscanf(fp,"%f", &b1221); 
   fscanf(fp,"%f", &b1226); 
   fscanf(fp,"%f", &b1227); 
   fscanf(fp,"%f", &b1228); 
   fscanf(fp,"%f", &b1229); 
   fscanf(fp,"%f", &b1230); 
   fscanf(fp,"%f", &b1231); 
   fscanf(fp,"%f", &b1232); 
   fscanf(fp,"%f", &b1233); 
   fscanf(fp,"%f", &b1234); 
   fscanf(fp,"%f", &b1235); 
   fscanf(fp,"%f", &b1236); 
   fscanf(fp,"%f", &b1237); 
   fscanf(fp,"%f", &b1242); 
   fscanf(fp,"%f", &b1243); 
   fscanf(fp,"%f", &b1244); 
   fscanf(fp,"%f", &b1245); 
   fscanf(fp,"%f", &b1246); 
   fscanf(fp,"%f", &b1247); 
   fscanf(fp,"%f", &b1248); 
   fscanf(fp,"%f", &b1249); 
   fscanf(fp,"%f", &b1250); 
   fscanf(fp,"%f", &b1251); 
   fscanf(fp,"%f", &b1252); 
   fscanf(fp,"%f", &b1253); 
   fscanf(fp,"%f", &x1254); 
   fscanf(fp,"%f", &x1255); 
   fscanf(fp,"%f", &x1256); 
   fscanf(fp,"%f", &x1257); 
   fscanf(fp,"%f", &x1278); 
   fscanf(fp,"%f", &x1279); 
   fscanf(fp,"%f", &x1280); 
   fscanf(fp,"%f", &x1281); 
   fscanf(fp,"%f", &x1298); 
   fscanf(fp,"%f", &x1299); 
   fscanf(fp,"%f", &x1300); 
   fscanf(fp,"%f", &x1301); 
   fscanf(fp,"%f", &x1350); 
   fscanf(fp,"%f", &x1351); 
   fscanf(fp,"%f", &x1352); 
   fscanf(fp,"%f", &x1353); 
   fscanf(fp,"%f", &x1354); 
   fscanf(fp,"%f", &x1355); 
   fscanf(fp,"%f", &x1356); 
   fscanf(fp,"%f", &x1357); 
   fscanf(fp,"%f", &x1366); 
   fscanf(fp,"%f", &x1367); 
   fscanf(fp,"%f", &x1368); 
   fscanf(fp,"%f", &x1369); 
   fscanf(fp,"%f", &x1370); 
   fscanf(fp,"%f", &x1371); 
   fscanf(fp,"%f", &x1372); 
   fscanf(fp,"%f", &x1373); 
   fscanf(fp,"%f", &x1398); 
   fscanf(fp,"%f", &x1399); 
   fscanf(fp,"%f", &x1400); 
   fscanf(fp,"%f", &x1401); 
   fscanf(fp,"%f", &x1402); 
   fscanf(fp,"%f", &x1403); 
   fscanf(fp,"%f", &x1404); 
   fscanf(fp,"%f", &x1405); 
   fscanf(fp,"%f", &x1406); 
   fscanf(fp,"%f", &x1407); 
   fscanf(fp,"%f", &x1408); 
   fscanf(fp,"%f", &x1409); 
   fscanf(fp,"%f", &x1410); 
   fscanf(fp,"%f", &x1411); 
   fscanf(fp,"%f", &x1412); 
   fscanf(fp,"%f", &x1413); 
   fscanf(fp,"%f", &b1738); 
   fscanf(fp,"%f", &b1739); 
   fscanf(fp,"%f", &b1740); 
   fscanf(fp,"%f", &b1741); 
   fscanf(fp,"%f", &b1742); 
   fscanf(fp,"%f", &b1743); 
   fscanf(fp,"%f", &b1744); 
   fscanf(fp,"%f", &b1745); 
   fscanf(fp,"%f", &b1746); 
   fscanf(fp,"%f", &b1747); 
   fscanf(fp,"%f", &b1748); 
   fscanf(fp,"%f", &b1749); 
   fscanf(fp,"%f", &b1750); 
   fscanf(fp,"%f", &b1751); 
   fscanf(fp,"%f", &b1752); 
   fscanf(fp,"%f", &b1753); 
   fscanf(fp,"%f", &b1754); 
   fscanf(fp,"%f", &b1755); 
   fscanf(fp,"%f", &b1756); 
   fscanf(fp,"%f", &b1757); 
   fscanf(fp,"%f", &b1758); 
   fscanf(fp,"%f", &b1759); 
   fscanf(fp,"%f", &b1760); 
   fscanf(fp,"%f", &b1761); 
   fscanf(fp,"%f", &b1762); 
   fscanf(fp,"%f", &b1763); 
   fscanf(fp,"%f", &b1764); 
   fscanf(fp,"%f", &b1765); 
   fscanf(fp,"%f", &b1766); 
   fscanf(fp,"%f", &b1767); 
   fscanf(fp,"%f", &b1768); 
   fscanf(fp,"%f", &b1769); 
   fscanf(fp,"%f", &b1770); 
   fscanf(fp,"%f", &b1771); 
   fscanf(fp,"%f", &b1772); 
   fscanf(fp,"%f", &b1773); 
   fscanf(fp,"%f", &b1774); 
   fscanf(fp,"%f", &b1775); 
   fscanf(fp,"%f", &b1776); 
   fscanf(fp,"%f", &b1777); 
   fscanf(fp,"%f", &b1778); 
   fscanf(fp,"%f", &b1779); 
   fscanf(fp,"%f", &b1780); 
   fscanf(fp,"%f", &b1781); 
   fscanf(fp,"%f", &b1782); 
   fscanf(fp,"%f", &b1783); 
   fscanf(fp,"%f", &b1784); 
   fscanf(fp,"%f", &b1785); 
   fscanf(fp,"%f", &b1786); 
   fscanf(fp,"%f", &b1787); 
   fscanf(fp,"%f", &b1788); 
   fscanf(fp,"%f", &b1789); 
   fscanf(fp,"%f", &b1790); 
   fscanf(fp,"%f", &b1791); 
   fscanf(fp,"%f", &b1792); 
   fscanf(fp,"%f", &b1793); 
   fscanf(fp,"%f", &b1794); 
   fscanf(fp,"%f", &b1795); 
   fscanf(fp,"%f", &b1796); 
   fscanf(fp,"%f", &b1797); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 15*x5 + 20*x22 + 21*x23 + 19*x24
 + 19*x25 + 18*x38 + 20*x39 + 20*x40 + 19*x41 + 16*x86 + 19*x87 + 17*x88
 + 16*x89 - 26*x102 - 31*x103 - 31*x104 - 35*x105 - 30*x110 - 29*x111
 - 37*x112 - 36*x113 + 20*x114 + 18*x115 + 21*x116 + 16*x117 - 2*x126
 - 2*x127 - 2*x128 - 2*x129 - 3*x130 - 2*x131 - 2*x132 - 2*x133 - 3*x134
 - 3*x135 - 3*x136 - 3*x137 - 2*x138 - 2*x139 - 2*x140 - 2*x141 + 6*b1130
 + 4*b1131 + 3*b1132 + 3*b1133 + 40*b1134 + 35*b1135 + 20*b1136 + 20*b1137
 + 46*b1138 + 39*b1139 + 23*b1140 + 23*b1141 + 7*b1146 + 4*b1147 + 4*b1148
 + 4*b1149 + 30*b1150 + 25*b1151 + 20*b1152 + 20*b1153 + 37*b1154
 + 29*b1155 + 22*b1156 + 24*b1157 + 7*b1162 + 5*b1163 + 3*b1164 + 3*b1165
 + 15*b1166 + 5*b1167 + 2*b1168 + 2*b1169 + 22*b1170 + 10*b1171 + 5*b1172
 + 5*b1173 + 11*b1178 + 8*b1179 + 6*b1180 + 5*b1181 + 13*b1182 + 8*b1183
 + 3*b1184 + 3*b1185 + 24*b1186 + 16*b1187 + 9*b1188 + 8*b1189 + 10*b1194
 + 7*b1195 + 6*b1196 + 6*b1197 + 13*b1198 + 8*b1199 + 3*b1200 + 2*b1201
 + 23*b1202 + 15*b1203 + 9*b1204 + 8*b1205 + 9*b1210 + 9*b1211 + 7*b1212
 + 6*b1213 + 30*b1214 + 30*b1215 + 25*b1216 + 20*b1217 + 39*b1218
 + 39*b1219 + 32*b1220 + 26*b1221 + 8*b1226 + 7*b1227 + 7*b1228 + 4*b1229
 + 20*b1230 + 15*b1231 + 10*b1232 + 10*b1233 + 28*b1234 + 22*b1235
 + 17*b1236 + 14*b1237 + 8*b1242 + 6*b1243 + 5*b1244 + 3*b1245 + 15*b1246
 + 10*b1247 + 6*b1248 + 3*b1249 + 23*b1250 + 16*b1251 + 11*b1252 + 6*b1253
 + x1254 + x1255 + x1256 + x1257 - 5*x1278 - 10*x1279 - 5*x1280 - 10*x1281
 + 2*x1298 + x1299 + 2*x1300 + x1301 - 500*x1350 - 600*x1351 - 350*x1352
 - 400*x1353 - 350*x1354 - 400*x1355 - 450*x1356 - 400*x1357 + 10*x1366
 + 5*x1367 + 5*x1368 + 10*x1369 + 5*x1370 + 5*x1371 + 5*x1372 + 10*x1373
 - 180*x1398 - 130*x1399 - 215*x1400 - 210*x1401 - 110*x1402 - 120*x1403
 - 125*x1404 - 130*x1405 - 110*x1406 - 130*x1407 - 140*x1408 - 140*x1409
 - 280*x1410 - 290*x1411 - 220*x1412 - 200*x1413 + 5*b1738 + 4*b1739
 + 6*b1740 + 3*b1741 + 8*b1742 + 7*b1743 + 6*b1744 + 5*b1745 + 6*b1746
 + 9*b1747 + 4*b1748 + 3*b1749 + 10*b1750 + 9*b1751 + 5*b1752 + 6*b1753
 + 6*b1754 + 10*b1755 + 6*b1756 + 9*b1757 + 7*b1758 + 7*b1759 + 4*b1760
 + 2*b1761 + 4*b1762 + 3*b1763 + 2*b1764 + 8*b1765 + 5*b1766 + 6*b1767
 + 7*b1768 + 4*b1769 + 2*b1770 + 5*b1771 + 2*b1772 + 6*b1773 + 4*b1774
 + 7*b1775 + 4*b1776 + 7*b1777 + 3*b1778 + 9*b1779 + 3*b1780 + 6*b1781
 + 7*b1782 + 2*b1783 + 9*b1784 + 6*b1785 + 3*b1786 + b1787 + 9*b1788
 + 10*b1789 + 2*b1790 + 6*b1791 + 3*b1792 + 7*b1793 + 4*b1794 + 8*b1795
 + b1796 + 4*b1797 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
