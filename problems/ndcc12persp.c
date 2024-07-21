#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ndcc12persp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b553,b554,b555,b556,b557,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b570,b571,b572,b573,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b586,b587,b588,b589,b590,b591,b592,b593,b594,b595,b596,b597,b598;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res=-(- 1.235768455*b553 - 1.754882812*b554 - 3.159455914*b555
 - 3.980618566*b556 - 2.905401043*b557 - 2.524310515*b558
 - 3.289509208*b559 - 1.235768455*b560 - 2.516549044*b561
 - 2.174517481*b562 - 2.402340784*b563 - 1.754882812*b564
 - 3.153941476*b565 - 2.649872155*b566 - 2.46690751*b567
 - 3.159455914*b568 - 2.46690751*b569 - 1.583424277*b570
 - 3.980618566*b571 - 3.153941476*b572 - 1.572334903*b573
 - 2.905401043*b574 - 2.516549044*b575 - 1.572334903*b576
 - 1.097733808*b577 - 2.174517481*b578 - 1.097733808*b579
 - 2.95175038*b580 - 2.477930353*b581 - 1.425428344*b582 - 2.95175038*b583
 - 1.694724004*b584 - 2.524310515*b585 - 1.694724004*b586
 - 3.787543429*b587 - 1.759730596*b588 - 2.402340784*b589
 - 1.583424277*b590 - 2.477930353*b591 - 3.787543429*b592
 - 1.492267639*b593 - 3.289509208*b594 - 2.649872155*b595
 - 1.425428344*b596 - 1.759730596*b597 - 1.492267639*b598  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
