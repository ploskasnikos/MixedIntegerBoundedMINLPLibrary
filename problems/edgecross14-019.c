#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="edgecross14-019";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b5,b135,b174,b181,b7,b180,b9,b159,b170,b15,b17,b177,b19,b144,b21,b152,b23,b25,b125,b37,b136,b175,b182,b38,b130,b132,b157,b161,b168,b172,b41,b42,b134,b173,b179,b43,b128,b142,b146,b44,b129,b150,b154,b45,b46,b117,b123,b127,b47,b160,b171,b50,b51,b178,b52,b145,b53,b153,b54,b55,b126,b58,b59,b158,b169,b60,b139,b141,b61,b147,b149,b62,b156,b63,b120,b122,b77,b78,b79,b80,b81,b82,b143,b83,b151,b84,b85,b124,b86,b138,b87,b88,b118,b89,b90,b119,b91;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b91); 

   fclose(fp);
   res=-( 2*b5*b135 - b5 + 3*b135 + 2*b5*b174 + 3*b174 - 2*b5*b181 - 3*b181 - 2*
   b7*b180 + b7 - b180 + 2*b9*b159 - 2*b9 + 2*b9*b170 - 5*b170 - 2*b15*
   b180 + b15 + 2*b17*b177 - b17 - 12*b177 + 2*b19*b144 - b19 - 4*b144 + 2
   *b21*b152 - 2*b21 - 5*b152 + 2*b21*b177 + 2*b23*b170 - b23 + 2*b25*b125
    - 2*b25 - 5*b125 + 2*b25*b177 - 2*b37*b135 + 2*b37 - 2*b37*b136 + 2*
   b136 - 2*b37*b174 - 2*b37*b175 + 2*b175 + 2*b37*b181 + 2*b37*b182 - 2*
   b182 - 2*b38*b130 - b38 + b130 - 2*b38*b132 + 2*b132 - 2*b38*b135 + 2*
   b38*b157 - b157 + 2*b38*b161 - b161 + 2*b38*b168 - 2*b168 + 2*b38*b172
    - 2*b172 - 2*b38*b174 + 2*b38*b181 - 2*b41*b136 + b41 - 2*b41*b175 + 2
   *b41*b182 - 2*b42*b134 + 2*b42 + 3*b134 - 2*b42*b135 - 2*b42*b173 + 3*
   b173 - 2*b42*b174 + 2*b42*b179 - 3*b179 + 2*b42*b181 - 2*b43*b128 +
    b128 - 2*b43*b135 + 2*b43*b142 - b142 + 2*b43*b146 - b146 - 2*b43*b174
    + 2*b43*b181 - 2*b44*b129 + b129 - 2*b44*b134 + 2*b44*b150 - b150 + 2*
   b44*b154 - b154 - 2*b44*b173 + 2*b44*b179 - 2*b45*b132 - b45 + 2*b45*
   b168 + 2*b45*b172 + 2*b46*b117 - 2*b46 - b117 + 2*b46*b123 - b123 + 2*
   b46*b127 - b127 - 2*b46*b134 - 2*b46*b173 + 2*b46*b179 + 2*b47*b159 - 5
   *b47 + 2*b47*b160 + 2*b47*b170 + 2*b47*b171 - 2*b171 + 2*b47*b180 - 2*
   b50*b180 + b50 + 2*b51*b177 - 3*b51 + 2*b51*b178 - 6*b178 + 2*b51*b180
    + 2*b52*b144 - 3*b52 + 2*b52*b145 - 2*b145 + 2*b52*b180 + 2*b53*b152
    - 4*b53 + 2*b53*b153 - 2*b153 + 2*b53*b177 + 2*b53*b178 + 2*b54*b170
    - 2*b54 + 2*b54*b171 + 2*b55*b125 - 4*b55 + 2*b55*b126 - 2*b126 + 2*
   b55*b177 + 2*b55*b178 - 2*b58*b160 + 3*b58 - 2*b58*b171 - 2*b58*b180 -
    2*b59*b158 + 3*b59 + 3*b158 - 2*b59*b159 - 2*b59*b169 + 2*b169 - 2*b59*
   b170 + 2*b59*b177 + 2*b60*b139 - b60 - b139 + 2*b60*b141 + 2*b60*b144
    - 2*b60*b159 - 2*b60*b170 + 2*b61*b147 - 2*b61 - b147 + 2*b61*b149 + 2
   *b61*b152 - 2*b61*b158 - 2*b61*b169 + 2*b61*b177 - 2*b62*b156 + b156 +
    2*b62*b170 + 2*b63*b120 - 2*b63 - b120 + 2*b63*b122 - 2*b122 + 2*b63*
   b125 - 2*b63*b158 - 2*b63*b169 + 2*b63*b177 + 2*b77*b178 - 2*b77 + 2*
   b77*b180 + 2*b78*b145 - 2*b78 + 2*b78*b180 + 2*b79*b153 - 2*b79 + 2*b79
   *b178 + 2*b80*b171 - b80 + 2*b81*b126 - 2*b81 + 2*b81*b178 + 2*b82*b143
    - b82 + b143 + 2*b82*b144 - 2*b82*b177 + 2*b83*b151 - 3*b83 + 2*b83*
   b152 + 2*b83*b177 + 2*b84*b169 - 2*b84 + 2*b84*b170 + 2*b85*b124 - 3*
   b85 - 2*b124 + 2*b85*b125 + 2*b85*b177 - 2*b86*b138 + b138 - 2*b86*b143
    + 2*b86*b152 + 2*b86*b177 - 2*b87*b141 + 2*b87*b170 + 2*b88*b118 - 2*
   b88 - b118 + 2*b88*b125 - 2*b88*b143 + 2*b88*b177 - 2*b89*b149 + 2*b89*
   b169 + 2*b90*b119 - b90 - b119 + 2*b90*b124 - 2*b90*b151 + 2*b91*b122
    - 2*b91*b169  - 49);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
