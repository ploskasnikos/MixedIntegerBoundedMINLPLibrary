#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0820m03m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b359,b360,b361,b362,b363,b364,b365,b366,b367,b371,b372,b373,b374,b375,b376,b377,b378,b379,b383,b384,b385,b386,b387,b388,b389,b390,b391,b395,b396,b397,b398,b399,b400,b401,b402,b403,b407,b408,b409,b410,b411,b412,b413,b414,b415,b419,b420,b421,b422,b423,b424,b425,b426,b427,b431,b432,b433,b434,b435,b436,b437,b438,b439,b443,b444,b445,b446,b447,b448,b449,b450,b451,x452,x453,x454,x470,x471,x472,x485,x486,x487,x536,x537,x538,x539,x540,x541,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x584,x585,x586,b647,b648,b649,b650,b651,b652,b653,b654,b655,b656,b657,b658,b659,b660,b661,b662,b663,b664,b665,b666,b667,b668,b669,b670,b671,b672,b673,b674,b675,b676,b677,b678,b679,b680,b681,b682,b683,b684,b685,b686,b687,b688,b689,b690,b691,b692,b693,b694,b695,b696,b697,b698,b699,b700,b701,b702,b703,b704,b705,b706;
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
   fscanf(fp,"%f", &x536); 
   fscanf(fp,"%f", &x537); 
   fscanf(fp,"%f", &x538); 
   fscanf(fp,"%f", &x539); 
   fscanf(fp,"%f", &x540); 
   fscanf(fp,"%f", &x541); 
   fscanf(fp,"%f", &x560); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x562); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x565); 
   fscanf(fp,"%f", &x566); 
   fscanf(fp,"%f", &x567); 
   fscanf(fp,"%f", &x568); 
   fscanf(fp,"%f", &x569); 
   fscanf(fp,"%f", &x570); 
   fscanf(fp,"%f", &x571); 
   fscanf(fp,"%f", &x572); 
   fscanf(fp,"%f", &x573); 
   fscanf(fp,"%f", &x574); 
   fscanf(fp,"%f", &x575); 
   fscanf(fp,"%f", &x576); 
   fscanf(fp,"%f", &x577); 
   fscanf(fp,"%f", &x578); 
   fscanf(fp,"%f", &x579); 
   fscanf(fp,"%f", &x580); 
   fscanf(fp,"%f", &x581); 
   fscanf(fp,"%f", &x582); 
   fscanf(fp,"%f", &x583); 
   fscanf(fp,"%f", &x584); 
   fscanf(fp,"%f", &x585); 
   fscanf(fp,"%f", &x586); 
   fscanf(fp,"%f", &b647); 
   fscanf(fp,"%f", &b648); 
   fscanf(fp,"%f", &b649); 
   fscanf(fp,"%f", &b650); 
   fscanf(fp,"%f", &b651); 
   fscanf(fp,"%f", &b652); 
   fscanf(fp,"%f", &b653); 
   fscanf(fp,"%f", &b654); 
   fscanf(fp,"%f", &b655); 
   fscanf(fp,"%f", &b656); 
   fscanf(fp,"%f", &b657); 
   fscanf(fp,"%f", &b658); 
   fscanf(fp,"%f", &b659); 
   fscanf(fp,"%f", &b660); 
   fscanf(fp,"%f", &b661); 
   fscanf(fp,"%f", &b662); 
   fscanf(fp,"%f", &b663); 
   fscanf(fp,"%f", &b664); 
   fscanf(fp,"%f", &b665); 
   fscanf(fp,"%f", &b666); 
   fscanf(fp,"%f", &b667); 
   fscanf(fp,"%f", &b668); 
   fscanf(fp,"%f", &b669); 
   fscanf(fp,"%f", &b670); 
   fscanf(fp,"%f", &b671); 
   fscanf(fp,"%f", &b672); 
   fscanf(fp,"%f", &b673); 
   fscanf(fp,"%f", &b674); 
   fscanf(fp,"%f", &b675); 
   fscanf(fp,"%f", &b676); 
   fscanf(fp,"%f", &b677); 
   fscanf(fp,"%f", &b678); 
   fscanf(fp,"%f", &b679); 
   fscanf(fp,"%f", &b680); 
   fscanf(fp,"%f", &b681); 
   fscanf(fp,"%f", &b682); 
   fscanf(fp,"%f", &b683); 
   fscanf(fp,"%f", &b684); 
   fscanf(fp,"%f", &b685); 
   fscanf(fp,"%f", &b686); 
   fscanf(fp,"%f", &b687); 
   fscanf(fp,"%f", &b688); 
   fscanf(fp,"%f", &b689); 
   fscanf(fp,"%f", &b690); 
   fscanf(fp,"%f", &b691); 
   fscanf(fp,"%f", &b692); 
   fscanf(fp,"%f", &b693); 
   fscanf(fp,"%f", &b694); 
   fscanf(fp,"%f", &b695); 
   fscanf(fp,"%f", &b696); 
   fscanf(fp,"%f", &b697); 
   fscanf(fp,"%f", &b698); 
   fscanf(fp,"%f", &b699); 
   fscanf(fp,"%f", &b700); 
   fscanf(fp,"%f", &b701); 
   fscanf(fp,"%f", &b702); 
   fscanf(fp,"%f", &b703); 
   fscanf(fp,"%f", &b704); 
   fscanf(fp,"%f", &b705); 
   fscanf(fp,"%f", &b706); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 20*x17 + 21*x18 + 19*x19 + 18*x29
 + 20*x30 + 20*x31 + 16*x65 + 19*x66 + 17*x67 - 26*x77 - 31*x78 - 31*x79
 - 30*x83 - 29*x84 - 37*x85 + 20*x86 + 18*x87 + 21*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 3*x101 - 3*x102 - 3*x103 - 2*x104
 - 2*x105 - 2*x106 + 6*b359 + 4*b360 + 3*b361 + 40*b362 + 35*b363
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
 - 5*x472 + 2*x485 + x486 + 2*x487 + 10*x536 + 5*x537 + 5*x538 + 5*x539
 + 5*x540 + 5*x541 - 80*x560 - 130*x561 - 215*x562 - 110*x563 - 120*x564
 - 125*x565 - 110*x566 - 130*x567 - 140*x568 - 80*x569 - 90*x570
 - 120*x571 - 285*x572 - 390*x573 - 350*x574 - 290*x575 - 405*x576
 - 190*x577 - 280*x578 - 400*x579 - 430*x580 - 290*x581 - 300*x582
 - 240*x583 - 350*x584 - 250*x585 - 300*x586 + 5*b647 + 4*b648 + 6*b649
 + 8*b650 + 7*b651 + 6*b652 + 6*b653 + 9*b654 + 4*b655 + 10*b656 + 9*b657
 + 5*b658 + 6*b659 + 10*b660 + 6*b661 + 7*b662 + 7*b663 + 4*b664 + 4*b665
 + 3*b666 + 2*b667 + 5*b668 + 6*b669 + 7*b670 + 2*b671 + 5*b672 + 2*b673
 + 4*b674 + 7*b675 + 4*b676 + 3*b677 + 9*b678 + 3*b679 + 7*b680 + 2*b681
 + 9*b682 + 3*b683 + b684 + 9*b685 + 2*b686 + 6*b687 + 3*b688 + 4*b689
 + 8*b690 + b691 + 2*b692 + 5*b693 + 2*b694 + 3*b695 + 4*b696 + 3*b697
 + 5*b698 + 7*b699 + 6*b700 + 2*b701 + 8*b702 + 4*b703 + b704 + 4*b705
 + b706 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
