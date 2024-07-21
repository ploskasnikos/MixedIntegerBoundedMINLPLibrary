#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament14";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x43,x30,x59,x69,x70,x46,x47,x63,x84,b14,x64,x88,x74,x52,x54,x76,b15,x25,x78,x58,x60,b12,x62,x73,x83,x77,x37,x66,x82,x67,x26,x56,x90,x57,x71,x23,x32,x85,x81,x22,x89,x79,x39,x87,x91,x42,x55,x92,b3,x86,x34,b4,x24,x33,x53,b1,x27,x75,x28,x29,x41,x31,x45,b9,x49,b10,x35,x48,x36,b19,b17,x40,b2,b21,b18,x72,x44,x61,x65,x50,b11,x51,b5,b6,b16,b20,b7,b8,b13,x68,x80;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x92); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x80); 

   fclose(fp);
   res=-( 2*x43*x30 - 4*x30 - 2*x43 - 2*x43*x59 + 2*x59 + 2*x43*x69 + 2*x43*x70 + 2*
x46*x47 - 2*x46 - 4*x47 + 2*x46*x63 - 2*x63 + 2*x46*x84 - 2*x84 - 2*x46*
b14 + 2*x47*x64 - 2*x64 + 2*x47*x88 - 2*x88 + 2*x47*x74 + 2*x52*x54 + 2*
x52 - 4*x54 - 2*x52*x84 - 2*x52*x76 - 2*x52*b15 + 2*x54*x88 + 2*x54*x25 -
 4*x25 + 2*x54*x78 + 2*x58*x60 - 2*x58 - 2*x60 + 2*x58*b12 - 4*b12 + 2*x60*
x62 - 2*x62 + 2*x60*x73 - 4*x73 - 2*x60*x83 + 2*x62*x77 - 4*x77 + 2*x63*
x37 - 2*x37 + 2*x64*x66 - 2*x66 + 2*x64*x84 - 2*x64*x82 + 2*x66*x67 - 2*
x67 - 2*x66*x26 - 2*x26 + 2*x66*x56 - 4*x56 + 2*x67*x90 - 4*x90 + 2*x67*
x57 + 2*x57 - 2*x67*x71 + 2*x73*x23 - 4*x23 + 2*x73*x32 - 4*x32 + 2*x73*
x85 + 2*x77*x81 - 2*x81 + 2*x77*x22 - 4*x22 + 2*x77*x83 + 2*x81*x23 + 2*
x84*x89 - 2*x89 + 2*x88*x90 - 2*x88*x79 + 2*x89*x90 + 2*x89*x39 - 4*x39 -
 2*x89*x87 + 2*x90*x91 - 4*x91 + 2*x91*x42 + 2*x42 + 2*x91*x55 - 2*x55 + 2*
x91*x71 + 2*x92*x22 - 4*x92 + 2*x92*b3 - 2*b3 + 2*x92*x83 + 2*x92*x86 + 2*
x22*x34 - 4*x34 + 2*x22*b4 - 2*b4 + 2*x23*x24 - 2*x24 + 2*x23*x33 - 4*x33
 + 2*x24*x34 + 2*x25*x39 + 2*x25*x53 - 2*x53 + 2*x25*x55 + 2*x26*b1 - 2*b1
 + 2*x26*x55 + 2*x26*x87 + 2*x27*x39 - 2*x27 - 2*x27*x42 + 2*x27*x75 + 2*
x27*x79 + 2*x28*x29 - 4*x28 - 2*x29 + 2*x28*x30 + 2*x28*x41 - 2*x41 + 2*
x28*x56 - 2*x29*x31 - 2*x31 + 2*x29*x45 - 2*x45 + 2*x29*x71 + 2*x30*x31 +
 2*x30*x75 + 2*x31*x32 + 2*x31*x85 + 2*x32*x33 + 2*x32*b9 - 2*b9 + 2*x33*
x49 - 4*x49 + 2*x33*b10 - 2*b10 + 2*x34*x35 - 2*x35 + 2*x34*x48 - 2*x48 +
 2*x35*x49 - 2*x36*x74 + 2*x36 - 2*x36*b19 - 2*x37*b1 + 2*x37*x53 + 2*x37*
x76 + 2*b1*b17 + 2*b1*b19 + 2*x39*x41 + 2*x40*b2 - 4*b2 - 2*x40 - 2*x40*
x57 + 2*x40*x79 + 2*x40*x82 + 2*x41*b2 - 2*x41*b21 - 2*x42*x59 - 2*x42*b18
 + 2*b2*x72 + 2*b2*b18 - 2*x44*b3 + 2*x44 - 2*x44*x57 + 2*x44*x61 + 2*x61
 - 2*x44*x71 - 2*x45*b4 + 2*x45*x70 + 2*x45*x72 + 2*b3*b4 + 2*b3*b18 + 2*
b4*x48 + 2*x48*x65 - 2*x65 - 2*x48*x70 + 2*x49*x50 - 2*x50 + 2*x49*b11 - 2
*b11 + 2*x50*x65 - 2*x51*b5 - 2*b5 + 2*x51 - 2*x51*x78 + 2*b5*b6 - 2*b6 +
 2*b5*b14 + 2*b5*x87 + 2*x53*x74 - 2*x53*b16 - 2*b6*x78 + 2*b6*b16 + 2*b6*
b17 - 2*x55*b20 + 2*x56*b7 - 4*b7 + 2*x56*x82 - 2*x57*b8 - 2*b8 + 2*b7*x59
 + 2*b7*b8 + 2*b7*b20 - 2*x59*b9 + 2*b8*b9 + 2*b8*x86 - 2*x61*b10 - 2*x61*
x69 - 2*x61*x72 + 2*b9*b10 + 2*b10*b11 + 2*b11*b12 - 2*b11*x69 + 2*x65*b13
 - 2*b13 - 2*x65*x68 + 2*b12*b13 + 2*b12*x68 + 2*x68*x69 - 2*x68*x70 - 2*
x72*x75 - 2*x74*x80 - 2*x75*b20 + 2*b15*b19 + 2*x78*x80 - 2*x79*b16 + 2*
b16*b21 - 2*x82*b17 - 2*x83*x85 - 2*b17*b21 - 2*x85*x86 - 2*x86*b18 - 2*
x87*b19 + 2*b20*b21  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
