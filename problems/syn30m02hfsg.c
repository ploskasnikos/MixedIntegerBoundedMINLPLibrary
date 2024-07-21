#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn30m02hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x14,x15,x24,x25,x58,x59,x60,x61,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x104,x105,x114,x115,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b458,b459,b460,b461,b462,b463,b464,b465,b466,b467,b468,b469,b470,b471,b472,b473,b474,b475,b476,b477,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b490,b491,b492,b493,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b506,b507,b508,b509,b510,b511,b512,b513,b514,b515,b516,b517;
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
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &b458); 
   fscanf(fp,"%f", &b459); 
   fscanf(fp,"%f", &b460); 
   fscanf(fp,"%f", &b461); 
   fscanf(fp,"%f", &b462); 
   fscanf(fp,"%f", &b463); 
   fscanf(fp,"%f", &b464); 
   fscanf(fp,"%f", &b465); 
   fscanf(fp,"%f", &b466); 
   fscanf(fp,"%f", &b467); 
   fscanf(fp,"%f", &b468); 
   fscanf(fp,"%f", &b469); 
   fscanf(fp,"%f", &b470); 
   fscanf(fp,"%f", &b471); 
   fscanf(fp,"%f", &b472); 
   fscanf(fp,"%f", &b473); 
   fscanf(fp,"%f", &b474); 
   fscanf(fp,"%f", &b475); 
   fscanf(fp,"%f", &b476); 
   fscanf(fp,"%f", &b477); 
   fscanf(fp,"%f", &b478); 
   fscanf(fp,"%f", &b479); 
   fscanf(fp,"%f", &b480); 
   fscanf(fp,"%f", &b481); 
   fscanf(fp,"%f", &b482); 
   fscanf(fp,"%f", &b483); 
   fscanf(fp,"%f", &b484); 
   fscanf(fp,"%f", &b485); 
   fscanf(fp,"%f", &b486); 
   fscanf(fp,"%f", &b487); 
   fscanf(fp,"%f", &b488); 
   fscanf(fp,"%f", &b489); 
   fscanf(fp,"%f", &b490); 
   fscanf(fp,"%f", &b491); 
   fscanf(fp,"%f", &b492); 
   fscanf(fp,"%f", &b493); 
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b495); 
   fscanf(fp,"%f", &b496); 
   fscanf(fp,"%f", &b497); 
   fscanf(fp,"%f", &b498); 
   fscanf(fp,"%f", &b499); 
   fscanf(fp,"%f", &b500); 
   fscanf(fp,"%f", &b501); 
   fscanf(fp,"%f", &b502); 
   fscanf(fp,"%f", &b503); 
   fscanf(fp,"%f", &b504); 
   fscanf(fp,"%f", &b505); 
   fscanf(fp,"%f", &b506); 
   fscanf(fp,"%f", &b507); 
   fscanf(fp,"%f", &b508); 
   fscanf(fp,"%f", &b509); 
   fscanf(fp,"%f", &b510); 
   fscanf(fp,"%f", &b511); 
   fscanf(fp,"%f", &b512); 
   fscanf(fp,"%f", &b513); 
   fscanf(fp,"%f", &b514); 
   fscanf(fp,"%f", &b515); 
   fscanf(fp,"%f", &b516); 
   fscanf(fp,"%f", &b517); 

   fclose(fp);
   res=-( + x2 + x3 - 5*x14 - 10*x15 + 2*x24 + x25 + 10*x58 + 5*x59
 + 5*x60 + 5*x61 - 40*x74 - 30*x75 - 15*x76 - 20*x77 - 10*x78 - 30*x79
 - 30*x80 - 20*x81 - 35*x82 - 50*x83 - 20*x84 - 30*x85 - 25*x86 - 50*x87
 - 15*x88 - 20*x89 - 30*x104 - 40*x105 + x114 + x115 - 80*x130 - 90*x131
 - 285*x132 - 390*x133 - 290*x134 - 405*x135 - 280*x136 - 400*x137
 - 290*x138 - 300*x139 - 350*x140 - 250*x141 + 5*b458 + 4*b459 + 8*b460
 + 7*b461 + 6*b462 + 9*b463 + 10*b464 + 9*b465 + 6*b466 + 10*b467 + 7*b468
 + 7*b469 + 4*b470 + 3*b471 + 5*b472 + 6*b473 + 2*b474 + 5*b475 + 4*b476
 + 7*b477 + 3*b478 + 9*b479 + 7*b480 + 2*b481 + 3*b482 + b483 + 2*b484
 + 6*b485 + 4*b486 + 8*b487 + 2*b488 + 5*b489 + 3*b490 + 4*b491 + 5*b492
 + 7*b493 + 2*b494 + 8*b495 + b496 + 4*b497 + 2*b498 + 5*b499 + 9*b500
 + 2*b501 + 5*b502 + 8*b503 + 2*b504 + 3*b505 + 10*b506 + 6*b507 + 4*b508
 + 8*b509 + 7*b510 + 3*b511 + 4*b512 + 8*b513 + 2*b514 + b515 + 8*b516
 + 3*b517 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
