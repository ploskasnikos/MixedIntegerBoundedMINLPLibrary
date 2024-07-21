#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="fac2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x19,x20,x21,x22,x23,x24,x37,x38,x39,x40,x41,x42,x7,x8,x9,x10,x11,x12,x25,x26,x27,x28,x29,x30,x43,x44,x45,x46,x47,x48,x13,x14,x15,x16,x17,x18,x31,x32,x33,x34,x35,x36,x49,x50,x51,x52,x53,x54,b64,b65,b66;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b66); 

   fclose(fp);
   res=-(-(276.28*pow((x1 + x2 + x3 + x4 + x5 + x6 + x19 + x20 + x21 + x22 + x23 + x24
 + x37 + x38 + x39 + x40 + x41 + x42),2.5 )+ 792.912*pow((x7 + x8 + x9 + x10
 + x11 + x12 + x25 + x26 + x27 + x28 + x29 + x30 + x43 + x44 + x45 + x46
 + x47 + x48),2.5 )+ 991.679*pow((x13 + x14 + x15 + x16 + x17 + x18 + x31 +
 x32 + x33 + x34 + x35 + x36 + x49 + x50 + x51 + x52 + x53 + x54),2.5 )+
 115.274*x1 + 98.5559*x2 + 142.777*x3 + 33.9886*x4 + 163.087*x5 + 10.4376*
x6 + 234.406*x7 + 142.066*x8 + 50.6436*x9 + 123.61*x10 + 242.356*x11 +
 135.071*x12 + 10.7347*x13 + 56.0272*x14 + 14.912*x15 + 169.218*x16 +
 209.028*x17 + 259.29*x18 + 165.41*x19 + 40.7497*x20 + 124.907*x21 + 18.495
*x22 + 95.2789*x23 + 251.899*x24 + 114.185*x25 + 37.8148*x26 + 10.5547*x27
 + 52.5162*x28 + 37.4727*x29 + 254.843*x30 + 266.645*x31 + 136.583*x32 +
 15.092*x33 + 194.101*x34 + 78.768*x35 + 120.36*x36 + 257.318*x37 + 172.747
*x38 + 142.813*x39 + 251.331*x40 + 15.9113*x41 + 48.8251*x42 + 289.116*x43
 + 129.705*x44 + 275.621*x45 + 20.2235*x46 + 253.789*x47 + 56.7474*x48 +
 201.646*x49 + 164.573*x50 + 295.157*x51 + 151.474*x52 + 221.794*x53 +
 278.304*x54) - 2481400*b64 - 2156460*b65 - 2097730*b66  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
