#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ex1243";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x17,x33,x34,x18,x35,x19,x36,x20,x37,x38,x21,x39,x22,x40,x23,x41,x42,x24,x43,x25,x44,x26,x45,x46,x27,x47,x28,x48,x29,x49,x30,x50,x31,x51,x32,x52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x52); 
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

   fclose(fp);
   res=-(-(208.15*x17/(x33 + x34) + 208.15*x18/(x34 + x35) + 208.15*x19/(x35 + x36)
 + 208.15*x20/(x37 + x38) + 208.15*x21/(x38 + x39) + 208.15*x22/(x39 + x40
) + 208.15*x23/(x41 + x42) + 208.15*x24/(x42 + x43) + 208.15*x25/(x43 +
 x44) + 208.15*x26/(x45 + x46) + 208.15*x27/(x46 + x47) + 208.15*x28/(x47
 + x48) + 208.15*x29/(40 + x49) + 208.15*x30/(10 + x50) + 166.516666666667
*x31/(42 + x51) + 166.516666666667*x32/(37 + x52) + 80*x31 + 80*x32 + 20*
x29 + 20*x30) - 6250*b53 - 6250*b54 - 6250*b55 - 6250*b56 - 6250*b57
 - 6250*b58 - 6250*b59 - 6250*b60 - 6250*b61 - 6250*b62 - 6250*b63
 - 6250*b64 - 6250*b65 - 6250*b66 - 6250*b67 - 6250*b68  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
