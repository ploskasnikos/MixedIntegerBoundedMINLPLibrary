#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd20-04";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,x93,x94,x95,x96;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
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
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 

   fclose(fp);
   res=-(- 605.279840123728*b1 - 272.608555855308*b2 - 211.960656393875*b3
 - 135.715048070326*b4 - 522.241469316371*b5 - 523.563443912583*b6
 - 619.396068733614*b7 - 682.855110454901*b8 - 114.621684843966*b9
 - 261.173379139252*b10 - 513.947181134071*b11 - 358.827151019868*b12
 - 52.6956363514181*b13 - 220.516589731527*b14 - 345.528110071738*b15
 - 282.457316020068*b16 - 164.693392296952*b17 - 399.53784188835*b18
 - 579.783225922065*b19 - 516.220792703845*b20 - 141.747533297772*b21
 - 335.99629563561*b22 - 476.041671993639*b23 - 412.41709048995*b24
 - 249.021288299155*b25 - 32.6643717959122*b26 - 199.880519193262*b27
 - 133.876249431799*b28 - 728.457456178222*b29 - 404.601461725878*b30
 - 192.078907281649*b31 - 305.768394889279*b32 - 221.337276729365*b33
 - 192.029949456353*b34 - 290.444487065555*b35 - 290.589607684046*b36
 - 51.4630955019675*b37 - 378.97714206935*b38 - 703.676326841317*b39
 - 539.35222186517*b40 - 204.068863192141*b41 - 463.922884836254*b42
 - 653.596824664278*b43 - 561.360926563887*b44 - 266.946572387463*b45
 - 560.351177303554*b46 - 769.136225452049*b47 - 680.608731917532*b48
 - 63.9346010099856*b49 - 279.007631632013*b50 - 482.164187877198*b51
 - 396.080242012788*b52 - 220.027468271858*b53 - 241.243800922173*b54
 - 278.137335265831*b55 - 303.106288586679*b56 - 422.202307395423*b57
 - 190.792583868763*b58 - 305.391726831552*b59 - 321.417518470348*b60
 - 658.941366540719*b61 - 257.620909868047*b62 - 150.646514025985*b63
 - 290.969639301944*b64 - 505.285454816257*b65 - 51.8926025973049*b66
 - 331.503998535252*b67 - 203.933628440855*b68 - 342.132118599327*b69
 - 368.956004133481*b70 - 594.305258519636*b71 - 387.086094157069*b72
 - 159.012285419563*b73 - 466.830163547866*b74 - 692.307419918051*b75
 - 595.529758838679*b76 - 367.398716653205*b77 - 816.295996604146*b78
 - 1138.18899052505*b79 - 1010.10082815226*b80 - 334.527248*b81
 - 153.380628575016*b82 - 110.155626976693*b83 - 304.26749275*b84
 - 134.618265608558*b85 - 94.9717940075149*b86 - 386.41984025*b87
 - 164.839722634043*b88 - 114.190322638477*b89 - 292.732952*b90
 - 143.429945907125*b91 - 106.48563964612*b92 - 113818.899052505*x93
 - 113818.899052505*x94 - 113818.899052505*x95 - 113818.899052505*x96
  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
