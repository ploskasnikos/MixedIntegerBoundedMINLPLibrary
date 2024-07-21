#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn15m04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x62,x63,x64,x65,x86,x87,x88,x89,x106,x107,x108,x109,x158,x159,x160,x161,x162,x163,x164,x165,x174,x175,x176,x177,x178,x179,x180,x181,x206,x207,x208,x209,x210,x211,x212,x213,x214,x215,x216,x217,x218,x219,x220,x221,b546,b547,b548,b549,b550,b551,b552,b553,b554,b555,b556,b557,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b570,b571,b572,b573,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b586,b587,b588,b589,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,b602,b603,b604,b605;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &x212); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x214); 
   fscanf(fp,"%f", &x215); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x221); 
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

   fclose(fp);
   res=-( + x62 + x63 + x64 + x65 - 5*x86 - 10*x87 - 5*x88 - 10*x89
 + 2*x106 + x107 + 2*x108 + x109 - 500*x158 - 600*x159 - 350*x160
 - 400*x161 - 350*x162 - 400*x163 - 450*x164 - 400*x165 + 10*x174 + 5*x175
 + 5*x176 + 10*x177 + 5*x178 + 5*x179 + 5*x180 + 10*x181 - 180*x206
 - 130*x207 - 215*x208 - 210*x209 - 110*x210 - 120*x211 - 125*x212
 - 130*x213 - 110*x214 - 130*x215 - 140*x216 - 140*x217 - 280*x218
 - 290*x219 - 220*x220 - 200*x221 + 5*b546 + 4*b547 + 6*b548 + 3*b549
 + 8*b550 + 7*b551 + 6*b552 + 5*b553 + 6*b554 + 9*b555 + 4*b556 + 3*b557
 + 10*b558 + 9*b559 + 5*b560 + 6*b561 + 6*b562 + 10*b563 + 6*b564 + 9*b565
 + 7*b566 + 7*b567 + 4*b568 + 2*b569 + 4*b570 + 3*b571 + 2*b572 + 8*b573
 + 5*b574 + 6*b575 + 7*b576 + 4*b577 + 2*b578 + 5*b579 + 2*b580 + 6*b581
 + 4*b582 + 7*b583 + 4*b584 + 7*b585 + 3*b586 + 9*b587 + 3*b588 + 6*b589
 + 7*b590 + 2*b591 + 9*b592 + 6*b593 + 3*b594 + b595 + 9*b596 + 10*b597
 + 2*b598 + 6*b599 + 3*b600 + 7*b601 + 4*b602 + 8*b603 + b604 + 4*b605
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
