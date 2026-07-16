/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint.h"

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
  double t1525;
  double t7323;
  double t4924;
  double t4980;
  double t7921;
  double t3352;
  double t5934;
  double t7957;
  double t8006;
  double t8113;
  double t8212;
  double t8222;
  double t8227;
  double t746;
  double t3660;
  double t4688;
  double t8145;
  double t8162;
  double t8180;
  double t8206;
  double t8596;
  double t8608;
  double t8622;
  double t8687;
  double t8694;
  double t8716;
  double t9090;
  double t9092;
  double t9094;
  double t9125;
  double t9126;
  double t9127;
  double t9104;
  double t9142;
  double t9187;
  double t9207;
  double t9222;
  double t9163;
  double t9164;
  double t9170;
  double t9172;
  t1525 = Sin(var1[3]);
  t7323 = Cos(var1[3]);
  t4924 = Cos(var1[5]);
  t4980 = Sin(var1[4]);
  t7921 = Sin(var1[5]);
  t3352 = Sin(var1[12]);
  t5934 = -1.*t4924*t1525*t4980;
  t7957 = t7323*t7921;
  t8006 = t5934 + t7957;
  t8113 = Cos(var1[12]);
  t8212 = -1.*t7323*t4924;
  t8222 = -1.*t1525*t4980*t7921;
  t8227 = t8212 + t8222;
  t746 = Cos(var1[4]);
  t3660 = 0.047*t3352;
  t4688 = 0. + t3660;
  t8145 = -1.*t8113;
  t8162 = 1. + t8145;
  t8180 = -0.047*t8162;
  t8206 = 0. + t8180;
  t8596 = t7323*t4924*t4980;
  t8608 = t1525*t7921;
  t8622 = t8596 + t8608;
  t8687 = -1.*t4924*t1525;
  t8694 = t7323*t4980*t7921;
  t8716 = t8687 + t8694;
  t9090 = t4924*t1525;
  t9092 = -1.*t7323*t4980*t7921;
  t9094 = t9090 + t9092;
  t9125 = t4924*t1525*t4980;
  t9126 = -1.*t7323*t7921;
  t9127 = t9125 + t9126;
  t9104 = t8113*t8622;
  t9142 = t8113*t9127;
  t9187 = t7323*t4924;
  t9207 = t1525*t4980*t7921;
  t9222 = t9187 + t9207;
  t9163 = t8113*t746*t4924;
  t9164 = -1.*t746*t3352*t7921;
  t9170 = t9163 + t9164;
  t9172 = -0.047*t9170;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.183*t1525*t746 + t4688*t8006 + t8206*t8227 - 0.047*(t3352*t8006 + t8113*t8227);
  p_output1(10)=-0.183*t7323*t746 + t4688*t8622 + t8206*t8716 - 0.047*(t3352*t8622 + t8113*t8716);
  p_output1(11)=0;
  p_output1(12)=0.183*t4980*t7323 + t4688*t4924*t7323*t746 - 0.047*(t3352*t4924*t7323*t746 + t7323*t746*t7921*t8113) + t7323*t746*t7921*t8206;
  p_output1(13)=0.183*t1525*t4980 + t1525*t4688*t4924*t746 - 0.047*(t1525*t3352*t4924*t746 + t1525*t746*t7921*t8113) + t1525*t746*t7921*t8206;
  p_output1(14)=-1.*t4688*t4924*t4980 + 0.183*t746 - 0.047*(-1.*t3352*t4924*t4980 - 1.*t4980*t7921*t8113) - 1.*t4980*t7921*t8206;
  p_output1(15)=t8206*t8622 + t4688*t9094 - 0.047*(t3352*t9094 + t9104);
  p_output1(16)=t4688*t8227 + t8206*t9127 - 0.047*(t3352*t8227 + t9142);
  p_output1(17)=-1.*t4688*t746*t7921 + t4924*t746*t8206 + t9172;
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
  p_output1(36)=0.047*t8113*t8622 - 0.047*t3352*t8716 - 0.047*(-1.*t3352*t8716 + t9104);
  p_output1(37)=0.047*t8113*t9127 - 0.047*t3352*t9222 - 0.047*(t9142 - 1.*t3352*t9222);
  p_output1(38)=-0.047*t3352*t746*t7921 + 0.047*t4924*t746*t8113 + t9172;
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


       
Eigen::Matrix<double,3,18> Jp_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



