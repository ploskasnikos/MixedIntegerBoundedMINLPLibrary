#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0810m04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,x602,x603,x604,x605,x626,x627,x628,x629,x646,x647,x648,x649,x678,x679,x680,x681,x682,x683,x684,x685,x686,x687,x688,x689,x690,x691,x692,x693,x694,x695,x696,x697,x698,x699,x700,x701,b742,b743,b744,b745,b746,b747,b748,b749,b750,b751,b752,b753,b754,b755,b756,b757,b758,b759,b760,b761,b762,b763,b764,b765,b766,b767,b768,b769,b770,b771,b772,b773,b774,b775,b776,b777,b778,b779,b780,b781;
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
   fscanf(fp,"%f", &x678); 
   fscanf(fp,"%f", &x679); 
   fscanf(fp,"%f", &x680); 
   fscanf(fp,"%f", &x681); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x689); 
   fscanf(fp,"%f", &x690); 
   fscanf(fp,"%f", &x691); 
   fscanf(fp,"%f", &x692); 
   fscanf(fp,"%f", &x693); 
   fscanf(fp,"%f", &x694); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x696); 
   fscanf(fp,"%f", &x697); 
   fscanf(fp,"%f", &x698); 
   fscanf(fp,"%f", &x699); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &b742); 
   fscanf(fp,"%f", &b743); 
   fscanf(fp,"%f", &b744); 
   fscanf(fp,"%f", &b745); 
   fscanf(fp,"%f", &b746); 
   fscanf(fp,"%f", &b747); 
   fscanf(fp,"%f", &b748); 
   fscanf(fp,"%f", &b749); 
   fscanf(fp,"%f", &b750); 
   fscanf(fp,"%f", &b751); 
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

   fclose(fp);
   res=-( + 10*x2 + 7*x3 + 5*x4 + 5*x5 + 15*x22 + 11*x23 + 9*x24 + 9*x25
 + 18*x38 + 14*x39 + 10*x40 + 9*x41 + 19*x86 + 17*x87 + 17*x88 + 16*x89
 - 32*x102 - 41*x103 - 31*x104 - 35*x105 - 40*x110 - 39*x111 - 27*x112
 - 36*x113 + 16*x114 + 16*x115 + 15*x116 + 12*x117 - 3*x126 - 3*x127
 - 3*x128 - 3*x129 - 2*x130 - 2*x131 - 2*x132 - 2*x133 - 20*x134 - 23*x135
 - 32*x136 - 22*x137 - 21*x138 - 25*x139 - 22*x140 - 25*x141 + 6*b478
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
 - 5*x628 - 10*x629 + 2*x646 + x647 + 2*x648 + x649 - 80*x678 - 90*x679
 - 120*x680 - 100*x681 - 285*x682 - 390*x683 - 350*x684 - 300*x685
 - 290*x686 - 405*x687 - 190*x688 - 340*x689 - 280*x690 - 400*x691
 - 430*x692 - 260*x693 - 290*x694 - 300*x695 - 240*x696 - 310*x697
 - 350*x698 - 250*x699 - 300*x700 - 400*x701 + 5*b742 + 4*b743 + 6*b744
 + 3*b745 + 8*b746 + 7*b747 + 6*b748 + 5*b749 + 6*b750 + 9*b751 + 4*b752
 + 3*b753 + 10*b754 + 9*b755 + 5*b756 + 6*b757 + 6*b758 + 10*b759 + 6*b760
 + 9*b761 + 7*b762 + 7*b763 + 4*b764 + 2*b765 + 4*b766 + 3*b767 + 2*b768
 + 8*b769 + 5*b770 + 6*b771 + 7*b772 + 4*b773 + 2*b774 + 5*b775 + 2*b776
 + 6*b777 + 4*b778 + 7*b779 + 4*b780 + 7*b781 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
