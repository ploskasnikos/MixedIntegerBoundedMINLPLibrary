#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="sporttournament28";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b206,b209,b250,b262,b2,b130,b219,b258,b273,b3,b107,b253,b280,b4,b6,b8,b264,b295,b5,b88,b132,b287,b70,b108,b7,b59,b197,b298,b299,b255,b310,b9,b54,b267,b10,b77,b229,b307,b11,b93,b115,b314,b12,b15,b244,b13,b56,b90,b221,b224,b14,b116,b140,b320,b16,b63,b81,b19,b17,b142,b167,b324,b18,b27,b34,b20,b48,b102,b23,b21,b169,b198,b22,b44,b24,b35,b125,b28,b25,b200,b230,b26,b61,b234,b321,b325,b29,b150,b337,b36,b30,b31,b73,b137,b281,b57,b305,b347,b32,b232,b245,b33,b79,b96,b315,b49,b62,b335,b37,b242,b38,b85,b251,b293,b351,b39,b346,b40,b42,b268,b282,b341,b41,b76,b195,b43,b95,b233,b308,b45,b46,b246,b80,b354,b47,b343,b344,b64,b50,b210,b51,b301,b302,b52,b67,b249,b356,b53,b184,b217,b323,b129,b358,b55,b134,b110,b188,b259,b275,b348,b58,b274,b289,b334,b60,b119,b201,b300,b100,b82,b101,b65,b243,b66,b153,b357,b68,b183,b69,b186,b272,b318,b156,b361,b71,b319,b328,b72,b74,b297,b139,b113,b363,b75,b269,b342,b78,b145,b170,b292,b122,b103,b123,b83,b84,b212,b352,b355,b86,b214,b294,b87,b304,b339,b365,b89,b189,b333,b136,b226,b91,b92,b367,b94,b143,b172,b97,b99,b237,b270,b291,b98,b205,b248,b149,b148,b336,b126,b104,b124,b105,b284,b286,b345,b368,b106,b311,b369,b160,b257,b109,b112,b266,b111,b162,b193,b370,b114,b371,b141,b118,b117,b290,b203,b120,b175,b364,b121,b174,b178,b177,b151,b247,b254,b127,b128,b277,b279,b372,b131,b285,b158,b373,b135,b252,b133,b313,b296,b353,b138,b163,b288,b329,b168,b144,b236,b146,b147,b360,b176,b208,b207,b179,b152,b155,b154,b271,b326,b330,b331,b338,b157,b278,b187,b375,b159,b161,b374,b164,b165,b227,b166,b199,b171,b173,b202,b241,b240,b376,b180,b181,b182,b276,b327,b185,b332,b303,b362,b265,b190,b218,b366,b191,b194,b192,b196,b231,b204,b235,b350,b261,b263,b211,b213,b283,b322,b215,b216,b340,b359,b220,b312,b223,b222,b225,b260,b228,b349,b238,b239,b377,b378,b256,b306,b317,b316,b309;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b206); 
   fscanf(fp,"%f", &b209); 
   fscanf(fp,"%f", &b250); 
   fscanf(fp,"%f", &b262); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b130); 
   fscanf(fp,"%f", &b219); 
   fscanf(fp,"%f", &b258); 
   fscanf(fp,"%f", &b273); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b107); 
   fscanf(fp,"%f", &b253); 
   fscanf(fp,"%f", &b280); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b8); 
   fscanf(fp,"%f", &b264); 
   fscanf(fp,"%f", &b295); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b88); 
   fscanf(fp,"%f", &b132); 
   fscanf(fp,"%f", &b287); 
   fscanf(fp,"%f", &b70); 
   fscanf(fp,"%f", &b108); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b59); 
   fscanf(fp,"%f", &b197); 
   fscanf(fp,"%f", &b298); 
   fscanf(fp,"%f", &b299); 
   fscanf(fp,"%f", &b255); 
   fscanf(fp,"%f", &b310); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b54); 
   fscanf(fp,"%f", &b267); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b77); 
   fscanf(fp,"%f", &b229); 
   fscanf(fp,"%f", &b307); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b93); 
   fscanf(fp,"%f", &b115); 
   fscanf(fp,"%f", &b314); 
   fscanf(fp,"%f", &b12); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b244); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b56); 
   fscanf(fp,"%f", &b90); 
   fscanf(fp,"%f", &b221); 
   fscanf(fp,"%f", &b224); 
   fscanf(fp,"%f", &b14); 
   fscanf(fp,"%f", &b116); 
   fscanf(fp,"%f", &b140); 
   fscanf(fp,"%f", &b320); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b63); 
   fscanf(fp,"%f", &b81); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b142); 
   fscanf(fp,"%f", &b167); 
   fscanf(fp,"%f", &b324); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b34); 
   fscanf(fp,"%f", &b20); 
   fscanf(fp,"%f", &b48); 
   fscanf(fp,"%f", &b102); 
   fscanf(fp,"%f", &b23); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b169); 
   fscanf(fp,"%f", &b198); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b44); 
   fscanf(fp,"%f", &b24); 
   fscanf(fp,"%f", &b35); 
   fscanf(fp,"%f", &b125); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b200); 
   fscanf(fp,"%f", &b230); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b61); 
   fscanf(fp,"%f", &b234); 
   fscanf(fp,"%f", &b321); 
   fscanf(fp,"%f", &b325); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b150); 
   fscanf(fp,"%f", &b337); 
   fscanf(fp,"%f", &b36); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b73); 
   fscanf(fp,"%f", &b137); 
   fscanf(fp,"%f", &b281); 
   fscanf(fp,"%f", &b57); 
   fscanf(fp,"%f", &b305); 
   fscanf(fp,"%f", &b347); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b232); 
   fscanf(fp,"%f", &b245); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b79); 
   fscanf(fp,"%f", &b96); 
   fscanf(fp,"%f", &b315); 
   fscanf(fp,"%f", &b49); 
   fscanf(fp,"%f", &b62); 
   fscanf(fp,"%f", &b335); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b242); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &b85); 
   fscanf(fp,"%f", &b251); 
   fscanf(fp,"%f", &b293); 
   fscanf(fp,"%f", &b351); 
   fscanf(fp,"%f", &b39); 
   fscanf(fp,"%f", &b346); 
   fscanf(fp,"%f", &b40); 
   fscanf(fp,"%f", &b42); 
   fscanf(fp,"%f", &b268); 
   fscanf(fp,"%f", &b282); 
   fscanf(fp,"%f", &b341); 
   fscanf(fp,"%f", &b41); 
   fscanf(fp,"%f", &b76); 
   fscanf(fp,"%f", &b195); 
   fscanf(fp,"%f", &b43); 
   fscanf(fp,"%f", &b95); 
   fscanf(fp,"%f", &b233); 
   fscanf(fp,"%f", &b308); 
   fscanf(fp,"%f", &b45); 
   fscanf(fp,"%f", &b46); 
   fscanf(fp,"%f", &b246); 
   fscanf(fp,"%f", &b80); 
   fscanf(fp,"%f", &b354); 
   fscanf(fp,"%f", &b47); 
   fscanf(fp,"%f", &b343); 
   fscanf(fp,"%f", &b344); 
   fscanf(fp,"%f", &b64); 
   fscanf(fp,"%f", &b50); 
   fscanf(fp,"%f", &b210); 
   fscanf(fp,"%f", &b51); 
   fscanf(fp,"%f", &b301); 
   fscanf(fp,"%f", &b302); 
   fscanf(fp,"%f", &b52); 
   fscanf(fp,"%f", &b67); 
   fscanf(fp,"%f", &b249); 
   fscanf(fp,"%f", &b356); 
   fscanf(fp,"%f", &b53); 
   fscanf(fp,"%f", &b184); 
   fscanf(fp,"%f", &b217); 
   fscanf(fp,"%f", &b323); 
   fscanf(fp,"%f", &b129); 
   fscanf(fp,"%f", &b358); 
   fscanf(fp,"%f", &b55); 
   fscanf(fp,"%f", &b134); 
   fscanf(fp,"%f", &b110); 
   fscanf(fp,"%f", &b188); 
   fscanf(fp,"%f", &b259); 
   fscanf(fp,"%f", &b275); 
   fscanf(fp,"%f", &b348); 
   fscanf(fp,"%f", &b58); 
   fscanf(fp,"%f", &b274); 
   fscanf(fp,"%f", &b289); 
   fscanf(fp,"%f", &b334); 
   fscanf(fp,"%f", &b60); 
   fscanf(fp,"%f", &b119); 
   fscanf(fp,"%f", &b201); 
   fscanf(fp,"%f", &b300); 
   fscanf(fp,"%f", &b100); 
   fscanf(fp,"%f", &b82); 
   fscanf(fp,"%f", &b101); 
   fscanf(fp,"%f", &b65); 
   fscanf(fp,"%f", &b243); 
   fscanf(fp,"%f", &b66); 
   fscanf(fp,"%f", &b153); 
   fscanf(fp,"%f", &b357); 
   fscanf(fp,"%f", &b68); 
   fscanf(fp,"%f", &b183); 
   fscanf(fp,"%f", &b69); 
   fscanf(fp,"%f", &b186); 
   fscanf(fp,"%f", &b272); 
   fscanf(fp,"%f", &b318); 
   fscanf(fp,"%f", &b156); 
   fscanf(fp,"%f", &b361); 
   fscanf(fp,"%f", &b71); 
   fscanf(fp,"%f", &b319); 
   fscanf(fp,"%f", &b328); 
   fscanf(fp,"%f", &b72); 
   fscanf(fp,"%f", &b74); 
   fscanf(fp,"%f", &b297); 
   fscanf(fp,"%f", &b139); 
   fscanf(fp,"%f", &b113); 
   fscanf(fp,"%f", &b363); 
   fscanf(fp,"%f", &b75); 
   fscanf(fp,"%f", &b269); 
   fscanf(fp,"%f", &b342); 
   fscanf(fp,"%f", &b78); 
   fscanf(fp,"%f", &b145); 
   fscanf(fp,"%f", &b170); 
   fscanf(fp,"%f", &b292); 
   fscanf(fp,"%f", &b122); 
   fscanf(fp,"%f", &b103); 
   fscanf(fp,"%f", &b123); 
   fscanf(fp,"%f", &b83); 
   fscanf(fp,"%f", &b84); 
   fscanf(fp,"%f", &b212); 
   fscanf(fp,"%f", &b352); 
   fscanf(fp,"%f", &b355); 
   fscanf(fp,"%f", &b86); 
   fscanf(fp,"%f", &b214); 
   fscanf(fp,"%f", &b294); 
   fscanf(fp,"%f", &b87); 
   fscanf(fp,"%f", &b304); 
   fscanf(fp,"%f", &b339); 
   fscanf(fp,"%f", &b365); 
   fscanf(fp,"%f", &b89); 
   fscanf(fp,"%f", &b189); 
   fscanf(fp,"%f", &b333); 
   fscanf(fp,"%f", &b136); 
   fscanf(fp,"%f", &b226); 
   fscanf(fp,"%f", &b91); 
   fscanf(fp,"%f", &b92); 
   fscanf(fp,"%f", &b367); 
   fscanf(fp,"%f", &b94); 
   fscanf(fp,"%f", &b143); 
   fscanf(fp,"%f", &b172); 
   fscanf(fp,"%f", &b97); 
   fscanf(fp,"%f", &b99); 
   fscanf(fp,"%f", &b237); 
   fscanf(fp,"%f", &b270); 
   fscanf(fp,"%f", &b291); 
   fscanf(fp,"%f", &b98); 
   fscanf(fp,"%f", &b205); 
   fscanf(fp,"%f", &b248); 
   fscanf(fp,"%f", &b149); 
   fscanf(fp,"%f", &b148); 
   fscanf(fp,"%f", &b336); 
   fscanf(fp,"%f", &b126); 
   fscanf(fp,"%f", &b104); 
   fscanf(fp,"%f", &b124); 
   fscanf(fp,"%f", &b105); 
   fscanf(fp,"%f", &b284); 
   fscanf(fp,"%f", &b286); 
   fscanf(fp,"%f", &b345); 
   fscanf(fp,"%f", &b368); 
   fscanf(fp,"%f", &b106); 
   fscanf(fp,"%f", &b311); 
   fscanf(fp,"%f", &b369); 
   fscanf(fp,"%f", &b160); 
   fscanf(fp,"%f", &b257); 
   fscanf(fp,"%f", &b109); 
   fscanf(fp,"%f", &b112); 
   fscanf(fp,"%f", &b266); 
   fscanf(fp,"%f", &b111); 
   fscanf(fp,"%f", &b162); 
   fscanf(fp,"%f", &b193); 
   fscanf(fp,"%f", &b370); 
   fscanf(fp,"%f", &b114); 
   fscanf(fp,"%f", &b371); 
   fscanf(fp,"%f", &b141); 
   fscanf(fp,"%f", &b118); 
   fscanf(fp,"%f", &b117); 
   fscanf(fp,"%f", &b290); 
   fscanf(fp,"%f", &b203); 
   fscanf(fp,"%f", &b120); 
   fscanf(fp,"%f", &b175); 
   fscanf(fp,"%f", &b364); 
   fscanf(fp,"%f", &b121); 
   fscanf(fp,"%f", &b174); 
   fscanf(fp,"%f", &b178); 
   fscanf(fp,"%f", &b177); 
   fscanf(fp,"%f", &b151); 
   fscanf(fp,"%f", &b247); 
   fscanf(fp,"%f", &b254); 
   fscanf(fp,"%f", &b127); 
   fscanf(fp,"%f", &b128); 
   fscanf(fp,"%f", &b277); 
   fscanf(fp,"%f", &b279); 
   fscanf(fp,"%f", &b372); 
   fscanf(fp,"%f", &b131); 
   fscanf(fp,"%f", &b285); 
   fscanf(fp,"%f", &b158); 
   fscanf(fp,"%f", &b373); 
   fscanf(fp,"%f", &b135); 
   fscanf(fp,"%f", &b252); 
   fscanf(fp,"%f", &b133); 
   fscanf(fp,"%f", &b313); 
   fscanf(fp,"%f", &b296); 
   fscanf(fp,"%f", &b353); 
   fscanf(fp,"%f", &b138); 
   fscanf(fp,"%f", &b163); 
   fscanf(fp,"%f", &b288); 
   fscanf(fp,"%f", &b329); 
   fscanf(fp,"%f", &b168); 
   fscanf(fp,"%f", &b144); 
   fscanf(fp,"%f", &b236); 
   fscanf(fp,"%f", &b146); 
   fscanf(fp,"%f", &b147); 
   fscanf(fp,"%f", &b360); 
   fscanf(fp,"%f", &b176); 
   fscanf(fp,"%f", &b208); 
   fscanf(fp,"%f", &b207); 
   fscanf(fp,"%f", &b179); 
   fscanf(fp,"%f", &b152); 
   fscanf(fp,"%f", &b155); 
   fscanf(fp,"%f", &b154); 
   fscanf(fp,"%f", &b271); 
   fscanf(fp,"%f", &b326); 
   fscanf(fp,"%f", &b330); 
   fscanf(fp,"%f", &b331); 
   fscanf(fp,"%f", &b338); 
   fscanf(fp,"%f", &b157); 
   fscanf(fp,"%f", &b278); 
   fscanf(fp,"%f", &b187); 
   fscanf(fp,"%f", &b375); 
   fscanf(fp,"%f", &b159); 
   fscanf(fp,"%f", &b161); 
   fscanf(fp,"%f", &b374); 
   fscanf(fp,"%f", &b164); 
   fscanf(fp,"%f", &b165); 
   fscanf(fp,"%f", &b227); 
   fscanf(fp,"%f", &b166); 
   fscanf(fp,"%f", &b199); 
   fscanf(fp,"%f", &b171); 
   fscanf(fp,"%f", &b173); 
   fscanf(fp,"%f", &b202); 
   fscanf(fp,"%f", &b241); 
   fscanf(fp,"%f", &b240); 
   fscanf(fp,"%f", &b376); 
   fscanf(fp,"%f", &b180); 
   fscanf(fp,"%f", &b181); 
   fscanf(fp,"%f", &b182); 
   fscanf(fp,"%f", &b276); 
   fscanf(fp,"%f", &b327); 
   fscanf(fp,"%f", &b185); 
   fscanf(fp,"%f", &b332); 
   fscanf(fp,"%f", &b303); 
   fscanf(fp,"%f", &b362); 
   fscanf(fp,"%f", &b265); 
   fscanf(fp,"%f", &b190); 
   fscanf(fp,"%f", &b218); 
   fscanf(fp,"%f", &b366); 
   fscanf(fp,"%f", &b191); 
   fscanf(fp,"%f", &b194); 
   fscanf(fp,"%f", &b192); 
   fscanf(fp,"%f", &b196); 
   fscanf(fp,"%f", &b231); 
   fscanf(fp,"%f", &b204); 
   fscanf(fp,"%f", &b235); 
   fscanf(fp,"%f", &b350); 
   fscanf(fp,"%f", &b261); 
   fscanf(fp,"%f", &b263); 
   fscanf(fp,"%f", &b211); 
   fscanf(fp,"%f", &b213); 
   fscanf(fp,"%f", &b283); 
   fscanf(fp,"%f", &b322); 
   fscanf(fp,"%f", &b215); 
   fscanf(fp,"%f", &b216); 
   fscanf(fp,"%f", &b340); 
   fscanf(fp,"%f", &b359); 
   fscanf(fp,"%f", &b220); 
   fscanf(fp,"%f", &b312); 
   fscanf(fp,"%f", &b223); 
   fscanf(fp,"%f", &b222); 
   fscanf(fp,"%f", &b225); 
   fscanf(fp,"%f", &b260); 
   fscanf(fp,"%f", &b228); 
   fscanf(fp,"%f", &b349); 
   fscanf(fp,"%f", &b238); 
   fscanf(fp,"%f", &b239); 
   fscanf(fp,"%f", &b377); 
   fscanf(fp,"%f", &b378); 
   fscanf(fp,"%f", &b256); 
   fscanf(fp,"%f", &b306); 
   fscanf(fp,"%f", &b317); 
   fscanf(fp,"%f", &b316); 
   fscanf(fp,"%f", &b309); 

   fclose(fp);
   res=-( (-2*b1*b206) - 2*b1 + 2*b206 + 2*b1*b209 - 2*b209 + 2*b1*b250 + 2*b1*b262
 + 2*b2*b130 - 2*b2 - 2*b130 + 2*b2*b219 + 2*b219 + 2*b2*b258 - 2*b2*b273
 + 2*b3*b107 - 2*b3 - 2*b107 + 2*b3*b253 + 2*b3*b258 - 2*b3*b280 + 2*b4*b6
 - 2*b4 - 4*b6 + 2*b4*b8 - 2*b8 + 2*b4*b264 - 2*b4*b295 + 2*b5*b88 - 2*b5
 - 2*b88 + 2*b5*b132 - 2*b132 + 2*b5*b253 - 2*b5*b287 + 2*b6*b70 - 2*b70
 + 2*b6*b108 - 2*b108 + 2*b6*b132 + 2*b7*b59 - 2*b7 - 2*b59 - 2*b7*b197 +
 2*b197 + 2*b7*b298 + 2*b7*b299 + 2*b8*b255 + 2*b8*b280 - 2*b8*b310 + 2*b9*
b54 - 4*b9 - 2*b54 + 2*b9*b108 + 2*b9*b267 + 2*b9*b287 + 2*b10*b59 - 2*b10
 + 2*b10*b77 - 2*b77 - 2*b10*b229 + 2*b229 + 2*b10*b307 + 2*b11*b77 - 2*
b11 + 2*b11*b93 - 2*b93 + 2*b11*b115 - 2*b115 - 2*b11*b314 + 2*b12*b15 - 2
*b12 - 2*b15 + 2*b12*b244 - 2*b244 - 2*b13*b56 - 2*b13 - 2*b56 + 2*b13*b90
 - 2*b90 + 2*b13*b221 - 2*b221 + 2*b13*b224 + 2*b224 + 2*b14*b93 - 2*b14
 + 2*b14*b116 - 4*b116 + 2*b14*b140 - 4*b140 - 2*b14*b320 + 2*b15*b16 - 2*
b16 - 2*b15*b63 - 2*b63 + 2*b15*b81 - 4*b81 + 2*b16*b19 - 2*b19 + 2*b17*
b116 - 2*b17 + 2*b17*b142 - 4*b142 + 2*b17*b167 - 4*b167 - 2*b17*b324 + 2*
b18*b27 - 2*b18 - 2*b27 + 2*b18*b34 - 4*b34 - 2*b18*b93 + 2*b18*b142 + 2*
b19*b20 - 2*b20 - 2*b19*b48 - 2*b48 + 2*b19*b102 - 4*b102 + 2*b20*b23 - 2*
b23 + 2*b21*b142 - 4*b21 + 2*b21*b169 - 4*b169 + 2*b21*b198 - 4*b198 + 2*
b21*b324 + 2*b22*b34 - 2*b22 + 2*b22*b44 - 4*b44 - 2*b22*b77 + 2*b22*b169
 + 2*b23*b24 - 2*b24 - 2*b23*b35 - 2*b35 + 2*b23*b125 - 4*b125 + 2*b24*b28
 - 2*b28 + 2*b25*b169 - 4*b25 + 2*b25*b200 - 4*b200 + 2*b25*b230 - 4*b230
 + 2*b25*b320 + 2*b26*b44 - 2*b26 - 2*b26*b59 + 2*b26*b61 - 4*b61 + 2*b26*
b200 + 2*b27*b234 - 4*b234 + 2*b27*b321 - 2*b27*b325 + 2*b28*b29 - 2*b29
 + 2*b28*b150 - 4*b150 - 2*b28*b337 + 2*b29*b36 - 4*b36 + 2*b30*b31 - 2*
b30 - 2*b31 + 2*b30*b73 - 2*b73 + 2*b30*b137 - 4*b137 - 2*b30*b281 + 2*b31
*b57 - 2*b57 + 2*b31*b305 - 2*b31*b347 + 2*b32*b200 - 2*b32 + 2*b32*b232
 - 2*b232 - 2*b32*b245 + 2*b32*b314 + 2*b33*b61 - 2*b33 + 2*b33*b79 - 4*
b79 + 2*b33*b232 - 2*b33*b299 + 2*b34*b96 - 4*b96 + 2*b34*b315 + 2*b35*b49
 - 4*b49 + 2*b35*b62 - 4*b62 + 2*b35*b335 + 2*b36*b37 - 2*b37 + 2*b36*b242
 - 2*b242 + 2*b36*b337 + 2*b37*b49 + 2*b38*b85 - 2*b38 - 4*b85 + 2*b38*
b251 + 2*b38*b293 - 2*b38*b351 + 2*b39*b54 - 2*b39 + 2*b39*b130 - 2*b39*
b255 + 2*b39*b346 + 2*b40*b42 - 4*b40 - 4*b42 + 2*b40*b268 + 2*b40*b282 +
 2*b40*b341 + 2*b41*b76 + 2*b41 - 4*b76 - 2*b41*b195 + 2*b195 - 2*b41*b197
 - 2*b41*b245 + 2*b42*b197 + 2*b42*b245 + 2*b42*b305 + 2*b43*b79 - 2*b43
 + 2*b43*b95 - 4*b95 - 2*b43*b233 - 2*b233 + 2*b43*b299 + 2*b44*b308 + 2*
b44*b325 - 2*b45*b46 - 2*b45 + 2*b46 + 2*b45*b246 + 2*b45*b250 + 2*b45*
b325 + 2*b46*b80 - 4*b80 - 2*b46*b335 - 2*b46*b354 + 2*b47*b48 - 2*b47 + 2
*b47*b337 - 2*b47*b343 + 2*b47*b344 + 2*b48*b64 - 4*b64 + 2*b48*b80 + 2*
b49*b50 - 2*b50 + 2*b49*b210 - 4*b210 + 2*b50*b64 + 2*b51*b301 - 2*b51 + 2
*b51*b302 + 2*b52*b67 - 2*b52 - 4*b67 + 2*b52*b249 + 2*b52*b301 - 2*b52*
b356 - 2*b53*b184 + 2*b53 - 2*b184 + 2*b53*b217 - 2*b217 - 2*b53*b251 - 2*
b53*b323 + 2*b54*b129 - 2*b129 - 2*b54*b358 + 2*b55*b56 - 4*b55 + 2*b55*
b134 - 2*b134 + 2*b55*b264 + 2*b55*b358 + 2*b56*b110 - 2*b110 + 2*b56*b188
 - 4*b188 + 2*b57*b259 + 2*b57*b275 - 2*b57*b348 + 2*b58*b274 - 4*b58 + 2*
b58*b289 + 2*b58*b334 + 2*b58*b348 + 2*b59*b60 - 2*b60 + 2*b60*b95 + 2*b60
*b119 - 4*b119 - 2*b60*b201 - 2*b201 + 2*b61*b300 + 2*b61*b321 + 2*b62*b63
 + 2*b62*b100 - 2*b100 + 2*b62*b343 + 2*b63*b82 - 2*b82 + 2*b63*b101 - 4*
b101 + 2*b64*b65 - 2*b65 + 2*b64*b243 - 4*b243 + 2*b65*b82 + 2*b66*b67 - 2
*b66 + 2*b66*b293 + 2*b67*b153 - 2*b153 + 2*b67*b357 - 2*b68*b183 + 2*b68
 - 2*b183 - 2*b68*b249 - 2*b68*b301 + 2*b68*b302 + 2*b69*b186 + 2*b69 - 2*
b186 - 2*b69*b249 - 2*b69*b272 - 2*b69*b318 + 2*b70*b156 - 2*b156 + 2*b70*
b323 - 2*b70*b361 + 2*b71*b319 - 2*b71 - 2*b71*b328 + 2*b71*b358 + 2*b71*
b361 + 2*b72*b73 - 2*b72 - 2*b72*b74 + 2*b74 + 2*b72*b110 + 2*b72*b297 + 2
*b73*b76 - 2*b73*b139 + 4*b139 + 2*b74*b76 - 2*b74*b113 + 4*b113 - 2*b74*
b363 - 2*b75*b259 + 2*b75 + 2*b75*b269 - 2*b75*b341 - 2*b75*b342 + 2*b76*
b342 + 2*b77*b78 - 2*b78 + 2*b78*b119 + 2*b78*b145 - 4*b145 - 2*b78*b170
 - 2*b170 + 2*b79*b292 + 2*b79*b315 + 2*b80*b81 + 2*b80*b122 - 2*b122 + 2*
b81*b103 - 2*b103 + 2*b81*b123 - 4*b123 + 2*b82*b83 - 2*b83 - 2*b82*b262
 + 2*b83*b103 + 2*b84*b85 - 2*b84 + 2*b84*b212 + 2*b212 + 2*b85*b352 + 2*
b85*b355 - 2*b86*b214 + 2*b86 - 2*b214 - 2*b86*b251 - 2*b86*b293 + 2*b86*
b294 + 2*b87*b156 - 2*b87 + 2*b87*b214 - 2*b87*b304 + 2*b87*b339 + 2*b88*
b186 + 2*b88*b318 - 2*b88*b365 + 2*b89*b189 - 2*b89 + 2*b189 - 2*b89*b333
 + 2*b89*b361 + 2*b89*b365 + 2*b90*b136 - 2*b136 - 2*b90*b226 + 2*b226 + 2
*b90*b274 - 2*b91*b92 + 4*b91 + 2*b92 - 2*b91*b268 - 2*b91*b269 - 2*b91*
b334 + 2*b92*b307 - 2*b92*b320 - 2*b92*b367 + 2*b93*b94 - 2*b94 - 2*b94*
b143 - 2*b143 + 2*b94*b145 + 2*b94*b172 - 4*b172 + 2*b95*b97 - 4*b97 + 2*
b95*b308 + 2*b96*b99 - 4*b99 + 2*b96*b237 - 4*b237 + 2*b96*b270 + 2*b97*
b99 + 2*b97*b172 + 2*b97*b291 - 2*b98*b100 + 2*b98 + 2*b98*b205 - 4*b205
 - 2*b98*b248 - 2*b98*b321 + 2*b99*b100 + 2*b99*b248 + 2*b100*b149 - 4*
b149 + 2*b101*b102 + 2*b101*b148 - 2*b148 + 2*b101*b336 + 2*b102*b126 - 2*
b126 + 2*b102*b149 + 2*b103*b104 - 2*b104 - 2*b103*b124 + 2*b124 + 2*b104*
b126 - 2*b105*b284 + 2*b105 + 2*b105*b286 - 2*b105*b345 - 2*b105*b368 + 2*
b106*b129 - 2*b106 + 2*b106*b286 - 2*b106*b295 + 2*b106*b345 + 2*b107*b217
 + 2*b107*b311 - 2*b107*b369 - 2*b108*b160 + 2*b160 + 2*b108*b257 - 2*b109
*b134 - 2*b109 + 2*b109*b160 + 2*b109*b365 + 2*b109*b369 - 2*b110*b112 + 2
*b112 + 2*b110*b266 + 2*b111*b162 - 2*b111 - 2*b162 - 2*b111*b193 + 2*b193
 + 2*b111*b268 + 2*b111*b281 + 2*b112*b193 - 2*b112*b334 - 2*b112*b370 - 2
*b113*b114 + 2*b114 - 2*b113*b274 - 2*b113*b275 + 2*b114*b115 - 2*b114*
b324 - 2*b114*b371 + 2*b115*b141 - 2*b141 - 2*b115*b269 + 2*b116*b118 - 4*
b118 + 2*b116*b234 + 2*b117*b118 - 4*b117 + 2*b117*b141 + 2*b117*b234 + 2*
b117*b290 + 2*b118*b172 + 2*b118*b203 - 4*b203 + 2*b119*b120 - 4*b120 + 2*
b119*b300 + 2*b120*b175 + 2*b175 + 2*b120*b203 + 2*b120*b364 - 2*b121*b122
 + 2*b121 + 2*b121*b174 - 4*b174 - 2*b121*b206 - 2*b121*b315 + 2*b122*b178
 - 4*b178 + 2*b122*b364 + 2*b123*b125 + 2*b123*b177 - 2*b177 + 2*b123*b344
 + 2*b124*b151 - 4*b151 - 2*b124*b247 - 2*b124*b254 + 2*b125*b151 + 2*b125
*b178 + 2*b126*b127 - 2*b127 - 2*b126*b209 + 2*b127*b151 - 2*b128*b277 + 2
*b128 + 2*b128*b279 - 2*b128*b339 - 2*b128*b372 - 2*b129*b131 + 2*b131 + 2
*b129*b285 - 2*b130*b158 - 2*b158 + 2*b130*b304 + 2*b131*b158 - 2*b131*
b369 - 2*b131*b373 - 2*b132*b135 - 2*b135 + 2*b132*b252 + 2*b133*b135 - 4*
b133 + 2*b133*b158 + 2*b133*b333 + 2*b133*b369 + 2*b134*b137 + 2*b134*b313
 + 2*b135*b137 + 2*b135*b296 + 2*b136*b257 + 2*b136*b328 - 2*b136*b353 + 2
*b137*b353 - 2*b138*b163 - 2*b138 + 2*b163 + 2*b138*b259 + 2*b138*b288 + 2
*b138*b313 - 2*b139*b226 - 2*b139*b282 - 2*b139*b329 + 2*b140*b168 - 2*
b168 + 2*b140*b269 + 2*b140*b329 + 2*b141*b143 - 2*b141*b307 + 2*b142*b144
 - 4*b144 + 2*b143*b144 + 2*b143*b168 + 2*b144*b203 + 2*b144*b236 - 4*b236
 + 2*b145*b146 - 4*b146 + 2*b145*b292 + 2*b146*b147 + 2*b147 + 2*b146*b236
 + 2*b146*b360 - 2*b147*b148 - 2*b147*b176 + 2*b176 - 2*b147*b308 + 2*b148
*b208 - 2*b208 + 2*b148*b360 + 2*b149*b150 + 2*b149*b207 - 2*b207 + 2*b150
*b179 - 4*b179 + 2*b150*b208 + 2*b151*b152 - 2*b152 + 2*b152*b179 + 2*b153
*b155 - 4*b155 - 2*b154*b271 + 2*b154 + 2*b154*b326 - 2*b154*b330 - 2*b154
*b331 + 2*b155*b271 + 2*b155*b331 + 2*b155*b338 - 2*b156*b157 + 2*b157 + 2
*b156*b278 + 2*b157*b187 - 2*b187 - 2*b157*b365 - 2*b157*b375 + 2*b158*
b159 - 4*b159 + 2*b159*b161 - 2*b161 + 2*b159*b187 + 2*b159*b328 - 2*b160*
b296 - 2*b160*b370 - 2*b161*b253 + 2*b161*b288 + 2*b161*b370 + 2*b162*b252
 + 2*b162*b333 - 2*b162*b347 - 2*b163*b195 + 2*b163*b353 - 2*b163*b374 - 2
*b164*b165 + 2*b164 - 2*b165 - 2*b164*b193 + 2*b164*b227 - 2*b227 - 2*b164
*b289 + 2*b165*b167 + 2*b165*b320 + 2*b165*b374 - 2*b166*b199 + 2*b166 - 2
*b199 - 2*b166*b289 - 2*b166*b290 + 2*b166*b348 + 2*b167*b199 + 2*b167*
b275 + 2*b168*b170 - 2*b168*b298 + 2*b169*b171 - 4*b171 + 2*b170*b171 + 2*
b170*b199 + 2*b171*b173 - 2*b173 + 2*b171*b236 + 2*b172*b174 + 2*b173*b174
 + 2*b173*b202 - 4*b202 - 2*b173*b246 + 2*b174*b354 - 2*b175*b177 - 2*b175
*b250 - 2*b175*b300 - 2*b176*b241 - 2*b241 - 2*b176*b247 + 2*b176*b270 + 2
*b177*b241 + 2*b177*b354 + 2*b178*b240 - 4*b240 + 2*b178*b242 + 2*b179*
b262 + 2*b179*b376 - 2*b180*b284 + 2*b180 - 2*b180*b372 - 2*b181*b182 + 4*
b181 - 2*b182 - 2*b181*b276 - 2*b181*b326 - 2*b181*b327 + 2*b182*b184 + 2*
b182*b339 + 2*b182*b372 + 2*b183*b185 - 4*b185 + 2*b183*b332 + 2*b183*b357
 + 2*b184*b185 + 2*b184*b276 + 2*b185*b303 + 2*b185*b375 + 2*b186*b332 - 2
*b186*b362 + 2*b187*b188 - 2*b187*b265 + 2*b188*b190 - 2*b190 + 2*b188*
b218 - 2*b218 - 2*b189*b267 - 2*b189*b288 - 2*b189*b366 - 2*b190*b258 + 2*
b190*b281 + 2*b190*b366 - 2*b191*b194 + 2*b191 - 2*b194 - 2*b191*b268 - 2*
b191*b296 + 2*b191*b297 + 2*b192*b194 - 2*b192 - 2*b192*b313 + 2*b192*b341
 + 2*b192*b366 - 2*b193*b371 + 2*b194*b195 + 2*b194*b371 - 2*b195*b196 - 2
*b196 + 2*b196*b198 + 2*b196*b314 + 2*b196*b371 - 2*b197*b231 - 2*b231 + 2
*b198*b231 + 2*b198*b282 + 2*b199*b201 + 2*b200*b202 + 2*b201*b202 + 2*
b201*b231 + 2*b202*b204 - 4*b204 + 2*b203*b205 + 2*b204*b205 + 2*b204*b235
 - 4*b235 + 2*b204*b246 + 2*b205*b350 + 2*b206*b261 - 2*b206*b263 + 2*b207
*b263 - 2*b207*b291 + 2*b207*b350 + 2*b208*b210 - 2*b208*b250 + 2*b209*
b244 + 2*b209*b247 + 2*b210*b244 + 2*b210*b263 - 2*b211*b294 + 2*b211 - 2*
b211*b368 - 2*b212*b213 - 2*b213 - 2*b212*b283 - 2*b212*b322 + 2*b213*b215
 - 2*b215 + 2*b213*b345 + 2*b213*b368 + 2*b214*b216 - 4*b216 + 2*b214*b352
 + 2*b215*b216 - 2*b215*b255 + 2*b215*b283 + 2*b216*b295 + 2*b216*b373 + 2
*b217*b340 - 2*b217*b359 + 2*b218*b220 - 4*b220 - 2*b218*b273 + 2*b218*
b362 - 2*b219*b221 - 2*b219*b264 - 2*b219*b266 + 2*b220*b221 + 2*b220*b312
 + 2*b220*b319 + 2*b221*b223 - 2*b223 - 2*b222*b225 + 2*b222 - 2*b225 - 2*
b222*b257 + 2*b222*b260 - 2*b222*b333 + 2*b223*b225 - 2*b223*b319 + 2*b223
*b363 - 2*b224*b227 - 2*b224*b274 - 2*b224*b288 + 2*b225*b227 + 2*b225*
b334 + 2*b226*b363 - 2*b226*b367 + 2*b227*b367 + 2*b228*b229 - 2*b228 + 2*
b228*b230 - 2*b228*b305 + 2*b228*b367 - 2*b229*b348 - 2*b229*b349 + 2*b230
*b289 + 2*b230*b349 + 2*b231*b233 + 2*b232*b235 - 2*b232*b349 + 2*b233*
b235 + 2*b233*b349 + 2*b234*b237 + 2*b235*b237 + 2*b236*b238 - 4*b238 + 2*
b237*b238 + 2*b238*b239 - 2*b239 + 2*b238*b261 + 2*b239*b240 - 2*b239*b321
 + 2*b239*b343 + 2*b240*b254 + 2*b240*b291 + 2*b241*b242 + 2*b241*b243 - 2
*b242*b377 + 2*b243*b254 + 2*b243*b377 - 2*b244*b378 + 2*b245*b290 - 2*
b246*b270 + 2*b247*b248 - 2*b248*b254 + 2*b249*b278 + 2*b251*b285 - 2*b252
*b253 - 2*b252*b313 + 2*b255*b256 + 2*b256*b271 - 2*b256*b331 - 2*b256*
b332 - 2*b257*b258 - 2*b259*b260 + 2*b260*b296 - 2*b260*b306 - 2*b261*b325
 - 2*b261*b344 - 2*b262*b263 - 2*b264*b265 + 2*b265*b295 + 2*b265*b323 + 2
*b266*b267 - 2*b266*b297 - 2*b267*b312 - 2*b270*b336 - 2*b271*b272 + 2*
b272*b310 + 2*b272*b331 + 2*b273*b303 + 2*b273*b318 - 2*b275*b307 + 2*b276
*b277 - 2*b276*b279 + 2*b277*b322 - 2*b277*b338 - 2*b278*b279 - 2*b278*
b311 + 2*b279*b317 + 2*b280*b311 - 2*b280*b312 - 2*b281*b319 - 2*b282*b298
 + 2*b283*b284 - 2*b283*b286 + 2*b284*b316 - 2*b285*b286 - 2*b285*b304 - 2
*b287*b303 + 2*b287*b304 - 2*b290*b299 - 2*b291*b292 - 2*b292*b364 - 2*
b293*b316 + 2*b294*b309 - 2*b294*b352 - 2*b297*b328 + 2*b298*b342 - 2*b300
*b360 - 2*b301*b309 - 2*b302*b355 - 2*b302*b357 - 2*b303*b317 - 2*b305*
b306 + 2*b306*b347 + 2*b306*b374 - 2*b308*b354 + 2*b310*b356 - 2*b310*b375
 - 2*b311*b332 + 2*b312*b359 - 2*b314*b342 - 2*b315*b350 + 2*b317*b351 - 2
*b317*b373 - 2*b318*b340 - 2*b323*b346 + 2*b324*b329 + 2*b327*b368 - 2*
b329*b374 + 2*b330*b372 + 2*b335*b336 - 2*b335*b337 - 2*b336*b360 - 2*b339
*b340 + 2*b340*b356 - 2*b341*b353 - 2*b343*b350 - 2*b344*b364 - 2*b345*
b346 + 2*b346*b351 + 2*b347*b370 - 2*b351*b352 - 2*b356*b357 - 2*b358*b359
 + 2*b359*b373 - 2*b361*b362 + 2*b362*b375 - 2*b363*b366 - 2*b376*b377 + 2
*b377*b378  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
