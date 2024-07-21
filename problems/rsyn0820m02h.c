#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0820m02h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b576,b577,b578,b579,b580,b581,b584,b585,b586,b587,b588,b589,b592,b593,b594,b595,b596,b597,b600,b601,b602,b603,b604,b605,b608,b609,b610,b611,b612,b613,b616,b617,b618,b619,b620,b621,b624,b625,b626,b627,b628,b629,b632,b633,b634,b635,b636,b637,x638,x639,x650,x651,x660,x661,x694,x695,x696,x697,x710,x711,x712,x713,x714,x715,x716,x717,x718,x719,x720,x721,x722,x723,x724,x725,x726,x727,b940,b941,b942,b943,b944,b945,b946,b947,b948,b949,b950,b951,b952,b953,b954,b955,b956,b957,b958,b959,b960,b961,b962,b963,b964,b965,b966,b967,b968,b969,b970,b971,b972,b973,b974,b975,b976,b977,b978,b979;
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
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b586); 
   fscanf(fp,"%f", &b587); 
   fscanf(fp,"%f", &b588); 
   fscanf(fp,"%f", &b589); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &b600); 
   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &b602); 
   fscanf(fp,"%f", &b603); 
   fscanf(fp,"%f", &b604); 
   fscanf(fp,"%f", &b605); 
   fscanf(fp,"%f", &b608); 
   fscanf(fp,"%f", &b609); 
   fscanf(fp,"%f", &b610); 
   fscanf(fp,"%f", &b611); 
   fscanf(fp,"%f", &b612); 
   fscanf(fp,"%f", &b613); 
   fscanf(fp,"%f", &b616); 
   fscanf(fp,"%f", &b617); 
   fscanf(fp,"%f", &b618); 
   fscanf(fp,"%f", &b619); 
   fscanf(fp,"%f", &b620); 
   fscanf(fp,"%f", &b621); 
   fscanf(fp,"%f", &b624); 
   fscanf(fp,"%f", &b625); 
   fscanf(fp,"%f", &b626); 
   fscanf(fp,"%f", &b627); 
   fscanf(fp,"%f", &b628); 
   fscanf(fp,"%f", &b629); 
   fscanf(fp,"%f", &b632); 
   fscanf(fp,"%f", &b633); 
   fscanf(fp,"%f", &b634); 
   fscanf(fp,"%f", &b635); 
   fscanf(fp,"%f", &b636); 
   fscanf(fp,"%f", &b637); 
   fscanf(fp,"%f", &x638); 
   fscanf(fp,"%f", &x639); 
   fscanf(fp,"%f", &x650); 
   fscanf(fp,"%f", &x651); 
   fscanf(fp,"%f", &x660); 
   fscanf(fp,"%f", &x661); 
   fscanf(fp,"%f", &x694); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x696); 
   fscanf(fp,"%f", &x697); 
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
   fscanf(fp,"%f", &x722); 
   fscanf(fp,"%f", &x723); 
   fscanf(fp,"%f", &x724); 
   fscanf(fp,"%f", &x725); 
   fscanf(fp,"%f", &x726); 
   fscanf(fp,"%f", &x727); 
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
   fscanf(fp,"%f", &b962); 
   fscanf(fp,"%f", &b963); 
   fscanf(fp,"%f", &b964); 
   fscanf(fp,"%f", &b965); 
   fscanf(fp,"%f", &b966); 
   fscanf(fp,"%f", &b967); 
   fscanf(fp,"%f", &b968); 
   fscanf(fp,"%f", &b969); 
   fscanf(fp,"%f", &b970); 
   fscanf(fp,"%f", &b971); 
   fscanf(fp,"%f", &b972); 
   fscanf(fp,"%f", &b973); 
   fscanf(fp,"%f", &b974); 
   fscanf(fp,"%f", &b975); 
   fscanf(fp,"%f", &b976); 
   fscanf(fp,"%f", &b977); 
   fscanf(fp,"%f", &b978); 
   fscanf(fp,"%f", &b979); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 3*x68 - 3*x69 - 2*x70 - 2*x71 + 6*b576 + 4*b577
 + 40*b578 + 35*b579 + 46*b580 + 39*b581 + 7*b584 + 4*b585 + 30*b586
 + 25*b587 + 37*b588 + 29*b589 + 7*b592 + 5*b593 + 15*b594 + 5*b595
 + 22*b596 + 10*b597 + 11*b600 + 8*b601 + 13*b602 + 8*b603 + 24*b604
 + 16*b605 + 10*b608 + 7*b609 + 13*b610 + 8*b611 + 23*b612 + 15*b613
 + 9*b616 + 9*b617 + 30*b618 + 30*b619 + 39*b620 + 39*b621 + 8*b624
 + 7*b625 + 20*b626 + 15*b627 + 28*b628 + 22*b629 + 8*b632 + 6*b633
 + 15*b634 + 10*b635 + 23*b636 + 16*b637 + x638 + x639 - 5*x650 - 10*x651
 + 2*x660 + x661 + 10*x694 + 5*x695 + 5*x696 + 5*x697 - 80*x710 - 130*x711
 - 110*x712 - 120*x713 - 110*x714 - 130*x715 - 80*x716 - 90*x717
 - 285*x718 - 390*x719 - 290*x720 - 405*x721 - 280*x722 - 400*x723
 - 290*x724 - 300*x725 - 350*x726 - 250*x727 + 5*b940 + 4*b941 + 8*b942
 + 7*b943 + 6*b944 + 9*b945 + 10*b946 + 9*b947 + 6*b948 + 10*b949 + 7*b950
 + 7*b951 + 4*b952 + 3*b953 + 5*b954 + 6*b955 + 2*b956 + 5*b957 + 4*b958
 + 7*b959 + 3*b960 + 9*b961 + 7*b962 + 2*b963 + 3*b964 + b965 + 2*b966
 + 6*b967 + 4*b968 + 8*b969 + 2*b970 + 5*b971 + 3*b972 + 4*b973 + 5*b974
 + 7*b975 + 2*b976 + 8*b977 + b978 + 4*b979 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
