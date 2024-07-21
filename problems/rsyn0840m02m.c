#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840m02m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x12,x13,x20,x21,x44,x45,x52,x53,x56,x57,x58,x59,x64,x65,x66,x67,x68,x69,x70,x71,b240,b241,b242,b243,b244,b245,b248,b249,b250,b251,b252,b253,b256,b257,b258,b259,b260,b261,b264,b265,b266,b267,b268,b269,b272,b273,b274,b275,b276,b277,b280,b281,b282,b283,b284,b285,b288,b289,b290,b291,b292,b293,b296,b297,b298,b299,b300,b301,x302,x303,x314,x315,x324,x325,x358,x359,x360,x361,x374,x375,x376,x377,x378,x379,x380,x381,x382,x383,x384,x385,x386,x387,x388,x389,x404,x405,x414,x415,x448,x449,x450,x451,x464,x465,x466,x467,x468,x469,x470,x471,x472,x473,x474,x475,x476,x477,x478,x479,x480,x481,b562,b563,b564,b565,b566,b567,b568,b569,b570,b571,b572,b573,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b586,b587,b588,b589,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,b602,b603,b604,b605,b606,b607,b608,b609,b610,b611,b612,b613,b614,b615,b616,b617,b618,b619,b620,b621,b622,b623,b624,b625,b626,b627,b628,b629,b630,b631,b632,b633,b634,b635,b636,b637,b638,b639,b640,b641;
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
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &x302); 
   fscanf(fp,"%f", &x303); 
   fscanf(fp,"%f", &x314); 
   fscanf(fp,"%f", &x315); 
   fscanf(fp,"%f", &x324); 
   fscanf(fp,"%f", &x325); 
   fscanf(fp,"%f", &x358); 
   fscanf(fp,"%f", &x359); 
   fscanf(fp,"%f", &x360); 
   fscanf(fp,"%f", &x361); 
   fscanf(fp,"%f", &x374); 
   fscanf(fp,"%f", &x375); 
   fscanf(fp,"%f", &x376); 
   fscanf(fp,"%f", &x377); 
   fscanf(fp,"%f", &x378); 
   fscanf(fp,"%f", &x379); 
   fscanf(fp,"%f", &x380); 
   fscanf(fp,"%f", &x381); 
   fscanf(fp,"%f", &x382); 
   fscanf(fp,"%f", &x383); 
   fscanf(fp,"%f", &x384); 
   fscanf(fp,"%f", &x385); 
   fscanf(fp,"%f", &x386); 
   fscanf(fp,"%f", &x387); 
   fscanf(fp,"%f", &x388); 
   fscanf(fp,"%f", &x389); 
   fscanf(fp,"%f", &x404); 
   fscanf(fp,"%f", &x405); 
   fscanf(fp,"%f", &x414); 
   fscanf(fp,"%f", &x415); 
   fscanf(fp,"%f", &x448); 
   fscanf(fp,"%f", &x449); 
   fscanf(fp,"%f", &x450); 
   fscanf(fp,"%f", &x451); 
   fscanf(fp,"%f", &x464); 
   fscanf(fp,"%f", &x465); 
   fscanf(fp,"%f", &x466); 
   fscanf(fp,"%f", &x467); 
   fscanf(fp,"%f", &x468); 
   fscanf(fp,"%f", &x469); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &x472); 
   fscanf(fp,"%f", &x473); 
   fscanf(fp,"%f", &x474); 
   fscanf(fp,"%f", &x475); 
   fscanf(fp,"%f", &x476); 
   fscanf(fp,"%f", &x477); 
   fscanf(fp,"%f", &x478); 
   fscanf(fp,"%f", &x479); 
   fscanf(fp,"%f", &x480); 
   fscanf(fp,"%f", &x481); 
   fscanf(fp,"%f", &b562); 
   fscanf(fp,"%f", &b563); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 
   fscanf(fp,"%f", &b570); 
   fscanf(fp,"%f", &b571); 
   fscanf(fp,"%f", &b572); 
   fscanf(fp,"%f", &b573); 
   fscanf(fp,"%f", &b574); 
   fscanf(fp,"%f", &b575); 
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b582); 
   fscanf(fp,"%f", &b583); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b586); 
   fscanf(fp,"%f", &b587); 
   fscanf(fp,"%f", &b588); 
   fscanf(fp,"%f", &b589); 
   fscanf(fp,"%f", &b590); 
   fscanf(fp,"%f", &b591); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &b598); 
   fscanf(fp,"%f", &b599); 
   fscanf(fp,"%f", &b600); 
   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &b602); 
   fscanf(fp,"%f", &b603); 
   fscanf(fp,"%f", &b604); 
   fscanf(fp,"%f", &b605); 
   fscanf(fp,"%f", &b606); 
   fscanf(fp,"%f", &b607); 
   fscanf(fp,"%f", &b608); 
   fscanf(fp,"%f", &b609); 
   fscanf(fp,"%f", &b610); 
   fscanf(fp,"%f", &b611); 
   fscanf(fp,"%f", &b612); 
   fscanf(fp,"%f", &b613); 
   fscanf(fp,"%f", &b614); 
   fscanf(fp,"%f", &b615); 
   fscanf(fp,"%f", &b616); 
   fscanf(fp,"%f", &b617); 
   fscanf(fp,"%f", &b618); 
   fscanf(fp,"%f", &b619); 
   fscanf(fp,"%f", &b620); 
   fscanf(fp,"%f", &b621); 
   fscanf(fp,"%f", &b622); 
   fscanf(fp,"%f", &b623); 
   fscanf(fp,"%f", &b624); 
   fscanf(fp,"%f", &b625); 
   fscanf(fp,"%f", &b626); 
   fscanf(fp,"%f", &b627); 
   fscanf(fp,"%f", &b628); 
   fscanf(fp,"%f", &b629); 
   fscanf(fp,"%f", &b630); 
   fscanf(fp,"%f", &b631); 
   fscanf(fp,"%f", &b632); 
   fscanf(fp,"%f", &b633); 
   fscanf(fp,"%f", &b634); 
   fscanf(fp,"%f", &b635); 
   fscanf(fp,"%f", &b636); 
   fscanf(fp,"%f", &b637); 
   fscanf(fp,"%f", &b638); 
   fscanf(fp,"%f", &b639); 
   fscanf(fp,"%f", &b640); 
   fscanf(fp,"%f", &b641); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 20*x12 + 21*x13 + 18*x20 + 20*x21 + 16*x44
 + 19*x45 - 26*x52 - 31*x53 - 30*x56 - 29*x57 + 20*x58 + 18*x59 - 2*x64
 - 2*x65 - 3*x66 - 2*x67 - 3*x68 - 3*x69 - 2*x70 - 2*x71 + 6*b240 + 4*b241
 + 40*b242 + 35*b243 + 46*b244 + 39*b245 + 7*b248 + 4*b249 + 30*b250
 + 25*b251 + 37*b252 + 29*b253 + 7*b256 + 5*b257 + 15*b258 + 5*b259
 + 22*b260 + 10*b261 + 11*b264 + 8*b265 + 13*b266 + 8*b267 + 24*b268
 + 16*b269 + 10*b272 + 7*b273 + 13*b274 + 8*b275 + 23*b276 + 15*b277
 + 9*b280 + 9*b281 + 30*b282 + 30*b283 + 39*b284 + 39*b285 + 8*b288
 + 7*b289 + 20*b290 + 15*b291 + 28*b292 + 22*b293 + 8*b296 + 6*b297
 + 15*b298 + 10*b299 + 23*b300 + 16*b301 + x302 + x303 - 5*x314 - 10*x315
 + x324 + x325 + 10*x358 + 5*x359 + 5*x360 + 5*x361 - 40*x374 - 30*x375
 - 15*x376 - 20*x377 - 10*x378 - 30*x379 - 30*x380 - 20*x381 - 35*x382
 - 50*x383 - 20*x384 - 30*x385 - 25*x386 - 50*x387 - 15*x388 - 20*x389
 - 30*x404 - 40*x405 + x414 + x415 + 5*x448 + 3*x449 + x450 + x451
 - 220*x464 - 210*x465 - 240*x466 - 220*x467 - 190*x468 - 160*x469
 - 190*x470 - 190*x471 - 385*x472 - 490*x473 - 390*x474 - 505*x475
 - 480*x476 - 600*x477 - 490*x478 - 600*x479 - 550*x480 - 550*x481
 + 5*b562 + 4*b563 + 8*b564 + 7*b565 + 6*b566 + 9*b567 + 10*b568 + 9*b569
 + 6*b570 + 10*b571 + 7*b572 + 7*b573 + 4*b574 + 3*b575 + 5*b576 + 6*b577
 + 2*b578 + 5*b579 + 4*b580 + 7*b581 + 3*b582 + 9*b583 + 7*b584 + 2*b585
 + 3*b586 + b587 + 2*b588 + 6*b589 + 4*b590 + 8*b591 + 2*b592 + 5*b593
 + 3*b594 + 4*b595 + 5*b596 + 7*b597 + 2*b598 + 8*b599 + b600 + 4*b601
 + 2*b602 + 5*b603 + 9*b604 + 2*b605 + 5*b606 + 8*b607 + 2*b608 + 3*b609
 + 10*b610 + 6*b611 + 4*b612 + 8*b613 + 7*b614 + 3*b615 + 4*b616 + 8*b617
 + 2*b618 + b619 + 8*b620 + 3*b621 + 9*b622 + 5*b623 + 3*b624 + 9*b625
 + 5*b626 + 3*b627 + 5*b628 + 3*b629 + 6*b630 + 4*b631 + 2*b632 + 6*b633
 + 6*b634 + 4*b635 + 3*b636 + 2*b637 + 5*b638 + 8*b639 + 9*b640 + 5*b641
 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
