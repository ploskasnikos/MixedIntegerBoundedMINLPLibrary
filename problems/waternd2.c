#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="waternd2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x155,x156,x157,x75,x76,x77,x78,x79,x80,x81,x82,x88,x89,x90,x91,x92,x93,x94,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,x107,x108,x109,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,x142,x149,x150,x151,x143,x144,x145,x146,x147,x148,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,x74;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
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
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
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
   fscanf(fp,"%f", &x74); 

   fclose(fp);
   res=-(-(0.1*(16800*pow((0.001 + x155),0.7 )+ 9500*pow((0.001 + x156),0.7 )+ 12600*pow((0.001
 + x157),0.7)) + 8000*x155 + 320*x156 + 53.6*x157 + 0.1*(100*pow((0.001 + x75)
,0.6 )+ 100*pow((0.001 + x76),0.6 )+ 100*pow((0.001 + x77),0.6 )+ 100*pow((0.001 + x78
),0.6 )+ 100*pow((0.001 + x79),0.6 )+ 100*pow((0.001 + x80),0.6 )+ 100*pow((0.001 +
 x81),0.6 )+ 100*pow((0.001 + x82),0.6 )+ 100*pow((0.001 + x88),0.6 )+ 100*pow((0.001
 + x89),0.6 )+ 100*pow((0.001 + x90),0.6 )+ 100*pow((0.001 + x91),0.6 )+ 100*pow((
0.001 + x92),0.6 )+ 100*pow((0.001 + x93),0.6 )+ 100*pow((0.001 + x94),0.6 )+ 100*
pow((0.001 + x95),0.6 )+ 100*pow((0.001 + x96),0.6 )+ 100*pow((0.001 + x97),0.6 )+ 100
*pow((0.001 + x98),0.6 )+ 100*pow((0.001 + x99),0.6 )+ 100*pow((0.001 + x100),0.6 )+
 100*pow((0.001 + x101),0.6 )+ 100*pow((0.001 + x102),0.6 )+ 100*pow((0.001 + x103),
0.6 )+ 100*pow((0.001 + x104),0.6 )+ 100*pow((0.001 + x105),0.6 )+ 100*pow((0.001 +
 x106),0.6 )+ 100*pow((0.001 + x107),0.6 )+ 100*pow((0.001 + x108),0.6 )+ 100*pow((
0.001 + x109),0.6 )+ 100*pow((0.001 + x110),0.6 )+ 100*pow((0.001 + x111),0.6 )+
 100*pow((0.001 + x112),0.6 )+ 100*pow((0.001 + x113),0.6 )+ 100*pow((0.001 + x114),
0.6 )+ 100*pow((0.001 + x115),0.6 )+ 100*pow((0.001 + x116),0.6 )+ 100*pow((0.001 +
 x117),0.6 )+ 100*pow((0.001 + x118),0.6 )+ 100*pow((0.001 + x119),0.6 )+ 100*pow((
0.001 + x120),0.6 )+ 100*pow((0.001 + x121),0.6 )+ 100*pow((0.001 + x122),0.6 )+
 100*pow((0.001 + x123),0.6 )+ 100*pow((0.001 + x124),0.6 )+ 100*pow((0.001 + x125),
0.6 )+ 100*pow((0.001 + x126),0.6 )+ 100*pow((0.001 + x127),0.6 )+ 100*pow((0.001 +
 x128),0.6 )+ 100*pow((0.001 + x129),0.6 )+ 100*pow((0.001 + x130),0.6 )+ 100*pow((
0.001 + x131),0.6 )+ 100*pow((0.001 + x132),0.6 )+ 100*pow((0.001 + x133),0.6 )+
 100*pow((0.001 + x134),0.6 )+ 100*pow((0.001 + x135),0.6 )+ 100*pow((0.001 + x136),
0.6 )+ 100*pow((0.001 + x137),0.6 )+ 100*pow((0.001 + x138),0.6 )+ 100*pow((0.001 +
 x139),0.6 )+ 100*pow((0.001 + x140),0.6 )+ 100*pow((0.001 + x141),0.6 )+ 100*pow((
0.001 + x142),0.6 )+ 100*pow((0.001 + x149),0.6 )+ 100*pow((0.001 + x150),0.6 )+
 100*pow((0.001 + x151),0.6 )+ 100*pow((0.001 + x143),0.6 )+ 100*pow((0.001 + x144),
0.6 )+ 100*pow((0.001 + x145),0.6 )+ 100*pow((0.001 + x146),0.6 )+ 100*pow((0.001 +
 x147),0.6 )+ 100*pow((0.001 + x148),0.6)) + 48*x75 + 48*x76 + 48*x77 + 48*x78
 + 48*x79 + 48*x80 + 48*x81 + 48*x82 + 48*x88 + 48*x89 + 48*x90 + 48*x91
 + 48*x92 + 48*x93 + 48*x94 + 48*x95 + 48*x96 + 48*x97 + 48*x98 + 48*x99
 + 48*x100 + 48*x101 + 48*x102 + 48*x103 + 48*x104 + 48*x105 + 48*x106 +
 48*x107 + 48*x108 + 48*x109 + 48*x110 + 48*x111 + 48*x112 + 48*x113 + 48*
x114 + 48*x115 + 48*x116 + 48*x117 + 48*x118 + 48*x119 + 48*x120 + 48*x121
 + 48*x122 + 48*x123 + 48*x124 + 48*x125 + 48*x126 + 48*x127 + 48*x128 +
 48*x129 + 48*x130 + 48*x131 + 48*x132 + 48*x133 + 48*x134 + 48*x135 + 48*
x136 + 48*x137 + 48*x138 + 48*x139 + 48*x140 + 48*x141 + 48*x142 + 48*x143
 + 48*x144 + 48*x145 + 48*x146 + 48*x147 + 48*x148 + 48*x149 + 48*x150 +
 48*x151) - 0.6*b1 - 0.6*b2 - 0.6*b3 - 0.6*b4 - 0.6*b5 - 0.6*b6 - 0.6*b7
 - 0.6*b8 - 0.6*b9 - 0.6*b10 - 0.6*b11 - 0.6*b12 - 0.6*b13 - 0.6*b14
 - 0.6*b15 - 0.6*b16 - 0.6*b17 - 0.6*b18 - 0.6*b19 - 0.6*b20 - 0.6*b21
 - 0.6*b22 - 0.6*b23 - 0.6*b24 - 0.6*b25 - 0.6*b26 - 0.6*b27 - 0.6*b28
 - 0.6*b29 - 0.6*b30 - 0.6*b31 - 0.6*b32 - 0.6*b33 - 0.6*b34 - 0.6*b35
 - 0.6*b36 - 0.6*b37 - 0.6*b38 - 0.6*b39 - 0.6*b40 - 0.6*b41 - 0.6*b42
 - 0.6*b43 - 0.6*b44 - 0.6*b45 - 0.6*b46 - 0.6*b47 - 0.6*b48 - 0.6*b49
 - 0.6*b50 - 0.6*b51 - 0.6*b52 - 0.6*b53 - 0.6*b54 - 0.6*b55 - 0.6*b56
 - 0.6*b57 - 0.6*b58 - 0.6*b59 - 0.6*b60 - 0.6*b61 - 0.6*b62 - 0.6*b63
 - 0.6*b64 - 0.6*b65 - 0.6*b66 - 0.6*b67 - 0.6*b68 - 0.6*b69 - 0.6*b70
 - 0.6*b71 - 0.6*b72  - 8000*x74 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
