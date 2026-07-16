/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint.h"

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
  double t681;
  double t1453;
  double t1197;
  double t1289;
  double t1554;
  double t803;
  double t1310;
  double t1625;
  double t1706;
  double t1754;
  double t2302;
  double t2303;
  double t2307;
  double t667;
  double t2567;
  double t52;
  double t2913;
  double t3221;
  double t3358;
  double t3512;
  double t3681;
  double t3848;
  double t3936;
  double t4207;
  double t4226;
  double t4322;
  double t4559;
  double t4568;
  double t4577;
  double t205;
  double t236;
  double t399;
  double t593;
  double t925;
  double t935;
  double t1862;
  double t1993;
  double t2139;
  double t2147;
  double t5068;
  double t5112;
  double t5114;
  double t5291;
  double t5422;
  double t5429;
  double t2573;
  double t2804;
  double t3852;
  double t4032;
  double t4033;
  double t5722;
  double t5724;
  double t5757;
  double t4414;
  double t4550;
  double t4555;
  double t5824;
  double t5861;
  double t5875;
  double t5910;
  double t5946;
  double t5969;
  double t6219;
  double t6223;
  double t6272;
  double t6318;
  double t6342;
  double t6360;
  double t6377;
  double t6379;
  double t6414;
  double t6738;
  double t6751;
  double t6754;
  double t6760;
  double t6762;
  double t6763;
  double t6767;
  double t6772;
  double t6821;
  double t7636;
  double t7651;
  double t7686;
  double t7718;
  double t7722;
  double t7727;
  double t7761;
  double t7769;
  double t7792;
  double t8073;
  double t8082;
  double t8084;
  double t8154;
  double t8182;
  double t8202;
  double t8358;
  double t8379;
  double t8381;
  double t2426;
  double t8419;
  double t8445;
  double t8718;
  double t8726;
  double t8734;
  double t8946;
  double t8952;
  double t9044;
  double t9053;
  double t9077;
  double t9106;
  double t9116;
  double t8548;
  double t8766;
  double t8774;
  double t8810;
  double t8811;
  double t8833;
  double t8840;
  double t8866;
  double t8881;
  double t8882;
  double t8890;
  double t8891;
  double t8899;
  double t8900;
  double t8906;
  double t8921;
  double t9238;
  double t9245;
  double t9246;
  double t6023;
  double t9148;
  double t9154;
  double t9302;
  double t9305;
  double t9313;
  double t9316;
  double t9319;
  double t9377;
  double t9380;
  double t9386;
  double t9390;
  double t9391;
  double t9406;
  double t6012;
  double t6024;
  double t9267;
  double t9507;
  double t9519;
  double t9529;
  double t9537;
  double t9539;
  double t9574;
  double t9575;
  double t9578;
  double t9346;
  double t9356;
  double t9608;
  double t9615;
  double t9633;
  double t9421;
  double t9468;
  t681 = Sin(var1[3]);
  t1453 = Cos(var1[3]);
  t1197 = Cos(var1[5]);
  t1289 = Sin(var1[4]);
  t1554 = Sin(var1[5]);
  t803 = Sin(var1[12]);
  t1310 = -1.*t1197*t681*t1289;
  t1625 = t1453*t1554;
  t1706 = t1310 + t1625;
  t1754 = Cos(var1[12]);
  t2302 = -1.*t1453*t1197;
  t2303 = -1.*t681*t1289*t1554;
  t2307 = t2302 + t2303;
  t667 = Cos(var1[4]);
  t2567 = Sin(var1[13]);
  t52 = Cos(var1[13]);
  t2913 = t1754*t1706;
  t3221 = -1.*t803*t2307;
  t3358 = t2913 + t3221;
  t3512 = Cos(var1[14]);
  t3681 = -1.*t3512;
  t3848 = 1. + t3681;
  t3936 = Sin(var1[14]);
  t4207 = -1.*t667*t2567*t681;
  t4226 = t52*t3358;
  t4322 = t4207 + t4226;
  t4559 = -1.*t52*t667*t681;
  t4568 = -1.*t2567*t3358;
  t4577 = t4559 + t4568;
  t205 = -1.*t52;
  t236 = 1. + t205;
  t399 = -0.183*t236;
  t593 = 0. + t399;
  t925 = 0.047*t803;
  t935 = 0. + t925;
  t1862 = -1.*t1754;
  t1993 = 1. + t1862;
  t2139 = -0.047*t1993;
  t2147 = 0. + t2139;
  t5068 = t1453*t1197*t1289;
  t5112 = t681*t1554;
  t5114 = t5068 + t5112;
  t5291 = -1.*t1197*t681;
  t5422 = t1453*t1289*t1554;
  t5429 = t5291 + t5422;
  t2573 = -0.183*t2567;
  t2804 = 0. + t2573;
  t3852 = -0.3*t3848;
  t4032 = -0.183*t3936;
  t4033 = 0. + t3852 + t4032;
  t5722 = t1754*t5114;
  t5724 = -1.*t803*t5429;
  t5757 = t5722 + t5724;
  t4414 = -0.183*t3848;
  t4550 = 0.3*t3936;
  t4555 = 0. + t4414 + t4550;
  t5824 = t1453*t667*t2567;
  t5861 = t52*t5757;
  t5875 = t5824 + t5861;
  t5910 = t52*t1453*t667;
  t5946 = -1.*t2567*t5757;
  t5969 = t5910 + t5946;
  t6219 = t1754*t1453*t667*t1197;
  t6223 = -1.*t1453*t667*t803*t1554;
  t6272 = t6219 + t6223;
  t6318 = -1.*t1453*t2567*t1289;
  t6342 = t52*t6272;
  t6360 = t6318 + t6342;
  t6377 = -1.*t52*t1453*t1289;
  t6379 = -1.*t2567*t6272;
  t6414 = t6377 + t6379;
  t6738 = t1754*t667*t1197*t681;
  t6751 = -1.*t667*t803*t681*t1554;
  t6754 = t6738 + t6751;
  t6760 = -1.*t2567*t681*t1289;
  t6762 = t52*t6754;
  t6763 = t6760 + t6762;
  t6767 = -1.*t52*t681*t1289;
  t6772 = -1.*t2567*t6754;
  t6821 = t6767 + t6772;
  t7636 = -1.*t1754*t1197*t1289;
  t7651 = t803*t1289*t1554;
  t7686 = t7636 + t7651;
  t7718 = -1.*t667*t2567;
  t7722 = t52*t7686;
  t7727 = t7718 + t7722;
  t7761 = -1.*t52*t667;
  t7769 = -1.*t2567*t7686;
  t7792 = t7761 + t7769;
  t8073 = t1197*t681;
  t8082 = -1.*t1453*t1289*t1554;
  t8084 = t8073 + t8082;
  t8154 = -1.*t803*t5114;
  t8182 = t1754*t8084;
  t8202 = t8154 + t8182;
  t8358 = t1197*t681*t1289;
  t8379 = -1.*t1453*t1554;
  t8381 = t8358 + t8379;
  t2426 = t1754*t2307;
  t8419 = -1.*t803*t8381;
  t8445 = t8419 + t2426;
  t8718 = -1.*t667*t1197*t803;
  t8726 = -1.*t1754*t667*t1554;
  t8734 = t8718 + t8726;
  t8946 = -1.*t1754*t5429;
  t8952 = t8154 + t8946;
  t9044 = t1453*t1197;
  t9053 = t681*t1289*t1554;
  t9077 = t9044 + t9053;
  t9106 = -1.*t1754*t9077;
  t9116 = t8419 + t9106;
  t8548 = t1754*t8381;
  t8766 = t2804*t8734;
  t8774 = t52*t4033*t8734;
  t8810 = -1.*t2567*t4555*t8734;
  t8811 = t1754*t667*t1197;
  t8833 = -1.*t667*t803*t1554;
  t8840 = t8811 + t8833;
  t8866 = -0.17458*t8840;
  t8881 = -1.*t3512*t2567*t8734;
  t8882 = -1.*t52*t3936*t8734;
  t8890 = t8881 + t8882;
  t8891 = -0.183*t8890;
  t8899 = t52*t3512*t8734;
  t8900 = -1.*t2567*t3936*t8734;
  t8906 = t8899 + t8900;
  t8921 = -0.3*t8906;
  t9238 = -1.*t1453*t667*t2567;
  t9245 = -1.*t52*t5757;
  t9246 = t9238 + t9245;
  t6023 = t3512*t5969;
  t9148 = -1.*t803*t9077;
  t9154 = t8548 + t9148;
  t9302 = -1.*t52*t9154;
  t9305 = t4207 + t9302;
  t9313 = t52*t667*t681;
  t9316 = -1.*t2567*t9154;
  t9319 = t9313 + t9316;
  t9377 = t2567*t1289;
  t9380 = -1.*t52*t8840;
  t9386 = t9377 + t9380;
  t9390 = -1.*t52*t1289;
  t9391 = -1.*t2567*t8840;
  t9406 = t9390 + t9391;
  t6012 = -1.*t3936*t5875;
  t6024 = t6012 + t6023;
  t9267 = -1.*t3936*t5969;
  t9507 = -0.183*t3512;
  t9519 = -0.3*t3936;
  t9529 = t9507 + t9519;
  t9537 = 0.3*t3512;
  t9539 = t9537 + t4032;
  t9574 = t667*t2567*t681;
  t9575 = t52*t9154;
  t9578 = t9574 + t9575;
  t9346 = t3512*t9319;
  t9356 = -1.*t3936*t9319;
  t9608 = -1.*t2567*t1289;
  t9615 = t52*t8840;
  t9633 = t9608 + t9615;
  t9421 = t3512*t9406;
  t9468 = -1.*t3936*t9406;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2147*t2307 + t2804*t3358 + t4033*t4322 + t4555*t4577 - 0.183*(-1.*t3936*t4322 + t3512*t4577) - 0.3*(t3512*t4322 + t3936*t4577) - 1.*t593*t667*t681 - 0.17458*(t2426 + t1706*t803) + t1706*t935;
  p_output1(10)=t2147*t5429 + t2804*t5757 + t4033*t5875 + t4555*t5969 - 0.3*(t3512*t5875 + t3936*t5969) - 0.183*t6024 + t1453*t593*t667 - 0.17458*(t1754*t5429 + t5114*t803) + t5114*t935;
  p_output1(11)=0;
  p_output1(12)=-1.*t1289*t1453*t593 + t2804*t6272 + t4033*t6360 + t4555*t6414 - 0.183*(-1.*t3936*t6360 + t3512*t6414) - 0.3*(t3512*t6360 + t3936*t6414) + t1453*t1554*t2147*t667 - 0.17458*(t1453*t1554*t1754*t667 + t1197*t1453*t667*t803) + t1197*t1453*t667*t935;
  p_output1(13)=t2804*t6754 + t4033*t6763 - 1.*t1289*t593*t681 + t1554*t2147*t667*t681 + t4555*t6821 - 0.183*(-1.*t3936*t6763 + t3512*t6821) - 0.3*(t3512*t6763 + t3936*t6821) - 0.17458*(t1554*t1754*t667*t681 + t1197*t667*t681*t803) + t1197*t667*t681*t935;
  p_output1(14)=-1.*t1289*t1554*t2147 - 1.*t593*t667 + t2804*t7686 + t4033*t7727 + t4555*t7792 - 0.183*(-1.*t3936*t7727 + t3512*t7792) - 0.3*(t3512*t7727 + t3936*t7792) - 0.17458*(-1.*t1289*t1554*t1754 - 1.*t1197*t1289*t803) - 1.*t1197*t1289*t935;
  p_output1(15)=t2147*t5114 - 0.17458*(t5722 + t803*t8084) + t2804*t8202 - 1.*t2567*t4555*t8202 + t4033*t52*t8202 - 0.3*(-1.*t2567*t3936*t8202 + t3512*t52*t8202) - 0.183*(-1.*t2567*t3512*t8202 - 1.*t3936*t52*t8202) + t8084*t935;
  p_output1(16)=t2147*t8381 + t2804*t8445 - 1.*t2567*t4555*t8445 + t4033*t52*t8445 - 0.3*(-1.*t2567*t3936*t8445 + t3512*t52*t8445) - 0.183*(-1.*t2567*t3512*t8445 - 1.*t3936*t52*t8445) - 0.17458*(t2307*t803 + t8548) + t2307*t935;
  p_output1(17)=t1197*t2147*t667 + t8766 + t8774 + t8810 + t8866 + t8891 + t8921 - 1.*t1554*t667*t935;
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
  p_output1(36)=0.047*t1754*t5114 - 0.17458*t5757 - 0.047*t5429*t803 + t2804*t8952 - 1.*t2567*t4555*t8952 + t4033*t52*t8952 - 0.3*(-1.*t2567*t3936*t8952 + t3512*t52*t8952) - 0.183*(-1.*t2567*t3512*t8952 - 1.*t3936*t52*t8952);
  p_output1(37)=0.047*t1754*t8381 - 0.047*t803*t9077 + t2804*t9116 - 1.*t2567*t4555*t9116 + t4033*t52*t9116 - 0.3*(-1.*t2567*t3936*t9116 + t3512*t52*t9116) - 0.183*(-1.*t2567*t3512*t9116 - 1.*t3936*t52*t9116) - 0.17458*t9154;
  p_output1(38)=0.047*t1197*t1754*t667 - 0.047*t1554*t667*t803 + t8766 + t8774 + t8810 + t8866 + t8891 + t8921;
  p_output1(39)=-0.183*t52*t5757 + t4033*t5969 - 0.183*t1453*t2567*t667 + t4555*t9246 - 0.3*(t6023 + t3936*t9246) - 0.183*(t3512*t9246 + t9267);
  p_output1(40)=-0.183*t2567*t667*t681 - 0.183*t52*t9154 + t4555*t9305 + t4033*t9319 - 0.3*(t3936*t9305 + t9346) - 0.183*(t3512*t9305 + t9356);
  p_output1(41)=0.183*t1289*t2567 - 0.183*t52*t8840 + t4555*t9386 + t4033*t9406 - 0.3*(t3936*t9386 + t9421) - 0.183*(t3512*t9386 + t9468);
  p_output1(42)=-0.3*t6024 - 0.183*(-1.*t3512*t5875 + t9267) + t5875*t9529 + t5969*t9539;
  p_output1(43)=t9319*t9539 + t9529*t9578 - 0.183*(t9356 - 1.*t3512*t9578) - 0.3*(t9346 - 1.*t3936*t9578);
  p_output1(44)=t9406*t9539 + t9529*t9633 - 0.183*(t9468 - 1.*t3512*t9633) - 0.3*(t9421 - 1.*t3936*t9633);
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


       
Eigen::Matrix<double,3,18> Jp_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



