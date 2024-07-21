#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="ndcc16";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b961,b962,b963,b964,b965,b966,b967,b968,b969,b970,b971,b972,b973,b974,b975,b976,b977,b978,b979,b980,b981,b982,b983,b984,b985,b986,b987,b988,b989,b990,b991,b992,b993,b994,b995,b996,b997,b998,b999,b1000,b1001,b1002,b1003,b1004,b1005,b1006,b1007,b1008,b1009,b1010,b1011,b1012,b1013,b1014,b1015,b1016,b1017,b1018,b1019,b1020;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

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

   fclose(fp);
   res=-(- 1.152432865*b961 - 3.011993167*b962 - 2.960375281*b963
 - 1.736309608*b964 - 1.152432865*b965 - 2.363195782*b966
 - 2.05937716*b967 - 3.985025335*b968 - 3.789003172*b969
 - 2.363195782*b970 - 3.921012982*b971 - 3.156380512*b972
 - 2.415793864*b973 - 3.011993167*b974 - 2.05937716*b975
 - 1.163363584*b976 - 2.330956801*b977 - 1.29144937*b978
 - 3.761674897*b979 - 2.960375281*b980 - 2.330956801*b981
 - 1.396790695*b982 - 3.628673512*b983 - 1.993672117*b984
 - 3.921012982*b985 - 2.05780087*b986 - 2.23064791*b987 - 3.156380512*b988
 - 1.396790695*b989 - 3.35525266*b990 - 1.976382727*b991 - 1.29144937*b992
 - 1.840522939*b993 - 3.337820236*b994 - 3.628673512*b995
 - 1.155800743*b996 - 1.736309608*b997 - 1.840522939*b998
 - 1.155800743*b999 - 3.496770256*b1000 - 2.415793864*b1001
 - 2.05780087*b1002 - 2.059284631*b1003 - 3.35525266*b1004
 - 2.059284631*b1005 - 2.534210494*b1006 - 3.985025335*b1007
 - 1.163363584*b1008 - 2.23064791*b1009 - 3.496770256*b1010
 - 1.025018077*b1011 - 3.789003172*b1012 - 1.993672117*b1013
 - 3.337820236*b1014 - 2.534210494*b1015 - 1.025018077*b1016
 - 1.757500525*b1017 - 3.761674897*b1018 - 1.976382727*b1019
 - 1.757500525*b1020  );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
