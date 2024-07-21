#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_3pm-0444-0444";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b10,b4,b13,b37,b49,b145,b2,b5,b11,b14,b38,b50,b146,b3,b6,b12,b15,b39,b51,b147,b7,b16,b40,b52,b148,b8,b17,b41,b53,b149,b9,b18,b42,b54,b150,b19,b43,b55,b151,b20,b44,b56,b152,b21,b45,b57,b153,b22,b46,b58,b154,b23,b47,b59,b155,b24,b48,b60,b156,b25,b61,b157,b26,b62,b158,b27,b63,b159,b28,b64,b160,b29,b65,b161,b30,b66,b162,b31,b67,b163,b32,b68,b164,b33,b69,b165,b34,b70,b166,b35,b71,b167,b36,b72,b168,b73,b169,b74,b170,b75,b171,b76,b172,b77,b173,b78,b174,b79,b175,b80,b176,b81,b177,b82,b178,b83,b179,b84,b180,b85,b181,b86,b182,b87,b183,b88,b184,b89,b185,b90,b186,b91,b187,b92,b188,b93,b189,b94,b190,b95,b191,b96,b192,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b192); 
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

   fclose(fp);
   res=b1*b10 - b1*b4 - b1*b13 - b1*b37 + b1*b49 - b1*b145 - b2*b5 + b2*b11 - b2
 *b14 - b2*b38 + b2*b50 - b2*b146 - b3*b6 + b3*b12 - b3*b15 - b3*b39 + b3*
 b51 - b3*b147 + b4*b7 + b4*b16 + b4*b40 + b4*b52 - b4*b148 + b5*b8 + b5*
 b17 + b5*b41 + b5*b53 - b5*b149 + b6*b9 + b6*b18 + b6*b42 + b6*b54 - b6*
 b150 - b7*b10 + b7*b19 - b7*b43 - b7*b55 - b7*b151 - b8*b11 + b8*b20 - b8
 *b44 - b8*b56 - b8*b152 - b9*b12 + b9*b21 - b9*b45 - b9*b57 - b9*b153 +
  b10*b22 + b10*b46 + b10*b58 + b10*b154 + b11*b23 + b11*b47 + b11*b59 +
  b11*b155 + b12*b24 + b12*b48 + b12*b60 + b12*b156 + b13*b16 - b13*b22 -
  b13*b25 + b13*b61 + b13*b157 + b14*b17 - b14*b23 - b14*b26 + b14*b62 +
  b14*b158 + b15*b18 - b15*b24 - b15*b27 + b15*b63 + b15*b159 + b16*b19 +
  b16*b28 + b16*b64 - b16*b160 + b17*b20 + b17*b29 + b17*b65 - b17*b161 +
  b18*b21 + b18*b30 + b18*b66 - b18*b162 - b19*b22 + b19*b31 + b19*b67 +
  b19*b163 - b20*b23 + b20*b32 + b20*b68 + b20*b164 - b21*b24 + b21*b33 +
  b21*b69 + b21*b165 - b22*b34 - b22*b70 - b22*b166 - b23*b35 - b23*b71 -
  b23*b167 - b24*b36 - b24*b72 - b24*b168 + b25*b28 + b25*b34 + b25*b37 +
  b25*b73 + b25*b169 + b26*b29 + b26*b35 + b26*b38 + b26*b74 + b26*b170 +
  b27*b30 + b27*b36 + b27*b39 + b27*b75 + b27*b171 + b28*b31 + b28*b40 -
  b28*b76 + b28*b172 + b29*b32 + b29*b41 - b29*b77 + b29*b173 + b30*b33 +
  b30*b42 - b30*b78 + b30*b174 - b31*b34 + b31*b43 - b31*b79 + b31*b175 -
  b32*b35 + b32*b44 - b32*b80 + b32*b176 - b33*b36 + b33*b45 - b33*b81 +
  b33*b177 + b34*b46 - b34*b82 + b34*b178 + b35*b47 - b35*b83 + b35*b179 +
  b36*b48 - b36*b84 + b36*b180 - b37*b40 - b37*b46 - b37*b85 - b37*b181 -
  b38*b41 - b38*b47 - b38*b86 - b38*b182 - b39*b42 - b39*b48 - b39*b87 -
  b39*b183 - b40*b43 - b40*b88 + b40*b184 - b41*b44 - b41*b89 + b41*b185 -
  b42*b45 - b42*b90 + b42*b186 + b43*b46 + b43*b91 + b43*b187 + b44*b47 +
  b44*b92 + b44*b188 + b45*b48 + b45*b93 + b45*b189 + b46*b94 - b46*b190 +
  b47*b95 - b47*b191 + b48*b96 - b48*b192 + b49*b52 + b49*b58 - b49*b61 +
  b49*b85 + b49*b97 + b50*b53 + b50*b59 - b50*b62 + b50*b86 + b50*b98 + b51
 *b54 + b51*b60 - b51*b63 + b51*b87 + b51*b99 + b52*b55 - b52*b64 - b52*
 b88 + b52*b100 + b53*b56 - b53*b65 - b53*b89 + b53*b101 + b54*b57 - b54*
 b66 - b54*b90 + b54*b102 + b55*b58 - b55*b67 + b55*b91 + b55*b103 + b56*
 b59 - b56*b68 + b56*b92 + b56*b104 + b57*b60 - b57*b69 + b57*b93 + b57*
 b105 - b58*b70 + b58*b94 - b58*b106 - b59*b71 + b59*b95 - b59*b107 - b60*
 b72 + b60*b96 - b60*b108 - b61*b64 - b61*b70 + b61*b73 - b61*b109 - b62*
 b65 - b62*b71 + b62*b74 - b62*b110 - b63*b66 - b63*b72 + b63*b75 - b63*
 b111 - b64*b67 - b64*b76 - b64*b112 - b65*b68 - b65*b77 - b65*b113 - b66*
 b69 - b66*b78 - b66*b114 + b67*b70 + b67*b79 + b67*b115 + b68*b71 + b68*
 b80 + b68*b116 + b69*b72 + b69*b81 + b69*b117 - b70*b82 + b70*b118 - b71*
 b83 + b71*b119 - b72*b84 + b72*b120 - b73*b76 + b73*b82 + b73*b85 - b73*
 b121 - b74*b77 + b74*b83 + b74*b86 - b74*b122 - b75*b78 + b75*b84 + b75*
 b87 - b75*b123 + b76*b79 + b76*b88 - b76*b124 + b77*b80 + b77*b89 - b77*
 b125 + b78*b81 + b78*b90 - b78*b126 - b79*b82 + b79*b91 - b79*b127 - b80*
 b83 + b80*b92 - b80*b128 - b81*b84 + b81*b93 - b81*b129 + b82*b94 - b82*
 b130 + b83*b95 - b83*b131 + b84*b96 - b84*b132 - b85*b88 - b85*b94 - b85*
 b133 - b86*b89 - b86*b95 - b86*b134 - b87*b90 - b87*b96 - b87*b135 - b88*
 b91 + b88*b136 - b89*b92 + b89*b137 - b90*b93 + b90*b138 - b91*b94 - b91*
 b139 - b92*b95 - b92*b140 - b93*b96 - b93*b141 - b94*b142 - b95*b143 -
  b96*b144 - b97*b100 - b97*b106 - b97*b109 - b97*b133 + b97*b145 - b98*
 b101 - b98*b107 - b98*b110 - b98*b134 + b98*b146 - b99*b102 - b99*b108 -
  b99*b111 - b99*b135 + b99*b147 - b100*b103 + b100*b112 + b100*b136 + b100
 *b148 - b101*b104 + b101*b113 + b101*b137 + b101*b149 - b102*b105 + b102*
 b114 + b102*b138 + b102*b150 - b103*b106 + b103*b115 - b103*b139 - b103*
 b151 - b104*b107 + b104*b116 - b104*b140 - b104*b152 - b105*b108 + b105*
 b117 - b105*b141 - b105*b153 - b106*b118 - b106*b142 + b106*b154 - b107*
 b119 - b107*b143 + b107*b155 - b108*b120 - b108*b144 + b108*b156 - b109*
 b112 - b109*b118 + b109*b121 - b109*b157 - b110*b113 - b110*b119 + b110*
 b122 - b110*b158 - b111*b114 - b111*b120 + b111*b123 - b111*b159 - b112*
 b115 + b112*b124 + b112*b160 - b113*b116 + b113*b125 + b113*b161 - b114*
 b117 + b114*b126 + b114*b162 - b115*b118 + b115*b127 + b115*b163 - b116*
 b119 + b116*b128 + b116*b164 - b117*b120 + b117*b129 + b117*b165 + b118*
 b130 - b118*b166 + b119*b131 - b119*b167 + b120*b132 - b120*b168 - b121*
 b124 + b121*b130 + b121*b133 - b121*b169 - b122*b125 + b122*b131 + b122*
 b134 - b122*b170 - b123*b126 + b123*b132 + b123*b135 - b123*b171 + b124*
 b127 - b124*b136 - b124*b172 + b125*b128 - b125*b137 - b125*b173 + b126*
 b129 - b126*b138 - b126*b174 - b127*b130 + b127*b139 - b127*b175 - b128*
 b131 + b128*b140 - b128*b176 - b129*b132 + b129*b141 - b129*b177 - b130*
 b142 - b130*b178 - b131*b143 - b131*b179 - b132*b144 - b132*b180 - b133*
 b136 + b133*b142 + b133*b181 - b134*b137 + b134*b143 + b134*b182 - b135*
 b138 + b135*b144 + b135*b183 + b136*b139 + b136*b184 + b137*b140 + b137*
 b185 + b138*b141 + b138*b186 - b139*b142 + b139*b187 - b140*b143 + b140*
 b188 - b141*b144 + b141*b189 + b142*b190 + b143*b191 + b144*b192 + b145*
 b148 - b145*b154 - b145*b157 + b145*b181 + b146*b149 - b146*b155 - b146*
 b158 + b146*b182 + b147*b150 - b147*b156 - b147*b159 + b147*b183 - b148*
 b151 - b148*b160 - b148*b184 - b149*b152 - b149*b161 - b149*b185 - b150*
 b153 - b150*b162 - b150*b186 - b151*b154 - b151*b163 - b151*b187 - b152*
 b155 - b152*b164 - b152*b188 - b153*b156 - b153*b165 - b153*b189 + b154*
 b166 - b154*b190 + b155*b167 - b155*b191 + b156*b168 - b156*b192 + b157*
 b160 + b157*b166 - b157*b169 + b158*b161 + b158*b167 - b158*b170 + b159*
 b162 + b159*b168 - b159*b171 + b160*b163 + b160*b172 + b161*b164 + b161*
 b173 + b162*b165 + b162*b174 + b163*b166 - b163*b175 + b164*b167 - b164*
 b176 + b165*b168 - b165*b177 - b166*b178 - b167*b179 - b168*b180 - b169*
 b172 + b169*b178 + b169*b181 - b170*b173 + b170*b179 + b170*b182 - b171*
 b174 + b171*b180 + b171*b183 - b172*b175 + b172*b184 - b173*b176 + b173*
 b185 - b174*b177 + b174*b186 + b175*b178 - b175*b187 + b176*b179 - b176*
 b188 + b177*b180 - b177*b189 - b178*b190 - b179*b191 - b180*b192 - b181*
 b184 + b181*b190 - b182*b185 + b182*b191 - b183*b186 + b183*b192 + b184*
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
