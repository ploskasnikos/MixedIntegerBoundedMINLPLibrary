#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd08-04";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,x45,x46,x47,x48;
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
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 

   fclose(fp);
   res=-(- 222.395350591392*b1 - 582.786400468795*b2 - 119.753843399653*b3
 - 338.549698035479*b4 - 119.783636606301*b5 - 409.374679229076*b6
 - 278.20529021903*b7 - 306.426594992684*b8 - 441.233650379831*b9
 - 153.049293317818*b10 - 439.090557840933*b11 - 175.155823424664*b12
 - 612.328425893001*b13 - 146.717315955674*b14 - 676.916374379371*b15
 - 425.643803755754*b16 - 476.000407399777*b17 - 218.667102585295*b18
 - 429.494068158725*b19 - 260.065761415496*b20 - 228.081133173702*b21
 - 290.916261365409*b22 - 358.983740312016*b23 - 303.078553779965*b24
 - 224.102176788463*b25 - 372.279886491354*b26 - 217.090150838618*b27
 - 84.469492807076*b28 - 274.179320847966*b29 - 209.61866336051*b30
 - 205.445642503502*b31 - 144.701484010017*b32 - 270.520699*b33
 - 100.444790162654*b34 - 64.9166596734302*b35 - 330.80933975*b36
 - 110.205022516595*b37 - 67.4648851252699*b38 - 297.23545225*b39
 - 96.7703053435877*b40 - 58.5635369942729*b41 - 252.028512*b42
 - 91.7540307917193*b43 - 58.7189192724058*b44 - 67691.6374379371*x45
 - 67691.6374379371*x46 - 67691.6374379371*x47 - 67691.6374379371*x48
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
