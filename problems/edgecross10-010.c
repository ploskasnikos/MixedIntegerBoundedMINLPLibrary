#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="edgecross10-010";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b5,b50,b62,b74,b90,b7,b60,b9,b13,b56,b86,b15,b47,b68,b25,b26,b28,b72,b75,b87,b29,b63,b69,b33,b34,b37,b38,b43,b66;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b66); 

   fclose(fp);
   res=-( 2*b5 - 2*b5*b50 + 3*b50 - 2*b5*b62 + b62 + 2*b5*b74 - 5*b74 - 2*b5*b90
   - b90 - 2*b7*b60 + b7 + 2*b60 - 2*b9*b60 + b9 - 2*b13*b50 - 2*b13*b56
   + b56 + 2*b13*b74 + 2*b13*b86 - 3*b86 - 2*b15*b47 + b47 - 2*b15*b50 + 2
  *b15*b68 - 3*b68 + 2*b15*b74 - 2*b25*b74 + 2*b25*b90 - 2*b26*b74 + 2*b26
  *b90 - 2*b28*b72 - b28 + 2*b28*b75 - 2*b75 + 2*b28*b87 - b87 + 2*b29*b63
   - 3*b29 - 2*b63 + 2*b29*b69 - b69 + 2*b29*b75 + 2*b33*b74 - 2*b33 + 2*
  b33*b86 + 2*b34*b68 - 2*b34 + 2*b34*b74 + 2*b37*b74 - 2*b37 + 2*b37*b86
   + 2*b38*b68 - 2*b38 + 2*b38*b74 + 2*b43*b63 - 3*b43 + 2*b43*b66 - b66
   + 2*b43*b72  - 12);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
