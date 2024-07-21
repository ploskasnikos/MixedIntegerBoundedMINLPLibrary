#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <math.h>  
int main(int argc, char** argv) { 
   char *problemname="rsyn0830m03hfsg";
   char input[30]="input.txt"; 
   char output[30]="output.txt"; 
   float x2,x3,x4,x17,x18,x19,x29,x30,x31,x65,x66,x67,x77,x78,x79,x83,x84,x85,x86,x87,x88,x95,x96,x97,x98,x99,x100,x101,x102,x103,x104,x105,x106,b803,b804,b805,b806,b807,b808,b809,b810,b811,b815,b816,b817,b818,b819,b820,b821,b822,b823,b827,b828,b829,b830,b831,b832,b833,b834,b835,b839,b840,b841,b842,b843,b844,b845,b846,b847,b851,b852,b853,b854,b855,b856,b857,b858,b859,b863,b864,b865,b866,b867,b868,b869,b870,b871,b875,b876,b877,b878,b879,b880,b881,b882,b883,b887,b888,b889,b890,b891,b892,b893,b894,b895,x896,x897,x898,x914,x915,x916,x929,x930,x931,x980,x981,x982,x983,x984,x985,x1004,x1005,x1006,x1007,x1008,x1009,x1010,x1011,x1012,x1013,x1014,x1015,x1016,x1017,x1018,x1019,x1020,x1021,x1022,x1023,x1024,x1025,x1026,x1027,x1049,x1050,x1051,x1064,x1065,x1066,x1088,x1089,x1090,x1091,x1092,x1093,x1094,x1095,x1096,x1097,x1098,x1099,x1100,x1101,x1102,x1103,x1104,x1105,b1580,b1581,b1582,b1583,b1584,b1585,b1586,b1587,b1588,b1589,b1590,b1591,b1592,b1593,b1594,b1595,b1596,b1597,b1598,b1599,b1600,b1601,b1602,b1603,b1604,b1605,b1606,b1607,b1608,b1609,b1610,b1611,b1612,b1613,b1614,b1615,b1616,b1617,b1618,b1619,b1620,b1621,b1622,b1623,b1624,b1625,b1626,b1627,b1628,b1629,b1630,b1631,b1632,b1633,b1634,b1635,b1636,b1637,b1638,b1639,b1640,b1641,b1642,b1643,b1644,b1645,b1646,b1647,b1648,b1649,b1650,b1651,b1652,b1653,b1654,b1655,b1656,b1657,b1658,b1659,b1660,b1661,b1662,b1663,b1664,b1665,b1666,b1667,b1668,b1669;
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
   fscanf(fp,"%f", &b803); 
   fscanf(fp,"%f", &b804); 
   fscanf(fp,"%f", &b805); 
   fscanf(fp,"%f", &b806); 
   fscanf(fp,"%f", &b807); 
   fscanf(fp,"%f", &b808); 
   fscanf(fp,"%f", &b809); 
   fscanf(fp,"%f", &b810); 
   fscanf(fp,"%f", &b811); 
   fscanf(fp,"%f", &b815); 
   fscanf(fp,"%f", &b816); 
   fscanf(fp,"%f", &b817); 
   fscanf(fp,"%f", &b818); 
   fscanf(fp,"%f", &b819); 
   fscanf(fp,"%f", &b820); 
   fscanf(fp,"%f", &b821); 
   fscanf(fp,"%f", &b822); 
   fscanf(fp,"%f", &b823); 
   fscanf(fp,"%f", &b827); 
   fscanf(fp,"%f", &b828); 
   fscanf(fp,"%f", &b829); 
   fscanf(fp,"%f", &b830); 
   fscanf(fp,"%f", &b831); 
   fscanf(fp,"%f", &b832); 
   fscanf(fp,"%f", &b833); 
   fscanf(fp,"%f", &b834); 
   fscanf(fp,"%f", &b835); 
   fscanf(fp,"%f", &b839); 
   fscanf(fp,"%f", &b840); 
   fscanf(fp,"%f", &b841); 
   fscanf(fp,"%f", &b842); 
   fscanf(fp,"%f", &b843); 
   fscanf(fp,"%f", &b844); 
   fscanf(fp,"%f", &b845); 
   fscanf(fp,"%f", &b846); 
   fscanf(fp,"%f", &b847); 
   fscanf(fp,"%f", &b851); 
   fscanf(fp,"%f", &b852); 
   fscanf(fp,"%f", &b853); 
   fscanf(fp,"%f", &b854); 
   fscanf(fp,"%f", &b855); 
   fscanf(fp,"%f", &b856); 
   fscanf(fp,"%f", &b857); 
   fscanf(fp,"%f", &b858); 
   fscanf(fp,"%f", &b859); 
   fscanf(fp,"%f", &b863); 
   fscanf(fp,"%f", &b864); 
   fscanf(fp,"%f", &b865); 
   fscanf(fp,"%f", &b866); 
   fscanf(fp,"%f", &b867); 
   fscanf(fp,"%f", &b868); 
   fscanf(fp,"%f", &b869); 
   fscanf(fp,"%f", &b870); 
   fscanf(fp,"%f", &b871); 
   fscanf(fp,"%f", &b875); 
   fscanf(fp,"%f", &b876); 
   fscanf(fp,"%f", &b877); 
   fscanf(fp,"%f", &b878); 
   fscanf(fp,"%f", &b879); 
   fscanf(fp,"%f", &b880); 
   fscanf(fp,"%f", &b881); 
   fscanf(fp,"%f", &b882); 
   fscanf(fp,"%f", &b883); 
   fscanf(fp,"%f", &b887); 
   fscanf(fp,"%f", &b888); 
   fscanf(fp,"%f", &b889); 
   fscanf(fp,"%f", &b890); 
   fscanf(fp,"%f", &b891); 
   fscanf(fp,"%f", &b892); 
   fscanf(fp,"%f", &b893); 
   fscanf(fp,"%f", &b894); 
   fscanf(fp,"%f", &b895); 
   fscanf(fp,"%f", &x896); 
   fscanf(fp,"%f", &x897); 
   fscanf(fp,"%f", &x898); 
   fscanf(fp,"%f", &x914); 
   fscanf(fp,"%f", &x915); 
   fscanf(fp,"%f", &x916); 
   fscanf(fp,"%f", &x929); 
   fscanf(fp,"%f", &x930); 
   fscanf(fp,"%f", &x931); 
   fscanf(fp,"%f", &x980); 
   fscanf(fp,"%f", &x981); 
   fscanf(fp,"%f", &x982); 
   fscanf(fp,"%f", &x983); 
   fscanf(fp,"%f", &x984); 
   fscanf(fp,"%f", &x985); 
   fscanf(fp,"%f", &x1004); 
   fscanf(fp,"%f", &x1005); 
   fscanf(fp,"%f", &x1006); 
   fscanf(fp,"%f", &x1007); 
   fscanf(fp,"%f", &x1008); 
   fscanf(fp,"%f", &x1009); 
   fscanf(fp,"%f", &x1010); 
   fscanf(fp,"%f", &x1011); 
   fscanf(fp,"%f", &x1012); 
   fscanf(fp,"%f", &x1013); 
   fscanf(fp,"%f", &x1014); 
   fscanf(fp,"%f", &x1015); 
   fscanf(fp,"%f", &x1016); 
   fscanf(fp,"%f", &x1017); 
   fscanf(fp,"%f", &x1018); 
   fscanf(fp,"%f", &x1019); 
   fscanf(fp,"%f", &x1020); 
   fscanf(fp,"%f", &x1021); 
   fscanf(fp,"%f", &x1022); 
   fscanf(fp,"%f", &x1023); 
   fscanf(fp,"%f", &x1024); 
   fscanf(fp,"%f", &x1025); 
   fscanf(fp,"%f", &x1026); 
   fscanf(fp,"%f", &x1027); 
   fscanf(fp,"%f", &x1049); 
   fscanf(fp,"%f", &x1050); 
   fscanf(fp,"%f", &x1051); 
   fscanf(fp,"%f", &x1064); 
   fscanf(fp,"%f", &x1065); 
   fscanf(fp,"%f", &x1066); 
   fscanf(fp,"%f", &x1088); 
   fscanf(fp,"%f", &x1089); 
   fscanf(fp,"%f", &x1090); 
   fscanf(fp,"%f", &x1091); 
   fscanf(fp,"%f", &x1092); 
   fscanf(fp,"%f", &x1093); 
   fscanf(fp,"%f", &x1094); 
   fscanf(fp,"%f", &x1095); 
   fscanf(fp,"%f", &x1096); 
   fscanf(fp,"%f", &x1097); 
   fscanf(fp,"%f", &x1098); 
   fscanf(fp,"%f", &x1099); 
   fscanf(fp,"%f", &x1100); 
   fscanf(fp,"%f", &x1101); 
   fscanf(fp,"%f", &x1102); 
   fscanf(fp,"%f", &x1103); 
   fscanf(fp,"%f", &x1104); 
   fscanf(fp,"%f", &x1105); 
   fscanf(fp,"%f", &b1580); 
   fscanf(fp,"%f", &b1581); 
   fscanf(fp,"%f", &b1582); 
   fscanf(fp,"%f", &b1583); 
   fscanf(fp,"%f", &b1584); 
   fscanf(fp,"%f", &b1585); 
   fscanf(fp,"%f", &b1586); 
   fscanf(fp,"%f", &b1587); 
   fscanf(fp,"%f", &b1588); 
   fscanf(fp,"%f", &b1589); 
   fscanf(fp,"%f", &b1590); 
   fscanf(fp,"%f", &b1591); 
   fscanf(fp,"%f", &b1592); 
   fscanf(fp,"%f", &b1593); 
   fscanf(fp,"%f", &b1594); 
   fscanf(fp,"%f", &b1595); 
   fscanf(fp,"%f", &b1596); 
   fscanf(fp,"%f", &b1597); 
   fscanf(fp,"%f", &b1598); 
   fscanf(fp,"%f", &b1599); 
   fscanf(fp,"%f", &b1600); 
   fscanf(fp,"%f", &b1601); 
   fscanf(fp,"%f", &b1602); 
   fscanf(fp,"%f", &b1603); 
   fscanf(fp,"%f", &b1604); 
   fscanf(fp,"%f", &b1605); 
   fscanf(fp,"%f", &b1606); 
   fscanf(fp,"%f", &b1607); 
   fscanf(fp,"%f", &b1608); 
   fscanf(fp,"%f", &b1609); 
   fscanf(fp,"%f", &b1610); 
   fscanf(fp,"%f", &b1611); 
   fscanf(fp,"%f", &b1612); 
   fscanf(fp,"%f", &b1613); 
   fscanf(fp,"%f", &b1614); 
   fscanf(fp,"%f", &b1615); 
   fscanf(fp,"%f", &b1616); 
   fscanf(fp,"%f", &b1617); 
   fscanf(fp,"%f", &b1618); 
   fscanf(fp,"%f", &b1619); 
   fscanf(fp,"%f", &b1620); 
   fscanf(fp,"%f", &b1621); 
   fscanf(fp,"%f", &b1622); 
   fscanf(fp,"%f", &b1623); 
   fscanf(fp,"%f", &b1624); 
   fscanf(fp,"%f", &b1625); 
   fscanf(fp,"%f", &b1626); 
   fscanf(fp,"%f", &b1627); 
   fscanf(fp,"%f", &b1628); 
   fscanf(fp,"%f", &b1629); 
   fscanf(fp,"%f", &b1630); 
   fscanf(fp,"%f", &b1631); 
   fscanf(fp,"%f", &b1632); 
   fscanf(fp,"%f", &b1633); 
   fscanf(fp,"%f", &b1634); 
   fscanf(fp,"%f", &b1635); 
   fscanf(fp,"%f", &b1636); 
   fscanf(fp,"%f", &b1637); 
   fscanf(fp,"%f", &b1638); 
   fscanf(fp,"%f", &b1639); 
   fscanf(fp,"%f", &b1640); 
   fscanf(fp,"%f", &b1641); 
   fscanf(fp,"%f", &b1642); 
   fscanf(fp,"%f", &b1643); 
   fscanf(fp,"%f", &b1644); 
   fscanf(fp,"%f", &b1645); 
   fscanf(fp,"%f", &b1646); 
   fscanf(fp,"%f", &b1647); 
   fscanf(fp,"%f", &b1648); 
   fscanf(fp,"%f", &b1649); 
   fscanf(fp,"%f", &b1650); 
   fscanf(fp,"%f", &b1651); 
   fscanf(fp,"%f", &b1652); 
   fscanf(fp,"%f", &b1653); 
   fscanf(fp,"%f", &b1654); 
   fscanf(fp,"%f", &b1655); 
   fscanf(fp,"%f", &b1656); 
   fscanf(fp,"%f", &b1657); 
   fscanf(fp,"%f", &b1658); 
   fscanf(fp,"%f", &b1659); 
   fscanf(fp,"%f", &b1660); 
   fscanf(fp,"%f", &b1661); 
   fscanf(fp,"%f", &b1662); 
   fscanf(fp,"%f", &b1663); 
   fscanf(fp,"%f", &b1664); 
   fscanf(fp,"%f", &b1665); 
   fscanf(fp,"%f", &b1666); 
   fscanf(fp,"%f", &b1667); 
   fscanf(fp,"%f", &b1668); 
   fscanf(fp,"%f", &b1669); 

   fclose(fp);
   res=-( + 20*x2 + 17*x3 + 15*x4 + 20*x17 + 21*x18 + 19*x19 + 18*x29
 + 20*x30 + 20*x31 + 16*x65 + 19*x66 + 17*x67 - 26*x77 - 31*x78 - 31*x79
 - 30*x83 - 29*x84 - 37*x85 + 20*x86 + 18*x87 + 21*x88 - 2*x95 - 2*x96
 - 2*x97 - 3*x98 - 2*x99 - 2*x100 - 3*x101 - 3*x102 - 3*x103 - 2*x104
 - 2*x105 - 2*x106 + 6*b803 + 4*b804 + 3*b805 + 40*b806 + 35*b807
 + 20*b808 + 46*b809 + 39*b810 + 23*b811 + 7*b815 + 4*b816 + 4*b817
 + 30*b818 + 25*b819 + 20*b820 + 37*b821 + 29*b822 + 22*b823 + 7*b827
 + 5*b828 + 3*b829 + 15*b830 + 5*b831 + 2*b832 + 22*b833 + 10*b834
 + 5*b835 + 11*b839 + 8*b840 + 6*b841 + 13*b842 + 8*b843 + 3*b844
 + 24*b845 + 16*b846 + 9*b847 + 10*b851 + 7*b852 + 6*b853 + 13*b854
 + 8*b855 + 3*b856 + 23*b857 + 15*b858 + 9*b859 + 9*b863 + 9*b864 + 7*b865
 + 30*b866 + 30*b867 + 25*b868 + 39*b869 + 39*b870 + 32*b871 + 8*b875
 + 7*b876 + 7*b877 + 20*b878 + 15*b879 + 10*b880 + 28*b881 + 22*b882
 + 17*b883 + 8*b887 + 6*b888 + 5*b889 + 15*b890 + 10*b891 + 6*b892
 + 23*b893 + 16*b894 + 11*b895 + x896 + x897 + x898 - 5*x914 - 10*x915
 - 5*x916 + 2*x929 + x930 + 2*x931 + 10*x980 + 5*x981 + 5*x982 + 5*x983
 + 5*x984 + 5*x985 - 40*x1004 - 30*x1005 - 15*x1006 - 15*x1007 - 20*x1008
 - 25*x1009 - 10*x1010 - 30*x1011 - 40*x1012 - 30*x1013 - 20*x1014
 - 20*x1015 - 35*x1016 - 50*x1017 - 20*x1018 - 20*x1019 - 30*x1020
 - 35*x1021 - 25*x1022 - 50*x1023 - 10*x1024 - 15*x1025 - 20*x1026
 - 20*x1027 - 30*x1049 - 40*x1050 - 40*x1051 + x1064 + x1065 + x1066
 - 80*x1088 - 90*x1089 - 120*x1090 - 285*x1091 - 390*x1092 - 350*x1093
 - 290*x1094 - 405*x1095 - 190*x1096 - 280*x1097 - 400*x1098 - 430*x1099
 - 290*x1100 - 300*x1101 - 240*x1102 - 350*x1103 - 250*x1104 - 300*x1105
 + 5*b1580 + 4*b1581 + 6*b1582 + 8*b1583 + 7*b1584 + 6*b1585 + 6*b1586
 + 9*b1587 + 4*b1588 + 10*b1589 + 9*b1590 + 5*b1591 + 6*b1592 + 10*b1593
 + 6*b1594 + 7*b1595 + 7*b1596 + 4*b1597 + 4*b1598 + 3*b1599 + 2*b1600
 + 5*b1601 + 6*b1602 + 7*b1603 + 2*b1604 + 5*b1605 + 2*b1606 + 4*b1607
 + 7*b1608 + 4*b1609 + 3*b1610 + 9*b1611 + 3*b1612 + 7*b1613 + 2*b1614
 + 9*b1615 + 3*b1616 + b1617 + 9*b1618 + 2*b1619 + 6*b1620 + 3*b1621
 + 4*b1622 + 8*b1623 + b1624 + 2*b1625 + 5*b1626 + 2*b1627 + 3*b1628
 + 4*b1629 + 3*b1630 + 5*b1631 + 7*b1632 + 6*b1633 + 2*b1634 + 8*b1635
 + 4*b1636 + b1637 + 4*b1638 + b1639 + 2*b1640 + 5*b1641 + 2*b1642
 + 9*b1643 + 2*b1644 + 9*b1645 + 5*b1646 + 8*b1647 + 4*b1648 + 2*b1649
 + 3*b1650 + 8*b1651 + 10*b1652 + 6*b1653 + 3*b1654 + 4*b1655 + 8*b1656
 + 7*b1657 + 7*b1658 + 3*b1659 + 9*b1660 + 4*b1661 + 8*b1662 + 6*b1663
 + 2*b1664 + b1665 + 3*b1666 + 8*b1667 + 3*b1668 + 4*b1669 );

   if ((fp=fopen(output,"wt"))==NULL)
   {
   printf("Can not open the output file!!!");
   exit(0);
   };
   fprintf(fp,"%f",res);
   fclose(fp);
   return(0);
 }
