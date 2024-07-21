#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn15m02hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x32,x33,x44,x45,x54,x55,x80,x81,x82,x83,x88,x89,x90,x91,x104,x105,x106,x107,x108,x109,x110,x111,b274,b275,b276,b277,b278,b279,b280,b281,b282,b283,b284,b285,b286,b287,b288,b289,b290,b291,b292,b293,b294,b295,b296,b297,b298,b299,b300,b301,b302,b303;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x80); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
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

   fclose(fp);
   res=-( + x32 + x33 - 5*x44 - 10*x45 + 2*x54 + x55 - 500*x80 - 600*x81
 - 350*x82 - 400*x83 + 10*x88 + 5*x89 + 5*x90 + 5*x91 - 80*x104 - 130*x105
 - 110*x106 - 120*x107 - 110*x108 - 130*x109 - 80*x110 - 90*x111 + 5*b274
 + 4*b275 + 8*b276 + 7*b277 + 6*b278 + 9*b279 + 10*b280 + 9*b281 + 6*b282
 + 10*b283 + 7*b284 + 7*b285 + 4*b286 + 3*b287 + 5*b288 + 6*b289 + 2*b290
 + 5*b291 + 4*b292 + 7*b293 + 3*b294 + 9*b295 + 7*b296 + 2*b297 + 3*b298
 + b299 + 2*b300 + 6*b301 + 4*b302 + 8*b303 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
