#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0805m03m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b359,b360,b361,b362,b363,b364,b365,b366,b367,b371,b372,b373,b374,b375,b376,b377,b378,b379,b383,b384,b385,b386,b387,b388,b389,b390,b391,b395,b396,b397,b398,b399,b400,b401,b402,b403,b407,b408,b409,b410,b411,b412,b413,b414,b415,b419,b420,b421,b422,b423,b424,b425,b426,b427,b431,b432,b433,b434,b435,b436,b437,b438,b439,b443,b444,b445,b446,b447,b448,b449,b450,b451,x452,x453,x454,x470,x471,x472,x485,x486,x487,x488,x489,x490,x491,x492,x493,x494,x495,x496,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b522,b523,b524,b525,b526;
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
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b361); 
   fscanf(fp,"%f", &b362); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b383); 
   fscanf(fp,"%f", &b384); 
   fscanf(fp,"%f", &b385); 
   fscanf(fp,"%f", &b386); 
   fscanf(fp,"%f", &b387); 
   fscanf(fp,"%f", &b388); 
   fscanf(fp,"%f", &b389); 
   fscanf(fp,"%f", &b390); 
   fscanf(fp,"%f", &b391); 
   fscanf(fp,"%f", &b395); 
   fscanf(fp,"%f", &b396); 
   fscanf(fp,"%f", &b397); 
   fscanf(fp,"%f", &b398); 
   fscanf(fp,"%f", &b399); 
   fscanf(fp,"%f", &b400); 
   fscanf(fp,"%f", &b401); 
   fscanf(fp,"%f", &b402); 
   fscanf(fp,"%f", &b403); 
   fscanf(fp,"%f", &b407); 
   fscanf(fp,"%f", &b408); 
   fscanf(fp,"%f", &b409); 
   fscanf(fp,"%f", &b410); 
   fscanf(fp,"%f", &b411); 
   fscanf(fp,"%f", &b412); 
   fscanf(fp,"%f", &b413); 
   fscanf(fp,"%f", &b414); 
   fscanf(fp,"%f", &b415); 
   fscanf(fp,"%f", &b419); 
   fscanf(fp,"%f", &b420); 
   fscanf(fp,"%f", &b421); 
   fscanf(fp,"%f", &b422); 
   fscanf(fp,"%f", &b423); 
   fscanf(fp,"%f", &b424); 
   fscanf(fp,"%f", &b425); 
   fscanf(fp,"%f", &b426); 
   fscanf(fp,"%f", &b427); 
   fscanf(fp,"%f", &b431); 
   fscanf(fp,"%f", &b432); 
   fscanf(fp,"%f", &b433); 
   fscanf(fp,"%f", &b434); 
   fscanf(fp,"%f", &b435); 
   fscanf(fp,"%f", &b436); 
   fscanf(fp,"%f", &b437); 
   fscanf(fp,"%f", &b438); 
   fscanf(fp,"%f", &b439); 
   fscanf(fp,"%f", &b443); 
   fscanf(fp,"%f", &b444); 
   fscanf(fp,"%f", &b445); 
   fscanf(fp,"%f", &b446); 
   fscanf(fp,"%f", &b447); 
   fscanf(fp,"%f", &b448); 
   fscanf(fp,"%f", &b449); 
   fscanf(fp,"%f", &b450); 
   fscanf(fp,"%f", &b451); 
   fscanf(fp,"%f", &x452); 
   fscanf(fp,"%f", &x453); 
   fscanf(fp,"%f", &x454); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x485); 
   fscanf(fp,"%f", &x486); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x488); 
   fscanf(fp,"%f", &x489); 
   fscanf(fp,"%f", &x490); 
   fscanf(fp,"%f", &x491); 
   fscanf(fp,"%f", &x492); 
   fscanf(fp,"%f", &x493); 
   fscanf(fp,"%f", &x494); 
   fscanf(fp,"%f", &x495); 
   fscanf(fp,"%f", &x496); 
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

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 20*x17 + 21*x18 + 19*x19 + 18*x29
 + 20*x30 + 20*x31 + 16*x65 + 19*x66 + 17*x67 - 26*x77 - 31*x78 - 31*x79
 - 30*x83 - 29*x84 - 37*x85 + 20*x86 + 18*x87 + 21*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 20*x101 - 23*x102 - 32*x103 - 21*x104
 - 25*x105 - 22*x106 + 6*b359 + 4*b360 + 3*b361 + 40*b362 + 35*b363
 + 20*b364 + 46*b365 + 39*b366 + 23*b367 + 7*b371 + 4*b372 + 4*b373
 + 30*b374 + 25*b375 + 20*b376 + 37*b377 + 29*b378 + 22*b379 + 7*b383
 + 5*b384 + 3*b385 + 15*b386 + 5*b387 + 2*b388 + 22*b389 + 10*b390
 + 5*b391 + 11*b395 + 8*b396 + 6*b397 + 13*b398 + 8*b399 + 3*b400
 + 24*b401 + 16*b402 + 9*b403 + 10*b407 + 7*b408 + 6*b409 + 13*b410
 + 8*b411 + 3*b412 + 23*b413 + 15*b414 + 9*b415 + 9*b419 + 9*b420 + 7*b421
 + 30*b422 + 30*b423 + 25*b424 + 39*b425 + 39*b426 + 32*b427 + 8*b431
 + 7*b432 + 7*b433 + 20*b434 + 15*b435 + 10*b436 + 28*b437 + 22*b438
 + 17*b439 + 8*b443 + 6*b444 + 5*b445 + 15*b446 + 10*b447 + 6*b448
 + 23*b449 + 16*b450 + 11*b451 + x452 + x453 + x454 - 5*x470 - 10*x471
 - 5*x472 + 2*x485 + x486 + 2*x487 - 80*x488 - 90*x489 - 120*x490
 - 285*x491 - 390*x492 - 350*x493 - 290*x494 - 405*x495 - 190*x496
 + 5*b512 + 4*b513 + 6*b514 + 8*b515 + 7*b516 + 6*b517 + 6*b518 + 9*b519
 + 4*b520 + 10*b521 + 9*b522 + 5*b523 + 6*b524 + 10*b525 + 6*b526 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
