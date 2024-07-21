#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cvxnonsep_nsig40r";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &i1); 
   fscanf(fp,"%f", &i2); 
   fscanf(fp,"%f", &i3); 
   fscanf(fp,"%f", &i4); 
   fscanf(fp,"%f", &i5); 
   fscanf(fp,"%f", &i6); 
   fscanf(fp,"%f", &i7); 
   fscanf(fp,"%f", &i8); 
   fscanf(fp,"%f", &i9); 
   fscanf(fp,"%f", &i10); 
   fscanf(fp,"%f", &i11); 
   fscanf(fp,"%f", &i12); 
   fscanf(fp,"%f", &i13); 
   fscanf(fp,"%f", &i14); 
   fscanf(fp,"%f", &i15); 
   fscanf(fp,"%f", &i16); 
   fscanf(fp,"%f", &i17); 
   fscanf(fp,"%f", &i18); 
   fscanf(fp,"%f", &i19); 
   fscanf(fp,"%f", &i20); 

   fclose(fp);
   res=    1.1*i1 + 1.86*i2 + 0.86*i3 + 1.23*i4 + 0.72*i5 + 0.47*i6 + 0.98*i7
 + 0.39*i8 + 0.25*i9 + 0.41*i10 + 0.29*i11 + 0.38*i12 + 1.49*i13
 + 1.27*i14 + 0.56*i15 + 1.08*i16 + 1.39*i17 + i18 + 1.37*i19 + 0.89*i20
 + 0.25*x21 + 0.98*x22 + 1.71*x23 + 1.75*x24 + 0.54*x25 + 0.42*x26
 + 1.13*x27 + 1.28*x28 + 0.83*x29 + 0.41*x30 + 1.9*x31 + 0.16*x32
 + 0.21*x33 + 0.28*x34 + 0.33*x35 + 1.24*x36 + 1.15*x37 + 0.1*x38
 + 1.86*x39 + 1.46*x40  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
