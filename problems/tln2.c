#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="tln2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,i3,i4;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &i3); 
   fscanf(fp,"%f", &i4); 

   fclose(fp);
   res=-(- 0.1*b1 - 0.2*b2 - i3 - i4  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
