#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2pm-0099-0999";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b25,b4,b28,b217,b2,b5,b26,b29,b218,b3,b6,b27,b30,b219,b7,b31,b220,b8,b32,b221,b9,b33,b222,b10,b34,b223,b11,b35,b224,b12,b36,b225,b13,b37,b226,b14,b38,b227,b15,b39,b228,b16,b40,b229,b17,b41,b230,b18,b42,b231,b19,b43,b232,b20,b44,b233,b21,b45,b234,b22,b46,b235,b23,b47,b236,b24,b48,b237,b49,b238,b50,b239,b51,b240,b52,b241,b53,b242,b54,b243,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b4); 
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
   res=b1*b25 - b1*b4 + b1*b28 + b1*b217 - b2*b5 + b2*b26 + b2*b29 + b2*b218 -
  b3*b6 + b3*b27 + b3*b30 + b3*b219 - b4*b7 - b4*b31 + b4*b220 - b5*b8 - b5
 *b32 + b5*b221 - b6*b9 - b6*b33 + b6*b222 - b7*b10 + b7*b34 - b7*b223 -
  b8*b11 + b8*b35 - b8*b224 - b9*b12 + b9*b36 - b9*b225 - b10*b13 - b10*b37
  + b10*b226 - b11*b14 - b11*b38 + b11*b227 - b12*b15 - b12*b39 + b12*b228
  - b13*b16 - b13*b40 - b13*b229 - b14*b17 - b14*b41 - b14*b230 - b15*b18
  - b15*b42 - b15*b231 + b16*b19 - b16*b43 + b16*b232 + b17*b20 - b17*b44
  + b17*b233 + b18*b21 - b18*b45 + b18*b234 - b19*b22 - b19*b46 - b19*b235
  - b20*b23 - b20*b47 - b20*b236 - b21*b24 - b21*b48 - b21*b237 + b22*b25
  + b22*b49 + b22*b238 + b23*b26 + b23*b50 + b23*b239 + b24*b27 + b24*b51
  + b24*b240 - b25*b52 - b25*b241 - b26*b53 - b26*b242 - b27*b54 - b27*
 b243 + b28*b31 + b28*b52 + b28*b55 + b29*b32 + b29*b53 + b29*b56 + b30*
 b33 + b30*b54 + b30*b57 + b31*b34 - b31*b58 + b32*b35 - b32*b59 + b33*b36
  - b33*b60 + b34*b37 + b34*b61 + b35*b38 + b35*b62 + b36*b39 + b36*b63 +
  b37*b40 - b37*b64 + b38*b41 - b38*b65 + b39*b42 - b39*b66 + b40*b43 + b40
 *b67 + b41*b44 + b41*b68 + b42*b45 + b42*b69 + b43*b46 - b43*b70 + b44*
 b47 - b44*b71 + b45*b48 - b45*b72 - b46*b49 - b46*b73 - b47*b50 - b47*b74
  - b48*b51 - b48*b75 - b49*b52 - b49*b76 - b50*b53 - b50*b77 - b51*b54 -
  b51*b78 - b52*b79 - b53*b80 - b54*b81 - b55*b58 + b55*b79 - b55*b82 - b56
 *b59 + b56*b80 - b56*b83 - b57*b60 + b57*b81 - b57*b84 + b58*b61 - b58*
 b85 + b59*b62 - b59*b86 + b60*b63 - b60*b87 - b61*b64 + b61*b88 - b62*b65
  + b62*b89 - b63*b66 + b63*b90 - b64*b67 - b64*b91 - b65*b68 - b65*b92 -
  b66*b69 - b66*b93 + b67*b70 - b67*b94 + b68*b71 - b68*b95 + b69*b72 - b69
 *b96 + b70*b73 - b70*b97 + b71*b74 - b71*b98 + b72*b75 - b72*b99 + b73*
 b76 + b73*b100 + b74*b77 + b74*b101 + b75*b78 + b75*b102 + b76*b79 + b76*
 b103 + b77*b80 + b77*b104 + b78*b81 + b78*b105 + b79*b106 + b80*b107 +
  b81*b108 + b82*b85 - b82*b106 + b82*b109 + b83*b86 - b83*b107 + b83*b110
  + b84*b87 - b84*b108 + b84*b111 - b85*b88 - b85*b112 - b86*b89 - b86*
 b113 - b87*b90 - b87*b114 - b88*b91 - b88*b115 - b89*b92 - b89*b116 - b90
 *b93 - b90*b117 - b91*b94 + b91*b118 - b92*b95 + b92*b119 - b93*b96 + b93
 *b120 - b94*b97 + b94*b121 - b95*b98 + b95*b122 - b96*b99 + b96*b123 -
  b97*b100 + b97*b124 - b98*b101 + b98*b125 - b99*b102 + b99*b126 + b100*
 b103 - b100*b127 + b101*b104 - b101*b128 + b102*b105 - b102*b129 + b103*
 b106 - b103*b130 + b104*b107 - b104*b131 + b105*b108 - b105*b132 + b106*
 b133 + b107*b134 + b108*b135 - b109*b112 - b109*b133 - b109*b136 - b110*
 b113 - b110*b134 - b110*b137 - b111*b114 - b111*b135 - b111*b138 + b112*
 b115 + b112*b139 + b113*b116 + b113*b140 + b114*b117 + b114*b141 - b115*
 b118 - b115*b142 - b116*b119 - b116*b143 - b117*b120 - b117*b144 + b118*
 b121 + b118*b145 + b119*b122 + b119*b146 + b120*b123 + b120*b147 - b121*
 b124 - b121*b148 - b122*b125 - b122*b149 - b123*b126 - b123*b150 - b124*
 b127 + b124*b151 - b125*b128 + b125*b152 - b126*b129 + b126*b153 - b127*
 b130 + b127*b154 - b128*b131 + b128*b155 - b129*b132 + b129*b156 + b130*
 b133 + b130*b157 + b131*b134 + b131*b158 + b132*b135 + b132*b159 + b133*
 b160 + b134*b161 + b135*b162 - b136*b139 - b136*b160 + b136*b163 - b137*
 b140 - b137*b161 + b137*b164 - b138*b141 - b138*b162 + b138*b165 - b139*
 b142 + b139*b166 - b140*b143 + b140*b167 - b141*b144 + b141*b168 - b142*
 b145 + b142*b169 - b143*b146 + b143*b170 - b144*b147 + b144*b171 - b145*
 b148 + b145*b172 - b146*b149 + b146*b173 - b147*b150 + b147*b174 - b148*
 b151 - b148*b175 - b149*b152 - b149*b176 - b150*b153 - b150*b177 + b151*
 b154 + b151*b178 + b152*b155 + b152*b179 + b153*b156 + b153*b180 - b154*
 b157 + b154*b181 - b155*b158 + b155*b182 - b156*b159 + b156*b183 + b157*
 b160 + b157*b184 + b158*b161 + b158*b185 + b159*b162 + b159*b186 + b160*
 b187 + b161*b188 + b162*b189 - b163*b166 + b163*b187 + b163*b190 - b164*
 b167 + b164*b188 + b164*b191 - b165*b168 + b165*b189 + b165*b192 + b166*
 b169 + b166*b193 + b167*b170 + b167*b194 + b168*b171 + b168*b195 - b169*
 b172 + b169*b196 - b170*b173 + b170*b197 - b171*b174 + b171*b198 + b172*
 b175 - b172*b199 + b173*b176 - b173*b200 + b174*b177 - b174*b201 - b175*
 b178 + b175*b202 - b176*b179 + b176*b203 - b177*b180 + b177*b204 - b178*
 b181 - b178*b205 - b179*b182 - b179*b206 - b180*b183 - b180*b207 + b181*
 b184 + b181*b208 + b182*b185 + b182*b209 + b183*b186 + b183*b210 + b184*
 b187 + b184*b211 + b185*b188 + b185*b212 + b186*b189 + b186*b213 - b187*
 b214 - b188*b215 - b189*b216 - b190*b193 - b190*b214 + b190*b217 - b191*
 b194 - b191*b215 + b191*b218 - b192*b195 - b192*b216 + b192*b219 - b193*
 b196 + b193*b220 - b194*b197 + b194*b221 - b195*b198 + b195*b222 + b196*
 b199 + b196*b223 + b197*b200 + b197*b224 + b198*b201 + b198*b225 + b199*
 b202 + b199*b226 + b200*b203 + b200*b227 + b201*b204 + b201*b228 - b202*
 b205 + b202*b229 - b203*b206 + b203*b230 - b204*b207 + b204*b231 + b205*
 b208 - b205*b232 + b206*b209 - b206*b233 + b207*b210 - b207*b234 - b208*
 b211 - b208*b235 - b209*b212 - b209*b236 - b210*b213 - b210*b237 - b211*
 b214 - b211*b238 - b212*b215 - b212*b239 - b213*b216 - b213*b240 + b214*
 b241 + b215*b242 + b216*b243 - b217*b220 + b217*b241 - b218*b221 + b218*
 b242 - b219*b222 + b219*b243 - b220*b223 - b221*b224 - b222*b225 + b223*
 b226 + b224*b227 + b225*b228 - b226*b229 - b227*b230 - b228*b231 + b229*
 b232 + b230*b233 + b231*b234 - b232*b235 - b233*b236 - b234*b237 - b235*
 b238 - b236*b239 - b237*b240 - b238*b241 - b239*b242 - b240*b243 
  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
