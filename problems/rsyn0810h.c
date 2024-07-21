#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0810h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b237,b238,b239,b241,b242,b243,b245,b246,b247,b249,b250,b251,b253,b254,b255,b257,b258,b259,b261,b262,b263,b265,b266,b267,x274,x279,x287,x288,x289,x290,x291,x292,b335,b336,b337,b338,b339,b340,b341,b342,b343,b344;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x287); 
   fscanf(fp,"%f", &x288); 
   fscanf(fp,"%f", &x289); 
   fscanf(fp,"%f", &x290); 
   fscanf(fp,"%f", &x291); 
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &b335); 
   fscanf(fp,"%f", &b336); 
   fscanf(fp,"%f", &b337); 
   fscanf(fp,"%f", &b338); 
   fscanf(fp,"%f", &b339); 
   fscanf(fp,"%f", &b340); 
   fscanf(fp,"%f", &b341); 
   fscanf(fp,"%f", &b342); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b344); 

   fclose(fp);
   res=-( + 4*x2 + 8*x7 + 5*x11 + 8*x23 - 23*x27 - 19*x29 + 10*x30 - 2*x33
 - 3*x34 - 25*x35 - 24*x36 + 6*b237 + 40*b238 + 46*b239 + 7*b241 + 30*b242
 + 37*b243 + 7*b245 + 15*b246 + 22*b247 + 11*b249 + 13*b250 + 24*b251
 + 10*b253 + 13*b254 + 23*b255 + 9*b257 + 30*b258 + 39*b259 + 8*b261
 + 20*b262 + 28*b263 + 8*b265 + 15*b266 + 23*b267 - 5*x274 + 2*x279
 - 200*x287 - 250*x288 - 200*x289 - 200*x290 - 500*x291 - 350*x292
 + 5*b335 + 8*b336 + 6*b337 + 10*b338 + 6*b339 + 7*b340 + 4*b341 + 5*b342
 + 2*b343 + 4*b344 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
