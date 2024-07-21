#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0815hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b237,b238,b239,b241,b242,b243,b245,b246,b247,b249,b250,b251,b253,b254,b255,b257,b258,b259,b261,b262,b263,b265,b266,b267,x274,x292,x293,x304,x305,x306,x307,b374,b375,b376,b377,b378,b379,b380,b381,b382,b383,b384,b385,b386,b387,b388;
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
   fscanf(fp,"%f", &x292); 
   fscanf(fp,"%f", &x293); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b380); 
   fscanf(fp,"%f", &b381); 
   fscanf(fp,"%f", &b382); 
   fscanf(fp,"%f", &b383); 
   fscanf(fp,"%f", &b384); 
   fscanf(fp,"%f", &b385); 
   fscanf(fp,"%f", &b386); 
   fscanf(fp,"%f", &b387); 
   fscanf(fp,"%f", &b388); 

   fclose(fp);
   res=-( + 4*x2 + 8*x7 + 5*x11 + 8*x23 - 23*x27 - 19*x29 + 10*x30 - 2*x33
 - 3*x34 - 5*x35 - 4*x36 + 6*b237 + 40*b238 + 46*b239 + 7*b241 + 30*b242
 + 37*b243 + 7*b245 + 15*b246 + 22*b247 + 11*b249 + 13*b250 + 24*b251
 + 10*b253 + 13*b254 + 23*b255 + 9*b257 + 30*b258 + 39*b259 + 8*b261
 + 20*b262 + 28*b263 + 8*b265 + 15*b266 + 23*b267 - 5*x274 - 500*x292
 - 350*x293 - 200*x304 - 250*x305 - 200*x306 - 200*x307 + 5*b374 + 8*b375
 + 6*b376 + 10*b377 + 6*b378 + 7*b379 + 4*b380 + 5*b381 + 2*b382 + 4*b383
 + 3*b384 + 7*b385 + 3*b386 + 2*b387 + 4*b388 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
