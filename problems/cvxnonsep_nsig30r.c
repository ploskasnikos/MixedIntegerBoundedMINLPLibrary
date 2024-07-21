#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cvxnonsep_nsig30r";
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
   res=    1.29*i1 + 0.76*i2 + i3 + 1.62*i4 + 1.07*i5 + 0.7*i6 + 1.88*i7 + 1.75*i8
 + 1.1*i9 + 1.24*i10 + 1.17*i11 + 0.82*i12 + 1.06*i13 + 0.94*i14
 + 0.46*i15 + 1.69*x16 + 0.39*x17 + 0.45*x18 + 0.34*x19 + 0.46*x20
 + 1.86*x21 + 1.46*x22 + 0.98*x23 + 1.16*x24 + 0.47*x25 + 0.92*x26
 + 1.43*x27 + 1.81*x28 + 1.78*x29 + 0.67*x30  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
