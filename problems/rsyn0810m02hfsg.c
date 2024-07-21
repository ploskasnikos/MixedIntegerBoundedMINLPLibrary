#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0810m02hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b556,b557,b558,b559,b560,b561,b564,b565,b566,b567,b568,b569,b572,b573,b574,b575,b576,b577,b580,b581,b582,b583,b584,b585,b588,b589,b590,b591,b592,b593,b596,b597,b598,b599,b600,b601,b604,b605,b606,b607,b608,b609,b612,b613,b614,b615,b616,b617,x618,x619,x630,x631,x640,x641,x656,x657,x658,x659,x660,x661,x662,x663,x664,x665,x666,x667,b772,b773,b774,b775,b776,b777,b778,b779,b780,b781,b782,b783,b784,b785,b786,b787,b788,b789,b790,b791;
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
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &b556); 
   fscanf(fp,"%f", &b557); 
   fscanf(fp,"%f", &b558); 
   fscanf(fp,"%f", &b559); 
   fscanf(fp,"%f", &b560); 
   fscanf(fp,"%f", &b561); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 
   fscanf(fp,"%f", &b572); 
   fscanf(fp,"%f", &b573); 
   fscanf(fp,"%f", &b574); 
   fscanf(fp,"%f", &b575); 
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b582); 
   fscanf(fp,"%f", &b583); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b588); 
   fscanf(fp,"%f", &b589); 
   fscanf(fp,"%f", &b590); 
   fscanf(fp,"%f", &b591); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &b598); 
   fscanf(fp,"%f", &b599); 
   fscanf(fp,"%f", &b600); 
   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &b604); 
   fscanf(fp,"%f", &b605); 
   fscanf(fp,"%f", &b606); 
   fscanf(fp,"%f", &b607); 
   fscanf(fp,"%f", &b608); 
   fscanf(fp,"%f", &b609); 
   fscanf(fp,"%f", &b612); 
   fscanf(fp,"%f", &b613); 
   fscanf(fp,"%f", &b614); 
   fscanf(fp,"%f", &b615); 
   fscanf(fp,"%f", &b616); 
   fscanf(fp,"%f", &b617); 
   fscanf(fp,"%f", &x618); 
   fscanf(fp,"%f", &x619); 
   fscanf(fp,"%f", &x630); 
   fscanf(fp,"%f", &x631); 
   fscanf(fp,"%f", &x640); 
   fscanf(fp,"%f", &x641); 
   fscanf(fp,"%f", &x656); 
   fscanf(fp,"%f", &x657); 
   fscanf(fp,"%f", &x658); 
   fscanf(fp,"%f", &x659); 
   fscanf(fp,"%f", &x660); 
   fscanf(fp,"%f", &x661); 
   fscanf(fp,"%f", &x662); 
   fscanf(fp,"%f", &x663); 
   fscanf(fp,"%f", &x664); 
   fscanf(fp,"%f", &x665); 
   fscanf(fp,"%f", &x666); 
   fscanf(fp,"%f", &x667); 
   fscanf(fp,"%f", &b772); 
   fscanf(fp,"%f", &b773); 
   fscanf(fp,"%f", &b774); 
   fscanf(fp,"%f", &b775); 
   fscanf(fp,"%f", &b776); 
   fscanf(fp,"%f", &b777); 
   fscanf(fp,"%f", &b778); 
   fscanf(fp,"%f", &b779); 
   fscanf(fp,"%f", &b780); 
   fscanf(fp,"%f", &b781); 
   fscanf(fp,"%f", &b782); 
   fscanf(fp,"%f", &b783); 
   fscanf(fp,"%f", &b784); 
   fscanf(fp,"%f", &b785); 
   fscanf(fp,"%f", &b786); 
   fscanf(fp,"%f", &b787); 
   fscanf(fp,"%f", &b788); 
   fscanf(fp,"%f", &b789); 
   fscanf(fp,"%f", &b790); 
   fscanf(fp,"%f", &b791); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 30*x68 - 31*x69 - 24*x70 - 22*x71 + 6*b556
 + 4*b557 + 40*b558 + 35*b559 + 46*b560 + 39*b561 + 7*b564 + 4*b565
 + 30*b566 + 25*b567 + 37*b568 + 29*b569 + 7*b572 + 5*b573 + 15*b574
 + 5*b575 + 22*b576 + 10*b577 + 11*b580 + 8*b581 + 13*b582 + 8*b583
 + 24*b584 + 16*b585 + 10*b588 + 7*b589 + 13*b590 + 8*b591 + 23*b592
 + 15*b593 + 9*b596 + 9*b597 + 30*b598 + 30*b599 + 39*b600 + 39*b601
 + 8*b604 + 7*b605 + 20*b606 + 15*b607 + 28*b608 + 22*b609 + 8*b612
 + 6*b613 + 15*b614 + 10*b615 + 23*b616 + 16*b617 + x618 + x619 - 5*x630
 - 10*x631 + 2*x640 + x641 - 80*x656 - 90*x657 - 285*x658 - 390*x659
 - 290*x660 - 405*x661 - 280*x662 - 400*x663 - 290*x664 - 300*x665
 - 350*x666 - 250*x667 + 5*b772 + 4*b773 + 8*b774 + 7*b775 + 6*b776
 + 9*b777 + 10*b778 + 9*b779 + 6*b780 + 10*b781 + 7*b782 + 7*b783 + 4*b784
 + 3*b785 + 5*b786 + 6*b787 + 2*b788 + 5*b789 + 4*b790 + 7*b791 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
