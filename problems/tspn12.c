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
   char *problemname="tspn12";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x3,x2,x4,b25,x5,x6,b26,x7,x8,b27,x9,x10,b28,x11,x12,b29,x13,x14,b30,x15,x16,b31,x17,x18,b32,x19,x20,b33,x21,x22,b34,x23,x24,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
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
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b90); 

   fclose(fp);
   res= sqrt(sqr(x1 - x3) + sqr(x2 - x4))*b25 + sqrt(sqr(x1 - x5) + sqr(x2 - x6))*
b26 + sqrt(sqr(x1 - x7) + sqr(x2 - x8))*b27 + sqrt(sqr(x1 - x9) + sqr(x2
 - x10))*b28 + sqrt(sqr(x1 - x11) + sqr(x2 - x12))*b29 + sqrt(sqr(x1 - x13
) + sqr(x2 - x14))*b30 + sqrt(sqr(x1 - x15) + sqr(x2 - x16))*b31 + sqrt(
sqr(x1 - x17) + sqr(x2 - x18))*b32 + sqrt(sqr(x1 - x19) + sqr(x2 - x20))*
b33 + sqrt(sqr(x1 - x21) + sqr(x2 - x22))*b34 + sqrt(sqr(x1 - x23) + sqr(
x2 - x24))*b35 + sqrt(sqr(x3 - x5) + sqr(x4 - x6))*b36 + sqrt(sqr(x3 - x7)
 + sqr(x4 - x8))*b37 + sqrt(sqr(x3 - x9) + sqr(x4 - x10))*b38 + sqrt(sqr(
x3 - x11) + sqr(x4 - x12))*b39 + sqrt(sqr(x3 - x13) + sqr(x4 - x14))*b40
 + sqrt(sqr(x3 - x15) + sqr(x4 - x16))*b41 + sqrt(sqr(x3 - x17) + sqr(x4
 - x18))*b42 + sqrt(sqr(x3 - x19) + sqr(x4 - x20))*b43 + sqrt(sqr(x3 - x21
) + sqr(x4 - x22))*b44 + sqrt(sqr(x3 - x23) + sqr(x4 - x24))*b45 + sqrt(
sqr(x5 - x7) + sqr(x6 - x8))*b46 + sqrt(sqr(x5 - x9) + sqr(x6 - x10))*b47
 + sqrt(sqr(x5 - x11) + sqr(x6 - x12))*b48 + sqrt(sqr(x5 - x13) + sqr(x6
 - x14))*b49 + sqrt(sqr(x5 - x15) + sqr(x6 - x16))*b50 + sqrt(sqr(x5 - x17
) + sqr(x6 - x18))*b51 + sqrt(sqr(x5 - x19) + sqr(x6 - x20))*b52 + sqrt(
sqr(x5 - x21) + sqr(x6 - x22))*b53 + sqrt(sqr(x5 - x23) + sqr(x6 - x24))*
b54 + sqrt(sqr(x7 - x9) + sqr(x8 - x10))*b55 + sqrt(sqr(x7 - x11) + sqr(x8
 - x12))*b56 + sqrt(sqr(x7 - x13) + sqr(x8 - x14))*b57 + sqrt(sqr(x7 - x15
) + sqr(x8 - x16))*b58 + sqrt(sqr(x7 - x17) + sqr(x8 - x18))*b59 + sqrt(
sqr(x7 - x19) + sqr(x8 - x20))*b60 + sqrt(sqr(x7 - x21) + sqr(x8 - x22))*
b61 + sqrt(sqr(x7 - x23) + sqr(x8 - x24))*b62 + sqrt(sqr(x9 - x11) + sqr(
x10 - x12))*b63 + sqrt(sqr(x9 - x13) + sqr(x10 - x14))*b64 + sqrt(sqr(x9
 - x15) + sqr(x10 - x16))*b65 + sqrt(sqr(x9 - x17) + sqr(x10 - x18))*b66
 + sqrt(sqr(x9 - x19) + sqr(x10 - x20))*b67 + sqrt(sqr(x9 - x21) + sqr(x10
 - x22))*b68 + sqrt(sqr(x9 - x23) + sqr(x10 - x24))*b69 + sqrt(sqr(x11 -
 x13) + sqr(x12 - x14))*b70 + sqrt(sqr(x11 - x15) + sqr(x12 - x16))*b71 +
 sqrt(sqr(x11 - x17) + sqr(x12 - x18))*b72 + sqrt(sqr(x11 - x19) + sqr(x12
 - x20))*b73 + sqrt(sqr(x11 - x21) + sqr(x12 - x22))*b74 + sqrt(sqr(x11 -
 x23) + sqr(x12 - x24))*b75 + sqrt(sqr(x13 - x15) + sqr(x14 - x16))*b76 +
 sqrt(sqr(x13 - x17) + sqr(x14 - x18))*b77 + sqrt(sqr(x13 - x19) + sqr(x14
 - x20))*b78 + sqrt(sqr(x13 - x21) + sqr(x14 - x22))*b79 + sqrt(sqr(x13 -
 x23) + sqr(x14 - x24))*b80 + sqrt(sqr(x15 - x17) + sqr(x16 - x18))*b81 +
 sqrt(sqr(x15 - x19) + sqr(x16 - x20))*b82 + sqrt(sqr(x15 - x21) + sqr(x16
 - x22))*b83 + sqrt(sqr(x15 - x23) + sqr(x16 - x24))*b84 + sqrt(sqr(x17 -
 x19) + sqr(x18 - x20))*b85 + sqrt(sqr(x17 - x21) + sqr(x18 - x22))*b86 +
 sqrt(sqr(x17 - x23) + sqr(x18 - x24))*b87 + sqrt(sqr(x19 - x21) + sqr(x20
 - x22))*b88 + sqrt(sqr(x19 - x23) + sqr(x20 - x24))*b89 + sqrt(sqr(x21 -
 x23) + sqr(x22 - x24))*b90  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
