#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn30m03m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x20,x21,x22,x35,x36,x37,x86,x87,x88,x89,x90,x91,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x155,x156,x157,x170,x171,x172,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,b302,b303,b304,b305,b306,b307,b308,b309,b310,b311,b312,b313,b314,b315,b316,b317,b318,b319,b320,b321,b322,b323,b324,b325,b326,b327,b328,b329,b330,b331,b332,b333,b334,b335,b336,b337,b338,b339,b340,b341,b342,b343,b344,b345,b346,b347,b348,b349,b350,b351,b352,b353,b354,b355,b356,b357,b358,b359,b360,b361,b362,b363,b364,b365,b366,b367,b368,b369,b370,b371,b372,b373,b374,b375,b376,b377,b378,b379,b380,b381,b382,b383,b384,b385,b386,b387,b388,b389,b390,b391;
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
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x211); 
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
   fscanf(fp,"%f", &b342); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b346); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b351); 
   fscanf(fp,"%f", &b352); 
   fscanf(fp,"%f", &b353); 
   fscanf(fp,"%f", &b354); 
   fscanf(fp,"%f", &b355); 
   fscanf(fp,"%f", &b356); 
   fscanf(fp,"%f", &b357); 
   fscanf(fp,"%f", &b358); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b361); 
   fscanf(fp,"%f", &b362); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b368); 
   fscanf(fp,"%f", &b369); 
   fscanf(fp,"%f", &b370); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b380); 
   fscanf(fp,"%f", &b381); 
   fscanf(fp,"%f", &b382); 
   fscanf(fp,"%f", &b383); 
   fscanf(fp,"%f", &b384); 
   fscanf(fp,"%f", &b385); 
   fscanf(fp,"%f", &b386); 
   fscanf(fp,"%f", &b387); 
   fscanf(fp,"%f", &b388); 
   fscanf(fp,"%f", &b389); 
   fscanf(fp,"%f", &b390); 
   fscanf(fp,"%f", &b391); 

   fclose(fp);
   res=-( + x2 + x3 + x4 - 5*x20 - 10*x21 - 5*x22 + 2*x35 + x36 + 2*x37
 + 10*x86 + 5*x87 + 5*x88 + 5*x89 + 5*x90 + 5*x91 - 40*x110 - 30*x111
 - 15*x112 - 15*x113 - 20*x114 - 25*x115 - 10*x116 - 30*x117 - 40*x118
 - 30*x119 - 20*x120 - 20*x121 - 35*x122 - 50*x123 - 20*x124 - 20*x125
 - 30*x126 - 35*x127 - 25*x128 - 50*x129 - 10*x130 - 15*x131 - 20*x132
 - 20*x133 - 30*x155 - 40*x156 - 40*x157 + x170 + x171 + x172 - 80*x194
 - 90*x195 - 120*x196 - 285*x197 - 390*x198 - 350*x199 - 290*x200
 - 405*x201 - 190*x202 - 280*x203 - 400*x204 - 430*x205 - 290*x206
 - 300*x207 - 240*x208 - 350*x209 - 250*x210 - 300*x211 + 5*b302 + 4*b303
 + 6*b304 + 8*b305 + 7*b306 + 6*b307 + 6*b308 + 9*b309 + 4*b310 + 10*b311
 + 9*b312 + 5*b313 + 6*b314 + 10*b315 + 6*b316 + 7*b317 + 7*b318 + 4*b319
 + 4*b320 + 3*b321 + 2*b322 + 5*b323 + 6*b324 + 7*b325 + 2*b326 + 5*b327
 + 2*b328 + 4*b329 + 7*b330 + 4*b331 + 3*b332 + 9*b333 + 3*b334 + 7*b335
 + 2*b336 + 9*b337 + 3*b338 + b339 + 9*b340 + 2*b341 + 6*b342 + 3*b343
 + 4*b344 + 8*b345 + b346 + 2*b347 + 5*b348 + 2*b349 + 3*b350 + 4*b351
 + 3*b352 + 5*b353 + 7*b354 + 6*b355 + 2*b356 + 8*b357 + 4*b358 + b359
 + 4*b360 + b361 + 2*b362 + 5*b363 + 2*b364 + 9*b365 + 2*b366 + 9*b367
 + 5*b368 + 8*b369 + 4*b370 + 2*b371 + 3*b372 + 8*b373 + 10*b374 + 6*b375
 + 3*b376 + 4*b377 + 8*b378 + 7*b379 + 7*b380 + 3*b381 + 9*b382 + 4*b383
 + 8*b384 + 6*b385 + 2*b386 + b387 + 3*b388 + 8*b389 + 3*b390 + 4*b391
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
