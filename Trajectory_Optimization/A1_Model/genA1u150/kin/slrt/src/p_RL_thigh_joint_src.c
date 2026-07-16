/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t1297;
  double t5884;
  double t6610;
  double t5980;
  double t7004;
  double t4330;
  double t6216;
  double t7362;
  double t7564;
  double t8030;
  double t8154;
  double t8158;
  double t8173;
  double t402;
  double t1339;
  double t8411;
  double t8454;
  double t8461;
  double t8473;
  double t499;
  double t644;
  double t669;
  double t822;
  double t4456;
  double t4812;
  double t8049;
  double t8066;
  double t8108;
  double t8139;
  double t8646;
  double t8651;
  double t8668;
  double t8696;
  double t8711;
  double t8719;
  double t8420;
  double t8430;
  double t8848;
  double t8869;
  double t8870;
  double t9041;
  double t9067;
  double t9069;
  t1297 = Cos(var1[3]);
  t5884 = Cos(var1[5]);
  t6610 = Sin(var1[3]);
  t5980 = Sin(var1[4]);
  t7004 = Sin(var1[5]);
  t4330 = Sin(var1[15]);
  t6216 = t1297*t5884*t5980;
  t7362 = t6610*t7004;
  t7564 = t6216 + t7362;
  t8030 = Cos(var1[15]);
  t8154 = -1.*t5884*t6610;
  t8158 = t1297*t5980*t7004;
  t8173 = t8154 + t8158;
  t402 = Cos(var1[16]);
  t1339 = Cos(var1[4]);
  t8411 = Sin(var1[16]);
  t8454 = t8030*t7564;
  t8461 = -1.*t4330*t8173;
  t8473 = t8454 + t8461;
  t499 = -1.*t402;
  t644 = 1. + t499;
  t669 = -0.183*t644;
  t822 = 0. + t669;
  t4456 = -0.047*t4330;
  t4812 = 0. + t4456;
  t8049 = -1.*t8030;
  t8066 = 1. + t8049;
  t8108 = 0.047*t8066;
  t8139 = 0. + t8108;
  t8646 = t5884*t6610*t5980;
  t8651 = -1.*t1297*t7004;
  t8668 = t8646 + t8651;
  t8696 = t1297*t5884;
  t8711 = t6610*t5980*t7004;
  t8719 = t8696 + t8711;
  t8420 = -0.183*t8411;
  t8430 = 0. + t8420;
  t8848 = t8030*t8668;
  t8869 = -1.*t4330*t8719;
  t8870 = t8848 + t8869;
  t9041 = t8030*t1339*t5884;
  t9067 = -1.*t1339*t4330*t7004;
  t9069 = t9041 + t9067;
  p_output1[0]=0. + t4812*t7564 + t8139*t8173 + 0.17458*(t4330*t7564 + t8030*t8173) + t1297*t1339*t822 + t8430*t8473 - 0.183*(t1297*t1339*t402 - 1.*t8411*t8473) + var1[0];
  p_output1[1]=0. + t1339*t6610*t822 + t4812*t8668 + t8139*t8719 + 0.17458*(t4330*t8668 + t8030*t8719) + t8430*t8870 - 0.183*(t1339*t402*t6610 - 1.*t8411*t8870) + var1[1];
  p_output1[2]=0. + t1339*t4812*t5884 + 0.17458*(t1339*t4330*t5884 + t1339*t7004*t8030) + t1339*t7004*t8139 - 1.*t5980*t822 + t8430*t9069 - 0.183*(-1.*t402*t5980 - 1.*t8411*t9069) + var1[2];
}



void p_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
