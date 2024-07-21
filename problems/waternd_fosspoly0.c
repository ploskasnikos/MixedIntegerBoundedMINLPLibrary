#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="waternd_fosspoly0";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b154,b155,b156,b157,b158,b159,b160,b161,b162,b163,b164,b165,b166,b167,b168,b169,b170,b171,b172,b173,b174,b175,b176,b177,b178,b179,b180,b181,b182,b183,b184,b185,b186,b187,b188,b189,b190,b191,b192,b193,b194,b195,b196,b197,b198,b199,b200,b201,b202,b203,b204,b205,b206,b207,b208,b209,b210,b211,b212,b213,b214,b215,b216,b217,b218,b219,b220,b221,b222,b223,b224,b225,b226,b227,b228,b229,b230,b231,b232,b233,b234,b235,b236,b237,b238,b239,b240,b241,b242,b243,b244,b245,b246,b247,b248,b249,b250,b251,b252,b253,b254,b255,b256,b257,b258,b259,b260,b261,b262,b263,b264,b265,b266,b267,b268,b269,b270,b271,b272,b273,b274,b275,b276,b277,b278,b279,b280,b281,b282,b283,b284,b285,b286,b287,b288,b289,b290,b291,b292,b293,b294,b295,b296,b297,b298,b299,b300,b301,b302,b303,b304,b305,b306,b307,b308,b309,b310,b311,b312,b313,b314,b315,b316,b317,b318,b319,b320,b321,b322,b323,b324,b325,b326,b327,b328,b329,b330,b331,b332,b333,b334,b335,b336,b337,b338,b339,b340,b341,b342,b343,b344,b345,b346,b347,b348,b349,b350,b351,b352,b353,b354,b355,b356,b357,b358,b359,b360,b361,b362,b363,b364,b365,b366,b367,b368,b369,b370,b371,b372,b373,b374,b375,b376,b377,b378,b379,b380,b381,b382,b383,b384,b385,b386,b387,b388,b389,b390,b391,b392,b393,b394,b395,b396,b397,b398,b399,b400,b401,b402,b403,b404,b405,b406,b407,b408,b409,b410,b411,b412,b413,b414,b415,b416,b417,b418,b419,b420,b421,b422,b423,b424,b425,b426,b427,b428,b429,b430,b431,b432,b433,b434,b435,b436,b437,b438,b439,b440,b441,b442,b443,b444,b445,b446,b447,b448,b449,b450,b451,b452,b453,b454,b455,b456,b457,b458,b459,b460,b461,b462,b463,b464,b465,b466,b467,b468,b469,b470,b471,b472,b473,b474,b475,b476,b477,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b490,b491,b492,b493,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b506,b507,b508,b509,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b522,b523,b524,b525,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b538,b539,b540,b541,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b554,b555,b556,b557,b558,b559;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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
   fscanf(fp,"%f", &b475); 
   fscanf(fp,"%f", &b476); 
   fscanf(fp,"%f", &b477); 
   fscanf(fp,"%f", &b478); 
   fscanf(fp,"%f", &b479); 
   fscanf(fp,"%f", &b480); 
   fscanf(fp,"%f", &b481); 
   fscanf(fp,"%f", &b482); 
   fscanf(fp,"%f", &b483); 
   fscanf(fp,"%f", &b484); 
   fscanf(fp,"%f", &b485); 
   fscanf(fp,"%f", &b486); 
   fscanf(fp,"%f", &b487); 
   fscanf(fp,"%f", &b488); 
   fscanf(fp,"%f", &b489); 
   fscanf(fp,"%f", &b490); 
   fscanf(fp,"%f", &b491); 
   fscanf(fp,"%f", &b492); 
   fscanf(fp,"%f", &b493); 
   fscanf(fp,"%f", &b494); 
   fscanf(fp,"%f", &b495); 
   fscanf(fp,"%f", &b496); 
   fscanf(fp,"%f", &b497); 
   fscanf(fp,"%f", &b498); 
   fscanf(fp,"%f", &b499); 
   fscanf(fp,"%f", &b500); 
   fscanf(fp,"%f", &b501); 
   fscanf(fp,"%f", &b502); 
   fscanf(fp,"%f", &b503); 
   fscanf(fp,"%f", &b504); 
   fscanf(fp,"%f", &b505); 
   fscanf(fp,"%f", &b506); 
   fscanf(fp,"%f", &b507); 
   fscanf(fp,"%f", &b508); 
   fscanf(fp,"%f", &b509); 
   fscanf(fp,"%f", &b510); 
   fscanf(fp,"%f", &b511); 
   fscanf(fp,"%f", &b512); 
   fscanf(fp,"%f", &b513); 
   fscanf(fp,"%f", &b514); 
   fscanf(fp,"%f", &b515); 
   fscanf(fp,"%f", &b516); 
   fscanf(fp,"%f", &b517); 
   fscanf(fp,"%f", &b518); 
   fscanf(fp,"%f", &b519); 
   fscanf(fp,"%f", &b520); 
   fscanf(fp,"%f", &b521); 
   fscanf(fp,"%f", &b522); 
   fscanf(fp,"%f", &b523); 
   fscanf(fp,"%f", &b524); 
   fscanf(fp,"%f", &b525); 
   fscanf(fp,"%f", &b526); 
   fscanf(fp,"%f", &b527); 
   fscanf(fp,"%f", &b528); 
   fscanf(fp,"%f", &b529); 
   fscanf(fp,"%f", &b530); 
   fscanf(fp,"%f", &b531); 
   fscanf(fp,"%f", &b532); 
   fscanf(fp,"%f", &b533); 
   fscanf(fp,"%f", &b534); 
   fscanf(fp,"%f", &b535); 
   fscanf(fp,"%f", &b536); 
   fscanf(fp,"%f", &b537); 
   fscanf(fp,"%f", &b538); 
   fscanf(fp,"%f", &b539); 
   fscanf(fp,"%f", &b540); 
   fscanf(fp,"%f", &b541); 
   fscanf(fp,"%f", &b542); 
   fscanf(fp,"%f", &b543); 
   fscanf(fp,"%f", &b544); 
   fscanf(fp,"%f", &b545); 
   fscanf(fp,"%f", &b546); 
   fscanf(fp,"%f", &b547); 
   fscanf(fp,"%f", &b548); 
   fscanf(fp,"%f", &b549); 
   fscanf(fp,"%f", &b550); 
   fscanf(fp,"%f", &b551); 
   fscanf(fp,"%f", &b552); 
   fscanf(fp,"%f", &b553); 
   fscanf(fp,"%f", &b554); 
   fscanf(fp,"%f", &b555); 
   fscanf(fp,"%f", &b556); 
   fscanf(fp,"%f", &b557); 
   fscanf(fp,"%f", &b558); 
   fscanf(fp,"%f", &b559); 

   fclose(fp);
   res=-(- 914716.4*b154 - 1324944.8*b155 - 2550319.6*b156 - 3996076*b157
 - 8070480.4*b158 - 9265320.4*b159 - 14703170*b160 - 519574.9*b161
 - 752591.8*b162 - 1448626.1*b163 - 2269841*b164 - 4584173.9*b165
 - 5262863.9*b166 - 8351657.5*b167 - 825008.6*b168 - 1195005.2*b169
 - 2300205.4*b170 - 3604174*b171 - 7278994.6*b172 - 8356654.6*b173
 - 13261205*b174 - 1122863.3*b175 - 1626440.6*b176 - 3130653.7*b177
 - 4905397*b178 - 9906946.3*b179 - 11373676.3*b180 - 18048927.5*b181
 - 2154640.8*b182 - 3120945.6*b183 - 6007351.2*b184 - 9412872*b185
 - 19010248.8*b186 - 21824728.8*b187 - 34633740*b188 - 1359534.8*b189
 - 1969253.6*b190 - 3790517.2*b191 - 5939332*b192 - 11995082.8*b193
 - 13770962.8*b194 - 21853190*b195 - 1991830.1*b196 - 2885118.2*b197
 - 5553418.9*b198 - 8701609*b199 - 17573781.1*b200 - 20175591.1*b201
 - 32016717.5*b202 - 2317313.7*b203 - 3356573.4*b204 - 6460899.3*b205
 - 10123533*b206 - 20445500.7*b207 - 23472470.7*b208 - 37248547.5*b209
 - 533217.1*b210 - 772352.2*b211 - 1486661.9*b212 - 2329439*b213
 - 4704538.1*b214 - 5401048.1*b215 - 8570942.5*b216 - 935730.9*b217
 - 1355383.8*b218 - 2608910.1*b219 - 4087881*b220 - 8255889.9*b221
 - 9478179.9*b222 - 15040957.5*b223 - 1386681.4*b224 - 2008574.8*b225
 - 3866204.6*b226 - 6057926*b227 - 12234595.4*b228 - 14045935.4*b229
 - 22289545*b230 - 996707.4*b231 - 1443706.8*b232 - 2778918.6*b233
 - 4354266*b234 - 8793881.4*b235 - 10095821.4*b236 - 16021095*b237
 - 772851.3*b238 - 1119456.6*b239 - 2154785.7*b240 - 3376317*b241
 - 6818814.3*b242 - 7828344.3*b243 - 12422827.5*b244 - 1012554.4*b245
 - 1466660.8*b246 - 2823101.6*b247 - 4423496*b248 - 8933698.4*b249
 - 10256338.4*b250 - 16275820*b251 - 343259.8*b252 - 497203.6*b253
 - 957042.2*b254 - 1499582*b255 - 3028557.8*b256 - 3476937.8*b257
 - 5517565*b258 - 1120934.1*b259 - 1623646.2*b260 - 3125274.9*b261
 - 4896969*b262 - 9889925.1*b263 - 11354135.1*b264 - 18017917.5*b265
 - 573937*b266 - 831334*b267 - 1600193*b268 - 2507330*b269 - 5063807*b270
 - 5813507*b271 - 9225475*b272 - 365032.2*b273 - 528740.4*b274
 - 1017745.8*b275 - 1594698*b276 - 3220654.2*b277 - 3697474.2*b278
 - 5867535*b279 - 1404388.7*b280 - 2034223.4*b281 - 3915574.3*b282
 - 6135283*b283 - 12390825.7*b284 - 14225295.7*b285 - 22574172.5*b286
 - 774229.3*b287 - 1121452.6*b288 - 2158627.7*b289 - 3382337*b290
 - 6830972.3*b291 - 7842302.3*b292 - 12444977.5*b293 - 257272.6*b294
 - 372653.2*b295 - 717301.4*b296 - 1123934*b297 - 2269898.6*b298
 - 2605958.6*b299 - 4135405*b300 - 449159.1*b301 - 650596.2*b302
 - 1252299.9*b303 - 1962219*b304 - 3962900.1*b305 - 4549610.1*b306
 - 7219792.5*b307 - 1259629.8*b308 - 1824543.6*b309 - 3511972.2*b310
 - 5502882*b311 - 11113627.8*b312 - 12759007.8*b313 - 20247315*b314
 - 556849.8*b315 - 806583.6*b316 - 1552552.2*b317 - 2432682*b318
 - 4913047.8*b319 - 5640427.8*b320 - 8950815*b321 - 566978.1*b322
 - 821254.2*b323 - 1580790.9*b324 - 2476929*b325 - 5002409.1*b326
 - 5743019.1*b327 - 9113617.5*b328 - 937177.8*b329 - 1357479.6*b330
 - 2612944.2*b331 - 4094202*b332 - 8268655.8*b333 - 9492835.8*b334
 - 15064215*b335 - 2581545.2*b336 - 3739306.4*b337 - 7197602.8*b338
 - 11277868*b339 - 22776797.2*b340 - 26148917.2*b341 - 41495810*b342
 - 1616394*b343 - 2341308*b344 - 4506666*b345 - 7061460*b346
 - 14261334*b347 - 16372734*b348 - 25981950*b349 - 578484.4*b350
 - 837920.8*b351 - 1612871.6*b352 - 2527196*b353 - 5103928.4*b354
 - 5859568.4*b355 - 9298570*b356 - 686519.6*b357 - 994407.2*b358
 - 1914084.4*b359 - 2999164*b360 - 6057115.6*b361 - 6953875.6*b362
 - 11035130*b363 - 1709064.5*b364 - 2475539*b365 - 4765040.5*b366
 - 7466305*b367 - 15078959.5*b368 - 17311409.5*b369 - 27471537.5*b370
 - 749976.5*b371 - 1086323*b372 - 2091008.5*b373 - 3276385*b374
 - 6616991.5*b375 - 7596641.5*b376 - 12055137.5*b377 - 1447520.1*b378
 - 2096698.2*b379 - 4035828.9*b380 - 6323709*b381 - 12771371.1*b382
 - 14662181.1*b383 - 23267467.5*b384 - 1016757.3*b385 - 1472748.6*b386
 - 2834819.7*b387 - 4441857*b388 - 8970780.3*b389 - 10298910.3*b390
 - 16343377.5*b391 - 2349283.3*b392 - 3402880.6*b393 - 6550033.7*b394
 - 10263197*b395 - 20727566.3*b396 - 23796296.3*b397 - 37762427.5*b398
 - 715182*b399 - 1035924*b400 - 1993998*b401 - 3124380*b402 - 6310002*b403
 - 7244202*b404 - 11495850*b405 - 517301.2*b406 - 749298.4*b407
 - 1442286.8*b408 - 2259908*b409 - 4564113.2*b410 - 5239833.2*b411
 - 8315110*b412 - 913131.7*b413 - 1322649.4*b414 - 2545901.3*b415
 - 3989153*b416 - 8056498.7*b417 - 9249268.7*b418 - 14677697.5*b419
 - 1453445.5*b420 - 2105281*b421 - 4052349.5*b422 - 6349595*b423
 - 12823650.5*b424 - 14722200.5*b425 - 23362712.5*b426 - 1016206.1*b427
 - 1471950.2*b428 - 2833282.9*b429 - 4439449*b430 - 8965917.1*b431
 - 10293327.1*b432 - 16334517.5*b433 - 784082*b434 - 1135724*b435
 - 2186098*b436 - 3425380*b437 - 6917902*b438 - 7942102*b439
 - 12603350*b440 - 1242198.1*b441 - 1799294.2*b442 - 3463370.9*b443
 - 5426729*b444 - 10959829.1*b445 - 12582439.1*b446 - 19967117.5*b447
 - 683970.3*b448 - 990714.6*b449 - 1906976.7*b450 - 2988027*b451
 - 6034623.3*b452 - 6928053.3*b453 - 10994152.5*b454 - 1210710.8*b455
 - 1753685.6*b456 - 3375581.2*b457 - 5289172*b458 - 10682018.8*b459
 - 12263498.8*b460 - 19460990*b461 - 1026954.5*b462 - 1487519*b463
 - 2863250.5*b464 - 4486405*b465 - 9060749.5*b466 - 10402199.5*b467
 - 16507287.5*b468 - 390663*b469 - 565866*b470 - 1089207*b471
 - 1706670*b472 - 3446793*b473 - 3957093*b474 - 6279525*b475
 - 1481694.5*b476 - 2146199*b477 - 4131110.5*b478 - 6473005*b479
 - 13072889.5*b480 - 15008339.5*b481 - 23816787.5*b482 - 854911.2*b483
 - 1238318.4*b484 - 2383576.8*b485 - 3734808*b486 - 7542823.2*b487
 - 8659543.2*b488 - 13741860*b489 - 826593.3*b490 - 1197300.6*b491
 - 2304623.7*b492 - 3611097*b493 - 7292976.3*b494 - 8372706.3*b495
 - 13286677.5*b496 - 1249983.8*b497 - 1810571.6*b498 - 3485078.2*b499
 - 5460742*b500 - 11028521.8*b501 - 12661301.8*b502 - 20092265*b503
 - 412917.7*b504 - 598101.4*b505 - 1151255.3*b506 - 1803893*b507
 - 3643144.7*b508 - 4182514.7*b509 - 6637247.5*b510 - 540865*b511
 - 783430*b512 - 1507985*b513 - 2362850*b514 - 4772015*b515 - 5478515*b516
 - 8693875*b517 - 995191.6*b518 - 1441511.2*b519 - 2774692.4*b520
 - 4347644*b521 - 8780507.6*b522 - 10080467.6*b523 - 15996730*b524
 - 239358.6*b525 - 346705.2*b526 - 667355.4*b527 - 1045674*b528
 - 2111844.6*b529 - 2424504.6*b530 - 3847455*b531 - 1141466.3*b532
 - 1653386.6*b533 - 3182520.7*b534 - 4986667*b535 - 10071079.3*b536
 - 11562109.3*b537 - 18347952.5*b538 - 573041.3*b539 - 830036.6*b540
 - 1597695.7*b541 - 2503417*b542 - 5055904.3*b543 - 5804434.3*b544
 - 9211077.5*b545 - 1451998.6*b546 - 2103185.2*b547 - 4048315.4*b548
 - 6343274*b549 - 12810884.6*b550 - 14707544.6*b551 - 23339455*b552
 - 6890*b553 - 9980*b554 - 19210*b555 - 30100*b556 - 60790*b557
 - 69790*b558 - 110750*b559  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
