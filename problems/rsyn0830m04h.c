#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830m04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b1070,b1071,b1072,b1073,b1074,b1075,b1076,b1077,b1078,b1079,b1080,b1081,b1086,b1087,b1088,b1089,b1090,b1091,b1092,b1093,b1094,b1095,b1096,b1097,b1102,b1103,b1104,b1105,b1106,b1107,b1108,b1109,b1110,b1111,b1112,b1113,b1118,b1119,b1120,b1121,b1122,b1123,b1124,b1125,b1126,b1127,b1128,b1129,b1134,b1135,b1136,b1137,b1138,b1139,b1140,b1141,b1142,b1143,b1144,b1145,b1150,b1151,b1152,b1153,b1154,b1155,b1156,b1157,b1158,b1159,b1160,b1161,b1166,b1167,b1168,b1169,b1170,b1171,b1172,b1173,b1174,b1175,b1176,b1177,b1182,b1183,b1184,b1185,b1186,b1187,b1188,b1189,b1190,b1191,b1192,b1193,x1194,x1195,x1196,x1197,x1218,x1219,x1220,x1221,x1238,x1239,x1240,x1241,x1306,x1307,x1308,x1309,x1310,x1311,x1312,x1313,x1338,x1339,x1340,x1341,x1342,x1343,x1344,x1345,x1346,x1347,x1348,x1349,x1350,x1351,x1352,x1353,x1354,x1355,x1356,x1357,x1358,x1359,x1360,x1361,x1362,x1363,x1364,x1365,x1366,x1367,x1368,x1369,x1398,x1399,x1400,x1401,x1418,x1419,x1420,x1421,x1450,x1451,x1452,x1453,x1454,x1455,x1456,x1457,x1458,x1459,x1460,x1461,x1462,x1463,x1464,x1465,x1466,x1467,x1468,x1469,x1470,x1471,x1472,x1473,b2106,b2107,b2108,b2109,b2110,b2111,b2112,b2113,b2114,b2115,b2116,b2117,b2118,b2119,b2120,b2121,b2122,b2123,b2124,b2125,b2126,b2127,b2128,b2129,b2130,b2131,b2132,b2133,b2134,b2135,b2136,b2137,b2138,b2139,b2140,b2141,b2142,b2143,b2144,b2145,b2146,b2147,b2148,b2149,b2150,b2151,b2152,b2153,b2154,b2155,b2156,b2157,b2158,b2159,b2160,b2161,b2162,b2163,b2164,b2165,b2166,b2167,b2168,b2169,b2170,b2171,b2172,b2173,b2174,b2175,b2176,b2177,b2178,b2179,b2180,b2181,b2182,b2183,b2184,b2185,b2186,b2187,b2188,b2189,b2190,b2191,b2192,b2193,b2194,b2195,b2196,b2197,b2198,b2199,b2200,b2201,b2202,b2203,b2204,b2205,b2206,b2207,b2208,b2209,b2210,b2211,b2212,b2213,b2214,b2215,b2216,b2217,b2218,b2219,b2220,b2221,b2222,b2223,b2224,b2225;
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
   fscanf(fp,"%f", &x1194); 
   fscanf(fp,"%f", &x1195); 
   fscanf(fp,"%f", &x1196); 
   fscanf(fp,"%f", &x1197); 
   fscanf(fp,"%f", &x1218); 
   fscanf(fp,"%f", &x1219); 
   fscanf(fp,"%f", &x1220); 
   fscanf(fp,"%f", &x1221); 
   fscanf(fp,"%f", &x1238); 
   fscanf(fp,"%f", &x1239); 
   fscanf(fp,"%f", &x1240); 
   fscanf(fp,"%f", &x1241); 
   fscanf(fp,"%f", &x1306); 
   fscanf(fp,"%f", &x1307); 
   fscanf(fp,"%f", &x1308); 
   fscanf(fp,"%f", &x1309); 
   fscanf(fp,"%f", &x1310); 
   fscanf(fp,"%f", &x1311); 
   fscanf(fp,"%f", &x1312); 
   fscanf(fp,"%f", &x1313); 
   fscanf(fp,"%f", &x1338); 
   fscanf(fp,"%f", &x1339); 
   fscanf(fp,"%f", &x1340); 
   fscanf(fp,"%f", &x1341); 
   fscanf(fp,"%f", &x1342); 
   fscanf(fp,"%f", &x1343); 
   fscanf(fp,"%f", &x1344); 
   fscanf(fp,"%f", &x1345); 
   fscanf(fp,"%f", &x1346); 
   fscanf(fp,"%f", &x1347); 
   fscanf(fp,"%f", &x1348); 
   fscanf(fp,"%f", &x1349); 
   fscanf(fp,"%f", &x1350); 
   fscanf(fp,"%f", &x1351); 
   fscanf(fp,"%f", &x1352); 
   fscanf(fp,"%f", &x1353); 
   fscanf(fp,"%f", &x1354); 
   fscanf(fp,"%f", &x1355); 
   fscanf(fp,"%f", &x1356); 
   fscanf(fp,"%f", &x1357); 
   fscanf(fp,"%f", &x1358); 
   fscanf(fp,"%f", &x1359); 
   fscanf(fp,"%f", &x1360); 
   fscanf(fp,"%f", &x1361); 
   fscanf(fp,"%f", &x1362); 
   fscanf(fp,"%f", &x1363); 
   fscanf(fp,"%f", &x1364); 
   fscanf(fp,"%f", &x1365); 
   fscanf(fp,"%f", &x1366); 
   fscanf(fp,"%f", &x1367); 
   fscanf(fp,"%f", &x1368); 
   fscanf(fp,"%f", &x1369); 
   fscanf(fp,"%f", &x1398); 
   fscanf(fp,"%f", &x1399); 
   fscanf(fp,"%f", &x1400); 
   fscanf(fp,"%f", &x1401); 
   fscanf(fp,"%f", &x1418); 
   fscanf(fp,"%f", &x1419); 
   fscanf(fp,"%f", &x1420); 
   fscanf(fp,"%f", &x1421); 
   fscanf(fp,"%f", &x1450); 
   fscanf(fp,"%f", &x1451); 
   fscanf(fp,"%f", &x1452); 
   fscanf(fp,"%f", &x1453); 
   fscanf(fp,"%f", &x1454); 
   fscanf(fp,"%f", &x1455); 
   fscanf(fp,"%f", &x1456); 
   fscanf(fp,"%f", &x1457); 
   fscanf(fp,"%f", &x1458); 
   fscanf(fp,"%f", &x1459); 
   fscanf(fp,"%f", &x1460); 
   fscanf(fp,"%f", &x1461); 
   fscanf(fp,"%f", &x1462); 
   fscanf(fp,"%f", &x1463); 
   fscanf(fp,"%f", &x1464); 
   fscanf(fp,"%f", &x1465); 
   fscanf(fp,"%f", &x1466); 
   fscanf(fp,"%f", &x1467); 
   fscanf(fp,"%f", &x1468); 
   fscanf(fp,"%f", &x1469); 
   fscanf(fp,"%f", &x1470); 
   fscanf(fp,"%f", &x1471); 
   fscanf(fp,"%f", &x1472); 
   fscanf(fp,"%f", &x1473); 
   fscanf(fp,"%f", &b2106); 
   fscanf(fp,"%f", &b2107); 
   fscanf(fp,"%f", &b2108); 
   fscanf(fp,"%f", &b2109); 
   fscanf(fp,"%f", &b2110); 
   fscanf(fp,"%f", &b2111); 
   fscanf(fp,"%f", &b2112); 
   fscanf(fp,"%f", &b2113); 
   fscanf(fp,"%f", &b2114); 
   fscanf(fp,"%f", &b2115); 
   fscanf(fp,"%f", &b2116); 
   fscanf(fp,"%f", &b2117); 
   fscanf(fp,"%f", &b2118); 
   fscanf(fp,"%f", &b2119); 
   fscanf(fp,"%f", &b2120); 
   fscanf(fp,"%f", &b2121); 
   fscanf(fp,"%f", &b2122); 
   fscanf(fp,"%f", &b2123); 
   fscanf(fp,"%f", &b2124); 
   fscanf(fp,"%f", &b2125); 
   fscanf(fp,"%f", &b2126); 
   fscanf(fp,"%f", &b2127); 
   fscanf(fp,"%f", &b2128); 
   fscanf(fp,"%f", &b2129); 
   fscanf(fp,"%f", &b2130); 
   fscanf(fp,"%f", &b2131); 
   fscanf(fp,"%f", &b2132); 
   fscanf(fp,"%f", &b2133); 
   fscanf(fp,"%f", &b2134); 
   fscanf(fp,"%f", &b2135); 
   fscanf(fp,"%f", &b2136); 
   fscanf(fp,"%f", &b2137); 
   fscanf(fp,"%f", &b2138); 
   fscanf(fp,"%f", &b2139); 
   fscanf(fp,"%f", &b2140); 
   fscanf(fp,"%f", &b2141); 
   fscanf(fp,"%f", &b2142); 
   fscanf(fp,"%f", &b2143); 
   fscanf(fp,"%f", &b2144); 
   fscanf(fp,"%f", &b2145); 
   fscanf(fp,"%f", &b2146); 
   fscanf(fp,"%f", &b2147); 
   fscanf(fp,"%f", &b2148); 
   fscanf(fp,"%f", &b2149); 
   fscanf(fp,"%f", &b2150); 
   fscanf(fp,"%f", &b2151); 
   fscanf(fp,"%f", &b2152); 
   fscanf(fp,"%f", &b2153); 
   fscanf(fp,"%f", &b2154); 
   fscanf(fp,"%f", &b2155); 
   fscanf(fp,"%f", &b2156); 
   fscanf(fp,"%f", &b2157); 
   fscanf(fp,"%f", &b2158); 
   fscanf(fp,"%f", &b2159); 
   fscanf(fp,"%f", &b2160); 
   fscanf(fp,"%f", &b2161); 
   fscanf(fp,"%f", &b2162); 
   fscanf(fp,"%f", &b2163); 
   fscanf(fp,"%f", &b2164); 
   fscanf(fp,"%f", &b2165); 
   fscanf(fp,"%f", &b2166); 
   fscanf(fp,"%f", &b2167); 
   fscanf(fp,"%f", &b2168); 
   fscanf(fp,"%f", &b2169); 
   fscanf(fp,"%f", &b2170); 
   fscanf(fp,"%f", &b2171); 
   fscanf(fp,"%f", &b2172); 
   fscanf(fp,"%f", &b2173); 
   fscanf(fp,"%f", &b2174); 
   fscanf(fp,"%f", &b2175); 
   fscanf(fp,"%f", &b2176); 
   fscanf(fp,"%f", &b2177); 
   fscanf(fp,"%f", &b2178); 
   fscanf(fp,"%f", &b2179); 
   fscanf(fp,"%f", &b2180); 
   fscanf(fp,"%f", &b2181); 
   fscanf(fp,"%f", &b2182); 
   fscanf(fp,"%f", &b2183); 
   fscanf(fp,"%f", &b2184); 
   fscanf(fp,"%f", &b2185); 
   fscanf(fp,"%f", &b2186); 
   fscanf(fp,"%f", &b2187); 
   fscanf(fp,"%f", &b2188); 
   fscanf(fp,"%f", &b2189); 
   fscanf(fp,"%f", &b2190); 
   fscanf(fp,"%f", &b2191); 
   fscanf(fp,"%f", &b2192); 
   fscanf(fp,"%f", &b2193); 
   fscanf(fp,"%f", &b2194); 
   fscanf(fp,"%f", &b2195); 
   fscanf(fp,"%f", &b2196); 
   fscanf(fp,"%f", &b2197); 
   fscanf(fp,"%f", &b2198); 
   fscanf(fp,"%f", &b2199); 
   fscanf(fp,"%f", &b2200); 
   fscanf(fp,"%f", &b2201); 
   fscanf(fp,"%f", &b2202); 
   fscanf(fp,"%f", &b2203); 
   fscanf(fp,"%f", &b2204); 
   fscanf(fp,"%f", &b2205); 
   fscanf(fp,"%f", &b2206); 
   fscanf(fp,"%f", &b2207); 
   fscanf(fp,"%f", &b2208); 
   fscanf(fp,"%f", &b2209); 
   fscanf(fp,"%f", &b2210); 
   fscanf(fp,"%f", &b2211); 
   fscanf(fp,"%f", &b2212); 
   fscanf(fp,"%f", &b2213); 
   fscanf(fp,"%f", &b2214); 
   fscanf(fp,"%f", &b2215); 
   fscanf(fp,"%f", &b2216); 
   fscanf(fp,"%f", &b2217); 
   fscanf(fp,"%f", &b2218); 
   fscanf(fp,"%f", &b2219); 
   fscanf(fp,"%f", &b2220); 
   fscanf(fp,"%f", &b2221); 
   fscanf(fp,"%f", &b2222); 
   fscanf(fp,"%f", &b2223); 
   fscanf(fp,"%f", &b2224); 
   fscanf(fp,"%f", &b2225); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 15*x5 + 20*x22 + 21*x23 + 19*x24
 + 19*x25 + 18*x38 + 20*x39 + 20*x40 + 19*x41 + 16*x86 + 19*x87 + 17*x88
 + 16*x89 - 26*x102 - 31*x103 - 31*x104 - 35*x105 - 30*x110 - 29*x111
 - 37*x112 - 36*x113 + 20*x114 + 18*x115 + 21*x116 + 16*x117 - 2*x126
 - 2*x127 - 2*x128 - 2*x129 - 3*x130 - 2*x131 - 2*x132 - 2*x133 - 3*x134
 - 3*x135 - 3*x136 - 3*x137 - 2*x138 - 2*x139 - 2*x140 - 2*x141 + 6*b1070
 + 4*b1071 + 3*b1072 + 3*b1073 + 40*b1074 + 35*b1075 + 20*b1076 + 20*b1077
 + 46*b1078 + 39*b1079 + 23*b1080 + 23*b1081 + 7*b1086 + 4*b1087 + 4*b1088
 + 4*b1089 + 30*b1090 + 25*b1091 + 20*b1092 + 20*b1093 + 37*b1094
 + 29*b1095 + 22*b1096 + 24*b1097 + 7*b1102 + 5*b1103 + 3*b1104 + 3*b1105
 + 15*b1106 + 5*b1107 + 2*b1108 + 2*b1109 + 22*b1110 + 10*b1111 + 5*b1112
 + 5*b1113 + 11*b1118 + 8*b1119 + 6*b1120 + 5*b1121 + 13*b1122 + 8*b1123
 + 3*b1124 + 3*b1125 + 24*b1126 + 16*b1127 + 9*b1128 + 8*b1129 + 10*b1134
 + 7*b1135 + 6*b1136 + 6*b1137 + 13*b1138 + 8*b1139 + 3*b1140 + 2*b1141
 + 23*b1142 + 15*b1143 + 9*b1144 + 8*b1145 + 9*b1150 + 9*b1151 + 7*b1152
 + 6*b1153 + 30*b1154 + 30*b1155 + 25*b1156 + 20*b1157 + 39*b1158
 + 39*b1159 + 32*b1160 + 26*b1161 + 8*b1166 + 7*b1167 + 7*b1168 + 4*b1169
 + 20*b1170 + 15*b1171 + 10*b1172 + 10*b1173 + 28*b1174 + 22*b1175
 + 17*b1176 + 14*b1177 + 8*b1182 + 6*b1183 + 5*b1184 + 3*b1185 + 15*b1186
 + 10*b1187 + 6*b1188 + 3*b1189 + 23*b1190 + 16*b1191 + 11*b1192 + 6*b1193
 + x1194 + x1195 + x1196 + x1197 - 5*x1218 - 10*x1219 - 5*x1220 - 10*x1221
 + 2*x1238 + x1239 + 2*x1240 + x1241 + 10*x1306 + 5*x1307 + 5*x1308
 + 10*x1309 + 5*x1310 + 5*x1311 + 5*x1312 + 10*x1313 - 40*x1338 - 30*x1339
 - 15*x1340 - 10*x1341 - 15*x1342 - 20*x1343 - 25*x1344 - 30*x1345
 - 10*x1346 - 30*x1347 - 40*x1348 - 40*x1349 - 30*x1350 - 20*x1351
 - 20*x1352 - 25*x1353 - 35*x1354 - 50*x1355 - 20*x1356 - 50*x1357
 - 20*x1358 - 30*x1359 - 35*x1360 - 10*x1361 - 25*x1362 - 50*x1363
 - 10*x1364 - 35*x1365 - 15*x1366 - 20*x1367 - 20*x1368 - 30*x1369
 - 30*x1398 - 40*x1399 - 40*x1400 - 35*x1401 + x1418 + x1419 + x1420
 + x1421 - 80*x1450 - 90*x1451 - 120*x1452 - 100*x1453 - 285*x1454
 - 390*x1455 - 350*x1456 - 300*x1457 - 290*x1458 - 405*x1459 - 190*x1460
 - 340*x1461 - 280*x1462 - 400*x1463 - 430*x1464 - 260*x1465 - 290*x1466
 - 300*x1467 - 240*x1468 - 310*x1469 - 350*x1470 - 250*x1471 - 300*x1472
 - 400*x1473 + 5*b2106 + 4*b2107 + 6*b2108 + 3*b2109 + 8*b2110 + 7*b2111
 + 6*b2112 + 5*b2113 + 6*b2114 + 9*b2115 + 4*b2116 + 3*b2117 + 10*b2118
 + 9*b2119 + 5*b2120 + 6*b2121 + 6*b2122 + 10*b2123 + 6*b2124 + 9*b2125
 + 7*b2126 + 7*b2127 + 4*b2128 + 2*b2129 + 4*b2130 + 3*b2131 + 2*b2132
 + 8*b2133 + 5*b2134 + 6*b2135 + 7*b2136 + 4*b2137 + 2*b2138 + 5*b2139
 + 2*b2140 + 6*b2141 + 4*b2142 + 7*b2143 + 4*b2144 + 7*b2145 + 3*b2146
 + 9*b2147 + 3*b2148 + 6*b2149 + 7*b2150 + 2*b2151 + 9*b2152 + 6*b2153
 + 3*b2154 + b2155 + 9*b2156 + 10*b2157 + 2*b2158 + 6*b2159 + 3*b2160
 + 7*b2161 + 4*b2162 + 8*b2163 + b2164 + 4*b2165 + 2*b2166 + 5*b2167
 + 2*b2168 + 5*b2169 + 3*b2170 + 4*b2171 + 3*b2172 + 7*b2173 + 5*b2174
 + 7*b2175 + 6*b2176 + 2*b2177 + 2*b2178 + 8*b2179 + 4*b2180 + 2*b2181
 + b2182 + 4*b2183 + b2184 + b2185 + 2*b2186 + 5*b2187 + 2*b2188 + 7*b2189
 + 9*b2190 + 2*b2191 + 9*b2192 + 6*b2193 + 5*b2194 + 8*b2195 + 4*b2196
 + 3*b2197 + 2*b2198 + 3*b2199 + 8*b2200 + 9*b2201 + 10*b2202 + 6*b2203
 + 3*b2204 + 6*b2205 + 4*b2206 + 8*b2207 + 7*b2208 + 7*b2209 + 7*b2210
 + 3*b2211 + 9*b2212 + 3*b2213 + 4*b2214 + 8*b2215 + 6*b2216 + 8*b2217
 + 2*b2218 + b2219 + 3*b2220 + 9*b2221 + 8*b2222 + 3*b2223 + 4*b2224
 + 3*b2225 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
