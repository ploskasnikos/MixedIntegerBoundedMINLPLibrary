#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd20-08";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,x185,x186,x187,x188,x189,x190,x191,x192;
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
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &x185); 
   fscanf(fp,"%f", &x186); 
   fscanf(fp,"%f", &x187); 
   fscanf(fp,"%f", &x188); 
   fscanf(fp,"%f", &x189); 
   fscanf(fp,"%f", &x190); 
   fscanf(fp,"%f", &x191); 
   fscanf(fp,"%f", &x192); 

   fclose(fp);
   res=-(- 111.366069033018*b1 - 173.736682895127*b2 - 206.584137827711*b3
 - 311.192639215759*b4 - 391.096663187392*b5 - 412.724041015689*b6
 - 362.90703724183*b7 - 412.238377551605*b8 - 202.33239914492*b9
 - 206.873035263351*b10 - 459.424203486646*b11 - 436.382257935297*b12
 - 595.212791352102*b13 - 554.589535228908*b14 - 561.749361850176*b15
 - 581.529277658138*b16 - 530.881632918085*b17 - 536.948983658504*b18
 - 325.467953593857*b19 - 315.525067375426*b20 - 76.225942040435*b21
 - 254.905793105451*b22 - 113.004738070171*b23 - 177.189040572114*b24
 - 173.894920684095*b25 - 152.600290074966*b26 - 204.409857240935*b27
 - 16.5055441265287*b28 - 138.719762707452*b29 - 72.1288414712326*b30
 - 120.847015325226*b31 - 99.571165171974*b32 - 151.849080781614*b33
 - 145.681002740026*b34 - 319.104683215451*b35 - 286.753801045421*b36
 - 393.925160475677*b37 - 359.934057246776*b38 - 372.757367428863*b39
 - 380.320704273821*b40 - 209.897358368756*b41 - 176.903014825797*b42
 - 484.441224042163*b43 - 386.398700662687*b44 - 569.816540558016*b45
 - 500.146929279378*b46 - 536.081866783575*b47 - 538.164119624621*b48
 - 472.75417976903*b49 - 394.671861667082*b50 - 661.778650400896*b51
 - 311.233594837076*b52 - 537.233382862136*b53 - 352.610164566948*b54
 - 508.430479292237*b55 - 433.246268236365*b56 - 240.434688571414*b57
 - 247.573379889676*b58 - 140.125745864737*b59 - 129.619586841229*b60
 - 95.259779915922*b61 - 157.318586867059*b62 - 70.3512639139942*b63
 - 129.990055093272*b64 - 243.357134921591*b65 - 304.003791259259*b66
 - 387.22826595551*b67 - 513.078195638243*b68 - 616.876803085642*b69
 - 635.234357536375*b70 - 584.514585206566*b71 - 639.355553242285*b72
 - 471.729855743646*b73 - 557.923885983252*b74 - 106.468143550206*b75
 - 576.327451798806*b76 - 526.167479727853*b77 - 684.640492332848*b78
 - 496.847481320222*b79 - 632.720138765642*b80 - 349.132941483343*b81
 - 328.586110112758*b82 - 615.607044330971*b83 - 537.140113127724*b84
 - 717.322415523131*b85 - 647.481188136546*b86 - 684.12778533852*b87
 - 686.401242893627*b88 - 506.816284666641*b89 - 398.035848133399*b90
 - 855.431776792172*b91 - 471.606942587939*b92 - 801.214873020304*b93
 - 596.722224078614*b94 - 753.768882151975*b95 - 691.333659314473*b96
 - 85.3675502274446*b97 - 158.379394593169*b98 - 257.300026361108*b99
 - 320.704543355031*b100 - 448.126320657674*b101 - 457.763772256702*b102
 - 408.83386135894*b103 - 463.255868286668*b104 - 237.144352702819*b105
 - 177.481389098916*b106 - 528.418902427793*b107 - 367.481249017807*b108
 - 581.69455257316*b109 - 486.218458446561*b110 - 545.202814571382*b111
 - 534.842653535173*b112 - 273.315651326331*b113 - 294.736877404174*b114
 - 91.5634612712189*b115 - 207.431742416254*b116 - 131.445214576321*b117
 - 232.45283126314*b118 - 119.004267377741*b119 - 195.036716336294*b120
 - 382.803613122328*b121 - 467.001607601617*b122 - 186.213458590968*b123
 - 547.081668156355*b124 - 541.160249117729*b125 - 656.49566392312*b126
 - 512.884098066802*b127 - 621.549425681682*b128 - 181.371452020713*b129
 - 175.492124453316*b130 - 162.248252595624*b131 - 55.0280789945633*b132
 - 114.798088119326*b133 - 107.382697687723*b134 - 90.3342797608636*b135
 - 106.314336443356*b136 - 221.180367269329*b137 - 200.830918650843*b138
 - 420.854797821172*b139 - 351.4013073243*b140 - 486.967847106279*b141
 - 432.551908850222*b142 - 462.429481904519*b143 - 462.157040602356*b144
 - 181.09388190356*b145 - 223.750754907429*b146 - 118.11570891131*b147
 - 279.735432351987*b148 - 287.185185564983*b149 - 336.883342353846*b150
 - 272.594688961982*b151 - 322.770119748047*b152 - 326.795248361408*b153
 - 271.173036007453*b154 - 758.353052369709*b155 - 597.043789091874*b156
 - 887.286114762329*b157 - 775.415492640821*b158 - 834.258761011951*b159
 - 836.015790081594*b160 - 333.50853775*b161 - 114.488510347914*b162
 - 71.1466014342705*b163 - 327.61554475*b164 - 115.456652447649*b165
 - 72.6961052063678*b166 - 418.975572*b167 - 144.050104531568*b168
 - 89.5861361571157*b169 - 441.6481805*b170 - 147.751509681552*b171
 - 90.6409148587658*b172 - 284.85345325*b173 - 109.929987849219*b174
 - 72.4317650925971*b175 - 364.98681475*b176 - 131.410153066893*b177
 - 83.6314997177532*b178 - 261.83219775*b179 - 103.183186592188*b180
 - 68.7017117455899*b181 - 481.55377575*b182 - 144.356933487536*b183
 - 83.8297118343163*b184 - 88728.6114762329*x185 - 88728.6114762329*x186
 - 88728.6114762329*x187 - 88728.6114762329*x188 - 88728.6114762329*x189
 - 88728.6114762329*x190 - 88728.6114762329*x191 - 88728.6114762329*x192
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
