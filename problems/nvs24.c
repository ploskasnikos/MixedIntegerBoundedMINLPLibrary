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
   char *problemname="nvs24";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &i1); 
   fscanf(fp,"%f", &i2); 
   fscanf(fp,"%f", &i3); 
   fscanf(fp,"%f", &i4); 
   fscanf(fp,"%f", &i5); 
   fscanf(fp,"%f", &i6); 
   fscanf(fp,"%f", &i7); 
   fscanf(fp,"%f", &i8); 
   fscanf(fp,"%f", &i9); 
   fscanf(fp,"%f", &i10); 

   fclose(fp);
   res=-(-(7*sqr(i1) + 6*sqr(i2) + 37.6*i1 + 19.6*i2 + 8*sqr(i3) - 6*i3*i1 + 4*i3*
 i2 - 5.6*i3 + 6*sqr(i4) + 2*i4*i1 + 2*i4*i3 - 26*i4 + 7*sqr(i5) - 4*i5*i1
  - 2*i5*i2 - 6*i5*i3 - 125*i5 + 4*sqr(i6) + 2*i6*i1 - 4*i6*i2 - 4*i6*i3
  - 2*i6*i4 + 6*i6*i5 - 79.6*i6 + 6*sqr(i7) - 2*i7*i1 - 6*i7*i2 - 2*i7*i3
  + 4*i7*i5 + 4*i7*i6 - 104.2*i7 + 7*sqr(i8) - 4*i8*i1 - 2*i8*i2 + 6*i8*i3
  + 4*i8*i4 - 4*i8*i5 - 2*i8*i6 + 4*i8*i7 - 4.6*i8 + 8*sqr(i9) - 2*i9*i1
  - 4*i9*i2 + 4*i9*i3 + 4*i9*i4 - 4*i9*i5 - 4*i9*i6 + 8*i9*i7 + 4*i9*i8 -
  22.8*i9 + 6*sqr(i10) - 4*i10*i1 - 6*i10*i2 + 2*i10*i3 - 4*i10*i4 + 2*i10*
 i5 + 2*i10*i6 - 2*i10*i7 - 4*i10*i8 - 2*i10*i9 + 9*i10)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
