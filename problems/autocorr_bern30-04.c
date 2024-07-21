#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="autocorr_bern30-04";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
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
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 

   fclose(fp);
   res= 64*b1*b2*b3*b4 + 64*b2*b3*b4*b5 + 64*b3*b4*b5*b6 + 64*b4*b5*b6*b7 + 64*b5*
b6*b7*b8 + 64*b6*b7*b8*b9 + 64*b7*b8*b9*b10 + 64*b8*b9*b10*b11 + 64*b9*b10
*b11*b12 + 64*b10*b11*b12*b13 + 64*b11*b12*b13*b14 + 64*b12*b13*b14*b15 +
 64*b13*b14*b15*b16 + 64*b14*b15*b16*b17 + 64*b15*b16*b17*b18 + 64*b16*b17*
b18*b19 + 64*b17*b18*b19*b20 + 64*b18*b19*b20*b21 + 64*b19*b20*b21*b22 +
 64*b20*b21*b22*b23 + 64*b21*b22*b23*b24 + 64*b22*b23*b24*b25 + 64*b23*b24*
b25*b26 + 64*b24*b25*b26*b27 + 64*b25*b26*b27*b28 + 64*b26*b27*b28*b29 +
 64*b27*b28*b29*b30 - 32*b1*b2*b3 - 32*b1*b2*b4 - 32*b1*b3*b4 - 64*b2*b3*b4
 - 32*b2*b3*b5 - 32*b2*b4*b5 - 64*b3*b4*b5 - 32*b3*b4*b6 - 32*b3*b5*b6 -
 64*b4*b5*b6 - 32*b4*b5*b7 - 32*b4*b6*b7 - 64*b5*b6*b7 - 32*b5*b6*b8 - 32*
b5*b7*b8 - 64*b6*b7*b8 - 32*b6*b7*b9 - 32*b6*b8*b9 - 64*b7*b8*b9 - 32*b7*
b8*b10 - 32*b7*b9*b10 - 64*b8*b9*b10 - 32*b8*b9*b11 - 32*b8*b10*b11 - 64*
b9*b10*b11 - 32*b9*b10*b12 - 32*b9*b11*b12 - 64*b10*b11*b12 - 32*b10*b11*
b13 - 32*b10*b12*b13 - 64*b11*b12*b13 - 32*b11*b12*b14 - 32*b11*b13*b14 -
 64*b12*b13*b14 - 32*b12*b13*b15 - 32*b12*b14*b15 - 64*b13*b14*b15 - 32*b13
*b14*b16 - 32*b13*b15*b16 - 64*b14*b15*b16 - 32*b14*b15*b17 - 32*b14*b16*
b17 - 64*b15*b16*b17 - 32*b15*b16*b18 - 32*b15*b17*b18 - 64*b16*b17*b18 -
 32*b16*b17*b19 - 32*b16*b18*b19 - 64*b17*b18*b19 - 32*b17*b18*b20 - 32*b17
*b19*b20 - 64*b18*b19*b20 - 32*b18*b19*b21 - 32*b18*b20*b21 - 64*b19*b20*
b21 - 32*b19*b20*b22 - 32*b19*b21*b22 - 64*b20*b21*b22 - 32*b20*b21*b23 -
 32*b20*b22*b23 - 64*b21*b22*b23 - 32*b21*b22*b24 - 32*b21*b23*b24 - 64*b22
*b23*b24 - 32*b22*b23*b25 - 32*b22*b24*b25 - 64*b23*b24*b25 - 32*b23*b24*
b26 - 32*b23*b25*b26 - 64*b24*b25*b26 - 32*b24*b25*b27 - 32*b24*b26*b27 -
 64*b25*b26*b27 - 32*b25*b26*b28 - 32*b25*b27*b28 - 64*b26*b27*b28 - 32*b26
*b27*b29 - 32*b26*b28*b29 - 64*b27*b28*b29 - 32*b27*b28*b30 - 32*b27*b29*
b30 - 32*b28*b29*b30 + 16*b1*b2 + 24*b1*b3 + 16*b1*b4 + 32*b2*b3 + 48*b2*
b4 + 16*b2*b5 + 48*b3*b4 + 48*b3*b5 + 16*b3*b6 + 48*b4*b5 + 48*b4*b6 + 16*
b4*b7 + 48*b5*b6 + 48*b5*b7 + 16*b5*b8 + 48*b6*b7 + 48*b6*b8 + 16*b6*b9 +
 48*b7*b8 + 48*b7*b9 + 16*b7*b10 + 48*b8*b9 + 48*b8*b10 + 16*b8*b11 + 48*b9
*b10 + 48*b9*b11 + 16*b9*b12 + 48*b10*b11 + 48*b10*b12 + 16*b10*b13 + 48*
b11*b12 + 48*b11*b13 + 16*b11*b14 + 48*b12*b13 + 48*b12*b14 + 16*b12*b15
 + 48*b13*b14 + 48*b13*b15 + 16*b13*b16 + 48*b14*b15 + 48*b14*b16 + 16*b14
*b17 + 48*b15*b16 + 48*b15*b17 + 16*b15*b18 + 48*b16*b17 + 48*b16*b18 + 16
*b16*b19 + 48*b17*b18 + 48*b17*b19 + 16*b17*b20 + 48*b18*b19 + 48*b18*b20
 + 16*b18*b21 + 48*b19*b20 + 48*b19*b21 + 16*b19*b22 + 48*b20*b21 + 48*b20
*b22 + 16*b20*b23 + 48*b21*b22 + 48*b21*b23 + 16*b21*b24 + 48*b22*b23 + 48
*b22*b24 + 16*b22*b25 + 48*b23*b24 + 48*b23*b25 + 16*b23*b26 + 48*b24*b25
 + 48*b24*b26 + 16*b24*b27 + 48*b25*b26 + 48*b25*b27 + 16*b25*b28 + 48*b26
*b27 + 48*b26*b28 + 16*b26*b29 + 48*b27*b28 + 48*b27*b29 + 16*b27*b30 + 32
*b28*b29 + 24*b28*b30 + 16*b29*b30 - 12*b1 - 24*b2 - 36*b3 - 48*b4 - 48*b5
 - 48*b6 - 48*b7 - 48*b8 - 48*b9 - 48*b10 - 48*b11 - 48*b12 - 48*b13 - 48*
b14 - 48*b15 - 48*b16 - 48*b17 - 48*b18 - 48*b19 - 48*b20 - 48*b21 - 48*
b22 - 48*b23 - 48*b24 - 48*b25 - 48*b26 - 48*b27 - 36*b28 - 24*b29 - 12*
b30  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
