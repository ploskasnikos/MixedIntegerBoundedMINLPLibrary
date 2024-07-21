#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="heatexch_gen2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x143,x144,x145,x146,x147,x148,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,x45,x46,x47,x48,x49,x50;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
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
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 

   fclose(fp);
   res=-(-(1200*pow((0.01 + x128),0.6 )+ 1200*pow((0.01 + x129),0.6 )+ 1200*pow((0.01 + x130)
  ,0.6 )+ 1200*pow((0.01 + x131),0.6 )+ 1200*pow((0.01 + x132),0.6 )+ 1200*pow((0.01
   + x133),0.6 )+ 1200*pow((0.01 + x134),0.6 )+ 1200*pow((0.01 + x135),0.6 )+ 1200
  *pow((0.01 + x136),0.6 )+ 1200*pow((0.01 + x137),0.6 )+ 1200*pow((0.01 + x138),0.6
   )+ 1200*pow((0.01 + x139),0.6 )+ 1200*pow((0.01 + x140),0.6 )+ 1200*pow((0.01 + x141
  ),0.6 )+ 1200*pow((0.01 + x142),0.6 )+ 1200*pow((0.01 + x143),0.6 )+ 1200*pow((0.01
   + x144),0.6 )+ 1200*pow((0.01 + x145),0.6 )+ 1200*pow((0.01 + x146),0.6 )+ 1200
  *pow((0.01 + x147),0.6 )+ 1200*pow((0.01 + x148),0.6)) - 5500*b1 - 5500*b2
   - 5500*b3 - 5500*b4 - 5500*b5 - 5500*b6 - 5500*b7 - 5500*b8 - 5500*b9
   - 5500*b10 - 5500*b11 - 5500*b12 - 5500*b13 - 5500*b14 - 5500*b15
   - 5500*b16 - 10*x45 - 10*x46 - 10*x47 - 10*x48 - 10*x49 - 140*x50
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
