#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="syn20m04hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x82,x83,x84,x85,x106,x107,x108,x109,x126,x127,x128,x129,x194,x195,x196,x197,x198,x199,x200,x201,x226,x227,x228,x229,x230,x231,x232,x233,x234,x235,x236,x237,x238,x239,x240,x241,x242,x243,x244,x245,x246,x247,x248,x249,x250,x251,x252,x253,x254,x255,x256,x257,x258,x259,x260,x261,b686,b687,b688,b689,b690,b691,b692,b693,b694,b695,b696,b697,b698,b699,b700,b701,b702,b703,b704,b705,b706,b707,b708,b709,b710,b711,b712,b713,b714,b715,b716,b717,b718,b719,b720,b721,b722,b723,b724,b725,b726,b727,b728,b729,b730,b731,b732,b733,b734,b735,b736,b737,b738,b739,b740,b741,b742,b743,b744,b745,b746,b747,b748,b749,b750,b751,b752,b753,b754,b755,b756,b757,b758,b759,b760,b761,b762,b763,b764,b765;
   float res;
   int i;
   FILE *fp;

   if ((fp=fopen(input,"rt"))==NULL)
   {
       printf("Can not open the input file!!!"); 
       exit(0);
   };

   fscanf(fp,"%f", &x82); 
   fscanf(fp,"%f", &x83); 
   fscanf(fp,"%f", &x84); 
   fscanf(fp,"%f", &x85); 
   fscanf(fp,"%f", &x106); 
   fscanf(fp,"%f", &x107); 
   fscanf(fp,"%f", &x108); 
   fscanf(fp,"%f", &x109); 
   fscanf(fp,"%f", &x126); 
   fscanf(fp,"%f", &x127); 
   fscanf(fp,"%f", &x128); 
   fscanf(fp,"%f", &x129); 
   fscanf(fp,"%f", &x194); 
   fscanf(fp,"%f", &x195); 
   fscanf(fp,"%f", &x196); 
   fscanf(fp,"%f", &x197); 
   fscanf(fp,"%f", &x198); 
   fscanf(fp,"%f", &x199); 
   fscanf(fp,"%f", &x200); 
   fscanf(fp,"%f", &x201); 
   fscanf(fp,"%f", &x226); 
   fscanf(fp,"%f", &x227); 
   fscanf(fp,"%f", &x228); 
   fscanf(fp,"%f", &x229); 
   fscanf(fp,"%f", &x230); 
   fscanf(fp,"%f", &x231); 
   fscanf(fp,"%f", &x232); 
   fscanf(fp,"%f", &x233); 
   fscanf(fp,"%f", &x234); 
   fscanf(fp,"%f", &x235); 
   fscanf(fp,"%f", &x236); 
   fscanf(fp,"%f", &x237); 
   fscanf(fp,"%f", &x238); 
   fscanf(fp,"%f", &x239); 
   fscanf(fp,"%f", &x240); 
   fscanf(fp,"%f", &x241); 
   fscanf(fp,"%f", &x242); 
   fscanf(fp,"%f", &x243); 
   fscanf(fp,"%f", &x244); 
   fscanf(fp,"%f", &x245); 
   fscanf(fp,"%f", &x246); 
   fscanf(fp,"%f", &x247); 
   fscanf(fp,"%f", &x248); 
   fscanf(fp,"%f", &x249); 
   fscanf(fp,"%f", &x250); 
   fscanf(fp,"%f", &x251); 
   fscanf(fp,"%f", &x252); 
   fscanf(fp,"%f", &x253); 
   fscanf(fp,"%f", &x254); 
   fscanf(fp,"%f", &x255); 
   fscanf(fp,"%f", &x256); 
   fscanf(fp,"%f", &x257); 
   fscanf(fp,"%f", &x258); 
   fscanf(fp,"%f", &x259); 
   fscanf(fp,"%f", &x260); 
   fscanf(fp,"%f", &x261); 
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

   fclose(fp);
   res=-( + x82 + x83 + x84 + x85 - 5*x106 - 10*x107 - 5*x108 - 10*x109
 + 2*x126 + x127 + 2*x128 + x129 + 10*x194 + 5*x195 + 5*x196 + 10*x197
 + 5*x198 + 5*x199 + 5*x200 + 10*x201 - 80*x226 - 130*x227 - 215*x228
 - 210*x229 - 110*x230 - 120*x231 - 125*x232 - 130*x233 - 110*x234
 - 130*x235 - 140*x236 - 140*x237 - 80*x238 - 90*x239 - 120*x240
 - 100*x241 - 285*x242 - 390*x243 - 350*x244 - 300*x245 - 290*x246
 - 405*x247 - 190*x248 - 340*x249 - 280*x250 - 400*x251 - 430*x252
 - 260*x253 - 290*x254 - 300*x255 - 240*x256 - 310*x257 - 350*x258
 - 250*x259 - 300*x260 - 400*x261 + 5*b686 + 4*b687 + 6*b688 + 3*b689
 + 8*b690 + 7*b691 + 6*b692 + 5*b693 + 6*b694 + 9*b695 + 4*b696 + 3*b697
 + 10*b698 + 9*b699 + 5*b700 + 6*b701 + 6*b702 + 10*b703 + 6*b704 + 9*b705
 + 7*b706 + 7*b707 + 4*b708 + 2*b709 + 4*b710 + 3*b711 + 2*b712 + 8*b713
 + 5*b714 + 6*b715 + 7*b716 + 4*b717 + 2*b718 + 5*b719 + 2*b720 + 6*b721
 + 4*b722 + 7*b723 + 4*b724 + 7*b725 + 3*b726 + 9*b727 + 3*b728 + 6*b729
 + 7*b730 + 2*b731 + 9*b732 + 6*b733 + 3*b734 + b735 + 9*b736 + 10*b737
 + 2*b738 + 6*b739 + 3*b740 + 7*b741 + 4*b742 + 8*b743 + b744 + 4*b745
 + 2*b746 + 5*b747 + 2*b748 + 5*b749 + 3*b750 + 4*b751 + 3*b752 + 7*b753
 + 5*b754 + 7*b755 + 6*b756 + 2*b757 + 2*b758 + 8*b759 + 4*b760 + 2*b761
 + b762 + 4*b763 + b764 + b765 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
