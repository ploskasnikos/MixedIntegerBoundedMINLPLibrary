#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn20m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x62,x63,x64,x80,x81,x82,x95,x96,x97,x146,x147,x148,x149,x150,x151,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,x182,x183,x184,x185,x186,x187,x188,x189,x190,x191,x192,x193,x194,x195,x196,b515,b516,b517,b518,b519,b520,b521,b522,b523,b524,b525,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b538,b539,b540,b541,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b554,b555,b556,b557,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b570,b571,b572,b573,b574;
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
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
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
   fscanf(fp,"%f", &x182); 
   fscanf(fp,"%f", &x183); 
   fscanf(fp,"%f", &x184); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &b515); 
   fscanf(fp,"%f", &b516); 
   fscanf(fp,"%f", &b517); 
   fscanf(fp,"%f", &b518); 
   fscanf(fp,"%f", &b519); 
   fscanf(fp,"%f", &b520); 
   fscanf(fp,"%f", &b521); 
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

   fclose(fp);
   res=-( + x62 + x63 + x64 - 5*x80 - 10*x81 - 5*x82 + 2*x95 + x96 + 2*x97
 + 10*x146 + 5*x147 + 5*x148 + 5*x149 + 5*x150 + 5*x151 - 80*x170
 - 130*x171 - 215*x172 - 110*x173 - 120*x174 - 125*x175 - 110*x176
 - 130*x177 - 140*x178 - 80*x179 - 90*x180 - 120*x181 - 285*x182
 - 390*x183 - 350*x184 - 290*x185 - 405*x186 - 190*x187 - 280*x188
 - 400*x189 - 430*x190 - 290*x191 - 300*x192 - 240*x193 - 350*x194
 - 250*x195 - 300*x196 + 5*b515 + 4*b516 + 6*b517 + 8*b518 + 7*b519
 + 6*b520 + 6*b521 + 9*b522 + 4*b523 + 10*b524 + 9*b525 + 5*b526 + 6*b527
 + 10*b528 + 6*b529 + 7*b530 + 7*b531 + 4*b532 + 4*b533 + 3*b534 + 2*b535
 + 5*b536 + 6*b537 + 7*b538 + 2*b539 + 5*b540 + 2*b541 + 4*b542 + 7*b543
 + 4*b544 + 3*b545 + 9*b546 + 3*b547 + 7*b548 + 2*b549 + 9*b550 + 3*b551
 + b552 + 9*b553 + 2*b554 + 6*b555 + 3*b556 + 4*b557 + 8*b558 + b559
 + 2*b560 + 5*b561 + 2*b562 + 3*b563 + 4*b564 + 3*b565 + 5*b566 + 7*b567
 + 6*b568 + 2*b569 + 8*b570 + 4*b571 + b572 + 4*b573 + b574 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
