#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="supplychainr1_030510";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x107,x108,x109,x110,x111,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,x87,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
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
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &x93); 
   fscanf(fp,"%f", &x94); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 

   fclose(fp);
   res=-(-(88.85300006996*sqrt(1e-8 + x107) + 192.23073994166*sqrt(1e-8 + x108) +
 127.63233374696*sqrt(1e-8 + x109) + 419.48235478268*sqrt(1e-8 + x110) +
 153.22284111554*sqrt(1e-8 + x111) + 11812.8060023653*sqrt(1e-8 + x76) +
 1350.11753695442*sqrt(1e-8 + x77) + 13367.9894872554*sqrt(1e-8 + x78) +
 22271.0227712868*sqrt(1e-8 + x79) + 3005.94387692899*sqrt(1e-8 + x80) +
 8081.13134168897*sqrt(1e-8 + x81) + 2725.40259637536*sqrt(1e-8 + x82) +
 17834.6321864598*sqrt(1e-8 + x83) + 11090.3708869987*sqrt(1e-8 + x84) +
 34135.3450147183*sqrt(1e-8 + x85)) - 151717.47132*b16 - 158432.66708*b17
 - 155503.75356*b18 - 153011.37904*b19 - 152922.12117*b20
 - 31172.917964017*b21 - 50366.2988612629*b22 - 25232.3015865842*b23
 - 13875.2777716691*b24 - 12894.0919466219*b25 - 104246.200740246*b26
 - 23030.4692996671*b27 - 34080.9619919892*b28 - 23691.1338892398*b29
 - 71485.9325093983*b30 - 20595.4230163802*b31 - 100964.014716159*b32
 - 47584.642753328*b33 - 8366.15399075336*b34 - 12512.1539989574*b35
 - 35986.4763418661*b36 - 46834.267934517*b37 - 35500.2352632821*b38
 - 24409.7766590388*b39 - 48282.6225705813*b40 - 31041.4817687302*b41
 - 53037.2328896265*b42 - 51459.7461120258*b43 - 22667.2580628975*b44
 - 25228.9882448255*b45 - 37408.8375498868*b46 - 25200.7856772603*b47
 - 36902.8071939517*b48 - 26504.6681149691*b49 - 49522.8366523017*b50
 - 9271.93442865272*b51 - 144904.131180845*b52 - 24247.3790621604*b53
 - 7667.40116108732*b54 - 22073.8762813933*b55 - 107488.43411253*b56
 - 23226.4417178111*b57 - 34704.48655633*b58 - 25058.2307095212*b59
 - 47407.2067673463*b60 - 21614.5566697948*b61 - 101949.658248026*b62
 - 25381.2261639692*b63 - 8426.19414871674*b64 - 13579.8855675766*b65
 - 107491.687838232*b66 - 43784.7477537411*b67 - 107221.380878763*b68
 - 13362.229690641*b69 - 25676.6925875457*b70 
 - 772.8645240165*x87 - 109.73384215925*x88 - 332.64598234875*x89
 - 226.514334935*x90 - 159.627138782*x91 - 621.33045502625*x92
 - 444.925267275*x93 - 198.06301532475*x94 - 357.5965626135*x95
 - 80.6766666775*x96 - 242.0437770305*x97 - 630.31461703875*x98
 - 485.8539167745*x99 - 239.8308926255*x100 - 408.49173769875*x101 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
