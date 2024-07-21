#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="heatexch_gen3";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x496,x497,x498,x499,x500,x501,x502,x503,x504,x505,x506,x507,x508,x509,x510,x511,x512,x513,x514,x515,x516,x517,x518,x519,x520,x521,x522,x523,x524,x525,x526,x527,x528,x529,x530,x531,x532,x533,x534,x535,x536,x537,x538,x539,x540,x541,x542,x543,x544,x545,x546,x547,x548,x549,x550,x551,x552,x553,x554,x555,x556,x557,x558,x559,x560,x561,x562,x563,x564,x565,x566,x567,x568,x569,x570,x571,x572,x573,x574,x575,x576,x577,x578,x579,x580,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,x141,x142,x143,x144,x145,x146,x147,x148,x149,x150;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x496); 
   fscanf(fp,"%f", &x497); 
   fscanf(fp,"%f", &x498); 
   fscanf(fp,"%f", &x499); 
   fscanf(fp,"%f", &x500); 
   fscanf(fp,"%f", &x501); 
   fscanf(fp,"%f", &x502); 
   fscanf(fp,"%f", &x503); 
   fscanf(fp,"%f", &x504); 
   fscanf(fp,"%f", &x505); 
   fscanf(fp,"%f", &x506); 
   fscanf(fp,"%f", &x507); 
   fscanf(fp,"%f", &x508); 
   fscanf(fp,"%f", &x509); 
   fscanf(fp,"%f", &x510); 
   fscanf(fp,"%f", &x511); 
   fscanf(fp,"%f", &x512); 
   fscanf(fp,"%f", &x513); 
   fscanf(fp,"%f", &x514); 
   fscanf(fp,"%f", &x515); 
   fscanf(fp,"%f", &x516); 
   fscanf(fp,"%f", &x517); 
   fscanf(fp,"%f", &x518); 
   fscanf(fp,"%f", &x519); 
   fscanf(fp,"%f", &x520); 
   fscanf(fp,"%f", &x521); 
   fscanf(fp,"%f", &x522); 
   fscanf(fp,"%f", &x523); 
   fscanf(fp,"%f", &x524); 
   fscanf(fp,"%f", &x525); 
   fscanf(fp,"%f", &x526); 
   fscanf(fp,"%f", &x527); 
   fscanf(fp,"%f", &x528); 
   fscanf(fp,"%f", &x529); 
   fscanf(fp,"%f", &x530); 
   fscanf(fp,"%f", &x531); 
   fscanf(fp,"%f", &x532); 
   fscanf(fp,"%f", &x533); 
   fscanf(fp,"%f", &x534); 
   fscanf(fp,"%f", &x535); 
   fscanf(fp,"%f", &x536); 
   fscanf(fp,"%f", &x537); 
   fscanf(fp,"%f", &x538); 
   fscanf(fp,"%f", &x539); 
   fscanf(fp,"%f", &x540); 
   fscanf(fp,"%f", &x541); 
   fscanf(fp,"%f", &x542); 
   fscanf(fp,"%f", &x543); 
   fscanf(fp,"%f", &x544); 
   fscanf(fp,"%f", &x545); 
   fscanf(fp,"%f", &x546); 
   fscanf(fp,"%f", &x547); 
   fscanf(fp,"%f", &x548); 
   fscanf(fp,"%f", &x549); 
   fscanf(fp,"%f", &x550); 
   fscanf(fp,"%f", &x551); 
   fscanf(fp,"%f", &x552); 
   fscanf(fp,"%f", &x553); 
   fscanf(fp,"%f", &x554); 
   fscanf(fp,"%f", &x555); 
   fscanf(fp,"%f", &x556); 
   fscanf(fp,"%f", &x557); 
   fscanf(fp,"%f", &x558); 
   fscanf(fp,"%f", &x559); 
   fscanf(fp,"%f", &x560); 
   fscanf(fp,"%f", &x561); 
   fscanf(fp,"%f", &x562); 
   fscanf(fp,"%f", &x563); 
   fscanf(fp,"%f", &x564); 
   fscanf(fp,"%f", &x565); 
   fscanf(fp,"%f", &x566); 
   fscanf(fp,"%f", &x567); 
   fscanf(fp,"%f", &x568); 
   fscanf(fp,"%f", &x569); 
   fscanf(fp,"%f", &x570); 
   fscanf(fp,"%f", &x571); 
   fscanf(fp,"%f", &x572); 
   fscanf(fp,"%f", &x573); 
   fscanf(fp,"%f", &x574); 
   fscanf(fp,"%f", &x575); 
   fscanf(fp,"%f", &x576); 
   fscanf(fp,"%f", &x577); 
   fscanf(fp,"%f", &x578); 
   fscanf(fp,"%f", &x579); 
   fscanf(fp,"%f", &x580); 
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
   fscanf(fp,"%f", &x141); 
   fscanf(fp,"%f", &x142); 
   fscanf(fp,"%f", &x143); 
   fscanf(fp,"%f", &x144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 

   fclose(fp);
   res=-(-(146*pow((0.01 + x496),0.6 )+ 146*pow((0.01 + x497),0.6 )+ 146*pow((0.01 + x498),
  0.6 )+ 146*pow((0.01 + x499),0.6 )+ 146*pow((0.01 + x500),0.6 )+ 146*pow((0.01 + x501
  ),0.6 )+ 146*pow((0.01 + x502),0.6 )+ 146*pow((0.01 + x503),0.6 )+ 146*pow((0.01 +
   x504),0.6 )+ 146*pow((0.01 + x505),0.6 )+ 146*pow((0.01 + x506),0.6 )+ 146*pow((0.01
   + x507),0.6 )+ 146*pow((0.01 + x508),0.6 )+ 146*pow((0.01 + x509),0.6 )+ 146*pow((
  0.01 + x510),0.6 )+ 146*pow((0.01 + x511),0.6 )+ 146*pow((0.01 + x512),0.6 )+
   146*pow((0.01 + x513),0.6 )+ 146*pow((0.01 + x514),0.6 )+ 146*pow((0.01 + x515),0.6
   )+ 146*pow((0.01 + x516),0.6 )+ 146*pow((0.01 + x517),0.6 )+ 146*pow((0.01 + x518),
  0.6 )+ 146*pow((0.01 + x519),0.6 )+ 146*pow((0.01 + x520),0.6 )+ 146*pow((0.01 + x521
  ),0.6 )+ 146*pow((0.01 + x522),0.6 )+ 146*pow((0.01 + x523),0.6 )+ 146*pow((0.01 +
   x524),0.6 )+ 146*pow((0.01 + x525),0.6 )+ 146*pow((0.01 + x526),0.6 )+ 146*pow((0.01
   + x527),0.6 )+ 146*pow((0.01 + x528),0.6 )+ 146*pow((0.01 + x529),0.6 )+ 146*pow((
  0.01 + x530),0.6 )+ 146*pow((0.01 + x531),0.6 )+ 146*pow((0.01 + x532),0.6 )+
   146*pow((0.01 + x533),0.6 )+ 146*pow((0.01 + x534),0.6 )+ 146*pow((0.01 + x535),0.6
   )+ 146*pow((0.01 + x536),0.6 )+ 146*pow((0.01 + x537),0.6 )+ 146*pow((0.01 + x538),
  0.6 )+ 146*pow((0.01 + x539),0.6 )+ 146*pow((0.01 + x540),0.6 )+ 146*pow((0.01 + x541
  ),0.6 )+ 146*pow((0.01 + x542),0.6 )+ 146*pow((0.01 + x543),0.6 )+ 146*pow((0.01 +
   x544),0.6 )+ 146*pow((0.01 + x545),0.6 )+ 146*pow((0.01 + x546),0.6 )+ 146*pow((0.01
   + x547),0.6 )+ 146*pow((0.01 + x548),0.6 )+ 146*pow((0.01 + x549),0.6 )+ 146*pow((
  0.01 + x550),0.6 )+ 146*pow((0.01 + x551),0.6 )+ 146*pow((0.01 + x552),0.6 )+
   146*pow((0.01 + x553),0.6 )+ 146*pow((0.01 + x554),0.6 )+ 146*pow((0.01 + x555),0.6
   )+ 146*pow((0.01 + x556),0.6 )+ 146*pow((0.01 + x557),0.6 )+ 146*pow((0.01 + x558),
  0.6 )+ 146*pow((0.01 + x559),0.6 )+ 146*pow((0.01 + x560),0.6 )+ 146*pow((0.01 + x561
  ),0.6 )+ 146*pow((0.01 + x562),0.6 )+ 146*pow((0.01 + x563),0.6 )+ 146*pow((0.01 +
   x564),0.6 )+ 146*pow((0.01 + x565),0.6 )+ 146*pow((0.01 + x566),0.6 )+ 146*pow((0.01
   + x567),0.6 )+ 146*pow((0.01 + x568),0.6 )+ 146*pow((0.01 + x569),0.6 )+ 146*pow((
  0.01 + x570),0.6 )+ 146*pow((0.01 + x571),0.6 )+ 146*pow((0.01 + x572),0.6 )+
   146*pow((0.01 + x573),0.6 )+ 146*pow((0.01 + x574),0.6 )+ 146*pow((0.01 + x575),0.6
   )+ 146*pow((0.01 + x576),0.6 )+ 146*pow((0.01 + x577),0.6 )+ 146*pow((0.01 + x578),
  0.6 )+ 146*pow((0.01 + x579),0.6 )+ 146*pow((0.01 + x580),0.6)) - 4000*b1
   - 4000*b2 - 4000*b3 - 4000*b4 - 4000*b5 - 4000*b6 - 4000*b7 - 4000*b8
   - 4000*b9 - 4000*b10 - 4000*b11 - 4000*b12 - 4000*b13 - 4000*b14
   - 4000*b15 - 4000*b16 - 4000*b17 - 4000*b18 - 4000*b19 - 4000*b20
   - 4000*b21 - 4000*b22 - 4000*b23 - 4000*b24 - 4000*b25 - 4000*b26
   - 4000*b27 - 4000*b28 - 4000*b29 - 4000*b30 - 4000*b31 - 4000*b32
   - 4000*b33 - 4000*b34 - 4000*b35 - 4000*b36 - 4000*b37 - 4000*b38
   - 4000*b39 - 4000*b40 - 4000*b41 - 4000*b42 - 4000*b43 - 4000*b44
   - 4000*b45 - 4000*b46 - 4000*b47 - 4000*b48 - 4000*b49 - 4000*b50
   - 4000*b51 - 4000*b52 - 4000*b53 - 4000*b54 - 4000*b55 - 4000*b56
   - 4000*b57 - 4000*b58 - 4000*b59 - 4000*b60 - 10*x141 - 10*x142
   - 10*x143 - 10*x144 - 10*x145 - 200*x146 - 200*x147 - 200*x148
   - 200*x149 - 200*x150  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
