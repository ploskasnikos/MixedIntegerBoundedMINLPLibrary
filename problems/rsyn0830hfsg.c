#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b237,b238,b239,b241,b242,b243,b245,b246,b247,b249,b250,b251,b253,b254,b255,b257,b258,b259,b261,b262,b263,b265,b266,b267,x268,x274,x279,x296,x297,x304,x305,x306,x307,x308,x309,x310,x311,x319,x324,x332,x333,x334,x335,x336,x337,b466,b467,b468,b469,b470,b471,b472,b473,b474,b475,b476,b477,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b490,b491,b492,b493,b494,b495;
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
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x304); 
   fscanf(fp,"%f", &x305); 
   fscanf(fp,"%f", &x306); 
   fscanf(fp,"%f", &x307); 
   fscanf(fp,"%f", &x308); 
   fscanf(fp,"%f", &x309); 
   fscanf(fp,"%f", &x310); 
   fscanf(fp,"%f", &x311); 
   fscanf(fp,"%f", &x319); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &b466); 
   fscanf(fp,"%f", &b467); 
   fscanf(fp,"%f", &b468); 
   fscanf(fp,"%f", &b469); 
   fscanf(fp,"%f", &b470); 
   fscanf(fp,"%f", &b471); 
   fscanf(fp,"%f", &b472); 
   fscanf(fp,"%f", &b473); 
   fscanf(fp,"%f", &b474); 
   fscanf(fp,"%f", &b475); 
   fscanf(fp,"%f", &b476); 
   fscanf(fp,"%f", &b477); 
   fscanf(fp,"%f", &b478); 
   fscanf(fp,"%f", &b479); 
   fscanf(fp,"%f", &b480); 
   fscanf(fp,"%f", &b481); 
   fscanf(fp,"%f", &b482); 
   fscanf(fp,"%f", &b483); 
   fscanf(fp,"%f", &b484); 
   fscanf(fp,"%f", &b485); 
   fscanf(fp,"%f", &b486); 
   fscanf(fp,"%f", &b487); 
   fscanf(fp,"%f", &b488); 
   fscanf(fp,"%f", &b489); 
   fscanf(fp,"%f", &b490); 
   fscanf(fp,"%f", &b491); 
   fscanf(fp,"%f", &b492); 
   fscanf(fp,"%f", &b493); 
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b495); 

   fclose(fp);
   res=-( + 10*x2 + 15*x7 + 18*x11 + 19*x23 - 35*x27 - 28*x29 + 16*x30
 - 2*x33 - 3*x34 - 5*x35 - 4*x36 + 6*b237 + 40*b238 + 46*b239 + 7*b241
 + 30*b242 + 37*b243 + 7*b245 + 15*b246 + 22*b247 + 11*b249 + 13*b250
 + 24*b251 + 10*b253 + 13*b254 + 23*b255 + 9*b257 + 30*b258 + 39*b259
 + 8*b261 + 20*b262 + 28*b263 + 8*b265 + 15*b266 + 23*b267 + x268 - 5*x274
 + 2*x279 + 10*x296 + 5*x297 - 40*x304 - 15*x305 - 10*x306 - 30*x307
 - 35*x308 - 20*x309 - 25*x310 - 15*x311 - 30*x319 + x324 - 80*x332
 - 285*x333 - 290*x334 - 280*x335 - 290*x336 - 350*x337 + 5*b466 + 8*b467
 + 6*b468 + 10*b469 + 6*b470 + 7*b471 + 4*b472 + 5*b473 + 2*b474 + 4*b475
 + 3*b476 + 7*b477 + 3*b478 + 2*b479 + 4*b480 + 2*b481 + 3*b482 + 5*b483
 + 2*b484 + b485 + 2*b486 + 9*b487 + 5*b488 + 2*b489 + 10*b490 + 4*b491
 + 7*b492 + 4*b493 + 2*b494 + 8*b495 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
