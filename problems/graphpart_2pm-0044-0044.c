#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2pm-0044-0044";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b10,b13,b37,b2,b5,b11,b14,b38,b3,b6,b12,b15,b39,b7,b16,b40,b8,b17,b41,b9,b18,b42,b19,b43,b20,b44,b21,b45,b22,b46,b23,b47,b24,b48,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36;
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
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 

   fclose(fp);
   res= (-b1*b4) - b1*b10 + b1*b13 + b1*b37 - b2*b5 - b2*b11 + b2*b14 + b2*b38 -
  b3*b6 - b3*b12 + b3*b15 + b3*b39 + b4*b7 + b4*b16 - b4*b40 + b5*b8 + b5*
 b17 - b5*b41 + b6*b9 + b6*b18 - b6*b42 - b7*b10 + b7*b19 + b7*b43 - b8*
 b11 + b8*b20 + b8*b44 - b9*b12 + b9*b21 + b9*b45 - b10*b22 + b10*b46 -
  b11*b23 + b11*b47 - b12*b24 + b12*b48 - b13*b16 + b13*b22 - b13*b25 - b14
 *b17 + b14*b23 - b14*b26 - b15*b18 + b15*b24 - b15*b27 - b16*b19 + b16*
 b28 - b17*b20 + b17*b29 - b18*b21 + b18*b30 + b19*b22 - b19*b31 + b20*b23
  - b20*b32 + b21*b24 - b21*b33 - b22*b34 - b23*b35 - b24*b36 + b25*b28 +
  b25*b34 - b25*b37 + b26*b29 + b26*b35 - b26*b38 + b27*b30 + b27*b36 - b27
 *b39 + b28*b31 + b28*b40 + b29*b32 + b29*b41 + b30*b33 + b30*b42 - b31*
 b34 - b31*b43 - b32*b35 - b32*b44 - b33*b36 - b33*b45 - b34*b46 - b35*b47
  - b36*b48 + b37*b40 - b37*b46 + b38*b41 - b38*b47 + b39*b42 - b39*b48 -
  b40*b43 - b41*b44 - b42*b45 + b43*b46 + b44*b47 + b45*b48  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
