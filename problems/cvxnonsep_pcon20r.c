#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="cvxnonsep_pcon20r";
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
   res=-(    0.53*i1 + 0.65*i2 + 0.49*i3 + 0.82*i4 + 0.88*i5 + 0.97*i6 + 0.53*i7
 + 0.33*i8 + 0.11*i9 + 0.61*i10 + 0.78*x11 + 0.09*x12 + 0.27*x13
 + 0.15*x14 + 0.28*x15 + 0.44*x16 + 0.53*x17 + 0.46*x18 + 0.88*x19
 + 0.15*x20  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
