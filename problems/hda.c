#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="hda";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x5,x6,x7,x8,x16,x17,x18,x52,x53,x54,x55,x56,x57,x58,x71,x72,x81,x133,x135,x167,x185,x197,x198,x220,x221,x340,x341,x460,x461,x470,x471,b710,b711,b712,b714,b715,b718,b719,b721;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x52); 
   fscanf(fp,"%f", &x53); 
   fscanf(fp,"%f", &x54); 
   fscanf(fp,"%f", &x55); 
   fscanf(fp,"%f", &x56); 
   fscanf(fp,"%f", &x57); 
   fscanf(fp,"%f", &x58); 
   fscanf(fp,"%f", &x71); 
   fscanf(fp,"%f", &x72); 
   fscanf(fp,"%f", &x81); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x220); 
   fscanf(fp,"%f", &x221); 
   fscanf(fp,"%f", &x340); 
   fscanf(fp,"%f", &x341); 
   fscanf(fp,"%f", &x460); 
   fscanf(fp,"%f", &x461); 
   fscanf(fp,"%f", &x470); 
   fscanf(fp,"%f", &x471); 
   fscanf(fp,"%f", &b710); 
   fscanf(fp,"%f", &b711); 
   fscanf(fp,"%f", &b712); 
   fscanf(fp,"%f", &b714); 
   fscanf(fp,"%f", &b715); 
   fscanf(fp,"%f", &b718); 
   fscanf(fp,"%f", &b719); 
   fscanf(fp,"%f", &b721); 

   fclose(fp);
   res=    1.2*x1 + 1.155*x5 + 1.155*x6 + 1.155*x7 + 1.227*x8 + 0.375*x16
   + 1.55*x17 + 1.12*x18 + 5171.7*x52 + 700*x53 + 700*x54 + 8000*x55
   + 8000*x56 + 8000*x57 + 8000*x58 + 1.257*x71 + 1.57125*x72 + 0.7*x81
   + 1275*x133 + 49*x135 - 10149* 2.08 - 6038.4*x167 + 49*x185 + 7140*x197
   + 7140*x198 - 550.8*x220 - 1718.7*x221 - 550.8*x340 - 1718.7*x341
   - 550.8*x460 - 1718.7*x461 - 550.8*x470 - 1718.7*x471 + 50.395*b710
   + 74.3*b711 + 92.875*b712 + 1.126*b714 + 3.9*b715 + 48.106*b718
   + 7.155*b719 + 10.155*b721 +  22.5  ;

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
