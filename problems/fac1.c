#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="fac1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x9,x10,x11,x12,x5,x6,x7,x8,x13,x14,x15,x16,b21,b22;
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
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 

   fclose(fp);
   res=-(-(50*pow((x1 + x2 + x3 + x4 + x9 + x10 + x11 + x12),2.5 )+ 70*pow((x5 + x6 + x7 +
 x8 + x13 + x14 + x15 + x16),2.5 )+ 10*x1 + 15*x2 + 20*x3 + 10*x4 + 5*x5 +
 5*x6 + 30*x7 + 10*x8 + 25*x9 + 20*x10 + 15*x11 + 20*x12 + 30*x13 + 10*x14
 + 10*x15 + 30*x16) - 2000*b21 - 2500*b22  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
