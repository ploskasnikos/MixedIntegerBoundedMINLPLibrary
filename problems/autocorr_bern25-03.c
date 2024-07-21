#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="autocorr_bern25-03";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b3,b2,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b25); 

   fclose(fp);
   res= 8*b1*b3 - 4*b1 - 8*b3 + 8*b2*b4 - 4*b2 - 8*b4 + 8*b3*b5 - 8*b5 + 8*b4*b6
 - 8*b6 + 8*b5*b7 - 8*b7 + 8*b6*b8 - 8*b8 + 8*b7*b9 - 8*b9 + 8*b8*b10 - 8*
b10 + 8*b9*b11 - 8*b11 + 8*b10*b12 - 8*b12 + 8*b11*b13 - 8*b13 + 8*b12*b14
 - 8*b14 + 8*b13*b15 - 8*b15 + 8*b14*b16 - 8*b16 + 8*b15*b17 - 8*b17 + 8*
b16*b18 - 8*b18 + 8*b17*b19 - 8*b19 + 8*b18*b20 - 8*b20 + 8*b19*b21 - 8*
b21 + 8*b20*b22 - 8*b22 + 8*b21*b23 - 8*b23 + 8*b22*b24 - 4*b24 + 8*b23*
b25 - 4*b25  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
