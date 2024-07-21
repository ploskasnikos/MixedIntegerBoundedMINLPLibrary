#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sonet25v5";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216,b217,b218,b219,b220,b221,b222,b223,b224,b225,b226,b227,b228,b229,b230,b231,b232,b233,b234,b235,b236,b237,b238,b239,b240,b241,b242,b243,b244,b245,b246,b247,b248,b249,b250,b251,b252,b253,b254,b255,b256,b257,b258,b259,b260,b261,b262,b263,b264,b265,b266,b267,b268,b269,b270,b271,b272,b273,b274,b275,b276,b277,b278,b279,b280,b281,b282,b283,b284,b285,b286,b287,b288,b289,b290,b291,b292,b293,b294,b295,b296;
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
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b278); 
   fscanf(fp,"%f", &b279); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b286); 
   fscanf(fp,"%f", &b287); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b294); 
   fscanf(fp,"%f", &b295); 
   fscanf(fp,"%f", &b296); 

   fclose(fp);
   res= + 12040*b2 + 57536*b3 + 3648*b4 + 52560*b5 + 2856*b6 + 21120*b7
 + 8448*b8 + 22704*b9 + 34768*b10 + 2720*b11 + 90720*b12 + 34160*b13
 + 5200*b14 + 83072*b15 + 80696*b16 + 24752*b17 + 1280*b18 + 83312*b19
 + 50032*b20 + 12688*b21 + 34720*b22 + 144*b23 + 61912*b24 + 4816*b25
 + 57424*b26 + 9184*b27 + 864*b28 + 10512*b29 + 56672*b30 + 29920*b31
 + 38688*b32 + 78648*b33 + 18768*b34 + 1280*b35 + 9472*b36 + 43680*b37
 + 5824*b38 + 44280*b39 + 10560*b40 + 32696*b41 + 1904*b42 + 3696*b43
 + 84888*b44 + 57344*b45 + 38048*b46 + 18560*b47 + 40768*b48 + 39456*b49
 + 11776*b50 + 480*b51 + 23312*b52 + 36720*b53 + 16464*b54 + 56440*b55
 + 70656*b56 + 56000*b57 + 15520*b58 + 34800*b59 + 16000*b60 + 2400*b61
 + 83312*b62 + 6880*b63 + 51480*b64 + 2816*b65 + 1664*b66 + 67872*b67
 + 52528*b68 + 31536*b69 + 1296*b70 + 42008*b71 + 21056*b72 + 32536*b73
 + 42400*b74 + 73600*b75 + 23800*b76 + 59040*b77 + 109760*b78 + 40328*b79
 + 64408*b80 + 38016*b81 + 32336*b82 + 78320*b83 + 7560*b84 + 73840*b85
 + 1280*b86 + 50176*b87 + 3640*b88 + 50224*b89 + 21120*b90 + 47080*b91
 + 20320*b92 + 7360*b93 + 1232*b94 + 39520*b95 + 49184*b96 + 36400*b97
 + 35400*b98 + 29568*b99 + 74880*b100 + 40256*b101 + 24832*b102
 + 1568*b103 + 18096*b104 + 31232*b105 + 6440*b106 + 65120*b107
 + 61776*b108 + 48256*b109 + 85360*b110 + 12104*b111 + 3936*b112
 + 4648*b113 + 34760*b114 + 1560*b115 + 3584*b116 + 49840*b117
 + 48416*b118 + 53312*b119 + 15336*b120 + 760*b121 + 1200*b122
 + 13440*b123 + 12792*b124 + 24320*b125 + 36920*b126 + 45248*b127
 + 40800*b128 + 13600*b129 + 1792*b130 + 7400*b131 + 35360*b132
 + 78648*b133 + 24576*b134 + 92512*b135 + 29704*b136 + 6800*b137
 + 1520*b138 + 14592*b139 + 48768*b140 + 42112*b141 + 336*b142
 + 15128*b143 + 22000*b144 + 8160*b145 + 37392*b146 + 13080*b147 + 32*b148
 + 86152*b149 + 21808*b150 + 14280*b151 + 55480*b152 + 3008*b153
 + 10560*b154 + 3008*b155 + 24992*b156 + 87120*b157 + 38912*b158
 + 42032*b159 + 568*b160 + 29920*b161 + 2208*b162 + 36864*b163
 + 83000*b164 + 56320*b165 + 26384*b166 + 12720*b167 + 30264*b168
 + 41808*b169 + 4368*b170 + 696*b171 + 81184*b172 + 7680*b173 + 34160*b174
 + 616*b175 + 58400*b176 + 8064*b177 + 71760*b178 + 17400*b179
 + 32800*b180 + 41464*b181 + 43392*b182 + 1800*b183 + 11248*b184
 + 52480*b185 + 5200*b186 + 33120*b187 + 10560*b188 + 22344*b189
 + 5984*b190 + 10880*b191 + 75400*b192 + 44064*b193 + 9520*b194
 + 81696*b195 + 18696*b196 + 15272*b197 + 10560*b198 + 79872*b199
 + 20240*b200 + 17424*b201 + 19312*b202 + 38512*b203 + 1760*b204
 + 28336*b205 + 38080*b206 + 32536*b207 + 22848*b208 + 75032*b209
 + 15576*b210 + 15680*b211 + 992*b212 + 34080*b213 + 63480*b214
 + 43160*b215 + 33880*b216 + 7744*b217 + 40768*b218 + 13888*b219
 + 85120*b220 + 61880*b221 + 15184*b222 + 62464*b223 + 47080*b224
 + 29200*b225 + 83000*b226 + 14304*b227 + 6208*b228 + 110960*b229
 + 50264*b230 + 15376*b231 + 35720*b232 + 76760*b233 + 24816*b234
 + 17664*b235 + 79608*b236 + 78736*b237 + 33280*b238 + 42560*b239
 + 43320*b240 + 94520*b241 + 24992*b242 + 8960*b243 + 15600*b244
 + 27520*b245 + 51040*b246 + 448*b247 + 736*b248 + 39872*b249 + 4720*b250
 + 1440*b251 + 9512*b252 + 8632*b253 + 104272*b254 + 25480*b255
 + 5504*b256 + 9240*b257 + 14768*b258 + 17664*b259 + 24416*b260
 + 13024*b261 + 78600*b262 + 8800*b263 + 36960*b264 + 4576*b265
 + 3752*b266 + 16640*b267 + 36096*b268 + 24568*b269 + 29008*b270
 + 6800*b271 + 3960*b272 + 33128*b273 + 1120*b274 + 110880*b275
 + 41040*b276 + 5928*b277 + 5056*b278 + 41984*b279 + 72944*b280 + 296*b281
 + 8272*b282 + 2464*b283 + 11600*b284 + 6848*b285 + 26488*b286
 + 10240*b287 + 41888*b288 + 36024*b289 + 85680*b290 + 3944*b291
 + 41480*b292 + 9728*b293 + 32336*b294 + 47304*b295 + 6656*b296 ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
