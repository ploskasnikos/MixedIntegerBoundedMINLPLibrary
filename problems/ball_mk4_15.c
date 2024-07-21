#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ball_mk4_15";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20,i21,i22,i23,i24,i25,i26,i27,i28,i29,i30,i31;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &i25); 
   fscanf(fp,"%f", &i26); 
   fscanf(fp,"%f", &i27); 
   fscanf(fp,"%f", &i28); 
   fscanf(fp,"%f", &i29); 
   fscanf(fp,"%f", &i30); 
   fscanf(fp,"%f", &i31); 

   fclose(fp);
   res=-( - 29*i2 - 28*i3 - 27*i4 - 26*i5 - 25*i6 - 24*i7 - 23*i8 - 22*i9
 - 21*i10 - 20*i11 - 19*i12 - 18*i13 - 17*i14 - 16*i15 - 15*i16 - 14*i17
 - 13*i18 - 12*i19 - 11*i20 - 10*i21 - 9*i22 - 8*i23 - 7*i24 - 6*i25
 - 5*i26 - 4*i27 - 3*i28 - 2*i29 - i30 - 30*i31 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
