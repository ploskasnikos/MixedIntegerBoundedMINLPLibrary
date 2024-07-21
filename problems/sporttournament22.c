#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament22";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b85,b166,b170,b62,b125,b167,b3,b89,b172,b180,b181,b4,b110,b169,b186,b5,b8,b176,b6,b36,b50,b135,b7,b20,b118,b194,b195,b48,b173,b9,b29,b76,b146,b10,b40,b99,b203,b11,b23,b133,b12,b56,b119,b207,b13,b31,b208,b14,b77,b147,b15,b42,b16,b46,b205,b17,b18,b25,b93,b182,b26,b38,b214,b19,b101,b163,b30,b21,b58,b22,b44,b66,b213,b24,b65,b27,b53,b116,b28,b164,b193,b212,b41,b150,b80,b59,b200,b32,b33,b63,b210,b216,b64,b87,b34,b35,b86,b211,b49,b37,b91,b202,b39,b177,b189,b98,b218,b57,b104,b149,b153,b196,b43,b156,b220,b45,b83,b84,b109,b47,b159,b69,b51,b138,b168,b206,b52,b54,b171,b115,b142,b221,b55,b184,b222,b79,b122,b219,b60,b204,b61,b152,b185,b127,b165,b107,b108,b132,b67,b131,b68,b223,b70,b197,b209,b71,b72,b73,b95,b187,b225,b74,b75,b174,b178,b226,b100,b103,b78,b190,b102,b151,b81,b82,b175,b128,b129,b161,b130,b88,b160,b227,b90,b92,b192,b94,b191,b198,b199,b96,b97,b120,b121,b215,b105,b106,b155,b217,b179,b157,b229,b136,b111,b112,b113,b114,b117,b183,b148,b123,b124,b231,b126,b134,b201,b137,b228,b139,b188,b140,b143,b141,b144,b145,b154,b158,b230,b162,b224;
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
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b224); 

   fclose(fp);
   res=-( 2*b1*b2 - 2*b1 - 2*b2 + 2*b1*b85 - 2*b85 + 2*b1*b166 - 2*b1*b170 + 2*b2*
b62 - 4*b62 - 2*b2*b125 + 2*b125 + 2*b2*b167 - 2*b3*b89 - 2*b3 + 2*b89 + 2
*b3*b172 + 2*b3*b180 + 2*b3*b181 - 2*b4*b110 - 2*b4 + 2*b110 + 2*b4*b169
 + 2*b4*b172 + 2*b4*b186 + 2*b5*b8 - 2*b5 - 4*b8 + 2*b5*b176 + 2*b6*b36 -
 2*b6 - 2*b36 + 2*b6*b50 - 2*b50 - 2*b6*b135 + 2*b135 + 2*b6*b169 + 2*b7*
b20 - 2*b7 - 2*b20 - 2*b7*b118 + 2*b118 + 2*b7*b194 + 2*b7*b195 + 2*b8*b48
 - 2*b48 + 2*b8*b50 + 2*b8*b173 + 2*b9*b20 - 2*b9 + 2*b9*b29 - 4*b29 + 2*
b9*b76 - 2*b76 - 2*b9*b146 + 2*b146 + 2*b10*b29 - 2*b10 + 2*b10*b40 - 4*
b40 + 2*b10*b99 - 4*b99 - 2*b10*b203 + 2*b11*b23 - 2*b11 - 2*b23 + 2*b11*
b133 - 4*b133 + 2*b12*b40 - 2*b12 + 2*b12*b56 - 4*b56 + 2*b12*b119 - 4*
b119 - 2*b12*b207 - 2*b13*b20 - 2*b13 + 2*b13*b31 - 4*b31 + 2*b13*b40 + 2*
b13*b208 + 2*b14*b56 - 4*b14 + 2*b14*b77 - 4*b77 + 2*b14*b147 - 4*b147 + 2
*b14*b207 + 2*b15*b31 - 2*b15 + 2*b15*b42 - 4*b42 + 2*b15*b56 - 2*b15*b195
 + 2*b16*b46 - 2*b16 - 4*b46 + 2*b16*b205 + 2*b17*b18 - 2*b17 - 2*b18 + 2*
b17*b25 - 2*b25 + 2*b17*b93 - 4*b93 - 2*b17*b182 + 2*b18*b26 - 2*b26 + 2*
b18*b38 - 2*b38 - 2*b18*b214 + 2*b19*b77 - 2*b19 + 2*b19*b101 - 2*b101 - 2
*b19*b163 + 2*b19*b203 + 2*b20*b30 - 4*b30 + 2*b21*b42 - 4*b21 + 2*b21*b58
 - 4*b58 + 2*b21*b77 + 2*b21*b195 - 2*b22*b23 - 2*b22 + 2*b22*b44 - 4*b44
 + 2*b22*b66 - 4*b66 + 2*b22*b213 + 2*b23*b24 - 2*b24 + 2*b23*b65 - 4*b65
 + 2*b24*b66 + 2*b25*b27 - 4*b27 + 2*b25*b53 - 2*b53 - 2*b25*b116 + 4*b116
 + 2*b26*b28 - 4*b28 + 2*b26*b164 - 2*b26*b193 + 2*b27*b28 + 2*b27*b164 +
 2*b27*b212 + 2*b28*b118 + 2*b28*b163 + 2*b29*b41 - 2*b41 + 2*b29*b150 - 2*
b150 + 2*b30*b58 + 2*b30*b80 - 4*b80 + 2*b30*b101 + 2*b31*b59 - 4*b59 + 2*
b31*b200 + 2*b32*b33 - 4*b32 - 2*b33 + 2*b32*b63 - 2*b63 + 2*b32*b210 + 2*
b32*b216 + 2*b33*b64 - 4*b64 + 2*b33*b87 - 4*b87 - 2*b33*b205 + 2*b34*b35
 - 2*b34 - 2*b35 + 2*b34*b86 - 4*b86 - 2*b34*b210 + 2*b34*b211 + 2*b35*b87
 + 2*b36*b49 - 2*b49 + 2*b37*b49 - 4*b37 + 2*b37*b91 - 2*b91 + 2*b37*b176
 + 2*b37*b202 - 2*b38*b39 + 2*b39 + 2*b38*b177 + 2*b38*b189 + 2*b39*b98 +
 2*b98 - 2*b39*b146 - 2*b39*b218 + 2*b40*b57 - 2*b57 + 2*b41*b80 + 2*b41*
b104 - 4*b104 - 2*b41*b149 - 2*b149 + 2*b42*b153 + 2*b153 + 2*b42*b196 + 2
*b43*b44 - 2*b43 + 2*b43*b156 - 2*b156 + 2*b43*b213 - 2*b43*b220 + 2*b44*
b45 - 4*b45 + 2*b44*b83 - 2*b83 + 2*b45*b84 - 4*b84 + 2*b45*b109 - 2*b109
 + 2*b45*b205 + 2*b46*b47 - 2*b47 + 2*b46*b159 - 2*b159 + 2*b46*b210 + 2*
b47*b109 + 2*b48*b69 - 2*b69 + 2*b49*b51 - 2*b51 - 2*b49*b186 - 2*b50*b138
 + 2*b138 + 2*b50*b168 + 2*b51*b69 + 2*b51*b138 - 2*b51*b206 + 2*b52*b53
 - 2*b52 - 2*b52*b54 + 2*b54 + 2*b52*b171 + 2*b52*b202 - 2*b53*b115 + 2*
b115 + 2*b53*b182 + 2*b54*b115 - 2*b54*b142 + 2*b142 - 2*b54*b221 - 2*b55*
b184 + 2*b55 + 2*b55*b194 - 2*b55*b203 - 2*b55*b222 + 2*b56*b79 - 2*b79 +
 2*b57*b104 + 2*b57*b122 - 4*b122 - 2*b57*b219 + 2*b58*b60 - 2*b60 + 2*b58*
b204 + 2*b59*b61 - 2*b61 + 2*b59*b62 + 2*b59*b152 - 4*b152 + 2*b60*b62 + 2
*b60*b122 - 2*b60*b185 - 2*b61*b63 + 2*b61*b127 - 2*b127 + 2*b61*b165 + 2*
b62*b63 + 2*b63*b64 + 2*b64*b65 + 2*b64*b107 - 2*b107 + 2*b65*b108 - 4*
b108 + 2*b65*b132 - 2*b132 + 2*b66*b67 - 2*b67 + 2*b66*b131 - 2*b131 + 2*
b67*b132 - 2*b68*b176 + 2*b68 - 2*b68*b223 + 2*b69*b70 - 2*b70 - 2*b69*
b180 + 2*b70*b197 - 2*b70*b209 + 2*b70*b223 + 2*b71*b72 - 2*b71 - 2*b72 -
 2*b71*b73 + 2*b73 + 2*b71*b168 + 2*b71*b206 - 2*b72*b95 + 2*b95 + 2*b72*
b177 + 2*b72*b187 + 2*b73*b95 - 2*b73*b212 - 2*b73*b225 - 2*b74*b75 + 2*
b74 + 2*b75 - 2*b74*b142 - 2*b74*b174 + 2*b74*b178 + 2*b75*b76 - 2*b75*
b207 - 2*b75*b226 + 2*b76*b100 - 2*b100 - 2*b76*b178 + 2*b77*b103 - 4*b103
 + 2*b78*b100 - 4*b78 + 2*b78*b103 + 2*b78*b150 + 2*b78*b190 - 2*b79*b102
 - 2*b102 + 2*b79*b122 + 2*b79*b151 - 4*b151 + 2*b80*b81 - 4*b81 + 2*b80*
b200 + 2*b81*b151 + 2*b81*b185 + 2*b81*b220 - 2*b82*b83 + 2*b82 - 2*b82*
b153 - 2*b82*b165 + 2*b82*b175 + 2*b83*b84 + 2*b83*b220 + 2*b84*b86 + 2*
b84*b128 - 2*b128 - 2*b85*b109 + 2*b85*b129 - 2*b129 + 2*b85*b161 - 4*b161
 + 2*b86*b130 - 2*b130 + 2*b86*b161 + 2*b87*b88 - 2*b88 + 2*b87*b160 - 2*
b160 + 2*b88*b161 - 2*b89*b227 - 2*b90*b91 - 2*b90 + 2*b90*b92 - 2*b92 + 2
*b90*b223 + 2*b90*b227 + 2*b91*b93 + 2*b91*b192 + 2*b92*b93 - 2*b92*b172
 + 2*b92*b187 + 2*b93*b214 + 2*b94*b174 - 2*b94 + 2*b94*b191 + 2*b94*b198
 - 2*b94*b199 - 2*b95*b116 - 2*b95*b226 - 2*b96*b97 + 4*b96 - 2*b97 - 2*
b96*b115 - 2*b96*b177 - 2*b96*b178 + 2*b97*b99 + 2*b97*b207 + 2*b97*b226
 - 2*b98*b120 - 2*b120 - 2*b98*b189 - 2*b98*b190 + 2*b99*b120 + 2*b99*b178
 + 2*b100*b102 - 2*b100*b194 + 2*b101*b121 - 4*b121 - 2*b101*b215 + 2*b102
*b120 + 2*b102*b121 + 2*b103*b105 - 2*b105 + 2*b103*b151 + 2*b104*b106 - 4
*b106 + 2*b104*b196 + 2*b105*b106 + 2*b105*b121 - 2*b105*b165 + 2*b106*
b155 + 2*b155 + 2*b106*b217 + 2*b107*b108 - 2*b107*b179 + 2*b107*b217 + 2*
b108*b157 - 2*b157 + 2*b108*b159 + 2*b109*b229 - 2*b110*b136 - 2*b136 + 2*
b111*b112 - 4*b111 - 2*b112 + 2*b111*b136 + 2*b111*b209 + 2*b111*b227 - 2*
b112*b181 + 2*b112*b182 + 2*b112*b225 - 2*b113*b174 + 2*b113 - 2*b113*b191
 + 2*b113*b192 - 2*b113*b193 - 2*b114*b192 - 2*b114 + 2*b114*b193 + 2*b114
*b212 + 2*b114*b225 - 2*b115*b222 - 2*b116*b117 - 2*b117 - 2*b116*b183 + 2
*b117*b119 + 2*b117*b203 + 2*b117*b222 - 2*b118*b148 - 2*b148 - 2*b118*
b164 + 2*b119*b148 + 2*b119*b183 + 2*b120*b219 + 2*b121*b123 - 2*b123 + 2*
b122*b124 - 4*b124 + 2*b123*b124 + 2*b123*b165 - 2*b123*b231 + 2*b124*b125
 + 2*b124*b126 - 2*b126 - 2*b125*b128 - 2*b125*b200 + 2*b126*b128 - 2*b126
*b204 + 2*b126*b216 + 2*b127*b129 - 2*b127*b130 + 2*b127*b185 + 2*b128*
b130 - 2*b129*b131 + 2*b129*b170 + 2*b130*b131 + 2*b131*b133 + 2*b132*b134
 - 2*b134 - 2*b132*b166 + 2*b133*b134 + 2*b133*b166 - 2*b135*b201 + 2*b136
*b137 - 4*b137 + 2*b136*b228 + 2*b137*b139 - 4*b139 + 2*b137*b201 + 2*b137
*b206 - 2*b138*b191 - 2*b138*b221 + 2*b139*b181 + 2*b139*b188 + 2*b139*
b221 - 2*b140*b143 + 2*b140 - 2*b143 - 2*b140*b177 - 2*b140*b187 + 2*b140*
b188 + 2*b141*b142 - 2*b141 + 2*b141*b143 - 2*b141*b188 + 2*b141*b221 - 2*
b142*b218 + 2*b143*b144 + 2*b144 + 2*b143*b218 - 2*b144*b145 - 2*b145 - 2*
b144*b189 - 2*b144*b199 + 2*b145*b146 + 2*b145*b147 + 2*b145*b218 - 2*b146
*b215 + 2*b147*b189 + 2*b147*b215 + 2*b148*b149 + 2*b148*b219 + 2*b149*
b215 + 2*b149*b231 + 2*b150*b152 - 2*b150*b208 + 2*b151*b154 - 4*b154 + 2*
b152*b154 + 2*b152*b231 - 2*b153*b156 - 2*b153*b208 + 2*b154*b156 + 2*b154
*b179 - 2*b155*b157 - 2*b155*b170 - 2*b155*b196 + 2*b156*b157 + 2*b157*
b158 - 2*b158 + 2*b158*b159 + 2*b158*b160 - 2*b158*b175 - 2*b159*b230 - 2*
b160*b167 + 2*b160*b230 + 2*b161*b162 - 2*b162 + 2*b162*b230 - 2*b163*b164
 + 2*b163*b190 - 2*b166*b167 + 2*b167*b175 - 2*b168*b169 - 2*b168*b198 - 2
*b169*b197 + 2*b170*b179 - 2*b171*b172 + 2*b171*b173 - 2*b171*b192 - 2*
b173*b201 - 2*b173*b202 + 2*b174*b184 - 2*b175*b185 - 2*b176*b181 - 2*b179
*b204 - 2*b182*b206 + 2*b183*b184 - 2*b183*b194 - 2*b184*b212 - 2*b187*
b202 - 2*b188*b209 - 2*b190*b195 + 2*b191*b197 + 2*b193*b222 - 2*b196*b220
 - 2*b197*b225 + 2*b198*b209 - 2*b198*b214 + 2*b199*b214 + 2*b199*b226 - 2
*b200*b217 + 2*b201*b224 + 2*b204*b208 - 2*b205*b211 - 2*b210*b213 - 2*
b213*b216 - 2*b216*b217 - 2*b219*b231 - 2*b223*b224 - 2*b227*b228 - 2*b229
*b230  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
