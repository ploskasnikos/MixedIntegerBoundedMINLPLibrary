#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1266a";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b37,b38,b39,b40,b41,i43,i44,i45,i46,i47,i48;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &i43); 
   fscanf(fp,"%f", &i44); 
   fscanf(fp,"%f", &i45); 
   fscanf(fp,"%f", &i46); 
   fscanf(fp,"%f", &i47); 
   fscanf(fp,"%f", &i48); 

   fclose(fp);
   res=-(- 0.1*b37 - 0.2*b38 - 0.3*b39 - 0.4*b40 - 0.5*b41 - i43 - i44 - i45 - i46
 - i47 - i48  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
