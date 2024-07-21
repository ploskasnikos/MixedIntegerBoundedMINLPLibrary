#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_test8";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20,i21,i22,i23,i24;
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
   fscanf(fp,"%f", &i21); 
   fscanf(fp,"%f", &i22); 
   fscanf(fp,"%f", &i23); 
   fscanf(fp,"%f", &i24); 

   fclose(fp);
   res=-(-(7*i1*i1 + 300*i1 + 4*i2*i2 + 270*i2 + 6*i3*i3 - 460*i3 + 8*i4*i4 + 800*
 i4 + 12*i5*i5 + 740*i5 + 9*i6*i6 - 600*i6 + 14*i7*i7 + 540*i7 + 7*i8*i8
  + 380*i8 + 13*i9*i9 + 300*i9 + 12*i10*i10 - 490*i10 + 8*i11*i11 + 380*
 i11 + 4*i12*i12 + 760*i12 + 7*i13*i13 - 430*i13 + 9*i14*i14 + 250*i14 +
  16*i15*i15 + 390*i15 + 8*i16*i16 + 600*i16 + 4*i17*i17 - 210*i17 + 10*i18
 *i18 + 830*i18 + 21*i19*i19 + 470*i19 + 13*i20*i20 - 680*i20 + 17*i21*i21
  + 360*i21 + 9*i22*i22 + 290*i22 + 8*i23*i23 - 400*i23 + 4*i24*i24 + 310*
 i24)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
