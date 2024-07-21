#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn30m03h";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x20,x21,x22,x35,x36,x37,x86,x87,x88,x89,x90,x91,x110,x111,x112,x113,x114,x115,x116,x117,x118,x119,x120,x121,x122,x123,x124,x125,x126,x127,x128,x129,x130,x131,x132,x133,x155,x156,x157,x170,x171,x172,x194,x195,x196,x197,x198,x199,x200,x201,x202,x203,x204,x205,x206,x207,x208,x209,x210,x211,b686,b687,b688,b689,b690,b691,b692,b693,b694,b695,b696,b697,b698,b699,b700,b701,b702,b703,b704,b705,b706,b707,b708,b709,b710,b711,b712,b713,b714,b715,b716,b717,b718,b719,b720,b721,b722,b723,b724,b725,b726,b727,b728,b729,b730,b731,b732,b733,b734,b735,b736,b737,b738,b739,b740,b741,b742,b743,b744,b745,b746,b747,b748,b749,b750,b751,b752,b753,b754,b755,b756,b757,b758,b759,b760,b761,b762,b763,b764,b765,b766,b767,b768,b769,b770,b771,b772,b773,b774,b775;
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
   fscanf(fp,"%f", &x20); 
   fscanf(fp,"%f", &x21); 
   fscanf(fp,"%f", &x22); 
   fscanf(fp,"%f", &x35); 
   fscanf(fp,"%f", &x36); 
   fscanf(fp,"%f", &x37); 
   fscanf(fp,"%f", &x86); 
   fscanf(fp,"%f", &x87); 
   fscanf(fp,"%f", &x88); 
   fscanf(fp,"%f", &x89); 
   fscanf(fp,"%f", &x90); 
   fscanf(fp,"%f", &x91); 
   fscanf(fp,"%f", &x110); 
   fscanf(fp,"%f", &x111); 
   fscanf(fp,"%f", &x112); 
   fscanf(fp,"%f", &x113); 
   fscanf(fp,"%f", &x114); 
   fscanf(fp,"%f", &x115); 
   fscanf(fp,"%f", &x116); 
   fscanf(fp,"%f", &x117); 
   fscanf(fp,"%f", &x118); 
   fscanf(fp,"%f", &x119); 
   fscanf(fp,"%f", &x120); 
   fscanf(fp,"%f", &x121); 
   fscanf(fp,"%f", &x122); 
   fscanf(fp,"%f", &x123); 
   fscanf(fp,"%f", &x124); 
   fscanf(fp,"%f", &x125); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x130); 
   fscanf(fp,"%f", &x131); 
   fscanf(fp,"%f", &x132); 
   fscanf(fp,"%f", &x133); 
   fscanf(fp,"%f", &x155); 
   fscanf(fp,"%f", &x156); 
   fscanf(fp,"%f", &x157); 
   fscanf(fp,"%f", &x170); 
   fscanf(fp,"%f", &x171); 
   fscanf(fp,"%f", &x172); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x202); 
   fscanf(fp,"%f", &x203); 
   fscanf(fp,"%f", &x204); 
   fscanf(fp,"%f", &x205); 
   fscanf(fp,"%f", &x206); 
   fscanf(fp,"%f", &x207); 
   fscanf(fp,"%f", &x208); 
   fscanf(fp,"%f", &x209); 
   fscanf(fp,"%f", &x210); 
   fscanf(fp,"%f", &x211); 
   fscanf(fp,"%f", &b686); 
   fscanf(fp,"%f", &b687); 
   fscanf(fp,"%f", &b688); 
   fscanf(fp,"%f", &b689); 
   fscanf(fp,"%f", &b690); 
   fscanf(fp,"%f", &b691); 
   fscanf(fp,"%f", &b692); 
   fscanf(fp,"%f", &b693); 
   fscanf(fp,"%f", &b694); 
   fscanf(fp,"%f", &b695); 
   fscanf(fp,"%f", &b696); 
   fscanf(fp,"%f", &b697); 
   fscanf(fp,"%f", &b698); 
   fscanf(fp,"%f", &b699); 
   fscanf(fp,"%f", &b700); 
   fscanf(fp,"%f", &b701); 
   fscanf(fp,"%f", &b702); 
   fscanf(fp,"%f", &b703); 
   fscanf(fp,"%f", &b704); 
   fscanf(fp,"%f", &b705); 
   fscanf(fp,"%f", &b706); 
   fscanf(fp,"%f", &b707); 
   fscanf(fp,"%f", &b708); 
   fscanf(fp,"%f", &b709); 
   fscanf(fp,"%f", &b710); 
   fscanf(fp,"%f", &b711); 
   fscanf(fp,"%f", &b712); 
   fscanf(fp,"%f", &b713); 
   fscanf(fp,"%f", &b714); 
   fscanf(fp,"%f", &b715); 
   fscanf(fp,"%f", &b716); 
   fscanf(fp,"%f", &b717); 
   fscanf(fp,"%f", &b718); 
   fscanf(fp,"%f", &b719); 
   fscanf(fp,"%f", &b720); 
   fscanf(fp,"%f", &b721); 
   fscanf(fp,"%f", &b722); 
   fscanf(fp,"%f", &b723); 
   fscanf(fp,"%f", &b724); 
   fscanf(fp,"%f", &b725); 
   fscanf(fp,"%f", &b726); 
   fscanf(fp,"%f", &b727); 
   fscanf(fp,"%f", &b728); 
   fscanf(fp,"%f", &b729); 
   fscanf(fp,"%f", &b730); 
   fscanf(fp,"%f", &b731); 
   fscanf(fp,"%f", &b732); 
   fscanf(fp,"%f", &b733); 
   fscanf(fp,"%f", &b734); 
   fscanf(fp,"%f", &b735); 
   fscanf(fp,"%f", &b736); 
   fscanf(fp,"%f", &b737); 
   fscanf(fp,"%f", &b738); 
   fscanf(fp,"%f", &b739); 
   fscanf(fp,"%f", &b740); 
   fscanf(fp,"%f", &b741); 
   fscanf(fp,"%f", &b742); 
   fscanf(fp,"%f", &b743); 
   fscanf(fp,"%f", &b744); 
   fscanf(fp,"%f", &b745); 
   fscanf(fp,"%f", &b746); 
   fscanf(fp,"%f", &b747); 
   fscanf(fp,"%f", &b748); 
   fscanf(fp,"%f", &b749); 
   fscanf(fp,"%f", &b750); 
   fscanf(fp,"%f", &b751); 
   fscanf(fp,"%f", &b752); 
   fscanf(fp,"%f", &b753); 
   fscanf(fp,"%f", &b754); 
   fscanf(fp,"%f", &b755); 
   fscanf(fp,"%f", &b756); 
   fscanf(fp,"%f", &b757); 
   fscanf(fp,"%f", &b758); 
   fscanf(fp,"%f", &b759); 
   fscanf(fp,"%f", &b760); 
   fscanf(fp,"%f", &b761); 
   fscanf(fp,"%f", &b762); 
   fscanf(fp,"%f", &b763); 
   fscanf(fp,"%f", &b764); 
   fscanf(fp,"%f", &b765); 
   fscanf(fp,"%f", &b766); 
   fscanf(fp,"%f", &b767); 
   fscanf(fp,"%f", &b768); 
   fscanf(fp,"%f", &b769); 
   fscanf(fp,"%f", &b770); 
   fscanf(fp,"%f", &b771); 
   fscanf(fp,"%f", &b772); 
   fscanf(fp,"%f", &b773); 
   fscanf(fp,"%f", &b774); 
   fscanf(fp,"%f", &b775); 

   fclose(fp);
   res=-( + x2 + x3 + x4 - 5*x20 - 10*x21 - 5*x22 + 2*x35 + x36 + 2*x37
 + 10*x86 + 5*x87 + 5*x88 + 5*x89 + 5*x90 + 5*x91 - 40*x110 - 30*x111
 - 15*x112 - 15*x113 - 20*x114 - 25*x115 - 10*x116 - 30*x117 - 40*x118
 - 30*x119 - 20*x120 - 20*x121 - 35*x122 - 50*x123 - 20*x124 - 20*x125
 - 30*x126 - 35*x127 - 25*x128 - 50*x129 - 10*x130 - 15*x131 - 20*x132
 - 20*x133 - 30*x155 - 40*x156 - 40*x157 + x170 + x171 + x172 - 80*x194
 - 90*x195 - 120*x196 - 285*x197 - 390*x198 - 350*x199 - 290*x200
 - 405*x201 - 190*x202 - 280*x203 - 400*x204 - 430*x205 - 290*x206
 - 300*x207 - 240*x208 - 350*x209 - 250*x210 - 300*x211 + 5*b686 + 4*b687
 + 6*b688 + 8*b689 + 7*b690 + 6*b691 + 6*b692 + 9*b693 + 4*b694 + 10*b695
 + 9*b696 + 5*b697 + 6*b698 + 10*b699 + 6*b700 + 7*b701 + 7*b702 + 4*b703
 + 4*b704 + 3*b705 + 2*b706 + 5*b707 + 6*b708 + 7*b709 + 2*b710 + 5*b711
 + 2*b712 + 4*b713 + 7*b714 + 4*b715 + 3*b716 + 9*b717 + 3*b718 + 7*b719
 + 2*b720 + 9*b721 + 3*b722 + b723 + 9*b724 + 2*b725 + 6*b726 + 3*b727
 + 4*b728 + 8*b729 + b730 + 2*b731 + 5*b732 + 2*b733 + 3*b734 + 4*b735
 + 3*b736 + 5*b737 + 7*b738 + 6*b739 + 2*b740 + 8*b741 + 4*b742 + b743
 + 4*b744 + b745 + 2*b746 + 5*b747 + 2*b748 + 9*b749 + 2*b750 + 9*b751
 + 5*b752 + 8*b753 + 4*b754 + 2*b755 + 3*b756 + 8*b757 + 10*b758 + 6*b759
 + 3*b760 + 4*b761 + 8*b762 + 7*b763 + 7*b764 + 3*b765 + 9*b766 + 4*b767
 + 8*b768 + 6*b769 + 2*b770 + b771 + 3*b772 + 8*b773 + 3*b774 + 4*b775
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
