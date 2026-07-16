/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot.h"

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
  double t501;
  double t1310;
  double t952;
  double t1022;
  double t1339;
  double t741;
  double t1174;
  double t1534;
  double t1558;
  double t1659;
  double t1881;
  double t1921;
  double t1927;
  double t478;
  double t2130;
  double t162;
  double t2330;
  double t2370;
  double t2428;
  double t2442;
  double t2458;
  double t2467;
  double t2474;
  double t2490;
  double t2515;
  double t2519;
  double t2543;
  double t2564;
  double t2574;
  double t188;
  double t309;
  double t342;
  double t358;
  double t755;
  double t873;
  double t1782;
  double t1797;
  double t1817;
  double t1871;
  double t3941;
  double t3942;
  double t3948;
  double t4123;
  double t4203;
  double t4265;
  double t2210;
  double t2309;
  double t2472;
  double t2488;
  double t2489;
  double t5195;
  double t5479;
  double t5547;
  double t2534;
  double t2536;
  double t2537;
  double t5608;
  double t5626;
  double t5630;
  double t5680;
  double t5739;
  double t5754;
  double t6091;
  double t6101;
  double t6110;
  double t6163;
  double t6182;
  double t6214;
  double t6317;
  double t6348;
  double t6359;
  double t6639;
  double t6651;
  double t6688;
  double t6721;
  double t6759;
  double t6775;
  double t6794;
  double t6799;
  double t6800;
  double t7036;
  double t7061;
  double t7080;
  double t7099;
  double t7117;
  double t7123;
  double t7145;
  double t7187;
  double t7193;
  double t7369;
  double t7372;
  double t7378;
  double t7382;
  double t7425;
  double t7439;
  double t7677;
  double t7682;
  double t7686;
  double t1981;
  double t7751;
  double t7753;
  double t8065;
  double t8066;
  double t8068;
  double t8243;
  double t8319;
  double t8571;
  double t8574;
  double t8578;
  double t8603;
  double t8610;
  double t7802;
  double t8108;
  double t8123;
  double t8124;
  double t8131;
  double t8136;
  double t8140;
  double t8142;
  double t8143;
  double t8147;
  double t8150;
  double t8191;
  double t8196;
  double t8200;
  double t8202;
  double t8205;
  double t8779;
  double t8813;
  double t8814;
  double t5819;
  double t8651;
  double t8656;
  double t8883;
  double t8885;
  double t8889;
  double t8891;
  double t8913;
  double t9007;
  double t9021;
  double t9043;
  double t9052;
  double t9053;
  double t9055;
  double t5816;
  double t5823;
  double t8853;
  double t9189;
  double t9199;
  double t9208;
  double t9212;
  double t9214;
  double t9294;
  double t9295;
  double t9300;
  double t8922;
  double t8963;
  double t9391;
  double t9392;
  double t9400;
  double t9095;
  double t9130;
  t501 = Sin(var1[3]);
  t1310 = Cos(var1[3]);
  t952 = Cos(var1[5]);
  t1022 = Sin(var1[4]);
  t1339 = Sin(var1[5]);
  t741 = Sin(var1[12]);
  t1174 = -1.*t952*t501*t1022;
  t1534 = t1310*t1339;
  t1558 = t1174 + t1534;
  t1659 = Cos(var1[12]);
  t1881 = -1.*t1310*t952;
  t1921 = -1.*t501*t1022*t1339;
  t1927 = t1881 + t1921;
  t478 = Cos(var1[4]);
  t2130 = Sin(var1[13]);
  t162 = Cos(var1[13]);
  t2330 = t1659*t1558;
  t2370 = -1.*t741*t1927;
  t2428 = t2330 + t2370;
  t2442 = Cos(var1[14]);
  t2458 = -1.*t2442;
  t2467 = 1. + t2458;
  t2474 = Sin(var1[14]);
  t2490 = -1.*t478*t2130*t501;
  t2515 = t162*t2428;
  t2519 = t2490 + t2515;
  t2543 = -1.*t162*t478*t501;
  t2564 = -1.*t2130*t2428;
  t2574 = t2543 + t2564;
  t188 = -1.*t162;
  t309 = 1. + t188;
  t342 = -0.183*t309;
  t358 = 0. + t342;
  t755 = 0.047*t741;
  t873 = 0. + t755;
  t1782 = -1.*t1659;
  t1797 = 1. + t1782;
  t1817 = -0.047*t1797;
  t1871 = 0. + t1817;
  t3941 = t1310*t952*t1022;
  t3942 = t501*t1339;
  t3948 = t3941 + t3942;
  t4123 = -1.*t952*t501;
  t4203 = t1310*t1022*t1339;
  t4265 = t4123 + t4203;
  t2210 = -0.183*t2130;
  t2309 = 0. + t2210;
  t2472 = -0.15*t2467;
  t2488 = -0.183*t2474;
  t2489 = 0. + t2472 + t2488;
  t5195 = t1659*t3948;
  t5479 = -1.*t741*t4265;
  t5547 = t5195 + t5479;
  t2534 = -0.183*t2467;
  t2536 = 0.15*t2474;
  t2537 = 0. + t2534 + t2536;
  t5608 = t1310*t478*t2130;
  t5626 = t162*t5547;
  t5630 = t5608 + t5626;
  t5680 = t162*t1310*t478;
  t5739 = -1.*t2130*t5547;
  t5754 = t5680 + t5739;
  t6091 = t1659*t1310*t478*t952;
  t6101 = -1.*t1310*t478*t741*t1339;
  t6110 = t6091 + t6101;
  t6163 = -1.*t1310*t2130*t1022;
  t6182 = t162*t6110;
  t6214 = t6163 + t6182;
  t6317 = -1.*t162*t1310*t1022;
  t6348 = -1.*t2130*t6110;
  t6359 = t6317 + t6348;
  t6639 = t1659*t478*t952*t501;
  t6651 = -1.*t478*t741*t501*t1339;
  t6688 = t6639 + t6651;
  t6721 = -1.*t2130*t501*t1022;
  t6759 = t162*t6688;
  t6775 = t6721 + t6759;
  t6794 = -1.*t162*t501*t1022;
  t6799 = -1.*t2130*t6688;
  t6800 = t6794 + t6799;
  t7036 = -1.*t1659*t952*t1022;
  t7061 = t741*t1022*t1339;
  t7080 = t7036 + t7061;
  t7099 = -1.*t478*t2130;
  t7117 = t162*t7080;
  t7123 = t7099 + t7117;
  t7145 = -1.*t162*t478;
  t7187 = -1.*t2130*t7080;
  t7193 = t7145 + t7187;
  t7369 = t952*t501;
  t7372 = -1.*t1310*t1022*t1339;
  t7378 = t7369 + t7372;
  t7382 = -1.*t741*t3948;
  t7425 = t1659*t7378;
  t7439 = t7382 + t7425;
  t7677 = t952*t501*t1022;
  t7682 = -1.*t1310*t1339;
  t7686 = t7677 + t7682;
  t1981 = t1659*t1927;
  t7751 = -1.*t741*t7686;
  t7753 = t7751 + t1981;
  t8065 = -1.*t478*t952*t741;
  t8066 = -1.*t1659*t478*t1339;
  t8068 = t8065 + t8066;
  t8243 = -1.*t1659*t4265;
  t8319 = t7382 + t8243;
  t8571 = t1310*t952;
  t8574 = t501*t1022*t1339;
  t8578 = t8571 + t8574;
  t8603 = -1.*t1659*t8578;
  t8610 = t7751 + t8603;
  t7802 = t1659*t7686;
  t8108 = t2309*t8068;
  t8123 = t162*t2489*t8068;
  t8124 = -1.*t2130*t2537*t8068;
  t8131 = t1659*t478*t952;
  t8136 = -1.*t478*t741*t1339;
  t8140 = t8131 + t8136;
  t8142 = -0.13205*t8140;
  t8143 = -1.*t2442*t2130*t8068;
  t8147 = -1.*t162*t2474*t8068;
  t8150 = t8143 + t8147;
  t8191 = -0.183*t8150;
  t8196 = t162*t2442*t8068;
  t8200 = -1.*t2130*t2474*t8068;
  t8202 = t8196 + t8200;
  t8205 = -0.3*t8202;
  t8779 = -1.*t1310*t478*t2130;
  t8813 = -1.*t162*t5547;
  t8814 = t8779 + t8813;
  t5819 = t2442*t5754;
  t8651 = -1.*t741*t8578;
  t8656 = t7802 + t8651;
  t8883 = -1.*t162*t8656;
  t8885 = t2490 + t8883;
  t8889 = t162*t478*t501;
  t8891 = -1.*t2130*t8656;
  t8913 = t8889 + t8891;
  t9007 = t2130*t1022;
  t9021 = -1.*t162*t8140;
  t9043 = t9007 + t9021;
  t9052 = -1.*t162*t1022;
  t9053 = -1.*t2130*t8140;
  t9055 = t9052 + t9053;
  t5816 = -1.*t2474*t5630;
  t5823 = t5816 + t5819;
  t8853 = -1.*t2474*t5754;
  t9189 = -0.183*t2442;
  t9199 = -0.15*t2474;
  t9208 = t9189 + t9199;
  t9212 = 0.15*t2442;
  t9214 = t9212 + t2488;
  t9294 = t478*t2130*t501;
  t9295 = t162*t8656;
  t9300 = t9294 + t9295;
  t8922 = t2442*t8913;
  t8963 = -1.*t2474*t8913;
  t9391 = -1.*t2130*t1022;
  t9392 = t162*t8140;
  t9400 = t9391 + t9392;
  t9095 = t2442*t9055;
  t9130 = -1.*t2474*t9055;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1871*t1927 + t2309*t2428 + t2489*t2519 + t2537*t2574 - 0.183*(-1.*t2474*t2519 + t2442*t2574) - 0.3*(t2442*t2519 + t2474*t2574) - 1.*t358*t478*t501 - 0.13205*(t1981 + t1558*t741) + t1558*t873;
  p_output1(10)=t1871*t4265 + t1310*t358*t478 + t2309*t5547 + t2489*t5630 + t2537*t5754 - 0.3*(t2442*t5630 + t2474*t5754) - 0.183*t5823 - 0.13205*(t1659*t4265 + t3948*t741) + t3948*t873;
  p_output1(11)=0;
  p_output1(12)=-1.*t1022*t1310*t358 + t1310*t1339*t1871*t478 + t2309*t6110 + t2489*t6214 + t2537*t6359 - 0.183*(-1.*t2474*t6214 + t2442*t6359) - 0.3*(t2442*t6214 + t2474*t6359) + t1310*t478*t873*t952 - 0.13205*(t1310*t1339*t1659*t478 + t1310*t478*t741*t952);
  p_output1(13)=-1.*t1022*t358*t501 + t1339*t1871*t478*t501 + t2309*t6688 + t2489*t6775 + t2537*t6800 - 0.183*(-1.*t2474*t6775 + t2442*t6800) - 0.3*(t2442*t6775 + t2474*t6800) + t478*t501*t873*t952 - 0.13205*(t1339*t1659*t478*t501 + t478*t501*t741*t952);
  p_output1(14)=-1.*t1022*t1339*t1871 - 1.*t358*t478 + t2309*t7080 + t2489*t7123 + t2537*t7193 - 0.183*(-1.*t2474*t7123 + t2442*t7193) - 0.3*(t2442*t7123 + t2474*t7193) - 1.*t1022*t873*t952 - 0.13205*(-1.*t1022*t1339*t1659 - 1.*t1022*t741*t952);
  p_output1(15)=t1871*t3948 - 0.13205*(t5195 + t7378*t741) + t2309*t7439 + t162*t2489*t7439 - 1.*t2130*t2537*t7439 - 0.183*(-1.*t2130*t2442*t7439 - 1.*t162*t2474*t7439) - 0.3*(t162*t2442*t7439 - 1.*t2130*t2474*t7439) + t7378*t873;
  p_output1(16)=t1871*t7686 + t2309*t7753 + t162*t2489*t7753 - 1.*t2130*t2537*t7753 - 0.183*(-1.*t2130*t2442*t7753 - 1.*t162*t2474*t7753) - 0.3*(t162*t2442*t7753 - 1.*t2130*t2474*t7753) - 0.13205*(t1927*t741 + t7802) + t1927*t873;
  p_output1(17)=t8108 + t8123 + t8124 + t8142 + t8191 + t8205 - 1.*t1339*t478*t873 + t1871*t478*t952;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0.047*t1659*t3948 - 0.13205*t5547 - 0.047*t4265*t741 + t2309*t8319 + t162*t2489*t8319 - 1.*t2130*t2537*t8319 - 0.183*(-1.*t2130*t2442*t8319 - 1.*t162*t2474*t8319) - 0.3*(t162*t2442*t8319 - 1.*t2130*t2474*t8319);
  p_output1(37)=0.047*t1659*t7686 - 0.047*t741*t8578 + t2309*t8610 + t162*t2489*t8610 - 1.*t2130*t2537*t8610 - 0.183*(-1.*t2130*t2442*t8610 - 1.*t162*t2474*t8610) - 0.3*(t162*t2442*t8610 - 1.*t2130*t2474*t8610) - 0.13205*t8656;
  p_output1(38)=-0.047*t1339*t478*t741 + t8108 + t8123 + t8124 + t8142 + t8191 + t8205 + 0.047*t1659*t478*t952;
  p_output1(39)=-0.183*t1310*t2130*t478 - 0.183*t162*t5547 + t2489*t5754 + t2537*t8814 - 0.3*(t5819 + t2474*t8814) - 0.183*(t2442*t8814 + t8853);
  p_output1(40)=-0.183*t2130*t478*t501 - 0.183*t162*t8656 + t2537*t8885 + t2489*t8913 - 0.3*(t2474*t8885 + t8922) - 0.183*(t2442*t8885 + t8963);
  p_output1(41)=0.183*t1022*t2130 - 0.183*t162*t8140 + t2537*t9043 + t2489*t9055 - 0.3*(t2474*t9043 + t9095) - 0.183*(t2442*t9043 + t9130);
  p_output1(42)=-0.3*t5823 - 0.183*(-1.*t2442*t5630 + t8853) + t5630*t9208 + t5754*t9214;
  p_output1(43)=t8913*t9214 + t9208*t9300 - 0.183*(t8963 - 1.*t2442*t9300) - 0.3*(t8922 - 1.*t2474*t9300);
  p_output1(44)=t9055*t9214 + t9208*t9400 - 0.183*(t9130 - 1.*t2442*t9400) - 0.3*(t9095 - 1.*t2474*t9400);
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


       
Eigen::Matrix<double,3,18> Jp_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



