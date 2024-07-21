#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gasprod_sarawak01";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b9,b10,b11,b13,b15,b16,b17,b18,b19,b21,b22,b25,b26,b27,b28,b29,b30,b31,b32,b33,b37,b38,x82,x83,x84,x85,x86,x87,x88,x89;
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
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 

   fclose(fp);
   res=-(- 20*b1 - 520*b2 - 20*b3 - 100*b4 - 20*b5 - 80*b6 - 550*b7 - 80*b9
 - 400*b10 - 16*b11 - 50*b13 - 80*b15 - 300*b16 - 500*b17 - 500*b18
 - 500*b19 - 500*b21 - 500*b22 - 320*b25 - 40*b26 - 40*b27 - 200*b28
 - 200*b29 - 80*b30 - 10*b31 - 600*b32 - 420*b33 - 7500*b37 - 9300*b38
 + 12.822715454568*x82 + 12.822715454568*x83 + 12.822715454568*x84
 + 12.822715454568*x85 + 12.822715454568*x86 + 12.822715454568*x87
 + 12.822715454568*x88 + 12.822715454568*x89  - 14104.9870000248
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
