#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="nous2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x28,x29,x46,x47,x4,x31,x32,x48,x49,x5,b50,b51;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b51); 

   fclose(fp);
   res=-(-((-0.0139904 - 0.0005719*x28 + 0.0042656*x29 + 0.0093514*x46 + 0.0077308*
x47)*x4 + (-0.0661588 + 0.0016371*x31 + 0.0288996*x32 + 0.0338147*x48 +
 0.0373349*x49)*x5)  - 0.23947*b50 - 0.75835*b51 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
