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
   char *problemname="nvs06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2;
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

   fclose(fp);
   res=-(-0.1*(sqr(i1) + (1 + sqr(i2))/sqr(i1) + (100 + sqr(i1)*sqr(i2))/pow(i1*
i2,4))  - 1.2);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
