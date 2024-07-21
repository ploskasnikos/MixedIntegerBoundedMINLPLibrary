#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="synthes2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x4,x5,x3,x6,b7,b8,b9,b10,b11;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 

   fclose(fp);
   res=-(-(exp(x1) - 10*x1 + exp(0.833333*x2) - 15*x2 - 60*log(1 + x4 + x5) + 15*
 x4 + 5*x5) + 15*x3 + 20*x6 - 5*b7 - 8*b8 - 6*b9 - 10*b10 - 6*b11 
  - 140);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
