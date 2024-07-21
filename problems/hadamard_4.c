#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="hadamard_4";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b6,b11,b16,b12,b15,b8,b10,b4,b5,b14,b7,b3,b9,b13,b2;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b2); 

   fclose(fp);
   res=b1*b6*b11*b16 - b1*b6*b12*b15 + b1*b8*b10*b15 - b4*b5*b10*b15 + b4*b5*b11*
b14 - b1*b8*b11*b14 + b1*b7*b12*b14 - b1*b7*b10*b16 + b3*b5*b10*b16 - b3*
b5*b12*b14 + b3*b8*b9*b14 - b4*b7*b9*b14 + b4*b7*b10*b13 - b3*b8*b10*b13
 + b3*b6*b12*b13 - b3*b6*b9*b16 + b2*b7*b9*b16 - b2*b7*b12*b13 + b2*b8*b11
*b13 - b4*b6*b11*b13 + b4*b6*b9*b15 - b2*b8*b9*b15 + b2*b5*b12*b15 - b2*b5
*b11*b16  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
