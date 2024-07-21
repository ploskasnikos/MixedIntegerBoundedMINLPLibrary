#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840m02h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b536,b537,b538,b539,b540,b541,b544,b545,b546,b547,b548,b549,b552,b553,b554,b555,b556,b557,b560,b561,b562,b563,b564,b565,b568,b569,b570,b571,b572,b573,b576,b577,b578,b579,b580,b581,b584,b585,b586,b587,b588,b589,b592,b593,b594,b595,b596,b597,x598,x599,x610,x611,x620,x621,x654,x655,x656,x657,x670,x671,x672,x673,x674,x675,x676,x677,x678,x679,x680,x681,x682,x683,x684,x685,x700,x701,x710,x711,x744,x745,x746,x747,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,b1202,b1203,b1204,b1205,b1206,b1207,b1208,b1209,b1210,b1211,b1212,b1213,b1214,b1215,b1216,b1217,b1218,b1219,b1220,b1221,b1222,b1223,b1224,b1225,b1226,b1227,b1228,b1229,b1230,b1231,b1232,b1233,b1234,b1235,b1236,b1237,b1238,b1239,b1240,b1241,b1242,b1243,b1244,b1245,b1246,b1247,b1248,b1249,b1250,b1251,b1252,b1253,b1254,b1255,b1256,b1257,b1258,b1259,b1260,b1261,b1262,b1263,b1264,b1265,b1266,b1267,b1268,b1269,b1270,b1271,b1272,b1273,b1274,b1275,b1276,b1277,b1278,b1279,b1280,b1281;
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
   fscanf(fp,"%f", &x744); 
   fscanf(fp,"%f", &x745); 
   fscanf(fp,"%f", &x746); 
   fscanf(fp,"%f", &x747); 
   fscanf(fp,"%f", &x760); 
   fscanf(fp,"%f", &x761); 
   fscanf(fp,"%f", &x762); 
   fscanf(fp,"%f", &x763); 
   fscanf(fp,"%f", &x764); 
   fscanf(fp,"%f", &x765); 
   fscanf(fp,"%f", &x766); 
   fscanf(fp,"%f", &x767); 
   fscanf(fp,"%f", &x768); 
   fscanf(fp,"%f", &x769); 
   fscanf(fp,"%f", &x770); 
   fscanf(fp,"%f", &x771); 
   fscanf(fp,"%f", &x772); 
   fscanf(fp,"%f", &x773); 
   fscanf(fp,"%f", &x774); 
   fscanf(fp,"%f", &x775); 
   fscanf(fp,"%f", &x776); 
   fscanf(fp,"%f", &x777); 
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
 + x620 + x621 + 10*x654 + 5*x655 + 5*x656 + 5*x657 - 40*x670 - 30*x671
 - 15*x672 - 20*x673 - 10*x674 - 30*x675 - 30*x676 - 20*x677 - 35*x678
 - 50*x679 - 20*x680 - 30*x681 - 25*x682 - 50*x683 - 15*x684 - 20*x685
 - 30*x700 - 40*x701 + x710 + x711 + 5*x744 + 3*x745 + x746 + x747
 - 220*x760 - 210*x761 - 240*x762 - 220*x763 - 190*x764 - 160*x765
 - 190*x766 - 190*x767 - 385*x768 - 490*x769 - 390*x770 - 505*x771
 - 480*x772 - 600*x773 - 490*x774 - 600*x775 - 550*x776 - 550*x777
 + 5*b1202 + 4*b1203 + 8*b1204 + 7*b1205 + 6*b1206 + 9*b1207 + 10*b1208
 + 9*b1209 + 6*b1210 + 10*b1211 + 7*b1212 + 7*b1213 + 4*b1214 + 3*b1215
 + 5*b1216 + 6*b1217 + 2*b1218 + 5*b1219 + 4*b1220 + 7*b1221 + 3*b1222
 + 9*b1223 + 7*b1224 + 2*b1225 + 3*b1226 + b1227 + 2*b1228 + 6*b1229
 + 4*b1230 + 8*b1231 + 2*b1232 + 5*b1233 + 3*b1234 + 4*b1235 + 5*b1236
 + 7*b1237 + 2*b1238 + 8*b1239 + b1240 + 4*b1241 + 2*b1242 + 5*b1243
 + 9*b1244 + 2*b1245 + 5*b1246 + 8*b1247 + 2*b1248 + 3*b1249 + 10*b1250
 + 6*b1251 + 4*b1252 + 8*b1253 + 7*b1254 + 3*b1255 + 4*b1256 + 8*b1257
 + 2*b1258 + b1259 + 8*b1260 + 3*b1261 + 9*b1262 + 5*b1263 + 3*b1264
 + 9*b1265 + 5*b1266 + 3*b1267 + 5*b1268 + 3*b1269 + 6*b1270 + 4*b1271
 + 2*b1272 + 6*b1273 + 6*b1274 + 4*b1275 + 3*b1276 + 2*b1277 + 5*b1278
 + 8*b1279 + 9*b1280 + 5*b1281 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
