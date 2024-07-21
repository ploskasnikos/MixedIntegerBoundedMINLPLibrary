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
   char *problemname="tspn05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x3,x2,x4,b11,x5,x6,b12,x7,x8,b13,x9,x10,b14,b15,b16,b17,b18,b19,b20;
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
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 

   fclose(fp);
   res= sqrt(sqr(x1 - x3) + sqr(x2 - x4))*b11 + sqrt(sqr(x1 - x5) + sqr(x2 - x6))*
b12 + sqrt(sqr(x1 - x7) + sqr(x2 - x8))*b13 + sqrt(sqr(x1 - x9) + sqr(x2
 - x10))*b14 + sqrt(sqr(x3 - x5) + sqr(x4 - x6))*b15 + sqrt(sqr(x3 - x7)
 + sqr(x4 - x8))*b16 + sqrt(sqr(x3 - x9) + sqr(x4 - x10))*b17 + sqrt(sqr(
x5 - x7) + sqr(x6 - x8))*b18 + sqrt(sqr(x5 - x9) + sqr(x6 - x10))*b19 +
 sqrt(sqr(x7 - x9) + sqr(x8 - x10))*b20  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
