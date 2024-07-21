#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn20m02h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x42,x43,x54,x55,x64,x65,x98,x99,x100,x101,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,b344,b345,b346,b347,b348,b349,b350,b351,b352,b353,b354,b355,b356,b357,b358,b359,b360,b361,b362,b363,b364,b365,b366,b367,b368,b369,b370,b371,b372,b373,b374,b375,b376,b377,b378,b379,b380,b381,b382,b383;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b346); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b351); 
   fscanf(fp,"%f", &b352); 
   fscanf(fp,"%f", &b353); 
   fscanf(fp,"%f", &b354); 
   fscanf(fp,"%f", &b355); 
   fscanf(fp,"%f", &b356); 
   fscanf(fp,"%f", &b357); 
   fscanf(fp,"%f", &b358); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b361); 
   fscanf(fp,"%f", &b362); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b368); 
   fscanf(fp,"%f", &b369); 
   fscanf(fp,"%f", &b370); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b380); 
   fscanf(fp,"%f", &b381); 
   fscanf(fp,"%f", &b382); 
   fscanf(fp,"%f", &b383); 

   fclose(fp);
   res=-( + x42 + x43 - 5*x54 - 10*x55 + 2*x64 + x65 + 10*x98 + 5*x99
 + 5*x100 + 5*x101 - 80*x114 - 130*x115 - 110*x116 - 120*x117 - 110*x118
 - 130*x119 - 80*x120 - 90*x121 - 285*x122 - 390*x123 - 290*x124
 - 405*x125 - 280*x126 - 400*x127 - 290*x128 - 300*x129 - 350*x130
 - 250*x131 + 5*b344 + 4*b345 + 8*b346 + 7*b347 + 6*b348 + 9*b349
 + 10*b350 + 9*b351 + 6*b352 + 10*b353 + 7*b354 + 7*b355 + 4*b356 + 3*b357
 + 5*b358 + 6*b359 + 2*b360 + 5*b361 + 4*b362 + 7*b363 + 3*b364 + 9*b365
 + 7*b366 + 2*b367 + 3*b368 + b369 + 2*b370 + 6*b371 + 4*b372 + 8*b373
 + 2*b374 + 5*b375 + 3*b376 + 4*b377 + 5*b378 + 7*b379 + 2*b380 + 8*b381
 + b382 + 4*b383 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
