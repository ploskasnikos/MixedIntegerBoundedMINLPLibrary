#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0810m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b89,b90,b91,b93,b94,b95,b97,b98,b99,b101,b102,b103,b105,b106,b107,b109,b110,b111,b113,b114,b115,b117,b118,b119,x158,x163,x171,x172,x173,x174,x175,x176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186;
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
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b186); 

   fclose(fp);
   res=-( + 4*x2 + 8*x7 + 5*x11 + 8*x23 - 23*x27 - 19*x29 + 10*x30 - 2*x33
 - 3*x34 - 25*x35 - 24*x36 + 6*b89 + 40*b90 + 46*b91 + 7*b93 + 30*b94
 + 37*b95 + 7*b97 + 15*b98 + 22*b99 + 11*b101 + 13*b102 + 24*b103
 + 10*b105 + 13*b106 + 23*b107 + 9*b109 + 30*b110 + 39*b111 + 8*b113
 + 20*b114 + 28*b115 + 8*b117 + 15*b118 + 23*b119 - 5*x158 + 2*x163
 - 200*x171 - 250*x172 - 200*x173 - 200*x174 - 500*x175 - 350*x176
 + 5*b177 + 8*b178 + 6*b179 + 10*b180 + 6*b181 + 7*b182 + 4*b183 + 5*b184
 + 2*b185 + 4*b186 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
