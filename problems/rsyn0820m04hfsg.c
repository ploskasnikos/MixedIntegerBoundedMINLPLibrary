#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0820m04hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b1150,b1151,b1152,b1153,b1154,b1155,b1156,b1157,b1158,b1159,b1160,b1161,b1166,b1167,b1168,b1169,b1170,b1171,b1172,b1173,b1174,b1175,b1176,b1177,b1182,b1183,b1184,b1185,b1186,b1187,b1188,b1189,b1190,b1191,b1192,b1193,b1198,b1199,b1200,b1201,b1202,b1203,b1204,b1205,b1206,b1207,b1208,b1209,b1214,b1215,b1216,b1217,b1218,b1219,b1220,b1221,b1222,b1223,b1224,b1225,b1230,b1231,b1232,b1233,b1234,b1235,b1236,b1237,b1238,b1239,b1240,b1241,b1246,b1247,b1248,b1249,b1250,b1251,b1252,b1253,b1254,b1255,b1256,b1257,b1262,b1263,b1264,b1265,b1266,b1267,b1268,b1269,b1270,b1271,b1272,b1273,x1274,x1275,x1276,x1277,x1298,x1299,x1300,x1301,x1318,x1319,x1320,x1321,x1386,x1387,x1388,x1389,x1390,x1391,x1392,x1393,x1418,x1419,x1420,x1421,x1422,x1423,x1424,x1425,x1426,x1427,x1428,x1429,x1430,x1431,x1432,x1433,x1434,x1435,x1436,x1437,x1438,x1439,x1440,x1441,x1442,x1443,x1444,x1445,x1446,x1447,x1448,x1449,x1450,x1451,x1452,x1453,b1878,b1879,b1880,b1881,b1882,b1883,b1884,b1885,b1886,b1887,b1888,b1889,b1890,b1891,b1892,b1893,b1894,b1895,b1896,b1897,b1898,b1899,b1900,b1901,b1902,b1903,b1904,b1905,b1906,b1907,b1908,b1909,b1910,b1911,b1912,b1913,b1914,b1915,b1916,b1917,b1918,b1919,b1920,b1921,b1922,b1923,b1924,b1925,b1926,b1927,b1928,b1929,b1930,b1931,b1932,b1933,b1934,b1935,b1936,b1937,b1938,b1939,b1940,b1941,b1942,b1943,b1944,b1945,b1946,b1947,b1948,b1949,b1950,b1951,b1952,b1953,b1954,b1955,b1956,b1957;
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
   fscanf(fp,"%f", &b1150); 
   fscanf(fp,"%f", &b1151); 
   fscanf(fp,"%f", &b1152); 
   fscanf(fp,"%f", &b1153); 
   fscanf(fp,"%f", &b1154); 
   fscanf(fp,"%f", &b1155); 
   fscanf(fp,"%f", &b1156); 
   fscanf(fp,"%f", &b1157); 
   fscanf(fp,"%f", &b1158); 
   fscanf(fp,"%f", &b1159); 
   fscanf(fp,"%f", &b1160); 
   fscanf(fp,"%f", &b1161); 
   fscanf(fp,"%f", &b1166); 
   fscanf(fp,"%f", &b1167); 
   fscanf(fp,"%f", &b1168); 
   fscanf(fp,"%f", &b1169); 
   fscanf(fp,"%f", &b1170); 
   fscanf(fp,"%f", &b1171); 
   fscanf(fp,"%f", &b1172); 
   fscanf(fp,"%f", &b1173); 
   fscanf(fp,"%f", &b1174); 
   fscanf(fp,"%f", &b1175); 
   fscanf(fp,"%f", &b1176); 
   fscanf(fp,"%f", &b1177); 
   fscanf(fp,"%f", &b1182); 
   fscanf(fp,"%f", &b1183); 
   fscanf(fp,"%f", &b1184); 
   fscanf(fp,"%f", &b1185); 
   fscanf(fp,"%f", &b1186); 
   fscanf(fp,"%f", &b1187); 
   fscanf(fp,"%f", &b1188); 
   fscanf(fp,"%f", &b1189); 
   fscanf(fp,"%f", &b1190); 
   fscanf(fp,"%f", &b1191); 
   fscanf(fp,"%f", &b1192); 
   fscanf(fp,"%f", &b1193); 
   fscanf(fp,"%f", &b1198); 
   fscanf(fp,"%f", &b1199); 
   fscanf(fp,"%f", &b1200); 
   fscanf(fp,"%f", &b1201); 
   fscanf(fp,"%f", &b1202); 
   fscanf(fp,"%f", &b1203); 
   fscanf(fp,"%f", &b1204); 
   fscanf(fp,"%f", &b1205); 
   fscanf(fp,"%f", &b1206); 
   fscanf(fp,"%f", &b1207); 
   fscanf(fp,"%f", &b1208); 
   fscanf(fp,"%f", &b1209); 
   fscanf(fp,"%f", &b1214); 
   fscanf(fp,"%f", &b1215); 
   fscanf(fp,"%f", &b1216); 
   fscanf(fp,"%f", &b1217); 
   fscanf(fp,"%f", &b1218); 
   fscanf(fp,"%f", &b1219); 
   fscanf(fp,"%f", &b1220); 
   fscanf(fp,"%f", &b1221); 
   fscanf(fp,"%f", &b1222); 
   fscanf(fp,"%f", &b1223); 
   fscanf(fp,"%f", &b1224); 
   fscanf(fp,"%f", &b1225); 
   fscanf(fp,"%f", &b1230); 
   fscanf(fp,"%f", &b1231); 
   fscanf(fp,"%f", &b1232); 
   fscanf(fp,"%f", &b1233); 
   fscanf(fp,"%f", &b1234); 
   fscanf(fp,"%f", &b1235); 
   fscanf(fp,"%f", &b1236); 
   fscanf(fp,"%f", &b1237); 
   fscanf(fp,"%f", &b1238); 
   fscanf(fp,"%f", &b1239); 
   fscanf(fp,"%f", &b1240); 
   fscanf(fp,"%f", &b1241); 
   fscanf(fp,"%f", &b1246); 
   fscanf(fp,"%f", &b1247); 
   fscanf(fp,"%f", &b1248); 
   fscanf(fp,"%f", &b1249); 
   fscanf(fp,"%f", &b1250); 
   fscanf(fp,"%f", &b1251); 
   fscanf(fp,"%f", &b1252); 
   fscanf(fp,"%f", &b1253); 
   fscanf(fp,"%f", &b1254); 
   fscanf(fp,"%f", &b1255); 
   fscanf(fp,"%f", &b1256); 
   fscanf(fp,"%f", &b1257); 
   fscanf(fp,"%f", &b1262); 
   fscanf(fp,"%f", &b1263); 
   fscanf(fp,"%f", &b1264); 
   fscanf(fp,"%f", &b1265); 
   fscanf(fp,"%f", &b1266); 
   fscanf(fp,"%f", &b1267); 
   fscanf(fp,"%f", &b1268); 
   fscanf(fp,"%f", &b1269); 
   fscanf(fp,"%f", &b1270); 
   fscanf(fp,"%f", &b1271); 
   fscanf(fp,"%f", &b1272); 
   fscanf(fp,"%f", &b1273); 
   fscanf(fp,"%f", &x1274); 
   fscanf(fp,"%f", &x1275); 
   fscanf(fp,"%f", &x1276); 
   fscanf(fp,"%f", &x1277); 
   fscanf(fp,"%f", &x1298); 
   fscanf(fp,"%f", &x1299); 
   fscanf(fp,"%f", &x1300); 
   fscanf(fp,"%f", &x1301); 
   fscanf(fp,"%f", &x1318); 
   fscanf(fp,"%f", &x1319); 
   fscanf(fp,"%f", &x1320); 
   fscanf(fp,"%f", &x1321); 
   fscanf(fp,"%f", &x1386); 
   fscanf(fp,"%f", &x1387); 
   fscanf(fp,"%f", &x1388); 
   fscanf(fp,"%f", &x1389); 
   fscanf(fp,"%f", &x1390); 
   fscanf(fp,"%f", &x1391); 
   fscanf(fp,"%f", &x1392); 
   fscanf(fp,"%f", &x1393); 
   fscanf(fp,"%f", &x1418); 
   fscanf(fp,"%f", &x1419); 
   fscanf(fp,"%f", &x1420); 
   fscanf(fp,"%f", &x1421); 
   fscanf(fp,"%f", &x1422); 
   fscanf(fp,"%f", &x1423); 
   fscanf(fp,"%f", &x1424); 
   fscanf(fp,"%f", &x1425); 
   fscanf(fp,"%f", &x1426); 
   fscanf(fp,"%f", &x1427); 
   fscanf(fp,"%f", &x1428); 
   fscanf(fp,"%f", &x1429); 
   fscanf(fp,"%f", &x1430); 
   fscanf(fp,"%f", &x1431); 
   fscanf(fp,"%f", &x1432); 
   fscanf(fp,"%f", &x1433); 
   fscanf(fp,"%f", &x1434); 
   fscanf(fp,"%f", &x1435); 
   fscanf(fp,"%f", &x1436); 
   fscanf(fp,"%f", &x1437); 
   fscanf(fp,"%f", &x1438); 
   fscanf(fp,"%f", &x1439); 
   fscanf(fp,"%f", &x1440); 
   fscanf(fp,"%f", &x1441); 
   fscanf(fp,"%f", &x1442); 
   fscanf(fp,"%f", &x1443); 
   fscanf(fp,"%f", &x1444); 
   fscanf(fp,"%f", &x1445); 
   fscanf(fp,"%f", &x1446); 
   fscanf(fp,"%f", &x1447); 
   fscanf(fp,"%f", &x1448); 
   fscanf(fp,"%f", &x1449); 
   fscanf(fp,"%f", &x1450); 
   fscanf(fp,"%f", &x1451); 
   fscanf(fp,"%f", &x1452); 
   fscanf(fp,"%f", &x1453); 
   fscanf(fp,"%f", &b1878); 
   fscanf(fp,"%f", &b1879); 
   fscanf(fp,"%f", &b1880); 
   fscanf(fp,"%f", &b1881); 
   fscanf(fp,"%f", &b1882); 
   fscanf(fp,"%f", &b1883); 
   fscanf(fp,"%f", &b1884); 
   fscanf(fp,"%f", &b1885); 
   fscanf(fp,"%f", &b1886); 
   fscanf(fp,"%f", &b1887); 
   fscanf(fp,"%f", &b1888); 
   fscanf(fp,"%f", &b1889); 
   fscanf(fp,"%f", &b1890); 
   fscanf(fp,"%f", &b1891); 
   fscanf(fp,"%f", &b1892); 
   fscanf(fp,"%f", &b1893); 
   fscanf(fp,"%f", &b1894); 
   fscanf(fp,"%f", &b1895); 
   fscanf(fp,"%f", &b1896); 
   fscanf(fp,"%f", &b1897); 
   fscanf(fp,"%f", &b1898); 
   fscanf(fp,"%f", &b1899); 
   fscanf(fp,"%f", &b1900); 
   fscanf(fp,"%f", &b1901); 
   fscanf(fp,"%f", &b1902); 
   fscanf(fp,"%f", &b1903); 
   fscanf(fp,"%f", &b1904); 
   fscanf(fp,"%f", &b1905); 
   fscanf(fp,"%f", &b1906); 
   fscanf(fp,"%f", &b1907); 
   fscanf(fp,"%f", &b1908); 
   fscanf(fp,"%f", &b1909); 
   fscanf(fp,"%f", &b1910); 
   fscanf(fp,"%f", &b1911); 
   fscanf(fp,"%f", &b1912); 
   fscanf(fp,"%f", &b1913); 
   fscanf(fp,"%f", &b1914); 
   fscanf(fp,"%f", &b1915); 
   fscanf(fp,"%f", &b1916); 
   fscanf(fp,"%f", &b1917); 
   fscanf(fp,"%f", &b1918); 
   fscanf(fp,"%f", &b1919); 
   fscanf(fp,"%f", &b1920); 
   fscanf(fp,"%f", &b1921); 
   fscanf(fp,"%f", &b1922); 
   fscanf(fp,"%f", &b1923); 
   fscanf(fp,"%f", &b1924); 
   fscanf(fp,"%f", &b1925); 
   fscanf(fp,"%f", &b1926); 
   fscanf(fp,"%f", &b1927); 
   fscanf(fp,"%f", &b1928); 
   fscanf(fp,"%f", &b1929); 
   fscanf(fp,"%f", &b1930); 
   fscanf(fp,"%f", &b1931); 
   fscanf(fp,"%f", &b1932); 
   fscanf(fp,"%f", &b1933); 
   fscanf(fp,"%f", &b1934); 
   fscanf(fp,"%f", &b1935); 
   fscanf(fp,"%f", &b1936); 
   fscanf(fp,"%f", &b1937); 
   fscanf(fp,"%f", &b1938); 
   fscanf(fp,"%f", &b1939); 
   fscanf(fp,"%f", &b1940); 
   fscanf(fp,"%f", &b1941); 
   fscanf(fp,"%f", &b1942); 
   fscanf(fp,"%f", &b1943); 
   fscanf(fp,"%f", &b1944); 
   fscanf(fp,"%f", &b1945); 
   fscanf(fp,"%f", &b1946); 
   fscanf(fp,"%f", &b1947); 
   fscanf(fp,"%f", &b1948); 
   fscanf(fp,"%f", &b1949); 
   fscanf(fp,"%f", &b1950); 
   fscanf(fp,"%f", &b1951); 
   fscanf(fp,"%f", &b1952); 
   fscanf(fp,"%f", &b1953); 
   fscanf(fp,"%f", &b1954); 
   fscanf(fp,"%f", &b1955); 
   fscanf(fp,"%f", &b1956); 
   fscanf(fp,"%f", &b1957); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 15*x5 + 20*x22 + 21*x23 + 19*x24
 + 19*x25 + 18*x38 + 20*x39 + 20*x40 + 19*x41 + 16*x86 + 19*x87 + 17*x88
 + 16*x89 - 26*x102 - 31*x103 - 31*x104 - 35*x105 - 30*x110 - 29*x111
 - 37*x112 - 36*x113 + 20*x114 + 18*x115 + 21*x116 + 16*x117 - 2*x126
 - 2*x127 - 2*x128 - 2*x129 - 3*x130 - 2*x131 - 2*x132 - 2*x133 - 3*x134
 - 3*x135 - 3*x136 - 3*x137 - 2*x138 - 2*x139 - 2*x140 - 2*x141 + 6*b1150
 + 4*b1151 + 3*b1152 + 3*b1153 + 40*b1154 + 35*b1155 + 20*b1156 + 20*b1157
 + 46*b1158 + 39*b1159 + 23*b1160 + 23*b1161 + 7*b1166 + 4*b1167 + 4*b1168
 + 4*b1169 + 30*b1170 + 25*b1171 + 20*b1172 + 20*b1173 + 37*b1174
 + 29*b1175 + 22*b1176 + 24*b1177 + 7*b1182 + 5*b1183 + 3*b1184 + 3*b1185
 + 15*b1186 + 5*b1187 + 2*b1188 + 2*b1189 + 22*b1190 + 10*b1191 + 5*b1192
 + 5*b1193 + 11*b1198 + 8*b1199 + 6*b1200 + 5*b1201 + 13*b1202 + 8*b1203
 + 3*b1204 + 3*b1205 + 24*b1206 + 16*b1207 + 9*b1208 + 8*b1209 + 10*b1214
 + 7*b1215 + 6*b1216 + 6*b1217 + 13*b1218 + 8*b1219 + 3*b1220 + 2*b1221
 + 23*b1222 + 15*b1223 + 9*b1224 + 8*b1225 + 9*b1230 + 9*b1231 + 7*b1232
 + 6*b1233 + 30*b1234 + 30*b1235 + 25*b1236 + 20*b1237 + 39*b1238
 + 39*b1239 + 32*b1240 + 26*b1241 + 8*b1246 + 7*b1247 + 7*b1248 + 4*b1249
 + 20*b1250 + 15*b1251 + 10*b1252 + 10*b1253 + 28*b1254 + 22*b1255
 + 17*b1256 + 14*b1257 + 8*b1262 + 6*b1263 + 5*b1264 + 3*b1265 + 15*b1266
 + 10*b1267 + 6*b1268 + 3*b1269 + 23*b1270 + 16*b1271 + 11*b1272 + 6*b1273
 + x1274 + x1275 + x1276 + x1277 - 5*x1298 - 10*x1299 - 5*x1300 - 10*x1301
 + 2*x1318 + x1319 + 2*x1320 + x1321 + 10*x1386 + 5*x1387 + 5*x1388
 + 10*x1389 + 5*x1390 + 5*x1391 + 5*x1392 + 10*x1393 - 80*x1418
 - 130*x1419 - 215*x1420 - 210*x1421 - 110*x1422 - 120*x1423 - 125*x1424
 - 130*x1425 - 110*x1426 - 130*x1427 - 140*x1428 - 140*x1429 - 80*x1430
 - 90*x1431 - 120*x1432 - 100*x1433 - 285*x1434 - 390*x1435 - 350*x1436
 - 300*x1437 - 290*x1438 - 405*x1439 - 190*x1440 - 340*x1441 - 280*x1442
 - 400*x1443 - 430*x1444 - 260*x1445 - 290*x1446 - 300*x1447 - 240*x1448
 - 310*x1449 - 350*x1450 - 250*x1451 - 300*x1452 - 400*x1453 + 5*b1878
 + 4*b1879 + 6*b1880 + 3*b1881 + 8*b1882 + 7*b1883 + 6*b1884 + 5*b1885
 + 6*b1886 + 9*b1887 + 4*b1888 + 3*b1889 + 10*b1890 + 9*b1891 + 5*b1892
 + 6*b1893 + 6*b1894 + 10*b1895 + 6*b1896 + 9*b1897 + 7*b1898 + 7*b1899
 + 4*b1900 + 2*b1901 + 4*b1902 + 3*b1903 + 2*b1904 + 8*b1905 + 5*b1906
 + 6*b1907 + 7*b1908 + 4*b1909 + 2*b1910 + 5*b1911 + 2*b1912 + 6*b1913
 + 4*b1914 + 7*b1915 + 4*b1916 + 7*b1917 + 3*b1918 + 9*b1919 + 3*b1920
 + 6*b1921 + 7*b1922 + 2*b1923 + 9*b1924 + 6*b1925 + 3*b1926 + b1927
 + 9*b1928 + 10*b1929 + 2*b1930 + 6*b1931 + 3*b1932 + 7*b1933 + 4*b1934
 + 8*b1935 + b1936 + 4*b1937 + 2*b1938 + 5*b1939 + 2*b1940 + 5*b1941
 + 3*b1942 + 4*b1943 + 3*b1944 + 7*b1945 + 5*b1946 + 7*b1947 + 6*b1948
 + 2*b1949 + 2*b1950 + 8*b1951 + 4*b1952 + 2*b1953 + b1954 + 4*b1955
 + b1956 + b1957 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
