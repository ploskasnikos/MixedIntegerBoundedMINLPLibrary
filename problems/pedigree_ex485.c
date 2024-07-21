#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="pedigree_ex485";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25,b26,b27,b28,b29,b30,b31,b32,b33,b34,b35,b36,b37,b38,b39,b40,b41,b42,b43,b44,b45,b46,b47,b48,b49,b50,b51,b52,b53,b54,b55,b56,b57,b58,b59,b60,b61,b62,b63,b64,b65,b66,b67,b68,b69,b70,b71,b72,b73,b74,b75,b76,b77,b78,b79,b80,b81,b82,b83,b84,b85,b86,b87,b88,b89,b90,b91,b92,b93,b94,b95,b96,b97,b98,b99,b100,b101,b102,b103,b104,b105,b106,b107,b108,b109,b110,b111,b112,b113,b114,b115,b116,b117,b118,b119,b120,b121,b122,b123,b124,b125,b126,b127,b128,b129,b130,b131,b132,b133,b134,b135,b136,b137,b138,b139,b140,b141,b142,b143,b144,b145,b146,b147,b148,b149,b150,b151,b152,b153,b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216,b217,b218,b219,b220,b221,b222,b223,b224,b225,b226,b227,b228,b229,b230,b231,b232,b233,b234,b235,b236,b237,b238,b239,b240,b241,b242,b243,b244,b245,b246,b247,b248,b249,b250,b251,b252,b253,b254,b255,b256,b257,b258,b259,b260,b261,b262,b263,b264,b265,b266,b267,b268,b269,b270,b271,b272,b273,b274,b275,b276,b277,b278,b279,b280,b281,b282,b283,b284,b285,b286,b287,b288,b289,b290,b291,b292,b293,b294,b295,b296,b297,b298,b299,b300,b301,b302,b303,b304,b305,b306,b307,b308,b309,b310,b311,b312,b313,b314,b315,b316,b317,b318,b319,b320,b321,b322,b323,b324,b325,b326,b327,b328,b329,b330,b331,b332,b333,b334,b335,b336,b337,b338,b339,b340,b341,b342,b343,b344,b345,b346,b347,b348,b349,b350,b351,b352,b353,b354,b355,b356,b357,b358,b359,b360,b361,b362,b363,b364,b365,b366,b367,b368,b369,b370,b371,b372,b373,b374,b375,b376,b377,b378,b379,b380,b381,b382,b383,b384,b385,b386,b387,b388,b389,b390,b391,b392,b393,b394,b395,b396,b397,b398,b399,b400,b401,b402,b403,b404,b405,b406,b407,b408,b409,b410,b411,b412,b413,b414,b415,b416,b417,b418,b419,b420,b421,b422,b423,b424,b425,b426,b427;
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

   fclose(fp);
   res=-( + 417.92*b2 + 405.16*b3 + 332.82*b4 + 507.81*b5 + 371.17*b6
 + 672.57*b7 + 324.99*b8 + 336.74*b9 + 369.55*b10 + 381.53*b11 + 379.6*b12
 + 424.5*b13 + 320.94*b14 + 338.61*b15 + 488.5*b16 + 370.78*b17
 + 334.61*b18 + 401.86*b19 + 343.41*b20 + 328.32*b21 + 336.1*b22
 + 358.41*b23 + 388.77*b24 + 323.27*b25 + 350.02*b26 + 328.83*b27
 + 358.66*b28 + 321.79*b29 + 328.93*b30 + 328.09*b31 + 453.3*b32
 + 392.21*b33 + 431.92*b34 + 348.96*b35 + 374.78*b36 + 425.05*b37
 + 329.03*b38 + 348.89*b39 + 355.55*b40 + 368.04*b41 + 362.49*b42
 + 376.86*b43 + 439.44*b44 + 432.17*b45 + 382.38*b46 + 333.04*b47
 + 330.51*b48 + 327.69*b49 + 337.84*b50 + 340.49*b51 + 339.86*b52
 + 429.08*b53 + 374.59*b54 + 344.56*b55 + 343.24*b56 + 339.38*b57
 + 333.55*b58 + 398.36*b59 + 403.09*b60 + 410.6*b61 + 400.3*b62
 + 334.55*b63 + 327.73*b64 + 324.69*b65 + 334.67*b66 + 332.78*b67
 + 394.2*b68 + 340.78*b69 + 323.53*b70 + 398.63*b71 + 395.46*b72
 + 359.61*b73 + 362.79*b74 + 432.48*b75 + 358.69*b76 + 430.79*b77
 + 443.01*b78 + 323.68*b79 + 445.6*b80 + 382.07*b81 + 364.21*b82
 + 371.06*b83 + 390.72*b84 + 361.58*b85 + 348.16*b86 + 328.44*b87
 + 334.48*b88 + 322.2*b89 + 331.19*b90 + 322.28*b91 + 329.42*b92
 + 329.28*b93 + 354.92*b94 + 329.63*b95 + 334.32*b96 + 325.65*b97
 + 353.47*b98 + 350.56*b99 + 347.69*b100 + 333.16*b101 + 349.8*b102
 + 349*b103 + 345.92*b104 + 336.93*b105 + 329.54*b106 + 344.98*b107
 + 352.25*b108 + 353.73*b109 + 409.07*b110 + 413.63*b111 + 346.7*b112
 + 383.68*b113 + 378.78*b114 + 544.15*b115 + 444.24*b116 + 418.93*b117
 + 375.07*b118 + 549.94*b119 + 584.09*b120 + 559.85*b121 + 396.38*b122
 + 394.59*b123 + 400.81*b124 + 361.27*b125 + 398.91*b126 + 579.44*b127
 + 601.26*b128 + 610.33*b129 + 619.24*b130 + 481.14*b131 + 392.81*b132
 + 444.94*b133 + 405.95*b134 + 476.68*b135 + 580.08*b136 + 496.41*b137
 + 483.82*b138 + 394.77*b139 + 567.67*b140 + 492.52*b141 + 328.77*b142
 + 419.35*b143 + 360.37*b144 + 325.03*b145 + 436.09*b146 + 509.49*b147
 + 324.12*b148 + 340.7*b149 + 332.15*b150 + 465.05*b151 + 341.97*b152
 + 489.03*b153 + 474.72*b154 + 422.27*b155 + 359.53*b156 + 364.99*b157
 + 365.7*b158 + 395.1*b159 + 349*b160 + 336.84*b161 + 428.05*b162
 + 448.53*b163 + 327.53*b164 + 333.64*b165 + 397.36*b166 + 396.05*b167
 + 490.62*b168 + 340.66*b169 + 361.16*b170 + 379.48*b171 + 345.98*b172
 + 323.01*b173 + 338.28*b174 + 364.16*b175 + 348.35*b176 + 430.88*b177
 + 318.82*b178 + 488.32*b179 + 354.55*b180 + 465.55*b181 + 437.12*b182
 + 328.72*b183 + 474.1*b184 + 662.23*b185 + 492.63*b186 + 318.13*b187
 + 372.08*b188 + 407.31*b189 + 343.76*b190 + 459.43*b191 + 441.57*b192
 + 479.99*b193 + 400.74*b194 + 432.39*b195 + 348.98*b196 + 475.03*b197
 + 478.79*b198 + 383.92*b199 + 379.05*b200 + 423.72*b201 + 351.91*b202
 + 495.72*b203 + 484.77*b204 + 330.43*b205 + 456.88*b206 + 364.05*b207
 + 319.14*b208 + 391.49*b209 + 476.88*b210 + 328.14*b211 + 372.95*b212
 + 372.68*b213 + 333.26*b214 + 364.23*b215 + 398.84*b216 + 379.81*b217
 + 491.59*b218 + 337*b219 + 321.57*b220 + 368.84*b221 + 471.71*b222
 + 488.66*b223 + 336.95*b224 + 403.8*b225 + 338.43*b226 + 456.84*b227
 + 331.36*b228 + 453.6*b229 + 324.9*b230 + 396.26*b231 + 366.13*b232
 + 328.25*b233 + 323.43*b234 + 366.93*b235 + 345.88*b236 + 454.67*b237
 + 492.69*b238 + 380.62*b239 + 321.81*b240 + 361.14*b241 + 400.94*b242
 + 431.67*b243 + 338.58*b244 + 450.7*b245 + 485.82*b246 + 334.32*b247
 + 377.12*b248 + 513.12*b249 + 442.11*b250 + 376.98*b251 + 437.34*b252
 + 329.52*b253 + 503.56*b254 + 437.4*b255 + 364.97*b256 + 499.5*b257
 + 358.66*b258 + 436.24*b259 + 320.38*b260 + 665.54*b261 + 408.61*b262
 + 328.94*b263 + 427.48*b264 + 363.95*b265 + 410.55*b266 + 431.52*b267
 + 392.5*b268 + 382.61*b269 + 338.12*b270 + 652.75*b271 + 331.44*b272
 + 339.81*b273 + 403.39*b274 + 494.89*b275 + 372.98*b276 + 341.95*b277
 + 343.11*b278 + 690.72*b279 + 381.65*b280 + 412.7*b281 + 432.01*b282
 + 320.39*b283 + 354.55*b284 + 374.54*b285 + 416.54*b286 + 357.01*b287
 + 478.42*b288 + 393.81*b289 + 419.81*b290 + 335.65*b291 + 362.02*b292
 + 342.39*b293 + 432.8*b294 + 451.98*b295 + 671.27*b296 + 456.3*b297
 + 458.44*b298 + 472.43*b299 + 355.62*b300 + 348.84*b301 + 446.1*b302
 + 379.63*b303 + 351.32*b304 + 397.86*b305 + 374.25*b306 + 381.2*b307
 + 344.28*b308 + 410.62*b309 + 448.87*b310 + 406.71*b311 + 401.51*b312
 + 321.49*b313 + 362.93*b314 + 345.16*b315 + 451.24*b316 + 481.29*b317
 + 318.72*b318 + 471.72*b319 + 334.38*b320 + 371.67*b321 + 371.63*b322
 + 479.78*b323 + 349.1*b324 + 322.74*b325 + 484.64*b326 + 389.16*b327
 + 371.79*b328 + 342.39*b329 + 407.79*b330 + 402.71*b331 + 502.19*b332
 + 343.03*b333 + 479.58*b334 + 353.9*b335 + 343.14*b336 + 388.83*b337
 + 451.75*b338 + 397.92*b339 + 381.16*b340 + 368.29*b341 + 364.07*b342
 + 403.89*b343 + 321.17*b344 + 402.02*b345 + 322.88*b346 + 328.65*b347
 + 347.65*b348 + 407.95*b349 + 376.75*b350 + 356.23*b351 + 374.55*b352
 + 374.73*b353 + 324.6*b354 + 367.01*b355 + 402.29*b356 + 382.65*b357
 + 328.9*b358 + 370.96*b359 + 398.59*b360 + 378.73*b361 + 346.23*b362
 + 326.77*b363 + 388.04*b364 + 397.71*b365 + 324.37*b366 + 344.19*b367
 + 348.78*b368 + 406.7*b369 + 327.68*b370 + 338.01*b371 + 385.06*b372
 + 373.67*b373 + 417.14*b374 + 350.65*b375 + 323.46*b376 + 355.05*b377
 + 334.17*b378 + 325.03*b379 + 380.33*b380 + 370.75*b381 + 343.57*b382
 + 402.75*b383 + 336.58*b384 + 391.06*b385 + 330.96*b386 + 385.86*b387
 + 392.96*b388 + 358.2*b389 + 370.73*b390 + 329.42*b391 + 393.31*b392
 + 362.69*b393 + 341.14*b394 + 368.05*b395 + 344.76*b396 + 397.72*b397
 + 342.96*b398 + 394.57*b399 + 350.1*b400 + 393.08*b401 + 372.91*b402
 + 322.38*b403 + 411.47*b404 + 319.54*b405 + 385.19*b406 + 347.26*b407
 + 364.02*b408 + 363.57*b409 + 402.76*b410 + 346.68*b411 + 326.49*b412
 + 346.26*b413 + 330.35*b414 + 399.96*b415 + 333.16*b416 + 389.3*b417
 + 353.45*b418 + 338.91*b419 + 346.83*b420 + 349.81*b421 + 346.32*b422
 + 336.43*b423 + 342.45*b424 + 360.25*b425 + 331.98*b426 + 346.17*b427
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
