#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pedigree_sp_top4_350tr";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216,b217,b218,b219,b220,b221,b222,b223,b224,b225,b226,b227,b228,b229,b230,b231,b232,b233,b234,b235,b236,b237,b238,b239,b240,b241,b242,b243,b244,b245,b246,b247,b248,b249,b250,b251,b252,b253,b254,b255,b256,b257,b258,b259,b260,b261,b262,b263;
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
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b263); 

   fclose(fp);
   res=-( + 137.73*b2 + 196.73*b3 + 120.22*b4 + 417.92*b5 + 200.82*b6
 + 162.5*b7 + 162.65*b8 + 179.47*b9 + 235.64*b10 + 183.97*b11 + 257.31*b12
 + 302.88*b13 + 156.75*b14 + 405.16*b15 + 245.93*b16 + 171.4*b17
 + 155.66*b18 + 246.71*b19 + 257.51*b20 + 223.53*b21 + 332.82*b22
 + 130.27*b23 + 219.72*b24 + 507.81*b25 + 371.17*b26 + 214.33*b27
 + 110.83*b28 + 355.55*b29 + 368.04*b30 + 362.49*b31 + 376.86*b32
 + 439.44*b33 + 432.17*b34 + 382.38*b35 + 374.59*b36 + 398.36*b37
 + 403.09*b38 + 395.46*b39 + 432.48*b40 + 358.69*b41 + 443.01*b42
 + 445.6*b43 + 364.21*b44 + 371.06*b45 + 390.72*b46 + 361.58*b47
 + 350.56*b48 + 260.95*b49 + 301.08*b50 + 274.02*b51 + 118.98*b52
 + 167.55*b53 + 309.6*b54 + 352.25*b55 + 353.73*b56 + 409.07*b57
 + 413.63*b58 + 383.68*b59 + 672.57*b60 + 324.99*b61 + 336.74*b62
 + 369.55*b63 + 153.47*b64 + 381.53*b65 + 379.6*b66 + 424.5*b67
 + 320.94*b68 + 225.01*b69 + 308.72*b70 + 176.27*b71 + 194.23*b72
 + 488.5*b73 + 184.42*b74 + 370.78*b75 + 247.86*b76 + 401.86*b77
 + 388.77*b78 + 392.21*b79 + 444.24*b80 + 356.9*b81 + 352.21*b82
 + 418.93*b83 + 375.07*b84 + 549.94*b85 + 584.09*b86 + 559.85*b87
 + 394.59*b88 + 400.81*b89 + 361.27*b90 + 398.91*b91 + 579.44*b92
 + 601.26*b93 + 610.33*b94 + 619.24*b95 + 481.14*b96 + 444.94*b97
 + 405.95*b98 + 580.08*b99 + 496.41*b100 + 483.82*b101 + 351.69*b102
 + 394.77*b103 + 492.52*b104 + 431.92*b105 + 374.78*b106 + 425.05*b107
 + 360.37*b108 + 436.09*b109 + 509.49*b110 + 465.05*b111 + 489.03*b112
 + 474.72*b113 + 422.27*b114 + 359.53*b115 + 364.99*b116 + 365.7*b117
 + 395.1*b118 + 428.05*b119 + 448.53*b120 + 397.36*b121 + 490.62*b122
 + 379.48*b123 + 364.16*b124 + 488.32*b125 + 453.77*b126 + 354.55*b127
 + 373.12*b128 + 474.1*b129 + 662.23*b130 + 492.63*b131 + 372.08*b132
 + 407.31*b133 + 459.43*b134 + 441.57*b135 + 479.99*b136 + 400.74*b137
 + 432.39*b138 + 475.03*b139 + 478.79*b140 + 383.92*b141 + 379.05*b142
 + 423.72*b143 + 351.91*b144 + 495.72*b145 + 484.77*b146 + 456.88*b147
 + 364.05*b148 + 391.49*b149 + 476.88*b150 + 372.95*b151 + 372.68*b152
 + 364.23*b153 + 398.84*b154 + 379.81*b155 + 491.59*b156 + 368.84*b157
 + 488.66*b158 + 403.8*b159 + 456.84*b160 + 396.26*b161 + 366.13*b162
 + 366.93*b163 + 454.67*b164 + 492.69*b165 + 380.62*b166 + 361.14*b167
 + 400.94*b168 + 431.67*b169 + 485.82*b170 + 377.12*b171 + 513.12*b172
 + 442.11*b173 + 376.98*b174 + 437.34*b175 + 503.56*b176 + 437.4*b177
 + 499.5*b178 + 358.66*b179 + 436.24*b180 + 665.54*b181 + 408.61*b182
 + 427.48*b183 + 363.95*b184 + 431.52*b185 + 392.5*b186 + 382.22*b187
 + 382.61*b188 + 412.39*b189 + 403.39*b190 + 494.89*b191 + 372.98*b192
 + 690.72*b193 + 381.65*b194 + 432.01*b195 + 374.54*b196 + 416.54*b197
 + 478.42*b198 + 419.81*b199 + 362.02*b200 + 432.8*b201 + 451.98*b202
 + 671.27*b203 + 456.3*b204 + 458.44*b205 + 472.43*b206 + 355.62*b207
 + 446.1*b208 + 379.63*b209 + 351.32*b210 + 397.86*b211 + 410.62*b212
 + 406.71*b213 + 401.51*b214 + 362.93*b215 + 451.24*b216 + 371.67*b217
 + 371.63*b218 + 479.78*b219 + 484.64*b220 + 389.16*b221 + 407.79*b222
 + 402.71*b223 + 502.19*b224 + 479.58*b225 + 451.75*b226 + 397.92*b227
 + 402.02*b228 + 407.95*b229 + 376.75*b230 + 356.23*b231 + 374.55*b232
 + 367.01*b233 + 402.29*b234 + 382.65*b235 + 370.96*b236 + 398.59*b237
 + 378.73*b238 + 388.04*b239 + 406.7*b240 + 385.06*b241 + 373.67*b242
 + 417.14*b243 + 350.65*b244 + 355.05*b245 + 370.75*b246 + 402.75*b247
 + 391.06*b248 + 385.86*b249 + 392.96*b250 + 358.2*b251 + 370.73*b252
 + 393.31*b253 + 397.72*b254 + 394.57*b255 + 350.1*b256 + 372.91*b257
 + 411.47*b258 + 364.02*b259 + 363.57*b260 + 402.76*b261 + 399.96*b262
 + 389.3*b263 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
