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
   char *problemname="nvs09";
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
   res=-(-(sqr(log((-2) + i1)) + sqr(log(10 - i1)) + sqr(log((-2) + i2)) + sqr(log(
10 - i2)) + sqr(log((-2) + i3)) + sqr(log(10 - i3)) + sqr(log((-2) + i4))
 + sqr(log(10 - i4)) + sqr(log((-2) + i5)) + sqr(log(10 - i5)) + sqr(log((
-2) + i6)) + sqr(log(10 - i6)) + sqr(log((-2) + i7)) + sqr(log(10 - i7))
 + sqr(log((-2) + i8)) + sqr(log(10 - i8)) + sqr(log((-2) + i9)) + sqr(
log(10 - i9)) + sqr(log((-2) + i10)) + sqr(log(10 - i10)) - pow((i1*i2*i3*i4*
i5*i6*i7*i8*i9*i10),0.2))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
