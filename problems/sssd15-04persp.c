#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd15-04persp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,x73,x74,x75,x76;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
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
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 

   fclose(fp);
   res=-(- 53.1533839248115*b1 - 177.583181382496*b2 - 80.6428266602653*b3
 - 231.95916447606*b4 - 394.432428138298*b5 - 444.974070084717*b6
 - 459.794817811195*b7 - 695.629649483288*b8 - 323.203981426319*b9
 - 107.360282998709*b10 - 361.859887112392*b11 - 367.306912008994*b12
 - 282.872191198352*b13 - 44.0762253696262*b14 - 317.877544418109*b15
 - 316.134390405973*b16 - 100.330419683223*b17 - 127.926900226391*b18
 - 139.263247551061*b19 - 254.000222645919*b20 - 194.145316904472*b21
 - 116.037290266393*b22 - 222.112787515659*b23 - 263.356262140469*b24
 - 571.289311491824*b25 - 347.171110484916*b26 - 646.58041890394*b27
 - 747.500077392939*b28 - 267.180266374013*b29 - 432.187536801291*b30
 - 223.193932764969*b31 - 305.606281730255*b32 - 484.148164648118*b33
 - 255.18826726263*b34 - 500.409280467716*b35 - 357.348895559311*b36
 - 154.81861346409*b37 - 47.9482185242841*b38 - 178.01500365671*b39
 - 197.299183634545*b40 - 110.221327583974*b41 - 276.335219124972*b42
 - 66.6367550739739*b43 - 215.126920582161*b44 - 251.865680365869*b45
 - 259.485555817488*b46 - 325.903992788768*b47 - 533.263861665761*b48
 - 365.289467328013*b49 - 698.425848556873*b50 - 342.854784735801*b51
 - 672.157315207286*b52 - 278.522996301316*b53 - 127.656852798454*b54
 - 302.312726976851*b55 - 281.218053524739*b56 - 629.708028128623*b57
 - 303.067014885745*b58 - 662.424721658793*b59 - 521.27200594153*b60
 - 313.6973235*b61 - 136.4460104172*b62 - 95.4447793733688*b63
 - 401.4402965*b64 - 160.307673981768*b65 - 107.445134115433*b66
 - 456.70672375*b67 - 163.727629808624*b68 - 103.975094190251*b69
 - 349.50038725*b70 - 137.744259121245*b71 - 91.7174793486262*b72
 - 74750.0077392939*x73 - 74750.0077392939*x74 - 74750.0077392939*x75
 - 74750.0077392939*x76  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
