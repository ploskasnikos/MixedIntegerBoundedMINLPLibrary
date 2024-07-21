#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b237,b238,b239,b241,b242,b243,b245,b246,b247,b249,b250,b251,b253,b254,b255,b257,b258,b259,b261,b262,b263,b265,b266,b267,x268,x274,x279,x296,x297,x304,x305,x306,x307,x308,x309,x310,x311,x319,x324,x341,x342,x349,x350,x351,x352,x353,x354,x355,x356,x357,b530,b531,b532,b533,b534,b535,b536,b537,b538,b539,b540,b541,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b554,b555,b556,b557,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569;
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
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &b530); 
   fscanf(fp,"%f", &b531); 
   fscanf(fp,"%f", &b532); 
   fscanf(fp,"%f", &b533); 
   fscanf(fp,"%f", &b534); 
   fscanf(fp,"%f", &b535); 
   fscanf(fp,"%f", &b536); 
   fscanf(fp,"%f", &b537); 
   fscanf(fp,"%f", &b538); 
   fscanf(fp,"%f", &b539); 
   fscanf(fp,"%f", &b540); 
   fscanf(fp,"%f", &b541); 
   fscanf(fp,"%f", &b542); 
   fscanf(fp,"%f", &b543); 
   fscanf(fp,"%f", &b544); 
   fscanf(fp,"%f", &b545); 
   fscanf(fp,"%f", &b546); 
   fscanf(fp,"%f", &b547); 
   fscanf(fp,"%f", &b548); 
   fscanf(fp,"%f", &b549); 
   fscanf(fp,"%f", &b550); 
   fscanf(fp,"%f", &b551); 
   fscanf(fp,"%f", &b552); 
   fscanf(fp,"%f", &b553); 
   fscanf(fp,"%f", &b554); 
   fscanf(fp,"%f", &b555); 
   fscanf(fp,"%f", &b556); 
   fscanf(fp,"%f", &b557); 
   fscanf(fp,"%f", &b558); 
   fscanf(fp,"%f", &b559); 
   fscanf(fp,"%f", &b560); 
   fscanf(fp,"%f", &b561); 
   fscanf(fp,"%f", &b562); 
   fscanf(fp,"%f", &b563); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 

   fclose(fp);
   res=-( + 10*x2 + 15*x7 + 18*x11 + 19*x23 - 35*x27 - 28*x29 + 16*x30
 - 2*x33 - 3*x34 - 5*x35 - 4*x36 + 6*b237 + 40*b238 + 46*b239 + 7*b241
 + 30*b242 + 37*b243 + 7*b245 + 15*b246 + 22*b247 + 11*b249 + 13*b250
 + 24*b251 + 10*b253 + 13*b254 + 23*b255 + 9*b257 + 30*b258 + 39*b259
 + 8*b261 + 20*b262 + 28*b263 + 8*b265 + 15*b266 + 23*b267 + x268 - 5*x274
 + 2*x279 + 10*x296 + 5*x297 - 40*x304 - 15*x305 - 10*x306 - 30*x307
 - 35*x308 - 20*x309 - 25*x310 - 15*x311 - 30*x319 + x324 + 5*x341 + x342
 - 120*x349 - 140*x350 - 90*x351 - 80*x352 - 285*x353 - 290*x354
 - 280*x355 - 290*x356 - 350*x357 + 5*b530 + 8*b531 + 6*b532 + 10*b533
 + 6*b534 + 7*b535 + 4*b536 + 5*b537 + 2*b538 + 4*b539 + 3*b540 + 7*b541
 + 3*b542 + 2*b543 + 4*b544 + 2*b545 + 3*b546 + 5*b547 + 2*b548 + b549
 + 2*b550 + 9*b551 + 5*b552 + 2*b553 + 10*b554 + 4*b555 + 7*b556 + 4*b557
 + 2*b558 + 8*b559 + 9*b560 + 3*b561 + 5*b562 + 5*b563 + 6*b564 + 2*b565
 + 6*b566 + 3*b567 + 5*b568 + 9*b569 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
