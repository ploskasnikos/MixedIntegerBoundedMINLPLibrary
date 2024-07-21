#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd12-05persp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,x76,x77,x78,x79,x80;
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
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 

   fclose(fp);
   res=-(- 301.899928098152*b1 - 282.051473607022*b2 - 151.594044960674*b3
 - 114.784185877557*b4 - 213.364530716922*b5 - 772.653148294131*b6
 - 697.676211791334*b7 - 146.306371684975*b8 - 390.583393857486*b9
 - 208.147527440482*b10 - 662.892902187869*b11 - 577.461337631217*b12
 - 221.10047354739*b13 - 425.919826737657*b14 - 123.074770812851*b15
 - 333.28129673946*b16 - 248.380746723092*b17 - 249.162942146638*b18
 - 164.598799150643*b19 - 280.957171099846*b20 - 308.552481034871*b21
 - 270.059605282374*b22 - 104.633483616243*b23 - 79.6631898566695*b24
 - 170.696237801571*b25 - 237.754076296143*b26 - 189.862911729786*b27
 - 107.217531395173*b28 - 131.358715293396*b29 - 103.406777059692*b30
 - 626.417763832299*b31 - 487.184730842973*b32 - 502.300580630229*b33
 - 506.426352475088*b34 - 463.185748318154*b35 - 358.178221555384*b36
 - 281.629247221142*b37 - 230.4203839171*b38 - 251.915433121165*b39
 - 209.261088879339*b40 - 303.899003044044*b41 - 243.197489456663*b42
 - 237.390965850675*b43 - 57.1385835039462*b44 - 301.733744039334*b45
 - 30.6123768510861*b46 - 21.3396948414106*b47 - 278.520865043453*b48
 - 162.122145724483*b49 - 304.508803157003*b50 - 252.516206195527*b51
 - 178.796029580139*b52 - 319.145634893211*b53 - 257.755103285795*b54
 - 317.996864520235*b55 - 936.171150833806*b56 - 887.611963724196*b57
 - 419.760722838682*b58 - 519.981401235063*b59 - 524.621957902125*b60
 - 326.37044675*b61 - 119.610927362864*b62 - 76.800859418795*b63
 - 338.15311375*b64 - 113.101546866718*b65 - 69.3762358590679*b66
 - 313.6973235*b67 - 116.266585440261*b68 - 75.0744657614982*b69
 - 401.4402965*b70 - 138.599587312691*b71 - 86.376825937843*b72
 - 456.70672375*b73 - 150.554161322115*b74 - 91.6821859840903*b75
 - 93617.1150833806*x76 - 93617.1150833806*x77 - 93617.1150833806*x78
 - 93617.1150833806*x79 - 93617.1150833806*x80  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
