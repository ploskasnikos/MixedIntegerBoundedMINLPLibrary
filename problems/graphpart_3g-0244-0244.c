#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_3g-0244-0244";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b10,b13,b25,b73,b2,b5,b11,b14,b26,b74,b3,b6,b12,b15,b27,b75,b7,b16,b28,b76,b8,b17,b29,b77,b9,b18,b30,b78,b19,b31,b79,b20,b32,b80,b21,b33,b81,b22,b34,b82,b23,b35,b83,b24,b36,b84,b37,b85,b38,b86,b39,b87,b40,b88,b41,b89,b42,b90,b43,b91,b44,b92,b45,b93,b46,b94,b47,b95,b48,b96,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72;
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
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b96); 
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

   fclose(fp);
   res= 13404*b1*b4 - 38067*b1*b10 - 37994*b1*b13 + 132593*b1*b25 + 79392*b1*b73
  + 13404*b2*b5 - 38067*b2*b11 - 37994*b2*b14 + 132593*b2*b26 + 79392*b2*
 b74 + 13404*b3*b6 - 38067*b3*b12 - 37994*b3*b15 + 132593*b3*b27 + 79392*
 b3*b75 + 78283*b4*b7 - 172622*b4*b16 + 179157*b4*b28 - 10711*b4*b76 +
  78283*b5*b8 - 172622*b5*b17 + 179157*b5*b29 - 10711*b5*b77 + 78283*b6*b9
  - 172622*b6*b18 + 179157*b6*b30 - 10711*b6*b78 - 10967*b7*b10 + 133921*
 b7*b19 + 47337*b7*b31 + 1785*b7*b79 - 10967*b8*b11 + 133921*b8*b20 +
  47337*b8*b32 + 1785*b8*b80 - 10967*b9*b12 + 133921*b9*b21 + 47337*b9*b33
  + 1785*b9*b81 - 11613*b10*b22 + 104508*b10*b34 + 176076*b10*b82 - 11613*
 b11*b23 + 104508*b11*b35 + 176076*b11*b83 - 11613*b12*b24 + 104508*b12*
 b36 + 176076*b12*b84 - 42176*b13*b16 + 58524*b13*b22 - 127205*b13*b37 -
  24282*b13*b85 - 42176*b14*b17 + 58524*b14*b23 - 127205*b14*b38 - 24282*
 b14*b86 - 42176*b15*b18 + 58524*b15*b24 - 127205*b15*b39 - 24282*b15*b87
  - 248014*b16*b19 + 84578*b16*b40 - 92201*b16*b88 - 248014*b17*b20 +
  84578*b17*b41 - 92201*b17*b89 - 248014*b18*b21 + 84578*b18*b42 - 92201*
 b18*b90 - 51957*b19*b22 - 48054*b19*b43 + 185246*b19*b91 - 51957*b20*b23
  - 48054*b20*b44 + 185246*b20*b92 - 51957*b21*b24 - 48054*b21*b45 +
  185246*b21*b93 + 93267*b22*b46 + 87901*b22*b94 + 93267*b23*b47 + 87901*
 b23*b95 + 93267*b24*b48 + 87901*b24*b96 - 95066*b25*b28 + 33787*b25*b34
  + 129631*b25*b37 + 15164*b25*b49 - 95066*b26*b29 + 33787*b26*b35 +
  129631*b26*b38 + 15164*b26*b50 - 95066*b27*b30 + 33787*b27*b36 + 129631*
 b27*b39 + 15164*b27*b51 + 156011*b28*b31 + 6292*b28*b40 - 158477*b28*b52
  + 156011*b29*b32 + 6292*b29*b41 - 158477*b29*b53 + 156011*b30*b33 + 6292
 *b30*b42 - 158477*b30*b54 - 82579*b31*b34 + 82989*b31*b43 + 112886*b31*
 b55 - 82579*b32*b35 + 82989*b32*b44 + 112886*b32*b56 - 82579*b33*b36 +
  82989*b33*b45 + 112886*b33*b57 - 84274*b34*b46 + 82805*b34*b58 - 84274*
 b35*b47 + 82805*b35*b59 - 84274*b36*b48 + 82805*b36*b60 - 100604*b37*b40
  + 9057*b37*b46 - 196710*b37*b61 - 100604*b38*b41 + 9057*b38*b47 - 196710
 *b38*b62 - 100604*b39*b42 + 9057*b39*b48 - 196710*b39*b63 - 51470*b40*b43
  - 101195*b40*b64 - 51470*b41*b44 - 101195*b41*b65 - 51470*b42*b45 -
  101195*b42*b66 + 52879*b43*b46 - 339*b43*b67 + 52879*b44*b47 - 339*b44*
 b68 + 52879*b45*b48 - 339*b45*b69 - 162853*b46*b70 - 162853*b47*b71 -
  162853*b48*b72 + 20286*b49*b52 - 113065*b49*b58 + 48095*b49*b61 + 88378*
 b49*b73 + 20286*b50*b53 - 113065*b50*b59 + 48095*b50*b62 + 88378*b50*b74
  + 20286*b51*b54 - 113065*b51*b60 + 48095*b51*b63 + 88378*b51*b75 + 55522
 *b52*b55 - 30307*b52*b64 - 156874*b52*b76 + 55522*b53*b56 - 30307*b53*b65
  - 156874*b53*b77 + 55522*b54*b57 - 30307*b54*b66 - 156874*b54*b78 -
  57258*b55*b58 - 65625*b55*b67 - 100949*b55*b79 - 57258*b56*b59 - 65625*
 b56*b68 - 100949*b56*b80 - 57258*b57*b60 - 65625*b57*b69 - 100949*b57*b81
  + 2223*b58*b70 + 86484*b58*b82 + 2223*b59*b71 + 86484*b59*b83 + 2223*b60
 *b72 + 86484*b60*b84 + 124961*b61*b64 - 93699*b61*b70 + 210186*b61*b85 +
  124961*b62*b65 - 93699*b62*b71 + 210186*b62*b86 + 124961*b63*b66 - 93699*
 b63*b72 + 210186*b63*b87 - 70255*b64*b67 + 139841*b64*b88 - 70255*b65*b68
  + 139841*b65*b89 - 70255*b66*b69 + 139841*b66*b90 + 180763*b67*b70 +
  206568*b67*b91 + 180763*b68*b71 + 206568*b68*b92 + 180763*b69*b72 +
  206568*b69*b93 - 70318*b70*b94 - 70318*b71*b95 - 70318*b72*b96 - 142181*
 b73*b76 + 101279*b73*b82 + 114585*b73*b85 - 142181*b74*b77 + 101279*b74*
 b83 + 114585*b74*b86 - 142181*b75*b78 + 101279*b75*b84 + 114585*b75*b87
  - 110505*b76*b79 - 17501*b76*b88 - 110505*b77*b80 - 17501*b77*b89 -
  110505*b78*b81 - 17501*b78*b90 + 43072*b79*b82 + 68163*b79*b91 + 43072*
 b80*b83 + 68163*b80*b92 + 43072*b81*b84 + 68163*b81*b93 - 27524*b82*b94
  - 27524*b83*b95 - 27524*b84*b96 - 206078*b85*b88 + 128123*b85*b94 -
  206078*b86*b89 + 128123*b86*b95 - 206078*b87*b90 + 128123*b87*b96 - 2068*
 b88*b91 - 2068*b89*b92 - 2068*b90*b93 + 151073*b91*b94 + 151073*b92*b95
  + 151073*b93*b96  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
