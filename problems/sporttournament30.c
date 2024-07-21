#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament30";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b198,b235,b280,b294,b2,b283,b316,b317,b318,b3,b51,b149,b178,b284,b4,b154,b253,b255,b348,b5,b56,b340,b341,b342,b6,b205,b327,b354,b355,b7,b70,b177,b289,b290,b8,b73,b351,b352,b9,b86,b213,b299,b10,b90,b359,b360,b11,b22,b201,b12,b18,b250,b286,b13,b113,b134,b369,b14,b247,b314,b15,b135,b159,b379,b16,b33,b362,b17,b244,b287,b323,b387,b84,b126,b19,b210,b304,b307,b20,b161,b188,b21,b75,b370,b23,b61,b120,b45,b24,b190,b224,b25,b42,b92,b26,b27,b44,b272,b380,b62,b28,b29,b52,b108,b319,b53,b155,b338,b30,b226,b260,b31,b58,b115,b32,b60,b79,b390,b34,b238,b35,b36,b365,b374,b402,b209,b296,b403,b37,b366,b38,b39,b309,b325,b395,b275,b40,b262,b41,b138,b228,b267,b353,b43,b393,b396,b397,b77,b100,b46,b199,b47,b48,b383,b385,b49,b407,b246,b409,b50,b378,b176,b410,b54,b87,b157,b300,b320,b399,b55,b389,b221,b223,b57,b164,b263,b93,b343,b371,b59,b276,b392,b96,b97,b121,b63,b239,b64,b66,b334,b65,b145,b173,b344,b408,b401,b67,b68,b174,b127,b281,b69,b105,b128,b211,b71,b107,b152,b297,b72,b311,b414,b74,b192,b227,b332,b76,b195,b78,b118,b391,b119,b144,b80,b273,b81,b206,b335,b416,b82,b83,b376,b394,b279,b85,b150,b249,b345,b248,b182,b219,b349,b88,b89,b291,b302,b418,b91,b191,b230,b94,b232,b95,b231,b326,b278,b143,b293,b99,b142,b98,b170,b277,b285,b101,b102,b243,b328,b398,b419,b103,b104,b384,b106,b215,b420,b151,b110,b109,b185,b337,b368,b183,b111,b112,b257,b422,b114,b162,b266,b116,b361,b415,b117,b233,b169,b168,b200,b122,b123,b124,b322,b423,b125,b129,b308,b252,b336,b424,b130,b330,b411,b417,b131,b156,b358,b132,b217,b133,b310,b386,b160,b137,b136,b331,b139,b140,b229,b194,b412,b141,b193,b197,b196,b427,b146,b303,b382,b388,b147,b245,b333,b148,b356,b429,b430,b329,b153,b413,b350,b254,b186,b426,b158,b189,b163,b165,b166,b265,b167,b406,b237,b236,b432,b171,b313,b172,b381,b175,b208,b431,b367,b181,b298,b179,b180,b251,b324,b184,b339,b187,b258,b225,b264,b400,b434,b271,b270,b202,b203,b204,b312,b372,b373,b375,b207,b305,b433,b212,b425,b357,b214,b216,b218,b220,b301,b222,b261,b234,b295,b274,b240,b241,b242,b321,b363,b364,b315,b421,b347,b256,b259,b405,b268,b269,b428,b435,b282,b288,b306,b292,b377,b404,b346;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b294); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b316); 
   fscanf(fp,"%f", &b317); 
   fscanf(fp,"%f", &b318); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b340); 
   fscanf(fp,"%f", &b341); 
   fscanf(fp,"%f", &b342); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b327); 
   fscanf(fp,"%f", &b354); 
   fscanf(fp,"%f", &b355); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b351); 
   fscanf(fp,"%f", &b352); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b286); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b369); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b314); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b379); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b362); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b287); 
   fscanf(fp,"%f", &b323); 
   fscanf(fp,"%f", &b387); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b304); 
   fscanf(fp,"%f", &b307); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b370); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b380); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b319); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b338); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b390); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b402); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b403); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b309); 
   fscanf(fp,"%f", &b325); 
   fscanf(fp,"%f", &b395); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b353); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b393); 
   fscanf(fp,"%f", &b396); 
   fscanf(fp,"%f", &b397); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b383); 
   fscanf(fp,"%f", &b385); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b407); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b409); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b410); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b320); 
   fscanf(fp,"%f", &b399); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b389); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b392); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b334); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b408); 
   fscanf(fp,"%f", &b401); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b311); 
   fscanf(fp,"%f", &b414); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b332); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b391); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b335); 
   fscanf(fp,"%f", &b416); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b394); 
   fscanf(fp,"%f", &b279); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b302); 
   fscanf(fp,"%f", &b418); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b326); 
   fscanf(fp,"%f", &b278); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b328); 
   fscanf(fp,"%f", &b398); 
   fscanf(fp,"%f", &b419); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b384); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b420); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b337); 
   fscanf(fp,"%f", &b368); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b422); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b361); 
   fscanf(fp,"%f", &b415); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b322); 
   fscanf(fp,"%f", &b423); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b308); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b336); 
   fscanf(fp,"%f", &b424); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b330); 
   fscanf(fp,"%f", &b411); 
   fscanf(fp,"%f", &b417); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b358); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b310); 
   fscanf(fp,"%f", &b386); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b331); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b412); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b427); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b303); 
   fscanf(fp,"%f", &b382); 
   fscanf(fp,"%f", &b388); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b333); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b356); 
   fscanf(fp,"%f", &b429); 
   fscanf(fp,"%f", &b430); 
   fscanf(fp,"%f", &b329); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b413); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b426); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b406); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b432); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b313); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b381); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b431); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b324); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b339); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b400); 
   fscanf(fp,"%f", &b434); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b312); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b305); 
   fscanf(fp,"%f", &b433); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b425); 
   fscanf(fp,"%f", &b357); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b295); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b321); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b315); 
   fscanf(fp,"%f", &b421); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b405); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b428); 
   fscanf(fp,"%f", &b435); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b306); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b404); 
   fscanf(fp,"%f", &b346); 

   fclose(fp);
   res=-( 2*b1*b198 - 2*b1 - 2*b198 - 2*b1*b235 + 2*b235 + 2*b1*b280 + 2*b1*b294 + 2
*b2*b283 - 2*b2 - 2*b2*b316 + 2*b2*b317 + 2*b2*b318 + 2*b3*b51 - 2*b3 - 2*
b51 - 2*b3*b149 + 2*b149 + 2*b3*b178 + 2*b178 + 2*b3*b284 + 2*b4*b154 - 2*
b4 - 2*b154 + 2*b4*b253 - 4*b253 + 2*b4*b255 + 2*b255 - 2*b4*b348 + 2*b5*
b56 - 2*b5 - 2*b56 - 2*b5*b340 + 2*b5*b341 + 2*b5*b342 + 2*b6*b205 + 2*b6
 - 2*b205 - 2*b6*b327 - 2*b6*b354 - 2*b6*b355 + 2*b7*b70 - 2*b7 - 2*b70 -
 2*b7*b177 + 2*b177 + 2*b7*b289 + 2*b7*b290 + 2*b8*b56 - 2*b8 + 2*b8*b73 -
 2*b73 - 2*b8*b351 + 2*b8*b352 + 2*b9*b86 - 2*b9 - 2*b86 - 2*b9*b213 + 2*
b213 + 2*b9*b283 + 2*b9*b299 + 2*b10*b73 - 2*b10 + 2*b10*b90 - 2*b90 - 2*
b10*b359 + 2*b10*b360 + 2*b11*b22 - 2*b11 - 2*b22 + 2*b11*b201 - 4*b201 +
 2*b12*b18 - 2*b12 - 2*b18 - 2*b12*b149 + 2*b12*b250 - 2*b250 + 2*b12*b286
 + 2*b13*b90 - 2*b13 + 2*b13*b113 - 4*b113 + 2*b13*b134 - 2*b134 - 2*b13*
b369 - 2*b14*b177 + 2*b14 - 2*b14*b247 - 2*b247 - 2*b14*b314 + 2*b14*b316
 + 2*b15*b113 - 2*b15 + 2*b15*b135 - 4*b135 + 2*b15*b159 - 4*b159 - 2*b15*
b379 + 2*b16*b33 - 2*b16 - 2*b33 + 2*b16*b362 + 2*b17*b244 - 4*b17 - 4*
b244 + 2*b17*b287 + 2*b17*b323 + 2*b17*b387 + 2*b18*b84 - 2*b84 + 2*b18*
b126 - 4*b126 - 2*b18*b323 - 2*b19*b210 + 2*b19 - 2*b210 - 2*b19*b213 - 2*
b19*b304 + 2*b19*b307 + 2*b20*b135 - 4*b20 + 2*b20*b161 - 4*b161 + 2*b20*
b188 - 4*b188 + 2*b20*b379 - 2*b21*b73 - 2*b21 + 2*b21*b75 - 4*b75 + 2*b21
*b161 + 2*b21*b370 + 2*b22*b23 - 2*b23 - 2*b22*b61 - 2*b61 + 2*b22*b120 -
 4*b120 + 2*b23*b45 - 2*b45 + 2*b24*b161 - 4*b24 + 2*b24*b190 - 4*b190 + 2*
b24*b224 - 4*b224 + 2*b24*b369 + 2*b25*b42 - 2*b25 - 2*b42 - 2*b25*b56 + 2
*b25*b92 - 4*b92 + 2*b25*b190 + 2*b26*b27 - 2*b26 - 2*b27 - 2*b26*b44 - 2*
b44 + 2*b26*b272 - 2*b272 + 2*b26*b380 + 2*b27*b62 - 4*b62 + 2*b28*b29 - 2
*b28 - 2*b29 + 2*b28*b52 - 2*b52 + 2*b28*b108 - 4*b108 - 2*b28*b319 + 2*
b29*b53 - 2*b53 - 2*b29*b155 - 2*b155 + 2*b29*b338 + 2*b30*b190 - 4*b30 +
 2*b30*b226 - 4*b226 + 2*b30*b260 - 4*b260 + 2*b30*b359 + 2*b31*b58 - 2*b31
 - 4*b58 + 2*b31*b115 - 4*b115 + 2*b31*b226 - 2*b31*b342 - 2*b32*b33 - 2*
b32 + 2*b32*b60 - 4*b60 + 2*b32*b79 - 4*b79 + 2*b32*b390 + 2*b33*b34 - 2*
b34 + 2*b33*b238 - 2*b238 + 2*b34*b79 + 2*b35*b36 - 2*b35 - 2*b36 - 2*b35*
b365 + 2*b35*b374 + 2*b35*b402 + 2*b36*b209 - 4*b209 - 2*b36*b296 + 2*b36*
b403 + 2*b37*b177 - 2*b37 + 2*b37*b296 + 2*b37*b317 - 2*b37*b366 + 2*b38*
b39 - 4*b38 - 4*b39 + 2*b38*b309 + 2*b38*b325 + 2*b38*b395 + 2*b39*b275 +
 2*b39*b338 + 2*b39*b340 + 2*b40*b226 - 2*b40 + 2*b40*b262 - 2*b262 - 2*b40
*b275 + 2*b40*b351 + 2*b41*b75 - 4*b41 + 2*b41*b138 - 4*b138 + 2*b41*b262
 + 2*b41*b342 + 2*b42*b228 - 4*b228 - 2*b42*b267 + 2*b267 + 2*b42*b353 + 2
*b43*b44 - 2*b43 + 2*b43*b393 - 2*b43*b396 + 2*b43*b397 + 2*b44*b77 - 4*
b77 + 2*b44*b100 - 2*b100 + 2*b45*b46 - 2*b46 + 2*b45*b199 - 4*b199 - 2*
b45*b393 + 2*b46*b100 + 2*b47*b48 + 2*b47 - 2*b48 - 2*b47*b205 - 2*b47*
b383 - 2*b47*b385 + 2*b48*b49 - 2*b49 - 2*b48*b287 + 2*b48*b407 + 2*b49*
b246 - 4*b246 - 2*b49*b286 + 2*b49*b409 + 2*b50*b51 - 2*b50 + 2*b50*b149
 + 2*b50*b304 - 2*b50*b378 - 2*b51*b176 + 2*b176 + 2*b51*b410 + 2*b52*b54
 - 4*b54 + 2*b52*b87 - 2*b87 - 2*b52*b157 + 4*b157 + 2*b53*b300 + 2*b53*
b320 - 2*b53*b399 + 2*b54*b55 + 2*b55 + 2*b54*b389 + 2*b54*b399 - 2*b55*
b221 + 2*b221 - 2*b55*b223 + 2*b223 - 2*b55*b275 + 2*b56*b57 - 2*b57 + 2*
b57*b92 + 2*b57*b164 - 4*b164 - 2*b57*b263 - 2*b263 + 2*b58*b93 - 4*b93 +
 2*b58*b343 + 2*b58*b371 + 2*b59*b93 - 2*b59 + 2*b59*b276 + 2*b59*b280 - 2*
b59*b392 + 2*b60*b61 + 2*b60*b96 - 2*b96 + 2*b60*b396 + 2*b61*b97 - 4*b97
 + 2*b61*b121 - 2*b121 + 2*b62*b63 - 2*b63 + 2*b62*b239 - 4*b239 + 2*b62*
b393 + 2*b63*b121 + 2*b64*b66 - 2*b64 - 4*b66 + 2*b64*b334 + 2*b65*b145 -
 2*b65 - 2*b145 + 2*b65*b173 - 2*b173 + 2*b65*b344 - 2*b65*b408 + 2*b66*
b205 + 2*b66*b401 + 2*b66*b408 + 2*b67*b68 - 4*b67 - 2*b68 + 2*b67*b174 -
 2*b174 + 2*b67*b365 + 2*b67*b387 + 2*b68*b127 + 2*b127 - 2*b68*b281 + 2*
b68*b296 + 2*b69*b70 - 2*b69 - 2*b69*b105 + 2*b105 + 2*b69*b314 + 2*b69*
b316 + 2*b70*b128 - 2*b128 - 2*b70*b211 + 2*b211 + 2*b71*b107 - 4*b71 - 2*
b107 + 2*b71*b128 + 2*b71*b152 + 2*b152 + 2*b71*b297 - 2*b72*b311 + 2*b72
 + 2*b72*b341 - 2*b72*b359 - 2*b72*b414 + 2*b73*b74 - 2*b74 + 2*b74*b115
 + 2*b74*b192 - 4*b192 - 2*b74*b227 - 2*b227 + 2*b75*b267 + 2*b75*b332 + 2
*b76*b195 + 2*b76 + 2*b195 - 2*b76*b267 - 2*b76*b276 - 2*b76*b397 + 2*b77*
b78 - 2*b78 + 2*b77*b118 - 2*b118 + 2*b77*b391 + 2*b78*b119 - 4*b119 + 2*
b78*b144 - 2*b144 - 2*b78*b362 + 2*b79*b80 - 2*b80 + 2*b79*b273 - 4*b273
 + 2*b80*b144 + 2*b81*b206 + 2*b81 - 4*b206 - 2*b81*b335 - 2*b81*b402 - 2*
b81*b416 + 2*b82*b83 - 4*b82 - 2*b83 + 2*b82*b206 + 2*b82*b376 + 2*b82*
b394 + 2*b83*b105 - 2*b83*b279 + 2*b83*b304 + 2*b84*b86 - 2*b84*b127 + 2*
b84*b307 - 2*b85*b150 + 2*b85 - 2*b150 - 2*b85*b249 - 2*b249 - 2*b85*b297
 + 2*b85*b345 + 2*b86*b150 - 2*b86*b248 + 2*b248 + 2*b87*b182 - 2*b182 - 2
*b87*b219 + 2*b219 + 2*b87*b349 - 2*b88*b89 + 2*b88 + 2*b89 - 2*b88*b291
 + 2*b88*b302 - 2*b88*b389 + 2*b89*b352 - 2*b89*b369 - 2*b89*b418 + 2*b90*
b91 - 2*b91 - 2*b90*b371 + 2*b91*b138 - 2*b91*b191 - 2*b191 + 2*b91*b230
 - 4*b230 + 2*b92*b94 - 2*b94 + 2*b92*b232 + 2*b232 + 2*b93*b95 - 4*b95 +
 2*b93*b231 - 4*b231 + 2*b94*b95 + 2*b94*b230 - 2*b94*b326 + 2*b95*b96 + 2*
b95*b278 + 2*b96*b143 - 4*b143 - 2*b96*b293 + 2*b97*b99 - 4*b99 + 2*b97*
b142 - 2*b142 + 2*b97*b392 - 2*b98*b121 + 2*b98 + 2*b98*b170 - 4*b170 - 2*
b98*b277 - 2*b98*b285 + 2*b99*b143 + 2*b99*b170 + 2*b99*b362 + 2*b100*b101
 - 2*b101 - 2*b100*b294 + 2*b101*b170 + 2*b102*b243 + 2*b102 - 4*b243 - 2*
b102*b328 - 2*b102*b398 - 2*b102*b419 + 2*b103*b104 - 4*b103 - 4*b104 + 2*
b103*b243 + 2*b103*b384 + 2*b103*b398 + 2*b104*b279 + 2*b104*b314 + 2*b104
*b378 - 2*b105*b248 - 2*b105*b384 - 2*b106*b215 - 2*b106 + 2*b215 + 2*b106
*b348 + 2*b106*b410 + 2*b106*b420 + 2*b107*b108 - 2*b107*b151 - 2*b151 + 2
*b107*b182 + 2*b108*b110 - 2*b110 + 2*b108*b348 - 2*b109*b185 - 2*b109 + 2
*b185 + 2*b109*b309 + 2*b109*b337 + 2*b109*b368 + 2*b110*b183 - 2*b183 + 2
*b110*b185 - 2*b110*b389 - 2*b111*b112 + 4*b111 + 2*b112 - 2*b111*b257 + 2
*b257 - 2*b111*b300 - 2*b111*b302 + 2*b112*b360 - 2*b112*b379 - 2*b112*
b422 + 2*b113*b114 - 2*b114 + 2*b113*b228 - 2*b114*b162 - 2*b162 + 2*b114*
b164 + 2*b114*b266 - 4*b266 + 2*b115*b116 - 4*b116 + 2*b115*b361 + 2*b116*
b266 + 2*b116*b326 + 2*b116*b415 - 2*b117*b118 + 2*b117 + 2*b117*b233 - 4*
b233 - 2*b117*b278 - 2*b117*b361 + 2*b118*b169 - 4*b169 + 2*b118*b415 + 2*
b119*b120 + 2*b119*b168 - 2*b168 + 2*b119*b397 + 2*b120*b169 + 2*b120*b200
 - 4*b200 + 2*b121*b122 - 2*b122 + 2*b122*b200 + 2*b123*b124 + 2*b123 - 2*
b124 - 2*b123*b322 - 2*b123*b394 - 2*b123*b423 + 2*b124*b125 - 4*b125 - 2*
b124*b281 + 2*b124*b327 + 2*b125*b126 + 2*b125*b323 + 2*b125*b402 + 2*b126
*b281 + 2*b126*b366 - 2*b127*b211 - 2*b127*b323 + 2*b128*b129 - 2*b129 - 2
*b128*b308 - 2*b129*b252 + 2*b252 + 2*b129*b336 + 2*b129*b424 - 2*b130*
b290 + 2*b130 - 2*b130*b330 + 2*b130*b411 - 2*b130*b417 - 2*b131*b156 - 2*
b131 + 2*b156 + 2*b131*b300 + 2*b131*b330 + 2*b131*b358 + 2*b132*b156 - 2*
b132 + 2*b132*b217 - 2*b217 - 2*b132*b395 + 2*b132*b417 - 2*b133*b219 + 4*
b133 - 2*b133*b309 - 2*b133*b310 - 2*b133*b386 + 2*b134*b160 - 2*b160 - 2*
b134*b302 + 2*b134*b386 + 2*b135*b137 - 4*b137 + 2*b135*b371 + 2*b136*b137
 - 4*b136 + 2*b136*b160 + 2*b136*b228 + 2*b136*b331 + 2*b137*b139 - 2*b139
 + 2*b137*b192 + 2*b138*b140 - 4*b140 + 2*b138*b353 + 2*b139*b140 + 2*b139
*b229 - 4*b229 - 2*b139*b276 + 2*b140*b194 + 2*b194 + 2*b140*b412 - 2*b141
*b142 + 2*b141 + 2*b141*b193 - 2*b193 - 2*b141*b235 - 2*b141*b353 + 2*b142
*b197 - 4*b197 + 2*b142*b412 + 2*b143*b196 - 2*b196 + 2*b143*b272 - 2*b144
*b198 + 2*b144*b427 + 2*b145*b146 - 4*b146 + 2*b146*b303 + 2*b146*b382 + 2
*b146*b388 + 2*b147*b245 - 2*b147 - 2*b245 - 2*b147*b279 + 2*b147*b333 + 2
*b147*b388 + 2*b148*b176 + 2*b148 - 2*b148*b287 - 2*b148*b356 - 2*b148*
b429 - 2*b149*b430 + 2*b150*b151 + 2*b150*b411 + 2*b151*b329 + 2*b151*b430
 - 2*b152*b153 - 2*b153 - 2*b152*b299 - 2*b152*b337 + 2*b153*b155 + 2*b153
*b329 + 2*b153*b413 + 2*b154*b291 + 2*b154*b349 - 2*b154*b350 + 2*b155*
b254 - 2*b254 + 2*b155*b350 - 2*b156*b186 + 2*b186 - 2*b156*b426 - 2*b157*
b158 - 2*b158 - 2*b157*b185 - 2*b157*b320 + 2*b158*b159 + 2*b158*b369 + 2*
b158*b426 + 2*b159*b189 - 2*b189 + 2*b159*b302 + 2*b160*b162 - 2*b160*b360
 + 2*b161*b163 - 4*b163 + 2*b162*b163 + 2*b162*b189 + 2*b163*b165 - 4*b165
 + 2*b163*b230 + 2*b164*b166 - 4*b166 + 2*b164*b343 + 2*b165*b166 + 2*b165
*b265 - 4*b265 + 2*b165*b276 + 2*b166*b167 + 2*b167 + 2*b166*b406 - 2*b167
*b168 - 2*b167*b195 - 2*b167*b343 + 2*b168*b237 - 2*b237 + 2*b168*b406 + 2
*b169*b236 - 2*b236 + 2*b169*b238 + 2*b170*b432 - 2*b171*b313 + 2*b171 - 2
*b171*b423 - 2*b172*b303 + 4*b172 - 2*b172*b381 - 2*b172*b382 - 2*b172*
b383 + 2*b173*b175 - 4*b175 + 2*b173*b334 - 2*b173*b387 + 2*b174*b208 - 2*
b208 - 2*b174*b303 + 2*b174*b408 + 2*b175*b208 + 2*b175*b279 + 2*b175*b383
 - 2*b176*b409 - 2*b176*b431 - 2*b177*b367 - 2*b178*b181 - 2*b181 - 2*b178
*b297 - 2*b178*b298 + 2*b179*b181 - 4*b179 + 2*b179*b252 + 2*b179*b367 + 2
*b179*b420 - 2*b180*b183 + 2*b180 + 2*b180*b251 - 4*b251 - 2*b180*b349 - 2
*b180*b411 + 2*b181*b183 + 2*b181*b324 - 2*b182*b184 - 2*b184 + 2*b182*
b298 + 2*b183*b184 + 2*b184*b339 + 2*b184*b395 - 2*b185*b422 - 2*b186*b187
 - 2*b187 + 2*b186*b258 - 2*b258 - 2*b186*b325 + 2*b187*b188 + 2*b187*b359
 + 2*b187*b422 + 2*b188*b225 - 2*b225 + 2*b188*b310 + 2*b189*b191 - 2*b189
*b352 + 2*b190*b264 - 2*b264 + 2*b191*b225 + 2*b191*b264 + 2*b192*b193 + 2
*b192*b332 + 2*b193*b400 - 2*b193*b434 - 2*b194*b196 - 2*b194*b280 - 2*
b194*b332 - 2*b195*b271 - 2*b271 - 2*b195*b277 + 2*b196*b271 + 2*b196*b400
 + 2*b197*b199 + 2*b197*b270 - 4*b270 + 2*b197*b272 + 2*b198*b201 + 2*b198
*b277 + 2*b199*b201 + 2*b199*b271 + 2*b200*b202 - 2*b202 + 2*b200*b294 + 2
*b201*b202 - 2*b203*b322 + 2*b203 - 2*b203*b419 - 2*b204*b312 + 4*b204 - 2
*b204*b372 - 2*b204*b373 - 2*b204*b375 + 2*b205*b207 - 4*b207 + 2*b206*
b209 + 2*b206*b312 + 2*b207*b209 + 2*b207*b281 + 2*b207*b375 + 2*b208*b305
 - 2*b208*b433 + 2*b209*b433 + 2*b210*b212 - 2*b212 + 2*b210*b376 + 2*b210
*b433 + 2*b211*b366 - 2*b211*b425 - 2*b212*b308 + 2*b212*b403 + 2*b212*
b425 + 2*b213*b356 - 2*b213*b357 + 2*b214*b215 - 4*b214 + 2*b214*b216 - 2*
b216 + 2*b214*b357 + 2*b214*b424 - 2*b215*b217 - 2*b215*b358 + 2*b216*b217
 - 2*b216*b318 + 2*b216*b319 + 2*b217*b218 - 2*b218 + 2*b218*b220 - 2*b220
 - 2*b218*b368 + 2*b218*b389 + 2*b219*b413 - 2*b219*b418 + 2*b220*b221 - 2
*b220*b301 + 2*b220*b418 - 2*b221*b222 - 2*b222 - 2*b221*b350 + 2*b222*
b224 + 2*b222*b351 + 2*b222*b418 - 2*b223*b261 - 2*b261 - 2*b223*b331 + 2*
b223*b399 + 2*b224*b261 + 2*b224*b320 + 2*b225*b227 - 2*b225*b341 + 2*b226
*b229 + 2*b227*b229 + 2*b227*b261 + 2*b228*b231 + 2*b229*b231 + 2*b230*
b233 + 2*b231*b233 - 2*b232*b234 - 2*b234 - 2*b232*b293 - 2*b232*b370 + 2*
b233*b234 + 2*b234*b236 + 2*b234*b396 + 2*b235*b293 - 2*b235*b295 + 2*b236
*b295 - 2*b236*b326 + 2*b237*b238 + 2*b237*b239 - 2*b237*b280 - 2*b238*
b274 + 2*b274 + 2*b239*b274 + 2*b239*b295 - 2*b240*b328 + 2*b240 - 2*b240*
b416 - 2*b241*b242 + 4*b241 - 2*b242 - 2*b241*b321 - 2*b241*b363 - 2*b241*
b364 + 2*b242*b244 + 2*b242*b374 + 2*b242*b416 + 2*b243*b246 + 2*b243*b321
 + 2*b244*b246 + 2*b244*b303 + 2*b245*b315 + 2*b245*b407 - 2*b245*b429 + 2
*b246*b429 + 2*b247*b249 + 2*b247*b384 + 2*b247*b429 + 2*b248*b378 - 2*
b248*b421 + 2*b249*b409 + 2*b249*b421 + 2*b250*b297 + 2*b250*b345 - 2*b250
*b347 + 2*b251*b253 + 2*b251*b347 + 2*b251*b430 - 2*b252*b254 - 2*b252*
b368 + 2*b253*b254 + 2*b253*b318 + 2*b254*b256 - 2*b256 - 2*b255*b258 - 2*
b255*b309 - 2*b255*b324 + 2*b256*b257 + 2*b256*b258 - 2*b256*b358 - 2*b257
*b413 - 2*b257*b414 + 2*b258*b414 + 2*b259*b260 - 2*b259 - 2*b259*b338 + 2
*b259*b340 + 2*b259*b414 + 2*b260*b325 + 2*b260*b405 + 2*b261*b263 + 2*
b262*b265 - 2*b262*b405 + 2*b263*b265 + 2*b263*b405 + 2*b264*b266 - 2*b264
*b434 + 2*b265*b434 + 2*b266*b268 - 4*b268 - 2*b267*b269 - 2*b269 + 2*b268
*b269 + 2*b268*b293 + 2*b268*b434 + 2*b269*b270 + 2*b269*b391 + 2*b270*
b285 + 2*b270*b326 + 2*b271*b273 - 2*b272*b428 + 2*b273*b285 + 2*b273*b428
 - 2*b274*b432 - 2*b274*b435 + 2*b275*b331 + 2*b277*b278 - 2*b278*b285 - 2
*b282*b283 + 2*b282*b284 - 2*b282*b349 + 2*b282*b358 - 2*b283*b336 - 2*
b284*b347 - 2*b284*b348 + 2*b286*b287 - 2*b286*b356 - 2*b288*b289 + 2*b288
*b290 - 2*b288*b337 + 2*b288*b368 + 2*b289*b306 - 2*b289*b329 - 2*b290*
b357 - 2*b291*b292 + 2*b291*b311 + 2*b292*b319 + 2*b292*b337 - 2*b292*b339
 - 2*b294*b295 - 2*b296*b345 + 2*b298*b299 - 2*b298*b330 - 2*b299*b367 - 2
*b300*b301 + 2*b301*b324 + 2*b301*b330 - 2*b304*b305 + 2*b305*b377 - 2*
b305*b403 - 2*b306*b307 + 2*b306*b308 - 2*b306*b318 - 2*b307*b420 + 2*b308
*b356 + 2*b310*b311 - 2*b310*b360 - 2*b311*b395 + 2*b312*b313 - 2*b312*
b407 + 2*b313*b381 - 2*b313*b388 - 2*b314*b315 + 2*b315*b385 - 2*b315*b409
 - 2*b316*b424 - 2*b317*b404 - 2*b317*b410 - 2*b319*b336 - 2*b320*b352 + 2
*b321*b322 - 2*b321*b402 + 2*b322*b372 - 2*b324*b329 - 2*b325*b341 + 2*
b327*b328 - 2*b327*b398 + 2*b328*b363 - 2*b331*b342 - 2*b332*b415 - 2*b333
*b334 + 2*b333*b335 - 2*b333*b394 - 2*b334*b344 + 2*b335*b354 - 2*b335*
b401 + 2*b336*b417 - 2*b338*b339 + 2*b339*b422 - 2*b340*b405 - 2*b343*b412
 - 2*b345*b346 + 2*b346*b365 + 2*b346*b404 - 2*b346*b433 + 2*b347*b421 + 2
*b350*b426 - 2*b351*b399 - 2*b353*b406 + 2*b355*b416 + 2*b357*b425 + 2*
b361*b370 - 2*b361*b400 - 2*b362*b380 + 2*b364*b419 - 2*b365*b366 + 2*b367
*b431 - 2*b370*b371 + 2*b373*b423 - 2*b374*b375 - 2*b374*b377 + 2*b375*
b419 - 2*b376*b377 - 2*b376*b378 + 2*b377*b398 + 2*b379*b386 + 2*b383*b423
 - 2*b384*b385 + 2*b385*b394 - 2*b386*b426 - 2*b387*b388 - 2*b390*b391 + 2
*b390*b392 - 2*b390*b393 - 2*b391*b406 - 2*b392*b412 - 2*b396*b400 - 2*
b397*b415 - 2*b403*b404 + 2*b404*b431 - 2*b407*b408 - 2*b410*b411 - 2*b413
*b417 - 2*b420*b421 - 2*b424*b425 - 2*b427*b428 + 2*b428*b435 - 2*b430*
b431  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
