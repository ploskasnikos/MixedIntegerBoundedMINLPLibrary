#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd16-07persp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,x134,x135,x136,x137,x138,x139,x140;
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
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 

   fclose(fp);
   res=-(- 213.063116318789*b1 - 273.266269308957*b2 - 273.974174702314*b3
 - 254.150135436057*b4 - 185.731929048522*b5 - 179.664347941509*b6
 - 237.750329788273*b7 - 537.121468653771*b8 - 599.064322370087*b9
 - 647.139474601933*b10 - 334.656278986919*b11 - 367.358296540833*b12
 - 141.411637746466*b13 - 360.746107012962*b14 - 413.406755015334*b15
 - 817.814884544082*b16 - 787.879729353984*b17 - 659.790734814134*b18
 - 129.467626164413*b19 - 463.197432726166*b20 - 76.2798654732459*b21
 - 92.6304041963229*b22 - 656.979544503091*b23 - 545.816761705456*b24
 - 779.467483878278*b25 - 292.944834031572*b26 - 643.908868487291*b27
 - 454.262570558583*b28 - 359.628418050031*b29 - 249.165614018324*b30
 - 309.573510482173*b31 - 26.8704357917498*b32 - 307.455902574816*b33
 - 110.240019364815*b34 - 292.719299621857*b35 - 380.498814693536*b36
 - 111.547475796566*b37 - 170.24780915301*b38 - 317.139662731513*b39
 - 436.631726254781*b40 - 333.125123720727*b41 - 505.763223945112*b42
 - 213.446130466938*b43 - 218.592717682533*b44 - 241.362859574739*b45
 - 110.767723212745*b46 - 153.929916757254*b47 - 42.1931799968048*b48
 - 150.970037415173*b49 - 708.798337464944*b50 - 603.674904724189*b51
 - 704.764096387507*b52 - 147.392997602376*b53 - 549.30947955643*b54
 - 71.2061442568205*b55 - 506.349076214288*b56 - 55.8566864444488*b57
 - 372.553396170802*b58 - 316.282148724127*b59 - 422.527547001739*b60
 - 136.475370007946*b61 - 342.037721074908*b62 - 226.669260720425*b63
 - 425.796044889891*b64 - 352.066307741805*b65 - 178.075578035487*b66
 - 770.923567714452*b67 - 658.958002502518*b68 - 745.698256364226*b69
 - 808.051498329816*b70 - 43.2977732665271*b71 - 355.089484484089*b72
 - 294.923700002902*b73 - 421.41698205632*b74 - 156.07903905941*b75
 - 347.015757251517*b76 - 245.511452101303*b77 - 86.3864296201078*b78
 - 335.699293512738*b79 - 297.182031615534*b80 - 345.872125504266*b81
 - 80.1774101234563*b82 - 270.842757092031*b83 - 149.362369607845*b84
 - 348.763184821689*b85 - 137.967314173634*b86 - 49.4525994536456*b87
 - 450.867970954852*b88 - 471.47080669281*b89 - 461.24773668693*b90
 - 556.405313819934*b91 - 34.374298528587*b92 - 613.459413261482*b93
 - 492.553739135761*b94 - 781.49028155613*b95 - 330.510227759565*b96
 - 646.855838755768*b97 - 515.360830627384*b98 - 463.500876655565*b99
 - 367.830152731938*b100 - 421.957579253695*b101 - 300.884945465719*b102
 - 424.273071696965*b103 - 241.069021571292*b104 - 479.327877226618*b105
 - 249.164006992026*b106 - 420.579677379549*b107 - 339.215571195438*b108
 - 611.532890240341*b109 - 394.081036970694*b110 - 515.338037680354*b111
 - 547.401615707871*b112 - 272.18661225*b113 - 99.714661105525*b114
 - 64.0133197333671*b115 - 378.143072*b116 - 122.880274343504*b117
 - 74.2950034949714*b118 - 423.23534075*b119 - 129.143042829026*b120
 - 75.6623059288464*b121 - 452.32349625*b122 - 144.695478742473*b123
 - 86.8004922924363*b124 - 435.074808*b125 - 143.488032005532*b126
 - 87.3989206979294*b127 - 289.71387775*b128 - 101.536870281553*b129
 - 63.7552459028209*b130 - 407.39804875*b131 - 136.635688397713*b132
 - 83.9269383442227*b133 - 81781.4884544082*x134 - 81781.4884544082*x135
 - 81781.4884544082*x136 - 81781.4884544082*x137 - 81781.4884544082*x138
 - 81781.4884544082*x139 - 81781.4884544082*x140  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
