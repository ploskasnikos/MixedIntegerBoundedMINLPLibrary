#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b89,b90,b91,b93,b94,b95,b97,b98,b99,b101,b102,b103,b105,b106,b107,b109,b110,b111,b113,b114,b115,b117,b118,b119,x152,x158,x163,x180,x181,x188,x189,x190,x191,x192,x193,x194,x195,x203,x208,x216,x217,x218,x219,x220,x221,b222,b223,b224,b225,b226,b227,b228,b229,b230,b231,b232,b233,b234,b235,b236,b237,b238,b239,b240,b241,b242,b243,b244,b245,b246,b247,b248,b249,b250,b251;
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
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x181); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x192); 
   fscanf(fp,"%f", &x193); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x217); 
   fscanf(fp,"%f", &x218); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b251); 

   fclose(fp);
   res=-( + 10*x2 + 15*x7 + 18*x11 + 19*x23 - 35*x27 - 28*x29 + 16*x30
 - 2*x33 - 3*x34 - 5*x35 - 4*x36 + 6*b89 + 40*b90 + 46*b91 + 7*b93
 + 30*b94 + 37*b95 + 7*b97 + 15*b98 + 22*b99 + 11*b101 + 13*b102 + 24*b103
 + 10*b105 + 13*b106 + 23*b107 + 9*b109 + 30*b110 + 39*b111 + 8*b113
 + 20*b114 + 28*b115 + 8*b117 + 15*b118 + 23*b119 + x152 - 5*x158 + 2*x163
 + 10*x180 + 5*x181 - 40*x188 - 15*x189 - 10*x190 - 30*x191 - 35*x192
 - 20*x193 - 25*x194 - 15*x195 - 30*x203 + x208 - 80*x216 - 285*x217
 - 290*x218 - 280*x219 - 290*x220 - 350*x221 + 5*b222 + 8*b223 + 6*b224
 + 10*b225 + 6*b226 + 7*b227 + 4*b228 + 5*b229 + 2*b230 + 4*b231 + 3*b232
 + 7*b233 + 3*b234 + 2*b235 + 4*b236 + 2*b237 + 3*b238 + 5*b239 + 2*b240
 + b241 + 2*b242 + 9*b243 + 5*b244 + 2*b245 + 10*b246 + 4*b247 + 7*b248
 + 4*b249 + 2*b250 + 8*b251 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
