#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840m03m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b359,b360,b361,b362,b363,b364,b365,b366,b367,b371,b372,b373,b374,b375,b376,b377,b378,b379,b383,b384,b385,b386,b387,b388,b389,b390,b391,b395,b396,b397,b398,b399,b400,b401,b402,b403,b407,b408,b409,b410,b411,b412,b413,b414,b415,b419,b420,b421,b422,b423,b424,b425,b426,b427,b431,b432,b433,b434,b435,b436,b437,b438,b439,b443,b444,b445,b446,b447,b448,b449,b450,b451,x452,x453,x454,x470,x471,x472,x485,x486,x487,x536,x537,x538,x539,x540,x541,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,x581,x582,x583,x605,x606,x607,x620,x621,x622,x671,x672,x673,x674,x675,x676,x695,x696,x697,x698,x699,x700,x701,x702,x703,x704,x705,x706,x707,x708,x709,x710,x711,x712,x713,x714,x715,x716,x717,x718,x719,x720,x721,b842,b843,b844,b845,b846,b847,b848,b849,b850,b851,b852,b853,b854,b855,b856,b857,b858,b859,b860,b861,b862,b863,b864,b865,b866,b867,b868,b869,b870,b871,b872,b873,b874,b875,b876,b877,b878,b879,b880,b881,b882,b883,b884,b885,b886,b887,b888,b889,b890,b891,b892,b893,b894,b895,b896,b897,b898,b899,b900,b901,b902,b903,b904,b905,b906,b907,b908,b909,b910,b911,b912,b913,b914,b915,b916,b917,b918,b919,b920,b921,b922,b923,b924,b925,b926,b927,b928,b929,b930,b931,b932,b933,b934,b935,b936,b937,b938,b939,b940,b941,b942,b943,b944,b945,b946,b947,b948,b949,b950,b951,b952,b953,b954,b955,b956,b957,b958,b959,b960,b961;
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
   fscanf(fp,"%f", &x671); 
   fscanf(fp,"%f", &x672); 
   fscanf(fp,"%f", &x673); 
   fscanf(fp,"%f", &x674); 
   fscanf(fp,"%f", &x675); 
   fscanf(fp,"%f", &x676); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x696); 
   fscanf(fp,"%f", &x697); 
   fscanf(fp,"%f", &x698); 
   fscanf(fp,"%f", &x699); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x702); 
   fscanf(fp,"%f", &x703); 
   fscanf(fp,"%f", &x704); 
   fscanf(fp,"%f", &x705); 
   fscanf(fp,"%f", &x706); 
   fscanf(fp,"%f", &x707); 
   fscanf(fp,"%f", &x708); 
   fscanf(fp,"%f", &x709); 
   fscanf(fp,"%f", &x710); 
   fscanf(fp,"%f", &x711); 
   fscanf(fp,"%f", &x712); 
   fscanf(fp,"%f", &x713); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &b842); 
   fscanf(fp,"%f", &b843); 
   fscanf(fp,"%f", &b844); 
   fscanf(fp,"%f", &b845); 
   fscanf(fp,"%f", &b846); 
   fscanf(fp,"%f", &b847); 
   fscanf(fp,"%f", &b848); 
   fscanf(fp,"%f", &b849); 
   fscanf(fp,"%f", &b850); 
   fscanf(fp,"%f", &b851); 
   fscanf(fp,"%f", &b852); 
   fscanf(fp,"%f", &b853); 
   fscanf(fp,"%f", &b854); 
   fscanf(fp,"%f", &b855); 
   fscanf(fp,"%f", &b856); 
   fscanf(fp,"%f", &b857); 
   fscanf(fp,"%f", &b858); 
   fscanf(fp,"%f", &b859); 
   fscanf(fp,"%f", &b860); 
   fscanf(fp,"%f", &b861); 
   fscanf(fp,"%f", &b862); 
   fscanf(fp,"%f", &b863); 
   fscanf(fp,"%f", &b864); 
   fscanf(fp,"%f", &b865); 
   fscanf(fp,"%f", &b866); 
   fscanf(fp,"%f", &b867); 
   fscanf(fp,"%f", &b868); 
   fscanf(fp,"%f", &b869); 
   fscanf(fp,"%f", &b870); 
   fscanf(fp,"%f", &b871); 
   fscanf(fp,"%f", &b872); 
   fscanf(fp,"%f", &b873); 
   fscanf(fp,"%f", &b874); 
   fscanf(fp,"%f", &b875); 
   fscanf(fp,"%f", &b876); 
   fscanf(fp,"%f", &b877); 
   fscanf(fp,"%f", &b878); 
   fscanf(fp,"%f", &b879); 
   fscanf(fp,"%f", &b880); 
   fscanf(fp,"%f", &b881); 
   fscanf(fp,"%f", &b882); 
   fscanf(fp,"%f", &b883); 
   fscanf(fp,"%f", &b884); 
   fscanf(fp,"%f", &b885); 
   fscanf(fp,"%f", &b886); 
   fscanf(fp,"%f", &b887); 
   fscanf(fp,"%f", &b888); 
   fscanf(fp,"%f", &b889); 
   fscanf(fp,"%f", &b890); 
   fscanf(fp,"%f", &b891); 
   fscanf(fp,"%f", &b892); 
   fscanf(fp,"%f", &b893); 
   fscanf(fp,"%f", &b894); 
   fscanf(fp,"%f", &b895); 
   fscanf(fp,"%f", &b896); 
   fscanf(fp,"%f", &b897); 
   fscanf(fp,"%f", &b898); 
   fscanf(fp,"%f", &b899); 
   fscanf(fp,"%f", &b900); 
   fscanf(fp,"%f", &b901); 
   fscanf(fp,"%f", &b902); 
   fscanf(fp,"%f", &b903); 
   fscanf(fp,"%f", &b904); 
   fscanf(fp,"%f", &b905); 
   fscanf(fp,"%f", &b906); 
   fscanf(fp,"%f", &b907); 
   fscanf(fp,"%f", &b908); 
   fscanf(fp,"%f", &b909); 
   fscanf(fp,"%f", &b910); 
   fscanf(fp,"%f", &b911); 
   fscanf(fp,"%f", &b912); 
   fscanf(fp,"%f", &b913); 
   fscanf(fp,"%f", &b914); 
   fscanf(fp,"%f", &b915); 
   fscanf(fp,"%f", &b916); 
   fscanf(fp,"%f", &b917); 
   fscanf(fp,"%f", &b918); 
   fscanf(fp,"%f", &b919); 
   fscanf(fp,"%f", &b920); 
   fscanf(fp,"%f", &b921); 
   fscanf(fp,"%f", &b922); 
   fscanf(fp,"%f", &b923); 
   fscanf(fp,"%f", &b924); 
   fscanf(fp,"%f", &b925); 
   fscanf(fp,"%f", &b926); 
   fscanf(fp,"%f", &b927); 
   fscanf(fp,"%f", &b928); 
   fscanf(fp,"%f", &b929); 
   fscanf(fp,"%f", &b930); 
   fscanf(fp,"%f", &b931); 
   fscanf(fp,"%f", &b932); 
   fscanf(fp,"%f", &b933); 
   fscanf(fp,"%f", &b934); 
   fscanf(fp,"%f", &b935); 
   fscanf(fp,"%f", &b936); 
   fscanf(fp,"%f", &b937); 
   fscanf(fp,"%f", &b938); 
   fscanf(fp,"%f", &b939); 
   fscanf(fp,"%f", &b940); 
   fscanf(fp,"%f", &b941); 
   fscanf(fp,"%f", &b942); 
   fscanf(fp,"%f", &b943); 
   fscanf(fp,"%f", &b944); 
   fscanf(fp,"%f", &b945); 
   fscanf(fp,"%f", &b946); 
   fscanf(fp,"%f", &b947); 
   fscanf(fp,"%f", &b948); 
   fscanf(fp,"%f", &b949); 
   fscanf(fp,"%f", &b950); 
   fscanf(fp,"%f", &b951); 
   fscanf(fp,"%f", &b952); 
   fscanf(fp,"%f", &b953); 
   fscanf(fp,"%f", &b954); 
   fscanf(fp,"%f", &b955); 
   fscanf(fp,"%f", &b956); 
   fscanf(fp,"%f", &b957); 
   fscanf(fp,"%f", &b958); 
   fscanf(fp,"%f", &b959); 
   fscanf(fp,"%f", &b960); 
   fscanf(fp,"%f", &b961); 

   fclose(fp);
   res=-( + 10*x2 + 7*x3 + 5*x4 + 15*x17 + 11*x18 + 9*x19 + 18*x29
 + 14*x30 + 10*x31 + 19*x65 + 17*x66 + 17*x67 - 32*x77 - 41*x78 - 31*x79
 - 40*x83 - 39*x84 - 27*x85 + 16*x86 + 16*x87 + 15*x88 - 2*x95 - 2*x96
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
 - 40*x607 + x620 + x621 + x622 + 5*x671 + 3*x672 + 4*x673 + x674 + x675
 + x676 - 120*x695 - 110*x696 - 150*x697 - 140*x698 - 120*x699 - 100*x700
 - 90*x701 - 60*x702 - 150*x703 - 80*x704 - 90*x705 - 120*x706 - 285*x707
 - 390*x708 - 350*x709 - 290*x710 - 405*x711 - 190*x712 - 280*x713
 - 400*x714 - 430*x715 - 290*x716 - 300*x717 - 240*x718 - 350*x719
 - 250*x720 - 300*x721 + 5*b842 + 4*b843 + 6*b844 + 8*b845 + 7*b846
 + 6*b847 + 6*b848 + 9*b849 + 4*b850 + 10*b851 + 9*b852 + 5*b853 + 6*b854
 + 10*b855 + 6*b856 + 7*b857 + 7*b858 + 4*b859 + 4*b860 + 3*b861 + 2*b862
 + 5*b863 + 6*b864 + 7*b865 + 2*b866 + 5*b867 + 2*b868 + 4*b869 + 7*b870
 + 4*b871 + 3*b872 + 9*b873 + 3*b874 + 7*b875 + 2*b876 + 9*b877 + 3*b878
 + b879 + 9*b880 + 2*b881 + 6*b882 + 3*b883 + 4*b884 + 8*b885 + b886
 + 2*b887 + 5*b888 + 2*b889 + 3*b890 + 4*b891 + 3*b892 + 5*b893 + 7*b894
 + 6*b895 + 2*b896 + 8*b897 + 4*b898 + b899 + 4*b900 + b901 + 2*b902
 + 5*b903 + 2*b904 + 9*b905 + 2*b906 + 9*b907 + 5*b908 + 8*b909 + 4*b910
 + 2*b911 + 3*b912 + 8*b913 + 10*b914 + 6*b915 + 3*b916 + 4*b917 + 8*b918
 + 7*b919 + 7*b920 + 3*b921 + 9*b922 + 4*b923 + 8*b924 + 6*b925 + 2*b926
 + b927 + 3*b928 + 8*b929 + 3*b930 + 4*b931 + 9*b932 + 5*b933 + b934
 + 3*b935 + 9*b936 + 5*b937 + 5*b938 + 3*b939 + 3*b940 + 5*b941 + 3*b942
 + 2*b943 + 6*b944 + 4*b945 + 6*b946 + 2*b947 + 6*b948 + 6*b949 + 6*b950
 + 4*b951 + 3*b952 + 3*b953 + 2*b954 + b955 + 5*b956 + 8*b957 + 6*b958
 + 9*b959 + 5*b960 + 2*b961 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
