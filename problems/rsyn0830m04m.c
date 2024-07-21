#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830m04m";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x5,x22,x23,x24,x25,x38,x39,x40,x41,x86,x87,x88,x89,x102,x103,x104,x105,x110,x111,x112,x113,x114,x115,x116,x117,x126,x127,x128,x129,x130,x131,x132,x133,x134,x135,x136,x137,x138,x139,x140,x141,b478,b479,b480,b481,b482,b483,b484,b485,b486,b487,b488,b489,b494,b495,b496,b497,b498,b499,b500,b501,b502,b503,b504,b505,b510,b511,b512,b513,b514,b515,b516,b517,b518,b519,b520,b521,b526,b527,b528,b529,b530,b531,b532,b533,b534,b535,b536,b537,b542,b543,b544,b545,b546,b547,b548,b549,b550,b551,b552,b553,b558,b559,b560,b561,b562,b563,b564,b565,b566,b567,b568,b569,b574,b575,b576,b577,b578,b579,b580,b581,b582,b583,b584,b585,b590,b591,b592,b593,b594,b595,b596,b597,b598,b599,b600,b601,x602,x603,x604,x605,x626,x627,x628,x629,x646,x647,x648,x649,x714,x715,x716,x717,x718,x719,x720,x721,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x806,x807,x808,x809,x826,x827,x828,x829,x858,x859,x860,x861,x862,x863,x864,x865,x866,x867,x868,x869,x870,x871,x872,x873,x874,x875,x876,x877,x878,x879,x880,x881,b1002,b1003,b1004,b1005,b1006,b1007,b1008,b1009,b1010,b1011,b1012,b1013,b1014,b1015,b1016,b1017,b1018,b1019,b1020,b1021,b1022,b1023,b1024,b1025,b1026,b1027,b1028,b1029,b1030,b1031,b1032,b1033,b1034,b1035,b1036,b1037,b1038,b1039,b1040,b1041,b1042,b1043,b1044,b1045,b1046,b1047,b1048,b1049,b1050,b1051,b1052,b1053,b1054,b1055,b1056,b1057,b1058,b1059,b1060,b1061,b1062,b1063,b1064,b1065,b1066,b1067,b1068,b1069,b1070,b1071,b1072,b1073,b1074,b1075,b1076,b1077,b1078,b1079,b1080,b1081,b1082,b1083,b1084,b1085,b1086,b1087,b1088,b1089,b1090,b1091,b1092,b1093,b1094,b1095,b1096,b1097,b1098,b1099,b1100,b1101,b1102,b1103,b1104,b1105,b1106,b1107,b1108,b1109,b1110,b1111,b1112,b1113,b1114,b1115,b1116,b1117,b1118,b1119,b1120,b1121;
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
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x23); 
   fscanf(fp,"%f", &x24); 
   fscanf(fp,"%f", &x25); 
   fscanf(fp,"%f", &x38); 
   fscanf(fp,"%f", &x39); 
   fscanf(fp,"%f", &x40); 
   fscanf(fp,"%f", &x41); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x134); 
   fscanf(fp,"%f", &x135); 
   fscanf(fp,"%f", &x136); 
   fscanf(fp,"%f", &x137); 
   fscanf(fp,"%f", &x138); 
   fscanf(fp,"%f", &x139); 
   fscanf(fp,"%f", &x140); 
   fscanf(fp,"%f", &x141); 
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
   fscanf(fp,"%f", &b558); 
   fscanf(fp,"%f", &b559); 
   fscanf(fp,"%f", &b560); 
   fscanf(fp,"%f", &b561); 
   fscanf(fp,"%f", &b562); 
   fscanf(fp,"%f", &b563); 
   fscanf(fp,"%f", &b564); 
   fscanf(fp,"%f", &b565); 
   fscanf(fp,"%f", &b566); 
   fscanf(fp,"%f", &b567); 
   fscanf(fp,"%f", &b568); 
   fscanf(fp,"%f", &b569); 
   fscanf(fp,"%f", &b574); 
   fscanf(fp,"%f", &b575); 
   fscanf(fp,"%f", &b576); 
   fscanf(fp,"%f", &b577); 
   fscanf(fp,"%f", &b578); 
   fscanf(fp,"%f", &b579); 
   fscanf(fp,"%f", &b580); 
   fscanf(fp,"%f", &b581); 
   fscanf(fp,"%f", &b582); 
   fscanf(fp,"%f", &b583); 
   fscanf(fp,"%f", &b584); 
   fscanf(fp,"%f", &b585); 
   fscanf(fp,"%f", &b590); 
   fscanf(fp,"%f", &b591); 
   fscanf(fp,"%f", &b592); 
   fscanf(fp,"%f", &b593); 
   fscanf(fp,"%f", &b594); 
   fscanf(fp,"%f", &b595); 
   fscanf(fp,"%f", &b596); 
   fscanf(fp,"%f", &b597); 
   fscanf(fp,"%f", &b598); 
   fscanf(fp,"%f", &b599); 
   fscanf(fp,"%f", &b600); 
   fscanf(fp,"%f", &b601); 
   fscanf(fp,"%f", &x602); 
   fscanf(fp,"%f", &x603); 
   fscanf(fp,"%f", &x604); 
   fscanf(fp,"%f", &x605); 
   fscanf(fp,"%f", &x626); 
   fscanf(fp,"%f", &x627); 
   fscanf(fp,"%f", &x628); 
   fscanf(fp,"%f", &x629); 
   fscanf(fp,"%f", &x646); 
   fscanf(fp,"%f", &x647); 
   fscanf(fp,"%f", &x648); 
   fscanf(fp,"%f", &x649); 
   fscanf(fp,"%f", &x714); 
   fscanf(fp,"%f", &x715); 
   fscanf(fp,"%f", &x716); 
   fscanf(fp,"%f", &x717); 
   fscanf(fp,"%f", &x718); 
   fscanf(fp,"%f", &x719); 
   fscanf(fp,"%f", &x720); 
   fscanf(fp,"%f", &x721); 
   fscanf(fp,"%f", &x746); 
   fscanf(fp,"%f", &x747); 
   fscanf(fp,"%f", &x748); 
   fscanf(fp,"%f", &x749); 
   fscanf(fp,"%f", &x750); 
   fscanf(fp,"%f", &x751); 
   fscanf(fp,"%f", &x752); 
   fscanf(fp,"%f", &x753); 
   fscanf(fp,"%f", &x754); 
   fscanf(fp,"%f", &x755); 
   fscanf(fp,"%f", &x756); 
   fscanf(fp,"%f", &x757); 
   fscanf(fp,"%f", &x758); 
   fscanf(fp,"%f", &x759); 
   fscanf(fp,"%f", &x760); 
   fscanf(fp,"%f", &x761); 
   fscanf(fp,"%f", &x762); 
   fscanf(fp,"%f", &x763); 
   fscanf(fp,"%f", &x764); 
   fscanf(fp,"%f", &x765); 
   fscanf(fp,"%f", &x766); 
   fscanf(fp,"%f", &x767); 
   fscanf(fp,"%f", &x768); 
   fscanf(fp,"%f", &x769); 
   fscanf(fp,"%f", &x770); 
   fscanf(fp,"%f", &x771); 
   fscanf(fp,"%f", &x772); 
   fscanf(fp,"%f", &x773); 
   fscanf(fp,"%f", &x774); 
   fscanf(fp,"%f", &x775); 
   fscanf(fp,"%f", &x776); 
   fscanf(fp,"%f", &x777); 
   fscanf(fp,"%f", &x806); 
   fscanf(fp,"%f", &x807); 
   fscanf(fp,"%f", &x808); 
   fscanf(fp,"%f", &x809); 
   fscanf(fp,"%f", &x826); 
   fscanf(fp,"%f", &x827); 
   fscanf(fp,"%f", &x828); 
   fscanf(fp,"%f", &x829); 
   fscanf(fp,"%f", &x858); 
   fscanf(fp,"%f", &x859); 
   fscanf(fp,"%f", &x860); 
   fscanf(fp,"%f", &x861); 
   fscanf(fp,"%f", &x862); 
   fscanf(fp,"%f", &x863); 
   fscanf(fp,"%f", &x864); 
   fscanf(fp,"%f", &x865); 
   fscanf(fp,"%f", &x866); 
   fscanf(fp,"%f", &x867); 
   fscanf(fp,"%f", &x868); 
   fscanf(fp,"%f", &x869); 
   fscanf(fp,"%f", &x870); 
   fscanf(fp,"%f", &x871); 
   fscanf(fp,"%f", &x872); 
   fscanf(fp,"%f", &x873); 
   fscanf(fp,"%f", &x874); 
   fscanf(fp,"%f", &x875); 
   fscanf(fp,"%f", &x876); 
   fscanf(fp,"%f", &x877); 
   fscanf(fp,"%f", &x878); 
   fscanf(fp,"%f", &x879); 
   fscanf(fp,"%f", &x880); 
   fscanf(fp,"%f", &x881); 
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
   fscanf(fp,"%f", &b1034); 
   fscanf(fp,"%f", &b1035); 
   fscanf(fp,"%f", &b1036); 
   fscanf(fp,"%f", &b1037); 
   fscanf(fp,"%f", &b1038); 
   fscanf(fp,"%f", &b1039); 
   fscanf(fp,"%f", &b1040); 
   fscanf(fp,"%f", &b1041); 
   fscanf(fp,"%f", &b1042); 
   fscanf(fp,"%f", &b1043); 
   fscanf(fp,"%f", &b1044); 
   fscanf(fp,"%f", &b1045); 
   fscanf(fp,"%f", &b1046); 
   fscanf(fp,"%f", &b1047); 
   fscanf(fp,"%f", &b1048); 
   fscanf(fp,"%f", &b1049); 
   fscanf(fp,"%f", &b1050); 
   fscanf(fp,"%f", &b1051); 
   fscanf(fp,"%f", &b1052); 
   fscanf(fp,"%f", &b1053); 
   fscanf(fp,"%f", &b1054); 
   fscanf(fp,"%f", &b1055); 
   fscanf(fp,"%f", &b1056); 
   fscanf(fp,"%f", &b1057); 
   fscanf(fp,"%f", &b1058); 
   fscanf(fp,"%f", &b1059); 
   fscanf(fp,"%f", &b1060); 
   fscanf(fp,"%f", &b1061); 
   fscanf(fp,"%f", &b1062); 
   fscanf(fp,"%f", &b1063); 
   fscanf(fp,"%f", &b1064); 
   fscanf(fp,"%f", &b1065); 
   fscanf(fp,"%f", &b1066); 
   fscanf(fp,"%f", &b1067); 
   fscanf(fp,"%f", &b1068); 
   fscanf(fp,"%f", &b1069); 
   fscanf(fp,"%f", &b1070); 
   fscanf(fp,"%f", &b1071); 
   fscanf(fp,"%f", &b1072); 
   fscanf(fp,"%f", &b1073); 
   fscanf(fp,"%f", &b1074); 
   fscanf(fp,"%f", &b1075); 
   fscanf(fp,"%f", &b1076); 
   fscanf(fp,"%f", &b1077); 
   fscanf(fp,"%f", &b1078); 
   fscanf(fp,"%f", &b1079); 
   fscanf(fp,"%f", &b1080); 
   fscanf(fp,"%f", &b1081); 
   fscanf(fp,"%f", &b1082); 
   fscanf(fp,"%f", &b1083); 
   fscanf(fp,"%f", &b1084); 
   fscanf(fp,"%f", &b1085); 
   fscanf(fp,"%f", &b1086); 
   fscanf(fp,"%f", &b1087); 
   fscanf(fp,"%f", &b1088); 
   fscanf(fp,"%f", &b1089); 
   fscanf(fp,"%f", &b1090); 
   fscanf(fp,"%f", &b1091); 
   fscanf(fp,"%f", &b1092); 
   fscanf(fp,"%f", &b1093); 
   fscanf(fp,"%f", &b1094); 
   fscanf(fp,"%f", &b1095); 
   fscanf(fp,"%f", &b1096); 
   fscanf(fp,"%f", &b1097); 
   fscanf(fp,"%f", &b1098); 
   fscanf(fp,"%f", &b1099); 
   fscanf(fp,"%f", &b1100); 
   fscanf(fp,"%f", &b1101); 
   fscanf(fp,"%f", &b1102); 
   fscanf(fp,"%f", &b1103); 
   fscanf(fp,"%f", &b1104); 
   fscanf(fp,"%f", &b1105); 
   fscanf(fp,"%f", &b1106); 
   fscanf(fp,"%f", &b1107); 
   fscanf(fp,"%f", &b1108); 
   fscanf(fp,"%f", &b1109); 
   fscanf(fp,"%f", &b1110); 
   fscanf(fp,"%f", &b1111); 
   fscanf(fp,"%f", &b1112); 
   fscanf(fp,"%f", &b1113); 
   fscanf(fp,"%f", &b1114); 
   fscanf(fp,"%f", &b1115); 
   fscanf(fp,"%f", &b1116); 
   fscanf(fp,"%f", &b1117); 
   fscanf(fp,"%f", &b1118); 
   fscanf(fp,"%f", &b1119); 
   fscanf(fp,"%f", &b1120); 
   fscanf(fp,"%f", &b1121); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 15*x5 + 20*x22 + 21*x23 + 19*x24
 + 19*x25 + 18*x38 + 20*x39 + 20*x40 + 19*x41 + 16*x86 + 19*x87 + 17*x88
 + 16*x89 - 26*x102 - 31*x103 - 31*x104 - 35*x105 - 30*x110 - 29*x111
 - 37*x112 - 36*x113 + 20*x114 + 18*x115 + 21*x116 + 16*x117 - 2*x126
 - 2*x127 - 2*x128 - 2*x129 - 3*x130 - 2*x131 - 2*x132 - 2*x133 - 3*x134
 - 3*x135 - 3*x136 - 3*x137 - 2*x138 - 2*x139 - 2*x140 - 2*x141 + 6*b478
 + 4*b479 + 3*b480 + 3*b481 + 40*b482 + 35*b483 + 20*b484 + 20*b485
 + 46*b486 + 39*b487 + 23*b488 + 23*b489 + 7*b494 + 4*b495 + 4*b496
 + 4*b497 + 30*b498 + 25*b499 + 20*b500 + 20*b501 + 37*b502 + 29*b503
 + 22*b504 + 24*b505 + 7*b510 + 5*b511 + 3*b512 + 3*b513 + 15*b514
 + 5*b515 + 2*b516 + 2*b517 + 22*b518 + 10*b519 + 5*b520 + 5*b521
 + 11*b526 + 8*b527 + 6*b528 + 5*b529 + 13*b530 + 8*b531 + 3*b532 + 3*b533
 + 24*b534 + 16*b535 + 9*b536 + 8*b537 + 10*b542 + 7*b543 + 6*b544
 + 6*b545 + 13*b546 + 8*b547 + 3*b548 + 2*b549 + 23*b550 + 15*b551
 + 9*b552 + 8*b553 + 9*b558 + 9*b559 + 7*b560 + 6*b561 + 30*b562 + 30*b563
 + 25*b564 + 20*b565 + 39*b566 + 39*b567 + 32*b568 + 26*b569 + 8*b574
 + 7*b575 + 7*b576 + 4*b577 + 20*b578 + 15*b579 + 10*b580 + 10*b581
 + 28*b582 + 22*b583 + 17*b584 + 14*b585 + 8*b590 + 6*b591 + 5*b592
 + 3*b593 + 15*b594 + 10*b595 + 6*b596 + 3*b597 + 23*b598 + 16*b599
 + 11*b600 + 6*b601 + x602 + x603 + x604 + x605 - 5*x626 - 10*x627
 - 5*x628 - 10*x629 + 2*x646 + x647 + 2*x648 + x649 + 10*x714 + 5*x715
 + 5*x716 + 10*x717 + 5*x718 + 5*x719 + 5*x720 + 10*x721 - 40*x746
 - 30*x747 - 15*x748 - 10*x749 - 15*x750 - 20*x751 - 25*x752 - 30*x753
 - 10*x754 - 30*x755 - 40*x756 - 40*x757 - 30*x758 - 20*x759 - 20*x760
 - 25*x761 - 35*x762 - 50*x763 - 20*x764 - 50*x765 - 20*x766 - 30*x767
 - 35*x768 - 10*x769 - 25*x770 - 50*x771 - 10*x772 - 35*x773 - 15*x774
 - 20*x775 - 20*x776 - 30*x777 - 30*x806 - 40*x807 - 40*x808 - 35*x809
 + x826 + x827 + x828 + x829 - 80*x858 - 90*x859 - 120*x860 - 100*x861
 - 285*x862 - 390*x863 - 350*x864 - 300*x865 - 290*x866 - 405*x867
 - 190*x868 - 340*x869 - 280*x870 - 400*x871 - 430*x872 - 260*x873
 - 290*x874 - 300*x875 - 240*x876 - 310*x877 - 350*x878 - 250*x879
 - 300*x880 - 400*x881 + 5*b1002 + 4*b1003 + 6*b1004 + 3*b1005 + 8*b1006
 + 7*b1007 + 6*b1008 + 5*b1009 + 6*b1010 + 9*b1011 + 4*b1012 + 3*b1013
 + 10*b1014 + 9*b1015 + 5*b1016 + 6*b1017 + 6*b1018 + 10*b1019 + 6*b1020
 + 9*b1021 + 7*b1022 + 7*b1023 + 4*b1024 + 2*b1025 + 4*b1026 + 3*b1027
 + 2*b1028 + 8*b1029 + 5*b1030 + 6*b1031 + 7*b1032 + 4*b1033 + 2*b1034
 + 5*b1035 + 2*b1036 + 6*b1037 + 4*b1038 + 7*b1039 + 4*b1040 + 7*b1041
 + 3*b1042 + 9*b1043 + 3*b1044 + 6*b1045 + 7*b1046 + 2*b1047 + 9*b1048
 + 6*b1049 + 3*b1050 + b1051 + 9*b1052 + 10*b1053 + 2*b1054 + 6*b1055
 + 3*b1056 + 7*b1057 + 4*b1058 + 8*b1059 + b1060 + 4*b1061 + 2*b1062
 + 5*b1063 + 2*b1064 + 5*b1065 + 3*b1066 + 4*b1067 + 3*b1068 + 7*b1069
 + 5*b1070 + 7*b1071 + 6*b1072 + 2*b1073 + 2*b1074 + 8*b1075 + 4*b1076
 + 2*b1077 + b1078 + 4*b1079 + b1080 + b1081 + 2*b1082 + 5*b1083 + 2*b1084
 + 7*b1085 + 9*b1086 + 2*b1087 + 9*b1088 + 6*b1089 + 5*b1090 + 8*b1091
 + 4*b1092 + 3*b1093 + 2*b1094 + 3*b1095 + 8*b1096 + 9*b1097 + 10*b1098
 + 6*b1099 + 3*b1100 + 6*b1101 + 4*b1102 + 8*b1103 + 7*b1104 + 7*b1105
 + 7*b1106 + 3*b1107 + 9*b1108 + 3*b1109 + 4*b1110 + 8*b1111 + 6*b1112
 + 8*b1113 + 2*b1114 + b1115 + 3*b1116 + 9*b1117 + 8*b1118 + 3*b1119
 + 4*b1120 + 3*b1121 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
