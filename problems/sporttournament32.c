#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament32";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b209,b243,b332,b342,b2,b107,b350,b373,b374,b3,b86,b341,b382,b4,b335,b388,b389,b5,b63,b135,b259,b6,b31,b37,b336,b337,b7,b11,b17,b362,b396,b8,b87,b110,b297,b9,b164,b229,b263,b376,b10,b26,b47,b344,b345,b108,b351,b12,b193,b196,b302,b365,b13,b91,b270,b408,b409,b14,b24,b246,b15,b114,b143,b309,b416,b16,b128,b155,b288,b368,b258,b413,b18,b68,b144,b169,b421,b19,b35,b423,b20,b100,b185,b249,b356,b21,b191,b296,b22,b170,b202,b428,b23,b70,b429,b25,b57,b123,b45,b80,b214,b217,b27,b203,b235,b433,b28,b42,b93,b29,b30,b44,b150,b435,b58,b183,b359,b411,b32,b236,b271,b33,b55,b116,b34,b56,b75,b441,b36,b324,b154,b371,b38,b39,b49,b138,b383,b50,b66,b197,b40,b273,b310,b41,b146,b275,b417,b434,b43,b120,b443,b447,b73,b96,b46,b284,b48,b127,b250,b380,b458,b51,b139,b232,b52,b328,b407,b399,b453,b234,b327,b53,b312,b54,b173,b117,b410,b430,b148,b455,b94,b124,b59,b244,b60,b61,b99,b289,b386,b450,b62,b338,b363,b445,b88,b469,b64,b137,b426,b65,b67,b112,b268,b375,b391,b460,b446,b69,b400,b205,b313,b402,b71,b72,b329,b121,b470,b74,b178,b151,b76,b285,b77,b78,b182,b79,b181,b184,b81,b216,b346,b444,b394,b82,b370,b372,b468,b83,b358,b381,b84,b222,b333,b403,b85,b347,b106,b109,b437,b471,b89,b262,b90,b385,b401,b473,b92,b238,b274,b317,b393,b95,b210,b149,b180,b97,b325,b98,b456,b213,b101,b251,b103,b219,b475,b102,b464,b387,b104,b132,b105,b412,b360,b439,b134,b432,b224,b111,b340,b301,b227,b267,b419,b113,b378,b477,b115,b237,b277,b118,b422,b119,b278,b379,b319,b331,b179,b367,b241,b122,b212,b323,b330,b125,b126,b463,b248,b129,b290,b131,b253,b478,b130,b459,b395,b133,b220,b136,b334,b405,b440,b479,b163,b264,b140,b231,b414,b228,b141,b142,b305,b352,b366,b480,b481,b145,b316,b482,b147,b280,b474,b211,b355,b282,b442,b245,b152,b153,b287,b215,b286,b156,b158,b292,b483,b157,b452,b159,b161,b254,b424,b160,b162,b257,b431,b404,b484,b398,b485,b476,b165,b198,b406,b427,b166,b265,b167,b168,b364,b487,b272,b172,b171,b392,b174,b175,b276,b240,b176,b239,b177,b242,b321,b488,b448,b449,b369,b186,b187,b189,b188,b291,b294,b190,b295,b397,b436,b192,b194,b491,b195,b390,b472,b420,b303,b199,b200,b377,b201,b311,b204,b206,b207,b315,b208,b467,b354,b283,b493,b357,b218,b252,b255,b221,b223,b425,b494,b492,b225,b226,b260,b230,b349,b415,b233,b384,b466,b314,b454,b462,b495,b322,b247,b256,b339,b299,b261,b266,b269,b461,b279,b281,b343,b326,b457,b293,b490,b348,b465,b451,b418,b298,b300,b486,b304,b306,b307,b308,b318,b320,b489,b496,b438,b353,b361;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b332); 
   fscanf(fp,"%f", &b342); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b341); 
   fscanf(fp,"%f", &b382); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b335); 
   fscanf(fp,"%f", &b388); 
   fscanf(fp,"%f", &b389); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b336); 
   fscanf(fp,"%f", &b337); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b362); 
   fscanf(fp,"%f", &b396); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b351); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b302); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b408); 
   fscanf(fp,"%f", &b409); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b309); 
   fscanf(fp,"%f", &b416); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b368); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b413); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b421); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b423); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b356); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b428); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b429); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b433); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b435); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b411); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b441); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b324); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b383); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b310); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b417); 
   fscanf(fp,"%f", &b434); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b443); 
   fscanf(fp,"%f", &b447); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b380); 
   fscanf(fp,"%f", &b458); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b328); 
   fscanf(fp,"%f", &b407); 
   fscanf(fp,"%f", &b399); 
   fscanf(fp,"%f", &b453); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b327); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b312); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b410); 
   fscanf(fp,"%f", &b430); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b455); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b386); 
   fscanf(fp,"%f", &b450); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b338); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b445); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b469); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b426); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b391); 
   fscanf(fp,"%f", &b460); 
   fscanf(fp,"%f", &b446); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b400); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b313); 
   fscanf(fp,"%f", &b402); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b329); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b470); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b346); 
   fscanf(fp,"%f", &b444); 
   fscanf(fp,"%f", &b394); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b370); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b468); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b358); 
   fscanf(fp,"%f", &b381); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b333); 
   fscanf(fp,"%f", &b403); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b437); 
   fscanf(fp,"%f", &b471); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b385); 
   fscanf(fp,"%f", &b401); 
   fscanf(fp,"%f", &b473); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b317); 
   fscanf(fp,"%f", &b393); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b325); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b456); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b475); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b464); 
   fscanf(fp,"%f", &b387); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b412); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b439); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b432); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b340); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b419); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b477); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b422); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b278); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b319); 
   fscanf(fp,"%f", &b331); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b323); 
   fscanf(fp,"%f", &b330); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b463); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b478); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b459); 
   fscanf(fp,"%f", &b395); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b334); 
   fscanf(fp,"%f", &b405); 
   fscanf(fp,"%f", &b440); 
   fscanf(fp,"%f", &b479); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b414); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b305); 
   fscanf(fp,"%f", &b352); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b480); 
   fscanf(fp,"%f", &b481); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b316); 
   fscanf(fp,"%f", &b482); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b474); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b355); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b442); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b287); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b286); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b483); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b452); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b424); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b431); 
   fscanf(fp,"%f", &b404); 
   fscanf(fp,"%f", &b484); 
   fscanf(fp,"%f", &b398); 
   fscanf(fp,"%f", &b485); 
   fscanf(fp,"%f", &b476); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b406); 
   fscanf(fp,"%f", &b427); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b487); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b392); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b321); 
   fscanf(fp,"%f", &b488); 
   fscanf(fp,"%f", &b448); 
   fscanf(fp,"%f", &b449); 
   fscanf(fp,"%f", &b369); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b294); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b295); 
   fscanf(fp,"%f", &b397); 
   fscanf(fp,"%f", &b436); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b491); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b390); 
   fscanf(fp,"%f", &b472); 
   fscanf(fp,"%f", &b420); 
   fscanf(fp,"%f", &b303); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b311); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b315); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b467); 
   fscanf(fp,"%f", &b354); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b493); 
   fscanf(fp,"%f", &b357); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b425); 
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b492); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b415); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b384); 
   fscanf(fp,"%f", &b466); 
   fscanf(fp,"%f", &b314); 
   fscanf(fp,"%f", &b454); 
   fscanf(fp,"%f", &b462); 
   fscanf(fp,"%f", &b495); 
   fscanf(fp,"%f", &b322); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b339); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b461); 
   fscanf(fp,"%f", &b279); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b326); 
   fscanf(fp,"%f", &b457); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b490); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b465); 
   fscanf(fp,"%f", &b451); 
   fscanf(fp,"%f", &b418); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b486); 
   fscanf(fp,"%f", &b304); 
   fscanf(fp,"%f", &b306); 
   fscanf(fp,"%f", &b307); 
   fscanf(fp,"%f", &b308); 
   fscanf(fp,"%f", &b318); 
   fscanf(fp,"%f", &b320); 
   fscanf(fp,"%f", &b489); 
   fscanf(fp,"%f", &b496); 
   fscanf(fp,"%f", &b438); 
   fscanf(fp,"%f", &b353); 
   fscanf(fp,"%f", &b361); 

   fclose(fp);
   res=-( (-2*b1*b209) - 2*b1 + 2*b209 + 2*b1*b243 - 2*b243 + 2*b1*b332 + 2*b1*b342
 + 2*b2*b107 - 2*b2 - 2*b107 + 2*b2*b350 - 2*b2*b373 + 2*b2*b374 + 2*b3*
b86 - 2*b3 - 2*b86 + 2*b3*b341 + 2*b3*b350 - 2*b3*b382 + 2*b4*b335 - 2*b4
 + 2*b4*b341 - 2*b4*b388 + 2*b4*b389 + 2*b5*b63 - 2*b5 - 2*b63 + 2*b5*b135
 - 2*b135 - 2*b5*b259 + 2*b259 + 2*b5*b335 - 2*b6*b31 + 2*b6 + 2*b31 + 2*
b6*b37 - 2*b37 - 2*b6*b336 - 2*b6*b337 + 2*b7*b11 - 4*b7 - 4*b11 + 2*b7*
b17 - 2*b17 + 2*b7*b362 + 2*b7*b396 + 2*b8*b87 - 2*b8 - 2*b87 + 2*b8*b110
 - 2*b110 + 2*b8*b135 - 2*b8*b297 + 2*b297 - 2*b9*b164 - 2*b9 + 2*b164 + 2
*b9*b229 - 2*b229 + 2*b9*b263 - 2*b263 + 2*b9*b376 - 2*b10*b26 + 2*b10 + 2
*b26 + 2*b10*b47 - 2*b47 - 2*b10*b344 - 2*b10*b345 + 2*b11*b108 - 2*b108
 + 2*b11*b110 + 2*b11*b351 - 2*b12*b193 - 2*b12 + 2*b193 + 2*b12*b196 - 2*
b196 + 2*b12*b302 - 4*b302 + 2*b12*b365 + 2*b13*b91 - 2*b13 - 2*b91 - 2*
b13*b270 + 4*b270 + 2*b13*b408 + 2*b13*b409 + 2*b14*b24 - 2*b14 - 2*b24 +
 2*b14*b246 - 4*b246 + 2*b15*b114 - 2*b15 - 4*b114 + 2*b15*b143 - 2*b143 -
 2*b15*b309 + 2*b309 + 2*b15*b416 + 2*b16*b128 + 2*b16 + 2*b128 - 2*b16*
b155 + 2*b155 - 2*b16*b288 - 2*b288 - 2*b16*b368 + 2*b17*b258 - 4*b258 + 2
*b17*b382 - 2*b17*b413 + 2*b18*b68 - 2*b18 - 2*b68 + 2*b18*b144 - 4*b144
 + 2*b18*b169 - 4*b169 - 2*b18*b421 + 2*b19*b35 - 2*b19 - 2*b35 + 2*b19*
b423 + 2*b20*b100 + 2*b20 + 2*b100 - 2*b20*b185 + 2*b185 - 2*b20*b249 - 2*
b249 - 2*b20*b356 - 2*b21*b191 - 2*b21 + 2*b191 + 2*b21*b296 - 4*b296 + 2*
b21*b297 + 2*b21*b373 + 2*b22*b91 - 2*b22 + 2*b22*b170 - 4*b170 + 2*b22*
b202 - 4*b202 - 2*b22*b428 - 2*b23*b68 - 2*b23 + 2*b23*b70 - 4*b70 + 2*b23
*b170 + 2*b23*b429 + 2*b24*b25 - 2*b25 - 2*b24*b57 - 2*b57 + 2*b24*b123 -
 4*b123 + 2*b25*b45 - 2*b45 + 2*b26*b80 + 2*b80 - 2*b26*b214 - 2*b214 - 2*
b26*b217 + 2*b217 + 2*b27*b114 - 2*b27 + 2*b27*b203 - 4*b203 + 2*b27*b235
 - 4*b235 - 2*b27*b433 + 2*b28*b42 - 2*b28 - 2*b42 + 2*b28*b93 - 4*b93 + 2
*b28*b203 - 2*b28*b416 + 2*b29*b30 - 2*b29 - 2*b30 - 2*b29*b44 - 2*b44 + 2
*b29*b150 - 4*b150 + 2*b29*b435 + 2*b30*b58 - 4*b58 - 2*b31*b183 - 2*b183
 + 2*b31*b359 - 2*b31*b411 + 2*b32*b144 - 4*b32 + 2*b32*b236 - 2*b236 + 2*
b32*b271 - 4*b271 + 2*b32*b433 + 2*b33*b55 - 2*b33 - 4*b55 + 2*b33*b116 -
 4*b116 + 2*b33*b236 - 2*b33*b409 - 2*b34*b35 - 2*b34 + 2*b34*b56 - 2*b56
 + 2*b34*b75 - 4*b75 + 2*b34*b441 + 2*b35*b36 - 2*b36 + 2*b35*b324 - 2*
b324 + 2*b36*b75 - 2*b37*b154 - 2*b154 + 2*b37*b371 + 2*b37*b411 + 2*b38*
b39 - 2*b38 - 2*b39 + 2*b38*b49 - 2*b49 + 2*b38*b138 - 4*b138 - 2*b38*b383
 + 2*b39*b50 - 2*b50 + 2*b39*b66 - 2*b66 - 2*b39*b197 - 2*b197 + 2*b40*
b170 - 4*b40 + 2*b40*b273 - 2*b273 + 2*b40*b310 - 4*b310 + 2*b40*b428 + 2*
b41*b70 - 4*b41 + 2*b41*b146 - 4*b146 + 2*b41*b273 + 2*b41*b409 + 2*b42*
b275 - 4*b275 + 2*b42*b417 - 2*b42*b434 + 2*b43*b44 - 2*b43 + 2*b43*b120
 - 2*b120 + 2*b43*b443 - 2*b43*b447 + 2*b44*b73 - 4*b73 + 2*b44*b96 - 4*
b96 + 2*b45*b46 - 2*b46 + 2*b45*b284 - 2*b284 - 2*b45*b443 + 2*b46*b96 + 2
*b47*b48 - 2*b48 - 2*b47*b127 - 2*b127 + 2*b47*b217 - 2*b48*b250 + 2*b250
 + 2*b48*b380 + 2*b48*b458 + 2*b49*b51 - 4*b51 + 2*b49*b139 - 2*b139 - 2*
b49*b232 + 4*b232 + 2*b50*b52 - 4*b52 + 2*b50*b328 - 2*b50*b407 + 2*b51*
b52 + 2*b51*b399 + 2*b51*b453 + 2*b52*b234 + 2*b234 + 2*b52*b327 + 2*b53*
b203 - 2*b53 + 2*b53*b312 - 2*b312 - 2*b53*b327 + 2*b53*b421 + 2*b54*b93
 - 4*b54 + 2*b54*b173 - 4*b173 + 2*b54*b312 + 2*b54*b416 + 2*b55*b117 - 4*
b117 + 2*b55*b410 + 2*b55*b430 + 2*b56*b57 + 2*b56*b148 - 2*b148 - 2*b56*
b455 + 2*b57*b94 - 4*b94 + 2*b57*b124 - 2*b124 + 2*b58*b59 - 2*b59 + 2*b58
*b244 - 4*b244 + 2*b58*b443 + 2*b59*b124 + 2*b60*b61 - 2*b60 - 2*b61 - 2*
b60*b99 - 2*b99 + 2*b60*b185 + 2*b60*b356 - 2*b61*b289 + 2*b289 + 2*b61*
b386 + 2*b61*b450 + 2*b62*b63 - 2*b62 + 2*b62*b338 + 2*b62*b363 - 2*b62*
b445 + 2*b63*b88 - 2*b88 - 2*b63*b469 + 2*b64*b88 - 4*b64 + 2*b64*b137 - 2
*b137 + 2*b64*b362 + 2*b64*b426 + 2*b65*b67 - 2*b65 - 4*b67 + 2*b65*b112
 - 2*b112 - 2*b65*b268 + 4*b268 + 2*b65*b376 + 2*b66*b375 + 2*b66*b391 - 2
*b66*b460 + 2*b67*b328 + 2*b67*b446 + 2*b67*b460 + 2*b68*b69 - 2*b69 + 2*
b68*b400 + 2*b69*b116 + 2*b69*b205 - 4*b205 - 2*b69*b313 - 2*b313 + 2*b70*
b402 + 2*b70*b434 - 2*b71*b72 - 2*b71 + 2*b72 + 2*b71*b329 + 2*b71*b332 +
 2*b71*b434 + 2*b72*b121 - 4*b121 - 2*b72*b441 - 2*b72*b470 + 2*b73*b74 - 2
*b74 + 2*b73*b178 - 2*b178 + 2*b73*b455 + 2*b74*b121 + 2*b74*b151 - 2*b151
 - 2*b74*b423 + 2*b75*b76 - 2*b76 + 2*b75*b285 - 4*b285 + 2*b76*b151 + 2*
b77*b78 - 2*b77 - 2*b78 + 2*b77*b182 - 2*b182 - 2*b78*b79 - 2*b79 + 2*b78*
b181 - 2*b181 + 2*b78*b184 - 4*b184 + 2*b79*b81 - 4*b81 + 2*b79*b155 + 2*
b79*b368 - 2*b80*b216 - 2*b216 - 2*b80*b346 - 2*b80*b444 + 2*b81*b184 + 2*
b81*b394 + 2*b81*b444 - 2*b82*b370 + 2*b82 - 2*b82*b372 + 2*b82*b450 - 2*
b82*b468 - 2*b83*b358 - 2*b83 + 2*b83*b381 + 2*b83*b444 + 2*b83*b468 + 2*
b84*b222 - 2*b84 + 2*b222 - 2*b84*b333 + 2*b84*b403 + 2*b84*b468 + 2*b85*
b87 - 4*b85 + 2*b85*b107 + 2*b85*b347 + 2*b85*b445 + 2*b86*b106 - 4*b106
 - 2*b86*b109 - 2*b109 + 2*b86*b437 + 2*b87*b109 - 2*b87*b471 + 2*b88*b89
 - 2*b89 - 2*b88*b389 + 2*b89*b109 + 2*b89*b193 - 2*b89*b262 + 2*b262 - 2*
b90*b309 + 2*b90 - 2*b90*b385 + 2*b90*b401 - 2*b90*b473 + 2*b91*b92 - 2*
b92 - 2*b91*b430 + 2*b92*b146 + 2*b92*b238 - 4*b238 - 2*b92*b274 - 2*b274
 + 2*b93*b317 + 2*b317 + 2*b93*b393 + 2*b94*b95 - 4*b95 + 2*b94*b210 - 2*
b210 + 2*b94*b447 + 2*b95*b149 - 4*b149 + 2*b95*b180 - 2*b180 + 2*b95*b423
 + 2*b96*b97 - 2*b97 + 2*b96*b325 - 4*b325 + 2*b97*b180 + 2*b98*b99 - 2*
b98 + 2*b98*b456 + 2*b99*b213 - 2*b213 + 2*b99*b289 - 2*b100*b101 + 2*b101
 - 2*b100*b251 - 2*b251 - 2*b100*b358 + 2*b101*b103 - 2*b103 - 2*b101*b219
 + 2*b219 - 2*b101*b475 - 2*b102*b380 + 2*b102 - 2*b102*b381 + 2*b102*b458
 - 2*b102*b464 - 2*b103*b346 + 2*b103*b387 + 2*b103*b464 + 2*b104*b132 - 2
*b104 - 2*b132 - 2*b104*b191 + 2*b104*b333 + 2*b104*b372 + 2*b105*b191 - 4
*b105 + 2*b105*b338 + 2*b105*b412 + 2*b105*b464 + 2*b106*b108 + 2*b106*
b360 + 2*b106*b439 - 2*b107*b134 - 2*b134 + 2*b107*b432 + 2*b108*b134 - 2*
b108*b224 + 2*b224 + 2*b109*b111 - 2*b111 - 2*b110*b164 + 2*b110*b340 + 2*
b111*b134 + 2*b111*b164 - 2*b111*b301 + 2*b301 + 2*b112*b227 - 2*b227 - 2*
b112*b267 + 2*b267 + 2*b112*b419 - 2*b113*b378 + 2*b113 + 2*b113*b408 - 2*
b113*b421 - 2*b113*b477 + 2*b114*b115 - 2*b115 + 2*b114*b275 + 2*b115*b173
 - 2*b115*b237 - 2*b237 + 2*b115*b277 - 4*b277 + 2*b116*b118 - 4*b118 + 2*
b116*b422 + 2*b117*b119 - 4*b119 + 2*b117*b278 - 4*b278 + 2*b117*b379 + 2*
b118*b119 + 2*b118*b277 + 2*b118*b319 + 2*b319 + 2*b119*b120 + 2*b119*b331
 + 2*b120*b179 - 4*b179 - 2*b120*b367 + 2*b121*b123 + 2*b121*b241 - 2*b241
 - 2*b122*b151 + 2*b122 + 2*b122*b212 - 4*b212 - 2*b122*b323 - 2*b323 - 2*
b122*b330 + 2*b123*b179 + 2*b123*b212 + 2*b124*b125 - 2*b125 - 2*b124*b342
 + 2*b125*b212 + 2*b126*b127 - 2*b126 + 2*b126*b463 + 2*b127*b248 - 2*b248
 + 2*b127*b250 - 2*b128*b129 + 2*b129 - 2*b128*b290 - 2*b290 - 2*b128*b370
 + 2*b129*b131 - 4*b131 - 2*b129*b253 + 2*b253 - 2*b129*b478 - 2*b130*b386
 + 4*b130 - 2*b130*b387 - 2*b130*b458 - 2*b130*b459 + 2*b131*b358 + 2*b131
*b395 + 2*b131*b459 + 2*b132*b133 - 4*b133 + 2*b132*b220 - 4*b220 - 2*b132
*b253 + 2*b133*b347 + 2*b133*b413 + 2*b133*b459 + 2*b134*b136 - 2*b136 + 2
*b135*b334 - 2*b135*b405 + 2*b136*b405 - 2*b136*b440 + 2*b136*b479 + 2*
b137*b138 - 2*b137*b163 - 2*b163 + 2*b137*b264 - 2*b264 + 2*b138*b140 - 2*
b140 + 2*b138*b405 - 2*b139*b231 + 2*b231 + 2*b139*b264 + 2*b139*b414 + 2*
b140*b228 - 2*b228 + 2*b140*b231 - 2*b140*b446 - 2*b141*b142 + 2*b141 + 2*
b142 - 2*b141*b305 + 2*b305 - 2*b141*b352 + 2*b141*b366 + 2*b142*b143 - 2*
b142*b428 - 2*b142*b480 - 2*b143*b366 + 2*b143*b481 + 2*b144*b145 - 2*b145
 + 2*b144*b430 + 2*b145*b205 + 2*b145*b316 - 4*b316 - 2*b145*b482 + 2*b146
*b147 - 4*b147 + 2*b146*b417 + 2*b147*b280 + 2*b280 + 2*b147*b316 + 2*b147
*b474 + 2*b148*b211 - 2*b211 - 2*b148*b355 + 2*b148*b474 + 2*b149*b150 + 2
*b149*b282 - 2*b282 + 2*b149*b442 + 2*b150*b211 + 2*b150*b245 - 4*b245 + 2
*b151*b152 - 2*b152 + 2*b152*b245 + 2*b153*b154 - 2*b153 + 2*b153*b287 - 2
*b287 + 2*b154*b215 + 2*b215 + 2*b154*b286 - 2*b286 - 2*b155*b156 + 2*b156
 - 2*b155*b380 + 2*b156*b158 - 4*b158 - 2*b156*b292 + 2*b292 - 2*b156*b483
 - 2*b157*b394 + 4*b157 - 2*b157*b395 - 2*b157*b450 - 2*b157*b452 + 2*b158
*b370 + 2*b158*b403 + 2*b158*b452 + 2*b159*b161 - 2*b159 - 4*b161 + 2*b159
*b254 - 4*b254 - 2*b159*b292 + 2*b159*b424 + 2*b160*b162 + 2*b160 - 2*b162
 - 2*b160*b257 + 2*b257 - 2*b160*b403 - 2*b160*b431 + 2*b161*b162 + 2*b161
*b360 + 2*b161*b452 - 2*b162*b404 + 2*b162*b484 + 2*b163*b398 + 2*b163*
b479 + 2*b163*b485 - 2*b164*b476 - 2*b165*b198 - 2*b165 + 2*b198 + 2*b165*
b375 + 2*b165*b406 + 2*b165*b427 + 2*b166*b198 - 2*b166 + 2*b166*b265 - 2*
b265 - 2*b166*b453 + 2*b166*b476 - 2*b167*b168 + 4*b167 + 2*b168 - 2*b167*
b267 - 2*b167*b364 - 2*b167*b366 + 2*b168*b169 - 2*b168*b433 - 2*b168*b487
 + 2*b169*b272 - 2*b272 + 2*b169*b366 + 2*b170*b172 - 4*b172 + 2*b171*b172
 - 4*b171 + 2*b171*b272 + 2*b171*b275 + 2*b171*b392 + 2*b172*b174 - 2*b174
 + 2*b172*b238 + 2*b173*b175 - 4*b175 + 2*b173*b410 + 2*b174*b175 + 2*b174
*b276 - 4*b276 - 2*b174*b329 + 2*b175*b240 + 2*b240 + 2*b175*b470 - 2*b176
*b178 + 2*b176 + 2*b176*b239 - 2*b239 - 2*b176*b331 - 2*b176*b422 - 2*b177
*b242 + 2*b177 - 2*b242 - 2*b177*b280 - 2*b177*b330 + 2*b177*b379 + 2*b178
*b242 + 2*b178*b470 + 2*b179*b321 - 2*b321 + 2*b179*b324 - 2*b180*b243 + 2
*b180*b488 + 2*b181*b183 + 2*b182*b184 + 2*b182*b448 - 2*b182*b449 + 2*
b183*b369 + 2*b183*b449 + 2*b184*b186 - 4*b186 - 2*b185*b187 - 2*b187 - 2*
b185*b386 + 2*b186*b187 + 2*b186*b346 + 2*b186*b449 + 2*b187*b189 - 4*b189
 + 2*b187*b292 + 2*b188*b291 + 2*b188 - 4*b291 - 2*b188*b294 + 2*b294 - 2*
b188*b403 - 2*b188*b444 + 2*b189*b294 + 2*b189*b380 + 2*b189*b412 - 2*b190
*b295 + 2*b190 + 2*b295 - 2*b190*b395 + 2*b190*b397 - 2*b190*b436 - 2*b191
*b224 + 2*b192*b194 - 4*b192 - 2*b194 + 2*b192*b440 + 2*b192*b485 + 2*b192
*b491 - 2*b193*b195 - 2*b195 - 2*b193*b351 + 2*b194*b195 - 2*b194*b341 + 2
*b194*b390 + 2*b195*b197 + 2*b195*b472 + 2*b196*b364 + 2*b196*b419 - 2*
b196*b420 + 2*b197*b303 - 2*b303 + 2*b197*b420 - 2*b198*b232 - 2*b198*b487
 - 2*b199*b200 + 4*b199 - 2*b200 - 2*b199*b231 - 2*b199*b375 - 2*b199*b377
 + 2*b200*b202 + 2*b200*b433 + 2*b200*b487 - 2*b201*b311 + 2*b201 - 2*b311
 - 2*b201*b391 - 2*b201*b392 + 2*b201*b460 + 2*b202*b311 + 2*b202*b377 + 2
*b203*b204 - 4*b204 + 2*b204*b206 - 4*b206 + 2*b204*b277 + 2*b204*b482 + 2
*b205*b207 - 4*b207 + 2*b205*b402 + 2*b206*b207 + 2*b206*b315 - 4*b315 + 2
*b206*b329 + 2*b207*b208 + 2*b208 + 2*b207*b467 - 2*b208*b210 - 2*b208*
b354 - 2*b208*b417 - 2*b209*b240 - 2*b209*b283 - 2*b283 + 2*b209*b367 + 2*
b210*b283 + 2*b210*b467 + 2*b211*b284 - 2*b211*b332 + 2*b212*b493 + 2*b213
*b214 + 2*b214*b216 + 2*b214*b357 - 2*b215*b371 - 2*b215*b456 - 2*b215*
b483 + 2*b216*b456 + 2*b216*b483 - 2*b217*b218 - 2*b218 - 2*b217*b394 + 2*
b218*b220 + 2*b218*b253 + 2*b218*b483 + 2*b219*b252 - 2*b252 - 2*b219*b255
 + 2*b255 - 2*b219*b412 + 2*b220*b255 + 2*b220*b386 + 2*b221*b223 + 2*b221
 - 2*b223 - 2*b221*b255 - 2*b221*b387 - 2*b221*b439 - 2*b222*b424 - 2*b222
*b425 - 2*b222*b471 + 2*b223*b404 + 2*b223*b471 - 2*b223*b494 + 2*b224*
b397 - 2*b224*b492 + 2*b225*b226 - 4*b225 - 2*b226 + 2*b225*b260 - 2*b260
 + 2*b225*b301 + 2*b225*b491 + 2*b226*b228 - 2*b226*b350 + 2*b226*b383 - 2
*b227*b230 - 2*b230 + 2*b227*b349 + 2*b227*b440 + 2*b228*b230 - 2*b228*
b426 + 2*b229*b352 + 2*b229*b414 - 2*b229*b415 + 2*b230*b415 + 2*b230*b453
 - 2*b231*b480 - 2*b232*b233 - 2*b233 - 2*b232*b384 + 2*b233*b235 + 2*b233
*b428 + 2*b233*b480 - 2*b234*b399 - 2*b234*b400 - 2*b234*b466 + 2*b235*
b384 + 2*b235*b466 + 2*b236*b314 - 2*b314 - 2*b236*b454 + 2*b237*b314 + 2*
b237*b466 + 2*b237*b481 + 2*b238*b239 + 2*b238*b393 + 2*b239*b462 - 2*b239
*b495 - 2*b240*b241 - 2*b240*b410 + 2*b241*b322 - 2*b322 + 2*b241*b462 + 2
*b242*b244 + 2*b242*b324 + 2*b243*b246 + 2*b243*b330 + 2*b244*b246 + 2*
b244*b322 + 2*b245*b247 - 2*b247 + 2*b245*b342 + 2*b246*b247 + 2*b248*b249
 + 2*b249*b251 + 2*b249*b345 - 2*b250*b463 - 2*b250*b478 + 2*b251*b463 + 2
*b251*b478 + 2*b252*b254 - 2*b252*b411 + 2*b252*b478 - 2*b253*b436 + 2*
b254*b394 + 2*b254*b436 - 2*b255*b494 + 2*b256*b258 + 2*b256 - 2*b256*b294
 - 2*b256*b381 - 2*b256*b445 + 2*b257*b339 - 2*b257*b432 - 2*b257*b469 + 2
*b258*b469 + 2*b258*b494 - 2*b259*b299 - 2*b299 - 2*b259*b396 + 2*b259*
b425 + 2*b260*b261 - 4*b261 - 2*b260*b388 + 2*b260*b492 + 2*b261*b262 + 2*
b261*b263 + 2*b261*b299 - 2*b262*b265 - 2*b262*b414 + 2*b263*b265 - 2*b263
*b374 - 2*b264*b266 - 2*b266 + 2*b264*b340 + 2*b265*b266 + 2*b266*b407 + 2
*b266*b446 + 2*b267*b472 - 2*b267*b477 - 2*b268*b269 - 2*b269 - 2*b268*
b391 - 2*b268*b420 + 2*b269*b271 + 2*b269*b421 + 2*b269*b477 - 2*b270*b328
 - 2*b270*b460 - 2*b270*b461 + 2*b271*b391 + 2*b271*b461 + 2*b272*b274 - 2
*b272*b401 + 2*b273*b276 - 2*b273*b461 + 2*b274*b276 + 2*b274*b461 + 2*
b275*b278 + 2*b276*b278 + 2*b277*b279 - 4*b279 + 2*b278*b279 + 2*b279*b281
 - 2*b281 + 2*b279*b355 - 2*b280*b282 - 2*b280*b402 + 2*b281*b282 - 2*b281
*b422 + 2*b281*b455 + 2*b282*b343 + 2*b283*b284 + 2*b283*b285 - 2*b284*
b326 + 2*b326 + 2*b285*b326 + 2*b285*b343 + 2*b286*b288 - 2*b287*b289 + 2*
b287*b290 + 2*b287*b457 + 2*b288*b290 + 2*b288*b337 - 2*b289*b475 + 2*b290
*b475 + 2*b291*b293 - 4*b293 + 2*b291*b411 + 2*b291*b475 - 2*b292*b431 + 2
*b293*b346 + 2*b293*b372 + 2*b293*b431 - 2*b294*b490 + 2*b295*b348 - 2*
b295*b437 - 2*b295*b465 + 2*b296*b451 + 2*b296*b465 + 2*b296*b490 - 2*b297
*b404 - 2*b297*b418 + 2*b298*b418 - 2*b298 + 2*b298*b465 - 2*b298*b479 + 2
*b298*b484 + 2*b299*b300 - 4*b300 + 2*b299*b486 + 2*b300*b302 + 2*b300*
b418 + 2*b300*b426 - 2*b301*b303 - 2*b301*b419 + 2*b302*b303 + 2*b302*b374
 + 2*b303*b304 - 2*b304 + 2*b304*b305 + 2*b304*b306 - 2*b306 - 2*b304*b427
 - 2*b305*b472 - 2*b305*b473 + 2*b306*b307 + 2*b307 - 2*b306*b365 + 2*b306
*b473 - 2*b307*b308 - 2*b308 - 2*b307*b399 - 2*b307*b415 + 2*b308*b309 + 2
*b308*b310 + 2*b308*b473 - 2*b309*b454 + 2*b310*b399 + 2*b310*b454 + 2*
b311*b313 + 2*b311*b482 + 2*b312*b315 - 2*b312*b466 + 2*b313*b315 + 2*b313
*b454 + 2*b314*b316 - 2*b314*b495 + 2*b315*b495 + 2*b316*b318 - 4*b318 - 2
*b317*b320 - 2*b320 - 2*b317*b355 - 2*b317*b429 + 2*b318*b320 + 2*b318*
b367 + 2*b318*b495 - 2*b319*b321 - 2*b319*b332 - 2*b319*b393 + 2*b320*b321
 + 2*b320*b447 + 2*b321*b323 + 2*b322*b325 - 2*b322*b354 + 2*b323*b325 + 2
*b323*b354 - 2*b324*b489 + 2*b325*b489 - 2*b326*b493 - 2*b326*b496 - 2*
b327*b328 + 2*b327*b392 - 2*b329*b379 + 2*b330*b331 - 2*b331*b343 + 2*b333
*b396 - 2*b333*b438 - 2*b334*b335 - 2*b334*b419 + 2*b334*b427 - 2*b335*
b398 + 2*b336*b368 - 2*b338*b339 - 2*b338*b437 + 2*b339*b395 - 2*b339*b468
 - 2*b340*b341 - 2*b340*b414 - 2*b342*b343 + 2*b344*b356 - 2*b347*b348 - 2
*b347*b432 + 2*b348*b387 - 2*b348*b464 - 2*b349*b350 + 2*b349*b351 - 2*
b349*b406 - 2*b351*b418 - 2*b352*b353 + 2*b352*b378 + 2*b353*b383 + 2*b353
*b406 - 2*b353*b407 + 2*b354*b355 - 2*b356*b357 + 2*b358*b359 - 2*b359*
b449 - 2*b359*b450 - 2*b360*b361 - 2*b360*b425 + 2*b361*b381 + 2*b361*b439
 - 2*b361*b459 - 2*b362*b363 - 2*b362*b374 + 2*b363*b425 - 2*b363*b479 - 2
*b364*b365 + 2*b364*b385 + 2*b365*b390 - 2*b367*b434 - 2*b368*b369 + 2*
b370*b371 - 2*b371*b458 - 2*b372*b451 + 2*b373*b438 - 2*b373*b485 - 2*b375
*b376 - 2*b376*b390 + 2*b377*b378 - 2*b377*b408 - 2*b378*b446 - 2*b379*
b442 + 2*b382*b437 - 2*b382*b491 - 2*b383*b405 + 2*b384*b385 - 2*b384*b401
 - 2*b385*b453 + 2*b388*b404 + 2*b388*b432 + 2*b389*b438 - 2*b389*b465 - 2
*b390*b398 - 2*b392*b416 - 2*b393*b474 - 2*b396*b397 - 2*b397*b490 + 2*
b398*b476 + 2*b400*b401 - 2*b400*b409 - 2*b402*b470 - 2*b406*b426 + 2*b407
*b477 - 2*b408*b481 - 2*b410*b467 - 2*b412*b424 + 2*b413*b424 - 2*b413*
b484 + 2*b415*b480 - 2*b417*b462 + 2*b420*b487 + 2*b422*b429 - 2*b423*b435
 - 2*b427*b440 - 2*b429*b430 + 2*b431*b490 + 2*b436*b494 - 2*b438*b439 + 2
*b441*b442 - 2*b441*b443 - 2*b442*b474 + 2*b445*b451 - 2*b447*b467 - 2*
b448*b463 - 2*b451*b452 - 2*b455*b462 - 2*b456*b457 + 2*b469*b486 + 2*b471
*b492 - 2*b472*b476 - 2*b481*b482 - 2*b484*b486 - 2*b485*b486 - 2*b488*
b489 + 2*b489*b496 - 2*b491*b492  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
