#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd15-06";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,x109,x110,x111,x112,x113,x114;
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
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 

   fclose(fp);
   res=-(- 442.063529622557*b1 - 366.945276949078*b2 - 361.844037620352*b3
 - 254.615285920205*b4 - 409.806064932284*b5 - 370.944913736794*b6
 - 917.905907756872*b7 - 854.714984393962*b8 - 230.026275257868*b9
 - 657.995431103635*b10 - 881.870778772793*b11 - 729.302338156532*b12
 - 293.220680634507*b13 - 234.88505640483*b14 - 306.589119028639*b15
 - 212.604635867499*b16 - 268.277773733309*b17 - 306.054716297049*b18
 - 282.784475761168*b19 - 198.595458779145*b20 - 587.147485855927*b21
 - 280.762101897659*b22 - 260.072754182405*b23 - 385.710083699727*b24
 - 1022.14187585538*b25 - 926.621742504607*b26 - 974.3712565818*b27
 - 398.695186748816*b28 - 997.178402424156*b29 - 262.577539485453*b30
 - 278.200204540222*b31 - 203.400321375105*b32 - 542.235016479437*b33
 - 232.29811336384*b34 - 259.100413925782*b35 - 322.702146186956*b36
 - 585.3932113854*b37 - 489.124324719191*b38 - 596.315128001653*b39
 - 78.8410167536545*b40 - 554.500116548826*b41 - 215.082206281639*b42
 - 272.649920146241*b43 - 246.781768566014*b44 - 59.9005909177966*b45
 - 210.385716981595*b46 - 257.413123058575*b47 - 255.90843580668*b48
 - 182.000435693263*b49 - 217.705997253011*b50 - 525.920916259861*b51
 - 595.991352847666*b52 - 173.098787504103*b53 - 704.023805695798*b54
 - 348.910381017493*b55 - 315.546938168662*b56 - 81.3458727613443*b57
 - 246.930651630931*b58 - 330.394908673519*b59 - 298.153509072106*b60
 - 269.030948304878*b61 - 247.330257721078*b62 - 595.374260868798*b63
 - 321.838418502709*b64 - 273.302652187602*b65 - 347.519560747871*b66
 - 239.965056365958*b67 - 225.918110477132*b68 - 821.704586939783*b69
 - 517.548613279649*b70 - 252.40296214282*b71 - 591.78966905405*b72
 - 497.076717281293*b73 - 427.025244750595*b74 - 710.446278907083*b75
 - 201.293936746268*b76 - 483.702115167666*b77 - 205.105793016246*b78
 - 144.308693458219*b79 - 82.7493748423842*b80 - 445.417000840525*b81
 - 270.153852594662*b82 - 128.431590169631*b83 - 347.590895267443*b84
 - 880.088095965037*b85 - 803.815832561014*b86 - 643.566550614291*b87
 - 383.258000970235*b88 - 854.384284117996*b89 - 324.364518048663*b90
 - 447.27297125*b91 - 149.951518778611*b92 - 92.0883310907824*b93
 - 387.55659475*b94 - 137.706485799464*b95 - 87.0620787543829*b96
 - 387.78996175*b97 - 131.949558973922*b98 - 81.6353681987649*b99
 - 379.407193*b100 - 122.763219198849*b101 - 74.0651688912662*b102
 - 388.31994525*b103 - 136.076111741735*b104 - 85.4363925392073*b105
 - 391.38973275*b106 - 135.992919927791*b107 - 85.0226413744402*b108
 - 102214.187585538*x109 - 102214.187585538*x110 - 102214.187585538*x111
 - 102214.187585538*x112 - 102214.187585538*x113 - 102214.187585538*x114
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
