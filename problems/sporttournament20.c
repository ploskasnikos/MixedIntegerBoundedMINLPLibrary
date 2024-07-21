#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament20";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b5,b8,b23,b35,b2,b3,b33,b144,b150,b84,b106,b140,b4,b86,b107,b158,b6,b136,b151,b52,b72,b161,b7,b17,b103,b141,b146,b162,b9,b27,b39,b163,b10,b49,b65,b68,b133,b11,b47,b157,b12,b32,b165,b13,b14,b34,b89,b113,b135,b15,b26,b38,b175,b16,b45,b62,b169,b18,b61,b19,b20,b21,b67,b111,b180,b22,b24,b110,b139,b166,b25,b41,b167,b55,b73,b75,b56,b154,b28,b29,b44,b98,b171,b59,b80,b30,b31,b124,b172,b108,b36,b87,b37,b88,b40,b145,b54,b153,b115,b183,b53,b94,b42,b152,b164,b43,b130,b131,b79,b184,b46,b121,b178,b102,b48,b101,b50,b160,b182,b51,b186,b74,b71,b116,b57,b156,b58,b117,b149,b148,b129,b170,b60,b100,b126,b128,b99,b63,b125,b64,b66,b173,b174,b69,b159,b85,b70,b90,b93,b92,b76,b77,b119,b78,b122,b143,b147,b188,b81,b137,b82,b83,b134,b177,b109,b187,b91,b112,b176,b95,b96,b190,b97,b181,b142,b104,b132,b105,b138,b179,b185,b155,b114,b168,b118,b120,b123,b189,b127;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b127); 

   fclose(fp);
   res=-( 2*b1*b5 - 2*b1 - 2*b5 + 2*b1*b8 - 2*b8 + 2*b1*b23 - 4*b23 - 2*b1*b35 + 4*
b35 + 2*b2*b3 - 2*b2 - 2*b3 + 2*b2*b33 - 4*b33 - 2*b2*b144 + 2*b2*b150 + 2
*b3*b84 - 2*b84 - 2*b3*b106 + 2*b106 + 2*b3*b140 + 2*b4*b86 - 2*b4 - 2*b86
 + 2*b4*b107 - 2*b107 + 2*b4*b140 - 2*b4*b158 + 2*b5*b6 - 2*b6 + 2*b5*b136
 - 2*b5*b151 + 2*b6*b52 - 4*b52 + 2*b6*b72 - 4*b72 - 2*b6*b161 + 2*b7*b17
 - 2*b7 - 2*b17 + 2*b7*b103 - 4*b103 + 2*b8*b141 - 2*b8*b146 + 2*b8*b162
 + 2*b9*b27 - 2*b9 - 4*b27 - 2*b9*b39 - 2*b39 + 2*b9*b72 + 2*b9*b163 + 2*
b10*b49 - 2*b10 - 2*b49 + 2*b10*b65 - 2*b65 + 2*b10*b68 - 2*b68 - 2*b10*
b133 + 2*b11*b47 - 2*b11 - 4*b47 + 2*b11*b157 + 2*b12*b32 - 4*b12 - 2*b32
 + 2*b12*b49 + 2*b12*b133 + 2*b12*b165 + 2*b13*b14 - 2*b13 - 4*b14 - 2*b13
*b34 + 2*b34 + 2*b13*b136 + 2*b13*b144 + 2*b14*b89 - 2*b89 + 2*b14*b113 -
 2*b113 + 2*b14*b135 + 2*b15*b26 - 2*b15 - 2*b26 + 2*b15*b38 - 2*b38 + 2*
b15*b146 - 2*b15*b175 - 2*b16*b17 - 2*b16 + 2*b16*b45 - 2*b45 + 2*b16*b62
 - 4*b62 + 2*b16*b169 + 2*b17*b18 - 2*b18 + 2*b17*b61 - 4*b61 + 2*b18*b62
 + 2*b19*b20 - 2*b19 - 2*b20 + 2*b19*b21 - 2*b21 + 2*b19*b67 - 4*b67 - 2*
b19*b150 + 2*b20*b23 + 2*b20*b49 - 2*b20*b111 + 2*b111 + 2*b21*b23 + 2*b21
*b89 - 2*b21*b180 - 2*b22*b24 + 2*b22 - 2*b24 - 2*b22*b110 + 4*b110 - 2*
b22*b136 + 2*b22*b139 + 2*b23*b24 + 2*b24*b113 + 2*b24*b166 + 2*b25*b41 -
 2*b25 - 2*b41 + 2*b25*b146 + 2*b25*b151 - 2*b25*b167 + 2*b26*b55 - 4*b55
 - 2*b26*b73 - 2*b73 + 2*b26*b75 - 4*b75 + 2*b27*b56 - 4*b56 + 2*b27*b154
 + 2*b27*b167 + 2*b28*b29 - 2*b28 - 2*b29 - 2*b28*b44 + 2*b44 + 2*b28*b98
 - 2*b98 + 2*b28*b171 + 2*b29*b59 - 2*b59 + 2*b29*b80 - 2*b80 - 2*b29*b157
 + 2*b30*b31 - 2*b30 - 2*b31 + 2*b30*b124 - 2*b124 - 2*b30*b171 + 2*b30*
b172 + 2*b31*b80 + 2*b32*b33 - 2*b32*b34 + 2*b32*b108 - 2*b108 + 2*b33*b36
 - 4*b36 + 2*b33*b89 + 2*b34*b36 - 2*b34*b87 - 2*b87 - 2*b35*b37 - 2*b37
 - 2*b35*b88 + 2*b88 - 2*b35*b139 + 2*b36*b37 + 2*b36*b141 + 2*b37*b161 +
 2*b37*b166 + 2*b38*b40 - 2*b40 + 2*b38*b135 - 2*b38*b145 + 2*b39*b54 - 4*
b54 + 2*b39*b151 + 2*b39*b153 + 2*b40*b54 + 2*b40*b115 - 2*b115 - 2*b40*
b183 - 2*b41*b53 - 2*b53 + 2*b41*b75 + 2*b41*b94 - 4*b94 + 2*b42*b152 - 4*
b42 + 2*b42*b164 + 2*b42*b167 + 2*b42*b175 - 2*b43*b44 - 2*b43 + 2*b43*
b130 + 2*b43*b131 + 2*b43*b164 + 2*b44*b79 - 2*b79 - 2*b44*b184 + 2*b45*
b46 - 4*b46 + 2*b45*b121 - 2*b121 - 2*b45*b178 + 2*b46*b79 + 2*b46*b102 -
 2*b102 + 2*b46*b157 + 2*b47*b48 - 2*b48 + 2*b47*b101 - 4*b101 + 2*b47*b171
 + 2*b48*b102 - 2*b49*b110 - 2*b50*b141 + 4*b50 - 2*b50*b144 - 2*b50*b160
 - 2*b50*b182 - 2*b51*b153 - 2*b51 + 2*b51*b182 + 2*b51*b183 + 2*b51*b186
 + 2*b52*b74 - 4*b74 + 2*b52*b115 + 2*b52*b153 + 2*b53*b71 - 2*b71 + 2*b53
*b74 + 2*b53*b183 + 2*b54*b94 + 2*b54*b116 - 4*b116 + 2*b55*b57 - 4*b57 +
 2*b55*b156 + 2*b55*b175 + 2*b56*b58 - 4*b58 + 2*b56*b117 - 4*b117 + 2*b56*
b149 + 2*b57*b58 + 2*b57*b116 + 2*b57*b148 + 2*b58*b129 + 2*b58*b170 + 2*
b59*b61 - 2*b59*b130 + 2*b59*b178 - 2*b60*b80 + 2*b60 - 2*b60*b100 - 2*
b100 + 2*b60*b126 - 4*b126 - 2*b60*b128 + 2*b61*b99 - 2*b99 + 2*b61*b126
 + 2*b62*b63 - 2*b63 + 2*b62*b125 - 4*b125 + 2*b63*b126 - 2*b64*b66 + 2*
b64 - 2*b66 - 2*b64*b133 + 2*b65*b67 + 2*b65*b173 - 2*b65*b174 + 2*b66*b67
 + 2*b66*b150 + 2*b66*b174 + 2*b67*b69 - 2*b69 - 2*b68*b88 + 2*b68*b144 +
 2*b68*b159 + 2*b69*b85 - 2*b85 + 2*b69*b88 - 2*b69*b110 + 2*b70*b71 - 2*
b70 + 2*b70*b90 - 2*b90 - 2*b70*b151 + 2*b70*b186 + 2*b71*b73 - 2*b71*b166
 + 2*b72*b93 - 4*b93 + 2*b72*b162 + 2*b73*b92 - 2*b92 + 2*b73*b93 + 2*b74*
b76 - 2*b76 + 2*b74*b116 + 2*b75*b77 - 4*b77 + 2*b75*b154 + 2*b76*b77 + 2*
b76*b93 - 2*b76*b131 + 2*b77*b119 + 2*b119 + 2*b77*b184 + 2*b78*b122 - 2*
b78 - 2*b122 - 2*b78*b143 + 2*b78*b169 + 2*b78*b184 + 2*b79*b124 - 2*b79*
b147 + 2*b80*b188 - 2*b81*b84 + 2*b81 - 2*b81*b137 + 2*b82*b84 - 2*b82 + 2
*b82*b165 - 2*b83*b85 + 2*b83 - 2*b83*b134 - 2*b83*b150 + 2*b83*b177 + 2*
b84*b85 + 2*b85*b87 + 2*b86*b139 + 2*b86*b159 - 2*b86*b160 + 2*b87*b109 -
 2*b109 + 2*b87*b160 - 2*b88*b187 - 2*b89*b90 + 2*b90*b91 - 2*b91 + 2*b90*
b187 + 2*b91*b92 + 2*b91*b112 - 4*b112 - 2*b91*b146 - 2*b92*b113 + 2*b92*
b176 + 2*b93*b95 - 2*b95 + 2*b94*b96 - 4*b96 + 2*b94*b152 + 2*b95*b96 + 2*
b95*b131 - 2*b95*b190 + 2*b96*b97 + 2*b97 + 2*b96*b181 - 2*b97*b98 - 2*b97
*b129 - 2*b97*b156 + 2*b98*b100 + 2*b98*b181 + 2*b99*b101 - 2*b99*b142 + 2
*b99*b170 + 2*b100*b101 + 2*b100*b142 + 2*b101*b103 + 2*b102*b104 - 2*b104
 - 2*b102*b132 + 2*b103*b104 + 2*b103*b132 + 2*b105*b107 - 2*b105 + 2*b105
*b158 - 2*b106*b109 - 2*b106*b138 + 2*b106*b179 + 2*b107*b109 - 2*b107*
b173 + 2*b108*b137 + 2*b108*b158 - 2*b108*b180 + 2*b109*b180 - 2*b110*b185
 + 2*b111*b112 - 2*b111*b155 - 2*b111*b186 + 2*b112*b145 + 2*b112*b185 + 2
*b113*b114 - 4*b114 + 2*b114*b145 + 2*b114*b168 + 2*b114*b176 + 2*b115*
b117 - 2*b115*b163 + 2*b116*b118 - 4*b118 + 2*b117*b118 + 2*b117*b190 + 2*
b118*b120 - 2*b120 + 2*b118*b143 - 2*b119*b121 - 2*b119*b142 - 2*b119*b154
 + 2*b120*b121 - 2*b120*b156 + 2*b120*b178 + 2*b121*b123 - 2*b123 + 2*b122
*b124 + 2*b122*b125 - 2*b122*b129 + 2*b123*b125 - 2*b123*b132 + 2*b123*
b147 - 2*b124*b189 + 2*b125*b189 + 2*b126*b127 - 2*b127 + 2*b127*b189 + 2*
b128*b129 - 2*b128*b130 + 2*b128*b132 + 2*b130*b148 - 2*b131*b149 + 2*b133
*b134 - 2*b135*b136 - 2*b135*b153 + 2*b137*b138 - 2*b137*b159 - 2*b139*
b140 - 2*b140*b155 - 2*b141*b145 + 2*b142*b143 - 2*b143*b164 - 2*b147*b148
 + 2*b147*b149 - 2*b148*b152 - 2*b149*b170 - 2*b152*b184 - 2*b154*b181 + 2
*b155*b180 + 2*b155*b185 + 2*b156*b163 - 2*b157*b172 - 2*b158*b179 - 2*
b159*b165 + 2*b160*b187 + 2*b161*b182 - 2*b161*b183 - 2*b162*b166 - 2*b162
*b168 - 2*b163*b164 - 2*b165*b177 - 2*b167*b168 + 2*b168*b190 - 2*b169*
b170 - 2*b169*b171 - 2*b175*b176 - 2*b176*b190 - 2*b178*b181 - 2*b182*b185
 - 2*b186*b187 - 2*b188*b189  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
