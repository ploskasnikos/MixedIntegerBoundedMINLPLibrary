#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="waternd1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x47,x48,x23,x24,x25,x26,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x43,x44,x41,x42,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,x22;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &b1); 
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
   fscanf(fp,"%f", &x22); 

   fclose(fp);
   res=-(-(0.1*(16800*pow((0.001 + x47),0.7 )+ 12600*pow((0.001 + x48),0.7)) + 8000*x47 +
 53.6*x48 + 0.1*(100*pow((0.001 + x23),0.6 )+ 100*pow((0.001 + x24),0.6 )+ 100*pow((
0.001 + x25),0.6 )+ 100*pow((0.001 + x26),0.6 )+ 100*pow((0.001 + x29),0.6 )+ 100*
pow((0.001 + x30),0.6 )+ 100*pow((0.001 + x31),0.6 )+ 100*pow((0.001 + x32),0.6 )+ 100
*pow((0.001 + x33),0.6 )+ 100*pow((0.001 + x34),0.6 )+ 100*pow((0.001 + x35),0.6 )+
 100*pow((0.001 + x36),0.6 )+ 100*pow((0.001 + x37),0.6 )+ 100*pow((0.001 + x38),0.6
 )+ 100*pow((0.001 + x39),0.6 )+ 100*pow((0.001 + x40),0.6 )+ 100*pow((0.001 + x43),
0.6 )+ 100*pow((0.001 + x44),0.6 )+ 100*pow((0.001 + x41),0.6 )+ 100*pow((0.001 + x42)
,0.6)) + 48*x23 + 48*x24 + 48*x25 + 48*x26 + 48*x29 + 48*x30 + 48*x31 + 48
*x32 + 48*x33 + 48*x34 + 48*x35 + 48*x36 + 48*x37 + 48*x38 + 48*x39 + 48*
x40 + 48*x41 + 48*x42 + 48*x43 + 48*x44) - 0.6*b1 - 0.6*b2 - 0.6*b3
 - 0.6*b4 - 0.6*b5 - 0.6*b6 - 0.6*b7 - 0.6*b8 - 0.6*b9 - 0.6*b10 - 0.6*b11
 - 0.6*b12 - 0.6*b13 - 0.6*b14 - 0.6*b15 - 0.6*b16 - 0.6*b17 - 0.6*b18
 - 0.6*b19 - 0.6*b20  - 8000*x22 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
