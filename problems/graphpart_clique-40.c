#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_clique-40";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b7,b10,b13,b16,b19,b22,b25,b28,b31,b34,b37,b40,b43,b46,b49,b52,b55,b58,b61,b64,b67,b70,b73,b76,b79,b82,b85,b88,b91,b94,b97,b100,b103,b106,b109,b112,b115,b118,b2,b5,b8,b11,b14,b17,b20,b23,b26,b29,b32,b35,b38,b41,b44,b47,b50,b53,b56,b59,b62,b65,b68,b71,b74,b77,b80,b83,b86,b89,b92,b95,b98,b101,b104,b107,b110,b113,b116,b119,b3,b6,b9,b12,b15,b18,b21,b24,b27,b30,b33,b36,b39,b42,b45,b48,b51,b54,b57,b60,b63,b66,b69,b72,b75,b78,b81,b84,b87,b90,b93,b96,b99,b102,b105,b108,b111,b114,b117,b120;
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
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b120); 

   fclose(fp);
   res=b1*b4 + 2*b1*b7 + 3*b1*b10 + 4*b1*b13 + 5*b1*b16 + 6*b1*b19 + 7*b1*b22 +
  8*b1*b25 + 9*b1*b28 + 10*b1*b31 + 11*b1*b34 + 12*b1*b37 + 13*b1*b40 + 14*
 b1*b43 + 15*b1*b46 + 16*b1*b49 + 17*b1*b52 + 18*b1*b55 + 19*b1*b58 + 20*
 b1*b61 + 21*b1*b64 + 22*b1*b67 + 23*b1*b70 + 24*b1*b73 + 25*b1*b76 + 26*
 b1*b79 + 27*b1*b82 + 28*b1*b85 + 29*b1*b88 + 30*b1*b91 + 31*b1*b94 + 32*
 b1*b97 + 33*b1*b100 + 34*b1*b103 + 35*b1*b106 + 36*b1*b109 + 37*b1*b112
  + 38*b1*b115 + 39*b1*b118 + b2*b5 + 2*b2*b8 + 3*b2*b11 + 4*b2*b14 + 5*b2
 *b17 + 6*b2*b20 + 7*b2*b23 + 8*b2*b26 + 9*b2*b29 + 10*b2*b32 + 11*b2*b35
  + 12*b2*b38 + 13*b2*b41 + 14*b2*b44 + 15*b2*b47 + 16*b2*b50 + 17*b2*b53
  + 18*b2*b56 + 19*b2*b59 + 20*b2*b62 + 21*b2*b65 + 22*b2*b68 + 23*b2*b71
  + 24*b2*b74 + 25*b2*b77 + 26*b2*b80 + 27*b2*b83 + 28*b2*b86 + 29*b2*b89
  + 30*b2*b92 + 31*b2*b95 + 32*b2*b98 + 33*b2*b101 + 34*b2*b104 + 35*b2*
 b107 + 36*b2*b110 + 37*b2*b113 + 38*b2*b116 + 39*b2*b119 + b3*b6 + 2*b3*
 b9 + 3*b3*b12 + 4*b3*b15 + 5*b3*b18 + 6*b3*b21 + 7*b3*b24 + 8*b3*b27 + 9*
 b3*b30 + 10*b3*b33 + 11*b3*b36 + 12*b3*b39 + 13*b3*b42 + 14*b3*b45 + 15*
 b3*b48 + 16*b3*b51 + 17*b3*b54 + 18*b3*b57 + 19*b3*b60 + 20*b3*b63 + 21*
 b3*b66 + 22*b3*b69 + 23*b3*b72 + 24*b3*b75 + 25*b3*b78 + 26*b3*b81 + 27*
 b3*b84 + 28*b3*b87 + 29*b3*b90 + 30*b3*b93 + 31*b3*b96 + 32*b3*b99 + 33*
 b3*b102 + 34*b3*b105 + 35*b3*b108 + 36*b3*b111 + 37*b3*b114 + 38*b3*b117
  + 39*b3*b120 + b4*b7 + 2*b4*b10 + 3*b4*b13 + 4*b4*b16 + 5*b4*b19 + 6*b4*
 b22 + 7*b4*b25 + 8*b4*b28 + 9*b4*b31 + 10*b4*b34 + 11*b4*b37 + 12*b4*b40
  + 13*b4*b43 + 14*b4*b46 + 15*b4*b49 + 16*b4*b52 + 17*b4*b55 + 18*b4*b58
  + 19*b4*b61 + 20*b4*b64 + 21*b4*b67 + 22*b4*b70 + 23*b4*b73 + 24*b4*b76
  + 25*b4*b79 + 26*b4*b82 + 27*b4*b85 + 28*b4*b88 + 29*b4*b91 + 30*b4*b94
  + 31*b4*b97 + 32*b4*b100 + 33*b4*b103 + 34*b4*b106 + 35*b4*b109 + 36*b4*
 b112 + 37*b4*b115 + 38*b4*b118 + b5*b8 + 2*b5*b11 + 3*b5*b14 + 4*b5*b17
  + 5*b5*b20 + 6*b5*b23 + 7*b5*b26 + 8*b5*b29 + 9*b5*b32 + 10*b5*b35 + 11*
 b5*b38 + 12*b5*b41 + 13*b5*b44 + 14*b5*b47 + 15*b5*b50 + 16*b5*b53 + 17*
 b5*b56 + 18*b5*b59 + 19*b5*b62 + 20*b5*b65 + 21*b5*b68 + 22*b5*b71 + 23*
 b5*b74 + 24*b5*b77 + 25*b5*b80 + 26*b5*b83 + 27*b5*b86 + 28*b5*b89 + 29*
 b5*b92 + 30*b5*b95 + 31*b5*b98 + 32*b5*b101 + 33*b5*b104 + 34*b5*b107 +
  35*b5*b110 + 36*b5*b113 + 37*b5*b116 + 38*b5*b119 + b6*b9 + 2*b6*b12 + 3*
 b6*b15 + 4*b6*b18 + 5*b6*b21 + 6*b6*b24 + 7*b6*b27 + 8*b6*b30 + 9*b6*b33
  + 10*b6*b36 + 11*b6*b39 + 12*b6*b42 + 13*b6*b45 + 14*b6*b48 + 15*b6*b51
  + 16*b6*b54 + 17*b6*b57 + 18*b6*b60 + 19*b6*b63 + 20*b6*b66 + 21*b6*b69
  + 22*b6*b72 + 23*b6*b75 + 24*b6*b78 + 25*b6*b81 + 26*b6*b84 + 27*b6*b87
  + 28*b6*b90 + 29*b6*b93 + 30*b6*b96 + 31*b6*b99 + 32*b6*b102 + 33*b6*
 b105 + 34*b6*b108 + 35*b6*b111 + 36*b6*b114 + 37*b6*b117 + 38*b6*b120 +
  b7*b10 + 2*b7*b13 + 3*b7*b16 + 4*b7*b19 + 5*b7*b22 + 6*b7*b25 + 7*b7*b28
  + 8*b7*b31 + 9*b7*b34 + 10*b7*b37 + 11*b7*b40 + 12*b7*b43 + 13*b7*b46 +
  14*b7*b49 + 15*b7*b52 + 16*b7*b55 + 17*b7*b58 + 18*b7*b61 + 19*b7*b64 +
  20*b7*b67 + 21*b7*b70 + 22*b7*b73 + 23*b7*b76 + 24*b7*b79 + 25*b7*b82 +
  26*b7*b85 + 27*b7*b88 + 28*b7*b91 + 29*b7*b94 + 30*b7*b97 + 31*b7*b100 +
  32*b7*b103 + 33*b7*b106 + 34*b7*b109 + 35*b7*b112 + 36*b7*b115 + 37*b7*
 b118 + b8*b11 + 2*b8*b14 + 3*b8*b17 + 4*b8*b20 + 5*b8*b23 + 6*b8*b26 + 7*
 b8*b29 + 8*b8*b32 + 9*b8*b35 + 10*b8*b38 + 11*b8*b41 + 12*b8*b44 + 13*b8*
 b47 + 14*b8*b50 + 15*b8*b53 + 16*b8*b56 + 17*b8*b59 + 18*b8*b62 + 19*b8*
 b65 + 20*b8*b68 + 21*b8*b71 + 22*b8*b74 + 23*b8*b77 + 24*b8*b80 + 25*b8*
 b83 + 26*b8*b86 + 27*b8*b89 + 28*b8*b92 + 29*b8*b95 + 30*b8*b98 + 31*b8*
 b101 + 32*b8*b104 + 33*b8*b107 + 34*b8*b110 + 35*b8*b113 + 36*b8*b116 +
  37*b8*b119 + b9*b12 + 2*b9*b15 + 3*b9*b18 + 4*b9*b21 + 5*b9*b24 + 6*b9*
 b27 + 7*b9*b30 + 8*b9*b33 + 9*b9*b36 + 10*b9*b39 + 11*b9*b42 + 12*b9*b45
  + 13*b9*b48 + 14*b9*b51 + 15*b9*b54 + 16*b9*b57 + 17*b9*b60 + 18*b9*b63
  + 19*b9*b66 + 20*b9*b69 + 21*b9*b72 + 22*b9*b75 + 23*b9*b78 + 24*b9*b81
  + 25*b9*b84 + 26*b9*b87 + 27*b9*b90 + 28*b9*b93 + 29*b9*b96 + 30*b9*b99
  + 31*b9*b102 + 32*b9*b105 + 33*b9*b108 + 34*b9*b111 + 35*b9*b114 + 36*b9
 *b117 + 37*b9*b120 + b10*b13 + 2*b10*b16 + 3*b10*b19 + 4*b10*b22 + 5*b10*
 b25 + 6*b10*b28 + 7*b10*b31 + 8*b10*b34 + 9*b10*b37 + 10*b10*b40 + 11*b10
 *b43 + 12*b10*b46 + 13*b10*b49 + 14*b10*b52 + 15*b10*b55 + 16*b10*b58 +
  17*b10*b61 + 18*b10*b64 + 19*b10*b67 + 20*b10*b70 + 21*b10*b73 + 22*b10*
 b76 + 23*b10*b79 + 24*b10*b82 + 25*b10*b85 + 26*b10*b88 + 27*b10*b91 + 28
 *b10*b94 + 29*b10*b97 + 30*b10*b100 + 31*b10*b103 + 32*b10*b106 + 33*b10*
 b109 + 34*b10*b112 + 35*b10*b115 + 36*b10*b118 + b11*b14 + 2*b11*b17 + 3*
 b11*b20 + 4*b11*b23 + 5*b11*b26 + 6*b11*b29 + 7*b11*b32 + 8*b11*b35 + 9*
 b11*b38 + 10*b11*b41 + 11*b11*b44 + 12*b11*b47 + 13*b11*b50 + 14*b11*b53
  + 15*b11*b56 + 16*b11*b59 + 17*b11*b62 + 18*b11*b65 + 19*b11*b68 + 20*
 b11*b71 + 21*b11*b74 + 22*b11*b77 + 23*b11*b80 + 24*b11*b83 + 25*b11*b86
  + 26*b11*b89 + 27*b11*b92 + 28*b11*b95 + 29*b11*b98 + 30*b11*b101 + 31*
 b11*b104 + 32*b11*b107 + 33*b11*b110 + 34*b11*b113 + 35*b11*b116 + 36*b11
 *b119 + b12*b15 + 2*b12*b18 + 3*b12*b21 + 4*b12*b24 + 5*b12*b27 + 6*b12*
 b30 + 7*b12*b33 + 8*b12*b36 + 9*b12*b39 + 10*b12*b42 + 11*b12*b45 + 12*
 b12*b48 + 13*b12*b51 + 14*b12*b54 + 15*b12*b57 + 16*b12*b60 + 17*b12*b63
  + 18*b12*b66 + 19*b12*b69 + 20*b12*b72 + 21*b12*b75 + 22*b12*b78 + 23*
 b12*b81 + 24*b12*b84 + 25*b12*b87 + 26*b12*b90 + 27*b12*b93 + 28*b12*b96
  + 29*b12*b99 + 30*b12*b102 + 31*b12*b105 + 32*b12*b108 + 33*b12*b111 +
  34*b12*b114 + 35*b12*b117 + 36*b12*b120 + b13*b16 + 2*b13*b19 + 3*b13*b22
  + 4*b13*b25 + 5*b13*b28 + 6*b13*b31 + 7*b13*b34 + 8*b13*b37 + 9*b13*b40
  + 10*b13*b43 + 11*b13*b46 + 12*b13*b49 + 13*b13*b52 + 14*b13*b55 + 15*
 b13*b58 + 16*b13*b61 + 17*b13*b64 + 18*b13*b67 + 19*b13*b70 + 20*b13*b73
  + 21*b13*b76 + 22*b13*b79 + 23*b13*b82 + 24*b13*b85 + 25*b13*b88 + 26*
 b13*b91 + 27*b13*b94 + 28*b13*b97 + 29*b13*b100 + 30*b13*b103 + 31*b13*
 b106 + 32*b13*b109 + 33*b13*b112 + 34*b13*b115 + 35*b13*b118 + b14*b17 +
  2*b14*b20 + 3*b14*b23 + 4*b14*b26 + 5*b14*b29 + 6*b14*b32 + 7*b14*b35 + 8
 *b14*b38 + 9*b14*b41 + 10*b14*b44 + 11*b14*b47 + 12*b14*b50 + 13*b14*b53
  + 14*b14*b56 + 15*b14*b59 + 16*b14*b62 + 17*b14*b65 + 18*b14*b68 + 19*
 b14*b71 + 20*b14*b74 + 21*b14*b77 + 22*b14*b80 + 23*b14*b83 + 24*b14*b86
  + 25*b14*b89 + 26*b14*b92 + 27*b14*b95 + 28*b14*b98 + 29*b14*b101 + 30*
 b14*b104 + 31*b14*b107 + 32*b14*b110 + 33*b14*b113 + 34*b14*b116 + 35*b14
 *b119 + b15*b18 + 2*b15*b21 + 3*b15*b24 + 4*b15*b27 + 5*b15*b30 + 6*b15*
 b33 + 7*b15*b36 + 8*b15*b39 + 9*b15*b42 + 10*b15*b45 + 11*b15*b48 + 12*
 b15*b51 + 13*b15*b54 + 14*b15*b57 + 15*b15*b60 + 16*b15*b63 + 17*b15*b66
  + 18*b15*b69 + 19*b15*b72 + 20*b15*b75 + 21*b15*b78 + 22*b15*b81 + 23*
 b15*b84 + 24*b15*b87 + 25*b15*b90 + 26*b15*b93 + 27*b15*b96 + 28*b15*b99
  + 29*b15*b102 + 30*b15*b105 + 31*b15*b108 + 32*b15*b111 + 33*b15*b114 +
  34*b15*b117 + 35*b15*b120 + b16*b19 + 2*b16*b22 + 3*b16*b25 + 4*b16*b28
  + 5*b16*b31 + 6*b16*b34 + 7*b16*b37 + 8*b16*b40 + 9*b16*b43 + 10*b16*b46
  + 11*b16*b49 + 12*b16*b52 + 13*b16*b55 + 14*b16*b58 + 15*b16*b61 + 16*
 b16*b64 + 17*b16*b67 + 18*b16*b70 + 19*b16*b73 + 20*b16*b76 + 21*b16*b79
  + 22*b16*b82 + 23*b16*b85 + 24*b16*b88 + 25*b16*b91 + 26*b16*b94 + 27*
 b16*b97 + 28*b16*b100 + 29*b16*b103 + 30*b16*b106 + 31*b16*b109 + 32*b16*
 b112 + 33*b16*b115 + 34*b16*b118 + b17*b20 + 2*b17*b23 + 3*b17*b26 + 4*
 b17*b29 + 5*b17*b32 + 6*b17*b35 + 7*b17*b38 + 8*b17*b41 + 9*b17*b44 + 10*
 b17*b47 + 11*b17*b50 + 12*b17*b53 + 13*b17*b56 + 14*b17*b59 + 15*b17*b62
  + 16*b17*b65 + 17*b17*b68 + 18*b17*b71 + 19*b17*b74 + 20*b17*b77 + 21*
 b17*b80 + 22*b17*b83 + 23*b17*b86 + 24*b17*b89 + 25*b17*b92 + 26*b17*b95
  + 27*b17*b98 + 28*b17*b101 + 29*b17*b104 + 30*b17*b107 + 31*b17*b110 +
  32*b17*b113 + 33*b17*b116 + 34*b17*b119 + b18*b21 + 2*b18*b24 + 3*b18*b27
  + 4*b18*b30 + 5*b18*b33 + 6*b18*b36 + 7*b18*b39 + 8*b18*b42 + 9*b18*b45
  + 10*b18*b48 + 11*b18*b51 + 12*b18*b54 + 13*b18*b57 + 14*b18*b60 + 15*
 b18*b63 + 16*b18*b66 + 17*b18*b69 + 18*b18*b72 + 19*b18*b75 + 20*b18*b78
  + 21*b18*b81 + 22*b18*b84 + 23*b18*b87 + 24*b18*b90 + 25*b18*b93 + 26*
 b18*b96 + 27*b18*b99 + 28*b18*b102 + 29*b18*b105 + 30*b18*b108 + 31*b18*
 b111 + 32*b18*b114 + 33*b18*b117 + 34*b18*b120 + b19*b22 + 2*b19*b25 + 3*
 b19*b28 + 4*b19*b31 + 5*b19*b34 + 6*b19*b37 + 7*b19*b40 + 8*b19*b43 + 9*
 b19*b46 + 10*b19*b49 + 11*b19*b52 + 12*b19*b55 + 13*b19*b58 + 14*b19*b61
  + 15*b19*b64 + 16*b19*b67 + 17*b19*b70 + 18*b19*b73 + 19*b19*b76 + 20*
 b19*b79 + 21*b19*b82 + 22*b19*b85 + 23*b19*b88 + 24*b19*b91 + 25*b19*b94
  + 26*b19*b97 + 27*b19*b100 + 28*b19*b103 + 29*b19*b106 + 30*b19*b109 +
  31*b19*b112 + 32*b19*b115 + 33*b19*b118 + b20*b23 + 2*b20*b26 + 3*b20*b29
  + 4*b20*b32 + 5*b20*b35 + 6*b20*b38 + 7*b20*b41 + 8*b20*b44 + 9*b20*b47
  + 10*b20*b50 + 11*b20*b53 + 12*b20*b56 + 13*b20*b59 + 14*b20*b62 + 15*
 b20*b65 + 16*b20*b68 + 17*b20*b71 + 18*b20*b74 + 19*b20*b77 + 20*b20*b80
  + 21*b20*b83 + 22*b20*b86 + 23*b20*b89 + 24*b20*b92 + 25*b20*b95 + 26*
 b20*b98 + 27*b20*b101 + 28*b20*b104 + 29*b20*b107 + 30*b20*b110 + 31*b20*
 b113 + 32*b20*b116 + 33*b20*b119 + b21*b24 + 2*b21*b27 + 3*b21*b30 + 4*
 b21*b33 + 5*b21*b36 + 6*b21*b39 + 7*b21*b42 + 8*b21*b45 + 9*b21*b48 + 10*
 b21*b51 + 11*b21*b54 + 12*b21*b57 + 13*b21*b60 + 14*b21*b63 + 15*b21*b66
  + 16*b21*b69 + 17*b21*b72 + 18*b21*b75 + 19*b21*b78 + 20*b21*b81 + 21*
 b21*b84 + 22*b21*b87 + 23*b21*b90 + 24*b21*b93 + 25*b21*b96 + 26*b21*b99
  + 27*b21*b102 + 28*b21*b105 + 29*b21*b108 + 30*b21*b111 + 31*b21*b114 +
  32*b21*b117 + 33*b21*b120 + b22*b25 + 2*b22*b28 + 3*b22*b31 + 4*b22*b34
  + 5*b22*b37 + 6*b22*b40 + 7*b22*b43 + 8*b22*b46 + 9*b22*b49 + 10*b22*b52
  + 11*b22*b55 + 12*b22*b58 + 13*b22*b61 + 14*b22*b64 + 15*b22*b67 + 16*
 b22*b70 + 17*b22*b73 + 18*b22*b76 + 19*b22*b79 + 20*b22*b82 + 21*b22*b85
  + 22*b22*b88 + 23*b22*b91 + 24*b22*b94 + 25*b22*b97 + 26*b22*b100 + 27*
 b22*b103 + 28*b22*b106 + 29*b22*b109 + 30*b22*b112 + 31*b22*b115 + 32*b22
 *b118 + b23*b26 + 2*b23*b29 + 3*b23*b32 + 4*b23*b35 + 5*b23*b38 + 6*b23*
 b41 + 7*b23*b44 + 8*b23*b47 + 9*b23*b50 + 10*b23*b53 + 11*b23*b56 + 12*
 b23*b59 + 13*b23*b62 + 14*b23*b65 + 15*b23*b68 + 16*b23*b71 + 17*b23*b74
  + 18*b23*b77 + 19*b23*b80 + 20*b23*b83 + 21*b23*b86 + 22*b23*b89 + 23*
 b23*b92 + 24*b23*b95 + 25*b23*b98 + 26*b23*b101 + 27*b23*b104 + 28*b23*
 b107 + 29*b23*b110 + 30*b23*b113 + 31*b23*b116 + 32*b23*b119 + b24*b27 +
  2*b24*b30 + 3*b24*b33 + 4*b24*b36 + 5*b24*b39 + 6*b24*b42 + 7*b24*b45 + 8
 *b24*b48 + 9*b24*b51 + 10*b24*b54 + 11*b24*b57 + 12*b24*b60 + 13*b24*b63
  + 14*b24*b66 + 15*b24*b69 + 16*b24*b72 + 17*b24*b75 + 18*b24*b78 + 19*
 b24*b81 + 20*b24*b84 + 21*b24*b87 + 22*b24*b90 + 23*b24*b93 + 24*b24*b96
  + 25*b24*b99 + 26*b24*b102 + 27*b24*b105 + 28*b24*b108 + 29*b24*b111 +
  30*b24*b114 + 31*b24*b117 + 32*b24*b120 + b25*b28 + 2*b25*b31 + 3*b25*b34
  + 4*b25*b37 + 5*b25*b40 + 6*b25*b43 + 7*b25*b46 + 8*b25*b49 + 9*b25*b52
  + 10*b25*b55 + 11*b25*b58 + 12*b25*b61 + 13*b25*b64 + 14*b25*b67 + 15*
 b25*b70 + 16*b25*b73 + 17*b25*b76 + 18*b25*b79 + 19*b25*b82 + 20*b25*b85
  + 21*b25*b88 + 22*b25*b91 + 23*b25*b94 + 24*b25*b97 + 25*b25*b100 + 26*
 b25*b103 + 27*b25*b106 + 28*b25*b109 + 29*b25*b112 + 30*b25*b115 + 31*b25
 *b118 + b26*b29 + 2*b26*b32 + 3*b26*b35 + 4*b26*b38 + 5*b26*b41 + 6*b26*
 b44 + 7*b26*b47 + 8*b26*b50 + 9*b26*b53 + 10*b26*b56 + 11*b26*b59 + 12*
 b26*b62 + 13*b26*b65 + 14*b26*b68 + 15*b26*b71 + 16*b26*b74 + 17*b26*b77
  + 18*b26*b80 + 19*b26*b83 + 20*b26*b86 + 21*b26*b89 + 22*b26*b92 + 23*
 b26*b95 + 24*b26*b98 + 25*b26*b101 + 26*b26*b104 + 27*b26*b107 + 28*b26*
 b110 + 29*b26*b113 + 30*b26*b116 + 31*b26*b119 + b27*b30 + 2*b27*b33 + 3*
 b27*b36 + 4*b27*b39 + 5*b27*b42 + 6*b27*b45 + 7*b27*b48 + 8*b27*b51 + 9*
 b27*b54 + 10*b27*b57 + 11*b27*b60 + 12*b27*b63 + 13*b27*b66 + 14*b27*b69
  + 15*b27*b72 + 16*b27*b75 + 17*b27*b78 + 18*b27*b81 + 19*b27*b84 + 20*
 b27*b87 + 21*b27*b90 + 22*b27*b93 + 23*b27*b96 + 24*b27*b99 + 25*b27*b102
  + 26*b27*b105 + 27*b27*b108 + 28*b27*b111 + 29*b27*b114 + 30*b27*b117 +
  31*b27*b120 + b28*b31 + 2*b28*b34 + 3*b28*b37 + 4*b28*b40 + 5*b28*b43 + 6
 *b28*b46 + 7*b28*b49 + 8*b28*b52 + 9*b28*b55 + 10*b28*b58 + 11*b28*b61 +
  12*b28*b64 + 13*b28*b67 + 14*b28*b70 + 15*b28*b73 + 16*b28*b76 + 17*b28*
 b79 + 18*b28*b82 + 19*b28*b85 + 20*b28*b88 + 21*b28*b91 + 22*b28*b94 + 23
 *b28*b97 + 24*b28*b100 + 25*b28*b103 + 26*b28*b106 + 27*b28*b109 + 28*b28
 *b112 + 29*b28*b115 + 30*b28*b118 + b29*b32 + 2*b29*b35 + 3*b29*b38 + 4*
 b29*b41 + 5*b29*b44 + 6*b29*b47 + 7*b29*b50 + 8*b29*b53 + 9*b29*b56 + 10*
 b29*b59 + 11*b29*b62 + 12*b29*b65 + 13*b29*b68 + 14*b29*b71 + 15*b29*b74
  + 16*b29*b77 + 17*b29*b80 + 18*b29*b83 + 19*b29*b86 + 20*b29*b89 + 21*
 b29*b92 + 22*b29*b95 + 23*b29*b98 + 24*b29*b101 + 25*b29*b104 + 26*b29*
 b107 + 27*b29*b110 + 28*b29*b113 + 29*b29*b116 + 30*b29*b119 + b30*b33 +
  2*b30*b36 + 3*b30*b39 + 4*b30*b42 + 5*b30*b45 + 6*b30*b48 + 7*b30*b51 + 8
 *b30*b54 + 9*b30*b57 + 10*b30*b60 + 11*b30*b63 + 12*b30*b66 + 13*b30*b69
  + 14*b30*b72 + 15*b30*b75 + 16*b30*b78 + 17*b30*b81 + 18*b30*b84 + 19*
 b30*b87 + 20*b30*b90 + 21*b30*b93 + 22*b30*b96 + 23*b30*b99 + 24*b30*b102
  + 25*b30*b105 + 26*b30*b108 + 27*b30*b111 + 28*b30*b114 + 29*b30*b117 +
  30*b30*b120 + b31*b34 + 2*b31*b37 + 3*b31*b40 + 4*b31*b43 + 5*b31*b46 + 6
 *b31*b49 + 7*b31*b52 + 8*b31*b55 + 9*b31*b58 + 10*b31*b61 + 11*b31*b64 +
  12*b31*b67 + 13*b31*b70 + 14*b31*b73 + 15*b31*b76 + 16*b31*b79 + 17*b31*
 b82 + 18*b31*b85 + 19*b31*b88 + 20*b31*b91 + 21*b31*b94 + 22*b31*b97 + 23
 *b31*b100 + 24*b31*b103 + 25*b31*b106 + 26*b31*b109 + 27*b31*b112 + 28*
 b31*b115 + 29*b31*b118 + b32*b35 + 2*b32*b38 + 3*b32*b41 + 4*b32*b44 + 5*
 b32*b47 + 6*b32*b50 + 7*b32*b53 + 8*b32*b56 + 9*b32*b59 + 10*b32*b62 + 11
 *b32*b65 + 12*b32*b68 + 13*b32*b71 + 14*b32*b74 + 15*b32*b77 + 16*b32*b80
  + 17*b32*b83 + 18*b32*b86 + 19*b32*b89 + 20*b32*b92 + 21*b32*b95 + 22*
 b32*b98 + 23*b32*b101 + 24*b32*b104 + 25*b32*b107 + 26*b32*b110 + 27*b32*
 b113 + 28*b32*b116 + 29*b32*b119 + b33*b36 + 2*b33*b39 + 3*b33*b42 + 4*
 b33*b45 + 5*b33*b48 + 6*b33*b51 + 7*b33*b54 + 8*b33*b57 + 9*b33*b60 + 10*
 b33*b63 + 11*b33*b66 + 12*b33*b69 + 13*b33*b72 + 14*b33*b75 + 15*b33*b78
  + 16*b33*b81 + 17*b33*b84 + 18*b33*b87 + 19*b33*b90 + 20*b33*b93 + 21*
 b33*b96 + 22*b33*b99 + 23*b33*b102 + 24*b33*b105 + 25*b33*b108 + 26*b33*
 b111 + 27*b33*b114 + 28*b33*b117 + 29*b33*b120 + b34*b37 + 2*b34*b40 + 3*
 b34*b43 + 4*b34*b46 + 5*b34*b49 + 6*b34*b52 + 7*b34*b55 + 8*b34*b58 + 9*
 b34*b61 + 10*b34*b64 + 11*b34*b67 + 12*b34*b70 + 13*b34*b73 + 14*b34*b76
  + 15*b34*b79 + 16*b34*b82 + 17*b34*b85 + 18*b34*b88 + 19*b34*b91 + 20*
 b34*b94 + 21*b34*b97 + 22*b34*b100 + 23*b34*b103 + 24*b34*b106 + 25*b34*
 b109 + 26*b34*b112 + 27*b34*b115 + 28*b34*b118 + b35*b38 + 2*b35*b41 + 3*
 b35*b44 + 4*b35*b47 + 5*b35*b50 + 6*b35*b53 + 7*b35*b56 + 8*b35*b59 + 9*
 b35*b62 + 10*b35*b65 + 11*b35*b68 + 12*b35*b71 + 13*b35*b74 + 14*b35*b77
  + 15*b35*b80 + 16*b35*b83 + 17*b35*b86 + 18*b35*b89 + 19*b35*b92 + 20*
 b35*b95 + 21*b35*b98 + 22*b35*b101 + 23*b35*b104 + 24*b35*b107 + 25*b35*
 b110 + 26*b35*b113 + 27*b35*b116 + 28*b35*b119 + b36*b39 + 2*b36*b42 + 3*
 b36*b45 + 4*b36*b48 + 5*b36*b51 + 6*b36*b54 + 7*b36*b57 + 8*b36*b60 + 9*
 b36*b63 + 10*b36*b66 + 11*b36*b69 + 12*b36*b72 + 13*b36*b75 + 14*b36*b78
  + 15*b36*b81 + 16*b36*b84 + 17*b36*b87 + 18*b36*b90 + 19*b36*b93 + 20*
 b36*b96 + 21*b36*b99 + 22*b36*b102 + 23*b36*b105 + 24*b36*b108 + 25*b36*
 b111 + 26*b36*b114 + 27*b36*b117 + 28*b36*b120 + b37*b40 + 2*b37*b43 + 3*
 b37*b46 + 4*b37*b49 + 5*b37*b52 + 6*b37*b55 + 7*b37*b58 + 8*b37*b61 + 9*
 b37*b64 + 10*b37*b67 + 11*b37*b70 + 12*b37*b73 + 13*b37*b76 + 14*b37*b79
  + 15*b37*b82 + 16*b37*b85 + 17*b37*b88 + 18*b37*b91 + 19*b37*b94 + 20*
 b37*b97 + 21*b37*b100 + 22*b37*b103 + 23*b37*b106 + 24*b37*b109 + 25*b37*
 b112 + 26*b37*b115 + 27*b37*b118 + b38*b41 + 2*b38*b44 + 3*b38*b47 + 4*
 b38*b50 + 5*b38*b53 + 6*b38*b56 + 7*b38*b59 + 8*b38*b62 + 9*b38*b65 + 10*
 b38*b68 + 11*b38*b71 + 12*b38*b74 + 13*b38*b77 + 14*b38*b80 + 15*b38*b83
  + 16*b38*b86 + 17*b38*b89 + 18*b38*b92 + 19*b38*b95 + 20*b38*b98 + 21*
 b38*b101 + 22*b38*b104 + 23*b38*b107 + 24*b38*b110 + 25*b38*b113 + 26*b38
 *b116 + 27*b38*b119 + b39*b42 + 2*b39*b45 + 3*b39*b48 + 4*b39*b51 + 5*b39
 *b54 + 6*b39*b57 + 7*b39*b60 + 8*b39*b63 + 9*b39*b66 + 10*b39*b69 + 11*
 b39*b72 + 12*b39*b75 + 13*b39*b78 + 14*b39*b81 + 15*b39*b84 + 16*b39*b87
  + 17*b39*b90 + 18*b39*b93 + 19*b39*b96 + 20*b39*b99 + 21*b39*b102 + 22*
 b39*b105 + 23*b39*b108 + 24*b39*b111 + 25*b39*b114 + 26*b39*b117 + 27*b39
 *b120 + b40*b43 + 2*b40*b46 + 3*b40*b49 + 4*b40*b52 + 5*b40*b55 + 6*b40*
 b58 + 7*b40*b61 + 8*b40*b64 + 9*b40*b67 + 10*b40*b70 + 11*b40*b73 + 12*
 b40*b76 + 13*b40*b79 + 14*b40*b82 + 15*b40*b85 + 16*b40*b88 + 17*b40*b91
  + 18*b40*b94 + 19*b40*b97 + 20*b40*b100 + 21*b40*b103 + 22*b40*b106 + 23
 *b40*b109 + 24*b40*b112 + 25*b40*b115 + 26*b40*b118 + b41*b44 + 2*b41*b47
  + 3*b41*b50 + 4*b41*b53 + 5*b41*b56 + 6*b41*b59 + 7*b41*b62 + 8*b41*b65
  + 9*b41*b68 + 10*b41*b71 + 11*b41*b74 + 12*b41*b77 + 13*b41*b80 + 14*b41
 *b83 + 15*b41*b86 + 16*b41*b89 + 17*b41*b92 + 18*b41*b95 + 19*b41*b98 +
  20*b41*b101 + 21*b41*b104 + 22*b41*b107 + 23*b41*b110 + 24*b41*b113 + 25*
 b41*b116 + 26*b41*b119 + b42*b45 + 2*b42*b48 + 3*b42*b51 + 4*b42*b54 + 5*
 b42*b57 + 6*b42*b60 + 7*b42*b63 + 8*b42*b66 + 9*b42*b69 + 10*b42*b72 + 11
 *b42*b75 + 12*b42*b78 + 13*b42*b81 + 14*b42*b84 + 15*b42*b87 + 16*b42*b90
  + 17*b42*b93 + 18*b42*b96 + 19*b42*b99 + 20*b42*b102 + 21*b42*b105 + 22*
 b42*b108 + 23*b42*b111 + 24*b42*b114 + 25*b42*b117 + 26*b42*b120 + b43*
 b46 + 2*b43*b49 + 3*b43*b52 + 4*b43*b55 + 5*b43*b58 + 6*b43*b61 + 7*b43*
 b64 + 8*b43*b67 + 9*b43*b70 + 10*b43*b73 + 11*b43*b76 + 12*b43*b79 + 13*
 b43*b82 + 14*b43*b85 + 15*b43*b88 + 16*b43*b91 + 17*b43*b94 + 18*b43*b97
  + 19*b43*b100 + 20*b43*b103 + 21*b43*b106 + 22*b43*b109 + 23*b43*b112 +
  24*b43*b115 + 25*b43*b118 + b44*b47 + 2*b44*b50 + 3*b44*b53 + 4*b44*b56
  + 5*b44*b59 + 6*b44*b62 + 7*b44*b65 + 8*b44*b68 + 9*b44*b71 + 10*b44*b74
  + 11*b44*b77 + 12*b44*b80 + 13*b44*b83 + 14*b44*b86 + 15*b44*b89 + 16*
 b44*b92 + 17*b44*b95 + 18*b44*b98 + 19*b44*b101 + 20*b44*b104 + 21*b44*
 b107 + 22*b44*b110 + 23*b44*b113 + 24*b44*b116 + 25*b44*b119 + b45*b48 +
  2*b45*b51 + 3*b45*b54 + 4*b45*b57 + 5*b45*b60 + 6*b45*b63 + 7*b45*b66 + 8
 *b45*b69 + 9*b45*b72 + 10*b45*b75 + 11*b45*b78 + 12*b45*b81 + 13*b45*b84
  + 14*b45*b87 + 15*b45*b90 + 16*b45*b93 + 17*b45*b96 + 18*b45*b99 + 19*
 b45*b102 + 20*b45*b105 + 21*b45*b108 + 22*b45*b111 + 23*b45*b114 + 24*b45
 *b117 + 25*b45*b120 + b46*b49 + 2*b46*b52 + 3*b46*b55 + 4*b46*b58 + 5*b46
 *b61 + 6*b46*b64 + 7*b46*b67 + 8*b46*b70 + 9*b46*b73 + 10*b46*b76 + 11*
 b46*b79 + 12*b46*b82 + 13*b46*b85 + 14*b46*b88 + 15*b46*b91 + 16*b46*b94
  + 17*b46*b97 + 18*b46*b100 + 19*b46*b103 + 20*b46*b106 + 21*b46*b109 +
  22*b46*b112 + 23*b46*b115 + 24*b46*b118 + b47*b50 + 2*b47*b53 + 3*b47*b56
  + 4*b47*b59 + 5*b47*b62 + 6*b47*b65 + 7*b47*b68 + 8*b47*b71 + 9*b47*b74
  + 10*b47*b77 + 11*b47*b80 + 12*b47*b83 + 13*b47*b86 + 14*b47*b89 + 15*
 b47*b92 + 16*b47*b95 + 17*b47*b98 + 18*b47*b101 + 19*b47*b104 + 20*b47*
 b107 + 21*b47*b110 + 22*b47*b113 + 23*b47*b116 + 24*b47*b119 + b48*b51 +
  2*b48*b54 + 3*b48*b57 + 4*b48*b60 + 5*b48*b63 + 6*b48*b66 + 7*b48*b69 + 8
 *b48*b72 + 9*b48*b75 + 10*b48*b78 + 11*b48*b81 + 12*b48*b84 + 13*b48*b87
  + 14*b48*b90 + 15*b48*b93 + 16*b48*b96 + 17*b48*b99 + 18*b48*b102 + 19*
 b48*b105 + 20*b48*b108 + 21*b48*b111 + 22*b48*b114 + 23*b48*b117 + 24*b48
 *b120 + b49*b52 + 2*b49*b55 + 3*b49*b58 + 4*b49*b61 + 5*b49*b64 + 6*b49*
 b67 + 7*b49*b70 + 8*b49*b73 + 9*b49*b76 + 10*b49*b79 + 11*b49*b82 + 12*
 b49*b85 + 13*b49*b88 + 14*b49*b91 + 15*b49*b94 + 16*b49*b97 + 17*b49*b100
  + 18*b49*b103 + 19*b49*b106 + 20*b49*b109 + 21*b49*b112 + 22*b49*b115 +
  23*b49*b118 + b50*b53 + 2*b50*b56 + 3*b50*b59 + 4*b50*b62 + 5*b50*b65 + 6
 *b50*b68 + 7*b50*b71 + 8*b50*b74 + 9*b50*b77 + 10*b50*b80 + 11*b50*b83 +
  12*b50*b86 + 13*b50*b89 + 14*b50*b92 + 15*b50*b95 + 16*b50*b98 + 17*b50*
 b101 + 18*b50*b104 + 19*b50*b107 + 20*b50*b110 + 21*b50*b113 + 22*b50*
 b116 + 23*b50*b119 + b51*b54 + 2*b51*b57 + 3*b51*b60 + 4*b51*b63 + 5*b51*
 b66 + 6*b51*b69 + 7*b51*b72 + 8*b51*b75 + 9*b51*b78 + 10*b51*b81 + 11*b51
 *b84 + 12*b51*b87 + 13*b51*b90 + 14*b51*b93 + 15*b51*b96 + 16*b51*b99 +
  17*b51*b102 + 18*b51*b105 + 19*b51*b108 + 20*b51*b111 + 21*b51*b114 + 22*
 b51*b117 + 23*b51*b120 + b52*b55 + 2*b52*b58 + 3*b52*b61 + 4*b52*b64 + 5*
 b52*b67 + 6*b52*b70 + 7*b52*b73 + 8*b52*b76 + 9*b52*b79 + 10*b52*b82 + 11
 *b52*b85 + 12*b52*b88 + 13*b52*b91 + 14*b52*b94 + 15*b52*b97 + 16*b52*
 b100 + 17*b52*b103 + 18*b52*b106 + 19*b52*b109 + 20*b52*b112 + 21*b52*
 b115 + 22*b52*b118 + b53*b56 + 2*b53*b59 + 3*b53*b62 + 4*b53*b65 + 5*b53*
 b68 + 6*b53*b71 + 7*b53*b74 + 8*b53*b77 + 9*b53*b80 + 10*b53*b83 + 11*b53
 *b86 + 12*b53*b89 + 13*b53*b92 + 14*b53*b95 + 15*b53*b98 + 16*b53*b101 +
  17*b53*b104 + 18*b53*b107 + 19*b53*b110 + 20*b53*b113 + 21*b53*b116 + 22*
 b53*b119 + b54*b57 + 2*b54*b60 + 3*b54*b63 + 4*b54*b66 + 5*b54*b69 + 6*
 b54*b72 + 7*b54*b75 + 8*b54*b78 + 9*b54*b81 + 10*b54*b84 + 11*b54*b87 +
  12*b54*b90 + 13*b54*b93 + 14*b54*b96 + 15*b54*b99 + 16*b54*b102 + 17*b54*
 b105 + 18*b54*b108 + 19*b54*b111 + 20*b54*b114 + 21*b54*b117 + 22*b54*
 b120 + b55*b58 + 2*b55*b61 + 3*b55*b64 + 4*b55*b67 + 5*b55*b70 + 6*b55*
 b73 + 7*b55*b76 + 8*b55*b79 + 9*b55*b82 + 10*b55*b85 + 11*b55*b88 + 12*
 b55*b91 + 13*b55*b94 + 14*b55*b97 + 15*b55*b100 + 16*b55*b103 + 17*b55*
 b106 + 18*b55*b109 + 19*b55*b112 + 20*b55*b115 + 21*b55*b118 + b56*b59 +
  2*b56*b62 + 3*b56*b65 + 4*b56*b68 + 5*b56*b71 + 6*b56*b74 + 7*b56*b77 + 8
 *b56*b80 + 9*b56*b83 + 10*b56*b86 + 11*b56*b89 + 12*b56*b92 + 13*b56*b95
  + 14*b56*b98 + 15*b56*b101 + 16*b56*b104 + 17*b56*b107 + 18*b56*b110 +
  19*b56*b113 + 20*b56*b116 + 21*b56*b119 + b57*b60 + 2*b57*b63 + 3*b57*b66
  + 4*b57*b69 + 5*b57*b72 + 6*b57*b75 + 7*b57*b78 + 8*b57*b81 + 9*b57*b84
  + 10*b57*b87 + 11*b57*b90 + 12*b57*b93 + 13*b57*b96 + 14*b57*b99 + 15*
 b57*b102 + 16*b57*b105 + 17*b57*b108 + 18*b57*b111 + 19*b57*b114 + 20*b57
 *b117 + 21*b57*b120 + b58*b61 + 2*b58*b64 + 3*b58*b67 + 4*b58*b70 + 5*b58
 *b73 + 6*b58*b76 + 7*b58*b79 + 8*b58*b82 + 9*b58*b85 + 10*b58*b88 + 11*
 b58*b91 + 12*b58*b94 + 13*b58*b97 + 14*b58*b100 + 15*b58*b103 + 16*b58*
 b106 + 17*b58*b109 + 18*b58*b112 + 19*b58*b115 + 20*b58*b118 + b59*b62 +
  2*b59*b65 + 3*b59*b68 + 4*b59*b71 + 5*b59*b74 + 6*b59*b77 + 7*b59*b80 + 8
 *b59*b83 + 9*b59*b86 + 10*b59*b89 + 11*b59*b92 + 12*b59*b95 + 13*b59*b98
  + 14*b59*b101 + 15*b59*b104 + 16*b59*b107 + 17*b59*b110 + 18*b59*b113 +
  19*b59*b116 + 20*b59*b119 + b60*b63 + 2*b60*b66 + 3*b60*b69 + 4*b60*b72
  + 5*b60*b75 + 6*b60*b78 + 7*b60*b81 + 8*b60*b84 + 9*b60*b87 + 10*b60*b90
  + 11*b60*b93 + 12*b60*b96 + 13*b60*b99 + 14*b60*b102 + 15*b60*b105 + 16*
 b60*b108 + 17*b60*b111 + 18*b60*b114 + 19*b60*b117 + 20*b60*b120 + b61*
 b64 + 2*b61*b67 + 3*b61*b70 + 4*b61*b73 + 5*b61*b76 + 6*b61*b79 + 7*b61*
 b82 + 8*b61*b85 + 9*b61*b88 + 10*b61*b91 + 11*b61*b94 + 12*b61*b97 + 13*
 b61*b100 + 14*b61*b103 + 15*b61*b106 + 16*b61*b109 + 17*b61*b112 + 18*b61
 *b115 + 19*b61*b118 + b62*b65 + 2*b62*b68 + 3*b62*b71 + 4*b62*b74 + 5*b62
 *b77 + 6*b62*b80 + 7*b62*b83 + 8*b62*b86 + 9*b62*b89 + 10*b62*b92 + 11*
 b62*b95 + 12*b62*b98 + 13*b62*b101 + 14*b62*b104 + 15*b62*b107 + 16*b62*
 b110 + 17*b62*b113 + 18*b62*b116 + 19*b62*b119 + b63*b66 + 2*b63*b69 + 3*
 b63*b72 + 4*b63*b75 + 5*b63*b78 + 6*b63*b81 + 7*b63*b84 + 8*b63*b87 + 9*
 b63*b90 + 10*b63*b93 + 11*b63*b96 + 12*b63*b99 + 13*b63*b102 + 14*b63*
 b105 + 15*b63*b108 + 16*b63*b111 + 17*b63*b114 + 18*b63*b117 + 19*b63*
 b120 + b64*b67 + 2*b64*b70 + 3*b64*b73 + 4*b64*b76 + 5*b64*b79 + 6*b64*
 b82 + 7*b64*b85 + 8*b64*b88 + 9*b64*b91 + 10*b64*b94 + 11*b64*b97 + 12*
 b64*b100 + 13*b64*b103 + 14*b64*b106 + 15*b64*b109 + 16*b64*b112 + 17*b64
 *b115 + 18*b64*b118 + b65*b68 + 2*b65*b71 + 3*b65*b74 + 4*b65*b77 + 5*b65
 *b80 + 6*b65*b83 + 7*b65*b86 + 8*b65*b89 + 9*b65*b92 + 10*b65*b95 + 11*
 b65*b98 + 12*b65*b101 + 13*b65*b104 + 14*b65*b107 + 15*b65*b110 + 16*b65*
 b113 + 17*b65*b116 + 18*b65*b119 + b66*b69 + 2*b66*b72 + 3*b66*b75 + 4*
 b66*b78 + 5*b66*b81 + 6*b66*b84 + 7*b66*b87 + 8*b66*b90 + 9*b66*b93 + 10*
 b66*b96 + 11*b66*b99 + 12*b66*b102 + 13*b66*b105 + 14*b66*b108 + 15*b66*
 b111 + 16*b66*b114 + 17*b66*b117 + 18*b66*b120 + b67*b70 + 2*b67*b73 + 3*
 b67*b76 + 4*b67*b79 + 5*b67*b82 + 6*b67*b85 + 7*b67*b88 + 8*b67*b91 + 9*
 b67*b94 + 10*b67*b97 + 11*b67*b100 + 12*b67*b103 + 13*b67*b106 + 14*b67*
 b109 + 15*b67*b112 + 16*b67*b115 + 17*b67*b118 + b68*b71 + 2*b68*b74 + 3*
 b68*b77 + 4*b68*b80 + 5*b68*b83 + 6*b68*b86 + 7*b68*b89 + 8*b68*b92 + 9*
 b68*b95 + 10*b68*b98 + 11*b68*b101 + 12*b68*b104 + 13*b68*b107 + 14*b68*
 b110 + 15*b68*b113 + 16*b68*b116 + 17*b68*b119 + b69*b72 + 2*b69*b75 + 3*
 b69*b78 + 4*b69*b81 + 5*b69*b84 + 6*b69*b87 + 7*b69*b90 + 8*b69*b93 + 9*
 b69*b96 + 10*b69*b99 + 11*b69*b102 + 12*b69*b105 + 13*b69*b108 + 14*b69*
 b111 + 15*b69*b114 + 16*b69*b117 + 17*b69*b120 + b70*b73 + 2*b70*b76 + 3*
 b70*b79 + 4*b70*b82 + 5*b70*b85 + 6*b70*b88 + 7*b70*b91 + 8*b70*b94 + 9*
 b70*b97 + 10*b70*b100 + 11*b70*b103 + 12*b70*b106 + 13*b70*b109 + 14*b70*
 b112 + 15*b70*b115 + 16*b70*b118 + b71*b74 + 2*b71*b77 + 3*b71*b80 + 4*
 b71*b83 + 5*b71*b86 + 6*b71*b89 + 7*b71*b92 + 8*b71*b95 + 9*b71*b98 + 10*
 b71*b101 + 11*b71*b104 + 12*b71*b107 + 13*b71*b110 + 14*b71*b113 + 15*b71
 *b116 + 16*b71*b119 + b72*b75 + 2*b72*b78 + 3*b72*b81 + 4*b72*b84 + 5*b72
 *b87 + 6*b72*b90 + 7*b72*b93 + 8*b72*b96 + 9*b72*b99 + 10*b72*b102 + 11*
 b72*b105 + 12*b72*b108 + 13*b72*b111 + 14*b72*b114 + 15*b72*b117 + 16*b72
 *b120 + b73*b76 + 2*b73*b79 + 3*b73*b82 + 4*b73*b85 + 5*b73*b88 + 6*b73*
 b91 + 7*b73*b94 + 8*b73*b97 + 9*b73*b100 + 10*b73*b103 + 11*b73*b106 + 12
 *b73*b109 + 13*b73*b112 + 14*b73*b115 + 15*b73*b118 + b74*b77 + 2*b74*b80
  + 3*b74*b83 + 4*b74*b86 + 5*b74*b89 + 6*b74*b92 + 7*b74*b95 + 8*b74*b98
  + 9*b74*b101 + 10*b74*b104 + 11*b74*b107 + 12*b74*b110 + 13*b74*b113 +
  14*b74*b116 + 15*b74*b119 + b75*b78 + 2*b75*b81 + 3*b75*b84 + 4*b75*b87
  + 5*b75*b90 + 6*b75*b93 + 7*b75*b96 + 8*b75*b99 + 9*b75*b102 + 10*b75*
 b105 + 11*b75*b108 + 12*b75*b111 + 13*b75*b114 + 14*b75*b117 + 15*b75*
 b120 + b76*b79 + 2*b76*b82 + 3*b76*b85 + 4*b76*b88 + 5*b76*b91 + 6*b76*
 b94 + 7*b76*b97 + 8*b76*b100 + 9*b76*b103 + 10*b76*b106 + 11*b76*b109 +
  12*b76*b112 + 13*b76*b115 + 14*b76*b118 + b77*b80 + 2*b77*b83 + 3*b77*b86
  + 4*b77*b89 + 5*b77*b92 + 6*b77*b95 + 7*b77*b98 + 8*b77*b101 + 9*b77*
 b104 + 10*b77*b107 + 11*b77*b110 + 12*b77*b113 + 13*b77*b116 + 14*b77*
 b119 + b78*b81 + 2*b78*b84 + 3*b78*b87 + 4*b78*b90 + 5*b78*b93 + 6*b78*
 b96 + 7*b78*b99 + 8*b78*b102 + 9*b78*b105 + 10*b78*b108 + 11*b78*b111 +
  12*b78*b114 + 13*b78*b117 + 14*b78*b120 + b79*b82 + 2*b79*b85 + 3*b79*b88
  + 4*b79*b91 + 5*b79*b94 + 6*b79*b97 + 7*b79*b100 + 8*b79*b103 + 9*b79*
 b106 + 10*b79*b109 + 11*b79*b112 + 12*b79*b115 + 13*b79*b118 + b80*b83 +
  2*b80*b86 + 3*b80*b89 + 4*b80*b92 + 5*b80*b95 + 6*b80*b98 + 7*b80*b101 +
  8*b80*b104 + 9*b80*b107 + 10*b80*b110 + 11*b80*b113 + 12*b80*b116 + 13*
 b80*b119 + b81*b84 + 2*b81*b87 + 3*b81*b90 + 4*b81*b93 + 5*b81*b96 + 6*
 b81*b99 + 7*b81*b102 + 8*b81*b105 + 9*b81*b108 + 10*b81*b111 + 11*b81*
 b114 + 12*b81*b117 + 13*b81*b120 + b82*b85 + 2*b82*b88 + 3*b82*b91 + 4*
 b82*b94 + 5*b82*b97 + 6*b82*b100 + 7*b82*b103 + 8*b82*b106 + 9*b82*b109
  + 10*b82*b112 + 11*b82*b115 + 12*b82*b118 + b83*b86 + 2*b83*b89 + 3*b83*
 b92 + 4*b83*b95 + 5*b83*b98 + 6*b83*b101 + 7*b83*b104 + 8*b83*b107 + 9*
 b83*b110 + 10*b83*b113 + 11*b83*b116 + 12*b83*b119 + b84*b87 + 2*b84*b90
  + 3*b84*b93 + 4*b84*b96 + 5*b84*b99 + 6*b84*b102 + 7*b84*b105 + 8*b84*
 b108 + 9*b84*b111 + 10*b84*b114 + 11*b84*b117 + 12*b84*b120 + b85*b88 + 2
 *b85*b91 + 3*b85*b94 + 4*b85*b97 + 5*b85*b100 + 6*b85*b103 + 7*b85*b106
  + 8*b85*b109 + 9*b85*b112 + 10*b85*b115 + 11*b85*b118 + b86*b89 + 2*b86*
 b92 + 3*b86*b95 + 4*b86*b98 + 5*b86*b101 + 6*b86*b104 + 7*b86*b107 + 8*
 b86*b110 + 9*b86*b113 + 10*b86*b116 + 11*b86*b119 + b87*b90 + 2*b87*b93
  + 3*b87*b96 + 4*b87*b99 + 5*b87*b102 + 6*b87*b105 + 7*b87*b108 + 8*b87*
 b111 + 9*b87*b114 + 10*b87*b117 + 11*b87*b120 + b88*b91 + 2*b88*b94 + 3*
 b88*b97 + 4*b88*b100 + 5*b88*b103 + 6*b88*b106 + 7*b88*b109 + 8*b88*b112
  + 9*b88*b115 + 10*b88*b118 + b89*b92 + 2*b89*b95 + 3*b89*b98 + 4*b89*
 b101 + 5*b89*b104 + 6*b89*b107 + 7*b89*b110 + 8*b89*b113 + 9*b89*b116 +
  10*b89*b119 + b90*b93 + 2*b90*b96 + 3*b90*b99 + 4*b90*b102 + 5*b90*b105
  + 6*b90*b108 + 7*b90*b111 + 8*b90*b114 + 9*b90*b117 + 10*b90*b120 + b91*
 b94 + 2*b91*b97 + 3*b91*b100 + 4*b91*b103 + 5*b91*b106 + 6*b91*b109 + 7*
 b91*b112 + 8*b91*b115 + 9*b91*b118 + b92*b95 + 2*b92*b98 + 3*b92*b101 + 4
 *b92*b104 + 5*b92*b107 + 6*b92*b110 + 7*b92*b113 + 8*b92*b116 + 9*b92*
 b119 + b93*b96 + 2*b93*b99 + 3*b93*b102 + 4*b93*b105 + 5*b93*b108 + 6*b93
 *b111 + 7*b93*b114 + 8*b93*b117 + 9*b93*b120 + b94*b97 + 2*b94*b100 + 3*
 b94*b103 + 4*b94*b106 + 5*b94*b109 + 6*b94*b112 + 7*b94*b115 + 8*b94*b118
  + b95*b98 + 2*b95*b101 + 3*b95*b104 + 4*b95*b107 + 5*b95*b110 + 6*b95*
 b113 + 7*b95*b116 + 8*b95*b119 + b96*b99 + 2*b96*b102 + 3*b96*b105 + 4*
 b96*b108 + 5*b96*b111 + 6*b96*b114 + 7*b96*b117 + 8*b96*b120 + b97*b100
  + 2*b97*b103 + 3*b97*b106 + 4*b97*b109 + 5*b97*b112 + 6*b97*b115 + 7*b97
 *b118 + b98*b101 + 2*b98*b104 + 3*b98*b107 + 4*b98*b110 + 5*b98*b113 + 6*
 b98*b116 + 7*b98*b119 + b99*b102 + 2*b99*b105 + 3*b99*b108 + 4*b99*b111
  + 5*b99*b114 + 6*b99*b117 + 7*b99*b120 + b100*b103 + 2*b100*b106 + 3*
 b100*b109 + 4*b100*b112 + 5*b100*b115 + 6*b100*b118 + b101*b104 + 2*b101*
 b107 + 3*b101*b110 + 4*b101*b113 + 5*b101*b116 + 6*b101*b119 + b102*b105
  + 2*b102*b108 + 3*b102*b111 + 4*b102*b114 + 5*b102*b117 + 6*b102*b120 +
  b103*b106 + 2*b103*b109 + 3*b103*b112 + 4*b103*b115 + 5*b103*b118 + b104*
 b107 + 2*b104*b110 + 3*b104*b113 + 4*b104*b116 + 5*b104*b119 + b105*b108
  + 2*b105*b111 + 3*b105*b114 + 4*b105*b117 + 5*b105*b120 + b106*b109 + 2*
 b106*b112 + 3*b106*b115 + 4*b106*b118 + b107*b110 + 2*b107*b113 + 3*b107*
 b116 + 4*b107*b119 + b108*b111 + 2*b108*b114 + 3*b108*b117 + 4*b108*b120
  + b109*b112 + 2*b109*b115 + 3*b109*b118 + b110*b113 + 2*b110*b116 + 3*
 b110*b119 + b111*b114 + 2*b111*b117 + 3*b111*b120 + b112*b115 + 2*b112*
 b118 + b113*b116 + 2*b113*b119 + b114*b117 + 2*b114*b120 + b115*b118 +
  b116*b119 + b117*b120  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
