#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn40m04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x26,x27,x28,x29,x46,x47,x48,x49,x114,x115,x116,x117,x118,x119,x120,x121,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x206,x207,x208,x209,x226,x227,x228,x229,x294,x295,x296,x297,x298,x299,x300,x301,x326,x327,x328,x329,x330,x331,x332,x333,x334,x335,x336,x337,x338,x339,x340,x341,x342,x343,x344,x345,x346,x347,x348,x349,x350,x351,x352,x353,x354,x355,x356,x357,x358,x359,x360,x361,b522,b523,b524,b525,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b538,b539,b540,b541,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b554,b555,b556,b557,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b570,b571,b572,b573,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b586,b587,b588,b589,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,b602,b603,b604,b605,b606,b607,b608,b609,b610,b611,b612,b613,b614,b615,b616,b617,b618,b619,b620,b621,b622,b623,b624,b625,b626,b627,b628,b629,b630,b631,b632,b633,b634,b635,b636,b637,b638,b639,b640,b641,b642,b643,b644,b645,b646,b647,b648,b649,b650,b651,b652,b653,b654,b655,b656,b657,b658,b659,b660,b661,b662,b663,b664,b665,b666,b667,b668,b669,b670,b671,b672,b673,b674,b675,b676,b677,b678,b679,b680,b681;
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
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x294); 
   fscanf(fp,"%f", &x295); 
   fscanf(fp,"%f", &x296); 
   fscanf(fp,"%f", &x297); 
   fscanf(fp,"%f", &x298); 
   fscanf(fp,"%f", &x299); 
   fscanf(fp,"%f", &x300); 
   fscanf(fp,"%f", &x301); 
   fscanf(fp,"%f", &x326); 
   fscanf(fp,"%f", &x327); 
   fscanf(fp,"%f", &x328); 
   fscanf(fp,"%f", &x329); 
   fscanf(fp,"%f", &x330); 
   fscanf(fp,"%f", &x331); 
   fscanf(fp,"%f", &x332); 
   fscanf(fp,"%f", &x333); 
   fscanf(fp,"%f", &x334); 
   fscanf(fp,"%f", &x335); 
   fscanf(fp,"%f", &x336); 
   fscanf(fp,"%f", &x337); 
   fscanf(fp,"%f", &x338); 
   fscanf(fp,"%f", &x339); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x342); 
   fscanf(fp,"%f", &x343); 
   fscanf(fp,"%f", &x344); 
   fscanf(fp,"%f", &x345); 
   fscanf(fp,"%f", &x346); 
   fscanf(fp,"%f", &x347); 
   fscanf(fp,"%f", &x348); 
   fscanf(fp,"%f", &x349); 
   fscanf(fp,"%f", &x350); 
   fscanf(fp,"%f", &x351); 
   fscanf(fp,"%f", &x352); 
   fscanf(fp,"%f", &x353); 
   fscanf(fp,"%f", &x354); 
   fscanf(fp,"%f", &x355); 
   fscanf(fp,"%f", &x356); 
   fscanf(fp,"%f", &x357); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 
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
   fscanf(fp,"%f", &b562); 
   fscanf(fp,"%f", &b563); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 
   fscanf(fp,"%f", &b570); 
   fscanf(fp,"%f", &b571); 
   fscanf(fp,"%f", &b572); 
   fscanf(fp,"%f", &b573); 
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
   fscanf(fp,"%f", &b586); 
   fscanf(fp,"%f", &b587); 
   fscanf(fp,"%f", &b588); 
   fscanf(fp,"%f", &b589); 
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
   fscanf(fp,"%f", &b602); 
   fscanf(fp,"%f", &b603); 
   fscanf(fp,"%f", &b604); 
   fscanf(fp,"%f", &b605); 
   fscanf(fp,"%f", &b606); 
   fscanf(fp,"%f", &b607); 
   fscanf(fp,"%f", &b608); 
   fscanf(fp,"%f", &b609); 
   fscanf(fp,"%f", &b610); 
   fscanf(fp,"%f", &b611); 
   fscanf(fp,"%f", &b612); 
   fscanf(fp,"%f", &b613); 
   fscanf(fp,"%f", &b614); 
   fscanf(fp,"%f", &b615); 
   fscanf(fp,"%f", &b616); 
   fscanf(fp,"%f", &b617); 
   fscanf(fp,"%f", &b618); 
   fscanf(fp,"%f", &b619); 
   fscanf(fp,"%f", &b620); 
   fscanf(fp,"%f", &b621); 
   fscanf(fp,"%f", &b622); 
   fscanf(fp,"%f", &b623); 
   fscanf(fp,"%f", &b624); 
   fscanf(fp,"%f", &b625); 
   fscanf(fp,"%f", &b626); 
   fscanf(fp,"%f", &b627); 
   fscanf(fp,"%f", &b628); 
   fscanf(fp,"%f", &b629); 
   fscanf(fp,"%f", &b630); 
   fscanf(fp,"%f", &b631); 
   fscanf(fp,"%f", &b632); 
   fscanf(fp,"%f", &b633); 
   fscanf(fp,"%f", &b634); 
   fscanf(fp,"%f", &b635); 
   fscanf(fp,"%f", &b636); 
   fscanf(fp,"%f", &b637); 
   fscanf(fp,"%f", &b638); 
   fscanf(fp,"%f", &b639); 
   fscanf(fp,"%f", &b640); 
   fscanf(fp,"%f", &b641); 
   fscanf(fp,"%f", &b642); 
   fscanf(fp,"%f", &b643); 
   fscanf(fp,"%f", &b644); 
   fscanf(fp,"%f", &b645); 
   fscanf(fp,"%f", &b646); 
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

   fclose(fp);
   res=-( + x2 + x3 + x4 + x5 - 5*x26 - 10*x27 - 5*x28 - 10*x29 + x46
 + x47 + x48 + x49 + 10*x114 + 5*x115 + 5*x116 + 10*x117 + 5*x118 + 5*x119
 + 5*x120 + 10*x121 - 40*x146 - 30*x147 - 15*x148 - 10*x149 - 15*x150
 - 20*x151 - 25*x152 - 20*x153 - 10*x154 - 30*x155 - 40*x156 - 30*x157
 - 30*x158 - 20*x159 - 20*x160 - 25*x161 - 35*x162 - 50*x163 - 20*x164
 - 50*x165 - 20*x166 - 30*x167 - 35*x168 - 10*x169 - 25*x170 - 50*x171
 - 10*x172 - 35*x173 - 15*x174 - 20*x175 - 20*x176 - 30*x177 - 30*x206
 - 40*x207 - 40*x208 - 35*x209 + x226 + x227 + x228 + x229 + 5*x294
 + 3*x295 + 4*x296 + 3*x297 + x298 + x299 + x300 + x301 - 220*x326
 - 210*x327 - 150*x328 - 125*x329 - 240*x330 - 220*x331 - 100*x332
 - 130*x333 - 190*x334 - 160*x335 - 150*x336 - 110*x337 - 190*x338
 - 190*x339 - 120*x340 - 100*x341 - 385*x342 - 490*x343 - 550*x344
 - 500*x345 - 390*x346 - 505*x347 - 490*x348 - 640*x349 - 480*x350
 - 600*x351 - 530*x352 - 560*x353 - 490*x354 - 600*x355 - 440*x356
 - 510*x357 - 550*x358 - 550*x359 - 600*x360 - 500*x361 + 5*b522 + 4*b523
 + 6*b524 + 3*b525 + 8*b526 + 7*b527 + 6*b528 + 5*b529 + 6*b530 + 9*b531
 + 4*b532 + 3*b533 + 10*b534 + 9*b535 + 5*b536 + 6*b537 + 6*b538 + 10*b539
 + 6*b540 + 9*b541 + 7*b542 + 7*b543 + 4*b544 + 2*b545 + 4*b546 + 3*b547
 + 2*b548 + 8*b549 + 5*b550 + 6*b551 + 7*b552 + 4*b553 + 2*b554 + 5*b555
 + 2*b556 + 6*b557 + 4*b558 + 7*b559 + 4*b560 + 7*b561 + 3*b562 + 9*b563
 + 3*b564 + 6*b565 + 7*b566 + 2*b567 + 9*b568 + 6*b569 + 3*b570 + b571
 + 9*b572 + 10*b573 + 2*b574 + 6*b575 + 3*b576 + 7*b577 + 4*b578 + 8*b579
 + b580 + 4*b581 + 2*b582 + 5*b583 + 2*b584 + 5*b585 + 3*b586 + 4*b587
 + 3*b588 + 7*b589 + 5*b590 + 7*b591 + 6*b592 + 2*b593 + 2*b594 + 8*b595
 + 4*b596 + 2*b597 + b598 + 4*b599 + b600 + b601 + 2*b602 + 5*b603
 + 2*b604 + 7*b605 + 9*b606 + 2*b607 + 9*b608 + 6*b609 + 5*b610 + 8*b611
 + 4*b612 + 3*b613 + 2*b614 + 3*b615 + 8*b616 + 9*b617 + 10*b618 + 6*b619
 + 3*b620 + 6*b621 + 4*b622 + 8*b623 + 7*b624 + 7*b625 + 7*b626 + 3*b627
 + 9*b628 + 3*b629 + 4*b630 + 8*b631 + 6*b632 + 8*b633 + 2*b634 + b635
 + 3*b636 + 9*b637 + 8*b638 + 3*b639 + 4*b640 + 3*b641 + 9*b642 + 5*b643
 + b644 + 2*b645 + 3*b646 + 9*b647 + 5*b648 + 3*b649 + 5*b650 + 3*b651
 + 3*b652 + 4*b653 + 5*b654 + 3*b655 + 2*b656 + 7*b657 + 6*b658 + 4*b659
 + 6*b660 + 7*b661 + 2*b662 + 6*b663 + 6*b664 + 7*b665 + 6*b666 + 4*b667
 + 3*b668 + 5*b669 + 3*b670 + 2*b671 + b672 + 3*b673 + 5*b674 + 8*b675
 + 6*b676 + 5*b677 + 9*b678 + 5*b679 + 2*b680 + b681 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
