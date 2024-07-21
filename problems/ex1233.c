#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1233";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x13,x25,x26,x14,x27,x15,x28,x29,x16,x30,x17,x31,x32,x18,x33,x19,x34,x35,x20,x36,x21,x37,x22,x38,x23,x39,x24,x40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x40); 
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

   fclose(fp);
   res=-(-(300*x13/pow((0.5*x25*x26*(x25 + x26)),0.3333 )+ 300*x14/pow((0.5*x26*x27*(x26 +
 x27)),0.3333 )+ 300*x15/pow((0.5*x28*x29*(x28 + x29)),0.3333 )+ 300*x16/pow((0.5*
x29*x30*(x29 + x30)),0.3333 )+ 300*x17/pow((0.5*x31*x32*(x31 + x32)),0.3333
 )+ 300*x18/pow((0.5*x32*x33*(x32 + x33)),0.3333 )+ 300*x19/pow((0.5*x34*x35*(x34
 + x35)),0.3333 )+ 300*x20/pow((0.5*x35*x36*(x35 + x36)),0.3333 )+ 300*x21/pow((35
*x37*(70 + x37)),0.33333 )+ 300*x22/pow((35*x38*(70 + x38)),0.33333 )+ 180*x23
/pow((15*x39*(30 + x39)),0.33333 )+ 180*x24/pow((90*x40*(180 + x40)),0.33333 )+ 80
*x23 + 80*x24 + 15*x21 + 15*x22) - 5500*b41 - 5500*b42 - 5500*b43
 - 5500*b44 - 5500*b45 - 5500*b46 - 5500*b47 - 5500*b48 - 5500*b49
 - 5500*b50 - 5500*b51 - 5500*b52  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
