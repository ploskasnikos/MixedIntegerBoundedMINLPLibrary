#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd18-06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,x127,x128,x129,x130,x131,x132;
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
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 

   fclose(fp);
   res=-(- 63.4638470839033*b1 - 406.464924344563*b2 - 281.054038749709*b3
 - 357.899009619357*b4 - 283.867227208487*b5 - 346.427860883825*b6
 - 174.902031629248*b7 - 327.682040608985*b8 - 195.408950113586*b9
 - 411.209540848557*b10 - 341.151615907997*b11 - 306.690501464422*b12
 - 217.736042166853*b13 - 590.531921051569*b14 - 469.541866006763*b15
 - 371.170896461036*b16 - 301.885481955089*b17 - 482.559449428939*b18
 - 266.695094430501*b19 - 661.407332369201*b20 - 469.726457930889*b21
 - 365.202026294741*b22 - 207.423237700342*b23 - 464.900263444655*b24
 - 416.573440009268*b25 - 427.21293769024*b26 - 421.557561337466*b27
 - 131.588490152482*b28 - 195.079739824454*b29 - 327.092772346777*b30
 - 284.74538638165*b31 - 91.2881292105079*b32 - 151.13720061786*b33
 - 158.491236423963*b34 - 174.161578418524*b35 - 70.9637233498753*b36
 - 455.733220723331*b37 - 159.976116957465*b38 - 94.4221181484321*b39
 - 501.080276859661*b40 - 450.105521915833*b41 - 218.986984440606*b42
 - 754.787490214755*b43 - 145.720505553027*b44 - 360.826762020128*b45
 - 512.320209445762*b46 - 533.899656702829*b47 - 217.438198555652*b48
 - 257.356951080936*b49 - 469.748170208231*b50 - 224.941373479115*b51
 - 574.696478620214*b52 - 453.651669444504*b53 - 396.680178831932*b54
 - 355.480538495142*b55 - 455.001425048605*b56 - 410.327875101372*b57
 - 107.716832660101*b58 - 127.140023996384*b59 - 331.094295675558*b60
 - 182.462253711509*b61 - 460.500595074032*b62 - 320.358519241588*b63
 - 267.389834464462*b64 - 154.515161518257*b65 - 322.544727498533*b66
 - 33.1863391968753*b67 - 615.771638171722*b68 - 401.573448620245*b69
 - 502.776036957456*b70 - 369.539939879878*b71 - 490.231458199826*b72
 - 180.326894384108*b73 - 351.782220377873*b74 - 230.814529409496*b75
 - 424.244156625063*b76 - 357.224268091235*b77 - 334.18273348498*b78
 - 501.721049311591*b79 - 663.739169113737*b80 - 452.23673398428*b81
 - 920.634818812952*b82 - 798.472532832495*b83 - 676.77410056404*b84
 - 407.527006741593*b85 - 510.493559429826*b86 - 468.587901001095*b87
 - 140.053665522904*b88 - 171.808834000698*b89 - 381.118854530951*b90
 - 179.901289120497*b91 - 881.284249355185*b92 - 649.077324059404*b93
 - 661.262090699325*b94 - 520.002854424345*b95 - 730.978694813241*b96
 - 678.238937211925*b97 - 398.969088179479*b98 - 483.529007052756*b99
 - 249.519882483891*b100 - 342.614106364254*b101 - 292.077181816541*b102
 - 170.281172626711*b103 - 225.734424617283*b104 - 168.147658999551*b105
 - 104.518622131715*b106 - 46.8477886786758*b107 - 136.089840994616*b108
 - 310.191094*b109 - 117.377523177255*b110 - 76.582257499663*b111
 - 439.61435975*b112 - 149.716022877401*b113 - 92.6683043463223*b114
 - 350.33553925*b115 - 135.660413957549*b116 - 89.5371309630422*b117
 - 261.032076*b118 - 112.326275197259*b119 - 78.152225609751*b120
 - 473.56432275*b121 - 158.186763322588*b122 - 96.9684211447128*b123
 - 351.54659075*b124 - 129.748325387621*b125 - 83.6038830543306*b126
 - 92063.4818812952*x127 - 92063.4818812952*x128 - 92063.4818812952*x129
 - 92063.4818812952*x130 - 92063.4818812952*x131 - 92063.4818812952*x132
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
