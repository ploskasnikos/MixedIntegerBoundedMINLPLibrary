#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="nvs22";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i3,i4,i1,i2;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &i3); 
   fscanf(fp,"%f", &i4); 
   fscanf(fp,"%f", &i1); 
   fscanf(fp,"%f", &i2); 

   fclose(fp);
   res=-(-(1.10471*pow(i3,2)*i4 + 0.04811*i1*i2*(14 + i4))  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
