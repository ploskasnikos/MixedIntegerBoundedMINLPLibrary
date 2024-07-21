#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="deb10";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x130,x132,x134,x135,x137,x138,x139,x140,x141,x142,x143,x146,x148,x150,x151,x153,x154,x155,x156,x157,x158,x159,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b172); 

   fclose(fp);
   res=-(- 100*x130 - 100*x132 - 100*x134 - 100*x135 - 100*x137 - 100*x138
   - 100*x139 - 100*x140 - 100*x141 - 100*x142 - 100*x143 - 100*x146
   - 100*x148 - 100*x150 - 100*x151 - 100*x153 - 100*x154 - 100*x155
   - 100*x156 - 100*x157 - 100*x158 - 100*x159  - 10*b162
   - 10*b163 - 10*b164 - 10*b165 - 10*b166 - 10*b167 - 10*b168 - 10*b169
   - 10*b170 - 10*b171 - 10*b172 - 10* 0 - 10* 0 - 10* 0 - 10* 0
   - 10* 0 - 10* 0 - 10* 0 - 10* 0 - 10* 0 - 10* 0 - 10* 0
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
