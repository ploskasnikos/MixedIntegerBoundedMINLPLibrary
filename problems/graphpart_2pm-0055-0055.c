#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2pm-0055-0055";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b13,b16,b61,b2,b5,b14,b17,b62,b3,b6,b15,b18,b63,b7,b19,b64,b8,b20,b65,b9,b21,b66,b10,b22,b67,b11,b23,b68,b12,b24,b69,b25,b70,b26,b71,b27,b72,b28,b73,b29,b74,b30,b75,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60;
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
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 
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

   fclose(fp);
   res=b1*b4 - b1*b13 + b1*b16 - b1*b61 + b2*b5 - b2*b14 + b2*b17 - b2*b62 + b3*
 b6 - b3*b15 + b3*b18 - b3*b63 - b4*b7 + b4*b19 - b4*b64 - b5*b8 + b5*b20
  - b5*b65 - b6*b9 + b6*b21 - b6*b66 + b7*b10 - b7*b22 - b7*b67 + b8*b11
  - b8*b23 - b8*b68 + b9*b12 - b9*b24 - b9*b69 + b10*b13 + b10*b25 - b10*
 b70 + b11*b14 + b11*b26 - b11*b71 + b12*b15 + b12*b27 - b12*b72 - b13*b28
  - b13*b73 - b14*b29 - b14*b74 - b15*b30 - b15*b75 - b16*b19 + b16*b28 +
  b16*b31 - b17*b20 + b17*b29 + b17*b32 - b18*b21 + b18*b30 + b18*b33 + b19
 *b22 + b19*b34 + b20*b23 + b20*b35 + b21*b24 + b21*b36 - b22*b25 - b22*
 b37 - b23*b26 - b23*b38 - b24*b27 - b24*b39 + b25*b28 - b25*b40 + b26*b29
  - b26*b41 + b27*b30 - b27*b42 - b28*b43 - b29*b44 - b30*b45 + b31*b34 +
  b31*b43 - b31*b46 + b32*b35 + b32*b44 - b32*b47 + b33*b36 + b33*b45 - b33
 *b48 - b34*b37 + b34*b49 - b35*b38 + b35*b50 - b36*b39 + b36*b51 - b37*
 b40 - b37*b52 - b38*b41 - b38*b53 - b39*b42 - b39*b54 + b40*b43 - b40*b55
  + b41*b44 - b41*b56 + b42*b45 - b42*b57 + b43*b58 + b44*b59 + b45*b60 -
  b46*b49 + b46*b58 - b46*b61 - b47*b50 + b47*b59 - b47*b62 - b48*b51 + b48
 *b60 - b48*b63 + b49*b52 + b49*b64 + b50*b53 + b50*b65 + b51*b54 + b51*
 b66 + b52*b55 - b52*b67 + b53*b56 - b53*b68 + b54*b57 - b54*b69 - b55*b58
  - b55*b70 - b56*b59 - b56*b71 - b57*b60 - b57*b72 + b58*b73 + b59*b74 +
  b60*b75 + b61*b64 + b61*b73 + b62*b65 + b62*b74 + b63*b66 + b63*b75 + b64
 *b67 + b65*b68 + b66*b69 - b67*b70 - b68*b71 - b69*b72 + b70*b73 + b71*
 b74 + b72*b75  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
