#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_2g-0066-0066";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b16,b19,b91,b2,b5,b17,b20,b92,b3,b6,b18,b21,b93,b7,b22,b94,b8,b23,b95,b9,b24,b96,b10,b25,b97,b11,b26,b98,b12,b27,b99,b13,b28,b100,b14,b29,b101,b15,b30,b102,b31,b103,b32,b104,b33,b105,b34,b106,b35,b107,b36,b108,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90;
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
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b108); 
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
   res= 50078*b1*b4 + 117720*b1*b16 - 43049*b1*b19 + 13155*b1*b91 + 50078*b2*b5
  + 117720*b2*b17 - 43049*b2*b20 + 13155*b2*b92 + 50078*b3*b6 + 117720*b3*
 b18 - 43049*b3*b21 + 13155*b3*b93 + 19451*b4*b7 - 81035*b4*b22 - 105510*
 b4*b94 + 19451*b5*b8 - 81035*b5*b23 - 105510*b5*b95 + 19451*b6*b9 - 81035
 *b6*b24 - 105510*b6*b96 - 31535*b7*b10 - 91808*b7*b25 + 3251*b7*b97 -
  31535*b8*b11 - 91808*b8*b26 + 3251*b8*b98 - 31535*b9*b12 - 91808*b9*b27
  + 3251*b9*b99 + 144057*b10*b13 - 102239*b10*b28 + 25384*b10*b100 +
  144057*b11*b14 - 102239*b11*b29 + 25384*b11*b101 + 144057*b12*b15 -
  102239*b12*b30 + 25384*b12*b102 - 78656*b13*b16 - 156991*b13*b31 - 26788*
 b13*b103 - 78656*b14*b17 - 156991*b14*b32 - 26788*b14*b104 - 78656*b15*
 b18 - 156991*b15*b33 - 26788*b15*b105 - 40629*b16*b34 + 187339*b16*b106
  - 40629*b17*b35 + 187339*b17*b107 - 40629*b18*b36 + 187339*b18*b108 -
  64123*b19*b22 + 193957*b19*b34 - 42715*b19*b37 - 64123*b20*b23 + 193957*
 b20*b35 - 42715*b20*b38 - 64123*b21*b24 + 193957*b21*b36 - 42715*b21*b39
  - 109684*b22*b25 - 7040*b22*b40 - 109684*b23*b26 - 7040*b23*b41 - 109684
 *b24*b27 - 7040*b24*b42 - 104107*b25*b28 + 4745*b25*b43 - 104107*b26*b29
  + 4745*b26*b44 - 104107*b27*b30 + 4745*b27*b45 - 89768*b28*b31 + 111318*
 b28*b46 - 89768*b29*b32 + 111318*b29*b47 - 89768*b30*b33 + 111318*b30*b48
  - 87660*b31*b34 - 59350*b31*b49 - 87660*b32*b35 - 59350*b32*b50 - 87660*
 b33*b36 - 59350*b33*b51 - 53495*b34*b52 - 53495*b35*b53 - 53495*b36*b54
  + 98616*b37*b40 - 166277*b37*b52 + 121306*b37*b55 + 98616*b38*b41 -
  166277*b38*b53 + 121306*b38*b56 + 98616*b39*b42 - 166277*b39*b54 + 121306
 *b39*b57 + 185685*b40*b43 + 162679*b40*b58 + 185685*b41*b44 + 162679*b41*
 b59 + 185685*b42*b45 + 162679*b42*b60 - 34358*b43*b46 - 197375*b43*b61 -
  34358*b44*b47 - 197375*b44*b62 - 34358*b45*b48 - 197375*b45*b63 - 57511*
 b46*b49 - 19008*b46*b64 - 57511*b47*b50 - 19008*b47*b65 - 57511*b48*b51
  - 19008*b48*b66 - 9951*b49*b52 - 7268*b49*b67 - 9951*b50*b53 - 7268*b50*
 b68 - 9951*b51*b54 - 7268*b51*b69 - 62799*b52*b70 - 62799*b53*b71 - 62799
 *b54*b72 - 60076*b55*b58 + 20720*b55*b70 + 53669*b55*b73 - 60076*b56*b59
  + 20720*b56*b71 + 53669*b56*b74 - 60076*b57*b60 + 20720*b57*b72 + 53669*
 b57*b75 + 30538*b58*b61 - 71849*b58*b76 + 30538*b59*b62 - 71849*b59*b77
  + 30538*b60*b63 - 71849*b60*b78 + 84983*b61*b64 + 89697*b61*b79 + 84983*
 b62*b65 + 89697*b62*b80 + 84983*b63*b66 + 89697*b63*b81 + 123972*b64*b67
  - 71412*b64*b82 + 123972*b65*b68 - 71412*b65*b83 + 123972*b66*b69 -
  71412*b66*b84 + 98426*b67*b70 - 14872*b67*b85 + 98426*b68*b71 - 14872*b68
 *b86 + 98426*b69*b72 - 14872*b69*b87 - 139665*b70*b88 - 139665*b71*b89 -
  139665*b72*b90 - 13082*b73*b76 + 244658*b73*b88 + 98492*b73*b91 - 13082*
 b74*b77 + 244658*b74*b89 + 98492*b74*b92 - 13082*b75*b78 + 244658*b75*b90
  + 98492*b75*b93 + 102438*b76*b79 + 36098*b76*b94 + 102438*b77*b80 +
  36098*b77*b95 + 102438*b78*b81 + 36098*b78*b96 + 283615*b79*b82 - 42312*
 b79*b97 + 283615*b80*b83 - 42312*b80*b98 + 283615*b81*b84 - 42312*b81*b99
  - 89738*b82*b85 - 112724*b82*b100 - 89738*b83*b86 - 112724*b83*b101 -
  89738*b84*b87 - 112724*b84*b102 + 46994*b85*b88 - 99160*b85*b103 + 46994*
 b86*b89 - 99160*b86*b104 + 46994*b87*b90 - 99160*b87*b105 - 36555*b88*
 b106 - 36555*b89*b107 - 36555*b90*b108 + 48924*b91*b94 - 110970*b91*b106
  + 48924*b92*b95 - 110970*b92*b107 + 48924*b93*b96 - 110970*b93*b108 -
  189064*b94*b97 - 189064*b95*b98 - 189064*b96*b99 + 24208*b97*b100 + 24208
 *b98*b101 + 24208*b99*b102 - 202185*b100*b103 - 202185*b101*b104 - 202185
 *b102*b105 - 4003*b103*b106 - 4003*b104*b107 - 4003*b105*b108 
  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
