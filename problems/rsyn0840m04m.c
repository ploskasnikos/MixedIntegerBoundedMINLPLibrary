#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840m04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,x602,x603,x604,x605,x626,x627,x628,x629,x646,x647,x648,x649,x714,x715,x716,x717,x718,x719,x720,x721,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x806,x807,x808,x809,x826,x827,x828,x829,x894,x895,x896,x897,x898,x899,x900,x901,x926,x927,x928,x929,x930,x931,x932,x933,x934,x935,x936,x937,x938,x939,x940,x941,x942,x943,x944,x945,x946,x947,x948,x949,x950,x951,x952,x953,x954,x955,x956,x957,x958,x959,x960,x961,b1122,b1123,b1124,b1125,b1126,b1127,b1128,b1129,b1130,b1131,b1132,b1133,b1134,b1135,b1136,b1137,b1138,b1139,b1140,b1141,b1142,b1143,b1144,b1145,b1146,b1147,b1148,b1149,b1150,b1151,b1152,b1153,b1154,b1155,b1156,b1157,b1158,b1159,b1160,b1161,b1162,b1163,b1164,b1165,b1166,b1167,b1168,b1169,b1170,b1171,b1172,b1173,b1174,b1175,b1176,b1177,b1178,b1179,b1180,b1181,b1182,b1183,b1184,b1185,b1186,b1187,b1188,b1189,b1190,b1191,b1192,b1193,b1194,b1195,b1196,b1197,b1198,b1199,b1200,b1201,b1202,b1203,b1204,b1205,b1206,b1207,b1208,b1209,b1210,b1211,b1212,b1213,b1214,b1215,b1216,b1217,b1218,b1219,b1220,b1221,b1222,b1223,b1224,b1225,b1226,b1227,b1228,b1229,b1230,b1231,b1232,b1233,b1234,b1235,b1236,b1237,b1238,b1239,b1240,b1241,b1242,b1243,b1244,b1245,b1246,b1247,b1248,b1249,b1250,b1251,b1252,b1253,b1254,b1255,b1256,b1257,b1258,b1259,b1260,b1261,b1262,b1263,b1264,b1265,b1266,b1267,b1268,b1269,b1270,b1271,b1272,b1273,b1274,b1275,b1276,b1277,b1278,b1279,b1280,b1281;
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
   fscanf(fp,"%f", &b478); 
   fscanf(fp,"%f", &b479); 
   fscanf(fp,"%f", &b480); 
   fscanf(fp,"%f", &b481); 
   fscanf(fp,"%f", &b482); 
   fscanf(fp,"%f", &b483); 
   fscanf(fp,"%f", &b484); 
   fscanf(fp,"%f", &b485); 
   fscanf(fp,"%f", &b486); 
   fscanf(fp,"%f", &b487); 
   fscanf(fp,"%f", &b488); 
   fscanf(fp,"%f", &b489); 
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b495); 
   fscanf(fp,"%f", &b496); 
   fscanf(fp,"%f", &b497); 
   fscanf(fp,"%f", &b498); 
   fscanf(fp,"%f", &b499); 
   fscanf(fp,"%f", &b500); 
   fscanf(fp,"%f", &b501); 
   fscanf(fp,"%f", &b502); 
   fscanf(fp,"%f", &b503); 
   fscanf(fp,"%f", &b504); 
   fscanf(fp,"%f", &b505); 
   fscanf(fp,"%f", &b510); 
   fscanf(fp,"%f", &b511); 
   fscanf(fp,"%f", &b512); 
   fscanf(fp,"%f", &b513); 
   fscanf(fp,"%f", &b514); 
   fscanf(fp,"%f", &b515); 
   fscanf(fp,"%f", &b516); 
   fscanf(fp,"%f", &b517); 
   fscanf(fp,"%f", &b518); 
   fscanf(fp,"%f", &b519); 
   fscanf(fp,"%f", &b520); 
   fscanf(fp,"%f", &b521); 
   fscanf(fp,"%f", &b526); 
   fscanf(fp,"%f", &b527); 
   fscanf(fp,"%f", &b528); 
   fscanf(fp,"%f", &b529); 
   fscanf(fp,"%f", &b530); 
   fscanf(fp,"%f", &b531); 
   fscanf(fp,"%f", &b532); 
   fscanf(fp,"%f", &b533); 
   fscanf(fp,"%f", &b534); 
   fscanf(fp,"%f", &b535); 
   fscanf(fp,"%f", &b536); 
   fscanf(fp,"%f", &b537); 
   fscanf(fp,"%f", &b542); 
   fscanf(fp,"%f", &b543); 
   fscanf(fp,"%f", &b544); 
   fscanf(fp,"%f", &b545); 
   fscanf(fp,"%f", &b546); 
   fscanf(fp,"%f", &b547); 
   fscanf(fp,"%f", &b548); 
   fscanf(fp,"%f", &b549); 
   fscanf(fp,"%f", &b550); 
   fscanf(fp,"%f", &b551); 
   fscanf(fp,"%f", &b552); 
   fscanf(fp,"%f", &b553); 
   fscanf(fp,"%f", &b558); 
   fscanf(fp,"%f", &b559); 
   fscanf(fp,"%f", &b560); 
   fscanf(fp,"%f", &b561); 
   fscanf(fp,"%f", &b562); 
   fscanf(fp,"%f", &b563); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 
   fscanf(fp,"%f", &b574); 
   fscanf(fp,"%f", &b575); 
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b582); 
   fscanf(fp,"%f", &b583); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b590); 
   fscanf(fp,"%f", &b591); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &b598); 
   fscanf(fp,"%f", &b599); 
   fscanf(fp,"%f", &b600); 
   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x746); 
   fscanf(fp,"%f", &x747); 
   fscanf(fp,"%f", &x748); 
   fscanf(fp,"%f", &x749); 
   fscanf(fp,"%f", &x750); 
   fscanf(fp,"%f", &x751); 
   fscanf(fp,"%f", &x752); 
   fscanf(fp,"%f", &x753); 
   fscanf(fp,"%f", &x754); 
   fscanf(fp,"%f", &x755); 
   fscanf(fp,"%f", &x756); 
   fscanf(fp,"%f", &x757); 
   fscanf(fp,"%f", &x758); 
   fscanf(fp,"%f", &x759); 
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
   fscanf(fp,"%f", &x806); 
   fscanf(fp,"%f", &x807); 
   fscanf(fp,"%f", &x808); 
   fscanf(fp,"%f", &x809); 
   fscanf(fp,"%f", &x826); 
   fscanf(fp,"%f", &x827); 
   fscanf(fp,"%f", &x828); 
   fscanf(fp,"%f", &x829); 
   fscanf(fp,"%f", &x894); 
   fscanf(fp,"%f", &x895); 
   fscanf(fp,"%f", &x896); 
   fscanf(fp,"%f", &x897); 
   fscanf(fp,"%f", &x898); 
   fscanf(fp,"%f", &x899); 
   fscanf(fp,"%f", &x900); 
   fscanf(fp,"%f", &x901); 
   fscanf(fp,"%f", &x926); 
   fscanf(fp,"%f", &x927); 
   fscanf(fp,"%f", &x928); 
   fscanf(fp,"%f", &x929); 
   fscanf(fp,"%f", &x930); 
   fscanf(fp,"%f", &x931); 
   fscanf(fp,"%f", &x932); 
   fscanf(fp,"%f", &x933); 
   fscanf(fp,"%f", &x934); 
   fscanf(fp,"%f", &x935); 
   fscanf(fp,"%f", &x936); 
   fscanf(fp,"%f", &x937); 
   fscanf(fp,"%f", &x938); 
   fscanf(fp,"%f", &x939); 
   fscanf(fp,"%f", &x940); 
   fscanf(fp,"%f", &x941); 
   fscanf(fp,"%f", &x942); 
   fscanf(fp,"%f", &x943); 
   fscanf(fp,"%f", &x944); 
   fscanf(fp,"%f", &x945); 
   fscanf(fp,"%f", &x946); 
   fscanf(fp,"%f", &x947); 
   fscanf(fp,"%f", &x948); 
   fscanf(fp,"%f", &x949); 
   fscanf(fp,"%f", &x950); 
   fscanf(fp,"%f", &x951); 
   fscanf(fp,"%f", &x952); 
   fscanf(fp,"%f", &x953); 
   fscanf(fp,"%f", &x954); 
   fscanf(fp,"%f", &x955); 
   fscanf(fp,"%f", &x956); 
   fscanf(fp,"%f", &x957); 
   fscanf(fp,"%f", &x958); 
   fscanf(fp,"%f", &x959); 
   fscanf(fp,"%f", &x960); 
   fscanf(fp,"%f", &x961); 
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
   res=-( + 20*x2 + 17*x3 + 15*x4 + 15*x5 + 20*x22 + 21*x23 + 19*x24
 + 19*x25 + 18*x38 + 20*x39 + 20*x40 + 19*x41 + 16*x86 + 19*x87 + 17*x88
 + 16*x89 - 26*x102 - 31*x103 - 31*x104 - 35*x105 - 30*x110 - 29*x111
 - 37*x112 - 36*x113 + 20*x114 + 18*x115 + 21*x116 + 16*x117 - 2*x126
 - 2*x127 - 2*x128 - 2*x129 - 3*x130 - 2*x131 - 2*x132 - 2*x133 - 3*x134
 - 3*x135 - 3*x136 - 3*x137 - 2*x138 - 2*x139 - 2*x140 - 2*x141 + 6*b478
 + 4*b479 + 3*b480 + 3*b481 + 40*b482 + 35*b483 + 20*b484 + 20*b485
 + 46*b486 + 39*b487 + 23*b488 + 23*b489 + 7*b494 + 4*b495 + 4*b496
 + 4*b497 + 30*b498 + 25*b499 + 20*b500 + 20*b501 + 37*b502 + 29*b503
 + 22*b504 + 24*b505 + 7*b510 + 5*b511 + 3*b512 + 3*b513 + 15*b514
 + 5*b515 + 2*b516 + 2*b517 + 22*b518 + 10*b519 + 5*b520 + 5*b521
 + 11*b526 + 8*b527 + 6*b528 + 5*b529 + 13*b530 + 8*b531 + 3*b532 + 3*b533
 + 24*b534 + 16*b535 + 9*b536 + 8*b537 + 10*b542 + 7*b543 + 6*b544
 + 6*b545 + 13*b546 + 8*b547 + 3*b548 + 2*b549 + 23*b550 + 15*b551
 + 9*b552 + 8*b553 + 9*b558 + 9*b559 + 7*b560 + 6*b561 + 30*b562 + 30*b563
 + 25*b564 + 20*b565 + 39*b566 + 39*b567 + 32*b568 + 26*b569 + 8*b574
 + 7*b575 + 7*b576 + 4*b577 + 20*b578 + 15*b579 + 10*b580 + 10*b581
 + 28*b582 + 22*b583 + 17*b584 + 14*b585 + 8*b590 + 6*b591 + 5*b592
 + 3*b593 + 15*b594 + 10*b595 + 6*b596 + 3*b597 + 23*b598 + 16*b599
 + 11*b600 + 6*b601 + x602 + x603 + x604 + x605 - 5*x626 - 10*x627
 - 5*x628 - 10*x629 + x646 + x647 + x648 + x649 + 10*x714 + 5*x715
 + 5*x716 + 10*x717 + 5*x718 + 5*x719 + 5*x720 + 10*x721 - 40*x746
 - 30*x747 - 15*x748 - 10*x749 - 15*x750 - 20*x751 - 25*x752 - 20*x753
 - 10*x754 - 30*x755 - 40*x756 - 30*x757 - 30*x758 - 20*x759 - 20*x760
 - 25*x761 - 35*x762 - 50*x763 - 20*x764 - 50*x765 - 20*x766 - 30*x767
 - 35*x768 - 10*x769 - 25*x770 - 50*x771 - 10*x772 - 35*x773 - 15*x774
 - 20*x775 - 20*x776 - 30*x777 - 30*x806 - 40*x807 - 40*x808 - 35*x809
 + x826 + x827 + x828 + x829 + 5*x894 + 3*x895 + 4*x896 + 3*x897 + x898
 + x899 + x900 + x901 - 220*x926 - 210*x927 - 150*x928 - 125*x929
 - 240*x930 - 220*x931 - 100*x932 - 130*x933 - 190*x934 - 160*x935
 - 150*x936 - 110*x937 - 190*x938 - 190*x939 - 120*x940 - 100*x941
 - 385*x942 - 490*x943 - 550*x944 - 500*x945 - 390*x946 - 505*x947
 - 490*x948 - 640*x949 - 480*x950 - 600*x951 - 530*x952 - 560*x953
 - 490*x954 - 600*x955 - 440*x956 - 510*x957 - 550*x958 - 550*x959
 - 600*x960 - 500*x961 + 5*b1122 + 4*b1123 + 6*b1124 + 3*b1125 + 8*b1126
 + 7*b1127 + 6*b1128 + 5*b1129 + 6*b1130 + 9*b1131 + 4*b1132 + 3*b1133
 + 10*b1134 + 9*b1135 + 5*b1136 + 6*b1137 + 6*b1138 + 10*b1139 + 6*b1140
 + 9*b1141 + 7*b1142 + 7*b1143 + 4*b1144 + 2*b1145 + 4*b1146 + 3*b1147
 + 2*b1148 + 8*b1149 + 5*b1150 + 6*b1151 + 7*b1152 + 4*b1153 + 2*b1154
 + 5*b1155 + 2*b1156 + 6*b1157 + 4*b1158 + 7*b1159 + 4*b1160 + 7*b1161
 + 3*b1162 + 9*b1163 + 3*b1164 + 6*b1165 + 7*b1166 + 2*b1167 + 9*b1168
 + 6*b1169 + 3*b1170 + b1171 + 9*b1172 + 10*b1173 + 2*b1174 + 6*b1175
 + 3*b1176 + 7*b1177 + 4*b1178 + 8*b1179 + b1180 + 4*b1181 + 2*b1182
 + 5*b1183 + 2*b1184 + 5*b1185 + 3*b1186 + 4*b1187 + 3*b1188 + 7*b1189
 + 5*b1190 + 7*b1191 + 6*b1192 + 2*b1193 + 2*b1194 + 8*b1195 + 4*b1196
 + 2*b1197 + b1198 + 4*b1199 + b1200 + b1201 + 2*b1202 + 5*b1203 + 2*b1204
 + 7*b1205 + 9*b1206 + 2*b1207 + 9*b1208 + 6*b1209 + 5*b1210 + 8*b1211
 + 4*b1212 + 3*b1213 + 2*b1214 + 3*b1215 + 8*b1216 + 9*b1217 + 10*b1218
 + 6*b1219 + 3*b1220 + 6*b1221 + 4*b1222 + 8*b1223 + 7*b1224 + 7*b1225
 + 7*b1226 + 3*b1227 + 9*b1228 + 3*b1229 + 4*b1230 + 8*b1231 + 6*b1232
 + 8*b1233 + 2*b1234 + b1235 + 3*b1236 + 9*b1237 + 8*b1238 + 3*b1239
 + 4*b1240 + 3*b1241 + 9*b1242 + 5*b1243 + b1244 + 2*b1245 + 3*b1246
 + 9*b1247 + 5*b1248 + 3*b1249 + 5*b1250 + 3*b1251 + 3*b1252 + 4*b1253
 + 5*b1254 + 3*b1255 + 2*b1256 + 7*b1257 + 6*b1258 + 4*b1259 + 6*b1260
 + 7*b1261 + 2*b1262 + 6*b1263 + 6*b1264 + 7*b1265 + 6*b1266 + 4*b1267
 + 3*b1268 + 5*b1269 + 3*b1270 + 2*b1271 + b1272 + 3*b1273 + 5*b1274
 + 8*b1275 + 6*b1276 + 5*b1277 + 9*b1278 + 5*b1279 + 2*b1280 + b1281 - 0
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
