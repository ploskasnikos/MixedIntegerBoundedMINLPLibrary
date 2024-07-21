#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn40m04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x26,x27,x28,x29,x46,x47,x48,x49,x114,x115,x116,x117,x118,x119,x120,x121,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x206,x207,x208,x209,x226,x227,x228,x229,x294,x295,x296,x297,x298,x299,x300,x301,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,b1210,b1211,b1212,b1213,b1214,b1215,b1216,b1217,b1218,b1219,b1220,b1221,b1222,b1223,b1224,b1225,b1226,b1227,b1228,b1229,b1230,b1231,b1232,b1233,b1234,b1235,b1236,b1237,b1238,b1239,b1240,b1241,b1242,b1243,b1244,b1245,b1246,b1247,b1248,b1249,b1250,b1251,b1252,b1253,b1254,b1255,b1256,b1257,b1258,b1259,b1260,b1261,b1262,b1263,b1264,b1265,b1266,b1267,b1268,b1269,b1270,b1271,b1272,b1273,b1274,b1275,b1276,b1277,b1278,b1279,b1280,b1281,b1282,b1283,b1284,b1285,b1286,b1287,b1288,b1289,b1290,b1291,b1292,b1293,b1294,b1295,b1296,b1297,b1298,b1299,b1300,b1301,b1302,b1303,b1304,b1305,b1306,b1307,b1308,b1309,b1310,b1311,b1312,b1313,b1314,b1315,b1316,b1317,b1318,b1319,b1320,b1321,b1322,b1323,b1324,b1325,b1326,b1327,b1328,b1329,b1330,b1331,b1332,b1333,b1334,b1335,b1336,b1337,b1338,b1339,b1340,b1341,b1342,b1343,b1344,b1345,b1346,b1347,b1348,b1349,b1350,b1351,b1352,b1353,b1354,b1355,b1356,b1357,b1358,b1359,b1360,b1361,b1362,b1363,b1364,b1365,b1366,b1367,b1368,b1369;
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
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 
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
   fscanf(fp,"%f", &b1234); 
   fscanf(fp,"%f", &b1235); 
   fscanf(fp,"%f", &b1236); 
   fscanf(fp,"%f", &b1237); 
   fscanf(fp,"%f", &b1238); 
   fscanf(fp,"%f", &b1239); 
   fscanf(fp,"%f", &b1240); 
   fscanf(fp,"%f", &b1241); 
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
   fscanf(fp,"%f", &b1254); 
   fscanf(fp,"%f", &b1255); 
   fscanf(fp,"%f", &b1256); 
   fscanf(fp,"%f", &b1257); 
   fscanf(fp,"%f", &b1258); 
   fscanf(fp,"%f", &b1259); 
   fscanf(fp,"%f", &b1260); 
   fscanf(fp,"%f", &b1261); 
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
   fscanf(fp,"%f", &b1274); 
   fscanf(fp,"%f", &b1275); 
   fscanf(fp,"%f", &b1276); 
   fscanf(fp,"%f", &b1277); 
   fscanf(fp,"%f", &b1278); 
   fscanf(fp,"%f", &b1279); 
   fscanf(fp,"%f", &b1280); 
   fscanf(fp,"%f", &b1281); 
   fscanf(fp,"%f", &b1282); 
   fscanf(fp,"%f", &b1283); 
   fscanf(fp,"%f", &b1284); 
   fscanf(fp,"%f", &b1285); 
   fscanf(fp,"%f", &b1286); 
   fscanf(fp,"%f", &b1287); 
   fscanf(fp,"%f", &b1288); 
   fscanf(fp,"%f", &b1289); 
   fscanf(fp,"%f", &b1290); 
   fscanf(fp,"%f", &b1291); 
   fscanf(fp,"%f", &b1292); 
   fscanf(fp,"%f", &b1293); 
   fscanf(fp,"%f", &b1294); 
   fscanf(fp,"%f", &b1295); 
   fscanf(fp,"%f", &b1296); 
   fscanf(fp,"%f", &b1297); 
   fscanf(fp,"%f", &b1298); 
   fscanf(fp,"%f", &b1299); 
   fscanf(fp,"%f", &b1300); 
   fscanf(fp,"%f", &b1301); 
   fscanf(fp,"%f", &b1302); 
   fscanf(fp,"%f", &b1303); 
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
   fscanf(fp,"%f", &b1349); 
   fscanf(fp,"%f", &b1350); 
   fscanf(fp,"%f", &b1351); 
   fscanf(fp,"%f", &b1352); 
   fscanf(fp,"%f", &b1353); 
   fscanf(fp,"%f", &b1354); 
   fscanf(fp,"%f", &b1355); 
   fscanf(fp,"%f", &b1356); 
   fscanf(fp,"%f", &b1357); 
   fscanf(fp,"%f", &b1358); 
   fscanf(fp,"%f", &b1359); 
   fscanf(fp,"%f", &b1360); 
   fscanf(fp,"%f", &b1361); 
   fscanf(fp,"%f", &b1362); 
   fscanf(fp,"%f", &b1363); 
   fscanf(fp,"%f", &b1364); 
   fscanf(fp,"%f", &b1365); 
   fscanf(fp,"%f", &b1366); 
   fscanf(fp,"%f", &b1367); 
   fscanf(fp,"%f", &b1368); 
   fscanf(fp,"%f", &b1369); 

   fclose(fp);
   res=-( + x2 + x3 + x4 + x5 - 5*x26 - 10*x27 - 5*x28 - 10*x29 + x46
 + x47 + x48 + x49 + 10*x114 + 5*x115 + 5*x116 + 10*x117 + 5*x118 + 5*x119
 + 5*x120 + 10*x121 - 40*x146 - 30*x147 - 15*x148 - 10*x149 - 15*x150
 - 20*x151 - 25*x152 - 20*x153 - 10*x154 - 30*x155 - 40*x156 - 30*x157
 - 30*x158 - 20*x159 - 20*x160 - 25*x161 - 35*x162 - 50*x163 - 20*x164
 - 50*x165 - 20*x166 - 30*x167 - 35*x168 - 10*x169 - 25*x170 - 50*x171
 - 10*x172 - 35*x173 - 15*x174 - 20*x175 - 20*x176 - 30*x177 - 30*x206
 - 40*x207 - 40*x208 - 35*x209 + x226 + x227 + x228 + x229 + 5*x294
 + 3*x295 + 4*x296 + 3*x297 + x298 + x299 + x300 + x301 - 220*x326
 - 210*x327 - 150*x328 - 125*x329 - 240*x330 - 220*x331 - 100*x332
 - 130*x333 - 190*x334 - 160*x335 - 150*x336 - 110*x337 - 190*x338
 - 190*x339 - 120*x340 - 100*x341 - 385*x342 - 490*x343 - 550*x344
 - 500*x345 - 390*x346 - 505*x347 - 490*x348 - 640*x349 - 480*x350
 - 600*x351 - 530*x352 - 560*x353 - 490*x354 - 600*x355 - 440*x356
 - 510*x357 - 550*x358 - 550*x359 - 600*x360 - 500*x361 + 5*b1210
 + 4*b1211 + 6*b1212 + 3*b1213 + 8*b1214 + 7*b1215 + 6*b1216 + 5*b1217
 + 6*b1218 + 9*b1219 + 4*b1220 + 3*b1221 + 10*b1222 + 9*b1223 + 5*b1224
 + 6*b1225 + 6*b1226 + 10*b1227 + 6*b1228 + 9*b1229 + 7*b1230 + 7*b1231
 + 4*b1232 + 2*b1233 + 4*b1234 + 3*b1235 + 2*b1236 + 8*b1237 + 5*b1238
 + 6*b1239 + 7*b1240 + 4*b1241 + 2*b1242 + 5*b1243 + 2*b1244 + 6*b1245
 + 4*b1246 + 7*b1247 + 4*b1248 + 7*b1249 + 3*b1250 + 9*b1251 + 3*b1252
 + 6*b1253 + 7*b1254 + 2*b1255 + 9*b1256 + 6*b1257 + 3*b1258 + b1259
 + 9*b1260 + 10*b1261 + 2*b1262 + 6*b1263 + 3*b1264 + 7*b1265 + 4*b1266
 + 8*b1267 + b1268 + 4*b1269 + 2*b1270 + 5*b1271 + 2*b1272 + 5*b1273
 + 3*b1274 + 4*b1275 + 3*b1276 + 7*b1277 + 5*b1278 + 7*b1279 + 6*b1280
 + 2*b1281 + 2*b1282 + 8*b1283 + 4*b1284 + 2*b1285 + b1286 + 4*b1287
 + b1288 + b1289 + 2*b1290 + 5*b1291 + 2*b1292 + 7*b1293 + 9*b1294
 + 2*b1295 + 9*b1296 + 6*b1297 + 5*b1298 + 8*b1299 + 4*b1300 + 3*b1301
 + 2*b1302 + 3*b1303 + 8*b1304 + 9*b1305 + 10*b1306 + 6*b1307 + 3*b1308
 + 6*b1309 + 4*b1310 + 8*b1311 + 7*b1312 + 7*b1313 + 7*b1314 + 3*b1315
 + 9*b1316 + 3*b1317 + 4*b1318 + 8*b1319 + 6*b1320 + 8*b1321 + 2*b1322
 + b1323 + 3*b1324 + 9*b1325 + 8*b1326 + 3*b1327 + 4*b1328 + 3*b1329
 + 9*b1330 + 5*b1331 + b1332 + 2*b1333 + 3*b1334 + 9*b1335 + 5*b1336
 + 3*b1337 + 5*b1338 + 3*b1339 + 3*b1340 + 4*b1341 + 5*b1342 + 3*b1343
 + 2*b1344 + 7*b1345 + 6*b1346 + 4*b1347 + 6*b1348 + 7*b1349 + 2*b1350
 + 6*b1351 + 6*b1352 + 7*b1353 + 6*b1354 + 4*b1355 + 3*b1356 + 5*b1357
 + 3*b1358 + 2*b1359 + b1360 + 3*b1361 + 5*b1362 + 8*b1363 + 6*b1364
 + 5*b1365 + 9*b1366 + 5*b1367 + 2*b1368 + b1369 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
