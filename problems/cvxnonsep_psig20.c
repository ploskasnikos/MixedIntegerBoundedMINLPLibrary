#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cvxnonsep_psig20";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
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

   fclose(fp);
   res= 20000*pow(i1,(-0.32))*pow(i2,(-0.19))*pow(i3,(-0.405))*pow(i4,(-0.265))*pow(i5,(-0.175))*pow(i6,(
-0.44))*pow(i7,(-0.275))*pow(i8,(-0.47))*pow(i9,(-0.31))*pow(i10,(-0.295))*pow(x11,(-0.105))*pow(
x12,(-0.15))*pow(x13,(-0.235))*pow(x14,(-0.115))*pow(x15,(-0.42))*pow(x16,(-0.095))*pow(x17,(
-0.115))*pow(x18,(-0.085))*pow(x19,(-0.115))*pow(x20,(-0.22)) + i1 + i2 + i3 + i4 + i5
 + i6 + i7 + i8 + i9 + i10 + x11 + x12 + x13 + x14 + x15 + x16 + x17 + x18
 + x19 + x20  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
