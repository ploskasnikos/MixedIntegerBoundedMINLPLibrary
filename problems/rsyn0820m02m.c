#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0820m02m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b240,b241,b242,b243,b244,b245,b248,b249,b250,b251,b252,b253,b256,b257,b258,b259,b260,b261,b264,b265,b266,b267,b268,b269,b272,b273,b274,b275,b276,b277,b280,b281,b282,b283,b284,b285,b288,b289,b290,b291,b292,b293,b296,b297,b298,b299,b300,b301,x302,x303,x314,x315,x324,x325,x358,x359,x360,x361,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x390,x391,b432,b433,b434,b435,b436,b437,b438,b439,b440,b441,b442,b443,b444,b445,b446,b447,b448,b449,b450,b451,b452,b453,b454,b455,b456,b457,b458,b459,b460,b461,b462,b463,b464,b465,b466,b467,b468,b469,b470,b471;
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
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x390); 
   fscanf(fp,"%f", &x391); 
   fscanf(fp,"%f", &b432); 
   fscanf(fp,"%f", &b433); 
   fscanf(fp,"%f", &b434); 
   fscanf(fp,"%f", &b435); 
   fscanf(fp,"%f", &b436); 
   fscanf(fp,"%f", &b437); 
   fscanf(fp,"%f", &b438); 
   fscanf(fp,"%f", &b439); 
   fscanf(fp,"%f", &b440); 
   fscanf(fp,"%f", &b441); 
   fscanf(fp,"%f", &b442); 
   fscanf(fp,"%f", &b443); 
   fscanf(fp,"%f", &b444); 
   fscanf(fp,"%f", &b445); 
   fscanf(fp,"%f", &b446); 
   fscanf(fp,"%f", &b447); 
   fscanf(fp,"%f", &b448); 
   fscanf(fp,"%f", &b449); 
   fscanf(fp,"%f", &b450); 
   fscanf(fp,"%f", &b451); 
   fscanf(fp,"%f", &b452); 
   fscanf(fp,"%f", &b453); 
   fscanf(fp,"%f", &b454); 
   fscanf(fp,"%f", &b455); 
   fscanf(fp,"%f", &b456); 
   fscanf(fp,"%f", &b457); 
   fscanf(fp,"%f", &b458); 
   fscanf(fp,"%f", &b459); 
   fscanf(fp,"%f", &b460); 
   fscanf(fp,"%f", &b461); 
   fscanf(fp,"%f", &b462); 
   fscanf(fp,"%f", &b463); 
   fscanf(fp,"%f", &b464); 
   fscanf(fp,"%f", &b465); 
   fscanf(fp,"%f", &b466); 
   fscanf(fp,"%f", &b467); 
   fscanf(fp,"%f", &b468); 
   fscanf(fp,"%f", &b469); 
   fscanf(fp,"%f", &b470); 
   fscanf(fp,"%f", &b471); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 3*x68 - 3*x69 - 2*x70 - 2*x71 + 6*b240 + 4*b241
 + 40*b242 + 35*b243 + 46*b244 + 39*b245 + 7*b248 + 4*b249 + 30*b250
 + 25*b251 + 37*b252 + 29*b253 + 7*b256 + 5*b257 + 15*b258 + 5*b259
 + 22*b260 + 10*b261 + 11*b264 + 8*b265 + 13*b266 + 8*b267 + 24*b268
 + 16*b269 + 10*b272 + 7*b273 + 13*b274 + 8*b275 + 23*b276 + 15*b277
 + 9*b280 + 9*b281 + 30*b282 + 30*b283 + 39*b284 + 39*b285 + 8*b288
 + 7*b289 + 20*b290 + 15*b291 + 28*b292 + 22*b293 + 8*b296 + 6*b297
 + 15*b298 + 10*b299 + 23*b300 + 16*b301 + x302 + x303 - 5*x314 - 10*x315
 + 2*x324 + x325 + 10*x358 + 5*x359 + 5*x360 + 5*x361 - 80*x374 - 130*x375
 - 110*x376 - 120*x377 - 110*x378 - 130*x379 - 80*x380 - 90*x381
 - 285*x382 - 390*x383 - 290*x384 - 405*x385 - 280*x386 - 400*x387
 - 290*x388 - 300*x389 - 350*x390 - 250*x391 + 5*b432 + 4*b433 + 8*b434
 + 7*b435 + 6*b436 + 9*b437 + 10*b438 + 9*b439 + 6*b440 + 10*b441 + 7*b442
 + 7*b443 + 4*b444 + 3*b445 + 5*b446 + 6*b447 + 2*b448 + 5*b449 + 4*b450
 + 7*b451 + 3*b452 + 9*b453 + 7*b454 + 2*b455 + 3*b456 + b457 + 2*b458
 + 6*b459 + 4*b460 + 8*b461 + 2*b462 + 5*b463 + 3*b464 + 4*b465 + 5*b466
 + 7*b467 + 2*b468 + 8*b469 + b470 + 4*b471 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
