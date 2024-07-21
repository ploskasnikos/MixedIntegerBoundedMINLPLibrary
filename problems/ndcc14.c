#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ndcc14";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b757,b758,b759,b760,b761,b762,b763,b764,b765,b766,b767,b768,b769,b770,b771,b772,b773,b774,b775,b776,b777,b778,b779,b780,b781,b782,b783,b784,b785,b786,b787,b788,b789,b790,b791,b792,b793,b794,b795,b796,b797,b798,b799,b800,b801,b802,b803,b804,b805,b806,b807,b808,b809,b810;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b757); 
   fscanf(fp,"%f", &b758); 
   fscanf(fp,"%f", &b759); 
   fscanf(fp,"%f", &b760); 
   fscanf(fp,"%f", &b761); 
   fscanf(fp,"%f", &b762); 
   fscanf(fp,"%f", &b763); 
   fscanf(fp,"%f", &b764); 
   fscanf(fp,"%f", &b765); 
   fscanf(fp,"%f", &b766); 
   fscanf(fp,"%f", &b767); 
   fscanf(fp,"%f", &b768); 
   fscanf(fp,"%f", &b769); 
   fscanf(fp,"%f", &b770); 
   fscanf(fp,"%f", &b771); 
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
   fscanf(fp,"%f", &b792); 
   fscanf(fp,"%f", &b793); 
   fscanf(fp,"%f", &b794); 
   fscanf(fp,"%f", &b795); 
   fscanf(fp,"%f", &b796); 
   fscanf(fp,"%f", &b797); 
   fscanf(fp,"%f", &b798); 
   fscanf(fp,"%f", &b799); 
   fscanf(fp,"%f", &b800); 
   fscanf(fp,"%f", &b801); 
   fscanf(fp,"%f", &b802); 
   fscanf(fp,"%f", &b803); 
   fscanf(fp,"%f", &b804); 
   fscanf(fp,"%f", &b805); 
   fscanf(fp,"%f", &b806); 
   fscanf(fp,"%f", &b807); 
   fscanf(fp,"%f", &b808); 
   fscanf(fp,"%f", &b809); 
   fscanf(fp,"%f", &b810); 

   fclose(fp);
   res=-(- 1.247902153*b757 - 3.853248292*b758 - 2.753881396*b759
 - 1.247902153*b760 - 2.115303802*b761 - 2.073122818*b762
 - 3.87564082*b763 - 2.537458771*b764 - 3.897053494*b765
 - 3.223097071*b766 - 3.077538217*b767 - 3.222690685*b768
 - 3.045368992*b769 - 1.256398027*b770 - 1.321513474*b771
 - 2.115303802*b772 - 3.077538217*b773 - 3.213749761*b774
 - 1.140696436*b775 - 3.853248292*b776 - 3.87564082*b777
 - 1.796801476*b778 - 1.930844545*b779 - 2.073122818*b780
 - 2.537458771*b781 - 1.796801476*b782 - 2.930918827*b783
 - 2.753881396*b784 - 3.897053494*b785 - 3.572642632*b786
 - 2.15701522*b787 - 1.061422612*b788 - 3.222690685*b789
 - 3.213749761*b790 - 3.867132154*b791 - 3.572642632*b792
 - 3.838723369*b793 - 3.223097071*b794 - 3.045368992*b795
 - 2.15701522*b796 - 3.867132154*b797 - 3.838723369*b798
 - 3.613241704*b799 - 1.140696436*b800 - 2.930918827*b801
 - 3.293067286*b802 - 1.256398027*b803 - 1.737076687*b804
 - 1.321513474*b805 - 1.930844545*b806 - 1.061422612*b807
 - 3.613241704*b808 - 3.293067286*b809 - 1.737076687*b810  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
