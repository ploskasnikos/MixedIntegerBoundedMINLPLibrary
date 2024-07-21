#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830m02m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b240,b241,b242,b243,b244,b245,b248,b249,b250,b251,b252,b253,b256,b257,b258,b259,b260,b261,b264,b265,b266,b267,b268,b269,b272,b273,b274,b275,b276,b277,b280,b281,b282,b283,b284,b285,b288,b289,b290,b291,b292,b293,b296,b297,b298,b299,b300,b301,x302,x303,x314,x315,x324,x325,x358,x359,x360,x361,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x404,x405,x414,x415,x430,x431,x432,x433,x434,x435,x436,x437,x438,x439,x440,x441,b502,b503,b504,b505,b506,b507,b508,b509,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b522,b523,b524,b525,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b538,b539,b540,b541,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b554,b555,b556,b557,b558,b559,b560,b561;
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
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x414); 
   fscanf(fp,"%f", &x415); 
   fscanf(fp,"%f", &x430); 
   fscanf(fp,"%f", &x431); 
   fscanf(fp,"%f", &x432); 
   fscanf(fp,"%f", &x433); 
   fscanf(fp,"%f", &x434); 
   fscanf(fp,"%f", &x435); 
   fscanf(fp,"%f", &x436); 
   fscanf(fp,"%f", &x437); 
   fscanf(fp,"%f", &x438); 
   fscanf(fp,"%f", &x439); 
   fscanf(fp,"%f", &x440); 
   fscanf(fp,"%f", &x441); 
   fscanf(fp,"%f", &b502); 
   fscanf(fp,"%f", &b503); 
   fscanf(fp,"%f", &b504); 
   fscanf(fp,"%f", &b505); 
   fscanf(fp,"%f", &b506); 
   fscanf(fp,"%f", &b507); 
   fscanf(fp,"%f", &b508); 
   fscanf(fp,"%f", &b509); 
   fscanf(fp,"%f", &b510); 
   fscanf(fp,"%f", &b511); 
   fscanf(fp,"%f", &b512); 
   fscanf(fp,"%f", &b513); 
   fscanf(fp,"%f", &b514); 
   fscanf(fp,"%f", &b515); 
   fscanf(fp,"%f", &b516); 
   fscanf(fp,"%f", &b517); 
   fscanf(fp,"%f", &b518); 
   fscanf(fp,"%f", &b519); 
   fscanf(fp,"%f", &b520); 
   fscanf(fp,"%f", &b521); 
   fscanf(fp,"%f", &b522); 
   fscanf(fp,"%f", &b523); 
   fscanf(fp,"%f", &b524); 
   fscanf(fp,"%f", &b525); 
   fscanf(fp,"%f", &b526); 
   fscanf(fp,"%f", &b527); 
   fscanf(fp,"%f", &b528); 
   fscanf(fp,"%f", &b529); 
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
 + 2*x324 + x325 + 10*x358 + 5*x359 + 5*x360 + 5*x361 - 40*x374 - 30*x375
 - 15*x376 - 20*x377 - 10*x378 - 30*x379 - 30*x380 - 20*x381 - 35*x382
 - 50*x383 - 20*x384 - 30*x385 - 25*x386 - 50*x387 - 15*x388 - 20*x389
 - 30*x404 - 40*x405 + x414 + x415 - 80*x430 - 90*x431 - 285*x432
 - 390*x433 - 290*x434 - 405*x435 - 280*x436 - 400*x437 - 290*x438
 - 300*x439 - 350*x440 - 250*x441 + 5*b502 + 4*b503 + 8*b504 + 7*b505
 + 6*b506 + 9*b507 + 10*b508 + 9*b509 + 6*b510 + 10*b511 + 7*b512 + 7*b513
 + 4*b514 + 3*b515 + 5*b516 + 6*b517 + 2*b518 + 5*b519 + 4*b520 + 7*b521
 + 3*b522 + 9*b523 + 7*b524 + 2*b525 + 3*b526 + b527 + 2*b528 + 6*b529
 + 4*b530 + 8*b531 + 2*b532 + 5*b533 + 3*b534 + 4*b535 + 5*b536 + 7*b537
 + 2*b538 + 8*b539 + b540 + 4*b541 + 2*b542 + 5*b543 + 9*b544 + 2*b545
 + 5*b546 + 8*b547 + 2*b548 + 3*b549 + 10*b550 + 6*b551 + 4*b552 + 8*b553
 + 7*b554 + 3*b555 + 4*b556 + 8*b557 + 2*b558 + b559 + 8*b560 + 3*b561
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
