#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0805m04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,x602,x603,x604,x605,x626,x627,x628,x629,x646,x647,x648,x649,x650,x651,x652,x653,x654,x655,x656,x657,x658,x659,x660,x661,b682,b683,b684,b685,b686,b687,b688,b689,b690,b691,b692,b693,b694,b695,b696,b697,b698,b699,b700,b701;
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
 - 5*x628 - 10*x629 + 2*x646 + x647 + 2*x648 + x649 - 80*x650 - 90*x651
 - 120*x652 - 100*x653 - 285*x654 - 390*x655 - 350*x656 - 300*x657
 - 290*x658 - 405*x659 - 190*x660 - 340*x661 + 5*b682 + 4*b683 + 6*b684
 + 3*b685 + 8*b686 + 7*b687 + 6*b688 + 5*b689 + 6*b690 + 9*b691 + 4*b692
 + 3*b693 + 10*b694 + 9*b695 + 5*b696 + 6*b697 + 6*b698 + 10*b699 + 6*b700
 + 9*b701 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
