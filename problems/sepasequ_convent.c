#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sepasequ_convent";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,x481,x482,x483,x484,x485,x486,x487,x488,x489,x490,x491,x492,x493,x494,x495,x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x520,x581,x602,x603,x604,x605,x606,x607,x608,x609,x610,x611,x612,x613,x614,x615,x616,x617,x618,x619,x620,x621;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &x481); 
   fscanf(fp,"%f", &x482); 
   fscanf(fp,"%f", &x483); 
   fscanf(fp,"%f", &x484); 
   fscanf(fp,"%f", &x485); 
   fscanf(fp,"%f", &x486); 
   fscanf(fp,"%f", &x487); 
   fscanf(fp,"%f", &x488); 
   fscanf(fp,"%f", &x489); 
   fscanf(fp,"%f", &x490); 
   fscanf(fp,"%f", &x491); 
   fscanf(fp,"%f", &x492); 
   fscanf(fp,"%f", &x493); 
   fscanf(fp,"%f", &x494); 
   fscanf(fp,"%f", &x495); 
   fscanf(fp,"%f", &x496); 
   fscanf(fp,"%f", &x497); 
   fscanf(fp,"%f", &x498); 
   fscanf(fp,"%f", &x499); 
   fscanf(fp,"%f", &x500); 
   fscanf(fp,"%f", &x501); 
   fscanf(fp,"%f", &x502); 
   fscanf(fp,"%f", &x503); 
   fscanf(fp,"%f", &x504); 
   fscanf(fp,"%f", &x505); 
   fscanf(fp,"%f", &x506); 
   fscanf(fp,"%f", &x507); 
   fscanf(fp,"%f", &x508); 
   fscanf(fp,"%f", &x509); 
   fscanf(fp,"%f", &x510); 
   fscanf(fp,"%f", &x511); 
   fscanf(fp,"%f", &x512); 
   fscanf(fp,"%f", &x513); 
   fscanf(fp,"%f", &x514); 
   fscanf(fp,"%f", &x515); 
   fscanf(fp,"%f", &x516); 
   fscanf(fp,"%f", &x517); 
   fscanf(fp,"%f", &x518); 
   fscanf(fp,"%f", &x519); 
   fscanf(fp,"%f", &x520); 
   fscanf(fp,"%f", &x581); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x606); 
   fscanf(fp,"%f", &x607); 
   fscanf(fp,"%f", &x608); 
   fscanf(fp,"%f", &x609); 
   fscanf(fp,"%f", &x610); 
   fscanf(fp,"%f", &x611); 
   fscanf(fp,"%f", &x612); 
   fscanf(fp,"%f", &x613); 
   fscanf(fp,"%f", &x614); 
   fscanf(fp,"%f", &x615); 
   fscanf(fp,"%f", &x616); 
   fscanf(fp,"%f", &x617); 
   fscanf(fp,"%f", &x618); 
   fscanf(fp,"%f", &x619); 
   fscanf(fp,"%f", &x620); 
   fscanf(fp,"%f", &x621); 

   fclose(fp);
   res=-(- 3*b1 - 3*b2 - 3*b3 - 3*b4 - 3*b5 - 3*b6 - 3*b7 - 3*b8 - 3*b9 - 3*b10
  - 3*b11 - 3*b12 - 3*b13 - 3*b14 - 3*b15 - 3*b16 - 3*b17 - 3*b18 - 3*b19
  - 3*b20 - 81.44*x481 - 81.44*x482 - 81.44*x483 - 81.44*x484 - 81.44*x485
  - 81.44*x486 - 81.44*x487 - 81.44*x488 - 81.44*x489 - 81.44*x490
  - 81.44*x491 - 81.44*x492 - 81.44*x493 - 81.44*x494 - 81.44*x495
  - 81.44*x496 - 81.44*x497 - 81.44*x498 - 81.44*x499 - 81.44*x500
  - 3.04*x501 - 3.04*x502 - 3.04*x503 - 3.04*x504 - 3.04*x505 - 3.04*x506
  - 3.04*x507 - 3.04*x508 - 3.04*x509 - 3.04*x510 - 3.04*x511 - 3.04*x512
  - 3.04*x513 - 3.04*x514 - 3.04*x515 - 3.04*x516 - 3.04*x517 - 3.04*x518
  - 3.04*x519 - 3.04*x520 - x581 - x602 - x603 - x604 - x605 - x606 - x607
  - x608 - x609 - x610 - x611 - x612 - x613 - x614 - x615 - x616 - x617
  - x618 - x619 - x620 - x621  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
