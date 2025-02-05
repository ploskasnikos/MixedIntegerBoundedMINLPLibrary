#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="autocorr_bern30-08";
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
   res= 64*b1*b2*b3*b4 + 64*b1*b2*b4*b5 + 64*b1*b2*b5*b6 + 64*b1*b2*b6*b7 + 64*b1*
b2*b7*b8 + 64*b1*b3*b4*b6 + 64*b1*b3*b5*b7 + 64*b1*b3*b6*b8 + 64*b1*b4*b5*
b8 + 128*b2*b3*b4*b5 + 128*b2*b3*b5*b6 + 128*b2*b3*b6*b7 + 128*b2*b3*b7*b8
 + 64*b2*b3*b8*b9 + 128*b2*b4*b5*b7 + 128*b2*b4*b6*b8 + 64*b2*b4*b7*b9 +
 64*b2*b5*b6*b9 + 192*b3*b4*b5*b6 + 192*b3*b4*b6*b7 + 192*b3*b4*b7*b8 + 128
*b3*b4*b8*b9 + 64*b3*b4*b9*b10 + 192*b3*b5*b6*b8 + 128*b3*b5*b7*b9 + 64*b3
*b5*b8*b10 + 64*b3*b6*b7*b10 + 256*b4*b5*b6*b7 + 256*b4*b5*b7*b8 + 192*b4*
b5*b8*b9 + 128*b4*b5*b9*b10 + 64*b4*b5*b10*b11 + 192*b4*b6*b7*b9 + 128*b4*
b6*b8*b10 + 64*b4*b6*b9*b11 + 64*b4*b7*b8*b11 + 320*b5*b6*b7*b8 + 256*b5*
b6*b8*b9 + 192*b5*b6*b9*b10 + 128*b5*b6*b10*b11 + 64*b5*b6*b11*b12 + 192*
b5*b7*b8*b10 + 128*b5*b7*b9*b11 + 64*b5*b7*b10*b12 + 64*b5*b8*b9*b12 + 320
*b6*b7*b8*b9 + 256*b6*b7*b9*b10 + 192*b6*b7*b10*b11 + 128*b6*b7*b11*b12 +
 64*b6*b7*b12*b13 + 192*b6*b8*b9*b11 + 128*b6*b8*b10*b12 + 64*b6*b8*b11*b13
 + 64*b6*b9*b10*b13 + 320*b7*b8*b9*b10 + 256*b7*b8*b10*b11 + 192*b7*b8*b11
*b12 + 128*b7*b8*b12*b13 + 64*b7*b8*b13*b14 + 192*b7*b9*b10*b12 + 128*b7*
b9*b11*b13 + 64*b7*b9*b12*b14 + 64*b7*b10*b11*b14 + 320*b8*b9*b10*b11 +
 256*b8*b9*b11*b12 + 192*b8*b9*b12*b13 + 128*b8*b9*b13*b14 + 64*b8*b9*b14*
b15 + 192*b8*b10*b11*b13 + 128*b8*b10*b12*b14 + 64*b8*b10*b13*b15 + 64*b8*
b11*b12*b15 + 320*b9*b10*b11*b12 + 256*b9*b10*b12*b13 + 192*b9*b10*b13*b14
 + 128*b9*b10*b14*b15 + 64*b9*b10*b15*b16 + 192*b9*b11*b12*b14 + 128*b9*
b11*b13*b15 + 64*b9*b11*b14*b16 + 64*b9*b12*b13*b16 + 320*b10*b11*b12*b13
 + 256*b10*b11*b13*b14 + 192*b10*b11*b14*b15 + 128*b10*b11*b15*b16 + 64*
b10*b11*b16*b17 + 192*b10*b12*b13*b15 + 128*b10*b12*b14*b16 + 64*b10*b12*
b15*b17 + 64*b10*b13*b14*b17 + 320*b11*b12*b13*b14 + 256*b11*b12*b14*b15
 + 192*b11*b12*b15*b16 + 128*b11*b12*b16*b17 + 64*b11*b12*b17*b18 + 192*
b11*b13*b14*b16 + 128*b11*b13*b15*b17 + 64*b11*b13*b16*b18 + 64*b11*b14*
b15*b18 + 320*b12*b13*b14*b15 + 256*b12*b13*b15*b16 + 192*b12*b13*b16*b17
 + 128*b12*b13*b17*b18 + 64*b12*b13*b18*b19 + 192*b12*b14*b15*b17 + 128*
b12*b14*b16*b18 + 64*b12*b14*b17*b19 + 64*b12*b15*b16*b19 + 320*b13*b14*
b15*b16 + 256*b13*b14*b16*b17 + 192*b13*b14*b17*b18 + 128*b13*b14*b18*b19
 + 64*b13*b14*b19*b20 + 192*b13*b15*b16*b18 + 128*b13*b15*b17*b19 + 64*b13
*b15*b18*b20 + 64*b13*b16*b17*b20 + 320*b14*b15*b16*b17 + 256*b14*b15*b17*
b18 + 192*b14*b15*b18*b19 + 128*b14*b15*b19*b20 + 64*b14*b15*b20*b21 + 192
*b14*b16*b17*b19 + 128*b14*b16*b18*b20 + 64*b14*b16*b19*b21 + 64*b14*b17*
b18*b21 + 320*b15*b16*b17*b18 + 256*b15*b16*b18*b19 + 192*b15*b16*b19*b20
 + 128*b15*b16*b20*b21 + 64*b15*b16*b21*b22 + 192*b15*b17*b18*b20 + 128*
b15*b17*b19*b21 + 64*b15*b17*b20*b22 + 64*b15*b18*b19*b22 + 320*b16*b17*
b18*b19 + 256*b16*b17*b19*b20 + 192*b16*b17*b20*b21 + 128*b16*b17*b21*b22
 + 64*b16*b17*b22*b23 + 192*b16*b18*b19*b21 + 128*b16*b18*b20*b22 + 64*b16
*b18*b21*b23 + 64*b16*b19*b20*b23 + 320*b17*b18*b19*b20 + 256*b17*b18*b20*
b21 + 192*b17*b18*b21*b22 + 128*b17*b18*b22*b23 + 64*b17*b18*b23*b24 + 192
*b17*b19*b20*b22 + 128*b17*b19*b21*b23 + 64*b17*b19*b22*b24 + 64*b17*b20*
b21*b24 + 320*b18*b19*b20*b21 + 256*b18*b19*b21*b22 + 192*b18*b19*b22*b23
 + 128*b18*b19*b23*b24 + 64*b18*b19*b24*b25 + 192*b18*b20*b21*b23 + 128*
b18*b20*b22*b24 + 64*b18*b20*b23*b25 + 64*b18*b21*b22*b25 + 320*b19*b20*
b21*b22 + 256*b19*b20*b22*b23 + 192*b19*b20*b23*b24 + 128*b19*b20*b24*b25
 + 64*b19*b20*b25*b26 + 192*b19*b21*b22*b24 + 128*b19*b21*b23*b25 + 64*b19
*b21*b24*b26 + 64*b19*b22*b23*b26 + 320*b20*b21*b22*b23 + 256*b20*b21*b23*
b24 + 192*b20*b21*b24*b25 + 128*b20*b21*b25*b26 + 64*b20*b21*b26*b27 + 192
*b20*b22*b23*b25 + 128*b20*b22*b24*b26 + 64*b20*b22*b25*b27 + 64*b20*b23*
b24*b27 + 320*b21*b22*b23*b24 + 256*b21*b22*b24*b25 + 192*b21*b22*b25*b26
 + 128*b21*b22*b26*b27 + 64*b21*b22*b27*b28 + 192*b21*b23*b24*b26 + 128*
b21*b23*b25*b27 + 64*b21*b23*b26*b28 + 64*b21*b24*b25*b28 + 320*b22*b23*
b24*b25 + 256*b22*b23*b25*b26 + 192*b22*b23*b26*b27 + 128*b22*b23*b27*b28
 + 64*b22*b23*b28*b29 + 192*b22*b24*b25*b27 + 128*b22*b24*b26*b28 + 64*b22
*b24*b27*b29 + 64*b22*b25*b26*b29 + 320*b23*b24*b25*b26 + 256*b23*b24*b26*
b27 + 192*b23*b24*b27*b28 + 128*b23*b24*b28*b29 + 64*b23*b24*b29*b30 + 192
*b23*b25*b26*b28 + 128*b23*b25*b27*b29 + 64*b23*b25*b28*b30 + 64*b23*b26*
b27*b30 + 256*b24*b25*b26*b27 + 192*b24*b25*b27*b28 + 128*b24*b25*b28*b29
 + 64*b24*b25*b29*b30 + 128*b24*b26*b27*b29 + 64*b24*b26*b28*b30 + 192*b25
*b26*b27*b28 + 128*b25*b26*b28*b29 + 64*b25*b26*b29*b30 + 64*b25*b27*b28*
b30 + 128*b26*b27*b28*b29 + 64*b26*b27*b29*b30 + 64*b27*b28*b29*b30 - 32*
b1*b2*b3 - 64*b1*b2*b4 - 64*b1*b2*b5 - 64*b1*b2*b6 - 64*b1*b2*b7 - 32*b1*
b2*b8 - 64*b1*b3*b4 - 32*b1*b3*b5 - 64*b1*b3*b6 - 32*b1*b3*b7 - 32*b1*b3*
b8 - 64*b1*b4*b5 - 32*b1*b4*b6 - 32*b1*b4*b8 - 32*b1*b5*b6 - 32*b1*b5*b7
 - 32*b1*b5*b8 - 32*b1*b6*b7 - 32*b1*b6*b8 - 32*b1*b7*b8 - 96*b2*b3*b4 -
 128*b2*b3*b5 - 128*b2*b3*b6 - 128*b2*b3*b7 - 96*b2*b3*b8 - 32*b2*b3*b9 -
 160*b2*b4*b5 - 64*b2*b4*b6 - 96*b2*b4*b7 - 64*b2*b4*b8 - 32*b2*b4*b9 - 128
*b2*b5*b6 - 64*b2*b5*b7 - 32*b2*b5*b9 - 96*b2*b6*b7 - 64*b2*b6*b8 - 32*b2*
b6*b9 - 96*b2*b7*b8 - 32*b2*b7*b9 - 32*b2*b8*b9 - 160*b3*b4*b5 - 224*b3*b4
*b6 - 192*b3*b4*b7 - 160*b3*b4*b8 - 96*b3*b4*b9 - 32*b3*b4*b10 - 256*b3*b5
*b6 - 96*b3*b5*b7 - 128*b3*b5*b8 - 64*b3*b5*b9 - 32*b3*b5*b10 - 192*b3*b6*
b7 - 128*b3*b6*b8 - 32*b3*b6*b10 - 160*b3*b7*b8 - 64*b3*b7*b9 - 32*b3*b7*
b10 - 96*b3*b8*b9 - 32*b3*b8*b10 - 32*b3*b9*b10 - 224*b4*b5*b6 - 320*b4*b5
*b7 - 256*b4*b5*b8 - 160*b4*b5*b9 - 96*b4*b5*b10 - 32*b4*b5*b11 - 320*b4*
b6*b7 - 128*b4*b6*b8 - 128*b4*b6*b9 - 64*b4*b6*b10 - 32*b4*b6*b11 - 256*b4
*b7*b8 - 128*b4*b7*b9 - 32*b4*b7*b11 - 160*b4*b8*b9 - 64*b4*b8*b10 - 32*b4
*b8*b11 - 96*b4*b9*b10 - 32*b4*b9*b11 - 32*b4*b10*b11 - 288*b5*b6*b7 - 384
*b5*b6*b8 - 256*b5*b6*b9 - 160*b5*b6*b10 - 96*b5*b6*b11 - 32*b5*b6*b12 -
 384*b5*b7*b8 - 128*b5*b7*b9 - 128*b5*b7*b10 - 64*b5*b7*b11 - 32*b5*b7*b12
 - 256*b5*b8*b9 - 128*b5*b8*b10 - 32*b5*b8*b12 - 160*b5*b9*b10 - 64*b5*b9*
b11 - 32*b5*b9*b12 - 96*b5*b10*b11 - 32*b5*b10*b12 - 32*b5*b11*b12 - 320*
b6*b7*b8 - 384*b6*b7*b9 - 256*b6*b7*b10 - 160*b6*b7*b11 - 96*b6*b7*b12 -
 32*b6*b7*b13 - 384*b6*b8*b9 - 128*b6*b8*b10 - 128*b6*b8*b11 - 64*b6*b8*b12
 - 32*b6*b8*b13 - 256*b6*b9*b10 - 128*b6*b9*b11 - 32*b6*b9*b13 - 160*b6*
b10*b11 - 64*b6*b10*b12 - 32*b6*b10*b13 - 96*b6*b11*b12 - 32*b6*b11*b13 -
 32*b6*b12*b13 - 320*b7*b8*b9 - 384*b7*b8*b10 - 256*b7*b8*b11 - 160*b7*b8*
b12 - 96*b7*b8*b13 - 32*b7*b8*b14 - 384*b7*b9*b10 - 128*b7*b9*b11 - 128*b7
*b9*b12 - 64*b7*b9*b13 - 32*b7*b9*b14 - 256*b7*b10*b11 - 128*b7*b10*b12 -
 32*b7*b10*b14 - 160*b7*b11*b12 - 64*b7*b11*b13 - 32*b7*b11*b14 - 96*b7*b12
*b13 - 32*b7*b12*b14 - 32*b7*b13*b14 - 320*b8*b9*b10 - 384*b8*b9*b11 - 256
*b8*b9*b12 - 160*b8*b9*b13 - 96*b8*b9*b14 - 32*b8*b9*b15 - 384*b8*b10*b11
 - 128*b8*b10*b12 - 128*b8*b10*b13 - 64*b8*b10*b14 - 32*b8*b10*b15 - 256*
b8*b11*b12 - 128*b8*b11*b13 - 32*b8*b11*b15 - 160*b8*b12*b13 - 64*b8*b12*
b14 - 32*b8*b12*b15 - 96*b8*b13*b14 - 32*b8*b13*b15 - 32*b8*b14*b15 - 320*
b9*b10*b11 - 384*b9*b10*b12 - 256*b9*b10*b13 - 160*b9*b10*b14 - 96*b9*b10*
b15 - 32*b9*b10*b16 - 384*b9*b11*b12 - 128*b9*b11*b13 - 128*b9*b11*b14 -
 64*b9*b11*b15 - 32*b9*b11*b16 - 256*b9*b12*b13 - 128*b9*b12*b14 - 32*b9*
b12*b16 - 160*b9*b13*b14 - 64*b9*b13*b15 - 32*b9*b13*b16 - 96*b9*b14*b15
 - 32*b9*b14*b16 - 32*b9*b15*b16 - 320*b10*b11*b12 - 384*b10*b11*b13 - 256
*b10*b11*b14 - 160*b10*b11*b15 - 96*b10*b11*b16 - 32*b10*b11*b17 - 384*b10
*b12*b13 - 128*b10*b12*b14 - 128*b10*b12*b15 - 64*b10*b12*b16 - 32*b10*b12
*b17 - 256*b10*b13*b14 - 128*b10*b13*b15 - 32*b10*b13*b17 - 160*b10*b14*
b15 - 64*b10*b14*b16 - 32*b10*b14*b17 - 96*b10*b15*b16 - 32*b10*b15*b17 -
 32*b10*b16*b17 - 320*b11*b12*b13 - 384*b11*b12*b14 - 256*b11*b12*b15 - 160
*b11*b12*b16 - 96*b11*b12*b17 - 32*b11*b12*b18 - 384*b11*b13*b14 - 128*b11
*b13*b15 - 128*b11*b13*b16 - 64*b11*b13*b17 - 32*b11*b13*b18 - 256*b11*b14
*b15 - 128*b11*b14*b16 - 32*b11*b14*b18 - 160*b11*b15*b16 - 64*b11*b15*b17
 - 32*b11*b15*b18 - 96*b11*b16*b17 - 32*b11*b16*b18 - 32*b11*b17*b18 - 320
*b12*b13*b14 - 384*b12*b13*b15 - 256*b12*b13*b16 - 160*b12*b13*b17 - 96*
b12*b13*b18 - 32*b12*b13*b19 - 384*b12*b14*b15 - 128*b12*b14*b16 - 128*b12
*b14*b17 - 64*b12*b14*b18 - 32*b12*b14*b19 - 256*b12*b15*b16 - 128*b12*b15
*b17 - 32*b12*b15*b19 - 160*b12*b16*b17 - 64*b12*b16*b18 - 32*b12*b16*b19
 - 96*b12*b17*b18 - 32*b12*b17*b19 - 32*b12*b18*b19 - 320*b13*b14*b15 -
 384*b13*b14*b16 - 256*b13*b14*b17 - 160*b13*b14*b18 - 96*b13*b14*b19 - 32*
b13*b14*b20 - 384*b13*b15*b16 - 128*b13*b15*b17 - 128*b13*b15*b18 - 64*b13
*b15*b19 - 32*b13*b15*b20 - 256*b13*b16*b17 - 128*b13*b16*b18 - 32*b13*b16
*b20 - 160*b13*b17*b18 - 64*b13*b17*b19 - 32*b13*b17*b20 - 96*b13*b18*b19
 - 32*b13*b18*b20 - 32*b13*b19*b20 - 320*b14*b15*b16 - 384*b14*b15*b17 -
 256*b14*b15*b18 - 160*b14*b15*b19 - 96*b14*b15*b20 - 32*b14*b15*b21 - 384*
b14*b16*b17 - 128*b14*b16*b18 - 128*b14*b16*b19 - 64*b14*b16*b20 - 32*b14*
b16*b21 - 256*b14*b17*b18 - 128*b14*b17*b19 - 32*b14*b17*b21 - 160*b14*b18
*b19 - 64*b14*b18*b20 - 32*b14*b18*b21 - 96*b14*b19*b20 - 32*b14*b19*b21
 - 32*b14*b20*b21 - 320*b15*b16*b17 - 384*b15*b16*b18 - 256*b15*b16*b19 -
 160*b15*b16*b20 - 96*b15*b16*b21 - 32*b15*b16*b22 - 384*b15*b17*b18 - 128*
b15*b17*b19 - 128*b15*b17*b20 - 64*b15*b17*b21 - 32*b15*b17*b22 - 256*b15*
b18*b19 - 128*b15*b18*b20 - 32*b15*b18*b22 - 160*b15*b19*b20 - 64*b15*b19*
b21 - 32*b15*b19*b22 - 96*b15*b20*b21 - 32*b15*b20*b22 - 32*b15*b21*b22 -
 320*b16*b17*b18 - 384*b16*b17*b19 - 256*b16*b17*b20 - 160*b16*b17*b21 - 96
*b16*b17*b22 - 32*b16*b17*b23 - 384*b16*b18*b19 - 128*b16*b18*b20 - 128*
b16*b18*b21 - 64*b16*b18*b22 - 32*b16*b18*b23 - 256*b16*b19*b20 - 128*b16*
b19*b21 - 32*b16*b19*b23 - 160*b16*b20*b21 - 64*b16*b20*b22 - 32*b16*b20*
b23 - 96*b16*b21*b22 - 32*b16*b21*b23 - 32*b16*b22*b23 - 320*b17*b18*b19
 - 384*b17*b18*b20 - 256*b17*b18*b21 - 160*b17*b18*b22 - 96*b17*b18*b23 -
 32*b17*b18*b24 - 384*b17*b19*b20 - 128*b17*b19*b21 - 128*b17*b19*b22 - 64*
b17*b19*b23 - 32*b17*b19*b24 - 256*b17*b20*b21 - 128*b17*b20*b22 - 32*b17*
b20*b24 - 160*b17*b21*b22 - 64*b17*b21*b23 - 32*b17*b21*b24 - 96*b17*b22*
b23 - 32*b17*b22*b24 - 32*b17*b23*b24 - 320*b18*b19*b20 - 384*b18*b19*b21
 - 256*b18*b19*b22 - 160*b18*b19*b23 - 96*b18*b19*b24 - 32*b18*b19*b25 -
 384*b18*b20*b21 - 128*b18*b20*b22 - 128*b18*b20*b23 - 64*b18*b20*b24 - 32*
b18*b20*b25 - 256*b18*b21*b22 - 128*b18*b21*b23 - 32*b18*b21*b25 - 160*b18
*b22*b23 - 64*b18*b22*b24 - 32*b18*b22*b25 - 96*b18*b23*b24 - 32*b18*b23*
b25 - 32*b18*b24*b25 - 320*b19*b20*b21 - 384*b19*b20*b22 - 256*b19*b20*b23
 - 160*b19*b20*b24 - 96*b19*b20*b25 - 32*b19*b20*b26 - 384*b19*b21*b22 -
 128*b19*b21*b23 - 128*b19*b21*b24 - 64*b19*b21*b25 - 32*b19*b21*b26 - 256*
b19*b22*b23 - 128*b19*b22*b24 - 32*b19*b22*b26 - 160*b19*b23*b24 - 64*b19*
b23*b25 - 32*b19*b23*b26 - 96*b19*b24*b25 - 32*b19*b24*b26 - 32*b19*b25*
b26 - 320*b20*b21*b22 - 384*b20*b21*b23 - 256*b20*b21*b24 - 160*b20*b21*
b25 - 96*b20*b21*b26 - 32*b20*b21*b27 - 384*b20*b22*b23 - 128*b20*b22*b24
 - 128*b20*b22*b25 - 64*b20*b22*b26 - 32*b20*b22*b27 - 256*b20*b23*b24 -
 128*b20*b23*b25 - 32*b20*b23*b27 - 160*b20*b24*b25 - 64*b20*b24*b26 - 32*
b20*b24*b27 - 96*b20*b25*b26 - 32*b20*b25*b27 - 32*b20*b26*b27 - 320*b21*
b22*b23 - 384*b21*b22*b24 - 256*b21*b22*b25 - 160*b21*b22*b26 - 96*b21*b22
*b27 - 32*b21*b22*b28 - 384*b21*b23*b24 - 128*b21*b23*b25 - 128*b21*b23*
b26 - 64*b21*b23*b27 - 32*b21*b23*b28 - 256*b21*b24*b25 - 128*b21*b24*b26
 - 32*b21*b24*b28 - 160*b21*b25*b26 - 64*b21*b25*b27 - 32*b21*b25*b28 - 96
*b21*b26*b27 - 32*b21*b26*b28 - 32*b21*b27*b28 - 320*b22*b23*b24 - 384*b22
*b23*b25 - 256*b22*b23*b26 - 160*b22*b23*b27 - 96*b22*b23*b28 - 32*b22*b23
*b29 - 384*b22*b24*b25 - 128*b22*b24*b26 - 128*b22*b24*b27 - 64*b22*b24*
b28 - 32*b22*b24*b29 - 256*b22*b25*b26 - 128*b22*b25*b27 - 32*b22*b25*b29
 - 160*b22*b26*b27 - 64*b22*b26*b28 - 32*b22*b26*b29 - 96*b22*b27*b28 - 32
*b22*b27*b29 - 32*b22*b28*b29 - 320*b23*b24*b25 - 384*b23*b24*b26 - 256*
b23*b24*b27 - 160*b23*b24*b28 - 96*b23*b24*b29 - 32*b23*b24*b30 - 384*b23*
b25*b26 - 128*b23*b25*b27 - 128*b23*b25*b28 - 64*b23*b25*b29 - 32*b23*b25*
b30 - 256*b23*b26*b27 - 128*b23*b26*b28 - 32*b23*b26*b30 - 160*b23*b27*b28
 - 64*b23*b27*b29 - 32*b23*b27*b30 - 96*b23*b28*b29 - 32*b23*b28*b30 - 32*
b23*b29*b30 - 288*b24*b25*b26 - 320*b24*b25*b27 - 192*b24*b25*b28 - 96*b24
*b25*b29 - 32*b24*b25*b30 - 320*b24*b26*b27 - 96*b24*b26*b28 - 64*b24*b26*
b29 - 32*b24*b26*b30 - 192*b24*b27*b28 - 96*b24*b27*b29 - 128*b24*b28*b29
 - 32*b24*b28*b30 - 64*b24*b29*b30 - 224*b25*b26*b27 - 256*b25*b26*b28 -
 128*b25*b26*b29 - 32*b25*b26*b30 - 224*b25*b27*b28 - 64*b25*b27*b29 - 32*
b25*b27*b30 - 128*b25*b28*b29 - 64*b25*b28*b30 - 64*b25*b29*b30 - 160*b26*
b27*b28 - 160*b26*b27*b29 - 64*b26*b27*b30 - 128*b26*b28*b29 - 32*b26*b28*
b30 - 64*b26*b29*b30 - 96*b27*b28*b29 - 64*b27*b28*b30 - 64*b27*b29*b30 -
 32*b28*b29*b30 + 80*b1*b2 + 72*b1*b3 + 64*b1*b4 + 72*b1*b5 + 64*b1*b6 + 56
*b1*b7 + 48*b1*b8 + 160*b2*b3 + 160*b2*b4 + 144*b2*b5 + 160*b2*b6 + 144*b2
*b7 + 112*b2*b8 + 48*b2*b9 + 256*b3*b4 + 248*b3*b5 + 256*b3*b6 + 248*b3*b7
 + 208*b3*b8 + 112*b3*b9 + 48*b3*b10 + 368*b4*b5 + 336*b4*b6 + 336*b4*b7
 + 320*b4*b8 + 208*b4*b9 + 112*b4*b10 + 48*b4*b11 + 464*b5*b6 + 424*b5*b7
 + 400*b5*b8 + 320*b5*b9 + 208*b5*b10 + 112*b5*b11 + 48*b5*b12 + 544*b6*b7
 + 496*b6*b8 + 400*b6*b9 + 320*b6*b10 + 208*b6*b11 + 112*b6*b12 + 48*b6*
b13 + 624*b7*b8 + 496*b7*b9 + 400*b7*b10 + 320*b7*b11 + 208*b7*b12 + 112*
b7*b13 + 48*b7*b14 + 624*b8*b9 + 496*b8*b10 + 400*b8*b11 + 320*b8*b12 +
 208*b8*b13 + 112*b8*b14 + 48*b8*b15 + 624*b9*b10 + 496*b9*b11 + 400*b9*b12
 + 320*b9*b13 + 208*b9*b14 + 112*b9*b15 + 48*b9*b16 + 624*b10*b11 + 496*
b10*b12 + 400*b10*b13 + 320*b10*b14 + 208*b10*b15 + 112*b10*b16 + 48*b10*
b17 + 624*b11*b12 + 496*b11*b13 + 400*b11*b14 + 320*b11*b15 + 208*b11*b16
 + 112*b11*b17 + 48*b11*b18 + 624*b12*b13 + 496*b12*b14 + 400*b12*b15 +
 320*b12*b16 + 208*b12*b17 + 112*b12*b18 + 48*b12*b19 + 624*b13*b14 + 496*
b13*b15 + 400*b13*b16 + 320*b13*b17 + 208*b13*b18 + 112*b13*b19 + 48*b13*
b20 + 624*b14*b15 + 496*b14*b16 + 400*b14*b17 + 320*b14*b18 + 208*b14*b19
 + 112*b14*b20 + 48*b14*b21 + 624*b15*b16 + 496*b15*b17 + 400*b15*b18 +
 320*b15*b19 + 208*b15*b20 + 112*b15*b21 + 48*b15*b22 + 624*b16*b17 + 496*
b16*b18 + 400*b16*b19 + 320*b16*b20 + 208*b16*b21 + 112*b16*b22 + 48*b16*
b23 + 624*b17*b18 + 496*b17*b19 + 400*b17*b20 + 320*b17*b21 + 208*b17*b22
 + 112*b17*b23 + 48*b17*b24 + 624*b18*b19 + 496*b18*b20 + 400*b18*b21 +
 320*b18*b22 + 208*b18*b23 + 112*b18*b24 + 48*b18*b25 + 624*b19*b20 + 496*
b19*b21 + 400*b19*b22 + 320*b19*b23 + 208*b19*b24 + 112*b19*b25 + 48*b19*
b26 + 624*b20*b21 + 496*b20*b22 + 400*b20*b23 + 320*b20*b24 + 208*b20*b25
 + 112*b20*b26 + 48*b20*b27 + 624*b21*b22 + 496*b21*b23 + 400*b21*b24 +
 320*b21*b25 + 208*b21*b26 + 112*b21*b27 + 48*b21*b28 + 624*b22*b23 + 496*
b22*b24 + 400*b22*b25 + 320*b22*b26 + 208*b22*b27 + 112*b22*b28 + 48*b22*
b29 + 624*b23*b24 + 496*b23*b25 + 400*b23*b26 + 320*b23*b27 + 208*b23*b28
 + 112*b23*b29 + 48*b23*b30 + 544*b24*b25 + 424*b24*b26 + 336*b24*b27 +
 248*b24*b28 + 144*b24*b29 + 56*b24*b30 + 464*b25*b26 + 336*b25*b27 + 256*
b25*b28 + 160*b25*b29 + 64*b25*b30 + 368*b26*b27 + 248*b26*b28 + 144*b26*
b29 + 72*b26*b30 + 256*b27*b28 + 160*b27*b29 + 64*b27*b30 + 160*b28*b29 +
 72*b28*b30 + 80*b29*b30 - 84*b1 - 184*b2 - 292*b3 - 400*b4 - 508*b5 - 616*
b6 - 716*b7 - 800*b8 - 800*b9 - 800*b10 - 800*b11 - 800*b12 - 800*b13 -
 800*b14 - 800*b15 - 800*b16 - 800*b17 - 800*b18 - 800*b19 - 800*b20 - 800*
b21 - 800*b22 - 800*b23 - 716*b24 - 616*b25 - 508*b26 - 400*b27 - 292*b28
 - 184*b29 - 84*b30  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
