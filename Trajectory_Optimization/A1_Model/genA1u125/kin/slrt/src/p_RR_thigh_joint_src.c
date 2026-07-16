/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint_src.h"

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
  double t1750;
  double t3866;
  double t4422;
  double t3892;
  double t4438;
  double t2954;
  double t3932;
  double t4550;
  double t4641;
  double t4984;
  double t6299;
  double t6784;
  double t7002;
  double t818;
  double t1969;
  double t7324;
  double t7355;
  double t7378;
  double t7381;
  double t925;
  double t1057;
  double t1206;
  double t1700;
  double t3245;
  double t3826;
  double t5005;
  double t5219;
  double t5356;
  double t6057;
  double t7481;
  double t7535;
  double t7554;
  double t7568;
  double t7575;
  double t7578;
  double t7350;
  double t7353;
  double t7657;
  double t7700;
  double t7735;
  double t7852;
  double t7860;
  double t7872;
  t1750 = Cos(var1[3]);
  t3866 = Cos(var1[5]);
  t4422 = Sin(var1[3]);
  t3892 = Sin(var1[4]);
  t4438 = Sin(var1[5]);
  t2954 = Sin(var1[12]);
  t3932 = t1750*t3866*t3892;
  t4550 = t4422*t4438;
  t4641 = t3932 + t4550;
  t4984 = Cos(var1[12]);
  t6299 = -1.*t3866*t4422;
  t6784 = t1750*t3892*t4438;
  t7002 = t6299 + t6784;
  t818 = Cos(var1[13]);
  t1969 = Cos(var1[4]);
  t7324 = Sin(var1[13]);
  t7355 = t4984*t4641;
  t7378 = -1.*t2954*t7002;
  t7381 = t7355 + t7378;
  t925 = -1.*t818;
  t1057 = 1. + t925;
  t1206 = -0.183*t1057;
  t1700 = 0. + t1206;
  t3245 = 0.047*t2954;
  t3826 = 0. + t3245;
  t5005 = -1.*t4984;
  t5219 = 1. + t5005;
  t5356 = -0.047*t5219;
  t6057 = 0. + t5356;
  t7481 = t3866*t4422*t3892;
  t7535 = -1.*t1750*t4438;
  t7554 = t7481 + t7535;
  t7568 = t1750*t3866;
  t7575 = t4422*t3892*t4438;
  t7578 = t7568 + t7575;
  t7350 = -0.183*t7324;
  t7353 = 0. + t7350;
  t7657 = t4984*t7554;
  t7700 = -1.*t2954*t7578;
  t7735 = t7657 + t7700;
  t7852 = t4984*t1969*t3866;
  t7860 = -1.*t1969*t2954*t4438;
  t7872 = t7852 + t7860;
  p_output1[0]=0. + t1700*t1750*t1969 + t3826*t4641 + t6057*t7002 - 0.15331*(t2954*t4641 + t4984*t7002) + t7353*t7381 - 0.183*(-1.*t7324*t7381 + t1750*t1969*t818) + var1[0];
  p_output1[1]=0. + t1700*t1969*t4422 + t3826*t7554 + t6057*t7578 - 0.15331*(t2954*t7554 + t4984*t7578) + t7353*t7735 - 0.183*(-1.*t7324*t7735 + t1969*t4422*t818) + var1[1];
  p_output1[2]=0. + t1969*t3826*t3866 - 1.*t1700*t3892 - 0.15331*(t1969*t2954*t3866 + t1969*t4438*t4984) + t1969*t4438*t6057 + t7353*t7872 - 0.183*(-1.*t7324*t7872 - 1.*t3892*t818) + var1[2];
}



void p_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
