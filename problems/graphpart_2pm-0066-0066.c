#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2pm-0066-0066";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b16,b19,b91,b2,b5,b17,b20,b92,b3,b6,b18,b21,b93,b7,b22,b94,b8,b23,b95,b9,b24,b96,b10,b25,b97,b11,b26,b98,b12,b27,b99,b13,b28,b100,b14,b29,b101,b15,b30,b102,b31,b103,b32,b104,b33,b105,b34,b106,b35,b107,b36,b108,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90;
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
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b42); 
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

   fclose(fp);
   res=b1*b4 + b1*b16 + b1*b19 + b1*b91 + b2*b5 + b2*b17 + b2*b20 + b2*b92 + b3*
 b6 + b3*b18 + b3*b21 + b3*b93 + b4*b7 + b4*b22 + b4*b94 + b5*b8 + b5*b23
  + b5*b95 + b6*b9 + b6*b24 + b6*b96 + b7*b10 - b7*b25 + b7*b97 + b8*b11
  - b8*b26 + b8*b98 + b9*b12 - b9*b27 + b9*b99 - b10*b13 + b10*b28 - b10*
 b100 - b11*b14 + b11*b29 - b11*b101 - b12*b15 + b12*b30 - b12*b102 + b13*
 b16 - b13*b31 + b13*b103 + b14*b17 - b14*b32 + b14*b104 + b15*b18 - b15*
 b33 + b15*b105 + b16*b34 - b16*b106 + b17*b35 - b17*b107 + b18*b36 - b18*
 b108 - b19*b22 + b19*b34 + b19*b37 - b20*b23 + b20*b35 + b20*b38 - b21*
 b24 + b21*b36 + b21*b39 - b22*b25 - b22*b40 - b23*b26 - b23*b41 - b24*b27
  - b24*b42 - b25*b28 + b25*b43 - b26*b29 + b26*b44 - b27*b30 + b27*b45 -
  b28*b31 - b28*b46 - b29*b32 - b29*b47 - b30*b33 - b30*b48 - b31*b34 + b31
 *b49 - b32*b35 + b32*b50 - b33*b36 + b33*b51 - b34*b52 - b35*b53 - b36*
 b54 + b37*b40 - b37*b52 - b37*b55 + b38*b41 - b38*b53 - b38*b56 + b39*b42
  - b39*b54 - b39*b57 + b40*b43 + b40*b58 + b41*b44 + b41*b59 + b42*b45 +
  b42*b60 - b43*b46 - b43*b61 - b44*b47 - b44*b62 - b45*b48 - b45*b63 + b46
 *b49 - b46*b64 + b47*b50 - b47*b65 + b48*b51 - b48*b66 + b49*b52 - b49*
 b67 + b50*b53 - b50*b68 + b51*b54 - b51*b69 - b52*b70 - b53*b71 - b54*b72
  + b55*b58 + b55*b70 - b55*b73 + b56*b59 + b56*b71 - b56*b74 + b57*b60 +
  b57*b72 - b57*b75 - b58*b61 - b58*b76 - b59*b62 - b59*b77 - b60*b63 - b60
 *b78 - b61*b64 - b61*b79 - b62*b65 - b62*b80 - b63*b66 - b63*b81 - b64*
 b67 - b64*b82 - b65*b68 - b65*b83 - b66*b69 - b66*b84 + b67*b70 + b67*b85
  + b68*b71 + b68*b86 + b69*b72 + b69*b87 + b70*b88 + b71*b89 + b72*b90 +
  b73*b76 - b73*b88 + b73*b91 + b74*b77 - b74*b89 + b74*b92 + b75*b78 - b75
 *b90 + b75*b93 + b76*b79 + b76*b94 + b77*b80 + b77*b95 + b78*b81 + b78*
 b96 - b79*b82 - b79*b97 - b80*b83 - b80*b98 - b81*b84 - b81*b99 + b82*b85
  - b82*b100 + b83*b86 - b83*b101 + b84*b87 - b84*b102 - b85*b88 - b85*
 b103 - b86*b89 - b86*b104 - b87*b90 - b87*b105 - b88*b106 - b89*b107 -
  b90*b108 + b91*b94 + b91*b106 + b92*b95 + b92*b107 + b93*b96 + b93*b108
  + b94*b97 + b95*b98 + b96*b99 - b97*b100 - b98*b101 - b99*b102 - b100*
 b103 - b101*b104 - b102*b105 + b103*b106 + b104*b107 + b105*b108 
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
