#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="edgecross24-057";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b312,b377,b2,b282,b284,b310,b363,b376,b3,b395,b538,b4,b545,b5,b380,b394,b398,b541,b6,b520,b7,b373,b391,b519,b8,b338,b482,b503,b9,b323,b324,b337,b369,b371,b387,b389,b481,b502,b10,b11,b12,b13,b14,b443,b527,b543,b15,b366,b374,b378,b384,b392,b396,b442,b526,b539,b16,b17,b18,b457,b470,b544,b19,b367,b368,b379,b385,b386,b397,b456,b469,b540,b20,b21,b26,b533,b27,b375,b393,b532,b28,b428,b29,b365,b383,b427,b30,b358,b31,b343,b344,b357,b32,b33,b34,b35,b36,b412,b37,b364,b382,b411,b38,b493,b39,b370,b388,b492,b40,b41,b42,b43,b46,b318,b47,b304,b48,b277,b296,b300,b49,b50,b51,b290,b306,b314,b52,b53,b292,b294,b316,b54,b57,b308,b58,b288,b59,b280,b60,b61,b62,b286,b63,b298,b64,b65,b67,b523,b68,b341,b485,b506,b69,b70,b71,b446,b530,b548,b72,b73,b460,b473,b550,b74,b77,b536,b78,b431,b79,b361,b80,b81,b82,b415,b83,b496,b84,b85,b87,b334,b478,b499,b88,b89,b90,b439,b517,b521,b91,b92,b453,b466,b522,b93,b96,b518,b97,b424,b98,b354,b99,b100,b101,b408,b102,b489,b103,b104,b106,b107,b330,b332,b108,b327,b335,b339,b435,b437,b479,b483,b500,b504,b109,b476,b110,b328,b329,b340,b449,b451,b462,b464,b484,b505,b111,b114,b336,b480,b501,b115,b326,b420,b422,b116,b322,b350,b352,b117,b118,b119,b325,b404,b406,b120,b331,b475,b487,b121,b122,b124,b125,b126,b127,b128,b131,b132,b133,b134,b135,b136,b137,b138,b139,b141,b142,b143,b144,b147,b148,b149,b150,b151,b152,b153,b154,b155,b157,b158,b433,b434,b445,b454,b458,b467,b471,b529,b547,b159,b162,b441,b525,b534,b163,b417,b425,b429,b164,b347,b355,b359,b165,b440,b528,b166,b444,b167,b401,b409,b413,b168,b436,b490,b494,b169,b170,b172,b173,b176,b177,b178,b179,b180,b181,b182,b183,b184,b186,b189,b455,b468,b535,b190,b418,b419,b430,b191,b348,b349,b360,b459,b472,b192,b193,b194,b402,b403,b414,b448,b195,b450,b463,b495,b196,b197,b201,b202,b203,b204,b205,b206,b207,b208,b209,b232,b426,b233,b356,b234,b235,b236,b410,b237,b491,b238,b239,b241,b346,b242,b243,b244,b400,b245,b421,b246,b247,b249,b250,b251,b345,b252,b351,b253,b254,b256,b257,b258,b259,b260,b262,b263,b264,b265,b267,b405,b268,b269,b271,b272,b274;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b312); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b310); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b395); 
   fscanf(fp,"%f", &b538); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b545); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b380); 
   fscanf(fp,"%f", &b394); 
   fscanf(fp,"%f", &b398); 
   fscanf(fp,"%f", &b541); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b520); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b391); 
   fscanf(fp,"%f", &b519); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b338); 
   fscanf(fp,"%f", &b482); 
   fscanf(fp,"%f", &b503); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b323); 
   fscanf(fp,"%f", &b324); 
   fscanf(fp,"%f", &b337); 
   fscanf(fp,"%f", &b369); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b387); 
   fscanf(fp,"%f", &b389); 
   fscanf(fp,"%f", &b481); 
   fscanf(fp,"%f", &b502); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b443); 
   fscanf(fp,"%f", &b527); 
   fscanf(fp,"%f", &b543); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b384); 
   fscanf(fp,"%f", &b392); 
   fscanf(fp,"%f", &b396); 
   fscanf(fp,"%f", &b442); 
   fscanf(fp,"%f", &b526); 
   fscanf(fp,"%f", &b539); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b457); 
   fscanf(fp,"%f", &b470); 
   fscanf(fp,"%f", &b544); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b368); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b385); 
   fscanf(fp,"%f", &b386); 
   fscanf(fp,"%f", &b397); 
   fscanf(fp,"%f", &b456); 
   fscanf(fp,"%f", &b469); 
   fscanf(fp,"%f", &b540); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b533); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b393); 
   fscanf(fp,"%f", &b532); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b428); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b383); 
   fscanf(fp,"%f", &b427); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b358); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b357); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b412); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b382); 
   fscanf(fp,"%f", &b411); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b493); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b370); 
   fscanf(fp,"%f", &b388); 
   fscanf(fp,"%f", &b492); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b318); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b304); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b306); 
   fscanf(fp,"%f", &b314); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b294); 
   fscanf(fp,"%f", &b316); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b308); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b286); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b523); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b341); 
   fscanf(fp,"%f", &b485); 
   fscanf(fp,"%f", &b506); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b446); 
   fscanf(fp,"%f", &b530); 
   fscanf(fp,"%f", &b548); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b460); 
   fscanf(fp,"%f", &b473); 
   fscanf(fp,"%f", &b550); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b536); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b431); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b361); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b415); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b496); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b334); 
   fscanf(fp,"%f", &b478); 
   fscanf(fp,"%f", &b499); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b439); 
   fscanf(fp,"%f", &b517); 
   fscanf(fp,"%f", &b521); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b453); 
   fscanf(fp,"%f", &b466); 
   fscanf(fp,"%f", &b522); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b518); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b424); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b354); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b408); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b489); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b330); 
   fscanf(fp,"%f", &b332); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b327); 
   fscanf(fp,"%f", &b335); 
   fscanf(fp,"%f", &b339); 
   fscanf(fp,"%f", &b435); 
   fscanf(fp,"%f", &b437); 
   fscanf(fp,"%f", &b479); 
   fscanf(fp,"%f", &b483); 
   fscanf(fp,"%f", &b500); 
   fscanf(fp,"%f", &b504); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b476); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b328); 
   fscanf(fp,"%f", &b329); 
   fscanf(fp,"%f", &b340); 
   fscanf(fp,"%f", &b449); 
   fscanf(fp,"%f", &b451); 
   fscanf(fp,"%f", &b462); 
   fscanf(fp,"%f", &b464); 
   fscanf(fp,"%f", &b484); 
   fscanf(fp,"%f", &b505); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b336); 
   fscanf(fp,"%f", &b480); 
   fscanf(fp,"%f", &b501); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b326); 
   fscanf(fp,"%f", &b420); 
   fscanf(fp,"%f", &b422); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b322); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b352); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b325); 
   fscanf(fp,"%f", &b404); 
   fscanf(fp,"%f", &b406); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b331); 
   fscanf(fp,"%f", &b475); 
   fscanf(fp,"%f", &b487); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b433); 
   fscanf(fp,"%f", &b434); 
   fscanf(fp,"%f", &b445); 
   fscanf(fp,"%f", &b454); 
   fscanf(fp,"%f", &b458); 
   fscanf(fp,"%f", &b467); 
   fscanf(fp,"%f", &b471); 
   fscanf(fp,"%f", &b529); 
   fscanf(fp,"%f", &b547); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b441); 
   fscanf(fp,"%f", &b525); 
   fscanf(fp,"%f", &b534); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b417); 
   fscanf(fp,"%f", &b425); 
   fscanf(fp,"%f", &b429); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b355); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b440); 
   fscanf(fp,"%f", &b528); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b444); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b401); 
   fscanf(fp,"%f", &b409); 
   fscanf(fp,"%f", &b413); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b436); 
   fscanf(fp,"%f", &b490); 
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b455); 
   fscanf(fp,"%f", &b468); 
   fscanf(fp,"%f", &b535); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b418); 
   fscanf(fp,"%f", &b419); 
   fscanf(fp,"%f", &b430); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b459); 
   fscanf(fp,"%f", &b472); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b402); 
   fscanf(fp,"%f", &b403); 
   fscanf(fp,"%f", &b414); 
   fscanf(fp,"%f", &b448); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b450); 
   fscanf(fp,"%f", &b463); 
   fscanf(fp,"%f", &b495); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b426); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b356); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b410); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b491); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b346); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b400); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b421); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b351); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b405); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b274); 

   fclose(fp);
   res=-( 2*b1*b312 - 2*b1 - 4*b312 + 2*b1*b377 - 7*b377 + 2*b2*b282 - 7*b2 +
    b282 + 2*b2*b284 - 2*b284 + 2*b2*b310 - 3*b310 + 2*b2*b312 + 2*b2*b363
    - b363 + 2*b2*b376 - 3*b376 + 2*b2*b377 + 2*b3*b377 - 3*b3 + 2*b3*b395
    - 3*b395 + 2*b3*b538 + b538 + 2*b4*b395 - 2*b4*b545 + 8*b545 - 2*b5*
   b363 + 3*b5 - 2*b5*b380 + 4*b380 + 2*b5*b394 - 4*b394 + 2*b5*b395 - 2*
   b5*b398 + 7*b398 - 2*b5*b541 + 4*b541 - 2*b5*b545 + 2*b6*b395 - 2*b6 +
    2*b6*b520 - 4*b520 - 2*b7*b363 - b7 - 2*b7*b373 - 2*b7*b391 + 3*b391 +
    2*b7*b394 + 2*b7*b395 + 2*b7*b519 - 2*b519 + 2*b7*b520 + 2*b8*b338 - 3*
   b8 - 4*b338 + 2*b8*b482 - 4*b482 + 2*b8*b503 - 3*b503 + 2*b9*b323 - 4*
   b9 - 3*b323 + 2*b9*b324 - 6*b324 + 2*b9*b337 - 2*b337 + 2*b9*b338 - 2*
   b9*b369 - 2*b9*b371 - 2*b9*b387 + 6*b387 - 2*b9*b389 + 9*b389 + 2*b9*
   b481 - 3*b481 + 2*b9*b482 + 2*b9*b502 - 4*b502 + 2*b9*b503 - 2*b10*b545
    + b10 - 2*b11*b380 + 4*b11 - 2*b11*b398 - 2*b11*b541 - 2*b11*b545 + 2*
   b12*b312 - 4*b12 + 2*b12*b395 + 2*b12*b482 + 2*b12*b503 + 2*b13*b282 -
    5*b13 + 2*b13*b284 + 2*b13*b310 + 2*b13*b312 - 2*b13*b363 - 2*b13*b369
    - 2*b13*b371 - 2*b13*b387 - 2*b13*b389 + 2*b13*b394 + 2*b13*b395 + 2*
   b13*b481 + 2*b13*b482 + 2*b13*b502 + 2*b13*b503 + 2*b14*b443 - b14 - 4*
   b443 + 2*b14*b527 - 8*b527 - 2*b14*b543 + 8*b543 - 2*b15*b366 + 4*b15
    + 3*b366 - 2*b15*b374 - 2*b15*b378 + 4*b378 - 2*b15*b384 + 8*b384 - 2*
   b15*b392 + 9*b392 - 2*b15*b396 + 11*b396 + 2*b15*b442 - 2*b442 + 2*b15*
   b443 + 2*b15*b526 - 3*b526 + 2*b15*b527 - 2*b15*b539 + 3*b539 - 2*b15*
   b543 + 2*b16*b503 - b16 - 2*b17*b371 - 2*b17*b389 + 2*b17*b502 + 2*b17*
   b503 + 2*b18*b457 - b18 - 9*b457 + 2*b18*b470 - b470 - 2*b18*b544 + 9*
   b544 - 2*b19*b367 + 7*b19 + 4*b367 - 2*b19*b368 - 2*b19*b377 - 2*b19*
   b379 + 2*b379 - 2*b19*b385 + 11*b385 - 2*b19*b386 + 3*b386 - 2*b19*b395
    - 2*b19*b397 + 10*b397 + 2*b19*b456 - 3*b456 + 2*b19*b457 + 2*b19*b469
    - b469 + 2*b19*b470 - 2*b19*b538 - 2*b19*b540 + 3*b540 - 2*b19*b544 +
    2*b20*b503 - b20 - 2*b21*b371 + 3*b21 - 2*b21*b377 - 2*b21*b389 - 2*b21
   *b395 + 2*b21*b502 + 2*b21*b503 - 2*b21*b538 + 2*b26*b533 - b26 - 12*
   b533 - 2*b27*b375 + 3*b375 - 2*b27*b393 + 11*b393 + 2*b27*b532 - 3*b532
    + 2*b27*b533 + 2*b28*b428 - 12*b428 - 2*b28*b545 - 2*b29*b365 + 4*b29
    + 5*b365 - 2*b29*b380 - 2*b29*b383 + 11*b383 - 2*b29*b398 + 2*b29*b427
    - 3*b427 + 2*b29*b428 - 2*b29*b541 - 2*b29*b545 + 2*b30*b358 - b30 - 8
   *b358 + 2*b30*b520 - 2*b30*b544 + 2*b31*b343 + 2*b31*b344 - 6*b344 + 2*
   b31*b357 - 2*b357 + 2*b31*b358 - 2*b31*b373 - 2*b31*b379 - 2*b31*b391
    - 2*b31*b397 + 2*b31*b519 + 2*b31*b520 - 2*b31*b540 - 2*b31*b544 + 2*
   b32*b482 - 3*b32 + 2*b32*b527 + 2*b32*b533 - 2*b33*b369 - 2*b33*b374 -
    2*b33*b375 - 2*b33*b387 - 2*b33*b392 - 2*b33*b393 + 2*b33*b481 + 2*b33*
   b482 + 2*b33*b526 + 2*b33*b527 + 2*b33*b532 + 2*b33*b533 + 2*b34*b312
    - 2*b34 + 2*b34*b358 + 2*b34*b527 - 2*b34*b543 + 2*b35*b282 - 4*b35 +
    2*b35*b284 + 2*b35*b310 + 2*b35*b312 + 2*b35*b343 + 2*b35*b344 + 2*b35*
   b357 + 2*b35*b358 - 2*b35*b374 - 2*b35*b378 - 2*b35*b392 - 2*b35*b396
    + 2*b35*b526 + 2*b35*b527 - 2*b35*b539 - 2*b35*b543 + 2*b36*b377 - 4*
   b36 + 2*b36*b412 - 4*b412 + 2*b36*b428 + 2*b36*b457 + 2*b37*b363 - 3*
   b37 - 2*b37*b364 + b364 - 2*b37*b365 - 2*b37*b367 + 2*b37*b376 + 2*b37*
   b377 - 2*b37*b382 + 3*b382 - 2*b37*b383 - 2*b37*b385 + 2*b37*b411 -
    b411 + 2*b37*b412 + 2*b37*b427 + 2*b37*b428 + 2*b37*b456 + 2*b37*b457
    + 2*b38*b395 - b38 + 2*b38*b493 - 4*b493 - 2*b38*b544 - 2*b39*b363 + 3
   *b39 - 2*b39*b370 + 2*b370 - 2*b39*b379 - 2*b39*b388 + 4*b388 + 2*b39*
   b394 + 2*b39*b395 - 2*b39*b397 + 2*b39*b492 - b492 + 2*b39*b493 - 2*b39
   *b540 - 2*b39*b544 + 2*b40*b338 - 5*b40 + 2*b40*b377 + 2*b40*b443 + 2*
   b40*b457 + 2*b40*b533 + 2*b41*b323 - 7*b41 + 2*b41*b324 + 2*b41*b337 +
    2*b41*b338 + 2*b41*b363 - 2*b41*b366 - 2*b41*b367 - 2*b41*b375 + 2*b41*
   b376 + 2*b41*b377 - 2*b41*b384 - 2*b41*b385 - 2*b41*b393 + 2*b41*b442
    + 2*b41*b443 + 2*b41*b456 + 2*b41*b457 + 2*b41*b532 + 2*b41*b533 + 2*
   b42*b428 + b42 - 2*b42*b543 - 2*b42*b545 - 2*b43*b365 + 8*b43 - 2*b43*
   b378 - 2*b43*b380 - 2*b43*b383 - 2*b43*b396 - 2*b43*b398 + 2*b43*b427
    + 2*b43*b428 - 2*b43*b539 - 2*b43*b541 - 2*b43*b543 - 2*b43*b545 - 2*
   b46*b284 + 4*b46 - 2*b46*b318 + 2*b318 - 2*b46*b363 - 2*b46*b380 - 2*
   b47*b284 + 4*b47 - 2*b47*b304 - 2*b47*b363 - 2*b47*b373 - 2*b48*b277 +
    4*b48 + 2*b277 - 2*b48*b296 - 2*b48*b300 + b300 + 2*b48*b323 - 2*b48*
   b369 - 2*b48*b371 - 2*b49*b318 + 2*b49 - 2*b49*b380 + 2*b50*b282 + 5*
   b50 - 2*b50*b284 - 2*b50*b296 - 2*b50*b300 - 2*b50*b363 - 2*b50*b369 -
    2*b50*b371 - 2*b51*b290 + 6*b51 + 4*b290 - 2*b51*b306 + 4*b306 - 2*b51*
   b314 + 6*b314 - 2*b51*b366 - 2*b51*b374 - 2*b51*b378 - 2*b52*b300 + 2*
   b52 - 2*b52*b371 - 2*b53*b292 + 8*b53 + 7*b292 - 2*b53*b294 + b294 - 2*
   b53*b312 - 2*b53*b316 + 5*b316 - 2*b53*b367 - 2*b53*b368 - 2*b53*b377
    - 2*b53*b379 - 2*b54*b300 + 4*b54 - 2*b54*b312 - 2*b54*b371 - 2*b54*
   b377 - 2*b57*b308 + 2*b57 + 5*b308 - 2*b57*b375 - 2*b58*b288 + 4*b58 +
    7*b288 - 2*b58*b318 - 2*b58*b365 - 2*b58*b380 - 2*b59*b280 + 4*b59 + 3*
   b280 - 2*b59*b304 - 2*b59*b316 + 2*b59*b343 - 2*b59*b373 - 2*b59*b379
    - 2*b60*b296 + 6*b60 - 2*b60*b306 - 2*b60*b308 - 2*b60*b369 - 2*b60*
   b374 - 2*b60*b375 - 2*b61*b280 + 3*b61 + 2*b61*b282 - 2*b61*b306 - 2*
   b61*b314 + 2*b61*b343 - 2*b61*b374 - 2*b61*b378 - 2*b62*b282 + 7*b62 -
    2*b62*b286 + 3*b286 - 2*b62*b288 - 2*b62*b292 - 2*b62*b364 - 2*b62*b365
    - 2*b62*b367 - 2*b63*b284 + 6*b63 - 2*b63*b298 + 3*b298 - 2*b63*b316
    - 2*b63*b363 - 2*b63*b370 - 2*b63*b379 - 2*b64*b277 + 7*b64 - 2*b64*
   b282 - 2*b64*b290 - 2*b64*b292 - 2*b64*b308 + 2*b64*b323 - 2*b64*b366
    - 2*b64*b367 - 2*b64*b375 - 2*b65*b288 + 6*b65 - 2*b65*b314 - 2*b65*
   b318 - 2*b65*b365 - 2*b65*b378 - 2*b65*b380 - 2*b67*b391 - b67 + 2*b67*
   b398 + 2*b67*b523 + 2*b68*b324 - 2*b68 + 2*b68*b341 - 2*b68*b387 - 2*
   b68*b389 + 2*b68*b485 + 2*b68*b506 + 2*b506 - 2*b69*b398 + b69 + 2*b70*
   b284 - 3*b70 + 2*b70*b318 - 2*b70*b387 - 2*b70*b389 + 2*b70*b398 + 2*
   b70*b485 + 2*b70*b506 - 2*b71*b384 - 2*b71*b392 - 2*b71*b396 + 2*b71*
   b446 - 2*b446 + 2*b71*b530 - 4*b530 + 2*b71*b548 - 5*b548 - 2*b72*b389
    + 2*b72*b506 - 2*b73*b385 - 2*b73*b386 - 2*b73*b395 - 2*b73*b397 + 2*
   b73*b460 - 4*b460 + 2*b73*b473 + 2*b73*b545 + 2*b73*b550 - 4*b550 - 2*
   b74*b389 - 2*b74*b395 + 2*b74*b506 + 2*b74*b545 - 2*b77*b393 + 2*b77*
   b536 - 4*b536 - 2*b78*b383 + b78 - 2*b78*b398 + 2*b78*b431 - 6*b431 + 2
   *b79*b344 - 2*b79 + 2*b79*b361 - 4*b361 - 2*b79*b391 - 2*b79*b397 + 2*
   b79*b523 + 2*b79*b550 - 2*b80*b387 - 2*b80*b392 - 2*b80*b393 + 2*b80*
   b485 + 2*b80*b530 + 2*b80*b536 + 2*b81*b284 - 4*b81 + 2*b81*b318 + 2*
   b81*b344 + 2*b81*b361 - 2*b81*b392 - 2*b81*b396 + 2*b81*b530 + 2*b81*
   b548 + 2*b82*b363 - 2*b82 + 2*b82*b380 - 2*b82*b382 - 2*b82*b383 - 2*
   b82*b385 + 2*b82*b415 - 2*b415 + 2*b82*b431 + 2*b82*b460 - 2*b83*b388
    - b83 - 2*b83*b397 + 2*b83*b398 + 2*b83*b496 - 2*b496 + 2*b83*b550 + 2
   *b84*b324 - 4*b84 + 2*b84*b341 + 2*b84*b363 + 2*b84*b380 - 2*b84*b384
    - 2*b84*b385 - 2*b84*b393 + 2*b84*b446 + 2*b84*b460 + 2*b84*b536 - 2*
   b85*b383 + b85 - 2*b85*b396 - 2*b85*b398 + 2*b85*b431 + 2*b85*b548 + 2*
   b87*b324 - 2*b87 + 2*b87*b334 - 2*b334 - 2*b87*b387 - 2*b87*b389 + 2*
   b87*b478 - 2*b478 + 2*b87*b499 - 2*b88*b398 + 2*b88 - 2*b88*b523 + 2*
   b89*b284 - 3*b89 + 2*b89*b304 - 2*b89*b387 - 2*b89*b389 + 2*b89*b391 +
    2*b89*b478 + 2*b89*b499 - 2*b90*b384 + 4*b90 - 2*b90*b392 - 2*b90*b396
    + 2*b90*b439 - 2*b439 - 2*b90*b517 + 4*b517 - 2*b90*b521 + 4*b521 - 2*
   b91*b389 + 2*b91*b499 - 2*b92*b385 + 4*b92 - 2*b92*b386 - 2*b92*b395 -
    2*b92*b397 + 2*b92*b453 - 4*b453 + 2*b92*b466 - 2*b92*b520 - 2*b92*b522
    + 3*b522 - 2*b93*b389 + 2*b93 - 2*b93*b395 + 2*b93*b499 - 2*b93*b520
    - 2*b96*b393 + 2*b96 - 2*b96*b518 + 4*b518 - 2*b97*b383 + 2*b97 - 2*
   b97*b398 + 2*b97*b424 - 4*b424 - 2*b97*b523 + 2*b98*b344 + b98 + 2*b98*
   b354 - 3*b354 - 2*b98*b391 - 2*b98*b397 - 2*b98*b522 - 2*b99*b387 + 4*
   b99 - 2*b99*b392 - 2*b99*b393 + 2*b99*b478 - 2*b99*b517 - 2*b99*b518 +
    2*b100*b284 + 2*b100*b304 + 2*b100*b344 + 2*b100*b354 - 2*b100*b392 - 2
   *b100*b396 - 2*b100*b517 - 2*b100*b521 + 2*b101*b363 - 2*b101 + 2*b101*
   b373 - 2*b101*b382 - 2*b101*b383 - 2*b101*b385 + 2*b101*b408 - 2*b408
    + 2*b101*b424 + 2*b101*b453 - 2*b102*b388 + b102 + 2*b102*b391 - 2*
   b102*b397 + 2*b102*b489 - 2*b489 - 2*b102*b522 + 2*b103*b324 - 2*b103
    + 2*b103*b334 + 2*b103*b363 + 2*b103*b373 - 2*b103*b384 - 2*b103*b385
    - 2*b103*b393 + 2*b103*b439 + 2*b103*b453 - 2*b103*b518 - 2*b104*b383
    + 4*b104 - 2*b104*b396 - 2*b104*b398 + 2*b104*b424 - 2*b104*b521 - 2*
   b104*b523 - 2*b106*b341 + 3*b106 - 2*b106*b485 - 2*b106*b506 + 2*b107*
   b277 - 2*b107 + 2*b107*b296 + 2*b107*b300 - 2*b107*b324 - 2*b107*b330
    - b330 - 2*b107*b332 - b332 + 2*b107*b387 + 2*b107*b389 - 2*b108*b327
    + 5*b108 + b327 - 2*b108*b335 - 2*b108*b339 + 2*b339 + 2*b108*b435 - 4
   *b435 + 2*b108*b437 - 4*b437 - 2*b108*b479 + 6*b479 - 2*b108*b483 + 7*
   b483 - 2*b108*b500 + 8*b500 - 2*b108*b504 + 8*b504 - 2*b109*b332 + 2*
   b109 - 2*b109*b476 - 2*b110*b328 + 4*b110 + b328 - 2*b110*b329 - 2*b110
   *b338 - 2*b110*b340 + 2*b110*b449 - 7*b449 + 2*b110*b451 - 10*b451 + 2*
   b110*b462 - b462 + 2*b110*b464 - 2*b464 - 2*b110*b482 - 2*b110*b484 + 5
   *b484 - 2*b110*b503 - 2*b110*b505 + 10*b505 - 2*b111*b332 + 5*b111 - 2*
   b111*b338 - 2*b111*b476 - 2*b111*b482 - 2*b111*b503 - 2*b114*b336 + 3*
   b114 + b336 - 2*b114*b480 + 6*b480 - 2*b114*b501 + 12*b501 - 2*b115*
   b326 + 2*b115 + 2*b326 - 2*b115*b341 + 2*b115*b420 - 7*b420 + 2*b115*
   b422 - 12*b422 - 2*b115*b485 - 2*b115*b506 - 2*b116*b322 + 5*b116 - 2*
   b116*b334 - 2*b116*b340 + 2*b116*b350 - 4*b350 + 2*b116*b352 - 8*b352
    - 2*b116*b478 - 2*b116*b484 - 2*b116*b499 - 2*b116*b505 - 2*b117*b330
    + 6*b117 - 2*b117*b335 - 2*b117*b336 + 2*b117*b476 - 2*b117*b479 - 2*
   b117*b480 - 2*b117*b500 - 2*b117*b501 + 2*b118*b277 + 2*b118 + 2*b118*
   b296 + 2*b118*b300 - 2*b118*b322 - 2*b118*b335 - 2*b118*b339 + 2*b118*
   b350 + 2*b118*b352 - 2*b118*b479 - 2*b118*b483 - 2*b118*b500 - 2*b118*
   b504 - 2*b119*b323 - 4*b119 - 2*b119*b325 - 2*b119*b326 - 2*b119*b328
    + 2*b119*b369 + 2*b119*b371 + 2*b119*b404 - 3*b404 + 2*b119*b406 - 4*
   b406 + 2*b119*b420 + 2*b119*b422 + 2*b119*b449 + 2*b119*b451 - 2*b120*
   b324 + 3*b120 - 2*b120*b331 - 2*b120*b340 + 2*b120*b387 + 2*b120*b389
    - 2*b120*b475 + 3*b475 - 2*b120*b484 + 2*b120*b487 - 4*b487 - 2*b120*
   b505 - 2*b121*b323 - 2*b121 - 2*b121*b327 - 2*b121*b328 + 2*b121*b330
    + 2*b121*b332 - 2*b121*b336 + 2*b121*b369 + 2*b121*b371 + 2*b121*b435
    + 2*b121*b437 + 2*b121*b449 + 2*b121*b451 - 2*b121*b480 - 2*b121*b501
    - 2*b122*b326 + 5*b122 - 2*b122*b339 - 2*b122*b341 + 2*b122*b420 + 2*
   b122*b422 - 2*b122*b483 - 2*b122*b485 - 2*b122*b504 - 2*b122*b506 + 2*
   b124*b318 - 4*b124 + 2*b124*b398 + 2*b124*b485 + 2*b124*b506 + 2*b125*
   b446 - 3*b125 + 2*b125*b530 + 2*b125*b548 + 2*b126*b506 - b126 + 2*b127
   *b460 - 4*b127 + 2*b127*b473 + 2*b127*b545 + 2*b127*b550 + 2*b128*b506
    - 2*b128 + 2*b128*b545 + 2*b131*b536 - b131 + 2*b132*b431 - b132 + 2*
   b133*b361 - 3*b133 + 2*b133*b523 + 2*b133*b550 + 2*b134*b485 - 3*b134
    + 2*b134*b530 + 2*b134*b536 + 2*b135*b318 - 4*b135 + 2*b135*b361 + 2*
   b135*b530 + 2*b135*b548 + 2*b136*b380 - 4*b136 + 2*b136*b415 + 2*b136*
   b431 + 2*b136*b460 + 2*b137*b398 - 3*b137 + 2*b137*b496 + 2*b137*b550
    + 2*b138*b341 - 5*b138 + 2*b138*b380 + 2*b138*b446 + 2*b138*b460 + 2*
   b138*b536 + 2*b139*b431 - 2*b139 + 2*b139*b548 - 2*b141*b290 + 8*b141
    - 2*b141*b306 - 2*b141*b314 - 2*b141*b384 - 2*b141*b392 - 2*b141*b396
    + 2*b141*b435 + 2*b141*b437 - 2*b141*b479 - 2*b141*b483 - 2*b141*b500
    - 2*b141*b504 - 2*b142*b300 + 3*b142 - 2*b142*b389 - 2*b142*b476 - 2*
   b143*b292 + 8*b143 - 2*b143*b294 - 2*b143*b312 - 2*b143*b316 - 2*b143*
   b385 - 2*b143*b386 - 2*b143*b395 - 2*b143*b397 + 2*b143*b449 + 2*b143*
   b451 + 2*b143*b462 + 2*b143*b464 - 2*b143*b482 - 2*b143*b484 - 2*b143*
   b503 - 2*b143*b505 - 2*b144*b300 + 7*b144 - 2*b144*b312 - 2*b144*b389
    - 2*b144*b395 - 2*b144*b476 - 2*b144*b482 - 2*b144*b503 - 2*b147*b308
    + 4*b147 - 2*b147*b393 - 2*b147*b480 - 2*b147*b501 - 2*b148*b288 + 4*
   b148 - 2*b148*b318 - 2*b148*b383 - 2*b148*b398 + 2*b148*b420 + 2*b148*
   b422 - 2*b148*b485 - 2*b148*b506 - 2*b149*b280 + 6*b149 - 2*b149*b304
    - 2*b149*b316 + 2*b149*b344 + 2*b149*b350 + 2*b149*b352 - 2*b149*b391
    - 2*b149*b397 - 2*b149*b478 - 2*b149*b484 - 2*b149*b499 - 2*b149*b505
    - 2*b150*b296 + 9*b150 - 2*b150*b306 - 2*b150*b308 - 2*b150*b387 - 2*
   b150*b392 - 2*b150*b393 + 2*b150*b476 - 2*b150*b479 - 2*b150*b480 - 2*
   b150*b500 - 2*b150*b501 - 2*b151*b280 + 3*b151 + 2*b151*b284 + 2*b151*
   b296 + 2*b151*b300 - 2*b151*b306 - 2*b151*b314 + 2*b151*b344 + 2*b151*
   b350 + 2*b151*b352 - 2*b151*b392 - 2*b151*b396 - 2*b151*b479 - 2*b151*
   b483 - 2*b151*b500 - 2*b151*b504 - 2*b152*b282 - 2*b152 - 2*b152*b286
    - 2*b152*b288 - 2*b152*b292 + 2*b152*b363 + 2*b152*b369 + 2*b152*b371
    - 2*b152*b382 - 2*b152*b383 - 2*b152*b385 + 2*b152*b404 + 2*b152*b406
    + 2*b152*b420 + 2*b152*b422 + 2*b152*b449 + 2*b152*b451 - 2*b153*b284
    + 5*b153 - 2*b153*b298 - 2*b153*b316 + 2*b153*b387 - 2*b153*b388 + 2*
   b153*b389 - 2*b153*b397 - 2*b153*b475 - 2*b153*b484 + 2*b153*b487 - 2*
   b153*b505 - 2*b154*b277 - 2*b154*b282 - 2*b154*b290 - 2*b154*b292 - 2*
   b154*b308 + 2*b154*b324 + 2*b154*b330 + 2*b154*b332 + 2*b154*b363 + 2*
   b154*b369 + 2*b154*b371 - 2*b154*b384 - 2*b154*b385 - 2*b154*b393 + 2*
   b154*b435 + 2*b154*b437 + 2*b154*b449 + 2*b154*b451 - 2*b154*b480 - 2*
   b154*b501 - 2*b155*b288 + 8*b155 - 2*b155*b314 - 2*b155*b318 - 2*b155*
   b383 - 2*b155*b396 - 2*b155*b398 + 2*b155*b420 + 2*b155*b422 - 2*b155*
   b483 - 2*b155*b485 - 2*b155*b504 - 2*b155*b506 - 2*b157*b437 - b157 + 2
   *b157*b500 + 2*b157*b504 - 2*b158*b433 + 2*b158 + b433 - 2*b158*b434 -
    2*b158*b443 - 2*b158*b445 + 2*b158*b454 - 5*b454 + 2*b158*b458 - b458
    + 2*b158*b467 + b467 + 2*b158*b471 + b471 - 2*b158*b527 - 2*b158*b529
    + b529 + 2*b158*b543 - 2*b158*b547 - b547 - 2*b159*b437 - 2*b159*b443
    + 2*b159*b500 + 2*b159*b504 - 2*b159*b527 + 2*b159*b543 - 2*b162*b441
    + b162 + b441 - 2*b162*b525 + 2*b525 + 2*b162*b534 + b534 + 2*b163*
   b417 - 2*b417 + 2*b163*b425 - 5*b425 + 2*b163*b429 - 2*b429 - 2*b163*
   b446 - 2*b163*b530 - 2*b163*b548 + 2*b164*b347 - b164 + 2*b164*b355 -
    b355 + 2*b164*b359 + b359 - 2*b164*b439 - 2*b164*b445 + 2*b164*b517 + 2
   *b164*b521 - 2*b164*b529 - 2*b164*b547 - 2*b165*b435 - 2*b165*b440 -
    b440 - 2*b165*b441 + 2*b165*b479 + 2*b165*b483 - 2*b165*b525 + 2*b165*
   b528 + 3*b528 + 2*b165*b534 + 2*b166*b290 - 4*b166 + 2*b166*b306 + 2*
   b166*b314 + 2*b166*b347 + 2*b166*b355 + 2*b166*b359 - 2*b166*b440 - 2*
   b166*b444 + b444 + 2*b167*b366 - 10*b167 + 2*b167*b374 + 2*b167*b378 +
    2*b167*b401 + 2*b167*b409 - 3*b409 + 2*b167*b413 - b413 + 2*b167*b417
    + 2*b167*b425 + 2*b167*b429 - 2*b167*b433 + 2*b167*b454 + 2*b167*b458
    + 2*b168*b384 - b168 + 2*b168*b392 + 2*b168*b396 - 2*b168*b436 - 2*
   b168*b445 + 2*b168*b490 - 3*b490 + 2*b168*b494 - b494 - 2*b168*b529 - 2
   *b168*b547 + 2*b169*b327 - 8*b169 + 2*b169*b335 + 2*b169*b339 + 2*b169*
   b366 + 2*b169*b374 + 2*b169*b378 - 2*b169*b433 + 2*b169*b440 - 2*b169*
   b441 + 2*b169*b444 + 2*b169*b454 + 2*b169*b458 - 2*b169*b525 + 2*b169*
   b534 + 2*b170*b417 + 2*b170 + 2*b170*b425 + 2*b170*b429 - 2*b170*b444
    - 2*b170*b446 - 2*b170*b528 - 2*b170*b530 - 2*b170*b548 + 2*b172*b451
    + 2*b172*b464 - 2*b172*b503 - 2*b172*b505 - 2*b173*b503 + b173 - 2*
   b176*b501 + b176 + 2*b177*b422 - 2*b177*b506 + 2*b178*b352 + b178 - 2*
   b178*b499 - 2*b178*b505 + 2*b179*b476 + b179 - 2*b179*b500 - 2*b179*
   b501 + 2*b180*b300 + 2*b180*b352 - 2*b180*b500 - 2*b180*b504 + 2*b181*
   b371 - 4*b181 + 2*b181*b406 + 2*b181*b422 + 2*b181*b451 + 2*b182*b389
    - b182 + 2*b182*b487 - 2*b182*b505 + 2*b183*b332 - 3*b183 + 2*b183*
   b371 + 2*b183*b437 + 2*b183*b451 - 2*b183*b501 + 2*b184*b422 + b184 - 2
   *b184*b504 - 2*b184*b506 - 2*b186*b451 + b186 - 2*b186*b457 - 2*b186*
   b464 - 2*b186*b470 + 2*b186*b503 + 2*b186*b505 + 2*b186*b544 - 2*b189*
   b455 - 2*b189*b468 + 3*b468 + 2*b189*b533 + 2*b189*b535 - 3*b535 + 2*
   b190*b418 - 2*b418 + 2*b190*b419 - 3*b419 + 2*b190*b428 + 2*b190*b430
    - 3*b430 - 2*b190*b460 - 2*b190*b473 - 2*b190*b545 - 2*b190*b550 + 2*
   b191*b348 - b191 + 2*b348 + 2*b191*b349 - 2*b349 + 2*b191*b358 + 2*b191
   *b360 - b360 - 2*b191*b453 - 2*b191*b459 - 2*b459 - 2*b191*b466 - 2*
   b191*b472 + 2*b472 + 2*b191*b520 + 2*b191*b522 - 2*b191*b544 - 2*b192*
   b449 - 2*b192*b454 - 2*b192*b455 - 2*b192*b462 - 2*b192*b467 - 2*b192*
   b468 + 2*b192*b482 + 2*b192*b484 + 2*b192*b527 + 2*b192*b529 + 2*b192*
   b533 + 2*b192*b535 + 2*b193*b292 - 6*b193 + 2*b193*b294 + 2*b193*b312
    + 2*b193*b316 + 2*b193*b348 + 2*b193*b349 + 2*b193*b358 + 2*b193*b360
    - 2*b193*b454 - 2*b193*b458 - 2*b193*b467 - 2*b193*b471 + 2*b193*b527
    + 2*b193*b529 - 2*b193*b543 + 2*b193*b547 + 2*b194*b367 - 15*b194 + 2*
   b194*b368 + 2*b194*b377 + 2*b194*b379 + 2*b194*b402 + 2*b194*b403 -
    b403 + 2*b194*b412 + 2*b194*b414 - b414 + 2*b194*b418 + 2*b194*b419 + 2
   *b194*b428 + 2*b194*b430 + 2*b194*b448 - 2*b448 + 2*b194*b457 + 2*b194*
   b459 + 2*b195*b385 - b195 + 2*b195*b386 + 2*b195*b395 + 2*b195*b397 - 2
   *b195*b450 + b450 - 2*b195*b459 - 2*b195*b463 + b463 - 2*b195*b472 + 2*
   b195*b493 + 2*b195*b495 - 2*b495 - 2*b195*b544 + 2*b196*b328 - 15*b196
    + 2*b196*b329 + 2*b196*b338 + 2*b196*b340 + 2*b196*b367 + 2*b196*b368
    + 2*b196*b377 + 2*b196*b379 + 2*b196*b433 + 2*b196*b434 + 2*b196*b443
    + 2*b196*b445 + 2*b196*b448 - 2*b196*b455 + 2*b196*b457 + 2*b196*b459
    - 2*b196*b468 + 2*b196*b533 + 2*b196*b535 + 2*b197*b418 + 2*b197 + 2*
   b197*b419 + 2*b197*b428 + 2*b197*b430 - 2*b197*b458 - 2*b197*b460 - 2*
   b197*b471 - 2*b197*b473 - 2*b197*b543 - 2*b197*b545 + 2*b197*b547 - 2*
   b197*b550 - 2*b201*b501 + 2*b201*b533 + 2*b202*b422 + 2*b202*b428 - 2*
   b202*b506 - 2*b202*b545 + 2*b203*b352 + 2*b203*b358 - 2*b203*b499 - 2*
   b203*b505 + 2*b203*b520 - 2*b203*b544 + 2*b204*b476 - 2*b204 + 2*b204*
   b482 - 2*b204*b500 - 2*b204*b501 + 2*b204*b527 + 2*b204*b533 + 2*b205*
   b300 - 2*b205 + 2*b205*b312 + 2*b205*b352 + 2*b205*b358 - 2*b205*b500
    - 2*b205*b504 + 2*b205*b527 - 2*b205*b543 + 2*b206*b371 - 8*b206 + 2*
   b206*b377 + 2*b206*b406 + 2*b206*b412 + 2*b206*b422 + 2*b206*b428 + 2*
   b206*b451 + 2*b206*b457 + 2*b207*b389 - 2*b207 + 2*b207*b395 + 2*b207*
   b487 + 2*b207*b493 - 2*b207*b505 - 2*b207*b544 + 2*b208*b332 - 8*b208
    + 2*b208*b338 + 2*b208*b371 + 2*b208*b377 + 2*b208*b437 + 2*b208*b443
    + 2*b208*b451 + 2*b208*b457 - 2*b208*b501 + 2*b208*b533 + 2*b209*b422
    + 2*b209 + 2*b209*b428 - 2*b209*b504 - 2*b209*b506 - 2*b209*b543 - 2*
   b209*b545 + 2*b232*b426 - 3*b426 - 2*b232*b536 + 2*b233*b356 - b233 + 2
   *b233*b518 - 2*b233*b535 + 2*b234*b480 - 2*b234 + 2*b234*b525 + 2*b235*
   b308 - 2*b235 + 2*b235*b356 + 2*b235*b525 - 2*b235*b534 + 2*b236*b375
    - 4*b236 + 2*b236*b410 - b410 + 2*b236*b426 + 2*b236*b455 + 2*b237*
   b393 - b237 + 2*b237*b491 - b491 - 2*b237*b535 + 2*b238*b336 - 4*b238
    + 2*b238*b375 + 2*b238*b441 + 2*b238*b455 + 2*b239*b426 + b239 - 2*
   b239*b534 - 2*b239*b536 + 2*b241*b346 - 2*b241 + 2*b346 + 2*b241*b361
    - 2*b241*b424 - 2*b241*b430 + 2*b241*b523 + 2*b241*b550 - 2*b242*b420
    - 2*b242*b425 - 2*b242*b426 + 2*b242*b485 + 2*b242*b530 + 2*b242*b536
    + 2*b243*b288 - 4*b243 + 2*b243*b318 + 2*b243*b346 + 2*b243*b361 - 2*
   b243*b425 - 2*b243*b429 + 2*b243*b530 + 2*b243*b548 + 2*b244*b365 - 5*
   b244 + 2*b244*b380 + 2*b244*b400 + 2*b244*b415 - 2*b244*b418 + 2*b244*
   b431 + 2*b244*b460 + 2*b245*b383 - 2*b245 + 2*b245*b398 - 2*b245*b421
    + b421 - 2*b245*b430 + 2*b245*b496 + 2*b245*b550 + 2*b246*b326 - 4*
   b246 + 2*b246*b341 + 2*b246*b365 + 2*b246*b380 - 2*b246*b417 - 2*b246*
   b418 - 2*b246*b426 + 2*b246*b446 + 2*b246*b460 + 2*b246*b536 - 2*b247*
   b429 + 2*b247*b548 - 2*b249*b350 + b249 - 2*b249*b355 - 2*b249*b356 + 2
   *b249*b478 + 2*b249*b484 - 2*b249*b517 - 2*b249*b518 + 2*b249*b529 + 2*
   b249*b535 + 2*b250*b280 - 3*b250 + 2*b250*b304 + 2*b250*b316 + 2*b250*
   b354 - 2*b250*b355 - 2*b250*b359 + 2*b250*b360 - 2*b250*b517 - 2*b250*
   b521 + 2*b250*b529 + 2*b250*b547 - 2*b251*b343 - 4*b251 - 2*b251*b345
    + 2*b345 - 2*b251*b346 - 2*b251*b348 + 2*b251*b373 + 2*b251*b379 + 2*
   b251*b408 + 2*b251*b414 + 2*b251*b424 + 2*b251*b430 + 2*b251*b453 + 2*
   b251*b459 - 2*b252*b344 - 2*b252*b351 + 2*b351 - 2*b252*b360 + 2*b252*
   b391 + 2*b252*b397 + 2*b252*b489 + 2*b252*b495 - 2*b252*b522 + 2*b253*
   b322 - 5*b253 + 2*b253*b334 + 2*b253*b340 - 2*b253*b343 - 2*b253*b347
    - 2*b253*b348 - 2*b253*b356 + 2*b253*b373 + 2*b253*b379 + 2*b253*b439
    + 2*b253*b445 + 2*b253*b453 + 2*b253*b459 - 2*b253*b518 + 2*b253*b535
    - 2*b254*b346 + 3*b254 - 2*b254*b359 - 2*b254*b361 + 2*b254*b424 + 2*
   b254*b430 - 2*b254*b521 - 2*b254*b523 + 2*b254*b547 - 2*b254*b550 + 2*
   b256*b296 - 3*b256 + 2*b256*b306 + 2*b256*b308 + 2*b256*b350 + 2*b256*
   b355 + 2*b256*b356 - 2*b256*b479 - 2*b256*b483 + 2*b256*b525 - 2*b256*
   b528 - 2*b256*b534 + 2*b257*b369 - 12*b257 + 2*b257*b374 + 2*b257*b375
    + 2*b257*b404 + 2*b257*b409 + 2*b257*b410 + 2*b257*b420 + 2*b257*b425
    + 2*b257*b426 + 2*b257*b449 + 2*b257*b454 + 2*b257*b455 + 2*b258*b387
    - b258 + 2*b258*b392 + 2*b258*b393 - 2*b258*b475 - 2*b258*b484 + 2*
   b258*b490 + 2*b258*b491 - 2*b258*b529 - 2*b258*b535 + 2*b259*b330 - 10*
   b259 + 2*b259*b335 + 2*b259*b336 + 2*b259*b369 + 2*b259*b374 + 2*b259*
   b375 + 2*b259*b435 + 2*b259*b440 + 2*b259*b441 + 2*b259*b449 + 2*b259*
   b454 + 2*b259*b455 - 2*b259*b480 - 2*b259*b525 + 2*b260*b420 + 3*b260
    + 2*b260*b425 + 2*b260*b426 - 2*b260*b483 - 2*b260*b485 - 2*b260*b528
    - 2*b260*b530 - 2*b260*b534 - 2*b260*b536 - 2*b262*b282 - 2*b262*b286
    - 2*b262*b288 - 2*b262*b292 - 2*b262*b343 - 2*b262*b345 - 2*b262*b346
    - 2*b262*b348 + 2*b262*b374 + 2*b262*b378 + 2*b262*b409 + 2*b262*b413
    + 2*b262*b425 + 2*b262*b429 + 2*b262*b454 + 2*b262*b458 - 2*b263*b284
    + 4*b263 - 2*b263*b298 - 2*b263*b316 - 2*b263*b344 - 2*b263*b351 - 2*
   b263*b360 + 2*b263*b392 + 2*b263*b396 + 2*b263*b490 + 2*b263*b494 - 2*
   b263*b529 - 2*b263*b547 - 2*b264*b277 - 2*b264*b282 - 2*b264*b290 - 2*
   b264*b292 - 2*b264*b308 + 2*b264*b322 + 2*b264*b335 + 2*b264*b339 - 2*
   b264*b343 - 2*b264*b347 - 2*b264*b348 - 2*b264*b356 + 2*b264*b374 + 2*
   b264*b378 + 2*b264*b440 + 2*b264*b444 + 2*b264*b454 + 2*b264*b458 - 2*
   b264*b525 + 2*b264*b534 - 2*b265*b288 + 7*b265 - 2*b265*b314 - 2*b265*
   b318 - 2*b265*b346 - 2*b265*b359 - 2*b265*b361 + 2*b265*b425 + 2*b265*
   b429 - 2*b265*b528 - 2*b265*b530 - 2*b265*b548 - 2*b267*b363 + 6*b267
    - 2*b267*b370 - 2*b267*b379 + 2*b267*b382 + 2*b267*b383 + 2*b267*b385
    - 2*b267*b405 + b405 - 2*b267*b414 - 2*b267*b421 - 2*b267*b430 - 2*
   b267*b450 - 2*b267*b459 + 2*b268*b323 + 2*b268 + 2*b268*b325 + 2*b268*
   b326 + 2*b268*b328 + 2*b268*b364 + 2*b268*b365 - 2*b268*b366 - 2*b268*
   b375 - 2*b268*b401 - 2*b268*b402 - 2*b268*b410 - 2*b268*b417 - 2*b268*
   b418 - 2*b268*b426 + 2*b268*b433 - 2*b268*b455 - 2*b269*b365 + 9*b269
    - 2*b269*b378 - 2*b269*b380 - 2*b269*b400 - 2*b269*b413 - 2*b269*b415
    + 2*b269*b418 - 2*b269*b429 - 2*b269*b431 - 2*b269*b458 - 2*b269*b460
    + 2*b271*b324 - 7*b271 + 2*b271*b331 + 2*b271*b340 + 2*b271*b363 + 2*
   b271*b370 + 2*b271*b379 - 2*b271*b384 - 2*b271*b385 - 2*b271*b393 + 2*
   b271*b436 + 2*b271*b445 + 2*b271*b450 + 2*b271*b459 - 2*b271*b491 + 2*
   b271*b535 - 2*b272*b383 + 3*b272 - 2*b272*b396 - 2*b272*b398 + 2*b272*
   b421 + 2*b272*b430 - 2*b272*b494 - 2*b272*b496 + 2*b272*b547 - 2*b272*
   b550 - 2*b274*b326 + 9*b274 - 2*b274*b339 - 2*b274*b341 - 2*b274*b365
    - 2*b274*b378 - 2*b274*b380 + 2*b274*b417 + 2*b274*b418 + 2*b274*b426
    - 2*b274*b444 - 2*b274*b446 - 2*b274*b458 - 2*b274*b460 - 2*b274*b534
    - 2*b274*b536  - 741);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
