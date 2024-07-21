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
   char *problemname="nvs20";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x7,x8,x16,x10,x9,x14,x11,x15,x6,x12,x13,i1,i4,i2,i3,i5;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &i1); 
   fscanf(fp,"%f", &i4); 
   fscanf(fp,"%f", &i2); 
   fscanf(fp,"%f", &i3); 
   fscanf(fp,"%f", &i5); 

   fclose(fp);
   res=-(-(sqr(1 + sqr(i1) + i1) + (1 + sqr(i1) + i1)*(1 + sqr(i4) + i4) + (1 +
 sqr(i1) + i1)*(1 + sqr(x7) + x7) + (1 + sqr(i1) + i1)*(1 + sqr(x8) + x8)
 + (1 + sqr(i1) + i1)*(1 + sqr(x16) + x16) + sqr(1 + sqr(i2) + i2) + (1 +
 sqr(i2) + i2)*(1 + sqr(i3) + i3) + (1 + sqr(i2) + i2)*(1 + sqr(x7) + x7)
 + (1 + sqr(i2) + i2)*(1 + sqr(x10) + x10) + sqr(1 + sqr(i3) + i3) + (1 +
 sqr(i3) + i3)*(1 + sqr(x7) + x7) + (1 + sqr(i3) + i3)*(1 + sqr(x9) + x9)
 + (1 + sqr(i3) + i3)*(1 + sqr(x10) + x10) + (1 + sqr(i3) + i3)*(1 + sqr(
x14) + x14) + sqr(1 + sqr(i4) + i4) + (1 + sqr(i4) + i4)*(1 + sqr(x7) + x7
) + (1 + sqr(i4) + i4)*(1 + sqr(x11) + x11) + (1 + sqr(i4) + i4)*(1 + sqr(
x15) + x15) + sqr(1 + sqr(i5) + i5) + (1 + sqr(i5) + i5)*(1 + sqr(x6) + x6
) + (1 + sqr(i5) + i5)*(1 + sqr(x10) + x10) + (1 + sqr(i5) + i5)*(1 + sqr(
x12) + x12) + (1 + sqr(i5) + i5)*(1 + sqr(x16) + x16) + sqr(1 + sqr(x6) +
 x6) + (1 + sqr(x6) + x6)*(1 + sqr(x8) + x8) + (1 + sqr(x6) + x6)*(1 + sqr(
x15) + x15) + sqr(1 + sqr(x7) + x7) + (1 + sqr(x7) + x7)*(1 + sqr(x11) +
 x11) + (1 + sqr(x7) + x7)*(1 + sqr(x13) + x13) + sqr(1 + sqr(x8) + x8) + (
1 + sqr(x8) + x8)*(1 + sqr(x10) + x10) + (1 + sqr(x8) + x8)*(1 + sqr(x15)
 + x15) + sqr(1 + sqr(x9) + x9) + (1 + sqr(x9) + x9)*(1 + sqr(x12) + x12)
 + (1 + sqr(x9) + x9)*(1 + sqr(x16) + x16) + sqr(1 + sqr(x10) + x10) + (1
 + sqr(x10) + x10)*(1 + sqr(x14) + x14) + sqr(1 + sqr(x11) + x11) + (1 +
 sqr(x11) + x11)*(1 + sqr(x13) + x13) + sqr(1 + sqr(x12) + x12) + (1 + sqr(
x12) + x12)*(1 + sqr(x14) + x14) + sqr(1 + sqr(x13) + x13) + (1 + sqr(x13)
 + x13)*(1 + sqr(x14) + x14) + sqr(1 + sqr(x14) + x14) + sqr(1 + sqr(x15)
 + x15) + sqr(1 + sqr(x16) + x16))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
