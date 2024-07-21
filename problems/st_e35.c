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
   char *problemname="st_e35";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x17,x8,x9,x18,x10,x19,x11,x12,x20,x13,x21,x14,x22,x15,x23,x16,b1,b2,b3,b4,b5,b6,b7;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 

   fclose(fp);
   res=-(-(670*pow((x17/pow((0.5*(sqr(x8)*x9 + sqr(x9)*x8)),0.333333333333333)),0.83 )+
  670*pow((x18/pow((0.5*(sqr(x9)*x10 + sqr(x10)*x9)),0.333333333333333)),0.83 )+
  670*pow((0.5*x19/pow((0.5*(sqr(x11)*x12 + sqr(x12)*x11)),0.333333333333333)),
 0.83 )+ 670*pow((0.5*x20/pow((0.5*(sqr(x12)*x13 + sqr(x13)*x12)),
 0.333333333333333)),0.83 )+ 670*pow((0.666666666666667*x21/pow((1250*sqr(x14)),
 0.333333333333333)),0.83 )+ 20*x21 + 670*pow((0.666666666666667*x22/pow((2450*sqr(
 x15)),0.333333333333333)),0.83 )+ 120*x22 + 670*pow((0.4*x23/pow((8712*sqr(x16))
 ,0.333333333333333)),0.83 )+ 120*x23) - 6600*b1 - 6600*b2 - 6600*b3
  - 6600*b4 - 6600*b5 - 6600*b6 - 6600*b7  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
