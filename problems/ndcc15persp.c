#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ndcc15persp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b601,b602,b603,b604,b605,b606,b607,b608,b609,b610,b611,b612,b613,b614,b615,b616,b617,b618,b619,b620,b621,b622,b623,b624,b625,b626,b627,b628,b629,b630,b631,b632,b633,b634,b635,b636,b637,b638,b639,b640;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &b602); 
   fscanf(fp,"%f", &b603); 
   fscanf(fp,"%f", &b604); 
   fscanf(fp,"%f", &b605); 
   fscanf(fp,"%f", &b606); 
   fscanf(fp,"%f", &b607); 
   fscanf(fp,"%f", &b608); 
   fscanf(fp,"%f", &b609); 
   fscanf(fp,"%f", &b610); 
   fscanf(fp,"%f", &b611); 
   fscanf(fp,"%f", &b612); 
   fscanf(fp,"%f", &b613); 
   fscanf(fp,"%f", &b614); 
   fscanf(fp,"%f", &b615); 
   fscanf(fp,"%f", &b616); 
   fscanf(fp,"%f", &b617); 
   fscanf(fp,"%f", &b618); 
   fscanf(fp,"%f", &b619); 
   fscanf(fp,"%f", &b620); 
   fscanf(fp,"%f", &b621); 
   fscanf(fp,"%f", &b622); 
   fscanf(fp,"%f", &b623); 
   fscanf(fp,"%f", &b624); 
   fscanf(fp,"%f", &b625); 
   fscanf(fp,"%f", &b626); 
   fscanf(fp,"%f", &b627); 
   fscanf(fp,"%f", &b628); 
   fscanf(fp,"%f", &b629); 
   fscanf(fp,"%f", &b630); 
   fscanf(fp,"%f", &b631); 
   fscanf(fp,"%f", &b632); 
   fscanf(fp,"%f", &b633); 
   fscanf(fp,"%f", &b634); 
   fscanf(fp,"%f", &b635); 
   fscanf(fp,"%f", &b636); 
   fscanf(fp,"%f", &b637); 
   fscanf(fp,"%f", &b638); 
   fscanf(fp,"%f", &b639); 
   fscanf(fp,"%f", &b640); 

   fclose(fp);
   res=-(- 3.556098535*b601 - 3.041877037*b602 - 3.589685587*b603
 - 3.905780389*b604 - 3.556098535*b605 - 1.217492332*b606
 - 2.503715254*b607 - 1.063607104*b608 - 1.217492332*b609
 - 2.503715254*b610 - 3.633719815*b611 - 2.125478257*b612
 - 3.041877037*b613 - 2.125478257*b614 - 1.784531452*b615
 - 3.064279153*b616 - 1.50214444*b617 - 3.064279153*b618
 - 2.200931005*b619 - 1.190857108*b620 - 1.784531452*b621
 - 2.200931005*b622 - 2.108870677*b623 - 3.589685587*b624
 - 2.108870677*b625 - 3.282989665*b626 - 3.282989665*b627
 - 1.220939503*b628 - 3.902013532*b629 - 3.633719815*b630
 - 1.50214444*b631 - 1.220939503*b632 - 3.902013532*b633
 - 3.510868159*b634 - 1.190857108*b635 - 2.805504934*b636
 - 3.905780389*b637 - 1.063607104*b638 - 3.510868159*b639
 - 2.805504934*b640  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
