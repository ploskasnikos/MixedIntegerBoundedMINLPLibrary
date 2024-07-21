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
   char *problemname="nvs15";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2,i3;
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

   fclose(fp);
   res=-(-(2*sqr(i1) - 8*i1 + 2*sqr(i2) - 6*i2 + sqr(i3) - 4*i3 + 2*i1*i2 + 2*i1*i3
)  - 9);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
