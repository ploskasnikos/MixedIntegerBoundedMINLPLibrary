#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cvxnonsep_normcon40r";
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
   res=- 0.64*i1 - 0.38*i2 - 0.19*i3 - 0.43*i4 - 0.48*i5 - 0.12*i6 - 0.59*i7
 - 0.23*i8 - 0.38*i9 - 0.85*i10 - 0.25*i11 - 0.29*i12 - 0.62*i13
 - 0.82*i14 - 0.27*i15 - 0.98*i16 - 0.73*i17 - 0.34*i18 - 0.58*i19
 - 0.11*i20 - 0.91*x21 - 0.88*x22 - 0.82*x23 - 0.26*x24 - 0.02*x25
 - 0.43*x26 - 0.31*x27 - 0.59*x28 - 0.16*x29 - 0.18*x30 - 0.42*x31
 - 0.09*x32 - 0.6*x33 - 0.47*x34 - 0.7*x35 - 0.7*x36 - 0.64*x37 - 0.03*x38
 - 0.07*x39 - 0.32*x40  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
