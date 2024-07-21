#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0810m02m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b240,b241,b242,b243,b244,b245,b248,b249,b250,b251,b252,b253,b256,b257,b258,b259,b260,b261,b264,b265,b266,b267,b268,b269,b272,b273,b274,b275,b276,b277,b280,b281,b282,b283,b284,b285,b288,b289,b290,b291,b292,b293,b296,b297,b298,b299,b300,b301,x302,x303,x314,x315,x324,x325,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,b372,b373,b374,b375,b376,b377,b378,b379,b380,b381,b382,b383,b384,b385,b386,b387,b388,b389,b390,b391;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b373); 
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
   fscanf(fp,"%f", &b389); 
   fscanf(fp,"%f", &b390); 
   fscanf(fp,"%f", &b391); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 30*x68 - 31*x69 - 24*x70 - 22*x71 + 6*b240
 + 4*b241 + 40*b242 + 35*b243 + 46*b244 + 39*b245 + 7*b248 + 4*b249
 + 30*b250 + 25*b251 + 37*b252 + 29*b253 + 7*b256 + 5*b257 + 15*b258
 + 5*b259 + 22*b260 + 10*b261 + 11*b264 + 8*b265 + 13*b266 + 8*b267
 + 24*b268 + 16*b269 + 10*b272 + 7*b273 + 13*b274 + 8*b275 + 23*b276
 + 15*b277 + 9*b280 + 9*b281 + 30*b282 + 30*b283 + 39*b284 + 39*b285
 + 8*b288 + 7*b289 + 20*b290 + 15*b291 + 28*b292 + 22*b293 + 8*b296
 + 6*b297 + 15*b298 + 10*b299 + 23*b300 + 16*b301 + x302 + x303 - 5*x314
 - 10*x315 + 2*x324 + x325 - 80*x340 - 90*x341 - 285*x342 - 390*x343
 - 290*x344 - 405*x345 - 280*x346 - 400*x347 - 290*x348 - 300*x349
 - 350*x350 - 250*x351 + 5*b372 + 4*b373 + 8*b374 + 7*b375 + 6*b376
 + 9*b377 + 10*b378 + 9*b379 + 6*b380 + 10*b381 + 7*b382 + 7*b383 + 4*b384
 + 3*b385 + 5*b386 + 6*b387 + 2*b388 + 5*b389 + 4*b390 + 7*b391 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
