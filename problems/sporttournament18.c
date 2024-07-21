#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament18";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b7,b10,b15,b48,b2,b81,b112,b3,b108,b4,b33,b5,b113,b6,b21,b78,b11,b110,b127,b8,b18,b28,b125,b133,b9,b60,b114,b123,b17,b117,b124,b26,b35,b135,b12,b19,b88,b13,b37,b14,b44,b129,b16,b107,b134,b109,b140,b50,b27,b131,b53,b20,b58,b136,b142,b22,b98,b23,b24,b144,b25,b111,b36,b68,b38,b126,b29,b30,b41,b95,b138,b57,b77,b31,b32,b76,b139,b83,b34,b145,b52,b87,b89,b39,b91,b40,b56,b90,b119,b103,b74,b93,b42,b75,b100,b102,b43,b45,b99,b46,b47,b59,b61,b84,b148,b49,b64,b66,b67,b141,b51,b121,b54,b149,b55,b128,b105,b146,b104,b137,b94,b143,b151,b62,b80,b150,b63,b65,b85,b86,b132,b69,b70,b153,b72,b115,b71,b73,b118,b79,b106,b82,b116,b130,b147,b122,b92,b120,b97,b96,b152,b101;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b101); 

   fclose(fp);
   res=-( 2*b1*b7 - 2*b1 - 2*b7 + 2*b1*b10 - 2*b10 + 2*b1*b15 - 4*b15 - 2*b1*b48 + 2
*b48 + 2*b2*b81 - 2*b2 - 2*b81 + 2*b2*b112 + 2*b3*b108 - 2*b3 + 2*b3*b112
 + 2*b4*b33 - 2*b4 - 2*b33 + 2*b4*b108 + 2*b5*b33 - 2*b5 + 2*b5*b113 + 2*
b6*b21 - 2*b6 - 2*b21 + 2*b6*b78 - 4*b78 + 2*b7*b11 - 2*b11 + 2*b7*b110 -
 2*b7*b127 + 2*b8*b18 - 2*b8 - 4*b18 + 2*b8*b28 - 4*b28 - 2*b8*b125 + 2*b8*
b133 - 2*b9*b60 - 2*b9 - 2*b60 + 2*b9*b81 + 2*b9*b114 + 2*b9*b123 + 2*b10*
b17 - 2*b17 + 2*b10*b117 - 2*b10*b124 + 2*b11*b26 - 4*b26 + 2*b11*b35 - 4*
b35 - 2*b11*b135 + 2*b12*b19 - 4*b12 - 4*b19 + 2*b12*b88 - 2*b88 + 2*b12*
b124 + 2*b12*b127 + 2*b13*b26 - 4*b13 + 2*b13*b28 + 2*b13*b37 - 4*b37 + 2*
b13*b125 + 2*b14*b44 - 2*b14 - 4*b44 + 2*b14*b129 + 2*b15*b16 - 4*b16 + 2*
b15*b107 + 2*b15*b134 + 2*b16*b109 + 2*b16*b123 + 2*b16*b140 + 2*b17*b35
 + 2*b17*b50 - 2*b50 - 2*b17*b140 + 2*b18*b27 - 4*b27 + 2*b18*b127 + 2*b18
*b131 + 2*b19*b35 + 2*b19*b37 + 2*b19*b53 - 4*b53 - 2*b20*b21 - 2*b20 + 2*
b20*b58 - 2*b58 + 2*b20*b136 + 2*b20*b142 + 2*b21*b22 - 2*b22 + 2*b21*b98
 - 2*b98 + 2*b22*b58 + 2*b23*b24 + 2*b23 - 4*b24 - 2*b23*b48 - 2*b23*b113
 - 2*b23*b144 + 2*b24*b25 - 2*b25 + 2*b24*b111 + 2*b24*b117 - 2*b25*b114
 + 2*b25*b135 + 2*b25*b140 + 2*b26*b36 - 2*b36 + 2*b26*b131 + 2*b27*b50 +
 2*b27*b53 + 2*b27*b68 - 4*b68 + 2*b28*b38 - 4*b38 + 2*b28*b126 + 2*b29*b30
 - 2*b29 - 2*b30 - 2*b29*b41 - 2*b41 + 2*b29*b95 - 2*b95 + 2*b29*b138 + 2*
b30*b57 - 2*b57 + 2*b30*b77 - 2*b77 - 2*b30*b129 + 2*b31*b32 - 2*b31 - 2*
b32 + 2*b31*b76 - 4*b76 - 2*b31*b138 + 2*b31*b139 + 2*b32*b77 - 2*b33*b83
 + 2*b83 + 2*b33*b107 - 2*b34*b110 + 4*b34 - 2*b34*b111 - 2*b34*b134 - 2*
b34*b145 + 2*b35*b52 - 2*b52 + 2*b36*b68 - 2*b36*b87 - 2*b87 + 2*b36*b89
 - 4*b89 + 2*b37*b39 - 2*b39 + 2*b37*b91 + 2*b91 + 2*b38*b40 - 4*b40 + 2*
b38*b56 - 2*b56 + 2*b38*b90 - 4*b90 + 2*b39*b40 + 2*b39*b89 - 2*b39*b119
 + 2*b40*b41 + 2*b40*b103 + 2*b41*b74 - 2*b74 + 2*b41*b93 - 2*b93 - 2*b42*
b58 + 2*b42 - 2*b42*b75 - 2*b75 + 2*b42*b100 - 4*b100 - 2*b42*b102 + 2*b43
*b74 - 4*b43 + 2*b43*b100 + 2*b43*b129 + 2*b43*b142 + 2*b44*b45 - 2*b45 +
 2*b44*b99 - 4*b99 + 2*b44*b138 + 2*b45*b100 + 2*b46*b47 - 2*b46 - 2*b47 +
 2*b46*b144 + 2*b47*b59 - 2*b59 + 2*b47*b61 + 2*b61 - 2*b47*b134 + 2*b48*
b84 - 2*b84 - 2*b48*b148 + 2*b49*b64 - 2*b49 - 2*b64 + 2*b49*b66 - 2*b66
 - 2*b49*b127 + 2*b49*b148 + 2*b50*b67 - 4*b67 - 2*b50*b141 + 2*b51*b66 -
 4*b51 + 2*b51*b67 + 2*b51*b88 + 2*b51*b121 + 2*b52*b54 - 2*b54 + 2*b52*b89
 - 2*b52*b149 + 2*b53*b55 - 4*b55 + 2*b53*b128 + 2*b54*b55 + 2*b54*b67 - 2
*b54*b105 + 2*b55*b119 + 2*b55*b146 + 2*b56*b104 + 2*b56*b105 - 2*b56*b137
 - 2*b57*b94 - 2*b94 + 2*b57*b98 + 2*b57*b143 + 2*b58*b151 + 2*b59*b60 + 2
*b60*b62 - 2*b62 + 2*b60*b80 - 2*b80 - 2*b61*b108 - 2*b61*b123 - 2*b61*
b150 + 2*b62*b63 + 2*b63 - 2*b62*b112 + 2*b62*b150 - 2*b63*b64 - 2*b63*b83
 - 2*b63*b117 + 2*b64*b65 - 2*b65 + 2*b64*b150 + 2*b65*b85 - 2*b85 + 2*b65
*b86 - 2*b86 - 2*b65*b124 - 2*b66*b132 + 2*b66*b149 + 2*b67*b69 - 2*b69 +
 2*b68*b70 - 4*b70 + 2*b68*b126 + 2*b69*b70 + 2*b69*b105 - 2*b69*b153 + 2*
b70*b72 - 2*b72 + 2*b70*b115 - 2*b71*b73 + 2*b71 - 2*b73 - 2*b71*b91 + 2*
b71*b94 - 2*b71*b105 + 2*b72*b73 - 2*b72*b128 + 2*b72*b143 + 2*b73*b75 + 2
*b73*b136 + 2*b74*b76 - 2*b74*b118 + 2*b75*b76 + 2*b75*b118 + 2*b76*b78 +
 2*b77*b79 - 2*b79 - 2*b77*b106 + 2*b78*b79 + 2*b78*b106 + 2*b80*b82 - 4*
b82 - 2*b81*b84 + 2*b81*b116 + 2*b82*b84 + 2*b82*b130 + 2*b82*b134 + 2*b83
*b144 - 2*b83*b147 + 2*b84*b147 + 2*b85*b122 - 2*b85*b123 + 2*b85*b147 + 2
*b86*b87 - 2*b86*b135 + 2*b86*b149 + 2*b87*b141 + 2*b87*b153 + 2*b88*b90
 - 2*b88*b133 + 2*b89*b92 - 4*b92 + 2*b90*b92 + 2*b90*b153 - 2*b91*b93 - 2
*b91*b133 + 2*b92*b93 + 2*b92*b120 + 2*b93*b95 + 2*b94*b97 - 2*b97 + 2*b94
*b119 + 2*b95*b97 - 2*b95*b120 + 2*b96*b98 - 2*b96 + 2*b96*b99 - 2*b96*
b103 + 2*b96*b137 + 2*b97*b99 - 2*b97*b106 - 2*b98*b152 + 2*b99*b152 + 2*
b100*b101 - 2*b101 + 2*b101*b152 + 2*b102*b103 - 2*b102*b104 + 2*b102*b106
 - 2*b103*b115 + 2*b104*b115 - 2*b104*b142 - 2*b107*b108 - 2*b107*b114 - 2
*b109*b110 + 2*b109*b121 - 2*b109*b131 + 2*b110*b114 - 2*b111*b112 + 2*
b111*b113 - 2*b113*b130 - 2*b115*b126 - 2*b116*b144 - 2*b117*b122 - 2*b118
*b119 + 2*b118*b120 - 2*b120*b128 - 2*b121*b122 - 2*b121*b125 + 2*b122*
b141 + 2*b124*b125 - 2*b126*b146 + 2*b128*b133 - 2*b129*b139 - 2*b131*b132
 + 2*b132*b145 + 2*b132*b148 + 2*b135*b145 - 2*b136*b137 - 2*b136*b138 + 2
*b137*b146 - 2*b140*b141 - 2*b142*b143 - 2*b143*b146 - 2*b145*b147 - 2*
b148*b150 - 2*b149*b153 - 2*b151*b152  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
