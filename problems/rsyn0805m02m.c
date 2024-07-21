#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0805m02m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b240,b241,b242,b243,b244,b245,b248,b249,b250,b251,b252,b253,b256,b257,b258,b259,b260,b261,b264,b265,b266,b267,b268,b269,b272,b273,b274,b275,b276,b277,b280,b281,b282,b283,b284,b285,b288,b289,b290,b291,b292,b293,b296,b297,b298,b299,b300,b301,x302,x303,x314,x315,x324,x325,x326,x327,x328,x329,x330,x331,b342,b343,b344,b345,b346,b347,b348,b349,b350,b351;
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
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &b342); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b346); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b351); 

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
 - 10*x315 + 2*x324 + x325 - 80*x326 - 90*x327 - 285*x328 - 390*x329
 - 290*x330 - 405*x331 + 5*b342 + 4*b343 + 8*b344 + 7*b345 + 6*b346
 + 9*b347 + 10*b348 + 9*b349 + 6*b350 + 10*b351 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
