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
   char *problemname="nvs02";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i3,i1,i5;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &i3); 
   fscanf(fp,"%f", &i1); 
   fscanf(fp,"%f", &i5); 

   fclose(fp);
   res=-(-9.99999999999999e-5*(5.3578547*sqr(i3) + 0.8356891*i1*i5 + 37.293239*i1)
  - 5.9207859);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
