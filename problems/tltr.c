#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="tltr";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b31,b32,b33,b34,b35,b36,b37,b38,b39;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 

   fclose(fp);
   res=-(- 35*b2 - 35*b3 - 6.53333333333333*b31 - 6.53333333333333*b32
 - 6.7375*b33 - 6.53333333333333*b34 - 6.53333333333333*b35 - 6.7375*b36
 - 6.53333333333333*b37 - 6.53333333333333*b38 - 6.7375*b39  - 0
);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
