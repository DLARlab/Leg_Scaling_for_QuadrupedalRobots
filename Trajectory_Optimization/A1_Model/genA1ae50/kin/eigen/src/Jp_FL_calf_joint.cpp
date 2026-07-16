/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint.h"

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
  double t1531;
  double t1917;
  double t1793;
  double t1794;
  double t1947;
  double t1617;
  double t1815;
  double t2038;
  double t2079;
  double t2192;
  double t2419;
  double t2449;
  double t2483;
  double t990;
  double t3159;
  double t180;
  double t3599;
  double t3697;
  double t3760;
  double t4017;
  double t4069;
  double t4076;
  double t4699;
  double t5014;
  double t5034;
  double t5084;
  double t5298;
  double t5328;
  double t5385;
  double t236;
  double t285;
  double t384;
  double t913;
  double t1690;
  double t1724;
  double t2288;
  double t2297;
  double t2392;
  double t2418;
  double t5911;
  double t5920;
  double t5936;
  double t5985;
  double t5987;
  double t6003;
  double t3389;
  double t3401;
  double t4364;
  double t4937;
  double t4945;
  double t6119;
  double t6121;
  double t6127;
  double t5224;
  double t5283;
  double t5286;
  double t6165;
  double t6176;
  double t6180;
  double t6182;
  double t6197;
  double t6200;
  double t6327;
  double t6342;
  double t6347;
  double t6354;
  double t6355;
  double t6376;
  double t6382;
  double t6387;
  double t6392;
  double t6469;
  double t6472;
  double t6476;
  double t6478;
  double t6480;
  double t6483;
  double t6490;
  double t6491;
  double t6493;
  double t6544;
  double t6545;
  double t6546;
  double t6550;
  double t6553;
  double t6555;
  double t6565;
  double t6575;
  double t6584;
  double t6627;
  double t6634;
  double t6636;
  double t6641;
  double t6643;
  double t6644;
  double t6680;
  double t6691;
  double t6693;
  double t2693;
  double t6698;
  double t6699;
  double t6777;
  double t6778;
  double t6784;
  double t6838;
  double t6844;
  double t6911;
  double t6912;
  double t6924;
  double t6933;
  double t6934;
  double t6711;
  double t6786;
  double t6788;
  double t6792;
  double t6798;
  double t6800;
  double t6801;
  double t6805;
  double t6807;
  double t6809;
  double t6810;
  double t6811;
  double t6813;
  double t6816;
  double t6817;
  double t6819;
  double t7063;
  double t7067;
  double t7088;
  double t6209;
  double t6968;
  double t6969;
  double t7141;
  double t7142;
  double t7149;
  double t7152;
  double t7157;
  double t7224;
  double t7234;
  double t7235;
  double t7247;
  double t7250;
  double t7253;
  double t6206;
  double t6213;
  double t7130;
  double t7301;
  double t7307;
  double t7308;
  double t7318;
  double t7321;
  double t7354;
  double t7358;
  double t7361;
  double t7177;
  double t7197;
  double t7414;
  double t7415;
  double t7418;
  double t7267;
  double t7285;
  t1531 = Sin(var1[3]);
  t1917 = Cos(var1[3]);
  t1793 = Cos(var1[5]);
  t1794 = Sin(var1[4]);
  t1947 = Sin(var1[5]);
  t1617 = Sin(var1[9]);
  t1815 = -1.*t1793*t1531*t1794;
  t2038 = t1917*t1947;
  t2079 = t1815 + t2038;
  t2192 = Cos(var1[9]);
  t2419 = -1.*t1917*t1793;
  t2449 = -1.*t1531*t1794*t1947;
  t2483 = t2419 + t2449;
  t990 = Cos(var1[4]);
  t3159 = Sin(var1[10]);
  t180 = Cos(var1[10]);
  t3599 = t2192*t2079;
  t3697 = -1.*t1617*t2483;
  t3760 = t3599 + t3697;
  t4017 = Cos(var1[11]);
  t4069 = -1.*t4017;
  t4076 = 1. + t4069;
  t4699 = Sin(var1[11]);
  t5014 = -1.*t990*t3159*t1531;
  t5034 = t180*t3760;
  t5084 = t5014 + t5034;
  t5298 = -1.*t180*t990*t1531;
  t5328 = -1.*t3159*t3760;
  t5385 = t5298 + t5328;
  t236 = -1.*t180;
  t285 = 1. + t236;
  t384 = 0.183*t285;
  t913 = 0. + t384;
  t1690 = -0.047*t1617;
  t1724 = 0. + t1690;
  t2288 = -1.*t2192;
  t2297 = 1. + t2288;
  t2392 = 0.047*t2297;
  t2418 = 0. + t2392;
  t5911 = t1917*t1793*t1794;
  t5920 = t1531*t1947;
  t5936 = t5911 + t5920;
  t5985 = -1.*t1793*t1531;
  t5987 = t1917*t1794*t1947;
  t6003 = t5985 + t5987;
  t3389 = 0.183*t3159;
  t3401 = 0. + t3389;
  t4364 = -0.1*t4076;
  t4937 = 0.183*t4699;
  t4945 = 0. + t4364 + t4937;
  t6119 = t2192*t5936;
  t6121 = -1.*t1617*t6003;
  t6127 = t6119 + t6121;
  t5224 = 0.183*t4076;
  t5283 = 0.1*t4699;
  t5286 = 0. + t5224 + t5283;
  t6165 = t1917*t990*t3159;
  t6176 = t180*t6127;
  t6180 = t6165 + t6176;
  t6182 = t180*t1917*t990;
  t6197 = -1.*t3159*t6127;
  t6200 = t6182 + t6197;
  t6327 = t2192*t1917*t990*t1793;
  t6342 = -1.*t1917*t990*t1617*t1947;
  t6347 = t6327 + t6342;
  t6354 = -1.*t1917*t3159*t1794;
  t6355 = t180*t6347;
  t6376 = t6354 + t6355;
  t6382 = -1.*t180*t1917*t1794;
  t6387 = -1.*t3159*t6347;
  t6392 = t6382 + t6387;
  t6469 = t2192*t990*t1793*t1531;
  t6472 = -1.*t990*t1617*t1531*t1947;
  t6476 = t6469 + t6472;
  t6478 = -1.*t3159*t1531*t1794;
  t6480 = t180*t6476;
  t6483 = t6478 + t6480;
  t6490 = -1.*t180*t1531*t1794;
  t6491 = -1.*t3159*t6476;
  t6493 = t6490 + t6491;
  t6544 = -1.*t2192*t1793*t1794;
  t6545 = t1617*t1794*t1947;
  t6546 = t6544 + t6545;
  t6550 = -1.*t990*t3159;
  t6553 = t180*t6546;
  t6555 = t6550 + t6553;
  t6565 = -1.*t180*t990;
  t6575 = -1.*t3159*t6546;
  t6584 = t6565 + t6575;
  t6627 = t1793*t1531;
  t6634 = -1.*t1917*t1794*t1947;
  t6636 = t6627 + t6634;
  t6641 = -1.*t1617*t5936;
  t6643 = t2192*t6636;
  t6644 = t6641 + t6643;
  t6680 = t1793*t1531*t1794;
  t6691 = -1.*t1917*t1947;
  t6693 = t6680 + t6691;
  t2693 = t2192*t2483;
  t6698 = -1.*t1617*t6693;
  t6699 = t6698 + t2693;
  t6777 = -1.*t990*t1793*t1617;
  t6778 = -1.*t2192*t990*t1947;
  t6784 = t6777 + t6778;
  t6838 = -1.*t2192*t6003;
  t6844 = t6641 + t6838;
  t6911 = t1917*t1793;
  t6912 = t1531*t1794*t1947;
  t6924 = t6911 + t6912;
  t6933 = -1.*t2192*t6924;
  t6934 = t6698 + t6933;
  t6711 = t2192*t6693;
  t6786 = t3401*t6784;
  t6788 = -1.*t3159*t5286*t6784;
  t6792 = t180*t4945*t6784;
  t6798 = t2192*t990*t1793;
  t6800 = -1.*t990*t1617*t1947;
  t6801 = t6798 + t6800;
  t6805 = 0.13205*t6801;
  t6807 = -1.*t4017*t3159*t6784;
  t6809 = -1.*t180*t4699*t6784;
  t6810 = t6807 + t6809;
  t6811 = 0.183*t6810;
  t6813 = t180*t4017*t6784;
  t6816 = -1.*t3159*t4699*t6784;
  t6817 = t6813 + t6816;
  t6819 = -0.1*t6817;
  t7063 = -1.*t1917*t990*t3159;
  t7067 = -1.*t180*t6127;
  t7088 = t7063 + t7067;
  t6209 = t4017*t6200;
  t6968 = -1.*t1617*t6924;
  t6969 = t6711 + t6968;
  t7141 = -1.*t180*t6969;
  t7142 = t5014 + t7141;
  t7149 = t180*t990*t1531;
  t7152 = -1.*t3159*t6969;
  t7157 = t7149 + t7152;
  t7224 = t3159*t1794;
  t7234 = -1.*t180*t6801;
  t7235 = t7224 + t7234;
  t7247 = -1.*t180*t1794;
  t7250 = -1.*t3159*t6801;
  t7253 = t7247 + t7250;
  t6206 = -1.*t4699*t6180;
  t6213 = t6206 + t6209;
  t7130 = -1.*t4699*t6200;
  t7301 = 0.183*t4017;
  t7307 = -0.1*t4699;
  t7308 = t7301 + t7307;
  t7318 = 0.1*t4017;
  t7321 = t7318 + t4937;
  t7354 = t990*t3159*t1531;
  t7358 = t180*t6969;
  t7361 = t7354 + t7358;
  t7177 = t4017*t7157;
  t7197 = -1.*t4699*t7157;
  t7414 = -1.*t3159*t1794;
  t7415 = t180*t6801;
  t7418 = t7414 + t7415;
  t7267 = t4017*t7253;
  t7285 = -1.*t4699*t7253;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1724*t2079 + t2418*t2483 + 0.13205*(t1617*t2079 + t2693) + t3401*t3760 + t4945*t5084 + t5286*t5385 + 0.183*(-1.*t4699*t5084 + t4017*t5385) - 0.1*(t4017*t5084 + t4699*t5385) - 1.*t1531*t913*t990;
  p_output1(10)=t1724*t5936 + t2418*t6003 + 0.13205*(t1617*t5936 + t2192*t6003) + t3401*t6127 + t4945*t6180 + t5286*t6200 - 0.1*(t4017*t6180 + t4699*t6200) + 0.183*t6213 + t1917*t913*t990;
  p_output1(11)=0;
  p_output1(12)=t3401*t6347 + t4945*t6376 + t5286*t6392 + 0.183*(-1.*t4699*t6376 + t4017*t6392) - 0.1*(t4017*t6376 + t4699*t6392) - 1.*t1794*t1917*t913 + t1724*t1793*t1917*t990 + t1917*t1947*t2418*t990 + 0.13205*(t1617*t1793*t1917*t990 + t1917*t1947*t2192*t990);
  p_output1(13)=t3401*t6476 + t4945*t6483 + t5286*t6493 + 0.183*(-1.*t4699*t6483 + t4017*t6493) - 0.1*(t4017*t6483 + t4699*t6493) - 1.*t1531*t1794*t913 + t1531*t1724*t1793*t990 + t1531*t1947*t2418*t990 + 0.13205*(t1531*t1617*t1793*t990 + t1531*t1947*t2192*t990);
  p_output1(14)=-1.*t1724*t1793*t1794 + 0.13205*(-1.*t1617*t1793*t1794 - 1.*t1794*t1947*t2192) - 1.*t1794*t1947*t2418 + t3401*t6546 + t4945*t6555 + t5286*t6584 + 0.183*(-1.*t4699*t6555 + t4017*t6584) - 0.1*(t4017*t6555 + t4699*t6584) - 1.*t913*t990;
  p_output1(15)=t2418*t5936 + t1724*t6636 + 0.13205*(t6119 + t1617*t6636) + t3401*t6644 + t180*t4945*t6644 - 1.*t3159*t5286*t6644 + 0.183*(-1.*t3159*t4017*t6644 - 1.*t180*t4699*t6644) - 0.1*(t180*t4017*t6644 - 1.*t3159*t4699*t6644);
  p_output1(16)=t1724*t2483 + t2418*t6693 + t3401*t6699 + t180*t4945*t6699 - 1.*t3159*t5286*t6699 + 0.183*(-1.*t3159*t4017*t6699 - 1.*t180*t4699*t6699) - 0.1*(t180*t4017*t6699 - 1.*t3159*t4699*t6699) + 0.13205*(t1617*t2483 + t6711);
  p_output1(17)=t6786 + t6788 + t6792 + t6805 + t6811 + t6819 - 1.*t1724*t1947*t990 + t1793*t2418*t990;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t2192*t5936 + 0.047*t1617*t6003 + 0.13205*t6127 + t3401*t6844 + t180*t4945*t6844 - 1.*t3159*t5286*t6844 + 0.183*(-1.*t3159*t4017*t6844 - 1.*t180*t4699*t6844) - 0.1*(t180*t4017*t6844 - 1.*t3159*t4699*t6844);
  p_output1(28)=-0.047*t2192*t6693 + 0.047*t1617*t6924 + t3401*t6934 + t180*t4945*t6934 - 1.*t3159*t5286*t6934 + 0.183*(-1.*t3159*t4017*t6934 - 1.*t180*t4699*t6934) - 0.1*(t180*t4017*t6934 - 1.*t3159*t4699*t6934) + 0.13205*t6969;
  p_output1(29)=t6786 + t6788 + t6792 + t6805 + t6811 + t6819 + 0.047*t1617*t1947*t990 - 0.047*t1793*t2192*t990;
  p_output1(30)=0.183*t180*t6127 + t4945*t6200 + t5286*t7088 - 0.1*(t6209 + t4699*t7088) + 0.183*(t4017*t7088 + t7130) + 0.183*t1917*t3159*t990;
  p_output1(31)=0.183*t180*t6969 + t5286*t7142 + t4945*t7157 - 0.1*(t4699*t7142 + t7177) + 0.183*(t4017*t7142 + t7197) + 0.183*t1531*t3159*t990;
  p_output1(32)=-0.183*t1794*t3159 + 0.183*t180*t6801 + t5286*t7235 + t4945*t7253 - 0.1*(t4699*t7235 + t7267) + 0.183*(t4017*t7235 + t7285);
  p_output1(33)=-0.1*t6213 + 0.183*(-1.*t4017*t6180 + t7130) + t6180*t7308 + t6200*t7321;
  p_output1(34)=t7157*t7321 + t7308*t7361 + 0.183*(t7197 - 1.*t4017*t7361) - 0.1*(t7177 - 1.*t4699*t7361);
  p_output1(35)=t7253*t7321 + t7308*t7418 + 0.183*(t7285 - 1.*t4017*t7418) - 0.1*(t7267 - 1.*t4699*t7418);
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


       
Eigen::Matrix<double,3,18> Jp_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



