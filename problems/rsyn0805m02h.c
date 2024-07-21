#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0805m02h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b546,b547,b548,b549,b550,b551,b554,b555,b556,b557,b558,b559,b562,b563,b564,b565,b566,b567,b570,b571,b572,b573,b574,b575,b578,b579,b580,b581,b582,b583,b586,b587,b588,b589,b590,b591,b594,b595,b596,b597,b598,b599,b602,b603,b604,b605,b606,b607,x608,x609,x620,x621,x630,x631,x632,x633,x634,x635,x636,x637,b692,b693,b694,b695,b696,b697,b698,b699,b700,b701;
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
   fscanf(fp,"%f", &b546); 
   fscanf(fp,"%f", &b547); 
   fscanf(fp,"%f", &b548); 
   fscanf(fp,"%f", &b549); 
   fscanf(fp,"%f", &b550); 
   fscanf(fp,"%f", &b551); 
   fscanf(fp,"%f", &b554); 
   fscanf(fp,"%f", &b555); 
   fscanf(fp,"%f", &b556); 
   fscanf(fp,"%f", &b557); 
   fscanf(fp,"%f", &b558); 
   fscanf(fp,"%f", &b559); 
   fscanf(fp,"%f", &b562); 
   fscanf(fp,"%f", &b563); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b570); 
   fscanf(fp,"%f", &b571); 
   fscanf(fp,"%f", &b572); 
   fscanf(fp,"%f", &b573); 
   fscanf(fp,"%f", &b574); 
   fscanf(fp,"%f", &b575); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b582); 
   fscanf(fp,"%f", &b583); 
   fscanf(fp,"%f", &b586); 
   fscanf(fp,"%f", &b587); 
   fscanf(fp,"%f", &b588); 
   fscanf(fp,"%f", &b589); 
   fscanf(fp,"%f", &b590); 
   fscanf(fp,"%f", &b591); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &b598); 
   fscanf(fp,"%f", &b599); 
   fscanf(fp,"%f", &b602); 
   fscanf(fp,"%f", &b603); 
   fscanf(fp,"%f", &b604); 
   fscanf(fp,"%f", &b605); 
   fscanf(fp,"%f", &b606); 
   fscanf(fp,"%f", &b607); 
   fscanf(fp,"%f", &x608); 
   fscanf(fp,"%f", &x609); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 
   fscanf(fp,"%f", &x630); 
   fscanf(fp,"%f", &x631); 
   fscanf(fp,"%f", &x632); 
   fscanf(fp,"%f", &x633); 
   fscanf(fp,"%f", &x634); 
   fscanf(fp,"%f", &x635); 
   fscanf(fp,"%f", &x636); 
   fscanf(fp,"%f", &x637); 
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
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 30*x68 - 31*x69 - 24*x70 - 22*x71 + 6*b546
 + 4*b547 + 40*b548 + 35*b549 + 46*b550 + 39*b551 + 7*b554 + 4*b555
 + 30*b556 + 25*b557 + 37*b558 + 29*b559 + 7*b562 + 5*b563 + 15*b564
 + 5*b565 + 22*b566 + 10*b567 + 11*b570 + 8*b571 + 13*b572 + 8*b573
 + 24*b574 + 16*b575 + 10*b578 + 7*b579 + 13*b580 + 8*b581 + 23*b582
 + 15*b583 + 9*b586 + 9*b587 + 30*b588 + 30*b589 + 39*b590 + 39*b591
 + 8*b594 + 7*b595 + 20*b596 + 15*b597 + 28*b598 + 22*b599 + 8*b602
 + 6*b603 + 15*b604 + 10*b605 + 23*b606 + 16*b607 + x608 + x609 - 5*x620
 - 10*x621 + 2*x630 + x631 - 80*x632 - 90*x633 - 285*x634 - 390*x635
 - 290*x636 - 405*x637 + 5*b692 + 4*b693 + 8*b694 + 7*b695 + 6*b696
 + 9*b697 + 10*b698 + 9*b699 + 6*b700 + 10*b701 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
