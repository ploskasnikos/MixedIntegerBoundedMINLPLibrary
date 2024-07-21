#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn40m03m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x20,x21,x22,x35,x36,x37,x86,x87,x88,x89,x90,x91,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x155,x156,x157,x170,x171,x172,x221,x222,x223,x224,x225,x226,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,b392,b393,b394,b395,b396,b397,b398,b399,b400,b401,b402,b403,b404,b405,b406,b407,b408,b409,b410,b411,b412,b413,b414,b415,b416,b417,b418,b419,b420,b421,b422,b423,b424,b425,b426,b427,b428,b429,b430,b431,b432,b433,b434,b435,b436,b437,b438,b439,b440,b441,b442,b443,b444,b445,b446,b447,b448,b449,b450,b451,b452,b453,b454,b455,b456,b457,b458,b459,b460,b461,b462,b463,b464,b465,b466,b467,b468,b469,b470,b471,b472,b473,b474,b475,b476,b477,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b490,b491,b492,b493,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b506,b507,b508,b509,b510,b511;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
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
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x222); 
   fscanf(fp,"%f", &x223); 
   fscanf(fp,"%f", &x224); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &b392); 
   fscanf(fp,"%f", &b393); 
   fscanf(fp,"%f", &b394); 
   fscanf(fp,"%f", &b395); 
   fscanf(fp,"%f", &b396); 
   fscanf(fp,"%f", &b397); 
   fscanf(fp,"%f", &b398); 
   fscanf(fp,"%f", &b399); 
   fscanf(fp,"%f", &b400); 
   fscanf(fp,"%f", &b401); 
   fscanf(fp,"%f", &b402); 
   fscanf(fp,"%f", &b403); 
   fscanf(fp,"%f", &b404); 
   fscanf(fp,"%f", &b405); 
   fscanf(fp,"%f", &b406); 
   fscanf(fp,"%f", &b407); 
   fscanf(fp,"%f", &b408); 
   fscanf(fp,"%f", &b409); 
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
   fscanf(fp,"%f", &b455); 
   fscanf(fp,"%f", &b456); 
   fscanf(fp,"%f", &b457); 
   fscanf(fp,"%f", &b458); 
   fscanf(fp,"%f", &b459); 
   fscanf(fp,"%f", &b460); 
   fscanf(fp,"%f", &b461); 
   fscanf(fp,"%f", &b462); 
   fscanf(fp,"%f", &b463); 
   fscanf(fp,"%f", &b464); 
   fscanf(fp,"%f", &b465); 
   fscanf(fp,"%f", &b466); 
   fscanf(fp,"%f", &b467); 
   fscanf(fp,"%f", &b468); 
   fscanf(fp,"%f", &b469); 
   fscanf(fp,"%f", &b470); 
   fscanf(fp,"%f", &b471); 
   fscanf(fp,"%f", &b472); 
   fscanf(fp,"%f", &b473); 
   fscanf(fp,"%f", &b474); 
   fscanf(fp,"%f", &b475); 
   fscanf(fp,"%f", &b476); 
   fscanf(fp,"%f", &b477); 
   fscanf(fp,"%f", &b478); 
   fscanf(fp,"%f", &b479); 
   fscanf(fp,"%f", &b480); 
   fscanf(fp,"%f", &b481); 
   fscanf(fp,"%f", &b482); 
   fscanf(fp,"%f", &b483); 
   fscanf(fp,"%f", &b484); 
   fscanf(fp,"%f", &b485); 
   fscanf(fp,"%f", &b486); 
   fscanf(fp,"%f", &b487); 
   fscanf(fp,"%f", &b488); 
   fscanf(fp,"%f", &b489); 
   fscanf(fp,"%f", &b490); 
   fscanf(fp,"%f", &b491); 
   fscanf(fp,"%f", &b492); 
   fscanf(fp,"%f", &b493); 
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b495); 
   fscanf(fp,"%f", &b496); 
   fscanf(fp,"%f", &b497); 
   fscanf(fp,"%f", &b498); 
   fscanf(fp,"%f", &b499); 
   fscanf(fp,"%f", &b500); 
   fscanf(fp,"%f", &b501); 
   fscanf(fp,"%f", &b502); 
   fscanf(fp,"%f", &b503); 
   fscanf(fp,"%f", &b504); 
   fscanf(fp,"%f", &b505); 
   fscanf(fp,"%f", &b506); 
   fscanf(fp,"%f", &b507); 
   fscanf(fp,"%f", &b508); 
   fscanf(fp,"%f", &b509); 
   fscanf(fp,"%f", &b510); 
   fscanf(fp,"%f", &b511); 

   fclose(fp);
   res=-( + x2 + x3 + x4 - 5*x20 - 10*x21 - 5*x22 + 2*x35 + x36 + 2*x37
 + 10*x86 + 5*x87 + 5*x88 + 5*x89 + 5*x90 + 5*x91 - 40*x110 - 30*x111
 - 15*x112 - 15*x113 - 20*x114 - 25*x115 - 10*x116 - 30*x117 - 40*x118
 - 30*x119 - 20*x120 - 20*x121 - 35*x122 - 50*x123 - 20*x124 - 20*x125
 - 30*x126 - 35*x127 - 25*x128 - 50*x129 - 10*x130 - 15*x131 - 20*x132
 - 20*x133 - 30*x155 - 40*x156 - 40*x157 + x170 + x171 + x172 + 5*x221
 + 3*x222 + 4*x223 + x224 + x225 + x226 - 120*x245 - 110*x246 - 150*x247
 - 140*x248 - 120*x249 - 100*x250 - 90*x251 - 60*x252 - 150*x253 - 80*x254
 - 90*x255 - 120*x256 - 285*x257 - 390*x258 - 350*x259 - 290*x260
 - 405*x261 - 190*x262 - 280*x263 - 400*x264 - 430*x265 - 290*x266
 - 300*x267 - 240*x268 - 350*x269 - 250*x270 - 300*x271 + 5*b392 + 4*b393
 + 6*b394 + 8*b395 + 7*b396 + 6*b397 + 6*b398 + 9*b399 + 4*b400 + 10*b401
 + 9*b402 + 5*b403 + 6*b404 + 10*b405 + 6*b406 + 7*b407 + 7*b408 + 4*b409
 + 4*b410 + 3*b411 + 2*b412 + 5*b413 + 6*b414 + 7*b415 + 2*b416 + 5*b417
 + 2*b418 + 4*b419 + 7*b420 + 4*b421 + 3*b422 + 9*b423 + 3*b424 + 7*b425
 + 2*b426 + 9*b427 + 3*b428 + b429 + 9*b430 + 2*b431 + 6*b432 + 3*b433
 + 4*b434 + 8*b435 + b436 + 2*b437 + 5*b438 + 2*b439 + 3*b440 + 4*b441
 + 3*b442 + 5*b443 + 7*b444 + 6*b445 + 2*b446 + 8*b447 + 4*b448 + b449
 + 4*b450 + b451 + 2*b452 + 5*b453 + 2*b454 + 9*b455 + 2*b456 + 9*b457
 + 5*b458 + 8*b459 + 4*b460 + 2*b461 + 3*b462 + 8*b463 + 10*b464 + 6*b465
 + 3*b466 + 4*b467 + 8*b468 + 7*b469 + 7*b470 + 3*b471 + 9*b472 + 4*b473
 + 8*b474 + 6*b475 + 2*b476 + b477 + 3*b478 + 8*b479 + 3*b480 + 4*b481
 + 9*b482 + 5*b483 + b484 + 3*b485 + 9*b486 + 5*b487 + 5*b488 + 3*b489
 + 3*b490 + 5*b491 + 3*b492 + 2*b493 + 6*b494 + 4*b495 + 6*b496 + 2*b497
 + 6*b498 + 6*b499 + 6*b500 + 4*b501 + 3*b502 + 3*b503 + 2*b504 + b505
 + 5*b506 + 8*b507 + 6*b508 + 9*b509 + 5*b510 + 2*b511 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
