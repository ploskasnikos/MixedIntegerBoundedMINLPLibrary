#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b10,b17,b18,b20,b2,b4,b14,b3,b19,b21,b23,b24,b5,b7,b25,b8,b6,b28,b13,b9,b12,b27,b11,b15,b16,b22,b26;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b26); 

   fclose(fp);
   res=-( 2*b1*b10 - 4*b1 - 2*b10 + 2*b1*b17 + 2*b1*b18 + 2*b1*b20 + 2*b2*b4 - 2*b2
 - 2*b4 + 2*b2*b14 - 4*b14 + 2*b3*b19 - 2*b3 + 2*b3*b21 + 2*b3*b23 - 2*b3*
b24 + 2*b4*b5 - 2*b5 + 2*b4*b7 - 2*b7 - 2*b4*b25 + 2*b5*b8 - 4*b8 + 2*b6*
b7 + 2*b6 - 2*b6*b23 - 2*b6*b25 - 2*b6*b28 + 2*b7*b13 - 2*b13 - 2*b7*b18
 + 2*b8*b9 - 2*b9 + 2*b8*b12 - 2*b12 + 2*b8*b25 + 2*b9*b13 + 2*b10*b24 + 2
*b10*b27 - 2*b10*b28 + 2*b11*b12 - 2*b11 - 2*b11*b19 + 2*b11*b25 + 2*b11*
b28 + 2*b12*b14 - 2*b12*b17 + 2*b13*b15 - 2*b15 - 2*b13*b16 + 2*b14*b15 +
 2*b14*b16 + 2*b16*b17 - 2*b16*b18 - 2*b17*b19 + 2*b18*b23 + 2*b19*b20 - 2*
b20*b21 - 2*b20*b22 + 2*b22*b26 - 2*b23*b26 - 2*b26*b27 + 2*b26*b28
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
