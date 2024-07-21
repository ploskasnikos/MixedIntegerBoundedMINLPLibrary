#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="genpooling_meyer04";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,x49,x50,x51,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x1); 
   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x6); 
   fscanf(fp,"%f", &x7); 
   fscanf(fp,"%f", &x8); 
   fscanf(fp,"%f", &x9); 
   fscanf(fp,"%f", &x10); 
   fscanf(fp,"%f", &x11); 
   fscanf(fp,"%f", &x12); 
   fscanf(fp,"%f", &x13); 
   fscanf(fp,"%f", &x14); 
   fscanf(fp,"%f", &x15); 
   fscanf(fp,"%f", &x16); 
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x32); 
   fscanf(fp,"%f", &x33); 
   fscanf(fp,"%f", &x34); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x42); 
   fscanf(fp,"%f", &x43); 
   fscanf(fp,"%f", &x44); 
   fscanf(fp,"%f", &x45); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x50); 
   fscanf(fp,"%f", &x51); 
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

   fclose(fp);
   res=-(- 75.0708333333333*x1 - 150.141666666667*x2 - 280.264444444444*x3
 - 245.231388888889*x4 - 55.0519444444444*x5 - 125.118055555556*x6
 - 260.245555555556*x7 - 215.203055555556*x8 - 30.0283333333333*x9
 - 115.108611111111*x10 - 240.226666666667*x11 - 220.207777777778*x12
 - 55.0519444444444*x13 - 140.132222222222*x14 - 245.231388888889*x15
 - 245.231388888889*x16 - 55.0519444444444*x17 - 40.0377777777778*x18
 - 150.141666666667*x19 - 150.141666666667*x20 - 40.0377777777778*x21
 - 120.113333333333*x22 - 230.217222222222*x23 - 230.217222222222*x24
 - 30.0283333333333*x25 - 60.0566666666667*x26 - 175.165277777778*x27
 - 165.155833333333*x28 - 1177.97083333333*x29 - 2975.27555555556*x30
 - 1263.05111111111*x31 - 1293.07944444444*x32 - 1182.97555555556*x33
 - 1313.09833333333*x34 - 1293.07944444444*x35 - 2975.27555555556*x36
 - 3025.32277777778*x37 - 2995.29444444444*x38 - 1313.09833333333*x39
 - 1233.02277777778*x40 - 1213.00388888889*x41 - 1293.07944444444*x42
 - 1202.99444444444*x43 - 1213.00388888889*x44 - 150.141666666667*x45
 - 135.1275*x46 - 100.094444444444*x47 - 90.085*x48 - 40.0377777777778*x49
 - 70.0661111111111*x50 - 45.0425*x51 - 9345*b64 - 18690*b65 - 34888*b66
 - 30527*b67 - 6853*b68 - 15575*b69 - 32396*b70 - 26789*b71 - 3738*b72
 - 14329*b73 - 29904*b74 - 27412*b75 - 6853*b76 - 17444*b77 - 30527*b78
 - 30527*b79 - 6853*b80 - 4984*b81 - 18690*b82 - 18690*b83 - 4984*b84
 - 14952*b85 - 28658*b86 - 28658*b87 - 3738*b88 - 7476*b89 - 21805*b90
 - 20559*b91 - 9345*b92 - 9968*b93 - 19936*b94 - 23674*b95 - 9968*b96
 - 26166*b97 - 23674*b98 - 9968*b99 - 16198*b100 - 12460*b101 - 26166*b102
 - 16198*b103 - 13706*b104 - 23674*b105 - 12460*b106 - 13706*b107
 - 18690*b108 - 16821*b109 - 12460*b110 - 11214*b111 - 4984*b112
 - 8722*b113 - 5607*b114 - 13972*b115 - 36676*b116 - 13972*b117
 - 13972*b118  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
