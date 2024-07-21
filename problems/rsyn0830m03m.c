#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830m03m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b359,b360,b361,b362,b363,b364,b365,b366,b367,b371,b372,b373,b374,b375,b376,b377,b378,b379,b383,b384,b385,b386,b387,b388,b389,b390,b391,b395,b396,b397,b398,b399,b400,b401,b402,b403,b407,b408,b409,b410,b411,b412,b413,b414,b415,b419,b420,b421,b422,b423,b424,b425,b426,b427,b431,b432,b433,b434,b435,b436,b437,b438,b439,b443,b444,b445,b446,b447,b448,b449,b450,b451,x452,x453,x454,x470,x471,x472,x485,x486,x487,x536,x537,x538,x539,x540,x541,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x605,x606,x607,x620,x621,x622,x644,x645,x646,x647,x648,x649,x650,x651,x652,x653,x654,x655,x656,x657,x658,x659,x660,x661,b752,b753,b754,b755,b756,b757,b758,b759,b760,b761,b762,b763,b764,b765,b766,b767,b768,b769,b770,b771,b772,b773,b774,b775,b776,b777,b778,b779,b780,b781,b782,b783,b784,b785,b786,b787,b788,b789,b790,b791,b792,b793,b794,b795,b796,b797,b798,b799,b800,b801,b802,b803,b804,b805,b806,b807,b808,b809,b810,b811,b812,b813,b814,b815,b816,b817,b818,b819,b820,b821,b822,b823,b824,b825,b826,b827,b828,b829,b830,b831,b832,b833,b834,b835,b836,b837,b838,b839,b840,b841;
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
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x606); 
   fscanf(fp,"%f", &x607); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x622); 
   fscanf(fp,"%f", &x644); 
   fscanf(fp,"%f", &x645); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 
   fscanf(fp,"%f", &x650); 
   fscanf(fp,"%f", &x651); 
   fscanf(fp,"%f", &x652); 
   fscanf(fp,"%f", &x653); 
   fscanf(fp,"%f", &x654); 
   fscanf(fp,"%f", &x655); 
   fscanf(fp,"%f", &x656); 
   fscanf(fp,"%f", &x657); 
   fscanf(fp,"%f", &x658); 
   fscanf(fp,"%f", &x659); 
   fscanf(fp,"%f", &x660); 
   fscanf(fp,"%f", &x661); 
   fscanf(fp,"%f", &b752); 
   fscanf(fp,"%f", &b753); 
   fscanf(fp,"%f", &b754); 
   fscanf(fp,"%f", &b755); 
   fscanf(fp,"%f", &b756); 
   fscanf(fp,"%f", &b757); 
   fscanf(fp,"%f", &b758); 
   fscanf(fp,"%f", &b759); 
   fscanf(fp,"%f", &b760); 
   fscanf(fp,"%f", &b761); 
   fscanf(fp,"%f", &b762); 
   fscanf(fp,"%f", &b763); 
   fscanf(fp,"%f", &b764); 
   fscanf(fp,"%f", &b765); 
   fscanf(fp,"%f", &b766); 
   fscanf(fp,"%f", &b767); 
   fscanf(fp,"%f", &b768); 
   fscanf(fp,"%f", &b769); 
   fscanf(fp,"%f", &b770); 
   fscanf(fp,"%f", &b771); 
   fscanf(fp,"%f", &b772); 
   fscanf(fp,"%f", &b773); 
   fscanf(fp,"%f", &b774); 
   fscanf(fp,"%f", &b775); 
   fscanf(fp,"%f", &b776); 
   fscanf(fp,"%f", &b777); 
   fscanf(fp,"%f", &b778); 
   fscanf(fp,"%f", &b779); 
   fscanf(fp,"%f", &b780); 
   fscanf(fp,"%f", &b781); 
   fscanf(fp,"%f", &b782); 
   fscanf(fp,"%f", &b783); 
   fscanf(fp,"%f", &b784); 
   fscanf(fp,"%f", &b785); 
   fscanf(fp,"%f", &b786); 
   fscanf(fp,"%f", &b787); 
   fscanf(fp,"%f", &b788); 
   fscanf(fp,"%f", &b789); 
   fscanf(fp,"%f", &b790); 
   fscanf(fp,"%f", &b791); 
   fscanf(fp,"%f", &b792); 
   fscanf(fp,"%f", &b793); 
   fscanf(fp,"%f", &b794); 
   fscanf(fp,"%f", &b795); 
   fscanf(fp,"%f", &b796); 
   fscanf(fp,"%f", &b797); 
   fscanf(fp,"%f", &b798); 
   fscanf(fp,"%f", &b799); 
   fscanf(fp,"%f", &b800); 
   fscanf(fp,"%f", &b801); 
   fscanf(fp,"%f", &b802); 
   fscanf(fp,"%f", &b803); 
   fscanf(fp,"%f", &b804); 
   fscanf(fp,"%f", &b805); 
   fscanf(fp,"%f", &b806); 
   fscanf(fp,"%f", &b807); 
   fscanf(fp,"%f", &b808); 
   fscanf(fp,"%f", &b809); 
   fscanf(fp,"%f", &b810); 
   fscanf(fp,"%f", &b811); 
   fscanf(fp,"%f", &b812); 
   fscanf(fp,"%f", &b813); 
   fscanf(fp,"%f", &b814); 
   fscanf(fp,"%f", &b815); 
   fscanf(fp,"%f", &b816); 
   fscanf(fp,"%f", &b817); 
   fscanf(fp,"%f", &b818); 
   fscanf(fp,"%f", &b819); 
   fscanf(fp,"%f", &b820); 
   fscanf(fp,"%f", &b821); 
   fscanf(fp,"%f", &b822); 
   fscanf(fp,"%f", &b823); 
   fscanf(fp,"%f", &b824); 
   fscanf(fp,"%f", &b825); 
   fscanf(fp,"%f", &b826); 
   fscanf(fp,"%f", &b827); 
   fscanf(fp,"%f", &b828); 
   fscanf(fp,"%f", &b829); 
   fscanf(fp,"%f", &b830); 
   fscanf(fp,"%f", &b831); 
   fscanf(fp,"%f", &b832); 
   fscanf(fp,"%f", &b833); 
   fscanf(fp,"%f", &b834); 
   fscanf(fp,"%f", &b835); 
   fscanf(fp,"%f", &b836); 
   fscanf(fp,"%f", &b837); 
   fscanf(fp,"%f", &b838); 
   fscanf(fp,"%f", &b839); 
   fscanf(fp,"%f", &b840); 
   fscanf(fp,"%f", &b841); 

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
 + 5*x540 + 5*x541 - 40*x560 - 30*x561 - 15*x562 - 15*x563 - 20*x564
 - 25*x565 - 10*x566 - 30*x567 - 40*x568 - 30*x569 - 20*x570 - 20*x571
 - 35*x572 - 50*x573 - 20*x574 - 20*x575 - 30*x576 - 35*x577 - 25*x578
 - 50*x579 - 10*x580 - 15*x581 - 20*x582 - 20*x583 - 30*x605 - 40*x606
 - 40*x607 + x620 + x621 + x622 - 80*x644 - 90*x645 - 120*x646 - 285*x647
 - 390*x648 - 350*x649 - 290*x650 - 405*x651 - 190*x652 - 280*x653
 - 400*x654 - 430*x655 - 290*x656 - 300*x657 - 240*x658 - 350*x659
 - 250*x660 - 300*x661 + 5*b752 + 4*b753 + 6*b754 + 8*b755 + 7*b756
 + 6*b757 + 6*b758 + 9*b759 + 4*b760 + 10*b761 + 9*b762 + 5*b763 + 6*b764
 + 10*b765 + 6*b766 + 7*b767 + 7*b768 + 4*b769 + 4*b770 + 3*b771 + 2*b772
 + 5*b773 + 6*b774 + 7*b775 + 2*b776 + 5*b777 + 2*b778 + 4*b779 + 7*b780
 + 4*b781 + 3*b782 + 9*b783 + 3*b784 + 7*b785 + 2*b786 + 9*b787 + 3*b788
 + b789 + 9*b790 + 2*b791 + 6*b792 + 3*b793 + 4*b794 + 8*b795 + b796
 + 2*b797 + 5*b798 + 2*b799 + 3*b800 + 4*b801 + 3*b802 + 5*b803 + 7*b804
 + 6*b805 + 2*b806 + 8*b807 + 4*b808 + b809 + 4*b810 + b811 + 2*b812
 + 5*b813 + 2*b814 + 9*b815 + 2*b816 + 9*b817 + 5*b818 + 8*b819 + 4*b820
 + 2*b821 + 3*b822 + 8*b823 + 10*b824 + 6*b825 + 3*b826 + 4*b827 + 8*b828
 + 7*b829 + 7*b830 + 3*b831 + 9*b832 + 4*b833 + 8*b834 + 6*b835 + 2*b836
 + b837 + 3*b838 + 8*b839 + 3*b840 + 4*b841 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
