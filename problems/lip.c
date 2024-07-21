#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="lip";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b9,b10,b17,b18,b25,b26,b33,b34,b41,b42,b3,b4,b11,b12,b19,b20,b27,b28,b35,b36,b43,b44,b5,b6,b13,b14,b21,b22,b29,b30,b37,b38,b45,b46,b7,b8,b15,b16,b23,b24,b31,b32,b39,b40,b47,b48,b49,b50,b51,b52,x53,x54,x55,x56,x57,x58,x59,x60;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 

   fclose(fp);
   res=-( 39.2*(pow((25*b1 + 25*b2 + 25*b9 + 25*b10 + 25*b17 + 25*b18 + 25*b25 + 25*b26
  + 25*b33 + 25*b34 + 25*b41 + 25*b42),0.5 )+ pow((25*b3 + 25*b4 + 25*b11 + 25
 *b12 + 25*b19 + 25*b20 + 25*b27 + 25*b28 + 25*b35 + 25*b36 + 25*b43 + 25*
 b44),0.5 )+ pow((25*b5 + 25*b6 + 25*b13 + 25*b14 + 25*b21 + 25*b22 + 25*b29
  + 25*b30 + 25*b37 + 25*b38 + 25*b45 + 25*b46),0.5 )+ pow((25*b7 + 25*b8 + 25
 *b15 + 25*b16 + 25*b23 + 25*b24 + 25*b31 + 25*b32 + 25*b39 + 25*b40 + 25*
 b47 + 25*b48),0.5)) - 300000*b1 - 800000*b2 - 300000*b3 - 800000*b4 -
  300000*b5 - 800000*b6 - 300000*b7 - 800000*b8 - 300000*b9 - 800000*b10 -
  300000*b11 - 800000*b12 - 300000*b13 - 800000*b14 - 300000*b15 - 800000*
 b16 - 300000*b17 - 800000*b18 - 300000*b19 - 800000*b20 - 300000*b21 -
  800000*b22 - 300000*b23 - 800000*b24 - 300000*b25 - 800000*b26 - 300000*
 b27 - 800000*b28 - 300000*b29 - 800000*b30 - 300000*b31 - 800000*b32 -
  300000*b33 - 800000*b34 - 300000*b35 - 800000*b36 - 300000*b37 - 800000*
 b38 - 300000*b39 - 800000*b40 - 300000*b41 - 800000*b42 - 300000*b43 -
  800000*b44 - 300000*b45 - 800000*b46 - 300000*b47 - 800000*b48 + 100000*
 b1 + 100000*b9 + 100000*b17 + 100000*b25 + 100000*b33 + 100000*b41 +
  400000*b2 + 400000*b10 + 400000*b18 + 400000*b26 + 400000*b34 + 400000*
 b42 + 100000*b3 + 100000*b11 + 100000*b19 + 100000*b27 + 100000*b35 +
  100000*b43 + 400000*b4 + 400000*b12 + 400000*b20 + 400000*b28 + 400000*
 b36 + 400000*b44 + 100000*b5 + 100000*b13 + 100000*b21 + 100000*b29 +
  100000*b37 + 100000*b45 + 400000*b6 + 400000*b14 + 400000*b22 + 400000*
 b30 + 400000*b38 + 400000*b46 + 100000*b7 + 100000*b15 + 100000*b23 +
  100000*b31 + 100000*b39 + 100000*b47 + 400000*b8 + 400000*b16 + 400000*
 b24 + 400000*b32 + 400000*b40 + 400000*b48 + 4000*b1 + 3200*b2 + 8000*b9
  + 6400*b10 + 8000*b17 + 6400*b18 + 16000*b25 + 12800*b26 + 16000*b33 +
  12800*b34 + 32000*b41 + 25600*b42 + 8000*b3 + 6400*b4 + 4000*b11 + 3200*
 b12 + 16000*b19 + 12800*b20 + 24000*b27 + 19200*b28 + 8000*b35 + 6400*b36
  + 24000*b43 + 19200*b44 + 16000*b5 + 12800*b6 + 24000*b13 + 19200*b14 +
  4000*b21 + 3200*b22 + 4000*b29 + 3200*b30 + 16000*b37 + 12800*b38 + 16000
 *b45 + 12800*b46 + 200000*b7 + 160000*b8 + 200000*b15 + 160000*b16 +
  150000*b23 + 120000*b24 + 50000*b31 + 40000*b32 + 100000*b39 + 80000*b40
  + 25000*b47 + 20000*b48 + 80000*b49 + 80000*b50 + 80000*b51 + 80000*b52
  - 55*x53 - 455*x54 - 50*x55 - 450*x56 - 55*x57 - 455*x58 - 55*x59
  - 455*x60  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
