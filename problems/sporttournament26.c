#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament26";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b136,b232,b236,b89,b133,b233,b3,b14,b59,b243,b260,b4,b78,b201,b255,b256,b5,b34,b35,b76,b248,b6,b240,b261,b262,b7,b62,b169,b235,b8,b11,b15,b249,b275,b9,b63,b79,b199,b10,b145,b149,b172,b252,b97,b241,b12,b122,b171,b204,b245,b13,b17,b228,b60,b283,b16,b83,b106,b180,b273,b18,b42,b56,b22,b19,b197,b20,b107,b127,b211,b277,b21,b30,b40,b68,b23,b31,b73,b26,b24,b128,b155,b281,b25,b53,b27,b92,b288,b32,b28,b156,b181,b284,b29,b70,b216,b220,b282,b43,b55,b291,b33,b113,b295,b96,b142,b36,b37,b47,b101,b257,b48,b66,b123,b38,b182,b212,b39,b85,b86,b278,b41,b294,b299,b57,b72,b44,b137,b45,b95,b237,b46,b285,b49,b152,b50,b230,b272,b267,b292,b154,b229,b51,b214,b52,b109,b274,b54,b223,b303,b90,b74,b91,b58,b226,b116,b140,b166,b61,b254,b289,b80,b305,b234,b64,b100,b65,b67,b102,b178,b251,b264,b296,b290,b69,b268,b131,b215,b270,b71,b231,b247,b111,b93,b112,b75,b193,b141,b77,b250,b98,b168,b81,b120,b82,b259,b269,b310,b84,b158,b183,b87,b219,b222,b88,b242,b134,b114,b135,b94,b227,b196,b300,b118,b198,b99,b203,b266,b144,b173,b103,b147,b177,b271,b174,b104,b105,b244,b253,b314,b315,b108,b185,b316,b110,b307,b246,b162,b138,b163,b115,b117,b304,b194,b119,b121,b286,b318,b309,b263,b151,b206,b124,b125,b287,b320,b126,b213,b265,b130,b129,b218,b132,b188,b187,b190,b164,b191,b192,b139,b143,b308,b279,b146,b321,b148,b150,b239,b306,b205,b276,b153,b258,b302,b157,b293,b159,b160,b184,b161,b298,b224,b323,b165,b167,b317,b311,b322,b200,b170,b176,b175,b179,b297,b186,b217,b189,b312,b195,b313,b301,b319,b280,b202,b207,b208,b209,b210,b221,b225,b324,b325,b238;
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
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b295); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b278); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b294); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b303); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b305); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b310); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b314); 
   fscanf(fp,"%f", &b315); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b316); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b307); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b304); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b286); 
   fscanf(fp,"%f", &b318); 
   fscanf(fp,"%f", &b309); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b287); 
   fscanf(fp,"%f", &b320); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b308); 
   fscanf(fp,"%f", &b279); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b321); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b306); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b302); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b323); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b317); 
   fscanf(fp,"%f", &b311); 
   fscanf(fp,"%f", &b322); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b312); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b313); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &b319); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b324); 
   fscanf(fp,"%f", &b325); 
   fscanf(fp,"%f", &b238); 

   fclose(fp);
   res=-( 2*b1*b2 - 2*b1 - 2*b2 + 2*b1*b136 - 2*b136 + 2*b1*b232 - 2*b1*b236 + 2*b2*
b89 - 4*b89 - 2*b2*b133 + 2*b133 + 2*b2*b233 + 2*b3*b14 - 2*b3 - 2*b14 + 2
*b3*b59 - 2*b59 - 2*b3*b243 + 2*b3*b260 + 2*b4*b78 - 2*b4 - 2*b78 + 2*b4*
b201 - 2*b201 - 2*b4*b255 + 2*b4*b256 - 2*b5*b34 - 2*b5 + 2*b34 + 2*b5*b35
 - 2*b35 + 2*b5*b76 - 2*b76 + 2*b5*b248 + 2*b6*b201 - 2*b6 + 2*b6*b240 - 2
*b6*b261 + 2*b6*b262 + 2*b7*b62 - 2*b7 - 2*b62 - 2*b7*b169 + 2*b169 + 2*b7
*b235 + 2*b7*b240 + 2*b8*b11 - 4*b8 - 4*b11 + 2*b8*b15 - 2*b15 + 2*b8*b249
 + 2*b8*b275 + 2*b9*b63 - 2*b9 - 2*b63 + 2*b9*b79 - 2*b79 - 2*b9*b199 + 2*
b199 + 2*b9*b235 - 2*b10*b145 - 2*b10 + 2*b145 + 2*b10*b149 - 2*b149 + 2*
b10*b172 - 4*b172 + 2*b10*b252 + 2*b11*b63 + 2*b11*b97 - 2*b97 + 2*b11*
b241 + 2*b12*b122 - 2*b12 - 2*b122 - 2*b12*b171 + 4*b171 + 2*b12*b204 - 4*
b204 + 2*b12*b245 + 2*b13*b17 - 2*b13 - 2*b17 + 2*b13*b228 - 2*b228 + 2*
b14*b15 + 2*b14*b60 - 2*b60 - 2*b14*b283 + 2*b15*b35 - 2*b15*b169 + 2*b16*
b83 - 2*b16 - 4*b83 + 2*b16*b106 - 2*b106 - 2*b16*b180 + 4*b180 + 2*b16*
b273 + 2*b17*b18 - 2*b18 - 2*b17*b42 - 2*b42 + 2*b17*b56 - 4*b56 + 2*b18*
b22 - 2*b22 - 2*b19*b197 + 2*b19 - 2*b197 - 2*b19*b199 - 2*b19*b260 + 2*
b19*b261 + 2*b20*b107 - 2*b20 - 4*b107 + 2*b20*b127 - 4*b127 - 2*b20*b211
 + 2*b211 + 2*b20*b277 + 2*b21*b30 - 2*b21 - 2*b30 + 2*b21*b40 - 4*b40 - 2
*b21*b68 - 2*b68 + 2*b21*b107 + 2*b22*b23 - 2*b23 - 2*b22*b31 - 2*b31 + 2*
b22*b73 - 4*b73 + 2*b23*b26 - 2*b26 + 2*b24*b68 - 2*b24 + 2*b24*b128 - 4*
b128 + 2*b24*b155 - 4*b155 - 2*b24*b281 + 2*b25*b40 - 2*b25 + 2*b25*b53 -
 4*b53 + 2*b25*b128 - 2*b25*b277 + 2*b26*b27 - 2*b27 + 2*b26*b92 - 4*b92 -
 2*b26*b288 + 2*b27*b32 - 4*b32 + 2*b28*b83 - 2*b28 + 2*b28*b156 - 2*b156
 + 2*b28*b181 - 4*b181 - 2*b28*b284 + 2*b29*b53 - 2*b29 + 2*b29*b70 - 4*
b70 + 2*b29*b156 - 2*b29*b273 + 2*b30*b216 - 4*b216 - 2*b30*b220 + 2*b220
 + 2*b30*b282 + 2*b31*b43 - 4*b43 + 2*b31*b55 - 4*b55 + 2*b31*b291 + 2*b32
*b33 - 2*b33 + 2*b32*b113 - 4*b113 + 2*b32*b288 + 2*b33*b43 - 2*b34*b295
 + 2*b35*b96 - 2*b96 - 2*b35*b142 - 2*b142 + 2*b36*b37 - 2*b36 - 2*b37 + 2
*b36*b47 - 2*b47 + 2*b36*b101 - 4*b101 - 2*b36*b257 + 2*b37*b48 - 2*b48 +
 2*b37*b66 - 2*b66 - 2*b37*b123 - 2*b123 + 2*b38*b107 - 4*b38 + 2*b38*b182
 - 2*b182 + 2*b38*b212 - 4*b212 + 2*b38*b284 + 2*b39*b70 - 4*b39 + 2*b39*
b85 - 4*b85 + 2*b39*b182 + 2*b39*b273 + 2*b40*b86 - 4*b86 + 2*b40*b278 + 2
*b41*b42 - 4*b41 + 2*b41*b288 + 2*b41*b294 + 2*b41*b299 + 2*b42*b57 - 4*
b57 + 2*b42*b72 - 4*b72 + 2*b43*b44 - 2*b44 + 2*b43*b137 - 4*b137 + 2*b44*
b57 + 2*b45*b95 - 2*b45 - 2*b95 + 2*b45*b237 + 2*b46*b248 - 2*b46 + 2*b46*
b261 + 2*b46*b262 - 2*b46*b285 + 2*b47*b49 - 4*b49 + 2*b47*b122 - 2*b47*
b152 + 4*b152 + 2*b48*b50 - 4*b50 + 2*b48*b230 - 2*b48*b272 + 2*b49*b50 +
 2*b49*b267 + 2*b49*b292 + 2*b50*b154 + 2*b154 + 2*b50*b229 + 2*b51*b128 -
 2*b51 + 2*b51*b214 - 2*b214 - 2*b51*b229 + 2*b51*b281 + 2*b52*b85 - 4*b52
 + 2*b52*b109 - 4*b109 + 2*b52*b214 + 2*b52*b277 + 2*b53*b220 + 2*b53*b274
 + 2*b54*b55 - 2*b54 + 2*b54*b223 - 2*b223 + 2*b54*b291 - 2*b54*b303 + 2*
b55*b56 + 2*b55*b90 - 2*b90 + 2*b56*b74 - 4*b74 + 2*b56*b91 - 4*b91 + 2*
b57*b58 - 2*b58 + 2*b57*b226 - 2*b226 + 2*b58*b74 + 2*b59*b116 - 2*b116 +
 2*b60*b140 - 2*b140 - 2*b60*b166 + 2*b166 + 2*b60*b243 + 2*b61*b62 - 2*b61
 + 2*b61*b254 + 2*b61*b255 - 2*b61*b289 + 2*b62*b80 - 2*b80 - 2*b62*b305
 - 2*b63*b145 + 2*b63*b234 + 2*b64*b80 - 4*b64 + 2*b64*b100 - 2*b100 + 2*
b64*b145 + 2*b64*b249 + 2*b65*b67 - 2*b65 - 4*b67 + 2*b65*b102 - 2*b102 -
 2*b65*b178 + 4*b178 + 2*b65*b252 + 2*b66*b251 + 2*b66*b264 - 2*b66*b296 +
 2*b67*b230 + 2*b67*b290 + 2*b67*b296 + 2*b68*b69 - 2*b69 + 2*b68*b268 + 2*
b69*b109 + 2*b69*b131 - 4*b131 - 2*b69*b215 - 2*b215 + 2*b70*b270 + 2*b70*
b282 + 2*b71*b86 - 2*b71 + 2*b71*b231 + 2*b71*b247 - 2*b71*b299 + 2*b72*
b73 + 2*b72*b111 - 2*b111 + 2*b72*b299 + 2*b73*b93 - 4*b93 + 2*b73*b112 -
 4*b112 + 2*b74*b75 - 2*b75 + 2*b74*b193 - 2*b193 + 2*b75*b93 + 2*b76*b141
 - 2*b141 + 2*b77*b79 - 2*b77 - 2*b77*b166 + 2*b77*b250 + 2*b77*b260 + 2*
b78*b96 - 2*b78*b98 - 2*b98 + 2*b78*b283 + 2*b79*b98 - 2*b79*b168 + 2*b168
 + 2*b80*b81 - 2*b81 - 2*b80*b262 + 2*b81*b98 + 2*b81*b120 + 2*b120 - 2*
b81*b171 - 2*b82*b211 + 2*b82 - 2*b82*b259 + 2*b82*b269 - 2*b82*b310 + 2*
b83*b84 - 2*b84 + 2*b83*b216 + 2*b84*b131 + 2*b84*b158 - 4*b158 - 2*b84*
b183 - 2*b183 + 2*b85*b87 - 2*b87 + 2*b85*b278 + 2*b86*b89 + 2*b86*b219 -
 4*b219 + 2*b87*b89 + 2*b87*b158 - 2*b87*b222 + 2*b222 - 2*b88*b90 + 2*b88
 - 2*b88*b220 - 2*b88*b231 + 2*b88*b242 + 2*b89*b90 + 2*b90*b91 + 2*b91*
b92 + 2*b91*b134 - 2*b134 + 2*b92*b114 - 2*b114 + 2*b92*b135 - 4*b135 + 2*
b93*b94 - 2*b94 + 2*b93*b227 - 2*b227 + 2*b94*b114 + 2*b95*b196 + 2*b196
 + 2*b95*b285 - 2*b95*b300 + 2*b96*b97 - 2*b96*b196 + 2*b97*b118 - 2*b118
 - 2*b97*b198 + 2*b198 + 2*b98*b99 - 2*b99 + 2*b99*b118 - 2*b99*b203 + 2*
b203 + 2*b99*b266 + 2*b100*b101 - 2*b100*b144 - 2*b144 + 2*b100*b173 - 2*
b173 + 2*b101*b103 - 2*b103 + 2*b101*b266 + 2*b102*b147 - 2*b147 - 2*b102*
b177 + 2*b177 + 2*b102*b271 + 2*b103*b174 - 2*b174 + 2*b103*b177 - 2*b103*
b292 - 2*b104*b105 + 2*b104 + 2*b105 - 2*b104*b244 + 2*b104*b253 - 2*b104*
b290 + 2*b105*b106 - 2*b105*b281 - 2*b105*b314 - 2*b106*b253 + 2*b106*b315
 + 2*b107*b108 - 2*b108 + 2*b108*b158 + 2*b108*b185 - 4*b185 - 2*b108*b316
 + 2*b109*b110 - 4*b110 + 2*b109*b274 + 2*b110*b185 + 2*b110*b222 + 2*b110
*b307 + 2*b111*b112 - 2*b111*b246 + 2*b111*b307 + 2*b112*b113 + 2*b112*
b162 - 2*b162 + 2*b113*b138 - 2*b138 + 2*b113*b163 - 4*b163 + 2*b114*b115
 - 2*b115 - 2*b114*b136 + 2*b115*b138 + 2*b116*b117 - 2*b117 + 2*b116*b166
 - 2*b116*b304 + 2*b117*b194 - 2*b194 + 2*b117*b198 - 2*b117*b283 + 2*b118
*b119 - 2*b119 - 2*b118*b250 + 2*b119*b121 - 2*b121 - 2*b119*b286 + 2*b119
*b318 - 2*b120*b235 - 2*b120*b257 - 2*b120*b309 - 2*b121*b201 + 2*b121*
b263 + 2*b121*b309 - 2*b122*b151 + 2*b151 + 2*b122*b173 + 2*b123*b151 + 2*
b123*b206 - 2*b206 + 2*b123*b309 - 2*b124*b125 + 4*b124 + 2*b125 - 2*b124*
b251 - 2*b124*b253 - 2*b124*b287 + 2*b125*b127 - 2*b125*b284 - 2*b125*b320
 - 2*b126*b213 + 2*b126 - 2*b213 - 2*b126*b264 - 2*b126*b265 + 2*b126*b296
 + 2*b127*b213 + 2*b127*b253 + 2*b128*b130 - 4*b130 + 2*b129*b130 - 4*b129
 + 2*b129*b213 + 2*b129*b216 + 2*b129*b265 + 2*b130*b185 + 2*b130*b218 - 4
*b218 + 2*b131*b132 - 4*b132 + 2*b131*b270 + 2*b132*b188 + 2*b188 + 2*b132
*b218 + 2*b132*b303 - 2*b133*b134 + 2*b133*b187 - 4*b187 - 2*b133*b278 + 2
*b134*b135 + 2*b134*b303 + 2*b135*b137 + 2*b135*b190 - 2*b190 + 2*b136*
b164 - 4*b164 + 2*b136*b191 - 2*b191 + 2*b137*b164 + 2*b137*b192 - 2*b192
 + 2*b138*b139 - 2*b139 - 2*b138*b232 + 2*b139*b164 + 2*b140*b142 + 2*b141
*b143 - 2*b143 + 2*b141*b289 - 2*b141*b308 + 2*b142*b143 + 2*b142*b308 + 2
*b143*b168 - 2*b143*b279 + 2*b144*b146 - 2*b146 + 2*b144*b318 + 2*b144*
b321 - 2*b145*b148 - 2*b148 + 2*b146*b148 - 2*b146*b256 + 2*b146*b257 - 2*
b147*b150 - 2*b150 + 2*b147*b239 + 2*b147*b286 + 2*b148*b150 + 2*b148*b306
 + 2*b149*b205 + 2*b205 + 2*b149*b251 - 2*b149*b276 + 2*b150*b276 + 2*b150
*b292 - 2*b151*b178 - 2*b151*b320 - 2*b152*b153 - 2*b153 - 2*b152*b177 - 2
*b152*b258 + 2*b153*b155 + 2*b153*b284 + 2*b153*b320 - 2*b154*b267 - 2*
b154*b268 - 2*b154*b302 + 2*b155*b258 + 2*b155*b302 + 2*b156*b157 - 4*b157
 - 2*b156*b293 + 2*b157*b159 - 2*b159 + 2*b157*b218 + 2*b157*b316 + 2*b158
*b160 - 4*b160 + 2*b159*b160 + 2*b159*b184 - 4*b184 - 2*b159*b231 + 2*b160
*b161 + 2*b161 + 2*b160*b298 - 2*b161*b162 - 2*b161*b236 - 2*b161*b274 + 2
*b162*b163 + 2*b162*b298 + 2*b163*b224 - 2*b224 + 2*b163*b226 + 2*b164*
b323 + 2*b165*b167 - 2*b165 - 2*b167 - 2*b165*b260 + 2*b165*b304 + 2*b165*
b317 - 2*b166*b305 - 2*b167*b275 + 2*b167*b305 + 2*b167*b311 - 2*b168*b289
 - 2*b168*b322 - 2*b169*b200 - 2*b200 + 2*b169*b283 + 2*b170*b172 - 4*b170
 + 2*b170*b200 + 2*b170*b286 + 2*b170*b321 - 2*b171*b174 - 2*b171*b241 + 2
*b172*b174 + 2*b172*b256 - 2*b173*b176 - 2*b176 + 2*b173*b234 + 2*b174*
b176 + 2*b175*b244 - 2*b175 + 2*b175*b257 + 2*b175*b271 - 2*b175*b272 + 2*
b176*b272 + 2*b176*b290 - 2*b177*b314 - 2*b178*b179 - 2*b179 - 2*b178*b264
 + 2*b179*b181 + 2*b179*b281 + 2*b179*b314 - 2*b180*b230 - 2*b180*b296 - 2
*b180*b297 + 2*b181*b264 + 2*b181*b297 + 2*b182*b184 - 2*b182*b297 + 2*
b183*b184 + 2*b183*b297 + 2*b183*b315 + 2*b184*b186 - 4*b186 + 2*b185*b187
 + 2*b186*b187 + 2*b186*b217 - 4*b217 + 2*b186*b231 + 2*b187*b189 - 2*b189
 - 2*b188*b190 - 2*b188*b242 - 2*b188*b270 + 2*b189*b190 - 2*b189*b282 + 2
*b189*b294 + 2*b190*b192 - 2*b191*b193 + 2*b191*b236 + 2*b191*b247 + 2*
b192*b193 - 2*b192*b247 + 2*b193*b228 + 2*b194*b197 + 2*b194*b312 - 2*b194
*b317 + 2*b195*b197 - 2*b195 - 2*b195*b254 + 2*b195*b300 + 2*b195*b313 - 2
*b196*b295 - 2*b196*b301 + 2*b197*b301 - 2*b198*b285 - 2*b198*b319 + 2*
b199*b279 - 2*b199*b280 + 2*b200*b202 - 4*b202 + 2*b200*b322 + 2*b201*b204
 + 2*b202*b203 + 2*b202*b204 + 2*b202*b280 - 2*b203*b206 - 2*b203*b271 + 2
*b204*b206 - 2*b205*b207 - 2*b207 - 2*b205*b234 - 2*b205*b286 + 2*b206*
b207 + 2*b207*b208 - 2*b208 + 2*b207*b287 + 2*b208*b209 + 2*b209 - 2*b208*
b245 + 2*b208*b310 - 2*b209*b210 - 2*b210 - 2*b209*b267 - 2*b209*b276 + 2*
b210*b211 + 2*b210*b212 + 2*b210*b310 - 2*b211*b293 + 2*b212*b267 + 2*b212
*b293 + 2*b213*b215 + 2*b214*b217 - 2*b214*b302 + 2*b215*b217 + 2*b215*
b293 + 2*b216*b219 + 2*b217*b219 + 2*b218*b221 - 4*b221 + 2*b219*b221 - 2*
b220*b223 + 2*b221*b223 + 2*b221*b246 - 2*b222*b224 - 2*b222*b247 + 2*b223
*b224 + 2*b224*b225 - 2*b225 + 2*b225*b226 + 2*b225*b227 - 2*b225*b242 - 2
*b226*b324 - 2*b227*b233 + 2*b227*b324 + 2*b228*b232 - 2*b228*b325 - 2*
b229*b230 + 2*b229*b265 - 2*b232*b233 + 2*b233*b242 - 2*b234*b235 + 2*b236
*b246 - 2*b237*b238 - 2*b237*b248 + 2*b237*b254 + 2*b238*b295 - 2*b239*
b240 + 2*b239*b241 - 2*b239*b271 - 2*b240*b266 - 2*b241*b280 - 2*b244*b245
 + 2*b244*b259 + 2*b245*b263 - 2*b246*b282 - 2*b248*b279 - 2*b249*b250 - 2
*b249*b256 + 2*b250*b279 - 2*b251*b252 - 2*b252*b263 - 2*b254*b275 + 2*
b255*b275 - 2*b255*b318 + 2*b258*b259 - 2*b258*b269 - 2*b259*b292 - 2*b261
*b321 - 2*b262*b301 - 2*b263*b266 - 2*b265*b277 + 2*b268*b269 - 2*b268*
b273 - 2*b269*b315 - 2*b270*b307 + 2*b272*b314 - 2*b274*b303 + 2*b276*b320
 - 2*b278*b298 + 2*b280*b319 + 2*b285*b311 + 2*b287*b306 - 2*b287*b310 - 2
*b288*b291 + 2*b289*b295 - 2*b290*b306 - 2*b291*b294 - 2*b294*b298 - 2*
b299*b307 + 2*b301*b319 + 2*b302*b316 + 2*b305*b322 - 2*b306*b309 - 2*b311
*b312 - 2*b311*b313 - 2*b315*b316 - 2*b318*b319 - 2*b321*b322 - 2*b323*
b324 + 2*b324*b325  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
