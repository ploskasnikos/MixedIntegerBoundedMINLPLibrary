#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0840m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b923,b924,b925,b926,b927,b928,b929,b930,b931,b935,b936,b937,b938,b939,b940,b941,b942,b943,b947,b948,b949,b950,b951,b952,b953,b954,b955,b959,b960,b961,b962,b963,b964,b965,b966,b967,b971,b972,b973,b974,b975,b976,b977,b978,b979,b983,b984,b985,b986,b987,b988,b989,b990,b991,b995,b996,b997,b998,b999,b1000,b1001,b1002,b1003,b1007,b1008,b1009,b1010,b1011,b1012,b1013,b1014,b1015,x1016,x1017,x1018,x1034,x1035,x1036,x1049,x1050,x1051,x1100,x1101,x1102,x1103,x1104,x1105,x1124,x1125,x1126,x1127,x1128,x1129,x1130,x1131,x1132,x1133,x1134,x1135,x1136,x1137,x1138,x1139,x1140,x1141,x1142,x1143,x1144,x1145,x1146,x1147,x1169,x1170,x1171,x1184,x1185,x1186,x1235,x1236,x1237,x1238,x1239,x1240,x1259,x1260,x1261,x1262,x1263,x1264,x1265,x1266,x1267,x1268,x1269,x1270,x1271,x1272,x1273,x1274,x1275,x1276,x1277,x1278,x1279,x1280,x1281,x1282,x1283,x1284,x1285,b1922,b1923,b1924,b1925,b1926,b1927,b1928,b1929,b1930,b1931,b1932,b1933,b1934,b1935,b1936,b1937,b1938,b1939,b1940,b1941,b1942,b1943,b1944,b1945,b1946,b1947,b1948,b1949,b1950,b1951,b1952,b1953,b1954,b1955,b1956,b1957,b1958,b1959,b1960,b1961,b1962,b1963,b1964,b1965,b1966,b1967,b1968,b1969,b1970,b1971,b1972,b1973,b1974,b1975,b1976,b1977,b1978,b1979,b1980,b1981,b1982,b1983,b1984,b1985,b1986,b1987,b1988,b1989,b1990,b1991,b1992,b1993,b1994,b1995,b1996,b1997,b1998,b1999,b2000,b2001,b2002,b2003,b2004,b2005,b2006,b2007,b2008,b2009,b2010,b2011,b2012,b2013,b2014,b2015,b2016,b2017,b2018,b2019,b2020,b2021,b2022,b2023,b2024,b2025,b2026,b2027,b2028,b2029,b2030,b2031,b2032,b2033,b2034,b2035,b2036,b2037,b2038,b2039,b2040,b2041;
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
   fscanf(fp,"%f", &x17); 
   fscanf(fp,"%f", &x18); 
   fscanf(fp,"%f", &x19); 
   fscanf(fp,"%f", &x29); 
   fscanf(fp,"%f", &x30); 
   fscanf(fp,"%f", &x31); 
   fscanf(fp,"%f", &x65); 
   fscanf(fp,"%f", &x66); 
   fscanf(fp,"%f", &x67); 
   fscanf(fp,"%f", &x77); 
   fscanf(fp,"%f", &x78); 
   fscanf(fp,"%f", &x79); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x95); 
   fscanf(fp,"%f", &x96); 
   fscanf(fp,"%f", &x97); 
   fscanf(fp,"%f", &x98); 
   fscanf(fp,"%f", &x99); 
   fscanf(fp,"%f", &x100); 
   fscanf(fp,"%f", &x101); 
   fscanf(fp,"%f", &x102); 
   fscanf(fp,"%f", &x103); 
   fscanf(fp,"%f", &x104); 
   fscanf(fp,"%f", &x105); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &b923); 
   fscanf(fp,"%f", &b924); 
   fscanf(fp,"%f", &b925); 
   fscanf(fp,"%f", &b926); 
   fscanf(fp,"%f", &b927); 
   fscanf(fp,"%f", &b928); 
   fscanf(fp,"%f", &b929); 
   fscanf(fp,"%f", &b930); 
   fscanf(fp,"%f", &b931); 
   fscanf(fp,"%f", &b935); 
   fscanf(fp,"%f", &b936); 
   fscanf(fp,"%f", &b937); 
   fscanf(fp,"%f", &b938); 
   fscanf(fp,"%f", &b939); 
   fscanf(fp,"%f", &b940); 
   fscanf(fp,"%f", &b941); 
   fscanf(fp,"%f", &b942); 
   fscanf(fp,"%f", &b943); 
   fscanf(fp,"%f", &b947); 
   fscanf(fp,"%f", &b948); 
   fscanf(fp,"%f", &b949); 
   fscanf(fp,"%f", &b950); 
   fscanf(fp,"%f", &b951); 
   fscanf(fp,"%f", &b952); 
   fscanf(fp,"%f", &b953); 
   fscanf(fp,"%f", &b954); 
   fscanf(fp,"%f", &b955); 
   fscanf(fp,"%f", &b959); 
   fscanf(fp,"%f", &b960); 
   fscanf(fp,"%f", &b961); 
   fscanf(fp,"%f", &b962); 
   fscanf(fp,"%f", &b963); 
   fscanf(fp,"%f", &b964); 
   fscanf(fp,"%f", &b965); 
   fscanf(fp,"%f", &b966); 
   fscanf(fp,"%f", &b967); 
   fscanf(fp,"%f", &b971); 
   fscanf(fp,"%f", &b972); 
   fscanf(fp,"%f", &b973); 
   fscanf(fp,"%f", &b974); 
   fscanf(fp,"%f", &b975); 
   fscanf(fp,"%f", &b976); 
   fscanf(fp,"%f", &b977); 
   fscanf(fp,"%f", &b978); 
   fscanf(fp,"%f", &b979); 
   fscanf(fp,"%f", &b983); 
   fscanf(fp,"%f", &b984); 
   fscanf(fp,"%f", &b985); 
   fscanf(fp,"%f", &b986); 
   fscanf(fp,"%f", &b987); 
   fscanf(fp,"%f", &b988); 
   fscanf(fp,"%f", &b989); 
   fscanf(fp,"%f", &b990); 
   fscanf(fp,"%f", &b991); 
   fscanf(fp,"%f", &b995); 
   fscanf(fp,"%f", &b996); 
   fscanf(fp,"%f", &b997); 
   fscanf(fp,"%f", &b998); 
   fscanf(fp,"%f", &b999); 
   fscanf(fp,"%f", &b1000); 
   fscanf(fp,"%f", &b1001); 
   fscanf(fp,"%f", &b1002); 
   fscanf(fp,"%f", &b1003); 
   fscanf(fp,"%f", &b1007); 
   fscanf(fp,"%f", &b1008); 
   fscanf(fp,"%f", &b1009); 
   fscanf(fp,"%f", &b1010); 
   fscanf(fp,"%f", &b1011); 
   fscanf(fp,"%f", &b1012); 
   fscanf(fp,"%f", &b1013); 
   fscanf(fp,"%f", &b1014); 
   fscanf(fp,"%f", &b1015); 
   fscanf(fp,"%f", &x1016); 
   fscanf(fp,"%f", &x1017); 
   fscanf(fp,"%f", &x1018); 
   fscanf(fp,"%f", &x1034); 
   fscanf(fp,"%f", &x1035); 
   fscanf(fp,"%f", &x1036); 
   fscanf(fp,"%f", &x1049); 
   fscanf(fp,"%f", &x1050); 
   fscanf(fp,"%f", &x1051); 
   fscanf(fp,"%f", &x1100); 
   fscanf(fp,"%f", &x1101); 
   fscanf(fp,"%f", &x1102); 
   fscanf(fp,"%f", &x1103); 
   fscanf(fp,"%f", &x1104); 
   fscanf(fp,"%f", &x1105); 
   fscanf(fp,"%f", &x1124); 
   fscanf(fp,"%f", &x1125); 
   fscanf(fp,"%f", &x1126); 
   fscanf(fp,"%f", &x1127); 
   fscanf(fp,"%f", &x1128); 
   fscanf(fp,"%f", &x1129); 
   fscanf(fp,"%f", &x1130); 
   fscanf(fp,"%f", &x1131); 
   fscanf(fp,"%f", &x1132); 
   fscanf(fp,"%f", &x1133); 
   fscanf(fp,"%f", &x1134); 
   fscanf(fp,"%f", &x1135); 
   fscanf(fp,"%f", &x1136); 
   fscanf(fp,"%f", &x1137); 
   fscanf(fp,"%f", &x1138); 
   fscanf(fp,"%f", &x1139); 
   fscanf(fp,"%f", &x1140); 
   fscanf(fp,"%f", &x1141); 
   fscanf(fp,"%f", &x1142); 
   fscanf(fp,"%f", &x1143); 
   fscanf(fp,"%f", &x1144); 
   fscanf(fp,"%f", &x1145); 
   fscanf(fp,"%f", &x1146); 
   fscanf(fp,"%f", &x1147); 
   fscanf(fp,"%f", &x1169); 
   fscanf(fp,"%f", &x1170); 
   fscanf(fp,"%f", &x1171); 
   fscanf(fp,"%f", &x1184); 
   fscanf(fp,"%f", &x1185); 
   fscanf(fp,"%f", &x1186); 
   fscanf(fp,"%f", &x1235); 
   fscanf(fp,"%f", &x1236); 
   fscanf(fp,"%f", &x1237); 
   fscanf(fp,"%f", &x1238); 
   fscanf(fp,"%f", &x1239); 
   fscanf(fp,"%f", &x1240); 
   fscanf(fp,"%f", &x1259); 
   fscanf(fp,"%f", &x1260); 
   fscanf(fp,"%f", &x1261); 
   fscanf(fp,"%f", &x1262); 
   fscanf(fp,"%f", &x1263); 
   fscanf(fp,"%f", &x1264); 
   fscanf(fp,"%f", &x1265); 
   fscanf(fp,"%f", &x1266); 
   fscanf(fp,"%f", &x1267); 
   fscanf(fp,"%f", &x1268); 
   fscanf(fp,"%f", &x1269); 
   fscanf(fp,"%f", &x1270); 
   fscanf(fp,"%f", &x1271); 
   fscanf(fp,"%f", &x1272); 
   fscanf(fp,"%f", &x1273); 
   fscanf(fp,"%f", &x1274); 
   fscanf(fp,"%f", &x1275); 
   fscanf(fp,"%f", &x1276); 
   fscanf(fp,"%f", &x1277); 
   fscanf(fp,"%f", &x1278); 
   fscanf(fp,"%f", &x1279); 
   fscanf(fp,"%f", &x1280); 
   fscanf(fp,"%f", &x1281); 
   fscanf(fp,"%f", &x1282); 
   fscanf(fp,"%f", &x1283); 
   fscanf(fp,"%f", &x1284); 
   fscanf(fp,"%f", &x1285); 
   fscanf(fp,"%f", &b1922); 
   fscanf(fp,"%f", &b1923); 
   fscanf(fp,"%f", &b1924); 
   fscanf(fp,"%f", &b1925); 
   fscanf(fp,"%f", &b1926); 
   fscanf(fp,"%f", &b1927); 
   fscanf(fp,"%f", &b1928); 
   fscanf(fp,"%f", &b1929); 
   fscanf(fp,"%f", &b1930); 
   fscanf(fp,"%f", &b1931); 
   fscanf(fp,"%f", &b1932); 
   fscanf(fp,"%f", &b1933); 
   fscanf(fp,"%f", &b1934); 
   fscanf(fp,"%f", &b1935); 
   fscanf(fp,"%f", &b1936); 
   fscanf(fp,"%f", &b1937); 
   fscanf(fp,"%f", &b1938); 
   fscanf(fp,"%f", &b1939); 
   fscanf(fp,"%f", &b1940); 
   fscanf(fp,"%f", &b1941); 
   fscanf(fp,"%f", &b1942); 
   fscanf(fp,"%f", &b1943); 
   fscanf(fp,"%f", &b1944); 
   fscanf(fp,"%f", &b1945); 
   fscanf(fp,"%f", &b1946); 
   fscanf(fp,"%f", &b1947); 
   fscanf(fp,"%f", &b1948); 
   fscanf(fp,"%f", &b1949); 
   fscanf(fp,"%f", &b1950); 
   fscanf(fp,"%f", &b1951); 
   fscanf(fp,"%f", &b1952); 
   fscanf(fp,"%f", &b1953); 
   fscanf(fp,"%f", &b1954); 
   fscanf(fp,"%f", &b1955); 
   fscanf(fp,"%f", &b1956); 
   fscanf(fp,"%f", &b1957); 
   fscanf(fp,"%f", &b1958); 
   fscanf(fp,"%f", &b1959); 
   fscanf(fp,"%f", &b1960); 
   fscanf(fp,"%f", &b1961); 
   fscanf(fp,"%f", &b1962); 
   fscanf(fp,"%f", &b1963); 
   fscanf(fp,"%f", &b1964); 
   fscanf(fp,"%f", &b1965); 
   fscanf(fp,"%f", &b1966); 
   fscanf(fp,"%f", &b1967); 
   fscanf(fp,"%f", &b1968); 
   fscanf(fp,"%f", &b1969); 
   fscanf(fp,"%f", &b1970); 
   fscanf(fp,"%f", &b1971); 
   fscanf(fp,"%f", &b1972); 
   fscanf(fp,"%f", &b1973); 
   fscanf(fp,"%f", &b1974); 
   fscanf(fp,"%f", &b1975); 
   fscanf(fp,"%f", &b1976); 
   fscanf(fp,"%f", &b1977); 
   fscanf(fp,"%f", &b1978); 
   fscanf(fp,"%f", &b1979); 
   fscanf(fp,"%f", &b1980); 
   fscanf(fp,"%f", &b1981); 
   fscanf(fp,"%f", &b1982); 
   fscanf(fp,"%f", &b1983); 
   fscanf(fp,"%f", &b1984); 
   fscanf(fp,"%f", &b1985); 
   fscanf(fp,"%f", &b1986); 
   fscanf(fp,"%f", &b1987); 
   fscanf(fp,"%f", &b1988); 
   fscanf(fp,"%f", &b1989); 
   fscanf(fp,"%f", &b1990); 
   fscanf(fp,"%f", &b1991); 
   fscanf(fp,"%f", &b1992); 
   fscanf(fp,"%f", &b1993); 
   fscanf(fp,"%f", &b1994); 
   fscanf(fp,"%f", &b1995); 
   fscanf(fp,"%f", &b1996); 
   fscanf(fp,"%f", &b1997); 
   fscanf(fp,"%f", &b1998); 
   fscanf(fp,"%f", &b1999); 
   fscanf(fp,"%f", &b2000); 
   fscanf(fp,"%f", &b2001); 
   fscanf(fp,"%f", &b2002); 
   fscanf(fp,"%f", &b2003); 
   fscanf(fp,"%f", &b2004); 
   fscanf(fp,"%f", &b2005); 
   fscanf(fp,"%f", &b2006); 
   fscanf(fp,"%f", &b2007); 
   fscanf(fp,"%f", &b2008); 
   fscanf(fp,"%f", &b2009); 
   fscanf(fp,"%f", &b2010); 
   fscanf(fp,"%f", &b2011); 
   fscanf(fp,"%f", &b2012); 
   fscanf(fp,"%f", &b2013); 
   fscanf(fp,"%f", &b2014); 
   fscanf(fp,"%f", &b2015); 
   fscanf(fp,"%f", &b2016); 
   fscanf(fp,"%f", &b2017); 
   fscanf(fp,"%f", &b2018); 
   fscanf(fp,"%f", &b2019); 
   fscanf(fp,"%f", &b2020); 
   fscanf(fp,"%f", &b2021); 
   fscanf(fp,"%f", &b2022); 
   fscanf(fp,"%f", &b2023); 
   fscanf(fp,"%f", &b2024); 
   fscanf(fp,"%f", &b2025); 
   fscanf(fp,"%f", &b2026); 
   fscanf(fp,"%f", &b2027); 
   fscanf(fp,"%f", &b2028); 
   fscanf(fp,"%f", &b2029); 
   fscanf(fp,"%f", &b2030); 
   fscanf(fp,"%f", &b2031); 
   fscanf(fp,"%f", &b2032); 
   fscanf(fp,"%f", &b2033); 
   fscanf(fp,"%f", &b2034); 
   fscanf(fp,"%f", &b2035); 
   fscanf(fp,"%f", &b2036); 
   fscanf(fp,"%f", &b2037); 
   fscanf(fp,"%f", &b2038); 
   fscanf(fp,"%f", &b2039); 
   fscanf(fp,"%f", &b2040); 
   fscanf(fp,"%f", &b2041); 

   fclose(fp);
   res=-( + 10*x2 + 7*x3 + 5*x4 + 15*x17 + 11*x18 + 9*x19 + 18*x29
 + 14*x30 + 10*x31 + 19*x65 + 17*x66 + 17*x67 - 32*x77 - 41*x78 - 31*x79
 - 40*x83 - 39*x84 - 27*x85 + 16*x86 + 16*x87 + 15*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 3*x101 - 3*x102 - 3*x103 - 2*x104
 - 2*x105 - 2*x106 + 6*b923 + 4*b924 + 3*b925 + 40*b926 + 35*b927
 + 20*b928 + 46*b929 + 39*b930 + 23*b931 + 7*b935 + 4*b936 + 4*b937
 + 30*b938 + 25*b939 + 20*b940 + 37*b941 + 29*b942 + 22*b943 + 7*b947
 + 5*b948 + 3*b949 + 15*b950 + 5*b951 + 2*b952 + 22*b953 + 10*b954
 + 5*b955 + 11*b959 + 8*b960 + 6*b961 + 13*b962 + 8*b963 + 3*b964
 + 24*b965 + 16*b966 + 9*b967 + 10*b971 + 7*b972 + 6*b973 + 13*b974
 + 8*b975 + 3*b976 + 23*b977 + 15*b978 + 9*b979 + 9*b983 + 9*b984 + 7*b985
 + 30*b986 + 30*b987 + 25*b988 + 39*b989 + 39*b990 + 32*b991 + 8*b995
 + 7*b996 + 7*b997 + 20*b998 + 15*b999 + 10*b1000 + 28*b1001 + 22*b1002
 + 17*b1003 + 8*b1007 + 6*b1008 + 5*b1009 + 15*b1010 + 10*b1011 + 6*b1012
 + 23*b1013 + 16*b1014 + 11*b1015 + x1016 + x1017 + x1018 - 5*x1034
 - 10*x1035 - 5*x1036 + 2*x1049 + x1050 + 2*x1051 + 10*x1100 + 5*x1101
 + 5*x1102 + 5*x1103 + 5*x1104 + 5*x1105 - 40*x1124 - 30*x1125 - 15*x1126
 - 15*x1127 - 20*x1128 - 25*x1129 - 10*x1130 - 30*x1131 - 40*x1132
 - 30*x1133 - 20*x1134 - 20*x1135 - 35*x1136 - 50*x1137 - 20*x1138
 - 20*x1139 - 30*x1140 - 35*x1141 - 25*x1142 - 50*x1143 - 10*x1144
 - 15*x1145 - 20*x1146 - 20*x1147 - 30*x1169 - 40*x1170 - 40*x1171 + x1184
 + x1185 + x1186 + 5*x1235 + 3*x1236 + 4*x1237 + x1238 + x1239 + x1240
 - 120*x1259 - 110*x1260 - 150*x1261 - 140*x1262 - 120*x1263 - 100*x1264
 - 90*x1265 - 60*x1266 - 150*x1267 - 80*x1268 - 90*x1269 - 120*x1270
 - 285*x1271 - 390*x1272 - 350*x1273 - 290*x1274 - 405*x1275 - 190*x1276
 - 280*x1277 - 400*x1278 - 430*x1279 - 290*x1280 - 300*x1281 - 240*x1282
 - 350*x1283 - 250*x1284 - 300*x1285 + 5*b1922 + 4*b1923 + 6*b1924
 + 8*b1925 + 7*b1926 + 6*b1927 + 6*b1928 + 9*b1929 + 4*b1930 + 10*b1931
 + 9*b1932 + 5*b1933 + 6*b1934 + 10*b1935 + 6*b1936 + 7*b1937 + 7*b1938
 + 4*b1939 + 4*b1940 + 3*b1941 + 2*b1942 + 5*b1943 + 6*b1944 + 7*b1945
 + 2*b1946 + 5*b1947 + 2*b1948 + 4*b1949 + 7*b1950 + 4*b1951 + 3*b1952
 + 9*b1953 + 3*b1954 + 7*b1955 + 2*b1956 + 9*b1957 + 3*b1958 + b1959
 + 9*b1960 + 2*b1961 + 6*b1962 + 3*b1963 + 4*b1964 + 8*b1965 + b1966
 + 2*b1967 + 5*b1968 + 2*b1969 + 3*b1970 + 4*b1971 + 3*b1972 + 5*b1973
 + 7*b1974 + 6*b1975 + 2*b1976 + 8*b1977 + 4*b1978 + b1979 + 4*b1980
 + b1981 + 2*b1982 + 5*b1983 + 2*b1984 + 9*b1985 + 2*b1986 + 9*b1987
 + 5*b1988 + 8*b1989 + 4*b1990 + 2*b1991 + 3*b1992 + 8*b1993 + 10*b1994
 + 6*b1995 + 3*b1996 + 4*b1997 + 8*b1998 + 7*b1999 + 7*b2000 + 3*b2001
 + 9*b2002 + 4*b2003 + 8*b2004 + 6*b2005 + 2*b2006 + b2007 + 3*b2008
 + 8*b2009 + 3*b2010 + 4*b2011 + 9*b2012 + 5*b2013 + b2014 + 3*b2015
 + 9*b2016 + 5*b2017 + 5*b2018 + 3*b2019 + 3*b2020 + 5*b2021 + 3*b2022
 + 2*b2023 + 6*b2024 + 4*b2025 + 6*b2026 + 2*b2027 + 6*b2028 + 6*b2029
 + 6*b2030 + 4*b2031 + 3*b2032 + 3*b2033 + 2*b2034 + b2035 + 5*b2036
 + 8*b2037 + 6*b2038 + 9*b2039 + 5*b2040 + 2*b2041 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
