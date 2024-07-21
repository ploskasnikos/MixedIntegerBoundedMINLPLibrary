#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1244";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x21,x44,x45,x22,x46,x23,x47,x24,x48,x49,x25,x50,x26,x51,x27,x52,x53,x28,x54,x29,x55,x30,x56,x57,x31,x58,x32,x59,x33,x60,x61,x34,x62,x35,x63,x36,x64,x65,x37,x66,x38,x67,x39,x68,x40,x69,x41,x70,x42,x71,x43,x72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x72); 
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

   fclose(fp);
   res=-(-(17600*x21/(x44 + x45) + 17600*x22/(x45 + x46) + 17600*x23/(x46 + x47) +
 1920*x24/(x48 + x49) + 1920*x25/(x49 + x50) + 1920*x26/(x50 + x51) + 20000
*x27/(x52 + x53) + 20000*x28/(x53 + x54) + 20000*x29/(x54 + x55) + 4320*
x30/(x56 + x57) + 4320*x31/(x57 + x58) + 4320*x32/(x58 + x59) + 16320*x33/
(x60 + x61) + 16320*x34/(x61 + x62) + 16320*x35/(x62 + x63) + 640*x36/(x64
 + x65) + 640*x37/(x65 + x66) + 640*x38/(x66 + x67) + 2400*x39/(57 + x68)
 + 4800*x40/(60 + x69) + 1120*x41/(70 + x70) + 19200*x42/(173 + x71) +
 3520*x43/(35 + x72) + 110*x42 + 110*x43 + 10*x39 + 10*x40 + 10*x41)
 - 7400*b73 - 7400*b74 - 7400*b75 - 7400*b76 - 7400*b77 - 7400*b78
 - 7400*b79 - 7400*b80 - 7400*b81 - 7400*b82 - 7400*b83 - 7400*b84
 - 7400*b85 - 7400*b86 - 7400*b87 - 7400*b88 - 7400*b89 - 7400*b90
 - 7400*b91 - 7400*b92 - 7400*b93 - 7400*b94 - 7400*b95  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
