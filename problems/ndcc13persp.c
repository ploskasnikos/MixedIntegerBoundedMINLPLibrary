#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ndcc13persp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b547,b548,b549,b550,b551,b552,b553,b554,b555,b556,b557,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b570,b571,b572,b573,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b586,b587,b588;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res=-(- 1.090016011*b547 - 3.10674202*b548 - 2.475702586*b549
 - 1.966733944*b550 - 1.090016011*b551 - 2.019536713*b552
 - 3.10674202*b553 - 1.383540955*b554 - 2.087059045*b555
 - 3.720443668*b556 - 1.383540955*b557 - 1.794144217*b558
 - 3.50653318*b559 - 1.71812596*b560 - 3.834780538*b561 - 2.087059045*b562
 - 1.794144217*b563 - 2.239621249*b564 - 2.475702586*b565
 - 2.019536713*b566 - 3.720443668*b567 - 3.50653318*b568
 - 2.239621249*b569 - 1.098732406*b570 - 1.742557876*b571
 - 1.098732406*b572 - 3.606882982*b573 - 1.71812596*b574
 - 2.074958698*b575 - 1.966733944*b576 - 2.074958698*b577
 - 3.859970515*b578 - 1.742557876*b579 - 3.859970515*b580
 - 3.951460459*b581 - 3.834780538*b582 - 3.606882982*b583
 - 2.524064089*b584 - 2.524064089*b585 - 3.982701487*b586
 - 3.951460459*b587 - 3.982701487*b588  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
