#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0820m04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,x602,x603,x604,x605,x626,x627,x628,x629,x646,x647,x648,x649,x714,x715,x716,x717,x718,x719,x720,x721,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x778,x779,x780,x781,b862,b863,b864,b865,b866,b867,b868,b869,b870,b871,b872,b873,b874,b875,b876,b877,b878,b879,b880,b881,b882,b883,b884,b885,b886,b887,b888,b889,b890,b891,b892,b893,b894,b895,b896,b897,b898,b899,b900,b901,b902,b903,b904,b905,b906,b907,b908,b909,b910,b911,b912,b913,b914,b915,b916,b917,b918,b919,b920,b921,b922,b923,b924,b925,b926,b927,b928,b929,b930,b931,b932,b933,b934,b935,b936,b937,b938,b939,b940,b941;
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
   fscanf(fp,"%f", &x762); 
   fscanf(fp,"%f", &x763); 
   fscanf(fp,"%f", &x764); 
   fscanf(fp,"%f", &x765); 
   fscanf(fp,"%f", &x766); 
   fscanf(fp,"%f", &x767); 
   fscanf(fp,"%f", &x768); 
   fscanf(fp,"%f", &x769); 
   fscanf(fp,"%f", &x770); 
   fscanf(fp,"%f", &x771); 
   fscanf(fp,"%f", &x772); 
   fscanf(fp,"%f", &x773); 
   fscanf(fp,"%f", &x774); 
   fscanf(fp,"%f", &x775); 
   fscanf(fp,"%f", &x776); 
   fscanf(fp,"%f", &x777); 
   fscanf(fp,"%f", &x778); 
   fscanf(fp,"%f", &x779); 
   fscanf(fp,"%f", &x780); 
   fscanf(fp,"%f", &x781); 
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
 - 5*x628 - 10*x629 + 2*x646 + x647 + 2*x648 + x649 + 10*x714 + 5*x715
 + 5*x716 + 10*x717 + 5*x718 + 5*x719 + 5*x720 + 10*x721 - 80*x746
 - 130*x747 - 215*x748 - 210*x749 - 110*x750 - 120*x751 - 125*x752
 - 130*x753 - 110*x754 - 130*x755 - 140*x756 - 140*x757 - 80*x758
 - 90*x759 - 120*x760 - 100*x761 - 285*x762 - 390*x763 - 350*x764
 - 300*x765 - 290*x766 - 405*x767 - 190*x768 - 340*x769 - 280*x770
 - 400*x771 - 430*x772 - 260*x773 - 290*x774 - 300*x775 - 240*x776
 - 310*x777 - 350*x778 - 250*x779 - 300*x780 - 400*x781 + 5*b862 + 4*b863
 + 6*b864 + 3*b865 + 8*b866 + 7*b867 + 6*b868 + 5*b869 + 6*b870 + 9*b871
 + 4*b872 + 3*b873 + 10*b874 + 9*b875 + 5*b876 + 6*b877 + 6*b878 + 10*b879
 + 6*b880 + 9*b881 + 7*b882 + 7*b883 + 4*b884 + 2*b885 + 4*b886 + 3*b887
 + 2*b888 + 8*b889 + 5*b890 + 6*b891 + 7*b892 + 4*b893 + 2*b894 + 5*b895
 + 2*b896 + 6*b897 + 4*b898 + 7*b899 + 4*b900 + 7*b901 + 3*b902 + 9*b903
 + 3*b904 + 6*b905 + 7*b906 + 2*b907 + 9*b908 + 6*b909 + 3*b910 + b911
 + 9*b912 + 10*b913 + 2*b914 + 6*b915 + 3*b916 + 7*b917 + 4*b918 + 8*b919
 + b920 + 4*b921 + 2*b922 + 5*b923 + 2*b924 + 5*b925 + 3*b926 + 4*b927
 + 3*b928 + 7*b929 + 5*b930 + 7*b931 + 6*b932 + 2*b933 + 2*b934 + 8*b935
 + 4*b936 + 2*b937 + b938 + 4*b939 + b940 + b941 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
