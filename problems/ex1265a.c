#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1265a";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b26,b27,b28,b29,b30,i31,i32,i33,i34,i35;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &i31); 
   fscanf(fp,"%f", &i32); 
   fscanf(fp,"%f", &i33); 
   fscanf(fp,"%f", &i34); 
   fscanf(fp,"%f", &i35); 

   fclose(fp);
   res=-(- 0.1*b26 - 0.2*b27 - 0.3*b28 - 0.4*b29 - 0.5*b30 - i31 - i32 - i33 - i34
 - i35  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
