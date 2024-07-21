#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0815m02h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b566,b567,b568,b569,b570,b571,b574,b575,b576,b577,b578,b579,b582,b583,b584,b585,b586,b587,b590,b591,b592,b593,b594,b595,b598,b599,b600,b601,b602,b603,b606,b607,b608,b609,b610,b611,b614,b615,b616,b617,b618,b619,b622,b623,b624,b625,b626,b627,x628,x629,x640,x641,x650,x651,x676,x677,x678,x679,x684,x685,x686,x687,x700,x701,x702,x703,x704,x705,x706,x707,b870,b871,b872,b873,b874,b875,b876,b877,b878,b879,b880,b881,b882,b883,b884,b885,b886,b887,b888,b889,b890,b891,b892,b893,b894,b895,b896,b897,b898,b899;
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
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 
   fscanf(fp,"%f", &b570); 
   fscanf(fp,"%f", &b571); 
   fscanf(fp,"%f", &b574); 
   fscanf(fp,"%f", &b575); 
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b582); 
   fscanf(fp,"%f", &b583); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b586); 
   fscanf(fp,"%f", &b587); 
   fscanf(fp,"%f", &b590); 
   fscanf(fp,"%f", &b591); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b598); 
   fscanf(fp,"%f", &b599); 
   fscanf(fp,"%f", &b600); 
   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &b602); 
   fscanf(fp,"%f", &b603); 
   fscanf(fp,"%f", &b606); 
   fscanf(fp,"%f", &b607); 
   fscanf(fp,"%f", &b608); 
   fscanf(fp,"%f", &b609); 
   fscanf(fp,"%f", &b610); 
   fscanf(fp,"%f", &b611); 
   fscanf(fp,"%f", &b614); 
   fscanf(fp,"%f", &b615); 
   fscanf(fp,"%f", &b616); 
   fscanf(fp,"%f", &b617); 
   fscanf(fp,"%f", &b618); 
   fscanf(fp,"%f", &b619); 
   fscanf(fp,"%f", &b622); 
   fscanf(fp,"%f", &b623); 
   fscanf(fp,"%f", &b624); 
   fscanf(fp,"%f", &b625); 
   fscanf(fp,"%f", &b626); 
   fscanf(fp,"%f", &b627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x640); 
   fscanf(fp,"%f", &x641); 
   fscanf(fp,"%f", &x650); 
   fscanf(fp,"%f", &x651); 
   fscanf(fp,"%f", &x676); 
   fscanf(fp,"%f", &x677); 
   fscanf(fp,"%f", &x678); 
   fscanf(fp,"%f", &x679); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 
   fscanf(fp,"%f", &x700); 
   fscanf(fp,"%f", &x701); 
   fscanf(fp,"%f", &x702); 
   fscanf(fp,"%f", &x703); 
   fscanf(fp,"%f", &x704); 
   fscanf(fp,"%f", &x705); 
   fscanf(fp,"%f", &x706); 
   fscanf(fp,"%f", &x707); 
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

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 3*x68 - 3*x69 - 2*x70 - 2*x71 + 6*b566 + 4*b567
 + 40*b568 + 35*b569 + 46*b570 + 39*b571 + 7*b574 + 4*b575 + 30*b576
 + 25*b577 + 37*b578 + 29*b579 + 7*b582 + 5*b583 + 15*b584 + 5*b585
 + 22*b586 + 10*b587 + 11*b590 + 8*b591 + 13*b592 + 8*b593 + 24*b594
 + 16*b595 + 10*b598 + 7*b599 + 13*b600 + 8*b601 + 23*b602 + 15*b603
 + 9*b606 + 9*b607 + 30*b608 + 30*b609 + 39*b610 + 39*b611 + 8*b614
 + 7*b615 + 20*b616 + 15*b617 + 28*b618 + 22*b619 + 8*b622 + 6*b623
 + 15*b624 + 10*b625 + 23*b626 + 16*b627 + x628 + x629 - 5*x640 - 10*x641
 + 2*x650 + x651 - 500*x676 - 600*x677 - 350*x678 - 400*x679 + 10*x684
 + 5*x685 + 5*x686 + 5*x687 - 80*x700 - 130*x701 - 110*x702 - 120*x703
 - 110*x704 - 130*x705 - 80*x706 - 90*x707 + 5*b870 + 4*b871 + 8*b872
 + 7*b873 + 6*b874 + 9*b875 + 10*b876 + 9*b877 + 6*b878 + 10*b879 + 7*b880
 + 7*b881 + 4*b882 + 3*b883 + 5*b884 + 6*b885 + 2*b886 + 5*b887 + 4*b888
 + 7*b889 + 3*b890 + 9*b891 + 7*b892 + 2*b893 + 3*b894 + b895 + 2*b896
 + 6*b897 + 4*b898 + 8*b899 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
