#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2pm-0077-0777";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b19,b22,b127,b2,b5,b20,b23,b128,b3,b6,b21,b24,b129,b7,b25,b130,b8,b26,b131,b9,b27,b132,b10,b28,b133,b11,b29,b134,b12,b30,b135,b13,b31,b136,b14,b32,b137,b15,b33,b138,b16,b34,b139,b17,b35,b140,b18,b36,b141,b37,b142,b38,b143,b39,b144,b40,b145,b41,b146,b42,b147,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126;
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
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b48); 
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

   fclose(fp);
   res=b1*b4 - b1*b19 + b1*b22 - b1*b127 + b2*b5 - b2*b20 + b2*b23 - b2*b128 +
  b3*b6 - b3*b21 + b3*b24 - b3*b129 - b4*b7 + b4*b25 + b4*b130 - b5*b8 + b5
 *b26 + b5*b131 - b6*b9 + b6*b27 + b6*b132 - b7*b10 - b7*b28 - b7*b133 -
  b8*b11 - b8*b29 - b8*b134 - b9*b12 - b9*b30 - b9*b135 - b10*b13 + b10*b31
  + b10*b136 - b11*b14 + b11*b32 + b11*b137 - b12*b15 + b12*b33 + b12*b138
  + b13*b16 - b13*b34 + b13*b139 + b14*b17 - b14*b35 + b14*b140 + b15*b18
  - b15*b36 + b15*b141 + b16*b19 + b16*b37 - b16*b142 + b17*b20 + b17*b38
  - b17*b143 + b18*b21 + b18*b39 - b18*b144 + b19*b40 + b19*b145 + b20*b41
  + b20*b146 + b21*b42 + b21*b147 + b22*b25 + b22*b40 - b22*b43 + b23*b26
  + b23*b41 - b23*b44 + b24*b27 + b24*b42 - b24*b45 - b25*b28 - b25*b46 -
  b26*b29 - b26*b47 - b27*b30 - b27*b48 + b28*b31 + b28*b49 + b29*b32 + b29
 *b50 + b30*b33 + b30*b51 + b31*b34 + b31*b52 + b32*b35 + b32*b53 + b33*
 b36 + b33*b54 + b34*b37 - b34*b55 + b35*b38 - b35*b56 + b36*b39 - b36*b57
  - b37*b40 + b37*b58 - b38*b41 + b38*b59 - b39*b42 + b39*b60 - b40*b61 -
  b41*b62 - b42*b63 - b43*b46 - b43*b61 - b43*b64 - b44*b47 - b44*b62 - b44
 *b65 - b45*b48 - b45*b63 - b45*b66 - b46*b49 + b46*b67 - b47*b50 + b47*
 b68 - b48*b51 + b48*b69 - b49*b52 + b49*b70 - b50*b53 + b50*b71 - b51*b54
  + b51*b72 - b52*b55 + b52*b73 - b53*b56 + b53*b74 - b54*b57 + b54*b75 -
  b55*b58 - b55*b76 - b56*b59 - b56*b77 - b57*b60 - b57*b78 + b58*b61 - b58
 *b79 + b59*b62 - b59*b80 + b60*b63 - b60*b81 + b61*b82 + b62*b83 + b63*
 b84 - b64*b67 + b64*b82 + b64*b85 - b65*b68 + b65*b83 + b65*b86 - b66*b69
  + b66*b84 + b66*b87 - b67*b70 - b67*b88 - b68*b71 - b68*b89 - b69*b72 -
  b69*b90 + b70*b73 + b70*b91 + b71*b74 + b71*b92 + b72*b75 + b72*b93 + b73
 *b76 - b73*b94 + b74*b77 - b74*b95 + b75*b78 - b75*b96 - b76*b79 + b76*
 b97 - b77*b80 + b77*b98 - b78*b81 + b78*b99 + b79*b82 + b79*b100 + b80*
 b83 + b80*b101 + b81*b84 + b81*b102 - b82*b103 - b83*b104 - b84*b105 +
  b85*b88 - b85*b103 + b85*b106 + b86*b89 - b86*b104 + b86*b107 + b87*b90
  - b87*b105 + b87*b108 - b88*b91 - b88*b109 - b89*b92 - b89*b110 - b90*
 b93 - b90*b111 + b91*b94 + b91*b112 + b92*b95 + b92*b113 + b93*b96 + b93*
 b114 - b94*b97 - b94*b115 - b95*b98 - b95*b116 - b96*b99 - b96*b117 - b97
 *b100 - b97*b118 - b98*b101 - b98*b119 - b99*b102 - b99*b120 - b100*b103
  - b100*b121 - b101*b104 - b101*b122 - b102*b105 - b102*b123 - b103*b124
  - b104*b125 - b105*b126 - b106*b109 - b106*b124 + b106*b127 - b107*b110
  - b107*b125 + b107*b128 - b108*b111 - b108*b126 + b108*b129 - b109*b112
  - b109*b130 - b110*b113 - b110*b131 - b111*b114 - b111*b132 + b112*b115
  + b112*b133 + b113*b116 + b113*b134 + b114*b117 + b114*b135 + b115*b118
  - b115*b136 + b116*b119 - b116*b137 + b117*b120 - b117*b138 - b118*b121
  + b118*b139 - b119*b122 + b119*b140 - b120*b123 + b120*b141 + b121*b124
  + b121*b142 + b122*b125 + b122*b143 + b123*b126 + b123*b144 - b124*b145
  - b125*b146 - b126*b147 - b127*b130 + b127*b145 - b128*b131 + b128*b146
  - b129*b132 + b129*b147 + b130*b133 + b131*b134 + b132*b135 - b133*b136
  - b134*b137 - b135*b138 + b136*b139 + b137*b140 + b138*b141 + b139*b142
  + b140*b143 + b141*b144 + b142*b145 + b143*b146 + b144*b147 
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
