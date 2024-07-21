#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="edgecross10-020";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b81,b2,b56,b86,b3,b54,b83,b4,b71,b72,b84,b87,b5,b50,b60,b62,b74,b90,b6,b7,b8,b9,b10,b11,b12,b13,b14,b65,b66,b15,b47,b68,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b75,b27,b28,b29,b63,b69,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b30); 
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

   fclose(fp);
   res=-(b1 - 2*b1*b81 + 3*b81 - 2*b2*b56 + 2*b2*b86 + 4*b86 + 2*b3*b54 - 3*b54
   + 2*b3*b56 - 2*b3*b83 + 4*b83 - 2*b3*b86 + 2*b4*b54 - 2*b4 + 2*b4*b56
   + 2*b4*b71 - 4*b71 + 2*b4*b72 - 9*b72 - 2*b4*b84 + 3*b84 - 2*b4*b87 + 8
  *b87 - 2*b5*b50 + b5 + 7*b50 + 2*b5*b60 + 3*b60 - 2*b5*b62 + 6*b62 + 2*
  b5*b74 - 6*b74 - 2*b5*b90 + 6*b90 - 2*b6*b81 + 3*b6 - 2*b6*b83 - 2*b6*
  b86 - 2*b7*b56 + b7 - 2*b7*b60 + 2*b7*b86 + 2*b8*b71 + 2*b8*b72 - 2*b8*
  b83 - 2*b8*b86 - 2*b9*b50 + b9 - 2*b9*b60 + 2*b9*b74 + 2*b10*b54 - 2*b10
   + 2*b10*b56 + 2*b11*b60 - b11 + 2*b12*b71 + b12 + 2*b12*b72 - 2*b12*b81
   - 2*b12*b83 - 2*b12*b86 - 2*b13*b50 + b13 - 2*b13*b56 - 2*b13*b60 + 2*
  b13*b74 + 2*b13*b86 + 2*b14*b65 - 2*b14 - b65 + 2*b14*b66 - 4*b66 + 2*
  b14*b71 + 2*b14*b72 - 2*b14*b84 - 2*b14*b87 - 2*b15*b47 + 2*b15 + 3*b47
   - 2*b15*b50 - 2*b15*b62 + 2*b15*b68 - 4*b68 + 2*b15*b74 - 2*b15*b90 - 2
  *b16*b84 + 2*b16 - 2*b16*b87 - 2*b17*b62 + 2*b17 - 2*b17*b90 + 2*b18*b56
   - b18 + 2*b18*b72 - 2*b18*b87 - 2*b19*b86 + b19 + 2*b20*b72 - 2*b20*b86
   + 2*b21*b56 - b21 + 2*b22*b72 - 2*b22*b86 + 2*b23*b66 - b23 + 2*b23*b72
   - 2*b23*b87 - 2*b24*b87 + b24 - 2*b25*b56 + 2*b25 - 2*b25*b60 - 2*b25*
  b72 - 2*b25*b74 + 2*b25*b87 + 2*b25*b90 - 2*b26*b50 + b26 - 2*b26*b60 -
   2*b26*b74 + 2*b26*b75 + 4*b75 + 2*b26*b90 + 2*b27*b50 - 2*b27 + 2*b27*
  b62 - 2*b28*b50 + 2*b28 - 2*b28*b56 - 2*b28*b60 - 2*b28*b72 - 2*b28*b74
   + 2*b28*b75 + 2*b28*b87 + 2*b28*b90 - 2*b29*b47 + b29 - 2*b29*b50 - 2*
  b29*b62 + 2*b29*b63 - 3*b63 + 2*b29*b69 - 2*b30*b62 + 2*b30 - 2*b30*b75
   + 2*b31*b72 - b31 + 2*b31*b74 - 2*b31*b86 + 2*b32*b56 - 2*b32 + 2*b32*
  b60 + 2*b33*b72 - 2*b33 + 2*b33*b74 + 2*b34*b66 - 2*b34 + 2*b34*b68 + 2*
  b34*b72 + 2*b34*b74 - 2*b34*b87 - 2*b34*b90 - 2*b35*b87 + 2*b35 - 2*b35*
  b90 + 2*b36*b50 - 2*b36 + 2*b36*b60 - 2*b37*b72 + 2*b37*b86 + 2*b38*b63
   - b38 + 2*b38*b68 + 2*b38*b74 - 2*b38*b75 - 2*b38*b90 - 2*b39*b75 + 2*
  b39 - 2*b39*b90 - 2*b40*b50 + 3*b40 - 2*b40*b56 - 2*b40*b60 - 2*b41*b47
   + 3*b41 - 2*b41*b50 - 2*b41*b62 - 2*b42*b62 + b42 + 2*b43*b63 - 2*b43
   + 2*b43*b66 + 2*b43*b68 + 2*b43*b72 + 2*b43*b74 - 2*b43*b75 - 2*b43*b87
   - 2*b43*b90 - 2*b44*b75 + 3*b44 - 2*b44*b87 - 2*b44*b90 - 2*b45*b69 + 2
  *b45 - 2*b45*b75  - 85);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
