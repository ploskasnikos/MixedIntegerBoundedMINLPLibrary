#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="graphpart_3g-0444-0444";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b10,b4,b13,b37,b49,b145,b2,b5,b11,b14,b38,b50,b146,b3,b6,b12,b15,b39,b51,b147,b7,b16,b40,b52,b148,b8,b17,b41,b53,b149,b9,b18,b42,b54,b150,b19,b43,b55,b151,b20,b44,b56,b152,b21,b45,b57,b153,b22,b46,b58,b154,b23,b47,b59,b155,b24,b48,b60,b156,b25,b61,b157,b26,b62,b158,b27,b63,b159,b28,b64,b160,b29,b65,b161,b30,b66,b162,b31,b67,b163,b32,b68,b164,b33,b69,b165,b34,b70,b166,b35,b71,b167,b36,b72,b168,b73,b169,b74,b170,b75,b171,b76,b172,b77,b173,b78,b174,b79,b175,b80,b176,b81,b177,b82,b178,b83,b179,b84,b180,b85,b181,b86,b182,b87,b183,b88,b184,b89,b185,b90,b186,b91,b187,b92,b188,b93,b189,b94,b190,b95,b191,b96,b192,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b192); 
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

   fclose(fp);
   res= 66001*b1*b10 - 98417*b1*b4 + 120652*b1*b13 + 57159*b1*b37 - 32487*b1*b49
  + 53052*b1*b145 - 98417*b2*b5 + 66001*b2*b11 + 120652*b2*b14 + 57159*b2*
 b38 - 32487*b2*b50 + 53052*b2*b146 - 98417*b3*b6 + 66001*b3*b12 + 120652*
 b3*b15 + 57159*b3*b39 - 32487*b3*b51 + 53052*b3*b147 - 60453*b4*b7 -
  39384*b4*b16 - 11074*b4*b40 - 111697*b4*b52 + 25207*b4*b148 - 60453*b5*b8
  - 39384*b5*b17 - 11074*b5*b41 - 111697*b5*b53 + 25207*b5*b149 - 60453*b6
 *b9 - 39384*b6*b18 - 11074*b6*b42 - 111697*b6*b54 + 25207*b6*b150 -
  177822*b7*b10 + 28848*b7*b19 + 24866*b7*b43 + 149301*b7*b55 - 10288*b7*
 b151 - 177822*b8*b11 + 28848*b8*b20 + 24866*b8*b44 + 149301*b8*b56 -
  10288*b8*b152 - 177822*b9*b12 + 28848*b9*b21 + 24866*b9*b45 + 149301*b9*
 b57 - 10288*b9*b153 - 73711*b10*b22 - 257438*b10*b46 - 53779*b10*b58 -
  75949*b10*b154 - 73711*b11*b23 - 257438*b11*b47 - 53779*b11*b59 - 75949*
 b11*b155 - 73711*b12*b24 - 257438*b12*b48 - 53779*b12*b60 - 75949*b12*
 b156 - 15553*b13*b16 + 58384*b13*b22 + 119758*b13*b25 + 146126*b13*b61 -
  136368*b13*b157 - 15553*b14*b17 + 58384*b14*b23 + 119758*b14*b26 + 146126
 *b14*b62 - 136368*b14*b158 - 15553*b15*b18 + 58384*b15*b24 + 119758*b15*
 b27 + 146126*b15*b63 - 136368*b15*b159 + 79902*b16*b19 + 43015*b16*b28 -
  101587*b16*b64 - 6527*b16*b160 + 79902*b17*b20 + 43015*b17*b29 - 101587*
 b17*b65 - 6527*b17*b161 + 79902*b18*b21 + 43015*b18*b30 - 101587*b18*b66
  - 6527*b18*b162 - 179565*b19*b22 + 99803*b19*b31 - 128370*b19*b67 +
  74783*b19*b163 - 179565*b20*b23 + 99803*b20*b32 - 128370*b20*b68 + 74783*
 b20*b164 - 179565*b21*b24 + 99803*b21*b33 - 128370*b21*b69 + 74783*b21*
 b165 - 170972*b22*b34 - 34569*b22*b70 - 77131*b22*b166 - 170972*b23*b35
  - 34569*b23*b71 - 77131*b23*b167 - 170972*b24*b36 - 34569*b24*b72 -
  77131*b24*b168 - 40738*b25*b28 - 103362*b25*b34 - 22400*b25*b37 - 34794*
 b25*b73 + 175355*b25*b169 - 40738*b26*b29 - 103362*b26*b35 - 22400*b26*
 b38 - 34794*b26*b74 + 175355*b26*b170 - 40738*b27*b30 - 103362*b27*b36 -
  22400*b27*b39 - 34794*b27*b75 + 175355*b27*b171 + 178545*b28*b31 - 44649*
 b28*b40 + 306756*b28*b76 + 175429*b28*b172 + 178545*b29*b32 - 44649*b29*
 b41 + 306756*b29*b77 + 175429*b29*b173 + 178545*b30*b33 - 44649*b30*b42
  + 306756*b30*b78 + 175429*b30*b174 - 31957*b31*b34 - 10370*b31*b43 -
  123251*b31*b79 - 155018*b31*b175 - 31957*b32*b35 - 10370*b32*b44 - 123251
 *b32*b80 - 155018*b32*b176 - 31957*b33*b36 - 10370*b33*b45 - 123251*b33*
 b81 - 155018*b33*b177 + 25701*b34*b46 + 98283*b34*b82 + 10995*b34*b178 +
  25701*b35*b47 + 98283*b35*b83 + 10995*b35*b179 + 25701*b36*b48 + 98283*
 b36*b84 + 10995*b36*b180 + 6802*b37*b40 - 10028*b37*b46 + 5925*b37*b85 -
  59274*b37*b181 + 6802*b38*b41 - 10028*b38*b47 + 5925*b38*b86 - 59274*b38*
 b182 + 6802*b39*b42 - 10028*b39*b48 + 5925*b39*b87 - 59274*b39*b183 +
  239529*b40*b43 + 172990*b40*b88 + 66126*b40*b184 + 239529*b41*b44 +
  172990*b41*b89 + 66126*b41*b185 + 239529*b42*b45 + 172990*b42*b90 + 66126
 *b42*b186 - 210013*b43*b46 + 21530*b43*b91 - 263520*b43*b187 - 210013*b44
 *b47 + 21530*b44*b92 - 263520*b44*b188 - 210013*b45*b48 + 21530*b45*b93
  - 263520*b45*b189 - 161687*b46*b94 + 71160*b46*b190 - 161687*b47*b95 +
  71160*b47*b191 - 161687*b48*b96 + 71160*b48*b192 + 518*b49*b52 - 199442*
 b49*b58 - 85329*b49*b61 + 249503*b49*b85 + 21544*b49*b97 + 518*b50*b53 -
  199442*b50*b59 - 85329*b50*b62 + 249503*b50*b86 + 21544*b50*b98 + 518*b51
 *b54 - 199442*b51*b60 - 85329*b51*b63 + 249503*b51*b87 + 21544*b51*b99 +
  3516*b52*b55 - 123113*b52*b64 - 129423*b52*b88 + 27293*b52*b100 + 3516*
 b53*b56 - 123113*b53*b65 - 129423*b53*b89 + 27293*b53*b101 + 3516*b54*b57
  - 123113*b54*b66 - 129423*b54*b90 + 27293*b54*b102 + 7210*b55*b58 +
  57520*b55*b67 + 16931*b55*b91 + 4095*b55*b103 + 7210*b56*b59 + 57520*b56*
 b68 + 16931*b56*b92 + 4095*b56*b104 + 7210*b57*b60 + 57520*b57*b69 +
  16931*b57*b93 + 4095*b57*b105 - 213217*b58*b70 + 5736*b58*b94 + 69132*b58
 *b106 - 213217*b59*b71 + 5736*b59*b95 + 69132*b59*b107 - 213217*b60*b72
  + 5736*b60*b96 + 69132*b60*b108 - 7205*b61*b64 - 71813*b61*b70 - 48799*
 b61*b73 + 80120*b61*b109 - 7205*b62*b65 - 71813*b62*b71 - 48799*b62*b74
  + 80120*b62*b110 - 7205*b63*b66 - 71813*b63*b72 - 48799*b63*b75 + 80120*
 b63*b111 - 35730*b64*b67 - 145007*b64*b76 - 20447*b64*b112 - 35730*b65*
 b68 - 145007*b65*b77 - 20447*b65*b113 - 35730*b66*b69 - 145007*b66*b78 -
  20447*b66*b114 - 35840*b67*b70 - 106982*b67*b79 - 50522*b67*b115 - 35840*
 b68*b71 - 106982*b68*b80 - 50522*b68*b116 - 35840*b69*b72 - 106982*b69*
 b81 - 50522*b69*b117 - 59739*b70*b82 + 199401*b70*b118 - 59739*b71*b83 +
  199401*b71*b119 - 59739*b72*b84 + 199401*b72*b120 - 32739*b73*b76 + 57198
 *b73*b82 + 53863*b73*b85 - 19814*b73*b121 - 32739*b74*b77 + 57198*b74*b83
  + 53863*b74*b86 - 19814*b74*b122 - 32739*b75*b78 + 57198*b75*b84 + 53863
 *b75*b87 - 19814*b75*b123 - 33479*b76*b79 + 44396*b76*b88 - 123350*b76*
 b124 - 33479*b77*b80 + 44396*b77*b89 - 123350*b77*b125 - 33479*b78*b81 +
  44396*b78*b90 - 123350*b78*b126 - 159143*b79*b82 - 3415*b79*b91 - 10639*
 b79*b127 - 159143*b80*b83 - 3415*b80*b92 - 10639*b80*b128 - 159143*b81*
 b84 - 3415*b81*b93 - 10639*b81*b129 - 66393*b82*b94 - 211055*b82*b130 -
  66393*b83*b95 - 211055*b83*b131 - 66393*b84*b96 - 211055*b84*b132 - 46127
 *b85*b88 - 38270*b85*b94 - 118666*b85*b133 - 46127*b86*b89 - 38270*b86*
 b95 - 118666*b86*b134 - 46127*b87*b90 - 38270*b87*b96 - 118666*b87*b135
  + 87214*b88*b91 - 87308*b88*b136 + 87214*b89*b92 - 87308*b89*b137 +
  87214*b90*b93 - 87308*b90*b138 - 142766*b91*b94 + 358*b91*b139 - 142766*
 b92*b95 + 358*b92*b140 - 142766*b93*b96 + 358*b93*b141 - 18589*b94*b142
  - 18589*b95*b143 - 18589*b96*b144 - 60620*b97*b100 - 6182*b97*b106 -
  55818*b97*b109 + 45445*b97*b133 + 66153*b97*b145 - 60620*b98*b101 - 6182*
 b98*b107 - 55818*b98*b110 + 45445*b98*b134 + 66153*b98*b146 - 60620*b99*
 b102 - 6182*b99*b108 - 55818*b99*b111 + 45445*b99*b135 + 66153*b99*b147
  - 118726*b100*b103 + 65347*b100*b112 + 145409*b100*b136 + 43018*b100*
 b148 - 118726*b101*b104 + 65347*b101*b113 + 145409*b101*b137 + 43018*b101
 *b149 - 118726*b102*b105 + 65347*b102*b114 + 145409*b102*b138 + 43018*
 b102*b150 - 107024*b103*b106 - 134486*b103*b115 + 157746*b103*b139 -
  32135*b103*b151 - 107024*b104*b107 - 134486*b104*b116 + 157746*b104*b140
  - 32135*b104*b152 - 107024*b105*b108 - 134486*b105*b117 + 157746*b105*
 b141 - 32135*b105*b153 + 217460*b106*b118 - 168382*b106*b142 - 145081*
 b106*b154 + 217460*b107*b119 - 168382*b107*b143 - 145081*b107*b155 +
  217460*b108*b120 - 168382*b108*b144 - 145081*b108*b156 - 200801*b109*b112
  + 11955*b109*b118 - 37270*b109*b121 + 57154*b109*b157 - 200801*b110*b113
  + 11955*b110*b119 - 37270*b110*b122 + 57154*b110*b158 - 200801*b111*b114
  + 11955*b111*b120 - 37270*b111*b123 + 57154*b111*b159 + 10401*b112*b115
  - 26462*b112*b124 - 142806*b112*b160 + 10401*b113*b116 - 26462*b113*b125
  - 142806*b113*b161 + 10401*b114*b117 - 26462*b114*b126 - 142806*b114*
 b162 + 220165*b115*b118 - 121903*b115*b127 + 26088*b115*b163 + 220165*
 b116*b119 - 121903*b116*b128 + 26088*b116*b164 + 220165*b117*b120 -
  121903*b117*b129 + 26088*b117*b165 - 35760*b118*b130 - 152879*b118*b166
  - 35760*b119*b131 - 152879*b119*b167 - 35760*b120*b132 - 152879*b120*
 b168 + 18941*b121*b124 + 44031*b121*b130 + 42768*b121*b133 + 114432*b121*
 b169 + 18941*b122*b125 + 44031*b122*b131 + 42768*b122*b134 + 114432*b122*
 b170 + 18941*b123*b126 + 44031*b123*b132 + 42768*b123*b135 + 114432*b123*
 b171 - 91520*b124*b127 + 78481*b124*b136 + 92873*b124*b172 - 91520*b125*
 b128 + 78481*b125*b137 + 92873*b125*b173 - 91520*b126*b129 + 78481*b126*
 b138 + 92873*b126*b174 - 8014*b127*b130 - 167760*b127*b139 + 176922*b127*
 b175 - 8014*b128*b131 - 167760*b128*b140 + 176922*b128*b176 - 8014*b129*
 b132 - 167760*b129*b141 + 176922*b129*b177 + 135461*b130*b142 + 197916*
 b130*b178 + 135461*b131*b143 + 197916*b131*b179 + 135461*b132*b144 +
  197916*b132*b180 - 57916*b133*b136 - 15708*b133*b142 + 65118*b133*b181 -
  57916*b134*b137 - 15708*b134*b143 + 65118*b134*b182 - 57916*b135*b138 -
  15708*b135*b144 + 65118*b135*b183 - 12970*b136*b139 + 160862*b136*b184 -
  12970*b137*b140 + 160862*b137*b185 - 12970*b138*b141 + 160862*b138*b186
  + 3757*b139*b142 - 153795*b139*b187 + 3757*b140*b143 - 153795*b140*b188
  + 3757*b141*b144 - 153795*b141*b189 - 138372*b142*b190 - 138372*b143*
 b191 - 138372*b144*b192 + 70330*b145*b148 + 117426*b145*b154 - 814*b145*
 b157 - 95897*b145*b181 + 70330*b146*b149 + 117426*b146*b155 - 814*b146*
 b158 - 95897*b146*b182 + 70330*b147*b150 + 117426*b147*b156 - 814*b147*
 b159 - 95897*b147*b183 - 52404*b148*b151 - 15513*b148*b160 - 76326*b148*
 b184 - 52404*b149*b152 - 15513*b149*b161 - 76326*b149*b185 - 52404*b150*
 b153 - 15513*b150*b162 - 76326*b150*b186 + 49257*b151*b154 - 47833*b151*
 b163 + 109660*b151*b187 + 49257*b152*b155 - 47833*b152*b164 + 109660*b152
 *b188 + 49257*b153*b156 - 47833*b153*b165 + 109660*b153*b189 - 92699*b154
 *b166 - 117166*b154*b190 - 92699*b155*b167 - 117166*b155*b191 - 92699*
 b156*b168 - 117166*b156*b192 - 147014*b157*b160 - 10849*b157*b166 - 73902
 *b157*b169 - 147014*b158*b161 - 10849*b158*b167 - 73902*b158*b170 -
  147014*b159*b162 - 10849*b159*b168 - 73902*b159*b171 + 60835*b160*b163 -
  210805*b160*b172 + 60835*b161*b164 - 210805*b161*b173 + 60835*b162*b165
  - 210805*b162*b174 - 232629*b163*b166 - 82260*b163*b175 - 232629*b164*
 b167 - 82260*b164*b176 - 232629*b165*b168 - 82260*b165*b177 + 182737*b166
 *b178 + 182737*b167*b179 + 182737*b168*b180 + 159594*b169*b172 - 16941*
 b169*b178 + 43367*b169*b181 + 159594*b170*b173 - 16941*b170*b179 + 43367*
 b170*b182 + 159594*b171*b174 - 16941*b171*b180 + 43367*b171*b183 + 42222*
 b172*b175 - 112735*b172*b184 + 42222*b173*b176 - 112735*b173*b185 + 42222
 *b174*b177 - 112735*b174*b186 + 98331*b175*b178 + 103757*b175*b187 +
  98331*b176*b179 + 103757*b176*b188 + 98331*b177*b180 + 103757*b177*b189
  - 116766*b178*b190 - 116766*b179*b191 - 116766*b180*b192 - 81425*b181*
 b184 + 96345*b181*b190 - 81425*b182*b185 + 96345*b182*b191 - 81425*b183*
 b186 + 96345*b183*b192 - 100988*b184*b187 - 100988*b185*b188 - 100988*
 b186*b189 + 98051*b187*b190 + 98051*b188*b191 + 98051*b189*b192 
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
