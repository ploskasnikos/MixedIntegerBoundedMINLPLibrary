#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn40m02hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x14,x15,x24,x25,x58,x59,x60,x61,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x104,x105,x114,x115,x148,x149,x150,x151,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,b606,b607,b608,b609,b610,b611,b612,b613,b614,b615,b616,b617,b618,b619,b620,b621,b622,b623,b624,b625,b626,b627,b628,b629,b630,b631,b632,b633,b634,b635,b636,b637,b638,b639,b640,b641,b642,b643,b644,b645,b646,b647,b648,b649,b650,b651,b652,b653,b654,b655,b656,b657,b658,b659,b660,b661,b662,b663,b664,b665,b666,b667,b668,b669,b670,b671,b672,b673,b674,b675,b676,b677,b678,b679,b680,b681,b682,b683,b684,b685;
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
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
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
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x181); 
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
   fscanf(fp,"%f", &b682); 
   fscanf(fp,"%f", &b683); 
   fscanf(fp,"%f", &b684); 
   fscanf(fp,"%f", &b685); 

   fclose(fp);
   res=-( + x2 + x3 - 5*x14 - 10*x15 + x24 + x25 + 10*x58 + 5*x59 + 5*x60
 + 5*x61 - 40*x74 - 30*x75 - 15*x76 - 20*x77 - 10*x78 - 30*x79 - 30*x80
 - 20*x81 - 35*x82 - 50*x83 - 20*x84 - 30*x85 - 25*x86 - 50*x87 - 15*x88
 - 20*x89 - 30*x104 - 40*x105 + x114 + x115 + 5*x148 + 3*x149 + x150
 + x151 - 220*x164 - 210*x165 - 240*x166 - 220*x167 - 190*x168 - 160*x169
 - 190*x170 - 190*x171 - 385*x172 - 490*x173 - 390*x174 - 505*x175
 - 480*x176 - 600*x177 - 490*x178 - 600*x179 - 550*x180 - 550*x181
 + 5*b606 + 4*b607 + 8*b608 + 7*b609 + 6*b610 + 9*b611 + 10*b612 + 9*b613
 + 6*b614 + 10*b615 + 7*b616 + 7*b617 + 4*b618 + 3*b619 + 5*b620 + 6*b621
 + 2*b622 + 5*b623 + 4*b624 + 7*b625 + 3*b626 + 9*b627 + 7*b628 + 2*b629
 + 3*b630 + b631 + 2*b632 + 6*b633 + 4*b634 + 8*b635 + 2*b636 + 5*b637
 + 3*b638 + 4*b639 + 5*b640 + 7*b641 + 2*b642 + 8*b643 + b644 + 4*b645
 + 2*b646 + 5*b647 + 9*b648 + 2*b649 + 5*b650 + 8*b651 + 2*b652 + 3*b653
 + 10*b654 + 6*b655 + 4*b656 + 8*b657 + 7*b658 + 3*b659 + 4*b660 + 8*b661
 + 2*b662 + b663 + 8*b664 + 3*b665 + 9*b666 + 5*b667 + 3*b668 + 9*b669
 + 5*b670 + 3*b671 + 5*b672 + 3*b673 + 6*b674 + 4*b675 + 2*b676 + 6*b677
 + 6*b678 + 4*b679 + 3*b680 + 2*b681 + 5*b682 + 8*b683 + 9*b684 + 5*b685
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
