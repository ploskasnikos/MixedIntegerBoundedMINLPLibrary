#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="deb8";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x675,x676,x677,x679,x681,x682,x683,x684,x685,x686,x687,x688,x689,x690,x691,x692,x693,x694,x695,x696,b782,b783,b784,b785,b786,b787,b788,b789,b790,b791,x815,x816,x817,x818,x819,x820,x821,x822,x823,x824;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x675); 
   fscanf(fp,"%f", &x676); 
   fscanf(fp,"%f", &x677); 
   fscanf(fp,"%f", &x679); 
   fscanf(fp,"%f", &x681); 
   fscanf(fp,"%f", &x682); 
   fscanf(fp,"%f", &x683); 
   fscanf(fp,"%f", &x684); 
   fscanf(fp,"%f", &x685); 
   fscanf(fp,"%f", &x686); 
   fscanf(fp,"%f", &x687); 
   fscanf(fp,"%f", &x688); 
   fscanf(fp,"%f", &x689); 
   fscanf(fp,"%f", &x690); 
   fscanf(fp,"%f", &x691); 
   fscanf(fp,"%f", &x692); 
   fscanf(fp,"%f", &x693); 
   fscanf(fp,"%f", &x694); 
   fscanf(fp,"%f", &x695); 
   fscanf(fp,"%f", &x696); 
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
   fscanf(fp,"%f", &x815); 
   fscanf(fp,"%f", &x816); 
   fscanf(fp,"%f", &x817); 
   fscanf(fp,"%f", &x818); 
   fscanf(fp,"%f", &x819); 
   fscanf(fp,"%f", &x820); 
   fscanf(fp,"%f", &x821); 
   fscanf(fp,"%f", &x822); 
   fscanf(fp,"%f", &x823); 
   fscanf(fp,"%f", &x824); 

   fclose(fp);
   res=-(- 100*x675 - 100*x676 - 100*x677 - 100*x679 - 100*x681 - 100*x682
   - 100*x683 - 100*x684 - 100*x685 - 100*x686 - 100*x687 - 100*x688
   - 100*x689 - 100*x690 - 100*x691 - 100*x692 - 100*x693 - 100*x694
   - 100*x695 - 100*x696  - 10*b782 - 10*b783 - 10*b784 - 10*b785
   - 10*b786 - 10*b787 - 10*b788 - 10*b789 - 10*b790 - 10*b791 - 10* 0
   - 10* 0 - 10* 0 - 10* 0 - 10* 0 - 10* 0 - 10* 0 - 10* 0
   - 10* 0 - 10* 0 - 10000*x815 - 10000*x816 - 10000*x817 - 10000*x818
   - 10000*x819 - 10000*x820 - 10000*x821 - 10000*x822 - 10000*x823
   - 10000*x824 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
