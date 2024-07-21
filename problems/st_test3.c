#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="st_test3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2,i3,i4,i10,i5,i6,i7,i8,i9,i11,i12,i13;
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
   fscanf(fp,"%f", &i10); 
   fscanf(fp,"%f", &i5); 
   fscanf(fp,"%f", &i6); 
   fscanf(fp,"%f", &i7); 
   fscanf(fp,"%f", &i8); 
   fscanf(fp,"%f", &i9); 
   fscanf(fp,"%f", &i11); 
   fscanf(fp,"%f", &i12); 
   fscanf(fp,"%f", &i13); 

   fclose(fp);
   res=-(-(5*i1*i1 + 5*i1 + 5*i2*i2 - 5*i2 + 5*i3*i3 + 5*i3 + 5*i4*i4 + 5*i4 + 9*
 i10*i10 - i10) + i5 - i6 + i7 + i8 + i9 + i11 + i12 + i13  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
