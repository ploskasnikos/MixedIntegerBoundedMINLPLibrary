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
   char *problemname="nvs12";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2,i3,i4;
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

   fclose(fp);
   res=-(-(7*sqr(i1) + 6*sqr(i2) - 20*i1 - 93.2*i2 + 8*sqr(i3) - 6*i3*i1 + 4*i3*i2
 - 67.2*i3 + 6*sqr(i4) + 2*i4*i1 + 2*i4*i3 - 36.6*i4)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
