#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_3pm-0333-0333";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b7,b10,b19,b28,b55,b2,b5,b8,b11,b20,b29,b56,b3,b6,b9,b12,b21,b30,b57,b13,b22,b31,b58,b14,b23,b32,b59,b15,b24,b33,b60,b16,b25,b34,b61,b17,b26,b35,b62,b18,b27,b36,b63,b37,b64,b38,b65,b39,b66,b40,b67,b41,b68,b42,b69,b43,b70,b44,b71,b45,b72,b46,b73,b47,b74,b48,b75,b49,b76,b50,b77,b51,b78,b52,b79,b53,b80,b54,b81;
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
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b81); 

   fclose(fp);
   res= (-b1*b4) - b1*b7 + b1*b10 + b1*b19 - b1*b28 - b1*b55 - b2*b5 - b2*b8 + b2
 *b11 + b2*b20 - b2*b29 - b2*b56 - b3*b6 - b3*b9 + b3*b12 + b3*b21 - b3*
 b30 - b3*b57 - b4*b7 - b4*b13 + b4*b22 - b4*b31 - b4*b58 - b5*b8 - b5*b14
  + b5*b23 - b5*b32 - b5*b59 - b6*b9 - b6*b15 + b6*b24 - b6*b33 - b6*b60
  + b7*b16 + b7*b25 + b7*b34 - b7*b61 + b8*b17 + b8*b26 + b8*b35 - b8*b62
  + b9*b18 + b9*b27 + b9*b36 - b9*b63 - b10*b13 + b10*b16 - b10*b19 + b10*
 b37 - b10*b64 - b11*b14 + b11*b17 - b11*b20 + b11*b38 - b11*b65 - b12*b15
  + b12*b18 - b12*b21 + b12*b39 - b12*b66 + b13*b16 - b13*b22 - b13*b40 +
  b13*b67 + b14*b17 - b14*b23 - b14*b41 + b14*b68 + b15*b18 - b15*b24 - b15
 *b42 + b15*b69 + b16*b25 + b16*b43 + b16*b70 + b17*b26 + b17*b44 + b17*
 b71 + b18*b27 + b18*b45 + b18*b72 - b19*b22 - b19*b25 - b19*b46 + b19*b73
  - b20*b23 - b20*b26 - b20*b47 + b20*b74 - b21*b24 - b21*b27 - b21*b48 +
  b21*b75 + b22*b25 + b22*b49 + b22*b76 + b23*b26 + b23*b50 + b23*b77 + b24
 *b27 + b24*b51 + b24*b78 - b25*b52 - b25*b79 - b26*b53 - b26*b80 - b27*
 b54 - b27*b81 + b28*b31 - b28*b34 - b28*b37 - b28*b46 - b28*b55 + b29*b32
  - b29*b35 - b29*b38 - b29*b47 - b29*b56 + b30*b33 - b30*b36 - b30*b39 -
  b30*b48 - b30*b57 - b31*b34 - b31*b40 - b31*b49 + b31*b58 - b32*b35 - b32
 *b41 - b32*b50 + b32*b59 - b33*b36 - b33*b42 - b33*b51 + b33*b60 - b34*
 b43 + b34*b52 + b34*b61 - b35*b44 + b35*b53 + b35*b62 - b36*b45 + b36*b54
  + b36*b63 + b37*b40 - b37*b43 - b37*b46 + b37*b64 + b38*b41 - b38*b44 -
  b38*b47 + b38*b65 + b39*b42 - b39*b45 - b39*b48 + b39*b66 + b40*b43 + b40
 *b49 - b40*b67 + b41*b44 + b41*b50 - b41*b68 + b42*b45 + b42*b51 - b42*
 b69 - b43*b52 + b43*b70 - b44*b53 + b44*b71 - b45*b54 + b45*b72 + b46*b49
  + b46*b52 + b46*b73 + b47*b50 + b47*b53 + b47*b74 + b48*b51 + b48*b54 +
  b48*b75 + b49*b52 + b49*b76 + b50*b53 + b50*b77 + b51*b54 + b51*b78 - b52
 *b79 - b53*b80 - b54*b81 + b55*b58 + b55*b61 - b55*b64 + b55*b73 + b56*
 b59 + b56*b62 - b56*b65 + b56*b74 + b57*b60 + b57*b63 - b57*b66 + b57*b75
  - b58*b61 - b58*b67 + b58*b76 - b59*b62 - b59*b68 + b59*b77 - b60*b63 -
  b60*b69 + b60*b78 + b61*b70 - b61*b79 + b62*b71 - b62*b80 + b63*b72 - b63
 *b81 - b64*b67 - b64*b70 + b64*b73 - b65*b68 - b65*b71 + b65*b74 - b66*
 b69 - b66*b72 + b66*b75 + b67*b70 - b67*b76 + b68*b71 - b68*b77 + b69*b72
  - b69*b78 - b70*b79 - b71*b80 - b72*b81 + b73*b76 + b73*b79 + b74*b77 +
  b74*b80 + b75*b78 + b75*b81 + b76*b79 + b77*b80 + b78*b81  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
