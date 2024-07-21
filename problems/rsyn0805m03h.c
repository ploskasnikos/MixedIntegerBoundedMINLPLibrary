#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0805m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b818,b819,b820,b821,b822,b823,b824,b825,b826,b830,b831,b832,b833,b834,b835,b836,b837,b838,b842,b843,b844,b845,b846,b847,b848,b849,b850,b854,b855,b856,b857,b858,b859,b860,b861,b862,b866,b867,b868,b869,b870,b871,b872,b873,b874,b878,b879,b880,b881,b882,b883,b884,b885,b886,b890,b891,b892,b893,b894,b895,b896,b897,b898,b902,b903,b904,b905,b906,b907,b908,b909,b910,x911,x912,x913,x929,x930,x931,x944,x945,x946,x947,x948,x949,x950,x951,x952,x953,x954,x955,b1037,b1038,b1039,b1040,b1041,b1042,b1043,b1044,b1045,b1046,b1047,b1048,b1049,b1050,b1051;
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
   fscanf(fp,"%f", &b818); 
   fscanf(fp,"%f", &b819); 
   fscanf(fp,"%f", &b820); 
   fscanf(fp,"%f", &b821); 
   fscanf(fp,"%f", &b822); 
   fscanf(fp,"%f", &b823); 
   fscanf(fp,"%f", &b824); 
   fscanf(fp,"%f", &b825); 
   fscanf(fp,"%f", &b826); 
   fscanf(fp,"%f", &b830); 
   fscanf(fp,"%f", &b831); 
   fscanf(fp,"%f", &b832); 
   fscanf(fp,"%f", &b833); 
   fscanf(fp,"%f", &b834); 
   fscanf(fp,"%f", &b835); 
   fscanf(fp,"%f", &b836); 
   fscanf(fp,"%f", &b837); 
   fscanf(fp,"%f", &b838); 
   fscanf(fp,"%f", &b842); 
   fscanf(fp,"%f", &b843); 
   fscanf(fp,"%f", &b844); 
   fscanf(fp,"%f", &b845); 
   fscanf(fp,"%f", &b846); 
   fscanf(fp,"%f", &b847); 
   fscanf(fp,"%f", &b848); 
   fscanf(fp,"%f", &b849); 
   fscanf(fp,"%f", &b850); 
   fscanf(fp,"%f", &b854); 
   fscanf(fp,"%f", &b855); 
   fscanf(fp,"%f", &b856); 
   fscanf(fp,"%f", &b857); 
   fscanf(fp,"%f", &b858); 
   fscanf(fp,"%f", &b859); 
   fscanf(fp,"%f", &b860); 
   fscanf(fp,"%f", &b861); 
   fscanf(fp,"%f", &b862); 
   fscanf(fp,"%f", &b866); 
   fscanf(fp,"%f", &b867); 
   fscanf(fp,"%f", &b868); 
   fscanf(fp,"%f", &b869); 
   fscanf(fp,"%f", &b870); 
   fscanf(fp,"%f", &b871); 
   fscanf(fp,"%f", &b872); 
   fscanf(fp,"%f", &b873); 
   fscanf(fp,"%f", &b874); 
   fscanf(fp,"%f", &b878); 
   fscanf(fp,"%f", &b879); 
   fscanf(fp,"%f", &b880); 
   fscanf(fp,"%f", &b881); 
   fscanf(fp,"%f", &b882); 
   fscanf(fp,"%f", &b883); 
   fscanf(fp,"%f", &b884); 
   fscanf(fp,"%f", &b885); 
   fscanf(fp,"%f", &b886); 
   fscanf(fp,"%f", &b890); 
   fscanf(fp,"%f", &b891); 
   fscanf(fp,"%f", &b892); 
   fscanf(fp,"%f", &b893); 
   fscanf(fp,"%f", &b894); 
   fscanf(fp,"%f", &b895); 
   fscanf(fp,"%f", &b896); 
   fscanf(fp,"%f", &b897); 
   fscanf(fp,"%f", &b898); 
   fscanf(fp,"%f", &b902); 
   fscanf(fp,"%f", &b903); 
   fscanf(fp,"%f", &b904); 
   fscanf(fp,"%f", &b905); 
   fscanf(fp,"%f", &b906); 
   fscanf(fp,"%f", &b907); 
   fscanf(fp,"%f", &b908); 
   fscanf(fp,"%f", &b909); 
   fscanf(fp,"%f", &b910); 
   fscanf(fp,"%f", &x911); 
   fscanf(fp,"%f", &x912); 
   fscanf(fp,"%f", &x913); 
   fscanf(fp,"%f", &x929); 
   fscanf(fp,"%f", &x930); 
   fscanf(fp,"%f", &x931); 
   fscanf(fp,"%f", &x944); 
   fscanf(fp,"%f", &x945); 
   fscanf(fp,"%f", &x946); 
   fscanf(fp,"%f", &x947); 
   fscanf(fp,"%f", &x948); 
   fscanf(fp,"%f", &x949); 
   fscanf(fp,"%f", &x950); 
   fscanf(fp,"%f", &x951); 
   fscanf(fp,"%f", &x952); 
   fscanf(fp,"%f", &x953); 
   fscanf(fp,"%f", &x954); 
   fscanf(fp,"%f", &x955); 
   fscanf(fp,"%f", &b1037); 
   fscanf(fp,"%f", &b1038); 
   fscanf(fp,"%f", &b1039); 
   fscanf(fp,"%f", &b1040); 
   fscanf(fp,"%f", &b1041); 
   fscanf(fp,"%f", &b1042); 
   fscanf(fp,"%f", &b1043); 
   fscanf(fp,"%f", &b1044); 
   fscanf(fp,"%f", &b1045); 
   fscanf(fp,"%f", &b1046); 
   fscanf(fp,"%f", &b1047); 
   fscanf(fp,"%f", &b1048); 
   fscanf(fp,"%f", &b1049); 
   fscanf(fp,"%f", &b1050); 
   fscanf(fp,"%f", &b1051); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 20*x17 + 21*x18 + 19*x19 + 18*x29
 + 20*x30 + 20*x31 + 16*x65 + 19*x66 + 17*x67 - 26*x77 - 31*x78 - 31*x79
 - 30*x83 - 29*x84 - 37*x85 + 20*x86 + 18*x87 + 21*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 20*x101 - 23*x102 - 32*x103 - 21*x104
 - 25*x105 - 22*x106 + 6*b818 + 4*b819 + 3*b820 + 40*b821 + 35*b822
 + 20*b823 + 46*b824 + 39*b825 + 23*b826 + 7*b830 + 4*b831 + 4*b832
 + 30*b833 + 25*b834 + 20*b835 + 37*b836 + 29*b837 + 22*b838 + 7*b842
 + 5*b843 + 3*b844 + 15*b845 + 5*b846 + 2*b847 + 22*b848 + 10*b849
 + 5*b850 + 11*b854 + 8*b855 + 6*b856 + 13*b857 + 8*b858 + 3*b859
 + 24*b860 + 16*b861 + 9*b862 + 10*b866 + 7*b867 + 6*b868 + 13*b869
 + 8*b870 + 3*b871 + 23*b872 + 15*b873 + 9*b874 + 9*b878 + 9*b879 + 7*b880
 + 30*b881 + 30*b882 + 25*b883 + 39*b884 + 39*b885 + 32*b886 + 8*b890
 + 7*b891 + 7*b892 + 20*b893 + 15*b894 + 10*b895 + 28*b896 + 22*b897
 + 17*b898 + 8*b902 + 6*b903 + 5*b904 + 15*b905 + 10*b906 + 6*b907
 + 23*b908 + 16*b909 + 11*b910 + x911 + x912 + x913 - 5*x929 - 10*x930
 - 5*x931 + 2*x944 + x945 + 2*x946 - 80*x947 - 90*x948 - 120*x949
 - 285*x950 - 390*x951 - 350*x952 - 290*x953 - 405*x954 - 190*x955
 + 5*b1037 + 4*b1038 + 6*b1039 + 8*b1040 + 7*b1041 + 6*b1042 + 6*b1043
 + 9*b1044 + 4*b1045 + 10*b1046 + 9*b1047 + 5*b1048 + 6*b1049 + 10*b1050
 + 6*b1051 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
