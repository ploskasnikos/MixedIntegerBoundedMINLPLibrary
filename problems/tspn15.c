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
   char *problemname="tspn15";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x3,x2,x4,b31,x5,x6,b32,x7,x8,b33,x9,x10,b34,x11,x12,b35,x13,x14,b36,x15,x16,b37,x17,x18,b38,x19,x20,b39,x21,x22,b40,x23,x24,b41,x25,x26,b42,x27,x28,b43,x29,x30,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135;
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
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
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
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b135); 

   fclose(fp);
   res= sqrt(sqr(x1 - x3) + sqr(x2 - x4))*b31 + sqrt(sqr(x1 - x5) + sqr(x2 - x6))*
b32 + sqrt(sqr(x1 - x7) + sqr(x2 - x8))*b33 + sqrt(sqr(x1 - x9) + sqr(x2
 - x10))*b34 + sqrt(sqr(x1 - x11) + sqr(x2 - x12))*b35 + sqrt(sqr(x1 - x13
) + sqr(x2 - x14))*b36 + sqrt(sqr(x1 - x15) + sqr(x2 - x16))*b37 + sqrt(
sqr(x1 - x17) + sqr(x2 - x18))*b38 + sqrt(sqr(x1 - x19) + sqr(x2 - x20))*
b39 + sqrt(sqr(x1 - x21) + sqr(x2 - x22))*b40 + sqrt(sqr(x1 - x23) + sqr(
x2 - x24))*b41 + sqrt(sqr(x1 - x25) + sqr(x2 - x26))*b42 + sqrt(sqr(x1 -
 x27) + sqr(x2 - x28))*b43 + sqrt(sqr(x1 - x29) + sqr(x2 - x30))*b44 +
 sqrt(sqr(x3 - x5) + sqr(x4 - x6))*b45 + sqrt(sqr(x3 - x7) + sqr(x4 - x8))*
b46 + sqrt(sqr(x3 - x9) + sqr(x4 - x10))*b47 + sqrt(sqr(x3 - x11) + sqr(x4
 - x12))*b48 + sqrt(sqr(x3 - x13) + sqr(x4 - x14))*b49 + sqrt(sqr(x3 - x15
) + sqr(x4 - x16))*b50 + sqrt(sqr(x3 - x17) + sqr(x4 - x18))*b51 + sqrt(
sqr(x3 - x19) + sqr(x4 - x20))*b52 + sqrt(sqr(x3 - x21) + sqr(x4 - x22))*
b53 + sqrt(sqr(x3 - x23) + sqr(x4 - x24))*b54 + sqrt(sqr(x3 - x25) + sqr(
x4 - x26))*b55 + sqrt(sqr(x3 - x27) + sqr(x4 - x28))*b56 + sqrt(sqr(x3 -
 x29) + sqr(x4 - x30))*b57 + sqrt(sqr(x5 - x7) + sqr(x6 - x8))*b58 + sqrt(
sqr(x5 - x9) + sqr(x6 - x10))*b59 + sqrt(sqr(x5 - x11) + sqr(x6 - x12))*
b60 + sqrt(sqr(x5 - x13) + sqr(x6 - x14))*b61 + sqrt(sqr(x5 - x15) + sqr(
x6 - x16))*b62 + sqrt(sqr(x5 - x17) + sqr(x6 - x18))*b63 + sqrt(sqr(x5 -
 x19) + sqr(x6 - x20))*b64 + sqrt(sqr(x5 - x21) + sqr(x6 - x22))*b65 +
 sqrt(sqr(x5 - x23) + sqr(x6 - x24))*b66 + sqrt(sqr(x5 - x25) + sqr(x6 -
 x26))*b67 + sqrt(sqr(x5 - x27) + sqr(x6 - x28))*b68 + sqrt(sqr(x5 - x29)
 + sqr(x6 - x30))*b69 + sqrt(sqr(x7 - x9) + sqr(x8 - x10))*b70 + sqrt(sqr(
x7 - x11) + sqr(x8 - x12))*b71 + sqrt(sqr(x7 - x13) + sqr(x8 - x14))*b72
 + sqrt(sqr(x7 - x15) + sqr(x8 - x16))*b73 + sqrt(sqr(x7 - x17) + sqr(x8
 - x18))*b74 + sqrt(sqr(x7 - x19) + sqr(x8 - x20))*b75 + sqrt(sqr(x7 - x21
) + sqr(x8 - x22))*b76 + sqrt(sqr(x7 - x23) + sqr(x8 - x24))*b77 + sqrt(
sqr(x7 - x25) + sqr(x8 - x26))*b78 + sqrt(sqr(x7 - x27) + sqr(x8 - x28))*
b79 + sqrt(sqr(x7 - x29) + sqr(x8 - x30))*b80 + sqrt(sqr(x9 - x11) + sqr(
x10 - x12))*b81 + sqrt(sqr(x9 - x13) + sqr(x10 - x14))*b82 + sqrt(sqr(x9
 - x15) + sqr(x10 - x16))*b83 + sqrt(sqr(x9 - x17) + sqr(x10 - x18))*b84
 + sqrt(sqr(x9 - x19) + sqr(x10 - x20))*b85 + sqrt(sqr(x9 - x21) + sqr(x10
 - x22))*b86 + sqrt(sqr(x9 - x23) + sqr(x10 - x24))*b87 + sqrt(sqr(x9 -
 x25) + sqr(x10 - x26))*b88 + sqrt(sqr(x9 - x27) + sqr(x10 - x28))*b89 +
 sqrt(sqr(x9 - x29) + sqr(x10 - x30))*b90 + sqrt(sqr(x11 - x13) + sqr(x12
 - x14))*b91 + sqrt(sqr(x11 - x15) + sqr(x12 - x16))*b92 + sqrt(sqr(x11 -
 x17) + sqr(x12 - x18))*b93 + sqrt(sqr(x11 - x19) + sqr(x12 - x20))*b94 +
 sqrt(sqr(x11 - x21) + sqr(x12 - x22))*b95 + sqrt(sqr(x11 - x23) + sqr(x12
 - x24))*b96 + sqrt(sqr(x11 - x25) + sqr(x12 - x26))*b97 + sqrt(sqr(x11 -
 x27) + sqr(x12 - x28))*b98 + sqrt(sqr(x11 - x29) + sqr(x12 - x30))*b99 +
 sqrt(sqr(x13 - x15) + sqr(x14 - x16))*b100 + sqrt(sqr(x13 - x17) + sqr(x14
 - x18))*b101 + sqrt(sqr(x13 - x19) + sqr(x14 - x20))*b102 + sqrt(sqr(x13
 - x21) + sqr(x14 - x22))*b103 + sqrt(sqr(x13 - x23) + sqr(x14 - x24))*
b104 + sqrt(sqr(x13 - x25) + sqr(x14 - x26))*b105 + sqrt(sqr(x13 - x27) +
 sqr(x14 - x28))*b106 + sqrt(sqr(x13 - x29) + sqr(x14 - x30))*b107 + sqrt(
sqr(x15 - x17) + sqr(x16 - x18))*b108 + sqrt(sqr(x15 - x19) + sqr(x16 -
 x20))*b109 + sqrt(sqr(x15 - x21) + sqr(x16 - x22))*b110 + sqrt(sqr(x15 -
 x23) + sqr(x16 - x24))*b111 + sqrt(sqr(x15 - x25) + sqr(x16 - x26))*b112
 + sqrt(sqr(x15 - x27) + sqr(x16 - x28))*b113 + sqrt(sqr(x15 - x29) + sqr(
x16 - x30))*b114 + sqrt(sqr(x17 - x19) + sqr(x18 - x20))*b115 + sqrt(sqr(
x17 - x21) + sqr(x18 - x22))*b116 + sqrt(sqr(x17 - x23) + sqr(x18 - x24))*
b117 + sqrt(sqr(x17 - x25) + sqr(x18 - x26))*b118 + sqrt(sqr(x17 - x27) +
 sqr(x18 - x28))*b119 + sqrt(sqr(x17 - x29) + sqr(x18 - x30))*b120 + sqrt(
sqr(x19 - x21) + sqr(x20 - x22))*b121 + sqrt(sqr(x19 - x23) + sqr(x20 -
 x24))*b122 + sqrt(sqr(x19 - x25) + sqr(x20 - x26))*b123 + sqrt(sqr(x19 -
 x27) + sqr(x20 - x28))*b124 + sqrt(sqr(x19 - x29) + sqr(x20 - x30))*b125
 + sqrt(sqr(x21 - x23) + sqr(x22 - x24))*b126 + sqrt(sqr(x21 - x25) + sqr(
x22 - x26))*b127 + sqrt(sqr(x21 - x27) + sqr(x22 - x28))*b128 + sqrt(sqr(
x21 - x29) + sqr(x22 - x30))*b129 + sqrt(sqr(x23 - x25) + sqr(x24 - x26))*
b130 + sqrt(sqr(x23 - x27) + sqr(x24 - x28))*b131 + sqrt(sqr(x23 - x29) +
 sqr(x24 - x30))*b132 + sqrt(sqr(x25 - x27) + sqr(x26 - x28))*b133 + sqrt(
sqr(x25 - x29) + sqr(x26 - x30))*b134 + sqrt(sqr(x27 - x29) + sqr(x28 -
 x30))*b135  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
