#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn15m03hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x47,x48,x49,x65,x66,x67,x80,x81,x82,x119,x120,x121,x122,x123,x124,x131,x132,x133,x134,x135,x136,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,b410,b411,b412,b413,b414,b415,b416,b417,b418,b419,b420,b421,b422,b423,b424,b425,b426,b427,b428,b429,b430,b431,b432,b433,b434,b435,b436,b437,b438,b439,b440,b441,b442,b443,b444,b445,b446,b447,b448,b449,b450,b451,b452,b453,b454;
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
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &b410); 
   fscanf(fp,"%f", &b411); 
   fscanf(fp,"%f", &b412); 
   fscanf(fp,"%f", &b413); 
   fscanf(fp,"%f", &b414); 
   fscanf(fp,"%f", &b415); 
   fscanf(fp,"%f", &b416); 
   fscanf(fp,"%f", &b417); 
   fscanf(fp,"%f", &b418); 
   fscanf(fp,"%f", &b419); 
   fscanf(fp,"%f", &b420); 
   fscanf(fp,"%f", &b421); 
   fscanf(fp,"%f", &b422); 
   fscanf(fp,"%f", &b423); 
   fscanf(fp,"%f", &b424); 
   fscanf(fp,"%f", &b425); 
   fscanf(fp,"%f", &b426); 
   fscanf(fp,"%f", &b427); 
   fscanf(fp,"%f", &b428); 
   fscanf(fp,"%f", &b429); 
   fscanf(fp,"%f", &b430); 
   fscanf(fp,"%f", &b431); 
   fscanf(fp,"%f", &b432); 
   fscanf(fp,"%f", &b433); 
   fscanf(fp,"%f", &b434); 
   fscanf(fp,"%f", &b435); 
   fscanf(fp,"%f", &b436); 
   fscanf(fp,"%f", &b437); 
   fscanf(fp,"%f", &b438); 
   fscanf(fp,"%f", &b439); 
   fscanf(fp,"%f", &b440); 
   fscanf(fp,"%f", &b441); 
   fscanf(fp,"%f", &b442); 
   fscanf(fp,"%f", &b443); 
   fscanf(fp,"%f", &b444); 
   fscanf(fp,"%f", &b445); 
   fscanf(fp,"%f", &b446); 
   fscanf(fp,"%f", &b447); 
   fscanf(fp,"%f", &b448); 
   fscanf(fp,"%f", &b449); 
   fscanf(fp,"%f", &b450); 
   fscanf(fp,"%f", &b451); 
   fscanf(fp,"%f", &b452); 
   fscanf(fp,"%f", &b453); 
   fscanf(fp,"%f", &b454); 

   fclose(fp);
   res=-( + x47 + x48 + x49 - 5*x65 - 10*x66 - 5*x67 + 2*x80 + x81 + 2*x82
 - 500*x119 - 600*x120 - 350*x121 - 350*x122 - 400*x123 - 450*x124
 + 10*x131 + 5*x132 + 5*x133 + 5*x134 + 5*x135 + 5*x136 - 80*x155
 - 130*x156 - 215*x157 - 110*x158 - 120*x159 - 125*x160 - 110*x161
 - 130*x162 - 140*x163 - 80*x164 - 90*x165 - 120*x166 + 5*b410 + 4*b411
 + 6*b412 + 8*b413 + 7*b414 + 6*b415 + 6*b416 + 9*b417 + 4*b418 + 10*b419
 + 9*b420 + 5*b421 + 6*b422 + 10*b423 + 6*b424 + 7*b425 + 7*b426 + 4*b427
 + 4*b428 + 3*b429 + 2*b430 + 5*b431 + 6*b432 + 7*b433 + 2*b434 + 5*b435
 + 2*b436 + 4*b437 + 7*b438 + 4*b439 + 3*b440 + 9*b441 + 3*b442 + 7*b443
 + 2*b444 + 9*b445 + 3*b446 + b447 + 9*b448 + 2*b449 + 6*b450 + 3*b451
 + 4*b452 + 8*b453 + b454 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
