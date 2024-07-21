#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0815m04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,x602,x603,x604,x605,x626,x627,x628,x629,x646,x647,x648,x649,x698,x699,x700,x701,x702,x703,x704,x705,x714,x715,x716,x717,x718,x719,x720,x721,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,b822,b823,b824,b825,b826,b827,b828,b829,b830,b831,b832,b833,b834,b835,b836,b837,b838,b839,b840,b841,b842,b843,b844,b845,b846,b847,b848,b849,b850,b851,b852,b853,b854,b855,b856,b857,b858,b859,b860,b861,b862,b863,b864,b865,b866,b867,b868,b869,b870,b871,b872,b873,b874,b875,b876,b877,b878,b879,b880,b881;
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
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
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
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b495); 
   fscanf(fp,"%f", &b496); 
   fscanf(fp,"%f", &b497); 
   fscanf(fp,"%f", &b498); 
   fscanf(fp,"%f", &b499); 
   fscanf(fp,"%f", &b500); 
   fscanf(fp,"%f", &b501); 
   fscanf(fp,"%f", &b502); 
   fscanf(fp,"%f", &b503); 
   fscanf(fp,"%f", &b504); 
   fscanf(fp,"%f", &b505); 
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
   fscanf(fp,"%f", &b574); 
   fscanf(fp,"%f", &b575); 
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b582); 
   fscanf(fp,"%f", &b583); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b590); 
   fscanf(fp,"%f", &b591); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &b598); 
   fscanf(fp,"%f", &b599); 
   fscanf(fp,"%f", &b600); 
   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 
   fscanf(fp,"%f", &x698); 
   fscanf(fp,"%f", &x699); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x702); 
   fscanf(fp,"%f", &x703); 
   fscanf(fp,"%f", &x704); 
   fscanf(fp,"%f", &x705); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x746); 
   fscanf(fp,"%f", &x747); 
   fscanf(fp,"%f", &x748); 
   fscanf(fp,"%f", &x749); 
   fscanf(fp,"%f", &x750); 
   fscanf(fp,"%f", &x751); 
   fscanf(fp,"%f", &x752); 
   fscanf(fp,"%f", &x753); 
   fscanf(fp,"%f", &x754); 
   fscanf(fp,"%f", &x755); 
   fscanf(fp,"%f", &x756); 
   fscanf(fp,"%f", &x757); 
   fscanf(fp,"%f", &x758); 
   fscanf(fp,"%f", &x759); 
   fscanf(fp,"%f", &x760); 
   fscanf(fp,"%f", &x761); 
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

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 15*x5 + 20*x22 + 21*x23 + 19*x24
 + 19*x25 + 18*x38 + 20*x39 + 20*x40 + 19*x41 + 16*x86 + 19*x87 + 17*x88
 + 16*x89 - 26*x102 - 31*x103 - 31*x104 - 35*x105 - 30*x110 - 29*x111
 - 37*x112 - 36*x113 + 20*x114 + 18*x115 + 21*x116 + 16*x117 - 2*x126
 - 2*x127 - 2*x128 - 2*x129 - 3*x130 - 2*x131 - 2*x132 - 2*x133 - 3*x134
 - 3*x135 - 3*x136 - 3*x137 - 2*x138 - 2*x139 - 2*x140 - 2*x141 + 6*b478
 + 4*b479 + 3*b480 + 3*b481 + 40*b482 + 35*b483 + 20*b484 + 20*b485
 + 46*b486 + 39*b487 + 23*b488 + 23*b489 + 7*b494 + 4*b495 + 4*b496
 + 4*b497 + 30*b498 + 25*b499 + 20*b500 + 20*b501 + 37*b502 + 29*b503
 + 22*b504 + 24*b505 + 7*b510 + 5*b511 + 3*b512 + 3*b513 + 15*b514
 + 5*b515 + 2*b516 + 2*b517 + 22*b518 + 10*b519 + 5*b520 + 5*b521
 + 11*b526 + 8*b527 + 6*b528 + 5*b529 + 13*b530 + 8*b531 + 3*b532 + 3*b533
 + 24*b534 + 16*b535 + 9*b536 + 8*b537 + 10*b542 + 7*b543 + 6*b544
 + 6*b545 + 13*b546 + 8*b547 + 3*b548 + 2*b549 + 23*b550 + 15*b551
 + 9*b552 + 8*b553 + 9*b558 + 9*b559 + 7*b560 + 6*b561 + 30*b562 + 30*b563
 + 25*b564 + 20*b565 + 39*b566 + 39*b567 + 32*b568 + 26*b569 + 8*b574
 + 7*b575 + 7*b576 + 4*b577 + 20*b578 + 15*b579 + 10*b580 + 10*b581
 + 28*b582 + 22*b583 + 17*b584 + 14*b585 + 8*b590 + 6*b591 + 5*b592
 + 3*b593 + 15*b594 + 10*b595 + 6*b596 + 3*b597 + 23*b598 + 16*b599
 + 11*b600 + 6*b601 + x602 + x603 + x604 + x605 - 5*x626 - 10*x627
 - 5*x628 - 10*x629 + 2*x646 + x647 + 2*x648 + x649 - 500*x698 - 600*x699
 - 350*x700 - 400*x701 - 350*x702 - 400*x703 - 450*x704 - 400*x705
 + 10*x714 + 5*x715 + 5*x716 + 10*x717 + 5*x718 + 5*x719 + 5*x720
 + 10*x721 - 180*x746 - 130*x747 - 215*x748 - 210*x749 - 110*x750
 - 120*x751 - 125*x752 - 130*x753 - 110*x754 - 130*x755 - 140*x756
 - 140*x757 - 280*x758 - 290*x759 - 220*x760 - 200*x761 + 5*b822 + 4*b823
 + 6*b824 + 3*b825 + 8*b826 + 7*b827 + 6*b828 + 5*b829 + 6*b830 + 9*b831
 + 4*b832 + 3*b833 + 10*b834 + 9*b835 + 5*b836 + 6*b837 + 6*b838 + 10*b839
 + 6*b840 + 9*b841 + 7*b842 + 7*b843 + 4*b844 + 2*b845 + 4*b846 + 3*b847
 + 2*b848 + 8*b849 + 5*b850 + 6*b851 + 7*b852 + 4*b853 + 2*b854 + 5*b855
 + 2*b856 + 6*b857 + 4*b858 + 7*b859 + 4*b860 + 7*b861 + 3*b862 + 9*b863
 + 3*b864 + 6*b865 + 7*b866 + 2*b867 + 9*b868 + 6*b869 + 3*b870 + b871
 + 9*b872 + 10*b873 + 2*b874 + 6*b875 + 3*b876 + 7*b877 + 4*b878 + 8*b879
 + b880 + 4*b881 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
