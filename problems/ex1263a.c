#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1263a";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b17,b18,b19,b20,i21,i22,i23,i24;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &i21); 
   fscanf(fp,"%f", &i22); 
   fscanf(fp,"%f", &i23); 
   fscanf(fp,"%f", &i24); 

   fclose(fp);
   res=-(- 0.1*b17 - 0.2*b18 - 0.3*b19 - 0.4*b20 - i21 - i22 - i23 - i24 
 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
