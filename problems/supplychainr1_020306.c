#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="supplychainr1_020306";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x47,x48,x49,x31,x32,x33,x34,x35,x36,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,x38,x39,x40,x41,x42,x43;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
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
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 

   fclose(fp);
   res=-(-(322.234552934*sqrt(1e-8 + x47) + 302.50169455058*sqrt(1e-8 + x48) +
 228.02026850162*sqrt(1e-8 + x49) + 6050.05692401735*sqrt(1e-8 + x31) +
 5835.32285968594*sqrt(1e-8 + x32) + 5989.86353513014*sqrt(1e-8 + x33) +
 539.712349032506*sqrt(1e-8 + x34) + 16850.0288492985*sqrt(1e-8 + x35) +
 8222.60184978362*sqrt(1e-8 + x36)) - 151717.47132*b7 - 158432.66708*b8
 - 155503.75356*b9 - 17986.4749305945*b10 - 16608.1293312542*b11
 - 12718.9428305151*b12 - 31542.1682444641*b13 - 27684.4467382033*b14
 - 21088.788254886*b15 - 32968.2805196111*b16 - 15382.4826683217*b17
 - 13024.4125650671*b18 - 32589.6848153206*b19 - 20134.3014301096*b20
 - 32223.2266900764*b21 - 17748.5846986448*b22 - 17549.9907064495*b23
 - 36772.5625416759*b24 - 31609.4271891265*b25 - 9416.32984942185*b26
 - 21045.6190121083*b27  - 98.8943913335*x38 - 1266.710322673*x39
 - 576.31843179225*x40 - 505.9367490175*x41 - 2181.163873483*x42
 - 544.0949228475*x43 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
