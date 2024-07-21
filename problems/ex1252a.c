#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1252a";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,i16,i19,b22,x2,i17,i20,b23,x3,i18,i21,b24;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &i16); 
   fscanf(fp,"%f", &i19); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &i17); 
   fscanf(fp,"%f", &i20); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &i18); 
   fscanf(fp,"%f", &i21); 
   fscanf(fp,"%f", &b24); 

   fclose(fp);
   res=-(-((6329.03 + 1800*x1)*i16*i19*b22 + (2489.31 + 1800*x2)*i17*i20*b23 + (
3270.27 + 1800*x3)*i18*i21*b24)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
