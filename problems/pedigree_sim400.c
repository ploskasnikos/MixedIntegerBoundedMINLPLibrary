#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pedigree_sim400";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b151); 

   fclose(fp);
   res=-( + 40.78*b2 + 40.77*b3 + 43.89*b4 + 56.41*b5 + 59.38*b6
 + 55.84*b7 + 55.36*b8 + 55.84*b9 + 56.39*b10 + 66.07*b11 + 67.28*b12
 + 64.74*b13 + 53.67*b14 + 54.78*b15 + 52.79*b16 + 49.18*b17 + 48.71*b18
 + 48.76*b19 + 60.08*b20 + 59.03*b21 + 58.96*b22 + 50.54*b23 + 51.74*b24
 + 51.61*b25 + 54.7*b26 + 55.78*b27 + 55.46*b28 + 53.63*b29 + 53.42*b30
 + 53.08*b31 + 43.39*b32 + 42.99*b33 + 42.88*b34 + 42.04*b35 + 39.77*b36
 + 41.24*b37 + 43.17*b38 + 41.54*b39 + 42.05*b40 + 51.07*b41 + 49.55*b42
 + 49.57*b43 + 44.16*b44 + 48.46*b45 + 44.55*b46 + 51.29*b47 + 52.89*b48
 + 51.85*b49 + 37.76*b50 + 37.74*b51 + 39.57*b52 + 55.9*b53 + 56.4*b54
 + 55.43*b55 + 53.97*b56 + 54.22*b57 + 54.42*b58 + 57.83*b59 + 54.88*b60
 + 54.47*b61 + 39.87*b62 + 39.44*b63 + 40.22*b64 + 54.99*b65 + 55.86*b66
 + 55.71*b67 + 58.04*b68 + 60.97*b69 + 58*b70 + 46.92*b71 + 46.64*b72
 + 46.57*b73 + 48.54*b74 + 45.22*b75 + 44.98*b76 + 42.67*b77 + 41.77*b78
 + 41.35*b79 + 42.3*b80 + 41.42*b81 + 41.82*b82 + 49.38*b83 + 46.73*b84
 + 48.03*b85 + 47.05*b86 + 46.01*b87 + 46.57*b88 + 48.01*b89 + 47.37*b90
 + 48.41*b91 + 39.11*b92 + 37.98*b93 + 39.71*b94 + 44.91*b95 + 40.13*b96
 + 41.56*b97 + 44.56*b98 + 44.54*b99 + 43.79*b100 + 45.34*b101
 + 46.06*b102 + 45.58*b103 + 43.59*b104 + 44.99*b105 + 47.02*b106
 + 25.15*b107 + 25.5*b108 + 25.37*b109 + 36.36*b110 + 35.94*b111
 + 38.23*b112 + 32.72*b113 + 35.62*b114 + 34.74*b115 + 35.52*b116
 + 35.98*b117 + 35.02*b118 + 25.73*b119 + 24.57*b120 + 25.17*b121
 + 38.7*b122 + 38.71*b123 + 39.05*b124 + 33.17*b125 + 32.35*b126
 + 35.25*b127 + 28.72*b128 + 30.28*b129 + 29.64*b130 + 36.68*b131
 + 37.19*b132 + 37*b133 + 29.76*b134 + 29.75*b135 + 28.83*b136
 + 28.02*b137 + 28.91*b138 + 28.76*b139 + 19.98*b140 + 22.22*b141
 + 21.54*b142 + 30.67*b143 + 29.86*b144 + 30.94*b145 + 21.02*b146
 + 21.02*b147 + 20.64*b148 + 21.25*b149 + 18.86*b150 + 20.73*b151 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
