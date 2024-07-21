#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="heatexch_spec1";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x25,x41,x42,x26,x43,x27,x28,x44,x45,x29,x46,x30,x31,x47,x48,x32,x49,x33,x34,x50,x51,x35,x52,x36,x39,x55,x40,x56,x37,x53,x38,x54,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x54); 
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

   fclose(fp);
   res=-(-(150*(pow((1e-6 + 2*x25/(1e-6 + pow((1e-6 + 0.5*x41*x42*(x41 + x42)),0.33333)))
 ,1 )+ pow((1e-6 + 2*x26/(1e-6 + pow((1e-6 + 0.5*x42*x43*(x42 + x43)),0.33333))),
 1 )+ pow((1e-6 + 199.970793713208*x27),1 )+ pow((1e-6 + 2*x28/(1e-6 + pow((1e-6 + 0.5*
 x44*x45*(x44 + x45)),0.33333))),1 )+ pow((1e-6 + 2*x29/(1e-6 + pow((1e-6 + 0.5*
 x45*x46*(x45 + x46)),0.33333))),1 )+ pow((1e-6 + 199.970793713208*x30),1 )+ pow((
 1e-6 + 2*x31/(1e-6 + pow((1e-6 + 0.5*x47*x48*(x47 + x48)),0.33333))),1 )+ pow((
 1e-6 + 2*x32/(1e-6 + pow((1e-6 + 0.5*x48*x49*(x48 + x49)),0.33333))),1 )+ pow((
 1e-6 + 199.970793713208*x33),1 )+ pow((1e-6 + 2*x34/(1e-6 + pow((1e-6 + 0.5*x50*
 x51*(x50 + x51)),0.33333))),1 )+ pow((1e-6 + 2*x35/(1e-6 + pow((1e-6 + 0.5*x51*
 x52*(x51 + x52)),0.33333))),1 )+ pow((1e-6 + 199.970793713208*x36),1)) + 150*
 pow((2e-6 + 1.2*x39/pow((1e-6 + 30*x55*(15 + 0.5*x55)),0.33333 )+ 1.2*x40/pow((1e-6
  + 180*x56*(90 + 0.5*x56)),0.33333)),1 )+ 80*x39 + 80*x40 + 150*(pow((1e-6 +
  2*x37/pow((1e-6 + 35*x53*(70 + x53)),0.33333)),1 )+ pow((1e-6 + 2*x38/pow((1e-6 + 35*
 x54*(70 + x54)),0.33333)),1)) + 15*x37 + 15*x38) - 5500*b1 - 5500*b2
  - 5500*b3 - 5500*b4 - 5500*b5 - 5500*b6 - 5500*b7 - 5500*b8 - 5500*b9
  - 5500*b10 - 5500*b11 - 5500*b12  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
