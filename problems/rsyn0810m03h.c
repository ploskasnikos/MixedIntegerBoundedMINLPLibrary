#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0810m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b833,b834,b835,b836,b837,b838,b839,b840,b841,b845,b846,b847,b848,b849,b850,b851,b852,b853,b857,b858,b859,b860,b861,b862,b863,b864,b865,b869,b870,b871,b872,b873,b874,b875,b876,b877,b881,b882,b883,b884,b885,b886,b887,b888,b889,b893,b894,b895,b896,b897,b898,b899,b900,b901,b905,b906,b907,b908,b909,b910,b911,b912,b913,b917,b918,b919,b920,b921,b922,b923,b924,b925,x926,x927,x928,x944,x945,x946,x959,x960,x961,x983,x984,x985,x986,x987,x988,x989,x990,x991,x992,x993,x994,x995,x996,x997,x998,x999,x1000,b1157,b1158,b1159,b1160,b1161,b1162,b1163,b1164,b1165,b1166,b1167,b1168,b1169,b1170,b1171,b1172,b1173,b1174,b1175,b1176,b1177,b1178,b1179,b1180,b1181,b1182,b1183,b1184,b1185,b1186;
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
   fscanf(fp,"%f", &b833); 
   fscanf(fp,"%f", &b834); 
   fscanf(fp,"%f", &b835); 
   fscanf(fp,"%f", &b836); 
   fscanf(fp,"%f", &b837); 
   fscanf(fp,"%f", &b838); 
   fscanf(fp,"%f", &b839); 
   fscanf(fp,"%f", &b840); 
   fscanf(fp,"%f", &b841); 
   fscanf(fp,"%f", &b845); 
   fscanf(fp,"%f", &b846); 
   fscanf(fp,"%f", &b847); 
   fscanf(fp,"%f", &b848); 
   fscanf(fp,"%f", &b849); 
   fscanf(fp,"%f", &b850); 
   fscanf(fp,"%f", &b851); 
   fscanf(fp,"%f", &b852); 
   fscanf(fp,"%f", &b853); 
   fscanf(fp,"%f", &b857); 
   fscanf(fp,"%f", &b858); 
   fscanf(fp,"%f", &b859); 
   fscanf(fp,"%f", &b860); 
   fscanf(fp,"%f", &b861); 
   fscanf(fp,"%f", &b862); 
   fscanf(fp,"%f", &b863); 
   fscanf(fp,"%f", &b864); 
   fscanf(fp,"%f", &b865); 
   fscanf(fp,"%f", &b869); 
   fscanf(fp,"%f", &b870); 
   fscanf(fp,"%f", &b871); 
   fscanf(fp,"%f", &b872); 
   fscanf(fp,"%f", &b873); 
   fscanf(fp,"%f", &b874); 
   fscanf(fp,"%f", &b875); 
   fscanf(fp,"%f", &b876); 
   fscanf(fp,"%f", &b877); 
   fscanf(fp,"%f", &b881); 
   fscanf(fp,"%f", &b882); 
   fscanf(fp,"%f", &b883); 
   fscanf(fp,"%f", &b884); 
   fscanf(fp,"%f", &b885); 
   fscanf(fp,"%f", &b886); 
   fscanf(fp,"%f", &b887); 
   fscanf(fp,"%f", &b888); 
   fscanf(fp,"%f", &b889); 
   fscanf(fp,"%f", &b893); 
   fscanf(fp,"%f", &b894); 
   fscanf(fp,"%f", &b895); 
   fscanf(fp,"%f", &b896); 
   fscanf(fp,"%f", &b897); 
   fscanf(fp,"%f", &b898); 
   fscanf(fp,"%f", &b899); 
   fscanf(fp,"%f", &b900); 
   fscanf(fp,"%f", &b901); 
   fscanf(fp,"%f", &b905); 
   fscanf(fp,"%f", &b906); 
   fscanf(fp,"%f", &b907); 
   fscanf(fp,"%f", &b908); 
   fscanf(fp,"%f", &b909); 
   fscanf(fp,"%f", &b910); 
   fscanf(fp,"%f", &b911); 
   fscanf(fp,"%f", &b912); 
   fscanf(fp,"%f", &b913); 
   fscanf(fp,"%f", &b917); 
   fscanf(fp,"%f", &b918); 
   fscanf(fp,"%f", &b919); 
   fscanf(fp,"%f", &b920); 
   fscanf(fp,"%f", &b921); 
   fscanf(fp,"%f", &b922); 
   fscanf(fp,"%f", &b923); 
   fscanf(fp,"%f", &b924); 
   fscanf(fp,"%f", &b925); 
   fscanf(fp,"%f", &x926); 
   fscanf(fp,"%f", &x927); 
   fscanf(fp,"%f", &x928); 
   fscanf(fp,"%f", &x944); 
   fscanf(fp,"%f", &x945); 
   fscanf(fp,"%f", &x946); 
   fscanf(fp,"%f", &x959); 
   fscanf(fp,"%f", &x960); 
   fscanf(fp,"%f", &x961); 
   fscanf(fp,"%f", &x983); 
   fscanf(fp,"%f", &x984); 
   fscanf(fp,"%f", &x985); 
   fscanf(fp,"%f", &x986); 
   fscanf(fp,"%f", &x987); 
   fscanf(fp,"%f", &x988); 
   fscanf(fp,"%f", &x989); 
   fscanf(fp,"%f", &x990); 
   fscanf(fp,"%f", &x991); 
   fscanf(fp,"%f", &x992); 
   fscanf(fp,"%f", &x993); 
   fscanf(fp,"%f", &x994); 
   fscanf(fp,"%f", &x995); 
   fscanf(fp,"%f", &x996); 
   fscanf(fp,"%f", &x997); 
   fscanf(fp,"%f", &x998); 
   fscanf(fp,"%f", &x999); 
   fscanf(fp,"%f", &x1000); 
   fscanf(fp,"%f", &b1157); 
   fscanf(fp,"%f", &b1158); 
   fscanf(fp,"%f", &b1159); 
   fscanf(fp,"%f", &b1160); 
   fscanf(fp,"%f", &b1161); 
   fscanf(fp,"%f", &b1162); 
   fscanf(fp,"%f", &b1163); 
   fscanf(fp,"%f", &b1164); 
   fscanf(fp,"%f", &b1165); 
   fscanf(fp,"%f", &b1166); 
   fscanf(fp,"%f", &b1167); 
   fscanf(fp,"%f", &b1168); 
   fscanf(fp,"%f", &b1169); 
   fscanf(fp,"%f", &b1170); 
   fscanf(fp,"%f", &b1171); 
   fscanf(fp,"%f", &b1172); 
   fscanf(fp,"%f", &b1173); 
   fscanf(fp,"%f", &b1174); 
   fscanf(fp,"%f", &b1175); 
   fscanf(fp,"%f", &b1176); 
   fscanf(fp,"%f", &b1177); 
   fscanf(fp,"%f", &b1178); 
   fscanf(fp,"%f", &b1179); 
   fscanf(fp,"%f", &b1180); 
   fscanf(fp,"%f", &b1181); 
   fscanf(fp,"%f", &b1182); 
   fscanf(fp,"%f", &b1183); 
   fscanf(fp,"%f", &b1184); 
   fscanf(fp,"%f", &b1185); 
   fscanf(fp,"%f", &b1186); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 20*x17 + 21*x18 + 19*x19 + 18*x29
 + 20*x30 + 20*x31 + 16*x65 + 19*x66 + 17*x67 - 26*x77 - 31*x78 - 31*x79
 - 30*x83 - 29*x84 - 37*x85 + 20*x86 + 18*x87 + 21*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 20*x101 - 23*x102 - 32*x103 - 21*x104
 - 25*x105 - 22*x106 + 6*b833 + 4*b834 + 3*b835 + 40*b836 + 35*b837
 + 20*b838 + 46*b839 + 39*b840 + 23*b841 + 7*b845 + 4*b846 + 4*b847
 + 30*b848 + 25*b849 + 20*b850 + 37*b851 + 29*b852 + 22*b853 + 7*b857
 + 5*b858 + 3*b859 + 15*b860 + 5*b861 + 2*b862 + 22*b863 + 10*b864
 + 5*b865 + 11*b869 + 8*b870 + 6*b871 + 13*b872 + 8*b873 + 3*b874
 + 24*b875 + 16*b876 + 9*b877 + 10*b881 + 7*b882 + 6*b883 + 13*b884
 + 8*b885 + 3*b886 + 23*b887 + 15*b888 + 9*b889 + 9*b893 + 9*b894 + 7*b895
 + 30*b896 + 30*b897 + 25*b898 + 39*b899 + 39*b900 + 32*b901 + 8*b905
 + 7*b906 + 7*b907 + 20*b908 + 15*b909 + 10*b910 + 28*b911 + 22*b912
 + 17*b913 + 8*b917 + 6*b918 + 5*b919 + 15*b920 + 10*b921 + 6*b922
 + 23*b923 + 16*b924 + 11*b925 + x926 + x927 + x928 - 5*x944 - 10*x945
 - 5*x946 + 2*x959 + x960 + 2*x961 - 80*x983 - 90*x984 - 120*x985
 - 285*x986 - 390*x987 - 350*x988 - 290*x989 - 405*x990 - 190*x991
 - 280*x992 - 400*x993 - 430*x994 - 290*x995 - 300*x996 - 240*x997
 - 350*x998 - 250*x999 - 300*x1000 + 5*b1157 + 4*b1158 + 6*b1159 + 8*b1160
 + 7*b1161 + 6*b1162 + 6*b1163 + 9*b1164 + 4*b1165 + 10*b1166 + 9*b1167
 + 5*b1168 + 6*b1169 + 10*b1170 + 6*b1171 + 7*b1172 + 7*b1173 + 4*b1174
 + 4*b1175 + 3*b1176 + 2*b1177 + 5*b1178 + 6*b1179 + 7*b1180 + 2*b1181
 + 5*b1182 + 2*b1183 + 4*b1184 + 7*b1185 + 4*b1186 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
