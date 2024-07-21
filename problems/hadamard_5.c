#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="hadamard_5";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b7,b13,b19,b25,b20,b24,b15,b18,b10,b12,b5,b6,b23,b14,b9,b17,b11,b4,b22,b8,b3,b16,b21,b2;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b2); 

   fclose(fp);
   res=b1*b7*b13*b19*b25 - b1*b7*b13*b20*b24 + b1*b7*b15*b18*b24 - b1*b10*b12*b18
*b24 + b5*b6*b12*b18*b24 - b5*b6*b12*b19*b23 + b1*b10*b12*b19*b23 - b1*b7*
b15*b19*b23 + b1*b7*b14*b20*b23 - b1*b7*b14*b18*b25 + b1*b9*b12*b18*b25 -
 b1*b9*b12*b20*b23 + b1*b9*b15*b17*b23 - b1*b10*b14*b17*b23 + b5*b6*b14*b17
*b23 - b5*b9*b11*b17*b23 + b4*b10*b11*b17*b23 - b4*b6*b15*b17*b23 + b4*b6*
b12*b20*b23 - b4*b6*b12*b18*b25 + b4*b6*b13*b17*b25 - b4*b6*b13*b20*b22 +
 b4*b6*b15*b18*b22 - b4*b10*b11*b18*b22 + b5*b9*b11*b18*b22 - b5*b6*b14*b18
*b22 + b1*b10*b14*b18*b22 - b1*b9*b15*b18*b22 + b1*b9*b13*b20*b22 - b1*b9*
b13*b17*b25 + b1*b8*b14*b17*b25 - b1*b8*b14*b20*b22 + b1*b8*b15*b19*b22 -
 b1*b10*b13*b19*b22 + b5*b6*b13*b19*b22 - b5*b6*b13*b17*b24 + b1*b10*b13*
b17*b24 - b1*b8*b15*b17*b24 + b1*b8*b12*b20*b24 - b1*b8*b12*b19*b25 + b3*
b6*b12*b19*b25 - b3*b6*b12*b20*b24 + b3*b6*b15*b17*b24 - b3*b10*b11*b17*
b24 + b5*b8*b11*b17*b24 - b5*b8*b11*b19*b22 + b3*b10*b11*b19*b22 - b3*b6*
b15*b19*b22 + b3*b6*b14*b20*b22 - b3*b6*b14*b17*b25 + b3*b9*b11*b17*b25 -
 b3*b9*b11*b20*b22 + b3*b9*b15*b16*b22 - b3*b10*b14*b16*b22 + b5*b8*b14*b16
*b22 - b5*b9*b13*b16*b22 + b4*b10*b13*b16*b22 - b4*b8*b15*b16*b22 + b4*b8*
b11*b20*b22 - b4*b8*b11*b17*b25 + b4*b8*b12*b16*b25 - b4*b8*b12*b20*b21 +
 b4*b8*b15*b17*b21 - b4*b10*b13*b17*b21 + b5*b9*b13*b17*b21 - b5*b8*b14*b17
*b21 + b3*b10*b14*b17*b21 - b3*b9*b15*b17*b21 + b3*b9*b12*b20*b21 - b3*b9*
b12*b16*b25 + b3*b7*b14*b16*b25 - b3*b7*b14*b20*b21 + b3*b7*b15*b19*b21 -
 b3*b10*b12*b19*b21 + b5*b8*b12*b19*b21 - b5*b8*b12*b16*b24 + b3*b10*b12*
b16*b24 - b3*b7*b15*b16*b24 + b3*b7*b11*b20*b24 - b3*b7*b11*b19*b25 + b2*
b8*b11*b19*b25 - b2*b8*b11*b20*b24 + b2*b8*b15*b16*b24 - b2*b10*b13*b16*
b24 + b5*b7*b13*b16*b24 - b5*b7*b13*b19*b21 + b2*b10*b13*b19*b21 - b2*b8*
b15*b19*b21 + b2*b8*b14*b20*b21 - b2*b8*b14*b16*b25 + b2*b9*b13*b16*b25 -
 b2*b9*b13*b20*b21 + b2*b9*b15*b18*b21 - b2*b10*b14*b18*b21 + b5*b7*b14*b18
*b21 - b5*b9*b12*b18*b21 + b4*b10*b12*b18*b21 - b4*b7*b15*b18*b21 + b4*b7*
b13*b20*b21 - b4*b7*b13*b16*b25 + b4*b7*b11*b18*b25 - b4*b7*b11*b20*b23 +
 b4*b7*b15*b16*b23 - b4*b10*b12*b16*b23 + b5*b9*b12*b16*b23 - b5*b7*b14*b16
*b23 + b2*b10*b14*b16*b23 - b2*b9*b15*b16*b23 + b2*b9*b11*b20*b23 - b2*b9*
b11*b18*b25 + b2*b6*b14*b18*b25 - b2*b6*b14*b20*b23 + b2*b6*b15*b19*b23 -
 b2*b10*b11*b19*b23 + b5*b7*b11*b19*b23 - b5*b7*b11*b18*b24 + b2*b10*b11*
b18*b24 - b2*b6*b15*b18*b24 + b2*b6*b13*b20*b24 - b2*b6*b13*b19*b25
  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
