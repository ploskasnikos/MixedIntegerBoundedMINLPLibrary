#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="autocorr_bern20-05";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20;
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

   fclose(fp);
   res= 64*b1*b2*b3*b4 + 64*b1*b2*b4*b5 + 128*b2*b3*b4*b5 + 64*b2*b3*b5*b6 + 128*
b3*b4*b5*b6 + 64*b3*b4*b6*b7 + 128*b4*b5*b6*b7 + 64*b4*b5*b7*b8 + 128*b5*
b6*b7*b8 + 64*b5*b6*b8*b9 + 128*b6*b7*b8*b9 + 64*b6*b7*b9*b10 + 128*b7*b8*
b9*b10 + 64*b7*b8*b10*b11 + 128*b8*b9*b10*b11 + 64*b8*b9*b11*b12 + 128*b9*
b10*b11*b12 + 64*b9*b10*b12*b13 + 128*b10*b11*b12*b13 + 64*b10*b11*b13*b14
 + 128*b11*b12*b13*b14 + 64*b11*b12*b14*b15 + 128*b12*b13*b14*b15 + 64*b12
*b13*b15*b16 + 128*b13*b14*b15*b16 + 64*b13*b14*b16*b17 + 128*b14*b15*b16*
b17 + 64*b14*b15*b17*b18 + 128*b15*b16*b17*b18 + 64*b15*b16*b18*b19 + 128*
b16*b17*b18*b19 + 64*b16*b17*b19*b20 + 64*b17*b18*b19*b20 - 32*b1*b2*b3 -
 64*b1*b2*b4 - 32*b1*b2*b5 - 32*b1*b3*b4 - 32*b1*b4*b5 - 96*b2*b3*b4 - 96*
b2*b3*b5 - 32*b2*b3*b6 - 96*b2*b4*b5 - 32*b2*b5*b6 - 128*b3*b4*b5 - 96*b3*
b4*b6 - 32*b3*b4*b7 - 96*b3*b5*b6 - 32*b3*b6*b7 - 128*b4*b5*b6 - 96*b4*b5*
b7 - 32*b4*b5*b8 - 96*b4*b6*b7 - 32*b4*b7*b8 - 128*b5*b6*b7 - 96*b5*b6*b8
 - 32*b5*b6*b9 - 96*b5*b7*b8 - 32*b5*b8*b9 - 128*b6*b7*b8 - 96*b6*b7*b9 -
 32*b6*b7*b10 - 96*b6*b8*b9 - 32*b6*b9*b10 - 128*b7*b8*b9 - 96*b7*b8*b10 -
 32*b7*b8*b11 - 96*b7*b9*b10 - 32*b7*b10*b11 - 128*b8*b9*b10 - 96*b8*b9*b11
 - 32*b8*b9*b12 - 96*b8*b10*b11 - 32*b8*b11*b12 - 128*b9*b10*b11 - 96*b9*
b10*b12 - 32*b9*b10*b13 - 96*b9*b11*b12 - 32*b9*b12*b13 - 128*b10*b11*b12
 - 96*b10*b11*b13 - 32*b10*b11*b14 - 96*b10*b12*b13 - 32*b10*b13*b14 - 128
*b11*b12*b13 - 96*b11*b12*b14 - 32*b11*b12*b15 - 96*b11*b13*b14 - 32*b11*
b14*b15 - 128*b12*b13*b14 - 96*b12*b13*b15 - 32*b12*b13*b16 - 96*b12*b14*
b15 - 32*b12*b15*b16 - 128*b13*b14*b15 - 96*b13*b14*b16 - 32*b13*b14*b17
 - 96*b13*b15*b16 - 32*b13*b16*b17 - 128*b14*b15*b16 - 96*b14*b15*b17 - 32
*b14*b15*b18 - 96*b14*b16*b17 - 32*b14*b17*b18 - 128*b15*b16*b17 - 96*b15*
b16*b18 - 32*b15*b16*b19 - 96*b15*b17*b18 - 32*b15*b18*b19 - 128*b16*b17*
b18 - 96*b16*b17*b19 - 32*b16*b17*b20 - 96*b16*b18*b19 - 32*b16*b19*b20 -
 96*b17*b18*b19 - 32*b17*b18*b20 - 64*b17*b19*b20 - 32*b18*b19*b20 + 32*b1*
b2 + 24*b1*b3 + 32*b1*b4 + 24*b1*b5 + 64*b2*b3 + 80*b2*b4 + 64*b2*b5 + 24*
b2*b6 + 96*b3*b4 + 104*b3*b5 + 64*b3*b6 + 24*b3*b7 + 128*b4*b5 + 104*b4*b6
 + 64*b4*b7 + 24*b4*b8 + 128*b5*b6 + 104*b5*b7 + 64*b5*b8 + 24*b5*b9 + 128
*b6*b7 + 104*b6*b8 + 64*b6*b9 + 24*b6*b10 + 128*b7*b8 + 104*b7*b9 + 64*b7*
b10 + 24*b7*b11 + 128*b8*b9 + 104*b8*b10 + 64*b8*b11 + 24*b8*b12 + 128*b9*
b10 + 104*b9*b11 + 64*b9*b12 + 24*b9*b13 + 128*b10*b11 + 104*b10*b12 + 64*
b10*b13 + 24*b10*b14 + 128*b11*b12 + 104*b11*b13 + 64*b11*b14 + 24*b11*b15
 + 128*b12*b13 + 104*b12*b14 + 64*b12*b15 + 24*b12*b16 + 128*b13*b14 + 104
*b13*b15 + 64*b13*b16 + 24*b13*b17 + 128*b14*b15 + 104*b14*b16 + 64*b14*
b17 + 24*b14*b18 + 128*b15*b16 + 104*b15*b17 + 64*b15*b18 + 24*b15*b19 +
 128*b16*b17 + 104*b16*b18 + 64*b16*b19 + 24*b16*b20 + 96*b17*b18 + 80*b17*
b19 + 32*b17*b20 + 64*b18*b19 + 24*b18*b20 + 32*b19*b20 - 24*b1 - 52*b2 -
 76*b3 - 104*b4 - 128*b5 - 128*b6 - 128*b7 - 128*b8 - 128*b9 - 128*b10 -
 128*b11 - 128*b12 - 128*b13 - 128*b14 - 128*b15 - 128*b16 - 104*b17 - 76*
b18 - 52*b19 - 24*b20  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
