#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sonet22v4";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216,b217,b218,b219,b220,b221,b222,b223,b224,b225,b226,b227,b228,b229,b230;
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
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b230); 

   fclose(fp);
   res= + 9180*b2 + 18634.5*b3 + 4536*b4 + 38290.5*b5 + 2092.5*b6
 + 3591*b7 + 24282*b8 + 14652*b9 + 16933.5*b10 + 13275*b11 + 34303.5*b12
 + 24840*b13 + 7308*b14 + 8262*b15 + 44118*b16 + 20263.5*b17 + 22666.5*b18
 + 8910*b19 + 6885*b20 + 14071.5*b21 + 10530*b22 + 13.5*b23 + 8037*b24
 + 1332*b25 + 25344*b26 + 2322*b27 + 513*b28 + 13144.5*b29 + 28341*b30
 + 5575.5*b31 + 17496*b32 + 6174*b33 + 1827*b34 + 27013.5*b35 + 4752*b36
 + 23184*b37 + 1620*b38 + 1926*b39 + 2907*b40 + 14787*b41 + 25492.5*b42
 + 2205*b43 + 3078*b44 + 15714*b45 + 15075*b46 + 6885*b47 + 18832.5*b48
 + 49801.5*b49 + 3969*b50 + 612*b51 + 9594*b52 + 17739*b53 + 24480*b54
 + 7776*b55 + 6993*b56 + 1548*b57 + 7182*b58 + 15975*b59 + 2646*b60
 + 1228.5*b61 + 22275*b62 + 17550*b63 + 19908*b64 + 3762*b65 + 2520*b66
 + 4752*b67 + 14877*b68 + 27432*b69 + 153*b70 + 14899.5*b71 + 13671*b72
 + 4536*b73 + 17415*b74 + 9355.5*b75 + 2160*b76 + 3942*b77 + 21087*b78
 + 28858.5*b79 + 1395*b80 + 30618*b81 + 20862*b82 + 1845*b83 + 37620*b84
 + 10395*b85 + 17136*b86 + 126*b87 + 20295*b88 + 954*b89 + 7371*b90
 + 21204*b91 + 7533*b92 + 35145*b93 + 1260*b94 + 8293.5*b95 + 20664*b96
 + 24543*b97 + 1741.5*b98 + 21114*b99 + 24007.5*b100 + 39312*b101
 + 50112*b102 + 26082*b103 + 216*b104 + 3312*b105 + 10017*b106 + 6237*b107
 + 19237.5*b108 + 33480*b109 + 27135*b110 + 855*b111 + 2835*b112
 + 13122*b113 + 1728*b114 + 17343*b115 + 1044*b116 + 24255*b117
 + 9720*b118 + 24426*b119 + 796.5*b120 + 17298*b121 + 972*b122
 + 1984.5*b123 + 15682.5*b124 + 7452*b125 + 33705*b126 + 3060*b127
 + 20925*b128 + 31680*b129 + 4644*b130 + 10701*b131 + 315*b132
 + 9355.5*b133 + 2016*b134 + 5733*b135 + 41958*b136 + 44982*b137
 + 8262*b138 + 5467.5*b139 + 8761.5*b140 + 5922*b141 + 41085*b142
 + 11686.5*b143 + 720*b144 + 14962.5*b145 + 29565*b146 + 47187*b147
 + 30033*b148 + 747*b149 + 25515*b150 + 9675*b151 + 29236.5*b152
 + 7654.5*b153 + 958.5*b154 + 1530*b155 + 18081*b156 + 15561*b157
 + 36765*b158 + 8910*b159 + 15345*b160 + 5580*b161 + 13140*b162 + 630*b163
 + 37962*b164 + 25758*b165 + 28255.5*b166 + 28350*b167 + 6831*b168
 + 27216*b169 + 17748*b170 + 1728*b171 + 31.5*b172 + 39933*b173
 + 4032*b174 + 1669.5*b175 + 1998*b176 + 20898*b177 + 25317*b178
 + 43213.5*b179 + 10012.5*b180 + 3834*b181 + 23157*b182 + 34839*b183
 + 702*b184 + 2016*b185 + 27634.5*b186 + 44856*b187 + 17640*b188
 + 4131*b189 + 9832.5*b190 + 1026*b191 + 33750*b192 + 3451.5*b193
 + 5130*b194 + 30712.5*b195 + 32256*b196 + 8262*b197 + 4500*b198
 + 2394*b199 + 14985*b200 + 15147*b201 + 7438.5*b202 + 6696*b203
 + 22050*b204 + 1692*b205 + 15075*b206 + 1642.5*b207 + 10773*b208
 + 22248*b209 + 41454*b210 + 4819.5*b211 + 4743*b212 + 337.5*b213
 + 6642*b214 + 16929*b215 + 4860*b216 + 945*b217 + 30438*b218 + 19035*b219
 + 2551.5*b220 + 49162.5*b221 + 33417*b222 + 3415.5*b223 + 3996*b224
 + 29713.5*b225 + 56578.5*b226 + 31104*b227 + 42957*b228 + 378*b229
 + 25146*b230 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
