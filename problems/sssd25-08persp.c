#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sssd25-08persp";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216,b217,b218,b219,b220,b221,b222,b223,b224,x225,x226,x227,x228,x229,x230,x231,x232;
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
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &x225); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 

   fclose(fp);
   res=-(- 280.015478914038*b1 - 189.288120842359*b2 - 358.701846798178*b3
 - 244.241788814099*b4 - 87.1139426934879*b5 - 293.741196412808*b6
 - 336.938455480881*b7 - 111.132571007002*b8 - 286.116429243528*b9
 - 94.4274398343128*b10 - 367.133290072151*b11 - 614.928585758936*b12
 - 438.125051677529*b13 - 661.999904132064*b14 - 653.595947484945*b15
 - 130.785249996106*b16 - 566.03927069428*b17 - 544.19787715837*b18
 - 685.403607293646*b19 - 61.9928174906746*b20 - 249.350690730561*b21
 - 140.90906841319*b22 - 291.079482338546*b23 - 487.780669163489*b24
 - 307.783912643805*b25 - 389.802681405466*b26 - 321.287736832449*b27
 - 302.412987027206*b28 - 409.775140258547*b29 - 257.071751692557*b30
 - 175.756094849851*b31 - 423.669959460143*b32 - 198.720546344334*b33
 - 344.400501168956*b34 - 208.952089209986*b35 - 430.759407352372*b36
 - 496.60632325866*b37 - 397.911936291162*b38 - 287.774297498385*b39
 - 423.00329072926*b40 - 237.886155953882*b41 - 402.402251795838*b42
 - 250.825045089316*b43 - 487.547042019378*b44 - 568.292182452832*b45
 - 448.087612764076*b46 - 320.335765847799*b47 - 490.167899018651*b48
 - 82.5933869454248*b49 - 146.448682875232*b50 - 163.452067908051*b51
 - 276.730055005735*b52 - 273.179876407695*b53 - 277.803053042602*b54
 - 233.55256356785*b55 - 197.393244057853*b56 - 242.330997032288*b57
 - 284.424030137382*b58 - 363.208830908102*b59 - 294.232555311306*b60
 - 325.118162311176*b61 - 299.415482100549*b62 - 259.44789476115*b63
 - 309.940616688054*b64 - 222.150724870321*b65 - 217.727646620661*b66
 - 281.713073665437*b67 - 38.1502291749332*b68 - 111.211204176216*b69
 - 65.2805816148505*b70 - 112.460639083103*b71 - 198.645643676751*b72
 - 421.360912334564*b73 - 534.87426176758*b74 - 475.741816107137*b75
 - 352.749929176345*b76 - 531.612082625615*b77 - 280.525826419076*b78
 - 137.095239440206*b79 - 575.7770749398*b80 - 351.497850461778*b81
 - 405.962649168703*b82 - 432.857369642276*b83 - 166.720740905278*b84
 - 330.52780833779*b85 - 114.389081222937*b86 - 41.8820705320675*b87
 - 413.561667150737*b88 - 355.579499050136*b89 - 345.47038524768*b90
 - 430.854677384648*b91 - 30.0482829027383*b92 - 165.478010935782*b93
 - 77.9360845070815*b94 - 173.890485436882*b95 - 312.249412706219*b96
 - 571.744627524166*b97 - 471.624923879672*b98 - 710.164602376854*b99
 - 261.66021735256*b100 - 51.0557284250918*b101 - 360.062547274952*b102
 - 481.891096039651*b103 - 365.513365723344*b104 - 399.490496656953*b105
 - 451.769553607549*b106 - 453.738932169927*b107 - 199.843756585705*b108
 - 365.058314613238*b109 - 139.586752483676*b110 - 106.426979864288*b111
 - 456.438637193436*b112 - 211.390523065096*b113 - 296.965394771203*b114
 - 206.36024981947*b115 - 299.399758359544*b116 - 365.873253476953*b117
 - 268.037142407783*b118 - 192.166689939902*b119 - 340.763818025386*b120
 - 481.943276793998*b121 - 476.896032723565*b122 - 605.44200242736*b123
 - 60.3345060768244*b124 - 248.698186669248*b125 - 116.370732650035*b126
 - 226.41276825065*b127 - 437.786018380522*b128 - 30.1659216101491*b129
 - 155.310005469338*b130 - 62.4308577168494*b131 - 374.072749206918*b132
 - 359.364574319466*b133 - 371.508574814077*b134 - 313.678661245913*b135
 - 236.696687500268*b136 - 342.959779885782*b137 - 243.309240877052*b138
 - 455.730833322708*b139 - 283.158964050427*b140 - 108.06453872561*b141
 - 345.515272872869*b142 - 397.292371711029*b143 - 159.09397067448*b144
 - 340.634583609159*b145 - 206.294587181224*b146 - 430.280594816681*b147
 - 370.924429483938*b148 - 179.264171022001*b149 - 428.921838070769*b150
 - 471.281103740823*b151 - 99.7808461848959*b152 - 429.05922386952*b153
 - 327.680298879118*b154 - 523.80193255273*b155 - 283.644715807908*b156
 - 86.3875702765374*b157 - 352.398403352795*b158 - 431.172951509966*b159
 - 233.993325343613*b160 - 91.8637559279284*b161 - 74.4877021670081*b162
 - 187.82221969771*b163 - 430.026945476274*b164 - 357.507784036688*b165
 - 448.524700206143*b166 - 411.998956245666*b167 - 173.986760082346*b168
 - 712.788231206667*b169 - 461.036283507276*b170 - 848.881524448158*b171
 - 792.186240949472*b172 - 442.016565853182*b173 - 897.591929381804*b174
 - 977.916607937591*b175 - 293.430402870014*b176 - 296.344320059065*b177
 - 364.765594186771*b178 - 329.815794036051*b179 - 226.890063118006*b180
 - 348.731381211396*b181 - 177.942341296454*b182 - 96.1183797630128*b183
 - 387.154702581006*b184 - 375.426218481344*b185 - 391.26936411233*b186
 - 451.354346179335*b187 - 63.5187751545787*b188 - 243.436478427032*b189
 - 13.2008683362507*b190 - 119.70059288035*b191 - 372.810300964428*b192
 - 541.819732823667*b193 - 384.192269657313*b194 - 642.582705586696*b195
 - 495.331779409205*b196 - 251.913229553801*b197 - 573.728023842047*b198
 - 649.809996665778*b199 - 263.33328155498*b200 - 308.75573475*b201
 - 117.915710216419*b202 - 77.288604398212*b203 - 343.15653775*b204
 - 134.206428189155*b205 - 89.0183352697708*b206 - 346.81576575*b207
 - 124.324585731045*b208 - 78.9498261215339*b209 - 430.096916*b210
 - 159.051822644712*b211 - 102.5864677272*b212 - 320.07779375*b213
 - 124.923391537198*b214 - 82.7758203632668*b215 - 435.247357*b216
 - 157.010160043992*b217 - 100.02041833951*b218 - 449.605928*b219
 - 160.64955939217*b220 - 101.851712426192*b221 - 467.05921525*b222
 - 164.49253653471*b223 - 103.53764225876*b224 - 97791.6607937591*x225
 - 97791.6607937591*x226 - 97791.6607937591*x227 - 97791.6607937591*x228
 - 97791.6607937591*x229 - 97791.6607937591*x230 - 97791.6607937591*x231
 - 97791.6607937591*x232  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
