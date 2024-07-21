#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2g-0044-1601";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b10,b13,b37,b2,b5,b11,b14,b38,b3,b6,b12,b15,b39,b7,b16,b40,b8,b17,b41,b9,b18,b42,b19,b43,b20,b44,b21,b45,b22,b46,b23,b47,b24,b48,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 

   fclose(fp);
   res= 13960*b1*b4 + 132180*b1*b10 - 45455*b1*b13 + 21397*b1*b37 + 13960*b2*b5
  + 132180*b2*b11 - 45455*b2*b14 + 21397*b2*b38 + 13960*b3*b6 + 132180*b3*
 b12 - 45455*b3*b15 + 21397*b3*b39 - 30411*b4*b7 - 101527*b4*b16 - 8896*b4
 *b40 - 30411*b5*b8 - 101527*b5*b17 - 8896*b5*b41 - 30411*b6*b9 - 101527*
 b6*b18 - 8896*b6*b42 - 122332*b7*b10 + 30058*b7*b19 + 33114*b7*b43 -
  122332*b8*b11 + 30058*b8*b20 + 33114*b8*b44 - 122332*b9*b12 + 30058*b9*
 b21 + 33114*b9*b45 - 13676*b10*b22 + 124553*b10*b46 - 13676*b11*b23 +
  124553*b11*b47 - 13676*b12*b24 + 124553*b12*b48 + 17153*b13*b16 + 73691*
 b13*b22 - 32022*b13*b25 + 17153*b14*b17 + 73691*b14*b23 - 32022*b14*b26
  + 17153*b15*b18 + 73691*b15*b24 - 32022*b15*b27 - 106129*b16*b19 -
  101395*b16*b28 - 106129*b17*b20 - 101395*b17*b29 - 106129*b18*b21 -
  101395*b18*b30 - 10958*b19*b22 - 41751*b19*b31 - 10958*b20*b23 - 41751*
 b20*b32 - 10958*b21*b24 - 41751*b21*b33 - 30446*b22*b34 - 30446*b23*b35
  - 30446*b24*b36 + 94519*b25*b28 + 44613*b25*b34 + 70141*b25*b37 + 94519*
 b26*b29 + 44613*b26*b35 + 70141*b26*b38 + 94519*b27*b30 + 44613*b27*b36
  + 70141*b27*b39 + 73611*b28*b31 - 54792*b28*b40 + 73611*b29*b32 - 54792*
 b29*b41 + 73611*b30*b33 - 54792*b30*b42 + 57663*b31*b34 - 147596*b31*b43
  + 57663*b32*b35 - 147596*b32*b44 + 57663*b33*b36 - 147596*b33*b45 +
  70863*b34*b46 + 70863*b35*b47 + 70863*b36*b48 + 24474*b37*b40 - 178500*
 b37*b46 + 24474*b38*b41 - 178500*b38*b47 + 24474*b39*b42 - 178500*b39*b48
  + 118713*b40*b43 + 118713*b41*b44 + 118713*b42*b45 + 34279*b43*b46 +
  34279*b44*b47 + 34279*b45*b48  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
