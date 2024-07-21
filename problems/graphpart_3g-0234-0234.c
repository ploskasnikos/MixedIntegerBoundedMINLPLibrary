#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_3g-0234-0234";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b4,b7,b10,b19,b55,b2,b5,b8,b11,b20,b56,b3,b6,b9,b12,b21,b57,b13,b22,b58,b14,b23,b59,b15,b24,b60,b16,b25,b61,b17,b26,b62,b18,b27,b63,b28,b64,b29,b65,b30,b66,b31,b67,b32,b68,b33,b69,b34,b70,b35,b71,b36,b72,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54;
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
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b72); 
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

   fclose(fp);
   res= 36391*b1*b4 - 56023*b1*b7 - 30587*b1*b10 + 43940*b1*b19 + 103654*b1*b55
  + 36391*b2*b5 - 56023*b2*b8 - 30587*b2*b11 + 43940*b2*b20 + 103654*b2*
 b56 + 36391*b3*b6 - 56023*b3*b9 - 30587*b3*b12 + 43940*b3*b21 + 103654*b3
 *b57 - 42004*b4*b7 - 64233*b4*b13 + 75921*b4*b22 + 137016*b4*b58 - 42004*
 b5*b8 - 64233*b5*b14 + 75921*b5*b23 + 137016*b5*b59 - 42004*b6*b9 - 64233
 *b6*b15 + 75921*b6*b24 + 137016*b6*b60 + 140585*b7*b16 + 145261*b7*b25 +
  13442*b7*b61 + 140585*b8*b17 + 145261*b8*b26 + 13442*b8*b62 + 140585*b9*
 b18 + 145261*b9*b27 + 13442*b9*b63 - 67931*b10*b13 + 216581*b10*b16 +
  52450*b10*b28 - 12680*b10*b64 - 67931*b11*b14 + 216581*b11*b17 + 52450*
 b11*b29 - 12680*b11*b65 - 67931*b12*b15 + 216581*b12*b18 + 52450*b12*b30
  - 12680*b12*b66 - 40867*b13*b16 + 53965*b13*b31 + 127982*b13*b67 - 40867
 *b14*b17 + 53965*b14*b32 + 127982*b14*b68 - 40867*b15*b18 + 53965*b15*b33
  + 127982*b15*b69 + 8603*b16*b34 + 161176*b16*b70 + 8603*b17*b35 + 161176
 *b17*b71 + 8603*b18*b36 + 161176*b18*b72 - 30437*b19*b22 + 49122*b19*b25
  + 43433*b19*b28 - 16626*b19*b37 - 30437*b20*b23 + 49122*b20*b26 + 43433*
 b20*b29 - 16626*b20*b38 - 30437*b21*b24 + 49122*b21*b27 + 43433*b21*b30
  - 16626*b21*b39 - 145961*b22*b25 - 15003*b22*b31 + 129731*b22*b40 -
  145961*b23*b26 - 15003*b23*b32 + 129731*b23*b41 - 145961*b24*b27 - 15003*
 b24*b33 + 129731*b24*b42 - 183464*b25*b34 - 186557*b25*b43 - 183464*b26*
 b35 - 186557*b26*b44 - 183464*b27*b36 - 186557*b27*b45 + 29786*b28*b31 -
  313633*b28*b34 - 39968*b28*b46 + 29786*b29*b32 - 313633*b29*b35 - 39968*
 b29*b47 + 29786*b30*b33 - 313633*b30*b36 - 39968*b30*b48 + 91033*b31*b34
  - 84205*b31*b49 + 91033*b32*b35 - 84205*b32*b50 + 91033*b33*b36 - 84205*
 b33*b51 - 41917*b34*b52 - 41917*b35*b53 - 41917*b36*b54 - 53775*b37*b40
  - 94936*b37*b43 + 17605*b37*b46 + 103658*b37*b55 - 53775*b38*b41 - 94936
 *b38*b44 + 17605*b38*b47 + 103658*b38*b56 - 53775*b39*b42 - 94936*b39*b45
  + 17605*b39*b48 + 103658*b39*b57 + 73358*b40*b43 + 51387*b40*b49 -
  101209*b40*b58 + 73358*b41*b44 + 51387*b41*b50 - 101209*b41*b59 + 73358*
 b42*b45 + 51387*b42*b51 - 101209*b42*b60 + 77521*b43*b52 + 108709*b43*b61
  + 77521*b44*b53 + 108709*b44*b62 + 77521*b45*b54 + 108709*b45*b63 -
  97439*b46*b49 - 217980*b46*b52 + 163226*b46*b64 - 97439*b47*b50 - 217980*
 b47*b53 + 163226*b47*b65 - 97439*b48*b51 - 217980*b48*b54 + 163226*b48*
 b66 + 5548*b49*b52 - 93151*b49*b67 + 5548*b50*b53 - 93151*b50*b68 + 5548*
 b51*b54 - 93151*b51*b69 + 208299*b52*b70 + 208299*b53*b71 + 208299*b54*
 b72 + 16385*b55*b58 + 6737*b55*b61 - 94240*b55*b64 + 16385*b56*b59 + 6737
 *b56*b62 - 94240*b56*b65 + 16385*b57*b60 + 6737*b57*b63 - 94240*b57*b66
  - 51575*b58*b61 - 158490*b58*b67 - 51575*b59*b62 - 158490*b59*b68 -
  51575*b60*b63 - 158490*b60*b69 - 26327*b61*b70 - 26327*b62*b71 - 26327*
 b63*b72 + 136319*b64*b67 + 56292*b64*b70 + 136319*b65*b68 + 56292*b65*b71
  + 136319*b66*b69 + 56292*b66*b72 - 47852*b67*b70 - 47852*b68*b71 - 47852
 *b69*b72  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
