#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_3pm-0344-0344";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b10,b13,b25,b37,b109,b2,b5,b11,b14,b26,b38,b110,b3,b6,b12,b15,b27,b39,b111,b7,b16,b28,b40,b112,b8,b17,b29,b41,b113,b9,b18,b30,b42,b114,b19,b31,b43,b115,b20,b32,b44,b116,b21,b33,b45,b117,b22,b34,b46,b118,b23,b35,b47,b119,b24,b36,b48,b120,b49,b121,b50,b122,b51,b123,b52,b124,b53,b125,b54,b126,b55,b127,b56,b128,b57,b129,b58,b130,b59,b131,b60,b132,b61,b133,b62,b134,b63,b135,b64,b136,b65,b137,b66,b138,b67,b139,b68,b140,b69,b141,b70,b142,b71,b143,b72,b144,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108;
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
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b144); 
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

   fclose(fp);
   res=b1*b4 + b1*b10 + b1*b13 - b1*b25 + b1*b37 - b1*b109 + b2*b5 + b2*b11 + b2
 *b14 - b2*b26 + b2*b38 - b2*b110 + b3*b6 + b3*b12 + b3*b15 - b3*b27 + b3*
 b39 - b3*b111 - b4*b7 - b4*b16 - b4*b28 - b4*b40 - b4*b112 - b5*b8 - b5*
 b17 - b5*b29 - b5*b41 - b5*b113 - b6*b9 - b6*b18 - b6*b30 - b6*b42 - b6*
 b114 - b7*b10 + b7*b19 - b7*b31 - b7*b43 + b7*b115 - b8*b11 + b8*b20 - b8
 *b32 - b8*b44 + b8*b116 - b9*b12 + b9*b21 - b9*b33 - b9*b45 + b9*b117 -
  b10*b22 - b10*b34 + b10*b46 + b10*b118 - b11*b23 - b11*b35 + b11*b47 +
  b11*b119 - b12*b24 - b12*b36 + b12*b48 + b12*b120 + b13*b16 + b13*b22 -
  b13*b25 + b13*b49 + b13*b121 + b14*b17 + b14*b23 - b14*b26 + b14*b50 +
  b14*b122 + b15*b18 + b15*b24 - b15*b27 + b15*b51 + b15*b123 - b16*b19 +
  b16*b28 + b16*b52 + b16*b124 - b17*b20 + b17*b29 + b17*b53 + b17*b125 -
  b18*b21 + b18*b30 + b18*b54 + b18*b126 + b19*b22 - b19*b31 - b19*b55 +
  b19*b127 + b20*b23 - b20*b32 - b20*b56 + b20*b128 + b21*b24 - b21*b33 -
  b21*b57 + b21*b129 + b22*b34 + b22*b58 + b22*b130 + b23*b35 + b23*b59 +
  b23*b131 + b24*b36 + b24*b60 + b24*b132 + b25*b28 - b25*b34 + b25*b61 +
  b25*b133 + b26*b29 - b26*b35 + b26*b62 + b26*b134 + b27*b30 - b27*b36 +
  b27*b63 + b27*b135 - b28*b31 - b28*b64 - b28*b136 - b29*b32 - b29*b65 -
  b29*b137 - b30*b33 - b30*b66 - b30*b138 - b31*b34 + b31*b67 - b31*b139 -
  b32*b35 + b32*b68 - b32*b140 - b33*b36 + b33*b69 - b33*b141 - b34*b70 -
  b34*b142 - b35*b71 - b35*b143 - b36*b72 - b36*b144 + b37*b40 - b37*b46 -
  b37*b49 + b37*b61 - b37*b73 + b38*b41 - b38*b47 - b38*b50 + b38*b62 - b38
 *b74 + b39*b42 - b39*b48 - b39*b51 + b39*b63 - b39*b75 + b40*b43 - b40*
 b52 + b40*b64 - b40*b76 + b41*b44 - b41*b53 + b41*b65 - b41*b77 + b42*b45
  - b42*b54 + b42*b66 - b42*b78 - b43*b46 + b43*b55 + b43*b67 - b43*b79 -
  b44*b47 + b44*b56 + b44*b68 - b44*b80 - b45*b48 + b45*b57 + b45*b69 - b45
 *b81 - b46*b58 + b46*b70 - b46*b82 - b47*b59 + b47*b71 - b47*b83 - b48*
 b60 + b48*b72 - b48*b84 - b49*b52 + b49*b58 + b49*b61 + b49*b85 - b50*b53
  + b50*b59 + b50*b62 + b50*b86 - b51*b54 + b51*b60 + b51*b63 + b51*b87 -
  b52*b55 - b52*b64 - b52*b88 - b53*b56 - b53*b65 - b53*b89 - b54*b57 - b54
 *b66 - b54*b90 - b55*b58 - b55*b67 + b55*b91 - b56*b59 - b56*b68 + b56*
 b92 - b57*b60 - b57*b69 + b57*b93 - b58*b70 + b58*b94 - b59*b71 + b59*b95
  - b60*b72 + b60*b96 - b61*b64 + b61*b70 - b61*b97 - b62*b65 + b62*b71 -
  b62*b98 - b63*b66 + b63*b72 - b63*b99 + b64*b67 - b64*b100 + b65*b68 -
  b65*b101 + b66*b69 - b66*b102 - b67*b70 + b67*b103 - b68*b71 + b68*b104
  - b69*b72 + b69*b105 + b70*b106 + b71*b107 + b72*b108 - b73*b76 - b73*
 b82 + b73*b85 - b73*b97 + b73*b109 - b74*b77 - b74*b83 + b74*b86 - b74*
 b98 + b74*b110 - b75*b78 - b75*b84 + b75*b87 - b75*b99 + b75*b111 - b76*
 b79 + b76*b88 + b76*b100 - b76*b112 - b77*b80 + b77*b89 + b77*b101 - b77*
 b113 - b78*b81 + b78*b90 + b78*b102 - b78*b114 + b79*b82 - b79*b91 - b79*
 b103 + b79*b115 + b80*b83 - b80*b92 - b80*b104 + b80*b116 + b81*b84 - b81
 *b93 - b81*b105 + b81*b117 - b82*b94 + b82*b106 + b82*b118 - b83*b95 +
  b83*b107 + b83*b119 - b84*b96 + b84*b108 + b84*b120 + b85*b88 - b85*b94
  + b85*b97 + b85*b121 + b86*b89 - b86*b95 + b86*b98 + b86*b122 + b87*b90
  - b87*b96 + b87*b99 + b87*b123 + b88*b91 + b88*b100 - b88*b124 + b89*b92
  + b89*b101 - b89*b125 + b90*b93 + b90*b102 - b90*b126 + b91*b94 - b91*
 b103 + b91*b127 + b92*b95 - b92*b104 + b92*b128 + b93*b96 - b93*b105 +
  b93*b129 - b94*b106 + b94*b130 - b95*b107 + b95*b131 - b96*b108 + b96*
 b132 - b97*b100 + b97*b106 - b97*b133 - b98*b101 + b98*b107 - b98*b134 -
  b99*b102 + b99*b108 - b99*b135 + b100*b103 + b100*b136 + b101*b104 + b101
 *b137 + b102*b105 + b102*b138 - b103*b106 - b103*b139 - b104*b107 - b104*
 b140 - b105*b108 - b105*b141 + b106*b142 + b107*b143 + b108*b144 - b109*
 b112 - b109*b118 + b109*b121 - b109*b133 - b110*b113 - b110*b119 + b110*
 b122 - b110*b134 - b111*b114 - b111*b120 + b111*b123 - b111*b135 - b112*
 b115 - b112*b124 + b112*b136 - b113*b116 - b113*b125 + b113*b137 - b114*
 b117 - b114*b126 + b114*b138 - b115*b118 - b115*b127 - b115*b139 - b116*
 b119 - b116*b128 - b116*b140 - b117*b120 - b117*b129 - b117*b141 + b118*
 b130 + b118*b142 + b119*b131 + b119*b143 + b120*b132 + b120*b144 + b121*
 b124 - b121*b130 - b121*b133 + b122*b125 - b122*b131 - b122*b134 + b123*
 b126 - b123*b132 - b123*b135 + b124*b127 + b124*b136 + b125*b128 + b125*
 b137 + b126*b129 + b126*b138 + b127*b130 - b127*b139 + b128*b131 - b128*
 b140 + b129*b132 - b129*b141 + b130*b142 + b131*b143 + b132*b144 + b133*
 b136 + b133*b142 + b134*b137 + b134*b143 + b135*b138 + b135*b144 + b136*
 b139 + b137*b140 + b138*b141 - b139*b142 - b140*b143 - b141*b144 
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
