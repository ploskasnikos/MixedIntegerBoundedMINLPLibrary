#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b3,b7,b2,b5,b10,b4,b12,b14,b9,b15,b6,b8,b13,b11;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b11); 

   fclose(fp);
   res=-( 2*b1*b3 - 2*b1 + 2*b3 + 2*b1*b7 - 2*b7 + 2*b2*b5 - 2*b2 - 2*b5 + 2*b2*b10
 - 4*b10 - 2*b3*b4 + 2*b4 - 2*b3*b12 - 2*b3*b14 - 2*b4*b5 + 2*b4*b9 - 2*b9
 - 2*b4*b15 + 2*b5*b6 - 2*b6 + 2*b5*b8 - 2*b8 + 2*b6*b9 - 2*b7*b8 + 2*b7*
b12 + 2*b7*b13 + 2*b8*b10 + 2*b8*b15 + 2*b9*b11 - 2*b11 - 2*b9*b12 + 2*b10
*b11 + 2*b10*b12 - 2*b13*b15 + 2*b14*b15  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
