#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sonet20v6";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b190); 

   fclose(fp);
   res= + 13630*b2 + 40300*b3 + 24000*b4 + 87750*b5 + 2530*b6 + 46400*b7
 + 113680*b8 + 15390*b9 + 16350*b10 + 12740*b11 + 129030*b12 + 70680*b13
 + 12180*b14 + 73790*b15 + 66500*b16 + 7260*b17 + 54570*b18 + 94640*b19
 + 50240*b20 + 63990*b21 + 69750*b22 + 390*b23 + 37700*b24 + 1140*b25
 + 93060*b26 + 14440*b27 + 1650*b28 + 156000*b29 + 59740*b30 + 30940*b31
 + 16600*b32 + 132880*b33 + 27000*b34 + 18190*b35 + 41650*b36 + 122830*b37
 + 66930*b38 + 136950*b39 + 28710*b40 + 51840*b41 + 154230*b42 + 10200*b43
 + 71750*b44 + 93870*b45 + 51590*b46 + 16430*b47 + 14490*b48 + 129930*b49
 + 18480*b50 + 14310*b51 + 31500*b52 + 71190*b53 + 120520*b54 + 32190*b55
 + 30780*b56 + 114380*b57 + 73530*b58 + 56210*b59 + 5940*b60 + 4950*b61
 + 99710*b62 + 44460*b63 + 2610*b64 + 22040*b65 + 1680*b66 + 118800*b67
 + 38270*b68 + 111150*b69 + 690*b70 + 111860*b71 + 15750*b72 + 46800*b73
 + 18620*b74 + 21420*b75 + 11310*b76 + 37290*b77 + 50140*b78 + 14960*b79
 + 3800*b80 + 43860*b81 + 71920*b82 + 34650*b83 + 72030*b84 + 2820*b85
 + 62280*b86 + 14070*b87 + 38250*b88 + 6510*b89 + 90210*b90 + 73080*b91
 + 11440*b92 + 87880*b93 + 16740*b94 + 18560*b95 + 20880*b96 + 21700*b97
 + 2680*b98 + 15010*b99 + 105790*b100 + 48440*b101 + 25610*b102
 + 58050*b103 + 19240*b104 + 27650*b105 + 8910*b106 + 61200*b107
 + 17640*b108 + 108870*b109 + 66720*b110 + 24990*b111 + 9890*b112
 + 34100*b113 + 2160*b114 + 32850*b115 + 1470*b116 + 51000*b117
 + 11160*b118 + 60060*b119 + 48230*b120 + 4750*b121 + 5670*b122
 + 20130*b123 + 6300*b124 + 32560*b125 + 127050*b126 + 18020*b127
 + 1900*b128 + 110700*b129 + 70490*b130 + 11700*b131 + 6820*b132
 + 5940*b133 + 122830*b134 + 21140*b135 + 165870*b136 + 128740*b137
 + 56700*b138 + 2070*b139 + 46920*b140 + 23650*b141 + 131820*b142
 + 65250*b143 + 2070*b144 + 1620*b145 + 47040*b146 + 47460*b147
 + 23100*b148 + 65250*b149 + 1800*b150 + 107870*b151 + 780*b152
 + 47460*b153 + 78570*b154 + 3200*b155 + 43460*b156 + 36540*b157
 + 56840*b158 + 52920*b159 + 92920*b160 + 2850*b161 + 58900*b162
 + 61020*b163 + 6510*b164 + 145350*b165 + 115230*b166 + 74900*b167
 + 25800*b168 + 53250*b169 + 103200*b170 + 21480*b171 + 15580*b172
 + 100*b173 + 155430*b174 + 840*b175 + 10530*b176 + 7560*b177
 + 130340*b178 + 40230*b179 + 123930*b180 + 23010*b181 + 51230*b182
 + 78850*b183 + 80030*b184 + 5600*b185 + 37450*b186 + 155700*b187
 + 59780*b188 + 37630*b189 + 146910*b190 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
