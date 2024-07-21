#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament12";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b16,b48,b49,b54,b2,b4,b45,b3,b8,b38,b50,b60,b5,b10,b61,b11,b6,b7,b13,b22,b63,b9,b52,b25,b36,b20,b30,b62,b12,b19,b55,b58,b14,b64,b15,b23,b56,b65,b17,b18,b27,b41,b32,b42,b21,b31,b24,b57,b26,b66,b37,b59,b29,b28,b40,b44,b33,b43,b34,b35,b53,b39,b51,b46,b47;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b47); 

   fclose(fp);
   res=-( 2*b1*b16 - 2*b1 - 4*b16 + 2*b1*b48 + 2*b1*b49 - 2*b1*b54 + 2*b2*b4 - 2*b2
 - 2*b4 + 2*b2*b45 - 4*b45 + 2*b3*b8 - 2*b3 - 4*b8 + 2*b3*b38 - 2*b38 - 2*
b3*b50 + 2*b3*b60 + 2*b4*b5 - 2*b5 + 2*b4*b10 - 4*b10 - 2*b4*b61 + 2*b5*
b11 - 4*b11 + 2*b6*b7 - 2*b6 - 2*b7 + 2*b6*b13 - 2*b13 + 2*b7*b8 + 2*b7*
b22 - 2*b22 - 2*b7*b63 + 2*b8*b9 - 4*b9 + 2*b8*b52 + 2*b9*b25 + 2*b25 + 2*
b9*b36 - 2*b36 + 2*b9*b50 + 2*b10*b20 - 4*b20 + 2*b10*b30 - 2*b30 + 2*b10*
b62 + 2*b11*b12 - 2*b12 + 2*b11*b19 - 4*b19 + 2*b11*b61 + 2*b12*b20 + 2*
b13*b36 + 2*b13*b55 - 2*b13*b58 + 2*b14*b36 + 2*b14 - 2*b14*b55 - 2*b14*
b60 - 2*b14*b64 + 2*b15*b16 + 2*b15 - 2*b15*b23 - 2*b23 - 2*b15*b56 - 2*
b15*b65 + 2*b16*b17 - 2*b17 + 2*b16*b38 + 2*b17*b18 - 4*b18 + 2*b17*b27 -
 2*b27 - 2*b17*b62 + 2*b18*b19 + 2*b18*b41 - 2*b41 + 2*b18*b61 + 2*b19*b32
 - 4*b32 + 2*b19*b42 - 2*b42 + 2*b20*b21 - 2*b21 + 2*b20*b31 - 2*b31 + 2*
b21*b32 + 2*b22*b23 + 2*b22*b24 - 2*b24 - 2*b22*b57 + 2*b23*b26 - 2*b26 +
 2*b23*b58 + 2*b24*b26 + 2*b24*b38 - 2*b24*b66 - 2*b25*b27 - 2*b25*b37 - 2*
b37 - 2*b25*b59 + 2*b26*b27 - 2*b26*b54 + 2*b27*b29 - 4*b29 - 2*b28*b30 -
 2*b28 + 2*b28*b49 + 2*b28*b56 + 2*b28*b59 + 2*b29*b30 + 2*b29*b40 - 2*b40
 + 2*b29*b62 + 2*b30*b31 + 2*b31*b44 - 2*b44 - 2*b31*b49 + 2*b32*b33 - 2*
b33 + 2*b32*b43 - 2*b43 + 2*b33*b44 - 2*b34*b52 + 2*b34 - 2*b34*b57 - 2*
b35*b53 + 2*b35 - 2*b35*b58 + 2*b35*b64 - 2*b35*b66 - 2*b36*b65 + 2*b37*
b39 - 4*b39 + 2*b37*b58 + 2*b37*b60 - 2*b38*b40 + 2*b39*b40 + 2*b39*b54 +
 2*b39*b65 + 2*b40*b41 + 2*b41*b42 - 2*b41*b59 + 2*b42*b43 - 2*b42*b51 + 2*
b43*b45 - 2*b43*b48 + 2*b44*b46 - 2*b46 - 2*b44*b47 + 2*b45*b46 + 2*b45*
b47 + 2*b47*b48 - 2*b47*b49 - 2*b48*b51 - 2*b50*b56 + 2*b50*b59 + 2*b51*
b54 + 2*b51*b56 + 2*b52*b53 - 2*b52*b60 + 2*b57*b63 + 2*b57*b66 - 2*b61*
b62 + 2*b65*b66  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
