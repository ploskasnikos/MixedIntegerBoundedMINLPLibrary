#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cvxnonsep_psig30";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
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

   fclose(fp);
   res= 30000*pow(i1,(-0.48))*pow(i2,(-0.275))*pow(i3,(-0.26))*pow(i4,(-0.215))*pow(i5,(-0.245))*pow(i6,(
-0.31))*pow(i7,(-0.34))*pow(i8,(-0.2))*pow(i9,(-0.185))*pow(i10,(-0.495))*pow(i11,(-0.02))*pow(i12
,(-0.445))*pow(i13,(-0.455))*pow(i14,(-0.4))*pow(i15,(-0.05))*pow(x16,(-0.13))*pow(x17,(-0.17
))*pow(x18,(-0.34))*pow(x19,(-0.07))*pow(x20,(-0.36))*pow(x21,(-0.05))*pow(x22,(-0.325))*pow(x23,(
-0.245))*pow(x24,(-0.39))*pow(x25,(-0.36))*pow(x26,(-0.45))*pow(x27,(-0.445))*pow(x28,(-0.165))
*pow(x29,(-0.35))*pow(x30,(-0.1)) + i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8 + i9 +
 i10 + i11 + i12 + i13 + i14 + i15 + x16 + x17 + x18 + x19 + x20 + x21 +
 x22 + x23 + x24 + x25 + x26 + x27 + x28 + x29 + x30  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
