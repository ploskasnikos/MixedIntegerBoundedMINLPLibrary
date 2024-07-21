#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="hmittelman";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b5,b7,b9,b10,b14,b15,b16,b1,b2,b3,b4,b8,b11,b6,b12;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 

   fclose(fp);
   res=-(-(10*b5*b7*b9*b10*b14*b15*b16 + 7*b1*b2*b3*b4*b8*b11 + b3*b4*b6*b7*b8 + 12
*b3*b4*b8*b11 + 8*b6*b7*b8*b12 + 3*b6*b7*b9*b14*b16 + b9*b10*b14*b16 + 5*
b5*b10*b14*b15*b16 + 3*b1*b2*b11*b12)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
