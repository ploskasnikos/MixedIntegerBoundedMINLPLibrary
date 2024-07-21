#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840m04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b1070,b1071,b1072,b1073,b1074,b1075,b1076,b1077,b1078,b1079,b1080,b1081,b1086,b1087,b1088,b1089,b1090,b1091,b1092,b1093,b1094,b1095,b1096,b1097,b1102,b1103,b1104,b1105,b1106,b1107,b1108,b1109,b1110,b1111,b1112,b1113,b1118,b1119,b1120,b1121,b1122,b1123,b1124,b1125,b1126,b1127,b1128,b1129,b1134,b1135,b1136,b1137,b1138,b1139,b1140,b1141,b1142,b1143,b1144,b1145,b1150,b1151,b1152,b1153,b1154,b1155,b1156,b1157,b1158,b1159,b1160,b1161,b1166,b1167,b1168,b1169,b1170,b1171,b1172,b1173,b1174,b1175,b1176,b1177,b1182,b1183,b1184,b1185,b1186,b1187,b1188,b1189,b1190,b1191,b1192,b1193,x1194,x1195,x1196,x1197,x1218,x1219,x1220,x1221,x1238,x1239,x1240,x1241,x1306,x1307,x1308,x1309,x1310,x1311,x1312,x1313,x1338,x1339,x1340,x1341,x1342,x1343,x1344,x1345,x1346,x1347,x1348,x1349,x1350,x1351,x1352,x1353,x1354,x1355,x1356,x1357,x1358,x1359,x1360,x1361,x1362,x1363,x1364,x1365,x1366,x1367,x1368,x1369,x1398,x1399,x1400,x1401,x1418,x1419,x1420,x1421,x1486,x1487,x1488,x1489,x1490,x1491,x1492,x1493,x1518,x1519,x1520,x1521,x1522,x1523,x1524,x1525,x1526,x1527,x1528,x1529,x1530,x1531,x1532,x1533,x1534,x1535,x1536,x1537,x1538,x1539,x1540,x1541,x1542,x1543,x1544,x1545,x1546,x1547,x1548,x1549,x1550,x1551,x1552,x1553,b2402,b2403,b2404,b2405,b2406,b2407,b2408,b2409,b2410,b2411,b2412,b2413,b2414,b2415,b2416,b2417,b2418,b2419,b2420,b2421,b2422,b2423,b2424,b2425,b2426,b2427,b2428,b2429,b2430,b2431,b2432,b2433,b2434,b2435,b2436,b2437,b2438,b2439,b2440,b2441,b2442,b2443,b2444,b2445,b2446,b2447,b2448,b2449,b2450,b2451,b2452,b2453,b2454,b2455,b2456,b2457,b2458,b2459,b2460,b2461,b2462,b2463,b2464,b2465,b2466,b2467,b2468,b2469,b2470,b2471,b2472,b2473,b2474,b2475,b2476,b2477,b2478,b2479,b2480,b2481,b2482,b2483,b2484,b2485,b2486,b2487,b2488,b2489,b2490,b2491,b2492,b2493,b2494,b2495,b2496,b2497,b2498,b2499,b2500,b2501,b2502,b2503,b2504,b2505,b2506,b2507,b2508,b2509,b2510,b2511,b2512,b2513,b2514,b2515,b2516,b2517,b2518,b2519,b2520,b2521,b2522,b2523,b2524,b2525,b2526,b2527,b2528,b2529,b2530,b2531,b2532,b2533,b2534,b2535,b2536,b2537,b2538,b2539,b2540,b2541,b2542,b2543,b2544,b2545,b2546,b2547,b2548,b2549,b2550,b2551,b2552,b2553,b2554,b2555,b2556,b2557,b2558,b2559,b2560,b2561;
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
   fscanf(fp,"%f", &x1486); 
   fscanf(fp,"%f", &x1487); 
   fscanf(fp,"%f", &x1488); 
   fscanf(fp,"%f", &x1489); 
   fscanf(fp,"%f", &x1490); 
   fscanf(fp,"%f", &x1491); 
   fscanf(fp,"%f", &x1492); 
   fscanf(fp,"%f", &x1493); 
   fscanf(fp,"%f", &x1518); 
   fscanf(fp,"%f", &x1519); 
   fscanf(fp,"%f", &x1520); 
   fscanf(fp,"%f", &x1521); 
   fscanf(fp,"%f", &x1522); 
   fscanf(fp,"%f", &x1523); 
   fscanf(fp,"%f", &x1524); 
   fscanf(fp,"%f", &x1525); 
   fscanf(fp,"%f", &x1526); 
   fscanf(fp,"%f", &x1527); 
   fscanf(fp,"%f", &x1528); 
   fscanf(fp,"%f", &x1529); 
   fscanf(fp,"%f", &x1530); 
   fscanf(fp,"%f", &x1531); 
   fscanf(fp,"%f", &x1532); 
   fscanf(fp,"%f", &x1533); 
   fscanf(fp,"%f", &x1534); 
   fscanf(fp,"%f", &x1535); 
   fscanf(fp,"%f", &x1536); 
   fscanf(fp,"%f", &x1537); 
   fscanf(fp,"%f", &x1538); 
   fscanf(fp,"%f", &x1539); 
   fscanf(fp,"%f", &x1540); 
   fscanf(fp,"%f", &x1541); 
   fscanf(fp,"%f", &x1542); 
   fscanf(fp,"%f", &x1543); 
   fscanf(fp,"%f", &x1544); 
   fscanf(fp,"%f", &x1545); 
   fscanf(fp,"%f", &x1546); 
   fscanf(fp,"%f", &x1547); 
   fscanf(fp,"%f", &x1548); 
   fscanf(fp,"%f", &x1549); 
   fscanf(fp,"%f", &x1550); 
   fscanf(fp,"%f", &x1551); 
   fscanf(fp,"%f", &x1552); 
   fscanf(fp,"%f", &x1553); 
   fscanf(fp,"%f", &b2402); 
   fscanf(fp,"%f", &b2403); 
   fscanf(fp,"%f", &b2404); 
   fscanf(fp,"%f", &b2405); 
   fscanf(fp,"%f", &b2406); 
   fscanf(fp,"%f", &b2407); 
   fscanf(fp,"%f", &b2408); 
   fscanf(fp,"%f", &b2409); 
   fscanf(fp,"%f", &b2410); 
   fscanf(fp,"%f", &b2411); 
   fscanf(fp,"%f", &b2412); 
   fscanf(fp,"%f", &b2413); 
   fscanf(fp,"%f", &b2414); 
   fscanf(fp,"%f", &b2415); 
   fscanf(fp,"%f", &b2416); 
   fscanf(fp,"%f", &b2417); 
   fscanf(fp,"%f", &b2418); 
   fscanf(fp,"%f", &b2419); 
   fscanf(fp,"%f", &b2420); 
   fscanf(fp,"%f", &b2421); 
   fscanf(fp,"%f", &b2422); 
   fscanf(fp,"%f", &b2423); 
   fscanf(fp,"%f", &b2424); 
   fscanf(fp,"%f", &b2425); 
   fscanf(fp,"%f", &b2426); 
   fscanf(fp,"%f", &b2427); 
   fscanf(fp,"%f", &b2428); 
   fscanf(fp,"%f", &b2429); 
   fscanf(fp,"%f", &b2430); 
   fscanf(fp,"%f", &b2431); 
   fscanf(fp,"%f", &b2432); 
   fscanf(fp,"%f", &b2433); 
   fscanf(fp,"%f", &b2434); 
   fscanf(fp,"%f", &b2435); 
   fscanf(fp,"%f", &b2436); 
   fscanf(fp,"%f", &b2437); 
   fscanf(fp,"%f", &b2438); 
   fscanf(fp,"%f", &b2439); 
   fscanf(fp,"%f", &b2440); 
   fscanf(fp,"%f", &b2441); 
   fscanf(fp,"%f", &b2442); 
   fscanf(fp,"%f", &b2443); 
   fscanf(fp,"%f", &b2444); 
   fscanf(fp,"%f", &b2445); 
   fscanf(fp,"%f", &b2446); 
   fscanf(fp,"%f", &b2447); 
   fscanf(fp,"%f", &b2448); 
   fscanf(fp,"%f", &b2449); 
   fscanf(fp,"%f", &b2450); 
   fscanf(fp,"%f", &b2451); 
   fscanf(fp,"%f", &b2452); 
   fscanf(fp,"%f", &b2453); 
   fscanf(fp,"%f", &b2454); 
   fscanf(fp,"%f", &b2455); 
   fscanf(fp,"%f", &b2456); 
   fscanf(fp,"%f", &b2457); 
   fscanf(fp,"%f", &b2458); 
   fscanf(fp,"%f", &b2459); 
   fscanf(fp,"%f", &b2460); 
   fscanf(fp,"%f", &b2461); 
   fscanf(fp,"%f", &b2462); 
   fscanf(fp,"%f", &b2463); 
   fscanf(fp,"%f", &b2464); 
   fscanf(fp,"%f", &b2465); 
   fscanf(fp,"%f", &b2466); 
   fscanf(fp,"%f", &b2467); 
   fscanf(fp,"%f", &b2468); 
   fscanf(fp,"%f", &b2469); 
   fscanf(fp,"%f", &b2470); 
   fscanf(fp,"%f", &b2471); 
   fscanf(fp,"%f", &b2472); 
   fscanf(fp,"%f", &b2473); 
   fscanf(fp,"%f", &b2474); 
   fscanf(fp,"%f", &b2475); 
   fscanf(fp,"%f", &b2476); 
   fscanf(fp,"%f", &b2477); 
   fscanf(fp,"%f", &b2478); 
   fscanf(fp,"%f", &b2479); 
   fscanf(fp,"%f", &b2480); 
   fscanf(fp,"%f", &b2481); 
   fscanf(fp,"%f", &b2482); 
   fscanf(fp,"%f", &b2483); 
   fscanf(fp,"%f", &b2484); 
   fscanf(fp,"%f", &b2485); 
   fscanf(fp,"%f", &b2486); 
   fscanf(fp,"%f", &b2487); 
   fscanf(fp,"%f", &b2488); 
   fscanf(fp,"%f", &b2489); 
   fscanf(fp,"%f", &b2490); 
   fscanf(fp,"%f", &b2491); 
   fscanf(fp,"%f", &b2492); 
   fscanf(fp,"%f", &b2493); 
   fscanf(fp,"%f", &b2494); 
   fscanf(fp,"%f", &b2495); 
   fscanf(fp,"%f", &b2496); 
   fscanf(fp,"%f", &b2497); 
   fscanf(fp,"%f", &b2498); 
   fscanf(fp,"%f", &b2499); 
   fscanf(fp,"%f", &b2500); 
   fscanf(fp,"%f", &b2501); 
   fscanf(fp,"%f", &b2502); 
   fscanf(fp,"%f", &b2503); 
   fscanf(fp,"%f", &b2504); 
   fscanf(fp,"%f", &b2505); 
   fscanf(fp,"%f", &b2506); 
   fscanf(fp,"%f", &b2507); 
   fscanf(fp,"%f", &b2508); 
   fscanf(fp,"%f", &b2509); 
   fscanf(fp,"%f", &b2510); 
   fscanf(fp,"%f", &b2511); 
   fscanf(fp,"%f", &b2512); 
   fscanf(fp,"%f", &b2513); 
   fscanf(fp,"%f", &b2514); 
   fscanf(fp,"%f", &b2515); 
   fscanf(fp,"%f", &b2516); 
   fscanf(fp,"%f", &b2517); 
   fscanf(fp,"%f", &b2518); 
   fscanf(fp,"%f", &b2519); 
   fscanf(fp,"%f", &b2520); 
   fscanf(fp,"%f", &b2521); 
   fscanf(fp,"%f", &b2522); 
   fscanf(fp,"%f", &b2523); 
   fscanf(fp,"%f", &b2524); 
   fscanf(fp,"%f", &b2525); 
   fscanf(fp,"%f", &b2526); 
   fscanf(fp,"%f", &b2527); 
   fscanf(fp,"%f", &b2528); 
   fscanf(fp,"%f", &b2529); 
   fscanf(fp,"%f", &b2530); 
   fscanf(fp,"%f", &b2531); 
   fscanf(fp,"%f", &b2532); 
   fscanf(fp,"%f", &b2533); 
   fscanf(fp,"%f", &b2534); 
   fscanf(fp,"%f", &b2535); 
   fscanf(fp,"%f", &b2536); 
   fscanf(fp,"%f", &b2537); 
   fscanf(fp,"%f", &b2538); 
   fscanf(fp,"%f", &b2539); 
   fscanf(fp,"%f", &b2540); 
   fscanf(fp,"%f", &b2541); 
   fscanf(fp,"%f", &b2542); 
   fscanf(fp,"%f", &b2543); 
   fscanf(fp,"%f", &b2544); 
   fscanf(fp,"%f", &b2545); 
   fscanf(fp,"%f", &b2546); 
   fscanf(fp,"%f", &b2547); 
   fscanf(fp,"%f", &b2548); 
   fscanf(fp,"%f", &b2549); 
   fscanf(fp,"%f", &b2550); 
   fscanf(fp,"%f", &b2551); 
   fscanf(fp,"%f", &b2552); 
   fscanf(fp,"%f", &b2553); 
   fscanf(fp,"%f", &b2554); 
   fscanf(fp,"%f", &b2555); 
   fscanf(fp,"%f", &b2556); 
   fscanf(fp,"%f", &b2557); 
   fscanf(fp,"%f", &b2558); 
   fscanf(fp,"%f", &b2559); 
   fscanf(fp,"%f", &b2560); 
   fscanf(fp,"%f", &b2561); 

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
 + x1238 + x1239 + x1240 + x1241 + 10*x1306 + 5*x1307 + 5*x1308 + 10*x1309
 + 5*x1310 + 5*x1311 + 5*x1312 + 10*x1313 - 40*x1338 - 30*x1339 - 15*x1340
 - 10*x1341 - 15*x1342 - 20*x1343 - 25*x1344 - 20*x1345 - 10*x1346
 - 30*x1347 - 40*x1348 - 30*x1349 - 30*x1350 - 20*x1351 - 20*x1352
 - 25*x1353 - 35*x1354 - 50*x1355 - 20*x1356 - 50*x1357 - 20*x1358
 - 30*x1359 - 35*x1360 - 10*x1361 - 25*x1362 - 50*x1363 - 10*x1364
 - 35*x1365 - 15*x1366 - 20*x1367 - 20*x1368 - 30*x1369 - 30*x1398
 - 40*x1399 - 40*x1400 - 35*x1401 + x1418 + x1419 + x1420 + x1421
 + 5*x1486 + 3*x1487 + 4*x1488 + 3*x1489 + x1490 + x1491 + x1492 + x1493
 - 220*x1518 - 210*x1519 - 150*x1520 - 125*x1521 - 240*x1522 - 220*x1523
 - 100*x1524 - 130*x1525 - 190*x1526 - 160*x1527 - 150*x1528 - 110*x1529
 - 190*x1530 - 190*x1531 - 120*x1532 - 100*x1533 - 385*x1534 - 490*x1535
 - 550*x1536 - 500*x1537 - 390*x1538 - 505*x1539 - 490*x1540 - 640*x1541
 - 480*x1542 - 600*x1543 - 530*x1544 - 560*x1545 - 490*x1546 - 600*x1547
 - 440*x1548 - 510*x1549 - 550*x1550 - 550*x1551 - 600*x1552 - 500*x1553
 + 5*b2402 + 4*b2403 + 6*b2404 + 3*b2405 + 8*b2406 + 7*b2407 + 6*b2408
 + 5*b2409 + 6*b2410 + 9*b2411 + 4*b2412 + 3*b2413 + 10*b2414 + 9*b2415
 + 5*b2416 + 6*b2417 + 6*b2418 + 10*b2419 + 6*b2420 + 9*b2421 + 7*b2422
 + 7*b2423 + 4*b2424 + 2*b2425 + 4*b2426 + 3*b2427 + 2*b2428 + 8*b2429
 + 5*b2430 + 6*b2431 + 7*b2432 + 4*b2433 + 2*b2434 + 5*b2435 + 2*b2436
 + 6*b2437 + 4*b2438 + 7*b2439 + 4*b2440 + 7*b2441 + 3*b2442 + 9*b2443
 + 3*b2444 + 6*b2445 + 7*b2446 + 2*b2447 + 9*b2448 + 6*b2449 + 3*b2450
 + b2451 + 9*b2452 + 10*b2453 + 2*b2454 + 6*b2455 + 3*b2456 + 7*b2457
 + 4*b2458 + 8*b2459 + b2460 + 4*b2461 + 2*b2462 + 5*b2463 + 2*b2464
 + 5*b2465 + 3*b2466 + 4*b2467 + 3*b2468 + 7*b2469 + 5*b2470 + 7*b2471
 + 6*b2472 + 2*b2473 + 2*b2474 + 8*b2475 + 4*b2476 + 2*b2477 + b2478
 + 4*b2479 + b2480 + b2481 + 2*b2482 + 5*b2483 + 2*b2484 + 7*b2485
 + 9*b2486 + 2*b2487 + 9*b2488 + 6*b2489 + 5*b2490 + 8*b2491 + 4*b2492
 + 3*b2493 + 2*b2494 + 3*b2495 + 8*b2496 + 9*b2497 + 10*b2498 + 6*b2499
 + 3*b2500 + 6*b2501 + 4*b2502 + 8*b2503 + 7*b2504 + 7*b2505 + 7*b2506
 + 3*b2507 + 9*b2508 + 3*b2509 + 4*b2510 + 8*b2511 + 6*b2512 + 8*b2513
 + 2*b2514 + b2515 + 3*b2516 + 9*b2517 + 8*b2518 + 3*b2519 + 4*b2520
 + 3*b2521 + 9*b2522 + 5*b2523 + b2524 + 2*b2525 + 3*b2526 + 9*b2527
 + 5*b2528 + 3*b2529 + 5*b2530 + 3*b2531 + 3*b2532 + 4*b2533 + 5*b2534
 + 3*b2535 + 2*b2536 + 7*b2537 + 6*b2538 + 4*b2539 + 6*b2540 + 7*b2541
 + 2*b2542 + 6*b2543 + 6*b2544 + 7*b2545 + 6*b2546 + 4*b2547 + 3*b2548
 + 5*b2549 + 3*b2550 + 2*b2551 + b2552 + 3*b2553 + 5*b2554 + 8*b2555
 + 6*b2556 + 5*b2557 + 9*b2558 + 5*b2559 + 2*b2560 + b2561 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
