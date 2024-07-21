#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn40m02m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x14,x15,x24,x25,x58,x59,x60,x61,x74,x75,x76,x77,x78,x79,x80,x81,x82,x83,x84,x85,x86,x87,x88,x89,x104,x105,x114,x115,x148,x149,x150,x151,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x178,x179,x180,x181,b262,b263,b264,b265,b266,b267,b268,b269,b270,b271,b272,b273,b274,b275,b276,b277,b278,b279,b280,b281,b282,b283,b284,b285,b286,b287,b288,b289,b290,b291,b292,b293,b294,b295,b296,b297,b298,b299,b300,b301,b302,b303,b304,b305,b306,b307,b308,b309,b310,b311,b312,b313,b314,b315,b316,b317,b318,b319,b320,b321,b322,b323,b324,b325,b326,b327,b328,b329,b330,b331,b332,b333,b334,b335,b336,b337,b338,b339,b340,b341;
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
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x178); 
   fscanf(fp,"%f", &x179); 
   fscanf(fp,"%f", &x180); 
   fscanf(fp,"%f", &x181); 
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
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &b302); 
   fscanf(fp,"%f", &b303); 
   fscanf(fp,"%f", &b304); 
   fscanf(fp,"%f", &b305); 
   fscanf(fp,"%f", &b306); 
   fscanf(fp,"%f", &b307); 
   fscanf(fp,"%f", &b308); 
   fscanf(fp,"%f", &b309); 
   fscanf(fp,"%f", &b310); 
   fscanf(fp,"%f", &b311); 
   fscanf(fp,"%f", &b312); 
   fscanf(fp,"%f", &b313); 
   fscanf(fp,"%f", &b314); 
   fscanf(fp,"%f", &b315); 
   fscanf(fp,"%f", &b316); 
   fscanf(fp,"%f", &b317); 
   fscanf(fp,"%f", &b318); 
   fscanf(fp,"%f", &b319); 
   fscanf(fp,"%f", &b320); 
   fscanf(fp,"%f", &b321); 
   fscanf(fp,"%f", &b322); 
   fscanf(fp,"%f", &b323); 
   fscanf(fp,"%f", &b324); 
   fscanf(fp,"%f", &b325); 
   fscanf(fp,"%f", &b326); 
   fscanf(fp,"%f", &b327); 
   fscanf(fp,"%f", &b328); 
   fscanf(fp,"%f", &b329); 
   fscanf(fp,"%f", &b330); 
   fscanf(fp,"%f", &b331); 
   fscanf(fp,"%f", &b332); 
   fscanf(fp,"%f", &b333); 
   fscanf(fp,"%f", &b334); 
   fscanf(fp,"%f", &b335); 
   fscanf(fp,"%f", &b336); 
   fscanf(fp,"%f", &b337); 
   fscanf(fp,"%f", &b338); 
   fscanf(fp,"%f", &b339); 
   fscanf(fp,"%f", &b340); 
   fscanf(fp,"%f", &b341); 

   fclose(fp);
   res=-( + x2 + x3 - 5*x14 - 10*x15 + x24 + x25 + 10*x58 + 5*x59 + 5*x60
 + 5*x61 - 40*x74 - 30*x75 - 15*x76 - 20*x77 - 10*x78 - 30*x79 - 30*x80
 - 20*x81 - 35*x82 - 50*x83 - 20*x84 - 30*x85 - 25*x86 - 50*x87 - 15*x88
 - 20*x89 - 30*x104 - 40*x105 + x114 + x115 + 5*x148 + 3*x149 + x150
 + x151 - 220*x164 - 210*x165 - 240*x166 - 220*x167 - 190*x168 - 160*x169
 - 190*x170 - 190*x171 - 385*x172 - 490*x173 - 390*x174 - 505*x175
 - 480*x176 - 600*x177 - 490*x178 - 600*x179 - 550*x180 - 550*x181
 + 5*b262 + 4*b263 + 8*b264 + 7*b265 + 6*b266 + 9*b267 + 10*b268 + 9*b269
 + 6*b270 + 10*b271 + 7*b272 + 7*b273 + 4*b274 + 3*b275 + 5*b276 + 6*b277
 + 2*b278 + 5*b279 + 4*b280 + 7*b281 + 3*b282 + 9*b283 + 7*b284 + 2*b285
 + 3*b286 + b287 + 2*b288 + 6*b289 + 4*b290 + 8*b291 + 2*b292 + 5*b293
 + 3*b294 + 4*b295 + 5*b296 + 7*b297 + 2*b298 + 8*b299 + b300 + 4*b301
 + 2*b302 + 5*b303 + 9*b304 + 2*b305 + 5*b306 + 8*b307 + 2*b308 + 3*b309
 + 10*b310 + 6*b311 + 4*b312 + 8*b313 + 7*b314 + 3*b315 + 4*b316 + 8*b317
 + 2*b318 + b319 + 8*b320 + 3*b321 + 9*b322 + 5*b323 + 3*b324 + 9*b325
 + 5*b326 + 3*b327 + 5*b328 + 3*b329 + 6*b330 + 4*b331 + 2*b332 + 6*b333
 + 6*b334 + 4*b335 + 3*b336 + 2*b337 + 5*b338 + 8*b339 + 9*b340 + 5*b341
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
