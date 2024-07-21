#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ghg_1veh";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x21,x20,x24,b1,x26,x27,b2,b3,b4,b8,b9,x15,b5,x23,x28,x22,x29,b6,b7,b10,b11,b12;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 

   fclose(fp);
   res=-(-(1.87912853526074 + (376.046780997472/x21 + 0.997312113279821*(
 0.854659090909091/x20 - 11.34/x21)*x24)*b1 + (0.854659090909091*x26/x20
  + (376.046780997472 - 11.34*x26)/x21 + (0.854659090909091/x20 - 11.34/
 x21)*x24*(0.997312113279821 - x27))*b2 + 28.341428570246*b3/x20 + (
 0.573023666281862*b4*b8 + 0.573023666281862*b9)*x15 + b1*b5*b8*(0.6*(
 0.03458*x23*x28 + (0.0181052631578947/x20 + 0.03458*x22 - 0.03458*x23)*
 x24*x29) + 0.01728*x15*(33.1610917987189 - x28)) + b2*b5*b8*(0.6*((
 0.0181052631578947/x20 + 0.03458*x22)*x26 + 0.03458*x23*(x28 - x26) + (
 0.0181052631578947/x20 + 0.03458*x22 - 0.03458*x23)*x24*(x29 - x27)) +
  0.01728*x15*(33.1610917987189 - x28)) + 0.6*(b1*b6*b8 + b1*b7)*((
 0.0180565982614873/x20 + 0.0344870528772162*x22 - 0.0344870528772162*x23)
 *x24 + 1.1467105543997*x23) + 0.6*(b2*b6*b8 + b2*b7)*((0.0181052631578947
 /x20 + 0.03458*x22)*x26 + 0.03458*x23*(33.1610917987189 - x26) + (
 0.0181052631578947/x20 + 0.03458*x22 - 0.03458*x23)*x24*(
 0.997312113279821 - x27)) + 19.8966550792313*(b3*b6*b8 + b3*b7)*(
 0.0181052631578947/x20 + 0.03458*x22))*b10 - 8.20275610163388*b11
  - 14.6264770436496*b12  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
