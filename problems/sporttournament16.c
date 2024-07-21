#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament16";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b3,b5,b38,b50,b2,b7,b25,b68,b6,b26,b39,b4,b10,b18,b19,b8,b15,b99,b11,b20,b9,b23,b64,b14,b100,b27,b71,b12,b29,b104,b13,b40,b51,b21,b75,b16,b43,b17,b48,b102,b98,b103,b106,b28,b54,b22,b47,b63,b107,b24,b62,b105,b112,b114,b42,b74,b76,b30,b78,b31,b80,b32,b90,b61,b81,b33,b35,b60,b108,b110,b34,b87,b89,b94,b36,b37,b86,b109,b116,b41,b53,b73,b52,b44,b115,b45,b56,b92,b96,b111,b46,b83,b97,b82,b85,b118,b49,b117,b66,b69,b72,b70,b55,b57,b101,b120,b59,b58,b95,b91,b65,b93,b113,b67,b77,b79,b84,b119,b88;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b88); 

   fclose(fp);
   res=-( 2*b1*b3 - 2*b1 - 2*b3 + 2*b1*b5 - 4*b5 + 2*b1*b38 + 2*b38 - 2*b1*b50 + 4*
b50 + 2*b2*b5 - 2*b2 + 2*b2*b7 - 4*b7 + 2*b2*b25 - 2*b25 - 2*b2*b68 + 2*
b68 - 2*b3*b6 - 2*b6 + 2*b3*b26 - 2*b26 + 2*b3*b39 - 2*b39 + 2*b4*b7 - 4*
b4 + 2*b4*b10 - 2*b10 + 2*b4*b18 - 2*b18 + 2*b4*b19 - 4*b19 + 2*b5*b8 - 4*
b8 + 2*b5*b39 + 2*b6*b7 + 2*b6*b15 - 4*b15 + 2*b6*b99 + 2*b7*b11 - 2*b11
 + 2*b8*b10 + 2*b8*b15 + 2*b8*b20 - 4*b20 + 2*b9*b23 - 2*b9 - 2*b23 + 2*b9
*b64 - 4*b64 + 2*b10*b14 - 2*b14 - 2*b10*b100 + 2*b11*b20 + 2*b11*b27 - 4*
b27 - 2*b11*b71 - 2*b71 + 2*b12*b20 - 2*b12 + 2*b12*b29 - 4*b29 - 2*b12*
b99 + 2*b12*b104 + 2*b13*b18 - 2*b13 + 2*b13*b25 + 2*b14*b27 + 2*b14*b40
 - 2*b40 - 2*b14*b51 - 2*b51 + 2*b15*b21 - 4*b21 + 2*b15*b75 - 2*b75 + 2*
b16*b27 - 4*b16 + 2*b16*b29 + 2*b16*b43 - 4*b43 + 2*b16*b99 + 2*b17*b48 -
 2*b17 - 2*b48 + 2*b17*b102 + 2*b18*b26 - 2*b18*b98 + 2*b19*b26 + 2*b19*
b103 + 2*b19*b106 + 2*b20*b28 - 2*b28 + 2*b21*b40 + 2*b21*b43 + 2*b21*b54
 - 4*b54 - 2*b22*b23 - 2*b22 + 2*b22*b47 - 4*b47 + 2*b22*b63 - 2*b63 + 2*
b22*b107 + 2*b23*b24 - 2*b24 + 2*b23*b62 - 4*b62 + 2*b24*b63 + 2*b25*b105
 - 2*b25*b112 - 2*b26*b114 + 2*b27*b42 - 2*b42 + 2*b28*b54 - 2*b28*b74 - 2
*b74 + 2*b28*b76 - 4*b76 + 2*b29*b30 - 2*b30 + 2*b29*b78 - 2*b78 + 2*b30*
b31 - 4*b31 + 2*b30*b76 - 2*b30*b80 + 2*b80 + 2*b31*b32 - 2*b32 + 2*b31*
b78 + 2*b31*b90 + 2*b32*b61 - 2*b61 + 2*b32*b81 - 2*b81 - 2*b32*b107 + 2*
b33*b35 - 2*b33 - 2*b35 + 2*b33*b60 - 2*b60 + 2*b33*b108 - 2*b33*b110 - 2*
b34*b48 + 2*b34 + 2*b34*b87 - 4*b87 - 2*b34*b89 - 2*b34*b94 + 2*b35*b61 +
 2*b35*b87 - 2*b35*b102 + 2*b36*b37 - 2*b36 - 2*b37 + 2*b36*b86 - 4*b86 - 2
*b36*b108 + 2*b36*b109 + 2*b37*b87 - 2*b38*b105 - 2*b38*b106 - 2*b38*b116
 + 2*b39*b41 - 4*b41 - 2*b39*b99 + 2*b40*b53 - 4*b53 - 2*b40*b73 - 2*b73
 + 2*b41*b52 - 2*b52 + 2*b41*b53 + 2*b41*b75 + 2*b42*b44 - 2*b44 + 2*b42*
b76 - 2*b42*b115 + 2*b43*b45 - 2*b45 + 2*b43*b56 + 2*b56 + 2*b44*b45 + 2*
b44*b53 - 2*b44*b92 - 2*b45*b96 + 2*b45*b111 + 2*b46*b83 - 2*b46 - 2*b83
 - 2*b46*b97 + 2*b46*b107 + 2*b46*b111 + 2*b47*b82 - 2*b82 + 2*b47*b85 - 2
*b85 + 2*b47*b110 + 2*b48*b108 + 2*b48*b118 - 2*b49*b68 + 2*b49 - 2*b49*
b117 - 2*b50*b66 + 2*b66 - 2*b50*b69 - 2*b69 - 2*b50*b103 + 2*b51*b69 + 2*
b51*b72 - 4*b72 + 2*b51*b116 + 2*b52*b70 - 4*b70 - 2*b52*b114 + 2*b52*b115
 + 2*b53*b55 - 2*b55 + 2*b54*b57 - 4*b57 + 2*b54*b101 + 2*b55*b57 + 2*b55*
b92 - 2*b55*b120 - 2*b56*b59 - 2*b59 - 2*b56*b97 - 2*b56*b104 + 2*b57*b59
 + 2*b57*b96 - 2*b58*b60 + 2*b58 - 2*b58*b92 + 2*b58*b95 - 2*b58*b101 + 2*
b59*b60 + 2*b59*b110 + 2*b60*b94 + 2*b61*b62 - 2*b61*b91 + 2*b62*b64 + 2*
b62*b94 + 2*b63*b65 - 2*b65 - 2*b63*b93 + 2*b64*b65 + 2*b64*b93 - 2*b66*
b113 + 2*b67*b68 - 2*b67 + 2*b67*b113 - 2*b68*b100 + 2*b69*b71 + 2*b69*
b117 + 2*b70*b73 + 2*b70*b112 + 2*b70*b116 + 2*b71*b73 + 2*b71*b100 + 2*
b72*b74 + 2*b72*b114 + 2*b72*b115 + 2*b73*b74 + 2*b74*b120 + 2*b75*b77 - 4
*b77 - 2*b75*b104 + 2*b76*b79 - 4*b79 + 2*b77*b78 + 2*b77*b79 + 2*b77*b120
 - 2*b78*b81 + 2*b79*b80 + 2*b79*b81 - 2*b80*b82 - 2*b80*b90 + 2*b81*b82
 + 2*b82*b84 - 2*b84 + 2*b83*b85 + 2*b83*b86 - 2*b83*b95 + 2*b84*b86 - 2*
b84*b93 + 2*b84*b95 + 2*b85*b102 - 2*b85*b119 + 2*b86*b119 + 2*b87*b88 - 2
*b88 + 2*b88*b119 + 2*b89*b90 - 2*b89*b91 + 2*b89*b93 - 2*b90*b94 + 2*b91*
b96 + 2*b91*b97 + 2*b92*b97 - 2*b95*b96 + 2*b98*b117 + 2*b100*b113 + 2*
b101*b104 - 2*b101*b111 - 2*b102*b109 - 2*b107*b108 - 2*b110*b111 - 2*b112
*b113 + 2*b112*b114 - 2*b115*b120 - 2*b116*b117 - 2*b118*b119 
 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
