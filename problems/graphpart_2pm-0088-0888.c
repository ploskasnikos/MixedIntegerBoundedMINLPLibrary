#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2pm-0088-0888";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b22,b25,b169,b2,b5,b23,b26,b170,b3,b6,b24,b27,b171,b7,b28,b172,b8,b29,b173,b9,b30,b174,b10,b31,b175,b11,b32,b176,b12,b33,b177,b13,b34,b178,b14,b35,b179,b15,b36,b180,b16,b37,b181,b17,b38,b182,b18,b39,b183,b19,b40,b184,b20,b41,b185,b21,b42,b186,b43,b187,b44,b188,b45,b189,b46,b190,b47,b191,b48,b192,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168;
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
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b54); 
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

   fclose(fp);
   res= (-b1*b4) - b1*b22 + b1*b25 - b1*b169 - b2*b5 - b2*b23 + b2*b26 - b2*b170
  - b3*b6 - b3*b24 + b3*b27 - b3*b171 - b4*b7 - b4*b28 + b4*b172 - b5*b8
  - b5*b29 + b5*b173 - b6*b9 - b6*b30 + b6*b174 - b7*b10 + b7*b31 - b7*
 b175 - b8*b11 + b8*b32 - b8*b176 - b9*b12 + b9*b33 - b9*b177 - b10*b13 -
  b10*b34 - b10*b178 - b11*b14 - b11*b35 - b11*b179 - b12*b15 - b12*b36 -
  b12*b180 - b13*b16 - b13*b37 + b13*b181 - b14*b17 - b14*b38 + b14*b182 -
  b15*b18 - b15*b39 + b15*b183 - b16*b19 - b16*b40 - b16*b184 - b17*b20 -
  b17*b41 - b17*b185 - b18*b21 - b18*b42 - b18*b186 - b19*b22 + b19*b43 +
  b19*b187 - b20*b23 + b20*b44 + b20*b188 - b21*b24 + b21*b45 + b21*b189 -
  b22*b46 - b22*b190 - b23*b47 - b23*b191 - b24*b48 - b24*b192 - b25*b28 -
  b25*b46 - b25*b49 - b26*b29 - b26*b47 - b26*b50 - b27*b30 - b27*b48 - b27
 *b51 + b28*b31 + b28*b52 + b29*b32 + b29*b53 + b30*b33 + b30*b54 + b31*
 b34 + b31*b55 + b32*b35 + b32*b56 + b33*b36 + b33*b57 + b34*b37 - b34*b58
  + b35*b38 - b35*b59 + b36*b39 - b36*b60 - b37*b40 - b37*b61 - b38*b41 -
  b38*b62 - b39*b42 - b39*b63 + b40*b43 + b40*b64 + b41*b44 + b41*b65 + b42
 *b45 + b42*b66 + b43*b46 - b43*b67 + b44*b47 - b44*b68 + b45*b48 - b45*
 b69 + b46*b70 + b47*b71 + b48*b72 + b49*b52 - b49*b70 + b49*b73 + b50*b53
  - b50*b71 + b50*b74 + b51*b54 - b51*b72 + b51*b75 - b52*b55 - b52*b76 -
  b53*b56 - b53*b77 - b54*b57 - b54*b78 - b55*b58 - b55*b79 - b56*b59 - b56
 *b80 - b57*b60 - b57*b81 - b58*b61 + b58*b82 - b59*b62 + b59*b83 - b60*
 b63 + b60*b84 + b61*b64 - b61*b85 + b62*b65 - b62*b86 + b63*b66 - b63*b87
  + b64*b67 + b64*b88 + b65*b68 + b65*b89 + b66*b69 + b66*b90 - b67*b70 -
  b67*b91 - b68*b71 - b68*b92 - b69*b72 - b69*b93 + b70*b94 + b71*b95 + b72
 *b96 - b73*b76 + b73*b94 + b73*b97 - b74*b77 + b74*b95 + b74*b98 - b75*
 b78 + b75*b96 + b75*b99 - b76*b79 - b76*b100 - b77*b80 - b77*b101 - b78*
 b81 - b78*b102 - b79*b82 + b79*b103 - b80*b83 + b80*b104 - b81*b84 + b81*
 b105 + b82*b85 + b82*b106 + b83*b86 + b83*b107 + b84*b87 + b84*b108 + b85
 *b88 + b85*b109 + b86*b89 + b86*b110 + b87*b90 + b87*b111 - b88*b91 + b88
 *b112 - b89*b92 + b89*b113 - b90*b93 + b90*b114 + b91*b94 - b91*b115 +
  b92*b95 - b92*b116 + b93*b96 - b93*b117 - b94*b118 - b95*b119 - b96*b120
  + b97*b100 + b97*b118 + b97*b121 + b98*b101 + b98*b119 + b98*b122 + b99*
 b102 + b99*b120 + b99*b123 + b100*b103 - b100*b124 + b101*b104 - b101*
 b125 + b102*b105 - b102*b126 + b103*b106 + b103*b127 + b104*b107 + b104*
 b128 + b105*b108 + b105*b129 + b106*b109 + b106*b130 + b107*b110 + b107*
 b131 + b108*b111 + b108*b132 - b109*b112 - b109*b133 - b110*b113 - b110*
 b134 - b111*b114 - b111*b135 + b112*b115 - b112*b136 + b113*b116 - b113*
 b137 + b114*b117 - b114*b138 - b115*b118 + b115*b139 - b116*b119 + b116*
 b140 - b117*b120 + b117*b141 - b118*b142 - b119*b143 - b120*b144 - b121*
 b124 + b121*b142 + b121*b145 - b122*b125 + b122*b143 + b122*b146 - b123*
 b126 + b123*b144 + b123*b147 + b124*b127 - b124*b148 + b125*b128 - b125*
 b149 + b126*b129 - b126*b150 - b127*b130 + b127*b151 - b128*b131 + b128*
 b152 - b129*b132 + b129*b153 - b130*b133 + b130*b154 - b131*b134 + b131*
 b155 - b132*b135 + b132*b156 + b133*b136 + b133*b157 + b134*b137 + b134*
 b158 + b135*b138 + b135*b159 - b136*b139 + b136*b160 - b137*b140 + b137*
 b161 - b138*b141 + b138*b162 + b139*b142 - b139*b163 + b140*b143 - b140*
 b164 + b141*b144 - b141*b165 - b142*b166 - b143*b167 - b144*b168 + b145*
 b148 + b145*b166 - b145*b169 + b146*b149 + b146*b167 - b146*b170 + b147*
 b150 + b147*b168 - b147*b171 - b148*b151 - b148*b172 - b149*b152 - b149*
 b173 - b150*b153 - b150*b174 - b151*b154 + b151*b175 - b152*b155 + b152*
 b176 - b153*b156 + b153*b177 - b154*b157 - b154*b178 - b155*b158 - b155*
 b179 - b156*b159 - b156*b180 - b157*b160 + b157*b181 - b158*b161 + b158*
 b182 - b159*b162 + b159*b183 + b160*b163 + b160*b184 + b161*b164 + b161*
 b185 + b162*b165 + b162*b186 + b163*b166 + b163*b187 + b164*b167 + b164*
 b188 + b165*b168 + b165*b189 + b166*b190 + b167*b191 + b168*b192 + b169*
 b172 - b169*b190 + b170*b173 - b170*b191 + b171*b174 - b171*b192 + b172*
 b175 + b173*b176 + b174*b177 - b175*b178 - b176*b179 - b177*b180 + b178*
 b181 + b179*b182 + b180*b183 - b181*b184 - b182*b185 - b183*b186 + b184*
 b187 + b185*b188 + b186*b189 + b187*b190 + b188*b191 + b189*b192 
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
