#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament24";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b105,b185,b189,b83,b102,b186,b3,b69,b191,b203,b204,b4,b37,b89,b188,b5,b133,b163,b206,b212,b6,b54,b72,b110,b7,b160,b198,b217,b8,b70,b131,b192,b9,b22,b227,b228,b229,b10,b30,b235,b236,b11,b57,b75,b187,b238,b12,b43,b96,b239,b13,b25,b153,b14,b92,b190,b207,b15,b60,b117,b243,b16,b32,b244,b17,b78,b141,b18,b45,b19,b49,b241,b20,b40,b135,b225,b21,b97,b168,b31,b23,b62,b24,b47,b65,b252,b26,b64,b27,b28,b197,b213,b251,b183,b29,b119,b44,b171,b80,b81,b237,b33,b34,b248,b255,b259,b63,b87,b35,b36,b86,b249,b55,b220,b260,b38,b196,b250,b39,b41,b76,b94,b193,b208,b254,b42,b205,b138,b140,b61,b100,b230,b245,b46,b184,b201,b256,b48,b84,b85,b107,b50,b106,b51,b67,b52,b157,b221,b231,b53,b71,b156,b210,b56,b234,b165,b58,b59,b199,b263,b79,b122,b170,b219,b240,b103,b104,b128,b66,b179,b215,b68,b222,b266,b90,b130,b202,b73,b224,b253,b74,b262,b136,b233,b77,b267,b99,b144,b264,b82,b173,b209,b175,b200,b126,b127,b152,b88,b151,b246,b269,b91,b112,b132,b93,b114,b95,b247,b118,b121,b98,b218,b120,b172,b101,b147,b265,b146,b148,b149,b181,b150,b108,b180,b109,b214,b242,b272,b111,b113,b134,b226,b194,b271,b115,b116,b166,b142,b143,b257,b123,b124,b125,b261,b177,b274,b129,b211,b273,b158,b161,b137,b139,b169,b145,b276,b258,b195,b154,b155,b216,b268,b270,b232,b159,b162,b164,b167,b174,b176,b178,b275,b182,b223;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b223); 

   fclose(fp);
   res=-( 2*b1*b2 - 2*b1 - 2*b2 + 2*b1*b105 - 2*b105 + 2*b1*b185 - 2*b1*b189 + 2*b2*
b83 - 4*b83 - 2*b2*b102 + 2*b102 + 2*b2*b186 - 2*b3*b69 - 2*b3 + 4*b69 + 2
*b3*b191 + 2*b3*b203 + 2*b3*b204 + 2*b4*b37 - 2*b4 - 2*b37 - 2*b4*b89 + 4*
b89 + 2*b4*b188 + 2*b4*b191 + 2*b5*b133 - 2*b5 - 2*b133 + 2*b5*b163 - 2*
b163 + 2*b5*b206 - 2*b5*b212 + 2*b6*b54 - 2*b6 - 4*b54 + 2*b6*b72 - 2*b72
 - 2*b6*b110 + 4*b110 + 2*b6*b188 + 2*b7*b160 - 2*b7 - 4*b160 + 2*b7*b198
 + 2*b7*b206 - 2*b7*b217 + 2*b8*b70 - 2*b8 - 4*b70 + 2*b8*b72 - 2*b8*b131
 + 2*b131 + 2*b8*b192 + 2*b9*b22 - 2*b9 - 2*b22 - 2*b9*b227 + 2*b9*b228 +
 2*b9*b229 + 2*b10*b22 - 2*b10 + 2*b10*b30 - 4*b30 - 2*b10*b235 + 2*b10*
b236 + 2*b11*b57 - 2*b11 - 2*b57 + 2*b11*b75 - 2*b75 + 2*b11*b187 - 2*b11*
b238 + 2*b12*b30 - 2*b12 + 2*b12*b43 - 4*b43 + 2*b12*b96 - 2*b96 - 2*b12*
b239 + 2*b13*b25 - 2*b13 - 2*b25 + 2*b13*b153 - 4*b153 + 2*b14*b57 - 2*b14
 - 2*b14*b92 + 2*b92 + 2*b14*b190 + 2*b14*b207 + 2*b15*b43 - 2*b15 + 2*b15
*b60 - 4*b60 + 2*b15*b117 - 4*b117 - 2*b15*b243 - 2*b16*b22 - 2*b16 + 2*
b16*b32 - 4*b32 + 2*b16*b43 + 2*b16*b244 + 2*b17*b60 - 4*b17 + 2*b17*b78
 - 4*b78 + 2*b17*b141 - 4*b141 + 2*b17*b243 + 2*b18*b32 - 2*b18 + 2*b18*
b45 - 4*b45 + 2*b18*b60 - 2*b18*b229 + 2*b19*b49 - 2*b19 - 4*b49 + 2*b19*
b241 + 2*b20*b40 - 2*b20 - 2*b40 - 2*b20*b135 - 2*b135 + 2*b20*b163 + 2*
b20*b225 + 2*b21*b78 - 4*b21 + 2*b21*b97 - 4*b97 + 2*b21*b168 - 4*b168 + 2
*b21*b239 + 2*b22*b31 - 4*b31 + 2*b23*b45 - 4*b23 + 2*b23*b62 - 4*b62 + 2*
b23*b78 + 2*b23*b229 - 2*b24*b25 - 2*b24 + 2*b24*b47 - 4*b47 + 2*b24*b65
 - 4*b65 + 2*b24*b252 + 2*b25*b26 - 2*b26 + 2*b25*b64 - 4*b64 + 2*b26*b65
 + 2*b27*b28 - 4*b27 - 4*b28 + 2*b27*b197 + 2*b27*b213 + 2*b27*b251 + 2*
b28*b183 + 2*b28*b225 + 2*b28*b227 + 2*b29*b97 - 2*b29 + 2*b29*b119 - 2*
b119 - 2*b29*b183 + 2*b29*b235 + 2*b30*b44 - 4*b44 + 2*b30*b171 - 2*b171
 + 2*b31*b62 + 2*b31*b80 - 4*b80 + 2*b31*b97 + 2*b32*b81 - 4*b81 + 2*b32*
b237 + 2*b33*b34 - 4*b33 - 2*b34 + 2*b33*b248 + 2*b33*b255 + 2*b33*b259 +
 2*b34*b63 - 4*b63 + 2*b34*b87 - 4*b87 - 2*b34*b241 + 2*b35*b36 - 2*b35 - 2
*b36 + 2*b35*b86 - 4*b86 - 2*b35*b248 + 2*b35*b249 + 2*b36*b87 + 2*b37*b55
 - 2*b55 + 2*b37*b220 - 2*b37*b260 + 2*b38*b55 - 4*b38 + 2*b38*b196 + 2*
b38*b238 + 2*b38*b250 + 2*b39*b41 + 2*b39 - 4*b41 - 2*b39*b76 + 4*b76 - 2*
b39*b94 - 2*b94 - 2*b39*b207 + 2*b40*b193 + 2*b40*b208 - 2*b40*b254 + 2*
b41*b42 + 2*b42 + 2*b41*b205 + 2*b41*b254 - 2*b42*b138 + 2*b138 - 2*b42*
b140 + 2*b140 - 2*b42*b183 + 2*b43*b61 - 2*b61 + 2*b44*b80 + 2*b44*b100 -
 4*b100 + 2*b44*b119 + 2*b45*b230 + 2*b45*b245 + 2*b46*b184 - 2*b46 + 2*b46
*b201 + 2*b46*b245 - 2*b46*b256 + 2*b47*b48 - 4*b48 + 2*b47*b84 - 2*b84 +
 2*b47*b256 + 2*b48*b85 - 4*b85 + 2*b48*b107 - 4*b107 + 2*b48*b241 + 2*b49*
b50 - 2*b50 + 2*b49*b106 - 4*b106 + 2*b49*b248 + 2*b50*b107 + 2*b51*b67 -
 2*b51 - 4*b67 + 2*b51*b260 + 2*b52*b54 - 4*b52 + 2*b52*b157 - 2*b157 + 2*
b52*b221 + 2*b52*b231 - 2*b53*b71 + 2*b53 - 2*b71 - 2*b53*b156 + 4*b156 -
 2*b53*b196 + 2*b53*b210 + 2*b54*b71 + 2*b54*b260 + 2*b55*b56 - 2*b56 - 2*
b55*b203 + 2*b56*b71 - 2*b56*b92 + 2*b56*b234 - 2*b57*b165 + 4*b165 + 2*
b57*b197 - 2*b58*b59 + 2*b58 + 2*b59 - 2*b58*b193 + 2*b58*b199 - 2*b58*
b251 + 2*b59*b228 - 2*b59*b239 - 2*b59*b263 + 2*b60*b79 - 2*b79 + 2*b61*
b100 + 2*b61*b122 - 4*b122 - 2*b61*b170 - 2*b170 + 2*b62*b219 + 2*b62*b240
 + 2*b63*b64 + 2*b63*b103 - 2*b103 + 2*b63*b259 + 2*b64*b104 - 4*b104 + 2*
b64*b128 - 2*b128 + 2*b65*b66 - 2*b66 + 2*b65*b179 - 2*b179 + 2*b66*b128
 + 2*b67*b70 + 2*b67*b131 + 2*b67*b215 + 2*b68*b70 + 2*b68 - 2*b68*b203 -
 2*b68*b222 - 2*b68*b266 - 2*b69*b90 - 2*b90 - 2*b69*b130 + 2*b130 - 2*b69*
b202 + 2*b70*b90 + 2*b71*b73 - 2*b73 + 2*b72*b187 - 2*b72*b224 + 2*b73*b90
 + 2*b73*b224 - 2*b73*b253 + 2*b74*b163 - 2*b74 + 2*b74*b234 + 2*b74*b250
 - 2*b74*b262 - 2*b75*b136 + 2*b136 + 2*b75*b193 + 2*b75*b233 - 2*b76*b77
 + 2*b77 - 2*b76*b197 - 2*b76*b199 + 2*b77*b236 - 2*b77*b243 - 2*b77*b267
 + 2*b78*b99 - 2*b99 + 2*b79*b122 + 2*b79*b144 - 4*b144 - 2*b79*b264 + 2*
b80*b82 - 4*b82 + 2*b80*b237 + 2*b81*b83 + 2*b81*b173 - 4*b173 + 2*b81*
b209 + 2*b82*b83 + 2*b82*b144 + 2*b82*b175 + 2*b175 + 2*b83*b84 + 2*b84*
b85 - 2*b84*b200 + 2*b85*b86 + 2*b85*b126 - 2*b126 + 2*b86*b127 - 4*b127
 + 2*b86*b152 - 2*b152 + 2*b87*b88 - 2*b88 + 2*b87*b151 - 2*b151 + 2*b88*
b152 - 2*b89*b210 - 2*b89*b246 - 2*b89*b269 + 2*b90*b91 - 2*b91 + 2*b91*
b217 - 2*b91*b250 + 2*b91*b269 - 2*b92*b112 - 2*b112 + 2*b92*b132 - 4*b132
 + 2*b93*b94 - 2*b93 + 2*b93*b224 - 2*b93*b238 + 2*b93*b262 + 2*b94*b112
 + 2*b94*b114 + 2*b114 - 2*b95*b165 + 4*b95 - 2*b95*b205 - 2*b95*b208 - 2*
b95*b247 + 2*b96*b118 - 2*b118 - 2*b96*b199 + 2*b96*b247 + 2*b97*b121 - 4*
b121 + 2*b98*b118 - 4*b98 + 2*b98*b121 + 2*b98*b171 + 2*b98*b218 - 2*b99*
b120 - 2*b120 + 2*b99*b144 + 2*b99*b172 - 4*b172 + 2*b100*b101 - 4*b101 +
 2*b100*b230 + 2*b101*b147 + 2*b147 + 2*b101*b172 + 2*b101*b265 - 2*b102*
b103 + 2*b102*b146 - 4*b146 - 2*b102*b240 + 2*b103*b104 + 2*b103*b265 + 2*
b104*b106 + 2*b104*b148 - 2*b148 - 2*b105*b128 + 2*b105*b149 - 2*b149 + 2*
b105*b181 - 4*b181 + 2*b106*b150 - 2*b150 + 2*b106*b181 + 2*b107*b108 - 2*
b108 + 2*b107*b180 - 2*b180 + 2*b108*b181 + 2*b109*b130 - 2*b109 + 2*b109*
b202 - 2*b110*b214 - 2*b110*b242 - 2*b110*b272 + 2*b111*b212 - 4*b111 + 2*
b111*b253 + 2*b111*b269 + 2*b111*b272 + 2*b112*b113 - 2*b113 + 2*b112*b217
 + 2*b113*b134 - 2*b134 + 2*b113*b226 - 2*b113*b251 - 2*b114*b138 - 2*b114
*b194 - 2*b114*b271 - 2*b115*b116 + 2*b115 - 2*b116 - 2*b115*b136 + 2*b115
*b166 - 2*b166 - 2*b115*b213 + 2*b116*b117 + 2*b116*b239 + 2*b116*b271 + 2
*b117*b142 - 2*b142 + 2*b117*b199 + 2*b118*b120 - 2*b118*b236 + 2*b119*
b143 - 4*b143 - 2*b119*b257 + 2*b120*b142 + 2*b120*b143 + 2*b121*b123 - 2*
b123 + 2*b121*b172 + 2*b122*b124 - 4*b124 + 2*b122*b219 + 2*b123*b124 + 2*
b123*b143 - 2*b123*b184 + 2*b124*b125 + 2*b125 + 2*b124*b261 - 2*b125*b126
 - 2*b125*b189 - 2*b125*b237 + 2*b126*b127 + 2*b126*b261 + 2*b127*b177 - 2
*b177 + 2*b127*b179 + 2*b128*b274 - 2*b129*b202 + 2*b129 - 2*b129*b246 - 2
*b130*b211 - 2*b130*b273 - 2*b131*b158 - 2*b158 - 2*b131*b220 + 2*b132*
b133 + 2*b132*b158 + 2*b132*b272 + 2*b133*b161 - 2*b161 - 2*b133*b204 + 2*
b134*b135 + 2*b134*b212 - 2*b134*b253 + 2*b135*b137 - 2*b137 + 2*b135*b161
 + 2*b136*b262 - 2*b136*b267 + 2*b137*b138 - 2*b137*b206 + 2*b137*b267 - 2
*b138*b139 - 2*b139 + 2*b139*b141 + 2*b139*b235 + 2*b139*b267 - 2*b140*
b169 - 2*b169 - 2*b140*b218 + 2*b140*b254 + 2*b141*b169 + 2*b141*b208 - 2*
b142*b228 + 2*b142*b264 + 2*b143*b145 - 2*b145 + 2*b144*b146 + 2*b145*b146
 + 2*b145*b184 - 2*b145*b276 + 2*b146*b258 - 2*b147*b148 - 2*b147*b195 - 2
*b147*b230 + 2*b148*b150 + 2*b148*b258 - 2*b149*b151 + 2*b149*b189 + 2*
b149*b201 + 2*b150*b151 - 2*b150*b201 + 2*b151*b153 + 2*b152*b154 - 2*b154
 - 2*b152*b185 + 2*b153*b154 + 2*b153*b185 - 2*b155*b210 + 2*b155 - 2*b155
*b242 - 2*b156*b216 - 2*b156*b268 - 2*b156*b270 + 2*b157*b196 + 2*b157*
b202 - 2*b157*b232 + 2*b158*b159 - 4*b159 + 2*b158*b273 + 2*b159*b160 + 2*
b159*b232 + 2*b159*b238 + 2*b160*b162 - 2*b162 + 2*b160*b204 + 2*b161*b164
 - 4*b164 - 2*b161*b250 + 2*b162*b164 - 2*b162*b207 + 2*b162*b253 - 2*b163
*b166 + 2*b164*b166 + 2*b164*b251 - 2*b165*b262 - 2*b165*b263 + 2*b166*
b263 + 2*b167*b168 - 2*b167 - 2*b167*b225 + 2*b167*b227 + 2*b167*b263 + 2*
b168*b213 + 2*b168*b257 + 2*b169*b170 + 2*b169*b264 + 2*b170*b257 + 2*b170
*b276 + 2*b171*b173 - 2*b171*b244 + 2*b172*b174 - 4*b174 + 2*b173*b174 + 2
*b173*b276 + 2*b174*b176 - 2*b176 + 2*b174*b200 - 2*b175*b177 - 2*b175*
b201 - 2*b175*b219 + 2*b176*b177 - 2*b176*b240 + 2*b176*b255 + 2*b177*b178
 - 2*b178 + 2*b178*b179 + 2*b178*b180 - 2*b178*b195 - 2*b179*b275 - 2*b180
*b186 + 2*b180*b275 + 2*b181*b182 - 2*b182 + 2*b182*b275 + 2*b183*b218 - 2
*b184*b209 - 2*b185*b186 + 2*b186*b195 - 2*b187*b188 - 2*b187*b233 - 2*
b188*b217 + 2*b189*b200 - 2*b190*b191 + 2*b190*b192 - 2*b190*b223 - 2*b191
*b212 - 2*b192*b232 - 2*b192*b234 - 2*b193*b194 + 2*b194*b223 + 2*b194*
b233 + 2*b195*b209 - 2*b196*b204 - 2*b197*b198 + 2*b198*b223 - 2*b198*b226
 - 2*b200*b245 + 2*b203*b214 - 2*b205*b206 + 2*b205*b207 - 2*b208*b236 - 2
*b209*b259 + 2*b210*b211 - 2*b213*b228 - 2*b214*b215 + 2*b214*b216 - 2*
b218*b229 - 2*b219*b265 - 2*b220*b221 + 2*b220*b222 - 2*b223*b224 - 2*b225
*b226 + 2*b226*b271 - 2*b227*b257 - 2*b230*b261 - 2*b231*b260 + 2*b232*
b270 - 2*b233*b234 - 2*b235*b254 - 2*b237*b258 + 2*b240*b244 - 2*b241*b249
 + 2*b242*b266 + 2*b242*b270 + 2*b243*b247 - 2*b244*b245 + 2*b246*b268 + 2
*b246*b273 - 2*b247*b271 - 2*b248*b252 - 2*b252*b255 + 2*b252*b256 - 2*
b255*b258 - 2*b256*b261 - 2*b259*b265 - 2*b264*b276 - 2*b269*b270 - 2*b272
*b273 - 2*b274*b275  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
