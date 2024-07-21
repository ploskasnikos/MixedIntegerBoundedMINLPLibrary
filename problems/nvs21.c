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
   char *problemname="nvs21";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x3,i1,i2;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &i1); 
   fscanf(fp,"%f", &i2); 

   fclose(fp);
   res=-( 0.00201*pow(i1,4)*i2*sqr(x3)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
