#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd15-08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,x145,x146,x147,x148,x149,x150,x151,x152;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b63); 
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
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &x145); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 

   fclose(fp);
   res=-(- 403.928572687557*b1 - 152.992741540361*b2 - 267.315589205704*b3
 - 401.957253171747*b4 - 239.900413376196*b5 - 172.190748942287*b6
 - 242.754569605376*b7 - 206.00422281341*b8 - 175.512360171018*b9
 - 12.4456890694952*b10 - 95.1129504127459*b11 - 163.523864888208*b12
 - 136.749750630694*b13 - 183.460227957173*b14 - 154.161364707845*b15
 - 58.2220762837777*b16 - 427.797333694278*b17 - 124.146285420687*b18
 - 281.762350319908*b19 - 416.122892408842*b20 - 286.880720364618*b21
 - 171.930365706852*b22 - 298.680284192437*b23 - 212.446553403468*b24
 - 334.799175421099*b25 - 166.360551160919*b26 - 261.524865566971*b27
 - 321.118189558705*b28 - 275.112120282415*b29 - 70.1440860194197*b30
 - 281.389498973428*b31 - 225.606388157132*b32 - 321.213816864959*b33
 - 71.9883302424501*b34 - 169.588450009557*b35 - 291.06773760337*b36
 - 283.136668462665*b37 - 418.102856274321*b38 - 323.382162238167*b39
 - 109.329676669547*b40 - 225.077476533111*b41 - 292.549188246279*b42
 - 256.821062390988*b43 - 181.735382103635*b44 - 361.637553977341*b45
 - 487.443715088842*b46 - 391.614198813426*b47 - 276.780369289256*b48
 - 790.809160300441*b49 - 572.306788163427*b50 - 710.561007303222*b51
 - 710.424717790653*b52 - 882.480677740369*b53 - 746.52609026712*b54
 - 932.032155531379*b55 - 673.014016071675*b56 - 415.137891763513*b57
 - 24.1331183147668*b58 - 232.723756037565*b59 - 385.530297939342*b60
 - 328.99787719123*b61 - 412.551506227386*b62 - 368.4253530904*b63
 - 149.097324374568*b64 - 505.111125566583*b65 - 324.408884140539*b66
 - 422.192328810933*b67 - 433.424841813569*b68 - 590.521463309364*b69
 - 601.187176017906*b70 - 639.549861073539*b71 - 393.266050752522*b72
 - 317.266722109018*b73 - 366.343507824765*b74 - 278.701740808319*b75
 - 360.414608909582*b76 - 163.468646330858*b77 - 496.33685624632*b78
 - 135.080317454783*b79 - 291.219332583259*b80 - 60.7098769607628*b81
 - 257.274009667912*b82 - 109.739073857234*b83 - 105.840898609517*b84
 - 149.608079935928*b85 - 478.2765537338*b86 - 175.640633384092*b87
 - 164.991725574781*b88 - 370.179004516539*b89 - 456.332727530502*b90
 - 323.598387892417*b91 - 428.625530616724*b92 - 176.797739228846*b93
 - 657.950143580026*b94 - 146.134286318179*b95 - 347.137285556827*b96
 - 459.855709875116*b97 - 206.994357545204*b98 - 317.109585585788*b99
 - 461.635447603175*b100 - 270.249812459436*b101 - 176.621455199898*b102
 - 266.565650581812*b103 - 255.042767652375*b104 - 688.990984467753*b105
 - 342.921309942336*b106 - 508.744698659858*b107 - 686.009170292228*b108
 - 457.444445796545*b109 - 133.755629117181*b110 - 451.235917636358*b111
 - 427.625644498357*b112 - 275.559617400364*b113 - 356.414463245256*b114
 - 238.594038182377*b115 - 323.736842820792*b116 - 123.509577347529*b117
 - 537.671376447504*b118 - 104.741456798329*b119 - 261.777653762851*b120
 - 343.78539425*b121 - 113.508450322244*b122 - 69.177220392612*b123
 - 264.047028*b124 - 87.3113122712859*b125 - 53.2512330089256*b126
 - 390.47730275*b127 - 123.63305929533*b128 - 73.7850337614663*b129
 - 406.29941025*b130 - 126.736316912988*b131 - 75.0745406137203*b132
 - 283.160272*b133 - 95.8513476067592*b134 - 59.1487898247813*b135
 - 422.01298775*b136 - 132.224826373859*b137 - 78.5002039603394*b138
 - 269.10096475*b139 - 95.9362994616171*b140 - 60.754974511923*b141
 - 395.712942*b142 - 123.433440930338*b143 - 73.1178281922949*b144
 - 93203.2155531379*x145 - 93203.2155531379*x146 - 93203.2155531379*x147
 - 93203.2155531379*x148 - 93203.2155531379*x149 - 93203.2155531379*x150
 - 93203.2155531379*x151 - 93203.2155531379*x152  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
