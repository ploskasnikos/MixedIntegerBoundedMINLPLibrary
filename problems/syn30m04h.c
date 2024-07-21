#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn30m04h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x26,x27,x28,x29,x46,x47,x48,x49,x114,x115,x116,x117,x118,x119,x120,x121,x146,x147,x148,x149,x150,x151,x152,x153,x154,x155,x156,x157,x158,x159,x160,x161,x162,x163,x164,x165,x166,x167,x168,x169,x170,x171,x172,x173,x174,x175,x176,x177,x206,x207,x208,x209,x226,x227,x228,x229,x258,x259,x260,x261,x262,x263,x264,x265,x266,x267,x268,x269,x270,x271,x272,x273,x274,x275,x276,x277,x278,x279,x280,x281,b914,b915,b916,b917,b918,b919,b920,b921,b922,b923,b924,b925,b926,b927,b928,b929,b930,b931,b932,b933,b934,b935,b936,b937,b938,b939,b940,b941,b942,b943,b944,b945,b946,b947,b948,b949,b950,b951,b952,b953,b954,b955,b956,b957,b958,b959,b960,b961,b962,b963,b964,b965,b966,b967,b968,b969,b970,b971,b972,b973,b974,b975,b976,b977,b978,b979,b980,b981,b982,b983,b984,b985,b986,b987,b988,b989,b990,b991,b992,b993,b994,b995,b996,b997,b998,b999,b1000,b1001,b1002,b1003,b1004,b1005,b1006,b1007,b1008,b1009,b1010,b1011,b1012,b1013,b1014,b1015,b1016,b1017,b1018,b1019,b1020,b1021,b1022,b1023,b1024,b1025,b1026,b1027,b1028,b1029,b1030,b1031,b1032,b1033;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x2); 
   fscanf(fp,"%f", &x3); 
   fscanf(fp,"%f", &x4); 
   fscanf(fp,"%f", &x5); 
   fscanf(fp,"%f", &x26); 
   fscanf(fp,"%f", &x27); 
   fscanf(fp,"%f", &x28); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x46); 
   fscanf(fp,"%f", &x47); 
   fscanf(fp,"%f", &x48); 
   fscanf(fp,"%f", &x49); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x146); 
   fscanf(fp,"%f", &x147); 
   fscanf(fp,"%f", &x148); 
   fscanf(fp,"%f", &x149); 
   fscanf(fp,"%f", &x150); 
   fscanf(fp,"%f", &x151); 
   fscanf(fp,"%f", &x152); 
   fscanf(fp,"%f", &x153); 
   fscanf(fp,"%f", &x154); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x158); 
   fscanf(fp,"%f", &x159); 
   fscanf(fp,"%f", &x160); 
   fscanf(fp,"%f", &x161); 
   fscanf(fp,"%f", &x162); 
   fscanf(fp,"%f", &x163); 
   fscanf(fp,"%f", &x164); 
   fscanf(fp,"%f", &x165); 
   fscanf(fp,"%f", &x166); 
   fscanf(fp,"%f", &x167); 
   fscanf(fp,"%f", &x168); 
   fscanf(fp,"%f", &x169); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x173); 
   fscanf(fp,"%f", &x174); 
   fscanf(fp,"%f", &x175); 
   fscanf(fp,"%f", &x176); 
   fscanf(fp,"%f", &x177); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
   fscanf(fp,"%f", &x262); 
   fscanf(fp,"%f", &x263); 
   fscanf(fp,"%f", &x264); 
   fscanf(fp,"%f", &x265); 
   fscanf(fp,"%f", &x266); 
   fscanf(fp,"%f", &x267); 
   fscanf(fp,"%f", &x268); 
   fscanf(fp,"%f", &x269); 
   fscanf(fp,"%f", &x270); 
   fscanf(fp,"%f", &x271); 
   fscanf(fp,"%f", &x272); 
   fscanf(fp,"%f", &x273); 
   fscanf(fp,"%f", &x274); 
   fscanf(fp,"%f", &x275); 
   fscanf(fp,"%f", &x276); 
   fscanf(fp,"%f", &x277); 
   fscanf(fp,"%f", &x278); 
   fscanf(fp,"%f", &x279); 
   fscanf(fp,"%f", &x280); 
   fscanf(fp,"%f", &x281); 
   fscanf(fp,"%f", &b914); 
   fscanf(fp,"%f", &b915); 
   fscanf(fp,"%f", &b916); 
   fscanf(fp,"%f", &b917); 
   fscanf(fp,"%f", &b918); 
   fscanf(fp,"%f", &b919); 
   fscanf(fp,"%f", &b920); 
   fscanf(fp,"%f", &b921); 
   fscanf(fp,"%f", &b922); 
   fscanf(fp,"%f", &b923); 
   fscanf(fp,"%f", &b924); 
   fscanf(fp,"%f", &b925); 
   fscanf(fp,"%f", &b926); 
   fscanf(fp,"%f", &b927); 
   fscanf(fp,"%f", &b928); 
   fscanf(fp,"%f", &b929); 
   fscanf(fp,"%f", &b930); 
   fscanf(fp,"%f", &b931); 
   fscanf(fp,"%f", &b932); 
   fscanf(fp,"%f", &b933); 
   fscanf(fp,"%f", &b934); 
   fscanf(fp,"%f", &b935); 
   fscanf(fp,"%f", &b936); 
   fscanf(fp,"%f", &b937); 
   fscanf(fp,"%f", &b938); 
   fscanf(fp,"%f", &b939); 
   fscanf(fp,"%f", &b940); 
   fscanf(fp,"%f", &b941); 
   fscanf(fp,"%f", &b942); 
   fscanf(fp,"%f", &b943); 
   fscanf(fp,"%f", &b944); 
   fscanf(fp,"%f", &b945); 
   fscanf(fp,"%f", &b946); 
   fscanf(fp,"%f", &b947); 
   fscanf(fp,"%f", &b948); 
   fscanf(fp,"%f", &b949); 
   fscanf(fp,"%f", &b950); 
   fscanf(fp,"%f", &b951); 
   fscanf(fp,"%f", &b952); 
   fscanf(fp,"%f", &b953); 
   fscanf(fp,"%f", &b954); 
   fscanf(fp,"%f", &b955); 
   fscanf(fp,"%f", &b956); 
   fscanf(fp,"%f", &b957); 
   fscanf(fp,"%f", &b958); 
   fscanf(fp,"%f", &b959); 
   fscanf(fp,"%f", &b960); 
   fscanf(fp,"%f", &b961); 
   fscanf(fp,"%f", &b962); 
   fscanf(fp,"%f", &b963); 
   fscanf(fp,"%f", &b964); 
   fscanf(fp,"%f", &b965); 
   fscanf(fp,"%f", &b966); 
   fscanf(fp,"%f", &b967); 
   fscanf(fp,"%f", &b968); 
   fscanf(fp,"%f", &b969); 
   fscanf(fp,"%f", &b970); 
   fscanf(fp,"%f", &b971); 
   fscanf(fp,"%f", &b972); 
   fscanf(fp,"%f", &b973); 
   fscanf(fp,"%f", &b974); 
   fscanf(fp,"%f", &b975); 
   fscanf(fp,"%f", &b976); 
   fscanf(fp,"%f", &b977); 
   fscanf(fp,"%f", &b978); 
   fscanf(fp,"%f", &b979); 
   fscanf(fp,"%f", &b980); 
   fscanf(fp,"%f", &b981); 
   fscanf(fp,"%f", &b982); 
   fscanf(fp,"%f", &b983); 
   fscanf(fp,"%f", &b984); 
   fscanf(fp,"%f", &b985); 
   fscanf(fp,"%f", &b986); 
   fscanf(fp,"%f", &b987); 
   fscanf(fp,"%f", &b988); 
   fscanf(fp,"%f", &b989); 
   fscanf(fp,"%f", &b990); 
   fscanf(fp,"%f", &b991); 
   fscanf(fp,"%f", &b992); 
   fscanf(fp,"%f", &b993); 
   fscanf(fp,"%f", &b994); 
   fscanf(fp,"%f", &b995); 
   fscanf(fp,"%f", &b996); 
   fscanf(fp,"%f", &b997); 
   fscanf(fp,"%f", &b998); 
   fscanf(fp,"%f", &b999); 
   fscanf(fp,"%f", &b1000); 
   fscanf(fp,"%f", &b1001); 
   fscanf(fp,"%f", &b1002); 
   fscanf(fp,"%f", &b1003); 
   fscanf(fp,"%f", &b1004); 
   fscanf(fp,"%f", &b1005); 
   fscanf(fp,"%f", &b1006); 
   fscanf(fp,"%f", &b1007); 
   fscanf(fp,"%f", &b1008); 
   fscanf(fp,"%f", &b1009); 
   fscanf(fp,"%f", &b1010); 
   fscanf(fp,"%f", &b1011); 
   fscanf(fp,"%f", &b1012); 
   fscanf(fp,"%f", &b1013); 
   fscanf(fp,"%f", &b1014); 
   fscanf(fp,"%f", &b1015); 
   fscanf(fp,"%f", &b1016); 
   fscanf(fp,"%f", &b1017); 
   fscanf(fp,"%f", &b1018); 
   fscanf(fp,"%f", &b1019); 
   fscanf(fp,"%f", &b1020); 
   fscanf(fp,"%f", &b1021); 
   fscanf(fp,"%f", &b1022); 
   fscanf(fp,"%f", &b1023); 
   fscanf(fp,"%f", &b1024); 
   fscanf(fp,"%f", &b1025); 
   fscanf(fp,"%f", &b1026); 
   fscanf(fp,"%f", &b1027); 
   fscanf(fp,"%f", &b1028); 
   fscanf(fp,"%f", &b1029); 
   fscanf(fp,"%f", &b1030); 
   fscanf(fp,"%f", &b1031); 
   fscanf(fp,"%f", &b1032); 
   fscanf(fp,"%f", &b1033); 

   fclose(fp);
   res=-( + x2 + x3 + x4 + x5 - 5*x26 - 10*x27 - 5*x28 - 10*x29 + 2*x46
 + x47 + 2*x48 + x49 + 10*x114 + 5*x115 + 5*x116 + 10*x117 + 5*x118
 + 5*x119 + 5*x120 + 10*x121 - 40*x146 - 30*x147 - 15*x148 - 10*x149
 - 15*x150 - 20*x151 - 25*x152 - 30*x153 - 10*x154 - 30*x155 - 40*x156
 - 40*x157 - 30*x158 - 20*x159 - 20*x160 - 25*x161 - 35*x162 - 50*x163
 - 20*x164 - 50*x165 - 20*x166 - 30*x167 - 35*x168 - 10*x169 - 25*x170
 - 50*x171 - 10*x172 - 35*x173 - 15*x174 - 20*x175 - 20*x176 - 30*x177
 - 30*x206 - 40*x207 - 40*x208 - 35*x209 + x226 + x227 + x228 + x229
 - 80*x258 - 90*x259 - 120*x260 - 100*x261 - 285*x262 - 390*x263
 - 350*x264 - 300*x265 - 290*x266 - 405*x267 - 190*x268 - 340*x269
 - 280*x270 - 400*x271 - 430*x272 - 260*x273 - 290*x274 - 300*x275
 - 240*x276 - 310*x277 - 350*x278 - 250*x279 - 300*x280 - 400*x281
 + 5*b914 + 4*b915 + 6*b916 + 3*b917 + 8*b918 + 7*b919 + 6*b920 + 5*b921
 + 6*b922 + 9*b923 + 4*b924 + 3*b925 + 10*b926 + 9*b927 + 5*b928 + 6*b929
 + 6*b930 + 10*b931 + 6*b932 + 9*b933 + 7*b934 + 7*b935 + 4*b936 + 2*b937
 + 4*b938 + 3*b939 + 2*b940 + 8*b941 + 5*b942 + 6*b943 + 7*b944 + 4*b945
 + 2*b946 + 5*b947 + 2*b948 + 6*b949 + 4*b950 + 7*b951 + 4*b952 + 7*b953
 + 3*b954 + 9*b955 + 3*b956 + 6*b957 + 7*b958 + 2*b959 + 9*b960 + 6*b961
 + 3*b962 + b963 + 9*b964 + 10*b965 + 2*b966 + 6*b967 + 3*b968 + 7*b969
 + 4*b970 + 8*b971 + b972 + 4*b973 + 2*b974 + 5*b975 + 2*b976 + 5*b977
 + 3*b978 + 4*b979 + 3*b980 + 7*b981 + 5*b982 + 7*b983 + 6*b984 + 2*b985
 + 2*b986 + 8*b987 + 4*b988 + 2*b989 + b990 + 4*b991 + b992 + b993
 + 2*b994 + 5*b995 + 2*b996 + 7*b997 + 9*b998 + 2*b999 + 9*b1000 + 6*b1001
 + 5*b1002 + 8*b1003 + 4*b1004 + 3*b1005 + 2*b1006 + 3*b1007 + 8*b1008
 + 9*b1009 + 10*b1010 + 6*b1011 + 3*b1012 + 6*b1013 + 4*b1014 + 8*b1015
 + 7*b1016 + 7*b1017 + 7*b1018 + 3*b1019 + 9*b1020 + 3*b1021 + 4*b1022
 + 8*b1023 + 6*b1024 + 8*b1025 + 2*b1026 + b1027 + 3*b1028 + 9*b1029
 + 8*b1030 + 3*b1031 + 4*b1032 + 3*b1033 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
