#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ringpack_10_2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b61); 

   fclose(fp);
   res=-( + 0.287403606378025*b2 + 0.287403606378025*b3
 + 0.287403606378025*b4 + 0.287403606378025*b5 + 0.0946538180425961*b6
 + 0.0946538180425961*b7 + 0.0946538180425961*b8 + 0.0946538180425961*b9
 + 0.584516458645496*b10 + 0.584516458645496*b11 + 0.584516458645496*b12
 + 0.584516458645496*b13 + 1.29409755392315*b14 + 1.29409755392315*b15
 + 1.29409755392315*b16 + 1.29409755392315*b17 + 2.08582176557546*b18
 + 2.08582176557546*b19 + 2.08582176557546*b20 + 2.08582176557546*b21
 + 2.08582176557546*b22 + 2.08582176557546*b23 + 2.08582176557546*b24
 + 2.08582176557546*b25 + 2.08582176557546*b26 + 2.08582176557546*b27
 + 2.08582176557546*b28 + 2.08582176557546*b29 + 2.08582176557546*b30
 + 2.08582176557546*b31 + 2.08582176557546*b32 + 2.08582176557546*b33
 + 2.08582176557546*b34 + 2.08582176557546*b35 + 2.08582176557546*b36
 + 2.08582176557546*b37 + 2.08582176557546*b38 + 2.08582176557546*b39
 + 2.08582176557546*b40 + 2.08582176557546*b41 + 2.08582176557546*b42
 + 2.08582176557546*b43 + 2.08582176557546*b44 + 2.08582176557546*b45
 + 2.08582176557546*b46 + 2.08582176557546*b47 + 2.08582176557546*b48
 + 2.08582176557546*b49 + 2.08582176557546*b50 + 2.08582176557546*b51
 + 2.08582176557546*b52 + 2.08582176557546*b53 + 2.08582176557546*b54
 + 2.08582176557546*b55 + 2.08582176557546*b56 + 2.08582176557546*b57
 + 2.08582176557546*b58 + 2.08582176557546*b59 + 2.08582176557546*b60
 + 2.08582176557546*b61 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
