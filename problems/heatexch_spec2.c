#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="heatexch_spec2";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x35,x56,x57,x36,x58,x37,x38,x59,x60,x39,x61,x40,x41,x62,x63,x42,x64,x43,x44,x65,x66,x45,x67,x46,x47,x68,x69,x48,x70,x49,x55,x76,x50,x71,x51,x72,x52,x73,x53,x74,x54,x75,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x59); 
   fscanf(fp,"%f", &x60); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x61); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x62); 
   fscanf(fp,"%f", &x63); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x64); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x68); 
   fscanf(fp,"%f", &x69); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x70); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x76); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x51); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x73); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x74); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x75); 
   fscanf(fp,"%f", &b1); 
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

   fclose(fp);
   res=-(-(1200*(pow((1e-6 + x35/(1e-6 + pow((1e-6 + 0.5*x56*x57*(x56 + x57)),0.33333))),
 0.6 )+ pow((1e-6 + x36/(1e-6 + pow((1e-6 + 0.5*x57*x58*(x57 + x58)),0.33333))),
 0.6 )+ pow((1e-6 + 99.9853968566039*x37),0.6 )+ pow((1e-6 + x38/(1e-6 + pow((1e-6 +
  0.5*x59*x60*(x59 + x60)),0.33333))),0.6 )+ pow((1e-6 + x39/(1e-6 + pow((1e-6 +
  0.5*x60*x61*(x60 + x61)),0.33333))),0.6 )+ pow((1e-6 + 99.9853968566039*x40)
 ,0.6 )+ pow((1e-6 + x41/(1e-6 + pow((1e-6 + 0.5*x62*x63*(x62 + x63)),0.33333))),
 0.6 )+ pow((1e-6 + x42/(1e-6 + pow((1e-6 + 0.5*x63*x64*(x63 + x64)),0.33333))),
 0.6 )+ pow((1e-6 + 99.9853968566039*x43),0.6 )+ pow((1e-6 + x44/(1e-6 + pow((1e-6 +
  0.5*x65*x66*(x65 + x66)),0.33333))),0.6 )+ pow((1e-6 + x45/(1e-6 + pow((1e-6 +
  0.5*x66*x67*(x66 + x67)),0.33333))),0.6 )+ pow((1e-6 + 99.9853968566039*x46)
 ,0.6 )+ pow((1e-6 + x47/(1e-6 + pow((1e-6 + 0.5*x68*x69*(x68 + x69)),0.33333))),
 0.6 )+ pow((1e-6 + x48/(1e-6 + pow((1e-6 + 0.5*x69*x70*(x69 + x70)),0.33333))),
 0.6 )+ pow((1e-6 + 99.9853968566039*x49),0.6)) + 1200*pow((1e-6 + x55/pow((1e-6 + 40*
 x76*(20 + 0.5*x76)),0.33333)),0.6 )+ 140*x55 + 1200*(pow((1e-6 + x50/pow((1e-6 +
  10*x71*(20 + x71)),0.33333)),0.6 )+ pow((1e-6 + x51/pow((1e-6 + 40*x72*(80 + x72)
 ),0.33333)),0.6 )+ pow((1e-6 + x52/pow((1e-6 + 30*x73*(60 + x73)),0.33333)),0.6
  )+ pow((1e-6 + x53/pow((1e-6 + 30*x74*(60 + x74)),0.33333)),0.6 )+ pow((1e-6 + x54/pow((
 1e-6 + 10*x75*(20 + x75)),0.33333)),0.6)) + 10*x50 + 10*x51 + 10*x52 + 10
 *x53 + 10*x54) - 5500*b1 - 5500*b2 - 5500*b3 - 5500*b4 - 5500*b5
  - 5500*b6 - 5500*b7 - 5500*b8 - 5500*b9 - 5500*b10 - 5500*b11 - 5500*b12
  - 5500*b13 - 5500*b14 - 5500*b15 - 5500*b16  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
