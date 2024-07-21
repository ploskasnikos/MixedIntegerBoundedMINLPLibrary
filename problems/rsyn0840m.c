#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x7,x11,x23,x27,x29,x30,x33,x34,x35,x36,b89,b90,b91,b93,b94,b95,b97,b98,b99,b101,b102,b103,b105,b106,b107,b109,b110,b111,b113,b114,b115,b117,b118,b119,x152,x158,x163,x180,x181,x188,x189,x190,x191,x192,x193,x194,x195,x203,x208,x225,x226,x233,x234,x235,x236,x237,x238,x239,x240,x241,b242,b243,b244,b245,b246,b247,b248,b249,b250,b251,b252,b253,b254,b255,b256,b257,b258,b259,b260,b261,b262,b263,b264,b265,b266,b267,b268,b269,b270,b271,b272,b273,b274,b275,b276,b277,b278,b279,b280,b281;
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
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x241); 
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
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b278); 
   fscanf(fp,"%f", &b279); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b281); 

   fclose(fp);
   res=-( + 10*x2 + 15*x7 + 18*x11 + 19*x23 - 35*x27 - 28*x29 + 16*x30
 - 2*x33 - 3*x34 - 5*x35 - 4*x36 + 6*b89 + 40*b90 + 46*b91 + 7*b93
 + 30*b94 + 37*b95 + 7*b97 + 15*b98 + 22*b99 + 11*b101 + 13*b102 + 24*b103
 + 10*b105 + 13*b106 + 23*b107 + 9*b109 + 30*b110 + 39*b111 + 8*b113
 + 20*b114 + 28*b115 + 8*b117 + 15*b118 + 23*b119 + x152 - 5*x158 + 2*x163
 + 10*x180 + 5*x181 - 40*x188 - 15*x189 - 10*x190 - 30*x191 - 35*x192
 - 20*x193 - 25*x194 - 15*x195 - 30*x203 + x208 + 5*x225 + x226 - 120*x233
 - 140*x234 - 90*x235 - 80*x236 - 285*x237 - 290*x238 - 280*x239
 - 290*x240 - 350*x241 + 5*b242 + 8*b243 + 6*b244 + 10*b245 + 6*b246
 + 7*b247 + 4*b248 + 5*b249 + 2*b250 + 4*b251 + 3*b252 + 7*b253 + 3*b254
 + 2*b255 + 4*b256 + 2*b257 + 3*b258 + 5*b259 + 2*b260 + b261 + 2*b262
 + 9*b263 + 5*b264 + 2*b265 + 10*b266 + 4*b267 + 7*b268 + 4*b269 + 2*b270
 + 8*b271 + 9*b272 + 3*b273 + 5*b274 + 5*b275 + 6*b276 + 2*b277 + 6*b278
 + 3*b279 + 5*b280 + 9*b281 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
