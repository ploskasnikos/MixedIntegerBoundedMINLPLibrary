#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament10";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b14,b34,b35,b39,b2,b3,b31,b4,b8,b43,b9,b5,b7,b11,b6,b13,b42,b19,b28,b44,b10,b18,b36,b40,b12,b38,b45,b25,b16,b15,b17,b41,b26,b30,b20,b29,b21,b22,b23,b24,b27,b37,b32,b33;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 

   fclose(fp);
   res=-( 2*b1*b14 - 2*b1 - 4*b14 + 2*b1*b34 + 2*b1*b35 - 2*b1*b39 + 2*b2*b3 - 2*b2
 - 2*b3 + 2*b2*b31 - 4*b31 + 2*b3*b4 - 2*b4 + 2*b3*b8 - 4*b8 - 2*b3*b43 +
 2*b4*b9 - 4*b9 + 2*b5*b7 - 2*b5 - 4*b7 + 2*b5*b11 - 2*b11 + 2*b6*b7 - 2*b6
 + 2*b6*b11 + 2*b7*b13 - 2*b13 + 2*b7*b42 + 2*b8*b19 - 4*b19 + 2*b8*b28 -
 2*b28 + 2*b8*b44 + 2*b9*b10 - 2*b10 + 2*b9*b18 - 2*b18 + 2*b9*b43 + 2*b10*
b19 + 2*b11*b36 - 2*b11*b40 - 2*b12*b13 + 2*b12 - 2*b12*b38 + 2*b12*b40 -
 2*b12*b45 + 2*b13*b14 + 2*b13*b25 - 2*b25 + 2*b14*b16 - 2*b16 + 2*b14*b40
 - 2*b15*b17 - 2*b15 - 2*b17 + 2*b15*b25 + 2*b15*b35 + 2*b15*b41 + 2*b16*
b17 + 2*b16*b26 - 2*b26 - 2*b16*b44 + 2*b17*b18 + 2*b17*b43 + 2*b18*b30 -
 2*b30 - 2*b18*b35 + 2*b19*b20 - 2*b20 + 2*b19*b29 - 2*b29 + 2*b20*b30 - 2*
b21*b22 + 2*b21 + 2*b22 - 2*b21*b23 - 2*b23 - 2*b22*b24 - 2*b24 - 2*b22*
b36 + 2*b22*b38 + 2*b23*b24 + 2*b23*b42 + 2*b23*b45 + 2*b24*b26 + 2*b24*
b39 - 2*b25*b27 - 2*b27 + 2*b25*b36 + 2*b26*b27 - 2*b26*b42 + 2*b27*b28 +
 2*b27*b44 + 2*b28*b29 - 2*b28*b37 + 2*b29*b31 - 2*b29*b34 + 2*b30*b32 - 2*
b32 - 2*b30*b33 + 2*b31*b32 + 2*b31*b33 + 2*b33*b34 - 2*b33*b35 - 2*b34*
b37 - 2*b36*b41 + 2*b37*b39 + 2*b37*b41 - 2*b39*b40 - 2*b41*b42 - 2*b43*
b44  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
