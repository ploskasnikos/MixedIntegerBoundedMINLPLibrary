#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="edgecross10-030";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b56,b81,b2,b66,b77,b86,b3,b47,b52,b54,b60,b65,b76,b83,b4,b50,b62,b71,b72,b84,b87,b5,b63,b64,b68,b69,b70,b74,b80,b90,b6,b7,b79,b8,b9,b10,b11,b12,b13,b14,b15,b16,b48,b53,b55,b58,b82,b85,b17,b46,b51,b59,b67,b78,b88,b18,b19,b20,b21,b22,b23,b24,b25,b75,b26,b27,b28,b30,b49,b61,b73,b89,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b89); 
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

   fclose(fp);
   res=-( 2*b1 - 2*b1*b56 - b56 - 2*b1*b81 + 3*b81 - 2*b2*b56 + 2*b2 - 2*b2*b66 -
   7*b66 - 2*b2*b77 + 2*b77 + 2*b2*b86 + 4*b86 - 2*b3*b47 - b3 + 7*b47 - 2*
  b3*b52 - 2*b52 + 2*b3*b54 - 4*b54 + 2*b3*b56 - 2*b3*b60 + 3*b60 + 2*b3*
  b65 - 5*b65 + 2*b3*b66 + 2*b3*b76 - b76 + 2*b3*b77 - 2*b3*b83 + 4*b83 -
   2*b3*b86 - 2*b4*b47 - b4 - 2*b4*b50 + 9*b50 + 2*b4*b54 + 2*b4*b56 - 2*b4
  *b62 + 9*b62 + 2*b4*b65 + 2*b4*b66 + 2*b4*b71 - 5*b71 + 2*b4*b72 - 10*
  b72 - 2*b4*b84 + 3*b84 - 2*b4*b87 + 8*b87 - 2*b5*b50 + 2*b5*b52 + 2*b5*
  b60 - 2*b5*b62 - 2*b5*b63 + 2*b63 + 2*b5*b64 - 4*b64 + 2*b5*b68 - 4*b68
   - 2*b5*b69 + 7*b69 + 2*b5*b70 - 5*b70 + 2*b5*b74 - 5*b74 - 2*b5*b80 + 3
  *b80 - 2*b5*b90 + 6*b90 - 2*b6*b50 + 4*b6 - 2*b6*b56 - 2*b6*b60 + 2*b6*
  b71 + 2*b6*b72 - 2*b6*b81 - 2*b6*b83 - 2*b6*b86 - 2*b7*b50 + 5*b7 - 2*b7
  *b56 - 2*b7*b60 - 2*b7*b63 - 2*b7*b66 - 2*b7*b68 + 2*b7*b70 + 2*b7*b74
   - 2*b7*b77 - 2*b7*b79 + 3*b79 + 2*b7*b86 - 2*b8*b50 + 2*b8 - 2*b8*b60
   + 2*b8*b71 + 2*b8*b72 - 2*b8*b83 - 2*b8*b86 - 2*b9*b50 + 3*b9 - 2*b9*
  b60 - 2*b9*b63 - 2*b9*b68 + 2*b9*b70 + 2*b9*b74 - 2*b9*b79 - 2*b10*b47
   - 3*b10 + 2*b10*b54 + 2*b10*b56 + 2*b10*b65 + 2*b10*b66 + 2*b11*b52 - 4
  *b11 + 2*b11*b60 + 2*b11*b64 + 2*b11*b68 - 2*b12*b47 + 3*b12 - 2*b12*b50
   - 2*b12*b56 - 2*b12*b60 + 2*b12*b65 + 2*b12*b66 + 2*b12*b71 + 2*b12*b72
   - 2*b12*b81 - 2*b12*b83 - 2*b12*b86 - 2*b13*b47 + 4*b13 - 2*b13*b50 - 2
  *b13*b56 - 2*b13*b60 - 2*b13*b63 + 2*b13*b64 - 2*b13*b66 + 2*b13*b70 + 2
  *b13*b74 - 2*b13*b77 - 2*b13*b79 + 2*b13*b86 - 2*b14*b47 - b14 - 2*b14*
  b50 + 2*b14*b54 + 2*b14*b56 - 2*b14*b62 + 2*b14*b65 + 2*b14*b66 + 2*b14*
  b71 + 2*b14*b72 - 2*b14*b84 - 2*b14*b87 - 2*b15*b50 + 2*b15*b52 + 2*b15*
  b60 - 2*b15*b62 - 2*b15*b63 + 2*b15*b64 + 2*b15*b68 - 2*b15*b69 + 2*b15*
  b70 + 2*b15*b74 - 2*b15*b80 - 2*b15*b90 + 2*b16*b48 + 3*b16 - 5*b48 + 2*
  b16*b53 - b53 + 2*b16*b55 - 4*b55 - 2*b16*b58 + 5*b58 - 2*b16*b62 - 2*
  b16*b82 + b82 - 2*b16*b84 - 2*b16*b85 + 4*b85 - 2*b16*b87 + 2*b17*b46 +
   2*b17 - 5*b46 + 2*b17*b48 + 2*b17*b51 - b51 - 2*b17*b58 + 2*b17*b59 - 4*
  b59 - 2*b17*b62 - 2*b17*b67 + 5*b67 - 2*b17*b69 - 2*b17*b78 + b78 - 2*
  b17*b80 + 2*b17*b88 - 4*b88 - 2*b17*b90 + 2*b18*b56 - 2*b18 + 2*b18*b66
   + 2*b18*b72 - 2*b18*b87 + 2*b19*b72 - 2*b19*b86 + 2*b20*b72 - 2*b20*b86
   + 2*b21*b56 - 2*b21 + 2*b21*b66 + 2*b22*b66 - b22 + 2*b22*b72 - 2*b22*
  b86 + 2*b23*b56 - 2*b23 + 2*b23*b66 + 2*b23*b72 - 2*b23*b87 + 2*b24*b55
   + b24 - 2*b24*b85 - 2*b24*b87 - 2*b25*b50 + 5*b25 - 2*b25*b56 - 2*b25*
  b60 - 2*b25*b63 - 2*b25*b66 - 2*b25*b68 - 2*b25*b72 - 2*b25*b74 + 2*b25*
  b75 + 5*b75 + 2*b25*b87 + 2*b25*b90 - 2*b26*b50 + 3*b26 - 2*b26*b60 - 2*
  b26*b63 - 2*b26*b68 - 2*b26*b74 + 2*b26*b75 + 2*b26*b90 + 2*b27*b50 - 4*
  b27 + 2*b27*b62 + 2*b27*b63 + 2*b27*b69 - 2*b28*b47 + 4*b28 - 2*b28*b50
   - 2*b28*b56 - 2*b28*b60 - 2*b28*b66 - 2*b28*b68 + 2*b28*b69 - 2*b28*b72
   - 2*b28*b74 + 2*b28*b75 + 2*b28*b87 + 2*b28*b90 + 2*b30*b46 + b30 + 2*
  b30*b48 + 2*b30*b49 - 5*b49 - 2*b30*b58 + 2*b30*b61 - 2*b61 - 2*b30*b62
   - 2*b30*b67 - 2*b30*b69 - 2*b30*b73 + 5*b73 - 2*b30*b75 + 2*b30*b89 - 2
  *b89 + 2*b31*b72 - 2*b31*b86 + 2*b32*b50 - 6*b32 + 2*b32*b56 + 2*b32*b60
   + 2*b32*b63 + 2*b32*b66 + 2*b32*b68 + 2*b33*b63 - 3*b33 + 2*b33*b66 + 2
  *b33*b68 + 2*b34*b50 - 5*b34 + 2*b34*b56 + 2*b34*b60 + 2*b34*b63 + 2*b34
  *b66 + 2*b34*b68 + 2*b34*b72 + 2*b34*b74 - 2*b34*b75 - 2*b34*b87 - 2*b34
  *b90 + 2*b35*b49 + b35 + 2*b35*b55 + 2*b35*b59 - 2*b35*b73 - 2*b35*b75
   - 2*b35*b85 - 2*b35*b87 + 2*b35*b88 - 2*b35*b90 + 2*b36*b50 - 4*b36 + 2
  *b36*b60 + 2*b36*b63 + 2*b36*b68 + 2*b37*b63 - 2*b37 + 2*b37*b68 - 2*b37
  *b72 + 2*b37*b86 + 2*b38*b50 - 3*b38 + 2*b38*b60 + 2*b38*b63 + 2*b38*b68
   + 2*b38*b74 - 2*b38*b75 - 2*b38*b90 + 2*b39*b49 + 2*b39*b59 - 2*b39*b73
   - 2*b39*b75 + 2*b39*b88 - 2*b39*b90 - 2*b40*b47 + 7*b40 - 2*b40*b50 - 2
  *b40*b56 - 2*b40*b60 - 2*b40*b63 - 2*b40*b66 - 2*b40*b68 - 2*b41*b50 + 4
  *b41 - 2*b41*b62 - 2*b41*b63 - 2*b41*b69 + 2*b42*b46 + 2*b42 + 2*b42*b48
   - 2*b42*b58 - 2*b42*b62 - 2*b42*b67 - 2*b42*b69 + 2*b43*b47 - 4*b43 + 2
  *b43*b50 + 2*b43*b56 + 2*b43*b60 + 2*b43*b66 + 2*b43*b68 - 2*b43*b69 + 2
  *b43*b72 + 2*b43*b74 - 2*b43*b75 - 2*b43*b87 - 2*b43*b90 + 2*b44*b46 + 2
  *b44 + 2*b44*b49 + 2*b44*b55 + 2*b44*b59 - 2*b44*b67 - 2*b44*b69 - 2*b44
  *b73 - 2*b44*b75 - 2*b44*b85 - 2*b44*b87 + 2*b44*b88 - 2*b44*b90 + 2*b45
  *b46 + b45 + 2*b45*b48 + 2*b45*b49 - 2*b45*b58 + 2*b45*b61 - 2*b45*b62
   - 2*b45*b67 - 2*b45*b69 - 2*b45*b73 - 2*b45*b75 + 2*b45*b89 
   - 184);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
