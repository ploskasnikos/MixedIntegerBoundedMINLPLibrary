#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2g-0055-0062";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b13,b16,b61,b2,b5,b14,b17,b62,b3,b6,b15,b18,b63,b7,b19,b64,b8,b20,b65,b9,b21,b66,b10,b22,b67,b11,b23,b68,b12,b24,b69,b25,b70,b26,b71,b27,b72,b28,b73,b29,b74,b30,b75,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60;
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
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b75); 
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

   fclose(fp);
   res= (-11669*b1*b4) - 144456*b1*b13 + 30835*b1*b16 - 33555*b1*b61 - 11669*b2*
 b5 - 144456*b2*b14 + 30835*b2*b17 - 33555*b2*b62 - 11669*b3*b6 - 144456*
 b3*b15 + 30835*b3*b18 - 33555*b3*b63 + 52284*b4*b7 + 145893*b4*b19 -
  140641*b4*b64 + 52284*b5*b8 + 145893*b5*b20 - 140641*b5*b65 + 52284*b6*b9
  + 145893*b6*b21 - 140641*b6*b66 + 127397*b7*b10 - 12640*b7*b22 + 217400*
 b7*b67 + 127397*b8*b11 - 12640*b8*b23 + 217400*b8*b68 + 127397*b9*b12 -
  12640*b9*b24 + 217400*b9*b69 + 50562*b10*b13 - 78959*b10*b25 - 36333*b10*
 b70 + 50562*b11*b14 - 78959*b11*b26 - 36333*b11*b71 + 50562*b12*b15 -
  78959*b12*b27 - 36333*b12*b72 + 98784*b13*b28 - 31218*b13*b73 + 98784*b14
 *b29 - 31218*b14*b74 + 98784*b15*b30 - 31218*b15*b75 + 6320*b16*b19 +
  171989*b16*b28 - 39163*b16*b31 + 6320*b17*b20 + 171989*b17*b29 - 39163*
 b17*b32 + 6320*b18*b21 + 171989*b18*b30 - 39163*b18*b33 - 183413*b19*b22
  + 60462*b19*b34 - 183413*b20*b23 + 60462*b20*b35 - 183413*b21*b24 +
  60462*b21*b36 + 45778*b22*b25 + 192287*b22*b37 + 45778*b23*b26 + 192287*
 b23*b38 + 45778*b24*b27 + 192287*b24*b39 + 125824*b25*b28 + 41371*b25*b40
  + 125824*b26*b29 + 41371*b26*b41 + 125824*b27*b30 + 41371*b27*b42 +
  17724*b28*b43 + 17724*b29*b44 + 17724*b30*b45 + 12200*b31*b34 + 106251*
 b31*b43 - 88012*b31*b46 + 12200*b32*b35 + 106251*b32*b44 - 88012*b32*b47
  + 12200*b33*b36 + 106251*b33*b45 - 88012*b33*b48 - 17583*b34*b37 +
  118167*b34*b49 - 17583*b35*b38 + 118167*b35*b50 - 17583*b36*b39 + 118167*
 b36*b51 - 5402*b37*b40 - 27062*b37*b52 - 5402*b38*b41 - 27062*b38*b53 -
  5402*b39*b42 - 27062*b39*b54 - 117425*b40*b43 - 125320*b40*b55 - 117425*
 b41*b44 - 125320*b41*b56 - 117425*b42*b45 - 125320*b42*b57 + 29332*b43*
 b58 + 29332*b44*b59 + 29332*b45*b60 + 69937*b46*b49 + 65415*b46*b58 -
  197304*b46*b61 + 69937*b47*b50 + 65415*b47*b59 - 197304*b47*b62 + 69937*
 b48*b51 + 65415*b48*b60 - 197304*b48*b63 + 66551*b49*b52 + 92080*b49*b64
  + 66551*b50*b53 + 92080*b50*b65 + 66551*b51*b54 + 92080*b51*b66 + 47821*
 b52*b55 + 68105*b52*b67 + 47821*b53*b56 + 68105*b53*b68 + 47821*b54*b57
  + 68105*b54*b69 - 116706*b55*b58 - 6426*b55*b70 - 116706*b56*b59 - 6426*
 b56*b71 - 116706*b57*b60 - 6426*b57*b72 - 154797*b58*b73 - 154797*b59*b74
  - 154797*b60*b75 - 14848*b61*b64 - 2103*b61*b73 - 14848*b62*b65 - 2103*
 b62*b74 - 14848*b63*b66 - 2103*b63*b75 + 17019*b64*b67 + 17019*b65*b68 +
  17019*b66*b69 + 83365*b67*b70 + 83365*b68*b71 + 83365*b69*b72 - 20293*b70
 *b73 - 20293*b71*b74 - 20293*b72*b75  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
