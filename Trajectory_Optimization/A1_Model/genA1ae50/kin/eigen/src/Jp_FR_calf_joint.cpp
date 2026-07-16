/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }


/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t383;
  double t1001;
  double t1284;
  double t827;
  double t1336;
  double t575;
  double t1237;
  double t1354;
  double t1356;
  double t1497;
  double t1712;
  double t1732;
  double t1856;
  double t192;
  double t249;
  double t2351;
  double t2426;
  double t2751;
  double t2867;
  double t3388;
  double t3590;
  double t3604;
  double t3870;
  double t3219;
  double t3330;
  double t3338;
  double t4548;
  double t4552;
  double t4578;
  double t270;
  double t356;
  double t368;
  double t382;
  double t585;
  double t609;
  double t621;
  double t653;
  double t1894;
  double t1972;
  double t4753;
  double t4763;
  double t4765;
  double t4771;
  double t4789;
  double t4792;
  double t2873;
  double t2971;
  double t4820;
  double t4823;
  double t4836;
  double t3606;
  double t3984;
  double t4027;
  double t4582;
  double t4586;
  double t4626;
  double t4846;
  double t4892;
  double t4919;
  double t4944;
  double t4954;
  double t4956;
  double t5068;
  double t5072;
  double t5073;
  double t5079;
  double t5080;
  double t5093;
  double t5100;
  double t5111;
  double t5117;
  double t5201;
  double t5203;
  double t5207;
  double t5210;
  double t5211;
  double t5221;
  double t5234;
  double t5256;
  double t5263;
  double t5371;
  double t5382;
  double t5398;
  double t5413;
  double t5427;
  double t5429;
  double t5435;
  double t5438;
  double t5441;
  double t5513;
  double t5516;
  double t5519;
  double t5528;
  double t5531;
  double t5532;
  double t5595;
  double t5600;
  double t5601;
  double t2127;
  double t5617;
  double t5618;
  double t5737;
  double t5740;
  double t5742;
  double t5790;
  double t5791;
  double t5606;
  double t5837;
  double t5844;
  double t5850;
  double t5869;
  double t5870;
  double t5725;
  double t5728;
  double t5735;
  double t5736;
  double t5745;
  double t5746;
  double t5753;
  double t5760;
  double t5764;
  double t5765;
  double t5767;
  double t5769;
  double t5771;
  double t5773;
  double t5778;
  double t4958;
  double t5929;
  double t5942;
  double t5949;
  double t5856;
  double t5860;
  double t5997;
  double t5999;
  double t6000;
  double t5993;
  double t5994;
  double t6063;
  double t6064;
  double t6065;
  double t6057;
  double t6060;
  double t6061;
  double t4965;
  double t4969;
  double t5975;
  double t6090;
  double t6092;
  double t6093;
  double t6095;
  double t6100;
  double t6004;
  double t6119;
  double t6121;
  double t6122;
  double t6045;
  double t6070;
  double t6139;
  double t6140;
  double t6141;
  double t6078;
  t383 = Sin(var1[3]);
  t1001 = Cos(var1[5]);
  t1284 = Sin(var1[4]);
  t827 = Cos(var1[3]);
  t1336 = Sin(var1[5]);
  t575 = Cos(var1[6]);
  t1237 = -1.*t827*t1001;
  t1354 = -1.*t383*t1284*t1336;
  t1356 = t1237 + t1354;
  t1497 = -1.*t1001*t383*t1284;
  t1712 = t827*t1336;
  t1732 = t1497 + t1712;
  t1856 = Sin(var1[6]);
  t192 = Cos(var1[4]);
  t249 = Cos(var1[7]);
  t2351 = t575*t1732;
  t2426 = -1.*t1356*t1856;
  t2751 = t2351 + t2426;
  t2867 = Sin(var1[7]);
  t3388 = Cos(var1[8]);
  t3590 = -1.*t3388;
  t3604 = 1. + t3590;
  t3870 = Sin(var1[8]);
  t3219 = -1.*t192*t249*t383;
  t3330 = -1.*t2751*t2867;
  t3338 = t3219 + t3330;
  t4548 = t249*t2751;
  t4552 = -1.*t192*t383*t2867;
  t4578 = t4548 + t4552;
  t270 = -1.*t249;
  t356 = 1. + t270;
  t368 = 0.183*t356;
  t382 = 0. + t368;
  t585 = -1.*t575;
  t609 = 1. + t585;
  t621 = -0.047*t609;
  t653 = 0. + t621;
  t1894 = 0.047*t1856;
  t1972 = 0. + t1894;
  t4753 = -1.*t1001*t383;
  t4763 = t827*t1284*t1336;
  t4765 = t4753 + t4763;
  t4771 = t827*t1001*t1284;
  t4789 = t383*t1336;
  t4792 = t4771 + t4789;
  t2873 = 0.183*t2867;
  t2971 = 0. + t2873;
  t4820 = t575*t4792;
  t4823 = -1.*t4765*t1856;
  t4836 = t4820 + t4823;
  t3606 = 0.183*t3604;
  t3984 = 0.1*t3870;
  t4027 = 0. + t3606 + t3984;
  t4582 = -0.1*t3604;
  t4586 = 0.183*t3870;
  t4626 = 0. + t4582 + t4586;
  t4846 = t827*t192*t249;
  t4892 = -1.*t4836*t2867;
  t4919 = t4846 + t4892;
  t4944 = t249*t4836;
  t4954 = t827*t192*t2867;
  t4956 = t4944 + t4954;
  t5068 = t827*t192*t1001*t575;
  t5072 = -1.*t827*t192*t1336*t1856;
  t5073 = t5068 + t5072;
  t5079 = -1.*t827*t249*t1284;
  t5080 = -1.*t5073*t2867;
  t5093 = t5079 + t5080;
  t5100 = t249*t5073;
  t5111 = -1.*t827*t1284*t2867;
  t5117 = t5100 + t5111;
  t5201 = t192*t1001*t575*t383;
  t5203 = -1.*t192*t383*t1336*t1856;
  t5207 = t5201 + t5203;
  t5210 = -1.*t249*t383*t1284;
  t5211 = -1.*t5207*t2867;
  t5221 = t5210 + t5211;
  t5234 = t249*t5207;
  t5256 = -1.*t383*t1284*t2867;
  t5263 = t5234 + t5256;
  t5371 = -1.*t1001*t575*t1284;
  t5382 = t1284*t1336*t1856;
  t5398 = t5371 + t5382;
  t5413 = -1.*t192*t249;
  t5427 = -1.*t5398*t2867;
  t5429 = t5413 + t5427;
  t5435 = t249*t5398;
  t5438 = -1.*t192*t2867;
  t5441 = t5435 + t5438;
  t5513 = t1001*t383;
  t5516 = -1.*t827*t1284*t1336;
  t5519 = t5513 + t5516;
  t5528 = t575*t5519;
  t5531 = -1.*t4792*t1856;
  t5532 = t5528 + t5531;
  t5595 = t1001*t383*t1284;
  t5600 = -1.*t827*t1336;
  t5601 = t5595 + t5600;
  t2127 = t575*t1356;
  t5617 = -1.*t5601*t1856;
  t5618 = t2127 + t5617;
  t5737 = -1.*t192*t575*t1336;
  t5740 = -1.*t192*t1001*t1856;
  t5742 = t5737 + t5740;
  t5790 = -1.*t575*t4765;
  t5791 = t5790 + t5531;
  t5606 = t575*t5601;
  t5837 = t827*t1001;
  t5844 = t383*t1284*t1336;
  t5850 = t5837 + t5844;
  t5869 = -1.*t575*t5850;
  t5870 = t5869 + t5617;
  t5725 = t192*t1001*t575;
  t5728 = -1.*t192*t1336*t1856;
  t5735 = t5725 + t5728;
  t5736 = -0.13205*t5735;
  t5745 = t5742*t2971;
  t5746 = -1.*t5742*t2867*t4027;
  t5753 = t249*t5742*t4626;
  t5760 = -1.*t3388*t5742*t2867;
  t5764 = -1.*t249*t5742*t3870;
  t5765 = t5760 + t5764;
  t5767 = 0.183*t5765;
  t5769 = t249*t3388*t5742;
  t5771 = -1.*t5742*t2867*t3870;
  t5773 = t5769 + t5771;
  t5778 = -0.1*t5773;
  t4958 = t3388*t4919;
  t5929 = -1.*t249*t4836;
  t5942 = -1.*t827*t192*t2867;
  t5949 = t5929 + t5942;
  t5856 = -1.*t5850*t1856;
  t5860 = t5606 + t5856;
  t5997 = t192*t249*t383;
  t5999 = -1.*t5860*t2867;
  t6000 = t5997 + t5999;
  t5993 = -1.*t249*t5860;
  t5994 = t5993 + t4552;
  t6063 = -1.*t249*t1284;
  t6064 = -1.*t5735*t2867;
  t6065 = t6063 + t6064;
  t6057 = -1.*t249*t5735;
  t6060 = t1284*t2867;
  t6061 = t6057 + t6060;
  t4965 = -1.*t4956*t3870;
  t4969 = t4958 + t4965;
  t5975 = -1.*t4919*t3870;
  t6090 = 0.183*t3388;
  t6092 = -0.1*t3870;
  t6093 = t6090 + t6092;
  t6095 = 0.1*t3388;
  t6100 = t6095 + t4586;
  t6004 = t3388*t6000;
  t6119 = t249*t5860;
  t6121 = t192*t383*t2867;
  t6122 = t6119 + t6121;
  t6045 = -1.*t6000*t3870;
  t6070 = t3388*t6065;
  t6139 = t249*t5735;
  t6140 = -1.*t1284*t2867;
  t6141 = t6139 + t6140;
  t6078 = -1.*t6065*t3870;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1732*t1972 - 0.13205*(t1732*t1856 + t2127) + t2751*t2971 - 1.*t192*t382*t383 + t3338*t4027 - 0.1*(t3338*t3870 + t3388*t4578) + 0.183*(t3338*t3388 - 1.*t3870*t4578) + t4578*t4626 + t1356*t653;
  p_output1(10)=t1972*t4792 + t2971*t4836 + t4027*t4919 + t4626*t4956 - 0.1*(t3870*t4919 + t3388*t4956) + 0.183*t4969 - 0.13205*(t1856*t4792 + t4765*t575) + t4765*t653 + t192*t382*t827;
  p_output1(11)=0;
  p_output1(12)=t2971*t5073 + t4027*t5093 + t4626*t5117 - 0.1*(t3870*t5093 + t3388*t5117) + 0.183*(t3388*t5093 - 1.*t3870*t5117) + t1001*t192*t1972*t827 - 1.*t1284*t382*t827 + t1336*t192*t653*t827 - 0.13205*(t1001*t1856*t192*t827 + t1336*t192*t575*t827);
  p_output1(13)=t1001*t192*t1972*t383 - 1.*t1284*t382*t383 + t2971*t5207 + t4027*t5221 + t4626*t5263 - 0.1*(t3870*t5221 + t3388*t5263) + 0.183*(t3388*t5221 - 1.*t3870*t5263) - 0.13205*(t1001*t1856*t192*t383 + t1336*t192*t383*t575) + t1336*t192*t383*t653;
  p_output1(14)=-1.*t1001*t1284*t1972 - 1.*t192*t382 + t2971*t5398 + t4027*t5429 + t4626*t5441 - 0.1*(t3870*t5429 + t3388*t5441) + 0.183*(t3388*t5429 - 1.*t3870*t5441) - 0.13205*(-1.*t1001*t1284*t1856 - 1.*t1284*t1336*t575) - 1.*t1284*t1336*t653;
  p_output1(15)=t1972*t5519 - 0.13205*(t4820 + t1856*t5519) + t2971*t5532 - 1.*t2867*t4027*t5532 + t249*t4626*t5532 + 0.183*(-1.*t2867*t3388*t5532 - 1.*t249*t3870*t5532) - 0.1*(t249*t3388*t5532 - 1.*t2867*t3870*t5532) + t4792*t653;
  p_output1(16)=t1356*t1972 - 0.13205*(t1356*t1856 + t5606) + t2971*t5618 - 1.*t2867*t4027*t5618 + t249*t4626*t5618 + 0.183*(-1.*t2867*t3388*t5618 - 1.*t249*t3870*t5618) - 0.1*(t249*t3388*t5618 - 1.*t2867*t3870*t5618) + t5601*t653;
  p_output1(17)=-1.*t1336*t192*t1972 + t5736 + t5745 + t5746 + t5753 + t5767 + t5778 + t1001*t192*t653;
  p_output1(18)=-0.047*t1856*t4765 - 0.13205*t4836 + 0.047*t4792*t575 + t2971*t5791 - 1.*t2867*t4027*t5791 + t249*t4626*t5791 + 0.183*(-1.*t2867*t3388*t5791 - 1.*t249*t3870*t5791) - 0.1*(t249*t3388*t5791 - 1.*t2867*t3870*t5791);
  p_output1(19)=0.047*t5601*t575 - 0.047*t1856*t5850 - 0.13205*t5860 + t2971*t5870 - 1.*t2867*t4027*t5870 + t249*t4626*t5870 + 0.183*(-1.*t2867*t3388*t5870 - 1.*t249*t3870*t5870) - 0.1*(t249*t3388*t5870 - 1.*t2867*t3870*t5870);
  p_output1(20)=-0.047*t1336*t1856*t192 + t5736 + t5745 + t5746 + 0.047*t1001*t192*t575 + t5753 + t5767 + t5778;
  p_output1(21)=0.183*t249*t4836 + t4626*t4919 + t4027*t5949 - 0.1*(t4958 + t3870*t5949) + 0.183*(t3388*t5949 + t5975) + 0.183*t192*t2867*t827;
  p_output1(22)=0.183*t192*t2867*t383 + 0.183*t249*t5860 + t4027*t5994 + t4626*t6000 - 0.1*(t3870*t5994 + t6004) + 0.183*(t3388*t5994 + t6045);
  p_output1(23)=-0.183*t1284*t2867 + 0.183*t249*t5735 + t4027*t6061 + t4626*t6065 - 0.1*(t3870*t6061 + t6070) + 0.183*(t3388*t6061 + t6078);
  p_output1(24)=-0.1*t4969 + 0.183*(-1.*t3388*t4956 + t5975) + t4956*t6093 + t4919*t6100;
  p_output1(25)=t6000*t6100 + t6093*t6122 + 0.183*(t6045 - 1.*t3388*t6122) - 0.1*(t6004 - 1.*t3870*t6122);
  p_output1(26)=t6065*t6100 + t6093*t6141 + 0.183*(t6078 - 1.*t3388*t6141) - 0.1*(t6070 - 1.*t3870*t6141);
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



