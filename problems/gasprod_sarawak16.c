#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="gasprod_sarawak16";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float b1,b2,b3,b4,b5,b6,b7,b9,b10,b11,b13,b15,b16,b17,b18,b19,b21,b22,b25,b26,b27,b28,b29,b30,b31,b32,b33,b37,b38,x727,x728,x729,x730,x731,x732,x733,x734,x735,x736,x737,x738,x739,x740,x741,x742,x743,x744,x745,x746,x747,x748,x749,x750,x751,x752,x753,x754,x755,x756,x757,x758,x759,x760,x761,x762,x763,x764,x765,x766,x767,x768,x769,x770,x771,x772,x773,x774,x775,x776,x777,x778,x779,x780,x781,x782,x783,x784,x785,x786,x787,x788,x789,x790,x791,x792,x793,x794,x795,x796,x797,x798,x799,x800,x801,x802,x803,x804,x805,x806,x807,x808,x809,x810,x811,x812,x813,x814,x815,x816,x817,x818,x819,x820,x821,x822,x823,x824,x825,x826,x827,x828,x829,x830,x831,x832,x833,x834,x835,x836,x837,x838,x839,x840,x841,x842,x843,x844,x845,x846,x847,x848,x849,x850,x851,x852,x853,x854;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &b1); 
   fscanf(fp,"%f", &b2); 
   fscanf(fp,"%f", &b3); 
   fscanf(fp,"%f", &b4); 
   fscanf(fp,"%f", &b5); 
   fscanf(fp,"%f", &b6); 
   fscanf(fp,"%f", &b7); 
   fscanf(fp,"%f", &b9); 
   fscanf(fp,"%f", &b10); 
   fscanf(fp,"%f", &b11); 
   fscanf(fp,"%f", &b13); 
   fscanf(fp,"%f", &b15); 
   fscanf(fp,"%f", &b16); 
   fscanf(fp,"%f", &b17); 
   fscanf(fp,"%f", &b18); 
   fscanf(fp,"%f", &b19); 
   fscanf(fp,"%f", &b21); 
   fscanf(fp,"%f", &b22); 
   fscanf(fp,"%f", &b25); 
   fscanf(fp,"%f", &b26); 
   fscanf(fp,"%f", &b27); 
   fscanf(fp,"%f", &b28); 
   fscanf(fp,"%f", &b29); 
   fscanf(fp,"%f", &b30); 
   fscanf(fp,"%f", &b31); 
   fscanf(fp,"%f", &b32); 
   fscanf(fp,"%f", &b33); 
   fscanf(fp,"%f", &b37); 
   fscanf(fp,"%f", &b38); 
   fscanf(fp,"%f", &x727); 
   fscanf(fp,"%f", &x728); 
   fscanf(fp,"%f", &x729); 
   fscanf(fp,"%f", &x730); 
   fscanf(fp,"%f", &x731); 
   fscanf(fp,"%f", &x732); 
   fscanf(fp,"%f", &x733); 
   fscanf(fp,"%f", &x734); 
   fscanf(fp,"%f", &x735); 
   fscanf(fp,"%f", &x736); 
   fscanf(fp,"%f", &x737); 
   fscanf(fp,"%f", &x738); 
   fscanf(fp,"%f", &x739); 
   fscanf(fp,"%f", &x740); 
   fscanf(fp,"%f", &x741); 
   fscanf(fp,"%f", &x742); 
   fscanf(fp,"%f", &x743); 
   fscanf(fp,"%f", &x744); 
   fscanf(fp,"%f", &x745); 
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
   fscanf(fp,"%f", &x778); 
   fscanf(fp,"%f", &x779); 
   fscanf(fp,"%f", &x780); 
   fscanf(fp,"%f", &x781); 
   fscanf(fp,"%f", &x782); 
   fscanf(fp,"%f", &x783); 
   fscanf(fp,"%f", &x784); 
   fscanf(fp,"%f", &x785); 
   fscanf(fp,"%f", &x786); 
   fscanf(fp,"%f", &x787); 
   fscanf(fp,"%f", &x788); 
   fscanf(fp,"%f", &x789); 
   fscanf(fp,"%f", &x790); 
   fscanf(fp,"%f", &x791); 
   fscanf(fp,"%f", &x792); 
   fscanf(fp,"%f", &x793); 
   fscanf(fp,"%f", &x794); 
   fscanf(fp,"%f", &x795); 
   fscanf(fp,"%f", &x796); 
   fscanf(fp,"%f", &x797); 
   fscanf(fp,"%f", &x798); 
   fscanf(fp,"%f", &x799); 
   fscanf(fp,"%f", &x800); 
   fscanf(fp,"%f", &x801); 
   fscanf(fp,"%f", &x802); 
   fscanf(fp,"%f", &x803); 
   fscanf(fp,"%f", &x804); 
   fscanf(fp,"%f", &x805); 
   fscanf(fp,"%f", &x806); 
   fscanf(fp,"%f", &x807); 
   fscanf(fp,"%f", &x808); 
   fscanf(fp,"%f", &x809); 
   fscanf(fp,"%f", &x810); 
   fscanf(fp,"%f", &x811); 
   fscanf(fp,"%f", &x812); 
   fscanf(fp,"%f", &x813); 
   fscanf(fp,"%f", &x814); 
   fscanf(fp,"%f", &x815); 
   fscanf(fp,"%f", &x816); 
   fscanf(fp,"%f", &x817); 
   fscanf(fp,"%f", &x818); 
   fscanf(fp,"%f", &x819); 
   fscanf(fp,"%f", &x820); 
   fscanf(fp,"%f", &x821); 
   fscanf(fp,"%f", &x822); 
   fscanf(fp,"%f", &x823); 
   fscanf(fp,"%f", &x824); 
   fscanf(fp,"%f", &x825); 
   fscanf(fp,"%f", &x826); 
   fscanf(fp,"%f", &x827); 
   fscanf(fp,"%f", &x828); 
   fscanf(fp,"%f", &x829); 
   fscanf(fp,"%f", &x830); 
   fscanf(fp,"%f", &x831); 
   fscanf(fp,"%f", &x832); 
   fscanf(fp,"%f", &x833); 
   fscanf(fp,"%f", &x834); 
   fscanf(fp,"%f", &x835); 
   fscanf(fp,"%f", &x836); 
   fscanf(fp,"%f", &x837); 
   fscanf(fp,"%f", &x838); 
   fscanf(fp,"%f", &x839); 
   fscanf(fp,"%f", &x840); 
   fscanf(fp,"%f", &x841); 
   fscanf(fp,"%f", &x842); 
   fscanf(fp,"%f", &x843); 
   fscanf(fp,"%f", &x844); 
   fscanf(fp,"%f", &x845); 
   fscanf(fp,"%f", &x846); 
   fscanf(fp,"%f", &x847); 
   fscanf(fp,"%f", &x848); 
   fscanf(fp,"%f", &x849); 
   fscanf(fp,"%f", &x850); 
   fscanf(fp,"%f", &x851); 
   fscanf(fp,"%f", &x852); 
   fscanf(fp,"%f", &x853); 
   fscanf(fp,"%f", &x854); 

   fclose(fp);
   res=-(- 20*b1 - 520*b2 - 20*b3 - 100*b4 - 20*b5 - 80*b6 - 550*b7 - 80*b9
 - 400*b10 - 16*b11 - 50*b13 - 80*b15 - 300*b16 - 500*b17 - 500*b18
 - 500*b19 - 500*b21 - 500*b22 - 320*b25 - 40*b26 - 40*b27 - 200*b28
 - 200*b29 - 80*b30 - 10*b31 - 600*b32 - 420*b33 - 7500*b37 - 9300*b38
 + 0.0555537525805191*x727 + 0.101197181857267*x728
 + 0.233012963332272*x729 + 0.466885834416565*x730
 + 0.814079786349015*x731 + 1.23524853521506*x732 + 1.63108634742837*x733
 + 1.87429332610494*x734 + 1.87429332610494*x735 + 1.63108634742837*x736
 + 1.23524853521507*x737 + 0.814079786349014*x738 + 0.466885834416565*x739
 + 0.233012963332272*x740 + 0.101197181857266*x741
 + 0.0555537525805197*x742 + 0.0555537525805191*x743
 + 0.101197181857267*x744 + 0.233012963332272*x745
 + 0.466885834416565*x746 + 0.814079786349015*x747 + 1.23524853521506*x748
 + 1.63108634742837*x749 + 1.87429332610494*x750 + 1.87429332610494*x751
 + 1.63108634742837*x752 + 1.23524853521507*x753 + 0.814079786349014*x754
 + 0.466885834416565*x755 + 0.233012963332272*x756
 + 0.101197181857266*x757 + 0.0555537525805197*x758
 + 0.0555537525805191*x759 + 0.101197181857267*x760
 + 0.233012963332272*x761 + 0.466885834416565*x762
 + 0.814079786349015*x763 + 1.23524853521506*x764 + 1.63108634742837*x765
 + 1.87429332610494*x766 + 1.87429332610494*x767 + 1.63108634742837*x768
 + 1.23524853521507*x769 + 0.814079786349014*x770 + 0.466885834416565*x771
 + 0.233012963332272*x772 + 0.101197181857266*x773
 + 0.0555537525805197*x774 + 0.0555537525805191*x775
 + 0.101197181857267*x776 + 0.233012963332272*x777
 + 0.466885834416565*x778 + 0.814079786349015*x779 + 1.23524853521506*x780
 + 1.63108634742837*x781 + 1.87429332610494*x782 + 1.87429332610494*x783
 + 1.63108634742837*x784 + 1.23524853521507*x785 + 0.814079786349014*x786
 + 0.466885834416565*x787 + 0.233012963332272*x788
 + 0.101197181857266*x789 + 0.0555537525805197*x790
 + 0.0555537525805191*x791 + 0.101197181857267*x792
 + 0.233012963332272*x793 + 0.466885834416565*x794
 + 0.814079786349015*x795 + 1.23524853521506*x796 + 1.63108634742837*x797
 + 1.87429332610494*x798 + 1.87429332610494*x799 + 1.63108634742837*x800
 + 1.23524853521507*x801 + 0.814079786349014*x802 + 0.466885834416565*x803
 + 0.233012963332272*x804 + 0.101197181857266*x805
 + 0.0555537525805197*x806 + 0.0555537525805191*x807
 + 0.101197181857267*x808 + 0.233012963332272*x809
 + 0.466885834416565*x810 + 0.814079786349015*x811 + 1.23524853521506*x812
 + 1.63108634742837*x813 + 1.87429332610494*x814 + 1.87429332610494*x815
 + 1.63108634742837*x816 + 1.23524853521507*x817 + 0.814079786349014*x818
 + 0.466885834416565*x819 + 0.233012963332272*x820
 + 0.101197181857266*x821 + 0.0555537525805197*x822
 + 0.0555537525805191*x823 + 0.101197181857267*x824
 + 0.233012963332272*x825 + 0.466885834416565*x826
 + 0.814079786349015*x827 + 1.23524853521506*x828 + 1.63108634742837*x829
 + 1.87429332610494*x830 + 1.87429332610494*x831 + 1.63108634742837*x832
 + 1.23524853521507*x833 + 0.814079786349014*x834 + 0.466885834416565*x835
 + 0.233012963332272*x836 + 0.101197181857266*x837
 + 0.0555537525805197*x838 + 0.0555537525805191*x839
 + 0.101197181857267*x840 + 0.233012963332272*x841
 + 0.466885834416565*x842 + 0.814079786349015*x843 + 1.23524853521506*x844
 + 1.63108634742837*x845 + 1.87429332610494*x846 + 1.87429332610494*x847
 + 1.63108634742837*x848 + 1.23524853521507*x849 + 0.814079786349014*x850
 + 0.466885834416565*x851 + 0.233012963332272*x852
 + 0.101197181857266*x853 + 0.0555537525805197*x854 
 - 14104.9870000248);

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
