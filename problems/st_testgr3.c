#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_testgr3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &i1); 
   fscanf(fp,"%f", &i2); 
   fscanf(fp,"%f", &i3); 
   fscanf(fp,"%f", &i4); 
   fscanf(fp,"%f", &i5); 
   fscanf(fp,"%f", &i6); 
   fscanf(fp,"%f", &i7); 
   fscanf(fp,"%f", &i8); 
   fscanf(fp,"%f", &i9); 
   fscanf(fp,"%f", &i10); 
   fscanf(fp,"%f", &i11); 
   fscanf(fp,"%f", &i12); 
   fscanf(fp,"%f", &i13); 
   fscanf(fp,"%f", &i14); 
   fscanf(fp,"%f", &i15); 
   fscanf(fp,"%f", &i16); 
   fscanf(fp,"%f", &i17); 
   fscanf(fp,"%f", &i18); 
   fscanf(fp,"%f", &i19); 
   fscanf(fp,"%f", &i20); 

   fclose(fp);
   res=-(-(0.00055*i1*i1 - 0.0583*i1 + 0.0019*i2*i2 - 0.2318*i2 + 0.0002*i3*i3 +
  0.0108*i3 + 0.00095*i4*i4 - 0.1634*i4 + 0.0046*i5*i5 - 0.138*i5 + 0.0035*
 i6*i6 + 0.357*i6 + 0.00315*i7*i7 - 0.1953*i7 + 0.00475*i8*i8 + 0.361*i8
  + 0.0048*i9*i9 - 0.1824*i9 + 0.003*i10*i10 + 0.162*i10 + 0.00265*i11*i11
  - 0.4346*i11 + 0.0017*i12*i12 - 0.1054*i12 + 0.0012*i13*i13 + 0.2376*i13
  + 0.00295*i14*i14 - 0.0059*i14 + 0.00315*i15*i15 + 0.189*i15 + 0.0021*
 i16*i16 - 0.0252*i16 + 0.00225*i17*i17 - 0.099*i17 + 0.0034*i18*i18 -
  0.3604*i18 + 0.001*i19*i19 + 0.022*i19 + 0.00305*i20*i20 - 0.3294*i20)
   );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
