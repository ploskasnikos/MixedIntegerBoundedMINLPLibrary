#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2g-0099-9211";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b25,b28,b217,b2,b5,b26,b29,b218,b3,b6,b27,b30,b219,b7,b31,b220,b8,b32,b221,b9,b33,b222,b10,b34,b223,b11,b35,b224,b12,b36,b225,b13,b37,b226,b14,b38,b227,b15,b39,b228,b16,b40,b229,b17,b41,b230,b18,b42,b231,b19,b43,b232,b20,b44,b233,b21,b45,b234,b22,b46,b235,b23,b47,b236,b24,b48,b237,b49,b238,b50,b239,b51,b240,b52,b241,b53,b242,b54,b243,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b216); 

   fclose(fp);
   res= 75260*b1*b4 - 15525*b1*b25 + 1448*b1*b28 + 35332*b1*b217 + 75260*b2*b5 -
  15525*b2*b26 + 1448*b2*b29 + 35332*b2*b218 + 75260*b3*b6 - 15525*b3*b27
  + 1448*b3*b30 + 35332*b3*b219 + 65166*b4*b7 - 231070*b4*b31 - 32003*b4*
 b220 + 65166*b5*b8 - 231070*b5*b32 - 32003*b5*b221 + 65166*b6*b9 - 231070
 *b6*b33 - 32003*b6*b222 + 36246*b7*b10 + 54442*b7*b34 - 124520*b7*b223 +
  36246*b8*b11 + 54442*b8*b35 - 124520*b8*b224 + 36246*b9*b12 + 54442*b9*
 b36 - 124520*b9*b225 - 10022*b10*b13 + 170366*b10*b37 + 87801*b10*b226 -
  10022*b11*b14 + 170366*b11*b38 + 87801*b11*b227 - 10022*b12*b15 + 170366*
 b12*b39 + 87801*b12*b228 + 13961*b13*b16 + 95303*b13*b40 + 31421*b13*b229
  + 13961*b14*b17 + 95303*b14*b41 + 31421*b14*b230 + 13961*b15*b18 + 95303
 *b15*b42 + 31421*b15*b231 + 35992*b16*b19 + 134080*b16*b43 - 130633*b16*
 b232 + 35992*b17*b20 + 134080*b17*b44 - 130633*b17*b233 + 35992*b18*b21
  + 134080*b18*b45 - 130633*b18*b234 - 95577*b19*b22 + 52867*b19*b46 -
  46358*b19*b235 - 95577*b20*b23 + 52867*b20*b47 - 46358*b20*b236 - 95577*
 b21*b24 + 52867*b21*b48 - 46358*b21*b237 - 135541*b22*b25 + 244498*b22*
 b49 - 125443*b22*b238 - 135541*b23*b26 + 244498*b23*b50 - 125443*b23*b239
  - 135541*b24*b27 + 244498*b24*b51 - 125443*b24*b240 + 131606*b25*b52 +
  25578*b25*b241 + 131606*b26*b53 + 25578*b26*b242 + 131606*b27*b54 + 25578
 *b27*b243 + 59601*b28*b31 + 231059*b28*b52 - 84412*b28*b55 + 59601*b29*
 b32 + 231059*b29*b53 - 84412*b29*b56 + 59601*b30*b33 + 231059*b30*b54 -
  84412*b30*b57 - 71617*b31*b34 - 72573*b31*b58 - 71617*b32*b35 - 72573*b32
 *b59 - 71617*b33*b36 - 72573*b33*b60 + 29323*b34*b37 + 142316*b34*b61 +
  29323*b35*b38 + 142316*b35*b62 + 29323*b36*b39 + 142316*b36*b63 + 79296*
 b37*b40 + 2887*b37*b64 + 79296*b38*b41 + 2887*b38*b65 + 79296*b39*b42 +
  2887*b39*b66 + 18134*b40*b43 - 24223*b40*b67 + 18134*b41*b44 - 24223*b41*
 b68 + 18134*b42*b45 - 24223*b42*b69 - 36436*b43*b46 - 66297*b43*b70 -
  36436*b44*b47 - 66297*b44*b71 - 36436*b45*b48 - 66297*b45*b72 - 31521*b46
 *b49 - 140287*b46*b73 - 31521*b47*b50 - 140287*b47*b74 - 31521*b48*b51 -
  140287*b48*b75 + 25570*b49*b52 + 23752*b49*b76 + 25570*b50*b53 + 23752*
 b50*b77 + 25570*b51*b54 + 23752*b51*b78 + 87355*b52*b79 + 87355*b53*b80
  + 87355*b54*b81 + 170774*b55*b58 - 56803*b55*b79 + 121940*b55*b82 +
  170774*b56*b59 - 56803*b56*b80 + 121940*b56*b83 + 170774*b57*b60 - 56803*
 b57*b81 + 121940*b57*b84 - 26527*b58*b61 - 130207*b58*b85 - 26527*b59*b62
  - 130207*b59*b86 - 26527*b60*b63 - 130207*b60*b87 + 6132*b61*b64 +
  277583*b61*b88 + 6132*b62*b65 + 277583*b62*b89 + 6132*b63*b66 + 277583*
 b63*b90 + 22357*b64*b67 - 42350*b64*b91 + 22357*b65*b68 - 42350*b65*b92
  + 22357*b66*b69 - 42350*b66*b93 + 93718*b67*b70 - 47716*b67*b94 + 93718*
 b68*b71 - 47716*b68*b95 + 93718*b69*b72 - 47716*b69*b96 + 15950*b70*b73
  - 196992*b70*b97 + 15950*b71*b74 - 196992*b71*b98 + 15950*b72*b75 -
  196992*b72*b99 + 24740*b73*b76 + 12563*b73*b100 + 24740*b74*b77 + 12563*
 b74*b101 + 24740*b75*b78 + 12563*b75*b102 - 94991*b76*b79 + 60642*b76*
 b103 - 94991*b77*b80 + 60642*b77*b104 - 94991*b78*b81 + 60642*b78*b105 +
  1123*b79*b106 + 1123*b80*b107 + 1123*b81*b108 - 55825*b82*b85 + 197268*
 b82*b106 + 56412*b82*b109 - 55825*b83*b86 + 197268*b83*b107 + 56412*b83*
 b110 - 55825*b84*b87 + 197268*b84*b108 + 56412*b84*b111 + 86140*b85*b88
  + 154282*b85*b112 + 86140*b86*b89 + 154282*b86*b113 + 86140*b87*b90 +
  154282*b87*b114 + 88205*b88*b91 - 1683*b88*b115 + 88205*b89*b92 - 1683*
 b89*b116 + 88205*b90*b93 - 1683*b90*b117 - 104232*b91*b94 + 91137*b91*
 b118 - 104232*b92*b95 + 91137*b92*b119 - 104232*b93*b96 + 91137*b93*b120
  - 67932*b94*b97 + 29333*b94*b121 - 67932*b95*b98 + 29333*b95*b122 -
  67932*b96*b99 + 29333*b96*b123 + 157198*b97*b100 + 2407*b97*b124 + 157198
 *b98*b101 + 2407*b98*b125 + 157198*b99*b102 + 2407*b99*b126 - 105460*b100
 *b103 + 2767*b100*b127 - 105460*b101*b104 + 2767*b101*b128 - 105460*b102*
 b105 + 2767*b102*b129 + 109601*b103*b106 + 81889*b103*b130 + 109601*b104*
 b107 + 81889*b104*b131 + 109601*b105*b108 + 81889*b105*b132 - 43809*b106*
 b133 - 43809*b107*b134 - 43809*b108*b135 + 33621*b109*b112 + 117056*b109*
 b133 + 80571*b109*b136 + 33621*b110*b113 + 117056*b110*b134 + 80571*b110*
 b137 + 33621*b111*b114 + 117056*b111*b135 + 80571*b111*b138 - 40940*b112*
 b115 + 40376*b112*b139 - 40940*b113*b116 + 40376*b113*b140 - 40940*b114*
 b117 + 40376*b114*b141 - 36171*b115*b118 + 51363*b115*b142 - 36171*b116*
 b119 + 51363*b116*b143 - 36171*b117*b120 + 51363*b117*b144 - 80014*b118*
 b121 + 272797*b118*b145 - 80014*b119*b122 + 272797*b119*b146 - 80014*b120
 *b123 + 272797*b120*b147 + 121144*b121*b124 - 183096*b121*b148 + 121144*
 b122*b125 - 183096*b122*b149 + 121144*b123*b126 - 183096*b123*b150 -
  117673*b124*b127 + 70156*b124*b151 - 117673*b125*b128 + 70156*b125*b152
  - 117673*b126*b129 + 70156*b126*b153 + 56696*b127*b130 - 151153*b127*
 b154 + 56696*b128*b131 - 151153*b128*b155 + 56696*b129*b132 - 151153*b129
 *b156 + 24312*b130*b133 - 22362*b130*b157 + 24312*b131*b134 - 22362*b131*
 b158 + 24312*b132*b135 - 22362*b132*b159 + 42805*b133*b160 + 42805*b134*
 b161 + 42805*b135*b162 + 13835*b136*b139 + 175755*b136*b160 - 87081*b136*
 b163 + 13835*b137*b140 + 175755*b137*b161 - 87081*b137*b164 + 13835*b138*
 b141 + 175755*b138*b162 - 87081*b138*b165 - 17215*b139*b142 + 61204*b139*
 b166 - 17215*b140*b143 + 61204*b140*b167 - 17215*b141*b144 + 61204*b141*
 b168 + 29411*b142*b145 - 40374*b142*b169 + 29411*b143*b146 - 40374*b143*
 b170 + 29411*b144*b147 - 40374*b144*b171 - 68599*b145*b148 - 19496*b145*
 b172 - 68599*b146*b149 - 19496*b146*b173 - 68599*b147*b150 - 19496*b147*
 b174 - 25570*b148*b151 + 127270*b148*b175 - 25570*b149*b152 + 127270*b149
 *b176 - 25570*b150*b153 + 127270*b150*b177 - 128950*b151*b154 - 126258*
 b151*b178 - 128950*b152*b155 - 126258*b152*b179 - 128950*b153*b156 -
  126258*b153*b180 + 78155*b154*b157 - 119772*b154*b181 + 78155*b155*b158
  - 119772*b155*b182 + 78155*b156*b159 - 119772*b156*b183 - 11106*b157*
 b160 + 70126*b157*b184 - 11106*b158*b161 + 70126*b158*b185 - 11106*b159*
 b162 + 70126*b159*b186 + 63368*b160*b187 + 63368*b161*b188 + 63368*b162*
 b189 + 53151*b163*b166 + 44231*b163*b187 - 34407*b163*b190 + 53151*b164*
 b167 + 44231*b164*b188 - 34407*b164*b191 + 53151*b165*b168 + 44231*b165*
 b189 - 34407*b165*b192 + 84442*b166*b169 - 139953*b166*b193 + 84442*b167*
 b170 - 139953*b167*b194 + 84442*b168*b171 - 139953*b168*b195 - 73503*b169
 *b172 - 27195*b169*b196 - 73503*b170*b173 - 27195*b170*b197 - 73503*b171*
 b174 - 27195*b171*b198 - 75786*b172*b175 - 74004*b172*b199 - 75786*b173*
 b176 - 74004*b173*b200 - 75786*b174*b177 - 74004*b174*b201 + 68383*b175*
 b178 - 83289*b175*b202 + 68383*b176*b179 - 83289*b176*b203 + 68383*b177*
 b180 - 83289*b177*b204 + 68587*b178*b181 - 68077*b178*b205 + 68587*b179*
 b182 - 68077*b179*b206 + 68587*b180*b183 - 68077*b180*b207 + 37991*b181*
 b184 - 40892*b181*b208 + 37991*b182*b185 - 40892*b182*b209 + 37991*b183*
 b186 - 40892*b183*b210 - 57619*b184*b187 - 56916*b184*b211 - 57619*b185*
 b188 - 56916*b185*b212 - 57619*b186*b189 - 56916*b186*b213 - 39383*b187*
 b214 - 39383*b188*b215 - 39383*b189*b216 - 32370*b190*b193 + 66379*b190*
 b214 + 70753*b190*b217 - 32370*b191*b194 + 66379*b191*b215 + 70753*b191*
 b218 - 32370*b192*b195 + 66379*b192*b216 + 70753*b192*b219 + 158042*b193*
 b196 - 12977*b193*b220 + 158042*b194*b197 - 12977*b194*b221 + 158042*b195
 *b198 - 12977*b195*b222 - 79140*b196*b199 + 449*b196*b223 - 79140*b197*
 b200 + 449*b197*b224 - 79140*b198*b201 + 449*b198*b225 - 33542*b199*b202
  - 97950*b199*b226 - 33542*b200*b203 - 97950*b200*b227 - 33542*b201*b204
  - 97950*b201*b228 + 3867*b202*b205 - 142006*b202*b229 + 3867*b203*b206
  - 142006*b203*b230 + 3867*b204*b207 - 142006*b204*b231 - 43546*b205*b208
  - 28496*b205*b232 - 43546*b206*b209 - 28496*b206*b233 - 43546*b207*b210
  - 28496*b207*b234 - 75840*b208*b211 + 194773*b208*b235 - 75840*b209*b212
  + 194773*b209*b236 - 75840*b210*b213 + 194773*b210*b237 + 36249*b211*
 b214 + 64846*b211*b238 + 36249*b212*b215 + 64846*b212*b239 + 36249*b213*
 b216 + 64846*b213*b240 + 45762*b214*b241 + 45762*b215*b242 + 45762*b216*
 b243 - 5829*b217*b220 - 90980*b217*b241 - 5829*b218*b221 - 90980*b218*
 b242 - 5829*b219*b222 - 90980*b219*b243 - 151277*b220*b223 - 151277*b221*
 b224 - 151277*b222*b225 - 104815*b223*b226 - 104815*b224*b227 - 104815*
 b225*b228 + 4707*b226*b229 + 4707*b227*b230 + 4707*b228*b231 + 60681*b229
 *b232 + 60681*b230*b233 + 60681*b231*b234 - 64166*b232*b235 - 64166*b233*
 b236 - 64166*b234*b237 + 7619*b235*b238 + 7619*b236*b239 + 7619*b237*b240
  - 215647*b238*b241 - 215647*b239*b242 - 215647*b240*b243  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
