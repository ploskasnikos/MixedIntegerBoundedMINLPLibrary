#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="tspn08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x3,x2,x4,b17,x5,x6,b18,x7,x8,b19,x9,x10,b20,x11,x12,b21,x13,x14,b22,x15,x16,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
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
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b44); 

   fclose(fp);
   res= sqrt(sqr(x1 - x3) + sqr(x2 - x4))*b17 + sqrt(sqr(x1 - x5) + sqr(x2 - x6))*
b18 + sqrt(sqr(x1 - x7) + sqr(x2 - x8))*b19 + sqrt(sqr(x1 - x9) + sqr(x2
 - x10))*b20 + sqrt(sqr(x1 - x11) + sqr(x2 - x12))*b21 + sqrt(sqr(x1 - x13
) + sqr(x2 - x14))*b22 + sqrt(sqr(x1 - x15) + sqr(x2 - x16))*b23 + sqrt(
sqr(x3 - x5) + sqr(x4 - x6))*b24 + sqrt(sqr(x3 - x7) + sqr(x4 - x8))*b25
 + sqrt(sqr(x3 - x9) + sqr(x4 - x10))*b26 + sqrt(sqr(x3 - x11) + sqr(x4 -
 x12))*b27 + sqrt(sqr(x3 - x13) + sqr(x4 - x14))*b28 + sqrt(sqr(x3 - x15)
 + sqr(x4 - x16))*b29 + sqrt(sqr(x5 - x7) + sqr(x6 - x8))*b30 + sqrt(sqr(
x5 - x9) + sqr(x6 - x10))*b31 + sqrt(sqr(x5 - x11) + sqr(x6 - x12))*b32 +
 sqrt(sqr(x5 - x13) + sqr(x6 - x14))*b33 + sqrt(sqr(x5 - x15) + sqr(x6 -
 x16))*b34 + sqrt(sqr(x7 - x9) + sqr(x8 - x10))*b35 + sqrt(sqr(x7 - x11) +
 sqr(x8 - x12))*b36 + sqrt(sqr(x7 - x13) + sqr(x8 - x14))*b37 + sqrt(sqr(x7
 - x15) + sqr(x8 - x16))*b38 + sqrt(sqr(x9 - x11) + sqr(x10 - x12))*b39 +
 sqrt(sqr(x9 - x13) + sqr(x10 - x14))*b40 + sqrt(sqr(x9 - x15) + sqr(x10 -
 x16))*b41 + sqrt(sqr(x11 - x13) + sqr(x12 - x14))*b42 + sqrt(sqr(x11 - x15
) + sqr(x12 - x16))*b43 + sqrt(sqr(x13 - x15) + sqr(x14 - x16))*b44
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
