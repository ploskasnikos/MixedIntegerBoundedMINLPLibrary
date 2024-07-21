#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  

float sqr(float b)
{
   float z;
   z = b*b;
   return(z);
}

int main(int argc, char** argv) { 
   char *problemname="nvs17";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float i1,i2,i3,i4,i5,i6,i7;
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

   fclose(fp);
   res=-(-(7*sqr(i1) + 6*sqr(i2) + 14.2*i1 - 11.6*i2 + 8*sqr(i3) - 6*i3*i1 + 4*i3*
i2 + 18.4*i3 + 6*sqr(i4) + 2*i4*i1 + 2*i4*i3 - 24.8*i4 + 7*sqr(i5) - 4*i5*
i1 - 2*i5*i2 - 6*i5*i3 - 132.8*i5 + 4*sqr(i6) + 2*i6*i1 - 4*i6*i2 - 4*i6*
i3 - 2*i6*i4 + 6*i6*i5 - 84.4*i6 + 6*sqr(i7) - 2*i7*i1 - 6*i7*i2 - 2*i7*i3
 + 4*i7*i5 + 4*i7*i6 - 88*i7)  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
