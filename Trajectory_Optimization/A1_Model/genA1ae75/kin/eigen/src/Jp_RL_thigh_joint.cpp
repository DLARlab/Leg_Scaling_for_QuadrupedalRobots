/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint.h"

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
  double t1748;
  double t4114;
  double t3605;
  double t3699;
  double t4496;
  double t2082;
  double t3720;
  double t4524;
  double t5378;
  double t5872;
  double t6427;
  double t6443;
  double t6499;
  double t248;
  double t1605;
  double t6655;
  double t6730;
  double t6740;
  double t6752;
  double t633;
  double t1183;
  double t1272;
  double t1516;
  double t2469;
  double t3511;
  double t5968;
  double t6206;
  double t6334;
  double t6360;
  double t7614;
  double t7820;
  double t7843;
  double t7974;
  double t8497;
  double t8536;
  double t6656;
  double t6729;
  double t9357;
  double t9375;
  double t9387;
  double t9637;
  double t9644;
  double t9657;
  double t9861;
  double t9864;
  double t9877;
  double t9930;
  double t9931;
  double t9937;
  double t9954;
  double t9955;
  double t9956;
  double t9965;
  double t9969;
  double t9972;
  double t10008;
  double t10010;
  double t10014;
  double t6562;
  double t10030;
  double t10031;
  double t10051;
  double t10054;
  double t10060;
  double t10093;
  double t10094;
  double t10108;
  double t10111;
  double t10114;
  double t10120;
  double t10124;
  double t10035;
  double t10065;
  double t10076;
  double t10078;
  double t10079;
  double t10080;
  double t10085;
  double t10137;
  double t10138;
  t1748 = Sin(var1[3]);
  t4114 = Cos(var1[3]);
  t3605 = Cos(var1[5]);
  t3699 = Sin(var1[4]);
  t4496 = Sin(var1[5]);
  t2082 = Sin(var1[15]);
  t3720 = -1.*t3605*t1748*t3699;
  t4524 = t4114*t4496;
  t5378 = t3720 + t4524;
  t5872 = Cos(var1[15]);
  t6427 = -1.*t4114*t3605;
  t6443 = -1.*t1748*t3699*t4496;
  t6499 = t6427 + t6443;
  t248 = Cos(var1[16]);
  t1605 = Cos(var1[4]);
  t6655 = Sin(var1[16]);
  t6730 = t5872*t5378;
  t6740 = -1.*t2082*t6499;
  t6752 = t6730 + t6740;
  t633 = -1.*t248;
  t1183 = 1. + t633;
  t1272 = -0.183*t1183;
  t1516 = 0. + t1272;
  t2469 = -0.047*t2082;
  t3511 = 0. + t2469;
  t5968 = -1.*t5872;
  t6206 = 1. + t5968;
  t6334 = 0.047*t6206;
  t6360 = 0. + t6334;
  t7614 = t4114*t3605*t3699;
  t7820 = t1748*t4496;
  t7843 = t7614 + t7820;
  t7974 = -1.*t3605*t1748;
  t8497 = t4114*t3699*t4496;
  t8536 = t7974 + t8497;
  t6656 = -0.183*t6655;
  t6729 = 0. + t6656;
  t9357 = t5872*t7843;
  t9375 = -1.*t2082*t8536;
  t9387 = t9357 + t9375;
  t9637 = t5872*t4114*t1605*t3605;
  t9644 = -1.*t4114*t1605*t2082*t4496;
  t9657 = t9637 + t9644;
  t9861 = t5872*t1605*t3605*t1748;
  t9864 = -1.*t1605*t2082*t1748*t4496;
  t9877 = t9861 + t9864;
  t9930 = -1.*t5872*t3605*t3699;
  t9931 = t2082*t3699*t4496;
  t9937 = t9930 + t9931;
  t9954 = t3605*t1748;
  t9955 = -1.*t4114*t3699*t4496;
  t9956 = t9954 + t9955;
  t9965 = -1.*t2082*t7843;
  t9969 = t5872*t9956;
  t9972 = t9965 + t9969;
  t10008 = t3605*t1748*t3699;
  t10010 = -1.*t4114*t4496;
  t10014 = t10008 + t10010;
  t6562 = t5872*t6499;
  t10030 = -1.*t2082*t10014;
  t10031 = t10030 + t6562;
  t10051 = -1.*t1605*t3605*t2082;
  t10054 = -1.*t5872*t1605*t4496;
  t10060 = t10051 + t10054;
  t10093 = -1.*t5872*t8536;
  t10094 = t9965 + t10093;
  t10108 = t4114*t3605;
  t10111 = t1748*t3699*t4496;
  t10114 = t10108 + t10111;
  t10120 = -1.*t5872*t10114;
  t10124 = t10030 + t10120;
  t10035 = t5872*t10014;
  t10065 = t6729*t10060;
  t10076 = 0.183*t6655*t10060;
  t10078 = t5872*t1605*t3605;
  t10079 = -1.*t1605*t2082*t4496;
  t10080 = t10078 + t10079;
  t10085 = 0.13205*t10080;
  t10137 = -1.*t2082*t10114;
  t10138 = t10035 + t10137;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1516*t1605*t1748 + t3511*t5378 + t6360*t6499 + 0.13205*(t2082*t5378 + t6562) + t6729*t6752 - 0.183*(-1.*t1605*t1748*t248 - 1.*t6655*t6752);
  p_output1(10)=t1516*t1605*t4114 + t3511*t7843 + t6360*t8536 + 0.13205*(t2082*t7843 + t5872*t8536) + t6729*t9387 - 0.183*(t1605*t248*t4114 - 1.*t6655*t9387);
  p_output1(11)=0;
  p_output1(12)=t1605*t3511*t3605*t4114 - 1.*t1516*t3699*t4114 + 0.13205*(t1605*t2082*t3605*t4114 + t1605*t4114*t4496*t5872) + t1605*t4114*t4496*t6360 + t6729*t9657 - 0.183*(-1.*t248*t3699*t4114 - 1.*t6655*t9657);
  p_output1(13)=t1605*t1748*t3511*t3605 - 1.*t1516*t1748*t3699 + 0.13205*(t1605*t1748*t2082*t3605 + t1605*t1748*t4496*t5872) + t1605*t1748*t4496*t6360 + t6729*t9877 - 0.183*(-1.*t1748*t248*t3699 - 1.*t6655*t9877);
  p_output1(14)=-1.*t1516*t1605 - 1.*t3511*t3605*t3699 + 0.13205*(-1.*t2082*t3605*t3699 - 1.*t3699*t4496*t5872) - 1.*t3699*t4496*t6360 + t6729*t9937 - 0.183*(-1.*t1605*t248 - 1.*t6655*t9937);
  p_output1(15)=t6360*t7843 + t3511*t9956 + 0.13205*(t9357 + t2082*t9956) + 0.183*t6655*t9972 + t6729*t9972;
  p_output1(16)=t10014*t6360 + t3511*t6499 + 0.13205*(t10035 + t2082*t6499) + 0.183*t10031*t6655 + t10031*t6729;
  p_output1(17)=t10065 + t10076 + t10085 - 1.*t1605*t3511*t4496 + t1605*t3605*t6360;
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
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0.183*t10094*t6655 + t10094*t6729 - 0.047*t5872*t7843 + 0.047*t2082*t8536 + 0.13205*t9387;
  p_output1(46)=0.13205*t10138 + 0.047*t10114*t2082 - 0.047*t10014*t5872 + 0.183*t10124*t6655 + t10124*t6729;
  p_output1(47)=t10065 + t10076 + t10085 + 0.047*t1605*t2082*t4496 - 0.047*t1605*t3605*t5872;
  p_output1(48)=-0.183*t1605*t4114*t6655 - 0.183*t248*t9387 - 0.183*(-1.*t1605*t4114*t6655 - 1.*t248*t9387);
  p_output1(49)=-0.183*t10138*t248 - 0.183*t1605*t1748*t6655 - 0.183*(-1.*t10138*t248 - 1.*t1605*t1748*t6655);
  p_output1(50)=-0.183*t10080*t248 + 0.183*t3699*t6655 - 0.183*(-1.*t10080*t248 + t3699*t6655);
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



