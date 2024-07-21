#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="supplychainp1_020306";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x77,x78,x79,x34,x35,x36,x37,x38,x39,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,x52,x53,x54,x55,x56,x57,x58,x59,x60,x61,x62,x63,x64,x65,x66,x67,x68,x69,x70,x71,x72,x73,x74,x75,x76;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
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
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 

   fclose(fp);
   res=-(-(322.234552934*sqrt(1e-6 + x77) + 302.50169455058*sqrt(1e-6 + x78) +
 228.02026850162*sqrt(1e-6 + x79) + 6050.05692401735*sqrt(1e-6 + x34) +
 5835.32285968594*sqrt(1e-6 + x35) + 5989.86353513014*sqrt(1e-6 + x36) +
 539.712349032506*sqrt(1e-6 + x37) + 16850.0288492985*sqrt(1e-6 + x38) +
 8222.60184978362*sqrt(1e-6 + x39)) - 151717.47132*b7 - 158432.66708*b8
 - 155503.75356*b9 - 17986.4749305945*b10 - 16608.1293312542*b11
 - 12718.9428305151*b12 - 31542.1682444641*b13 - 27684.4467382033*b14
 - 21088.788254886*b15 - 32968.2805196111*b16 - 15382.4826683217*b17
 - 13024.4125650671*b18 - 32589.6848153206*b19 - 20134.3014301096*b20
 - 32223.2266900764*b21 - 17748.5846986448*b22 - 17549.9907064495*b23
 - 36772.5625416759*b24 - 31609.4271891265*b25 - 9416.32984942185*b26
 - 21045.6190121083*b27  - 12173.2900202663*x41
 - 11461.683166994*x42 - 7650.9016787939*x43 - 13294.0811055533*x44
 - 7956.7979482407*x45 - 8719.97128915194*x46 - 155924.233130298*x47
 - 146809.461963092*x48 - 97998.2383591604*x49 - 170280.129538065*x50
 - 101916.377264214*x51 - 111691.649004965*x52 - 70941.2467141159*x53
 - 66794.2759890772*x54 - 44586.508879453*x55 - 77472.7855802693*x56
 - 46369.154547438*x57 - 50816.6349059184*x58 - 62277.6953743628*x59
 - 58637.1647732989*x60 - 39141.4747613728*x61 - 68011.5837210299*x62
 - 40706.4185566037*x63 - 44610.7596808173*x64 - 268487.828840519*x65
 - 252792.993779081*x66 - 168744.355633672*x67 - 293207.42104374*x68
 - 175491.046552681*x69 - 192323.205565495*x70 - 66974.7313782537*x71
 - 63059.6289067364*x72 - 42093.5576073164*x73 - 73141.0743917914*x74
 - 43776.5307757616*x75 - 47975.3405812849*x76 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
