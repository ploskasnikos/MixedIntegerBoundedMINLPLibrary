#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_3pm-0244-0244";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b10,b13,b25,b73,b2,b5,b11,b14,b26,b74,b3,b6,b12,b15,b27,b75,b7,b16,b28,b76,b8,b17,b29,b77,b9,b18,b30,b78,b19,b31,b79,b20,b32,b80,b21,b33,b81,b22,b34,b82,b23,b35,b83,b24,b36,b84,b37,b85,b38,b86,b39,b87,b40,b88,b41,b89,b42,b90,b43,b91,b44,b92,b45,b93,b46,b94,b47,b95,b48,b96,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72;
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
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b96); 
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

   fclose(fp);
   res=b1*b4 + b1*b10 - b1*b13 + b1*b25 - b1*b73 + b2*b5 + b2*b11 - b2*b14 + b2*
 b26 - b2*b74 + b3*b6 + b3*b12 - b3*b15 + b3*b27 - b3*b75 - b4*b7 - b4*b16
  + b4*b28 - b4*b76 - b5*b8 - b5*b17 + b5*b29 - b5*b77 - b6*b9 - b6*b18 +
  b6*b30 - b6*b78 - b7*b10 - b7*b19 - b7*b31 + b7*b79 - b8*b11 - b8*b20 -
  b8*b32 + b8*b80 - b9*b12 - b9*b21 - b9*b33 + b9*b81 + b10*b22 + b10*b34
  + b10*b82 + b11*b23 + b11*b35 + b11*b83 + b12*b24 + b12*b36 + b12*b84 -
  b13*b16 + b13*b22 + b13*b37 - b13*b85 - b14*b17 + b14*b23 + b14*b38 - b14
 *b86 - b15*b18 + b15*b24 + b15*b39 - b15*b87 - b16*b19 + b16*b40 + b16*
 b88 - b17*b20 + b17*b41 + b17*b89 - b18*b21 + b18*b42 + b18*b90 - b19*b22
  + b19*b43 - b19*b91 - b20*b23 + b20*b44 - b20*b92 - b21*b24 + b21*b45 -
  b21*b93 + b22*b46 + b22*b94 + b23*b47 + b23*b95 + b24*b48 + b24*b96 + b25
 *b28 - b25*b34 + b25*b37 - b25*b49 + b26*b29 - b26*b35 + b26*b38 - b26*
 b50 + b27*b30 - b27*b36 + b27*b39 - b27*b51 - b28*b31 + b28*b40 + b28*b52
  - b29*b32 + b29*b41 + b29*b53 - b30*b33 + b30*b42 + b30*b54 + b31*b34 +
  b31*b43 - b31*b55 + b32*b35 + b32*b44 - b32*b56 + b33*b36 + b33*b45 - b33
 *b57 - b34*b46 - b34*b58 - b35*b47 - b35*b59 - b36*b48 - b36*b60 - b37*
 b40 + b37*b46 - b37*b61 - b38*b41 + b38*b47 - b38*b62 - b39*b42 + b39*b48
  - b39*b63 - b40*b43 - b40*b64 - b41*b44 - b41*b65 - b42*b45 - b42*b66 -
  b43*b46 - b43*b67 - b44*b47 - b44*b68 - b45*b48 - b45*b69 + b46*b70 + b47
 *b71 + b48*b72 + b49*b52 + b49*b58 + b49*b61 - b49*b73 + b50*b53 + b50*
 b59 + b50*b62 - b50*b74 + b51*b54 + b51*b60 + b51*b63 - b51*b75 + b52*b55
  - b52*b64 - b52*b76 + b53*b56 - b53*b65 - b53*b77 + b54*b57 - b54*b66 -
  b54*b78 + b55*b58 - b55*b67 + b55*b79 + b56*b59 - b56*b68 + b56*b80 + b57
 *b60 - b57*b69 + b57*b81 - b58*b70 + b58*b82 - b59*b71 + b59*b83 - b60*
 b72 + b60*b84 - b61*b64 + b61*b70 + b61*b85 - b62*b65 + b62*b71 + b62*b86
  - b63*b66 + b63*b72 + b63*b87 - b64*b67 - b64*b88 - b65*b68 - b65*b89 -
  b66*b69 - b66*b90 + b67*b70 - b67*b91 + b68*b71 - b68*b92 + b69*b72 - b69
 *b93 + b70*b94 + b71*b95 + b72*b96 - b73*b76 - b73*b82 + b73*b85 - b74*
 b77 - b74*b83 + b74*b86 - b75*b78 - b75*b84 + b75*b87 + b76*b79 + b76*b88
  + b77*b80 + b77*b89 + b78*b81 + b78*b90 - b79*b82 - b79*b91 - b80*b83 -
  b80*b92 - b81*b84 - b81*b93 - b82*b94 - b83*b95 - b84*b96 + b85*b88 - b85
 *b94 + b86*b89 - b86*b95 + b87*b90 - b87*b96 + b88*b91 + b89*b92 + b90*
 b93 + b91*b94 + b92*b95 + b93*b96  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
