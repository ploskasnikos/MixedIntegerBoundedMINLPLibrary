#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="blendgap";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x201,x235,x133,x204,x238,x134,x207,x241,x135,x210,x244,x136,x213,x247,x137,x216,x250,x138,x219,x253,x139,x222,x256,x140,x225,x259,x141,x228,x262,x142,x231,x265,x143,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x213); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x216); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x219); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x143); 
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

   fclose(fp);
   res=-((4 - 0.2*x201 + 0.3*x235)*x133 + (4 - 0.2*x204 + 0.3*x238)*x134 + (4
   - 0.2*x207 + 0.3*x241)*x135 + (4 - 0.2*x210 + 0.3*x244)*x136 + (4 - 0.2
  *x213 + 0.3*x247)*x137 + (4 - 0.2*x216 + 0.3*x250)*x138 + (4 - 0.2*x219
   + 0.3*x253)*x139 + (4 - 0.2*x222 + 0.3*x256)*x140 + (4 - 0.2*x225 + 0.3
  *x259)*x141 + (4 - 0.2*x228 + 0.3*x262)*x142 + (4 - 0.2*x231 + 0.3*x265)
  *x143) + 0.01*b67 + 0.01*b68 + 0.01*b69 + 0.01*b70 + 0.01*b71 + 0.01*b72
   + 0.01*b73 + 0.01*b74 + 0.01*b75 + 0.01*b76 + 0.01*b77 + 0.01*b78
   + 0.01*b79 + 0.01*b80 + 0.01*b81 + 0.01*b82 + 0.01*b83 + 0.01*b84
   + 0.01*b85 + 0.01*b86 + 0.01*b87 + 0.01*b88 + 0.01*b89 + 0.01*b90
   + 0.01*b91 + 0.01*b92 + 0.01*b93 + 0.01*b94 + 0.01*b95 + 0.01*b96
   + 0.01*b97 + 0.01*b98 + 0.01*b99 + 0.01*b100 + 0.01*b101 + 0.01*b102
   + 0.01*b103 + 0.01*b104 + 0.01*b105 + 0.01*b106 + 0.01*b107 + 0.01*b108
   + 0.01*b109 + 0.01*b110 + 0.01*b111 + 0.01*b112 + 0.01*b113 + 0.01*b114
   + 0.01*b115 + 0.01*b116 + 0.01*b117 + 0.01*b118 + 0.01*b119 + 0.01*b120
   + 0.01*b121 + 0.01*b122 + 0.01*b123 + 0.01*b124 + 0.01*b125 + 0.01*b126
   + 0.01*b127 + 0.01*b128 + 0.01*b129 + 0.01*b130 + 0.01*b131 + 0.01*b132
    ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
