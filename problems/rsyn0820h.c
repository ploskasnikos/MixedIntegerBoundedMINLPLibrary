#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0820h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b237,b238,b239,b241,b242,b243,b245,b246,b247,b249,b250,b251,b253,b254,b255,b257,b258,b259,b261,b262,b263,b265,b266,b267,x274,x304,x305,x306,x307,x308,x309,x310,x311,x312,b399,b400,b401,b402,b403,b404,b405,b406,b407,b408,b409,b410,b411,b412,b413,b414,b415,b416,b417,b418;
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
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x312); 
   fscanf(fp,"%f", &b399); 
   fscanf(fp,"%f", &b400); 
   fscanf(fp,"%f", &b401); 
   fscanf(fp,"%f", &b402); 
   fscanf(fp,"%f", &b403); 
   fscanf(fp,"%f", &b404); 
   fscanf(fp,"%f", &b405); 
   fscanf(fp,"%f", &b406); 
   fscanf(fp,"%f", &b407); 
   fscanf(fp,"%f", &b408); 
   fscanf(fp,"%f", &b409); 
   fscanf(fp,"%f", &b410); 
   fscanf(fp,"%f", &b411); 
   fscanf(fp,"%f", &b412); 
   fscanf(fp,"%f", &b413); 
   fscanf(fp,"%f", &b414); 
   fscanf(fp,"%f", &b415); 
   fscanf(fp,"%f", &b416); 
   fscanf(fp,"%f", &b417); 
   fscanf(fp,"%f", &b418); 

   fclose(fp);
   res=-( + 10*x2 + 15*x7 + 18*x11 + 19*x23 - 35*x27 - 28*x29 + 16*x30
 - 2*x33 - 3*x34 - 5*x35 - 4*x36 + 6*b237 + 40*b238 + 46*b239 + 7*b241
 + 30*b242 + 37*b243 + 7*b245 + 15*b246 + 22*b247 + 11*b249 + 13*b250
 + 24*b251 + 10*b253 + 13*b254 + 23*b255 + 9*b257 + 30*b258 + 39*b259
 + 8*b261 + 20*b262 + 28*b263 + 8*b265 + 15*b266 + 23*b267 - 5*x274
 - 200*x304 - 250*x305 - 200*x306 - 700*x307 - 400*x308 - 500*x309
 - 400*x310 - 600*x311 - 700*x312 + 5*b399 + 8*b400 + 6*b401 + 10*b402
 + 6*b403 + 7*b404 + 4*b405 + 5*b406 + 2*b407 + 4*b408 + 3*b409 + 7*b410
 + 3*b411 + 2*b412 + 4*b413 + 2*b414 + 3*b415 + 5*b416 + 2*b417 + 8*b418
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
