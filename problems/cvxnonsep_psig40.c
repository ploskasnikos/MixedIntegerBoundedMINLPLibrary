#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cvxnonsep_psig40";
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
   res= 40000*pow(i1,(-0.015))*pow(i2,(-0.37))*pow(i3,(-0.25))*pow(i4,(-0.24))*pow(i5,(-0.45))*pow(i6,(-
0.305))*pow(i7,(-0.31))*pow(i8,(-0.43))*pow(i9,(-0.405))*pow(i10,(-0.29))*pow(i11,(-0.09))*pow(i12
,(-0.12))*pow(i13,(-0.445))*pow(i14,(-0.015))*pow(i15,(-0.245))*pow(i16,(-0.085))*pow(i17,(-
0.49))*pow(i18,(-0.355))*pow(i19,(-0.25))*pow(i20,(-0.235))*pow(x21,(-0.03))*pow(x22,(-0.34))*pow(
x23,(-0.02))*pow(x24,(-0.035))*pow(x25,(-0.26))*pow(x26,(-0.05))*pow(x27,(-0.41))*pow(x28,(-
0.41))*pow(x29,(-0.36))*pow(x30,(-0.075))*pow(x30,(-0.36))*pow(x31,(-0.33))*pow(x32,(-0.26))*pow(
x33,(-0.485))*pow(x34,(-0.325))*pow(x35,(-0.4))*pow(x36,(-0.225))*pow(x37,(-0.215))*pow(x38,(
-0.415))*pow(x39,(-0.04))*pow(x40,(-0.065)) + i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8
 + i9 + i10 + i11 + i12 + i13 + i14 + i15 + i16 + i17 + i18 + i19 + i20 +
 x21 + x22 + x23 + x24 + x25 + x26 + x27 + x28 + x29 + x30 + x31 + x32 +
 x33 + x34 + x35 + x36 + x37 + x38 + x39 + x40  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
