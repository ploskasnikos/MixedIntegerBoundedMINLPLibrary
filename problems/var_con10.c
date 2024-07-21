#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="var_con10";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x546,x548,x550,x551,x553,x554,x555,x556,x557,x558,x559,x561,b564,b565,b566,b567,b568,b569,b570,b571,b572,b573;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x546); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x550); 
   fscanf(fp,"%f", &x551); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x555); 
   fscanf(fp,"%f", &x556); 
   fscanf(fp,"%f", &x557); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x561); 
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

   fclose(fp);
   res=-(- 500*x546 - 500*x548 - 500*x550 - 500*x551 - 500*x553 - 500*x554
   - 500*x555 - 500*x556 - 500*x557 - 500*x558 - 500*x559 - 500*x561
    - 10* 0 - 10*b564 - 10*b565 - 10*b566 - 10*b567 - 10*b568
   - 10*b569 - 10*b570 - 10*b571 - 10*b572 - 10*b573 - 10* 0 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
