#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0815m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b89,b90,b91,b93,b94,b95,b97,b98,b99,b101,b102,b103,b105,b106,b107,b109,b110,b111,b113,b114,b115,b117,b118,b119,x158,x176,x177,x188,x189,x190,x191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b206); 

   fclose(fp);
   res=-( + 4*x2 + 8*x7 + 5*x11 + 8*x23 - 23*x27 - 19*x29 + 10*x30 - 2*x33
 - 3*x34 - 5*x35 - 4*x36 + 6*b89 + 40*b90 + 46*b91 + 7*b93 + 30*b94
 + 37*b95 + 7*b97 + 15*b98 + 22*b99 + 11*b101 + 13*b102 + 24*b103
 + 10*b105 + 13*b106 + 23*b107 + 9*b109 + 30*b110 + 39*b111 + 8*b113
 + 20*b114 + 28*b115 + 8*b117 + 15*b118 + 23*b119 - 5*x158 - 500*x176
 - 350*x177 - 200*x188 - 250*x189 - 200*x190 - 200*x191 + 5*b192 + 8*b193
 + 6*b194 + 10*b195 + 6*b196 + 7*b197 + 4*b198 + 5*b199 + 2*b200 + 4*b201
 + 3*b202 + 7*b203 + 3*b204 + 2*b205 + 4*b206 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
