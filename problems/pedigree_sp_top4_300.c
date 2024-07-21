#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pedigree_sp_top4_300";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216,b217,b218,b219,b220,b221,b222,b223,b224,b225,b226,b227,b228,b229,b230,b231,b232,b233,b234,b235,b236,b237,b238,b239,b240,b241,b242,b243,b244,b245,b246,b247,b248,b249,b250,b251,b252,b253,b254,b255,b256,b257,b258,b259,b260,b261,b262,b263,b264,b265,b266,b267,b268,b269,b270,b271,b272,b273,b274,b275,b276,b277,b278,b279,b280,b281,b282,b283,b284,b285,b286,b287,b288,b289,b290,b291,b292,b293,b294,b295,b296,b297,b298,b299,b300,b301,b302,b303,b304,b305,b306,b307,b308,b309,b310,b311,b312,b313,b314,b315,b316,b317,b318,b319,b320,b321,b322,b323,b324,b325,b326,b327,b328,b329,b330,b331,b332,b333,b334,b335,b336,b337,b338,b339,b340,b341,b342,b343,b344,b345,b346,b347,b348,b349,b350,b351,b352,b353,b354,b355,b356,b357,b358,b359,b360,b361,b362,b363,b364,b365,b366,b367,b368,b369,b370,b371,b372,b373,b374,b375,b376,b377,b378,b379,b380,b381,b382,b383,b384,b385,b386,b387,b388,b389,b390,b391,b392,b393,b394,b395,b396,b397,b398,b399,b400,b401,b402,b403,b404,b405,b406,b407,b408,b409,b410,b411,b412,b413,b414,b415,b416,b417,b418,b419,b420,b421,b422,b423,b424,b425,b426,b427,b428,b429,b430,b431,b432,b433,b434,b435,b436,b437,b438,b439,b440,b441,b442,b443,b444,b445,b446,b447,b448,b449,b450,b451,b452,b453,b454,b455,b456,b457,b458,b459,b460,b461,b462,b463,b464,b465,b466,b467,b468,b469,b470,b471,b472,b473,b474;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b278); 
   fscanf(fp,"%f", &b279); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b286); 
   fscanf(fp,"%f", &b287); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b294); 
   fscanf(fp,"%f", &b295); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &b302); 
   fscanf(fp,"%f", &b303); 
   fscanf(fp,"%f", &b304); 
   fscanf(fp,"%f", &b305); 
   fscanf(fp,"%f", &b306); 
   fscanf(fp,"%f", &b307); 
   fscanf(fp,"%f", &b308); 
   fscanf(fp,"%f", &b309); 
   fscanf(fp,"%f", &b310); 
   fscanf(fp,"%f", &b311); 
   fscanf(fp,"%f", &b312); 
   fscanf(fp,"%f", &b313); 
   fscanf(fp,"%f", &b314); 
   fscanf(fp,"%f", &b315); 
   fscanf(fp,"%f", &b316); 
   fscanf(fp,"%f", &b317); 
   fscanf(fp,"%f", &b318); 
   fscanf(fp,"%f", &b319); 
   fscanf(fp,"%f", &b320); 
   fscanf(fp,"%f", &b321); 
   fscanf(fp,"%f", &b322); 
   fscanf(fp,"%f", &b323); 
   fscanf(fp,"%f", &b324); 
   fscanf(fp,"%f", &b325); 
   fscanf(fp,"%f", &b326); 
   fscanf(fp,"%f", &b327); 
   fscanf(fp,"%f", &b328); 
   fscanf(fp,"%f", &b329); 
   fscanf(fp,"%f", &b330); 
   fscanf(fp,"%f", &b331); 
   fscanf(fp,"%f", &b332); 
   fscanf(fp,"%f", &b333); 
   fscanf(fp,"%f", &b334); 
   fscanf(fp,"%f", &b335); 
   fscanf(fp,"%f", &b336); 
   fscanf(fp,"%f", &b337); 
   fscanf(fp,"%f", &b338); 
   fscanf(fp,"%f", &b339); 
   fscanf(fp,"%f", &b340); 
   fscanf(fp,"%f", &b341); 
   fscanf(fp,"%f", &b342); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b346); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b351); 
   fscanf(fp,"%f", &b352); 
   fscanf(fp,"%f", &b353); 
   fscanf(fp,"%f", &b354); 
   fscanf(fp,"%f", &b355); 
   fscanf(fp,"%f", &b356); 
   fscanf(fp,"%f", &b357); 
   fscanf(fp,"%f", &b358); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b361); 
   fscanf(fp,"%f", &b362); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b368); 
   fscanf(fp,"%f", &b369); 
   fscanf(fp,"%f", &b370); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b380); 
   fscanf(fp,"%f", &b381); 
   fscanf(fp,"%f", &b382); 
   fscanf(fp,"%f", &b383); 
   fscanf(fp,"%f", &b384); 
   fscanf(fp,"%f", &b385); 
   fscanf(fp,"%f", &b386); 
   fscanf(fp,"%f", &b387); 
   fscanf(fp,"%f", &b388); 
   fscanf(fp,"%f", &b389); 
   fscanf(fp,"%f", &b390); 
   fscanf(fp,"%f", &b391); 
   fscanf(fp,"%f", &b392); 
   fscanf(fp,"%f", &b393); 
   fscanf(fp,"%f", &b394); 
   fscanf(fp,"%f", &b395); 
   fscanf(fp,"%f", &b396); 
   fscanf(fp,"%f", &b397); 
   fscanf(fp,"%f", &b398); 
   fscanf(fp,"%f", &b399); 
   fscanf(fp,"%f", &b400); 
   fscanf(fp,"%f", &b401); 
   fscanf(fp,"%f", &b402); 
   fscanf(fp,"%f", &b403); 
   fscanf(fp,"%f", &b404); 
   fscanf(fp,"%f", &b405); 
   fscanf(fp,"%f", &b406); 
   fscanf(fp,"%f", &b407); 
   fscanf(fp,"%f", &b408); 
   fscanf(fp,"%f", &b409); 
   fscanf(fp,"%f", &b410); 
   fscanf(fp,"%f", &b411); 
   fscanf(fp,"%f", &b412); 
   fscanf(fp,"%f", &b413); 
   fscanf(fp,"%f", &b414); 
   fscanf(fp,"%f", &b415); 
   fscanf(fp,"%f", &b416); 
   fscanf(fp,"%f", &b417); 
   fscanf(fp,"%f", &b418); 
   fscanf(fp,"%f", &b419); 
   fscanf(fp,"%f", &b420); 
   fscanf(fp,"%f", &b421); 
   fscanf(fp,"%f", &b422); 
   fscanf(fp,"%f", &b423); 
   fscanf(fp,"%f", &b424); 
   fscanf(fp,"%f", &b425); 
   fscanf(fp,"%f", &b426); 
   fscanf(fp,"%f", &b427); 
   fscanf(fp,"%f", &b428); 
   fscanf(fp,"%f", &b429); 
   fscanf(fp,"%f", &b430); 
   fscanf(fp,"%f", &b431); 
   fscanf(fp,"%f", &b432); 
   fscanf(fp,"%f", &b433); 
   fscanf(fp,"%f", &b434); 
   fscanf(fp,"%f", &b435); 
   fscanf(fp,"%f", &b436); 
   fscanf(fp,"%f", &b437); 
   fscanf(fp,"%f", &b438); 
   fscanf(fp,"%f", &b439); 
   fscanf(fp,"%f", &b440); 
   fscanf(fp,"%f", &b441); 
   fscanf(fp,"%f", &b442); 
   fscanf(fp,"%f", &b443); 
   fscanf(fp,"%f", &b444); 
   fscanf(fp,"%f", &b445); 
   fscanf(fp,"%f", &b446); 
   fscanf(fp,"%f", &b447); 
   fscanf(fp,"%f", &b448); 
   fscanf(fp,"%f", &b449); 
   fscanf(fp,"%f", &b450); 
   fscanf(fp,"%f", &b451); 
   fscanf(fp,"%f", &b452); 
   fscanf(fp,"%f", &b453); 
   fscanf(fp,"%f", &b454); 
   fscanf(fp,"%f", &b455); 
   fscanf(fp,"%f", &b456); 
   fscanf(fp,"%f", &b457); 
   fscanf(fp,"%f", &b458); 
   fscanf(fp,"%f", &b459); 
   fscanf(fp,"%f", &b460); 
   fscanf(fp,"%f", &b461); 
   fscanf(fp,"%f", &b462); 
   fscanf(fp,"%f", &b463); 
   fscanf(fp,"%f", &b464); 
   fscanf(fp,"%f", &b465); 
   fscanf(fp,"%f", &b466); 
   fscanf(fp,"%f", &b467); 
   fscanf(fp,"%f", &b468); 
   fscanf(fp,"%f", &b469); 
   fscanf(fp,"%f", &b470); 
   fscanf(fp,"%f", &b471); 
   fscanf(fp,"%f", &b472); 
   fscanf(fp,"%f", &b473); 
   fscanf(fp,"%f", &b474); 

   fclose(fp);
   res=-( + 137.73*b2 + 196.73*b3 + 120.22*b4 + 417.92*b5 + 200.82*b6
 + 162.5*b7 + 162.65*b8 + 179.47*b9 + 110.3*b10 + 235.64*b11 + 183.97*b12
 + 198.58*b13 + 257.31*b14 + 302.88*b15 + 267.93*b16 + 156.75*b17
 + 405.16*b18 + 245.93*b19 + 109.24*b20 + 171.4*b21 + 212.91*b22
 + 155.66*b23 + 246.71*b24 + 131.3*b25 + 197.36*b26 + 209.67*b27
 + 113.46*b28 + 243.86*b29 + 257.51*b30 + 228.84*b31 + 223.53*b32
 + 332.82*b33 + 130.27*b34 + 219.72*b35 + 507.81*b36 + 371.17*b37
 + 173.26*b38 + 239.32*b39 + 214.33*b40 + 128.05*b41 + 110.83*b42
 + 114.82*b43 + 182.26*b44 + 348.89*b45 + 355.55*b46 + 368.04*b47
 + 362.49*b48 + 376.86*b49 + 439.44*b50 + 432.17*b51 + 382.38*b52
 + 374.59*b53 + 344.56*b54 + 343.24*b55 + 339.38*b56 + 333.55*b57
 + 398.36*b58 + 403.09*b59 + 395.46*b60 + 432.48*b61 + 358.69*b62
 + 443.01*b63 + 313.3*b64 + 323.68*b65 + 445.6*b66 + 364.21*b67
 + 371.06*b68 + 306.51*b69 + 315.8*b70 + 390.72*b71 + 309.16*b72
 + 361.58*b73 + 302.76*b74 + 302.73*b75 + 350.56*b76 + 347.69*b77
 + 301.28*b78 + 308.45*b79 + 305.83*b80 + 305.6*b81 + 260.95*b82
 + 301.08*b83 + 100.9*b84 + 182.47*b85 + 274.02*b86 + 118.98*b87
 + 167.55*b88 + 168.54*b89 + 309.6*b90 + 301.43*b91 + 307.63*b92 + 349*b93
 + 345.92*b94 + 307.05*b95 + 336.93*b96 + 312.79*b97 + 344.98*b98
 + 352.25*b99 + 353.73*b100 + 409.07*b101 + 413.63*b102 + 346.7*b103
 + 383.68*b104 + 311.28*b105 + 214.65*b106 + 256.57*b107 + 672.57*b108
 + 211.4*b109 + 204.03*b110 + 324.99*b111 + 336.74*b112 + 112.03*b113
 + 369.55*b114 + 153.47*b115 + 166.24*b116 + 381.53*b117 + 265.39*b118
 + 379.6*b119 + 424.5*b120 + 320.94*b121 + 225.01*b122 + 308.72*b123
 + 176.27*b124 + 194.23*b125 + 488.5*b126 + 229.73*b127 + 184.42*b128
 + 370.78*b129 + 247.86*b130 + 280.8*b131 + 112*b132 + 248.56*b133
 + 169.26*b134 + 307.74*b135 + 184.55*b136 + 401.86*b137 + 187.16*b138
 + 151.9*b139 + 388.77*b140 + 150.5*b141 + 108.65*b142 + 137.42*b143
 + 155.21*b144 + 231.09*b145 + 321.79*b146 + 318*b147 + 308.36*b148
 + 239.09*b149 + 328.93*b150 + 328.09*b151 + 214.12*b152 + 453.3*b153
 + 169.46*b154 + 215.89*b155 + 245.42*b156 + 200.26*b157 + 392.21*b158
 + 182.94*b159 + 103.17*b160 + 177.46*b161 + 263.76*b162 + 201.97*b163
 + 187.4*b164 + 131.19*b165 + 144.93*b166 + 215.44*b167 + 251.54*b168
 + 444.24*b169 + 356.9*b170 + 352.21*b171 + 418.93*b172 + 375.07*b173
 + 549.94*b174 + 584.09*b175 + 559.85*b176 + 394.59*b177 + 400.81*b178
 + 306.69*b179 + 361.27*b180 + 398.91*b181 + 579.44*b182 + 601.26*b183
 + 610.33*b184 + 619.24*b185 + 481.14*b186 + 300.67*b187 + 317.07*b188
 + 444.94*b189 + 405.95*b190 + 580.08*b191 + 496.41*b192 + 483.82*b193
 + 320.49*b194 + 351.69*b195 + 394.77*b196 + 492.52*b197 + 115.79*b198
 + 431.92*b199 + 193.95*b200 + 115.11*b201 + 142.44*b202 + 223.48*b203
 + 348.96*b204 + 180.24*b205 + 243.65*b206 + 374.78*b207 + 425.05*b208
 + 360.37*b209 + 306.78*b210 + 325.03*b211 + 436.09*b212 + 509.49*b213
 + 324.12*b214 + 305.13*b215 + 340.7*b216 + 332.15*b217 + 465.05*b218
 + 341.97*b219 + 489.03*b220 + 474.72*b221 + 422.27*b222 + 359.53*b223
 + 364.99*b224 + 365.7*b225 + 395.1*b226 + 349*b227 + 428.05*b228
 + 448.53*b229 + 327.53*b230 + 333.64*b231 + 397.36*b232 + 490.62*b233
 + 340.66*b234 + 379.48*b235 + 323.01*b236 + 338.28*b237 + 364.16*b238
 + 348.35*b239 + 488.32*b240 + 453.77*b241 + 354.55*b242 + 373.12*b243
 + 328.72*b244 + 474.1*b245 + 662.23*b246 + 492.63*b247 + 318.13*b248
 + 372.08*b249 + 407.31*b250 + 459.43*b251 + 441.57*b252 + 479.99*b253
 + 400.74*b254 + 432.39*b255 + 348.98*b256 + 475.03*b257 + 478.79*b258
 + 383.92*b259 + 379.05*b260 + 423.72*b261 + 351.91*b262 + 311.88*b263
 + 495.72*b264 + 484.77*b265 + 305.71*b266 + 314.14*b267 + 330.43*b268
 + 456.88*b269 + 364.05*b270 + 391.49*b271 + 314.7*b272 + 476.88*b273
 + 317.25*b274 + 328.14*b275 + 372.95*b276 + 372.68*b277 + 333.26*b278
 + 364.23*b279 + 398.84*b280 + 379.81*b281 + 491.59*b282 + 315.11*b283
 + 337*b284 + 368.84*b285 + 488.66*b286 + 336.95*b287 + 403.8*b288
 + 311.72*b289 + 456.84*b290 + 331.36*b291 + 324.9*b292 + 396.26*b293
 + 366.13*b294 + 328.25*b295 + 323.43*b296 + 366.93*b297 + 316.24*b298
 + 345.88*b299 + 454.67*b300 + 492.69*b301 + 303.81*b302 + 380.62*b303
 + 321.81*b304 + 361.14*b305 + 400.94*b306 + 431.67*b307 + 308.83*b308
 + 338.58*b309 + 485.82*b310 + 334.32*b311 + 377.12*b312 + 513.12*b313
 + 310.17*b314 + 442.11*b315 + 376.98*b316 + 302.65*b317 + 313.59*b318
 + 437.34*b319 + 329.52*b320 + 503.56*b321 + 437.4*b322 + 499.5*b323
 + 358.66*b324 + 436.24*b325 + 320.38*b326 + 665.54*b327 + 408.61*b328
 + 328.94*b329 + 427.48*b330 + 363.95*b331 + 431.52*b332 + 392.5*b333
 + 382.22*b334 + 382.61*b335 + 302.18*b336 + 412.39*b337 + 317.75*b338
 + 317.1*b339 + 331.44*b340 + 308.88*b341 + 339.81*b342 + 403.39*b343
 + 318.05*b344 + 494.89*b345 + 372.98*b346 + 690.72*b347 + 381.65*b348
 + 432.01*b349 + 320.39*b350 + 374.54*b351 + 416.54*b352 + 478.42*b353
 + 419.81*b354 + 335.65*b355 + 362.02*b356 + 342.39*b357 + 432.8*b358
 + 451.98*b359 + 671.27*b360 + 309.18*b361 + 456.3*b362 + 458.44*b363
 + 472.43*b364 + 355.62*b365 + 446.1*b366 + 306.48*b367 + 379.63*b368
 + 315.68*b369 + 351.32*b370 + 397.86*b371 + 311.99*b372 + 301.82*b373
 + 410.62*b374 + 406.71*b375 + 401.51*b376 + 321.49*b377 + 308.25*b378
 + 305.34*b379 + 362.93*b380 + 345.16*b381 + 451.24*b382 + 318.72*b383
 + 334.38*b384 + 371.67*b385 + 371.63*b386 + 479.78*b387 + 322.74*b388
 + 484.64*b389 + 389.16*b390 + 342.39*b391 + 407.79*b392 + 402.71*b393
 + 502.19*b394 + 343.03*b395 + 479.58*b396 + 343.14*b397 + 451.75*b398
 + 317.41*b399 + 397.92*b400 + 321.17*b401 + 402.02*b402 + 322.88*b403
 + 328.65*b404 + 347.65*b405 + 407.95*b406 + 376.75*b407 + 356.23*b408
 + 374.55*b409 + 367.01*b410 + 402.29*b411 + 302.19*b412 + 306.09*b413
 + 301.83*b414 + 382.65*b415 + 328.9*b416 + 370.96*b417 + 398.59*b418
 + 310.35*b419 + 378.73*b420 + 346.23*b421 + 326.77*b422 + 388.04*b423
 + 324.37*b424 + 344.19*b425 + 348.78*b426 + 406.7*b427 + 327.68*b428
 + 338.01*b429 + 385.06*b430 + 373.67*b431 + 417.14*b432 + 350.65*b433
 + 323.46*b434 + 355.05*b435 + 334.17*b436 + 302.29*b437 + 325.03*b438
 + 307.37*b439 + 370.75*b440 + 343.57*b441 + 402.75*b442 + 336.58*b443
 + 391.06*b444 + 385.86*b445 + 392.96*b446 + 308.35*b447 + 358.2*b448
 + 370.73*b449 + 307.42*b450 + 329.42*b451 + 393.31*b452 + 311.16*b453
 + 305.26*b454 + 341.14*b455 + 397.72*b456 + 342.96*b457 + 307.27*b458
 + 394.57*b459 + 350.1*b460 + 372.91*b461 + 411.47*b462 + 305.14*b463
 + 303.02*b464 + 347.26*b465 + 364.02*b466 + 363.57*b467 + 402.76*b468
 + 326.49*b469 + 346.26*b470 + 330.35*b471 + 399.96*b472 + 301.24*b473
 + 389.3*b474 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
