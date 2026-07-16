/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint.h"

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
  double t885;
  double t2287;
  double t1491;
  double t1614;
  double t2466;
  double t1040;
  double t1729;
  double t3173;
  double t3399;
  double t4372;
  double t5339;
  double t5466;
  double t5708;
  double t118;
  double t826;
  double t6815;
  double t6911;
  double t6983;
  double t6990;
  double t291;
  double t444;
  double t490;
  double t820;
  double t1299;
  double t1421;
  double t4526;
  double t4923;
  double t5312;
  double t5335;
  double t7108;
  double t7117;
  double t7122;
  double t7125;
  double t7132;
  double t7133;
  double t6848;
  double t6858;
  double t7202;
  double t7209;
  double t7210;
  double t7295;
  double t7300;
  double t7301;
  double t7371;
  double t7376;
  double t7377;
  double t7451;
  double t7453;
  double t7456;
  double t7515;
  double t7518;
  double t7519;
  double t7530;
  double t7533;
  double t7534;
  double t7564;
  double t7572;
  double t7579;
  double t6332;
  double t7582;
  double t7583;
  double t7644;
  double t7649;
  double t7650;
  double t7701;
  double t7706;
  double t7718;
  double t7721;
  double t7724;
  double t7728;
  double t7734;
  double t7607;
  double t7660;
  double t7664;
  double t7670;
  double t7671;
  double t7675;
  double t7694;
  double t7740;
  double t7742;
  t885 = Sin(var1[3]);
  t2287 = Cos(var1[3]);
  t1491 = Cos(var1[5]);
  t1614 = Sin(var1[4]);
  t2466 = Sin(var1[5]);
  t1040 = Sin(var1[12]);
  t1729 = -1.*t1491*t885*t1614;
  t3173 = t2287*t2466;
  t3399 = t1729 + t3173;
  t4372 = Cos(var1[12]);
  t5339 = -1.*t2287*t1491;
  t5466 = -1.*t885*t1614*t2466;
  t5708 = t5339 + t5466;
  t118 = Cos(var1[13]);
  t826 = Cos(var1[4]);
  t6815 = Sin(var1[13]);
  t6911 = t4372*t3399;
  t6983 = -1.*t1040*t5708;
  t6990 = t6911 + t6983;
  t291 = -1.*t118;
  t444 = 1. + t291;
  t490 = -0.183*t444;
  t820 = 0. + t490;
  t1299 = 0.047*t1040;
  t1421 = 0. + t1299;
  t4526 = -1.*t4372;
  t4923 = 1. + t4526;
  t5312 = -0.047*t4923;
  t5335 = 0. + t5312;
  t7108 = t2287*t1491*t1614;
  t7117 = t885*t2466;
  t7122 = t7108 + t7117;
  t7125 = -1.*t1491*t885;
  t7132 = t2287*t1614*t2466;
  t7133 = t7125 + t7132;
  t6848 = -0.183*t6815;
  t6858 = 0. + t6848;
  t7202 = t4372*t7122;
  t7209 = -1.*t1040*t7133;
  t7210 = t7202 + t7209;
  t7295 = t4372*t2287*t826*t1491;
  t7300 = -1.*t2287*t826*t1040*t2466;
  t7301 = t7295 + t7300;
  t7371 = t4372*t826*t1491*t885;
  t7376 = -1.*t826*t1040*t885*t2466;
  t7377 = t7371 + t7376;
  t7451 = -1.*t4372*t1491*t1614;
  t7453 = t1040*t1614*t2466;
  t7456 = t7451 + t7453;
  t7515 = t1491*t885;
  t7518 = -1.*t2287*t1614*t2466;
  t7519 = t7515 + t7518;
  t7530 = -1.*t1040*t7122;
  t7533 = t4372*t7519;
  t7534 = t7530 + t7533;
  t7564 = t1491*t885*t1614;
  t7572 = -1.*t2287*t2466;
  t7579 = t7564 + t7572;
  t6332 = t4372*t5708;
  t7582 = -1.*t1040*t7579;
  t7583 = t7582 + t6332;
  t7644 = -1.*t826*t1491*t1040;
  t7649 = -1.*t4372*t826*t2466;
  t7650 = t7644 + t7649;
  t7701 = -1.*t4372*t7133;
  t7706 = t7530 + t7701;
  t7718 = t2287*t1491;
  t7721 = t885*t1614*t2466;
  t7724 = t7718 + t7721;
  t7728 = -1.*t4372*t7724;
  t7734 = t7582 + t7728;
  t7607 = t4372*t7579;
  t7660 = t6858*t7650;
  t7664 = 0.183*t6815*t7650;
  t7670 = t4372*t826*t1491;
  t7671 = -1.*t826*t1040*t2466;
  t7675 = t7670 + t7671;
  t7694 = -0.13205*t7675;
  t7740 = -1.*t1040*t7724;
  t7742 = t7607 + t7740;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1421*t3399 + t5335*t5708 - 0.13205*(t1040*t3399 + t6332) + t6858*t6990 - 1.*t820*t826*t885 - 0.183*(-1.*t6815*t6990 - 1.*t118*t826*t885);
  p_output1(10)=t1421*t7122 + t5335*t7133 - 0.13205*(t1040*t7122 + t4372*t7133) + t6858*t7210 + t2287*t820*t826 - 0.183*(-1.*t6815*t7210 + t118*t2287*t826);
  p_output1(11)=0;
  p_output1(12)=t6858*t7301 - 0.183*(-1.*t118*t1614*t2287 - 1.*t6815*t7301) - 1.*t1614*t2287*t820 + t1421*t1491*t2287*t826 + t2287*t2466*t5335*t826 - 0.13205*(t1040*t1491*t2287*t826 + t2287*t2466*t4372*t826);
  p_output1(13)=t6858*t7377 - 1.*t1614*t820*t885 + t1421*t1491*t826*t885 + t2466*t5335*t826*t885 - 0.183*(-1.*t6815*t7377 - 1.*t118*t1614*t885) - 0.13205*(t1040*t1491*t826*t885 + t2466*t4372*t826*t885);
  p_output1(14)=-1.*t1421*t1491*t1614 - 0.13205*(-1.*t1040*t1491*t1614 - 1.*t1614*t2466*t4372) - 1.*t1614*t2466*t5335 + t6858*t7456 - 1.*t820*t826 - 0.183*(-1.*t6815*t7456 - 1.*t118*t826);
  p_output1(15)=t5335*t7122 + t1421*t7519 - 0.13205*(t7202 + t1040*t7519) + 0.183*t6815*t7534 + t6858*t7534;
  p_output1(16)=t1421*t5708 + t5335*t7579 + 0.183*t6815*t7583 + t6858*t7583 - 0.13205*(t1040*t5708 + t7607);
  p_output1(17)=t7660 + t7664 + t7694 - 1.*t1421*t2466*t826 + t1491*t5335*t826;
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
  p_output1(36)=0.047*t4372*t7122 - 0.047*t1040*t7133 - 0.13205*t7210 + 0.183*t6815*t7706 + t6858*t7706;
  p_output1(37)=0.047*t4372*t7579 - 0.047*t1040*t7724 + 0.183*t6815*t7734 + t6858*t7734 - 0.13205*t7742;
  p_output1(38)=t7660 + t7664 + t7694 - 0.047*t1040*t2466*t826 + 0.047*t1491*t4372*t826;
  p_output1(39)=-0.183*t118*t7210 - 0.183*t2287*t6815*t826 - 0.183*(-1.*t118*t7210 - 1.*t2287*t6815*t826);
  p_output1(40)=-0.183*t118*t7742 - 0.183*t6815*t826*t885 - 0.183*(-1.*t118*t7742 - 1.*t6815*t826*t885);
  p_output1(41)=0.183*t1614*t6815 - 0.183*t118*t7675 - 0.183*(t1614*t6815 - 1.*t118*t7675);
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


       
Eigen::Matrix<double,3,18> Jp_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



