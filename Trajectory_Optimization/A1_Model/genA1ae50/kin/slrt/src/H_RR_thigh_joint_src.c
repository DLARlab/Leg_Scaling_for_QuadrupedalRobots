/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint_src.h"

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
  double t1025;
  double t2258;
  double t2756;
  double t2526;
  double t2828;
  double t884;
  double t1391;
  double t1813;
  double t1901;
  double t3027;
  double t2692;
  double t2923;
  double t2951;
  double t3087;
  double t3102;
  double t3121;
  double t3414;
  double t3446;
  double t3575;
  double t3675;
  double t3688;
  double t3725;
  double t2967;
  double t3221;
  double t3260;
  double t3612;
  double t3737;
  double t3746;
  double t3876;
  double t3958;
  double t3987;
  double t4374;
  double t4445;
  double t4500;
  double t1749;
  double t3295;
  double t3307;
  double t5814;
  double t5920;
  double t5983;
  double t6001;
  double t6066;
  double t6069;
  double t6283;
  double t6530;
  double t6642;
  double t6671;
  double t4501;
  double t4726;
  double t4730;
  double t6686;
  double t6737;
  double t3395;
  double t3769;
  double t3792;
  double t4848;
  double t4888;
  double t4914;
  double t3836;
  double t4038;
  double t4288;
  t1025 = Cos(var1[3]);
  t2258 = Cos(var1[5]);
  t2756 = Sin(var1[3]);
  t2526 = Sin(var1[4]);
  t2828 = Sin(var1[5]);
  t884 = Cos(var1[13]);
  t1391 = Cos(var1[4]);
  t1813 = Sin(var1[13]);
  t1901 = Cos(var1[12]);
  t3027 = Sin(var1[12]);
  t2692 = t1025*t2258*t2526;
  t2923 = t2756*t2828;
  t2951 = t2692 + t2923;
  t3087 = -1.*t2258*t2756;
  t3102 = t1025*t2526*t2828;
  t3121 = t3087 + t3102;
  t3414 = t2258*t2756*t2526;
  t3446 = -1.*t1025*t2828;
  t3575 = t3414 + t3446;
  t3675 = t1025*t2258;
  t3688 = t2756*t2526*t2828;
  t3725 = t3675 + t3688;
  t2967 = t1901*t2951;
  t3221 = -1.*t3027*t3121;
  t3260 = t2967 + t3221;
  t3612 = t1901*t3575;
  t3737 = -1.*t3027*t3725;
  t3746 = t3612 + t3737;
  t3876 = t1901*t1391*t2258;
  t3958 = -1.*t1391*t3027*t2828;
  t3987 = t3876 + t3958;
  t4374 = t3027*t2951;
  t4445 = t1901*t3121;
  t4500 = t4374 + t4445;
  t1749 = t884*t1025*t1391;
  t3295 = -1.*t1813*t3260;
  t3307 = t1749 + t3295;
  t5814 = -1.*t884;
  t5920 = 1. + t5814;
  t5983 = -0.183*t5920;
  t6001 = 0. + t5983;
  t6066 = 0.047*t3027;
  t6069 = 0. + t6066;
  t6283 = -1.*t1901;
  t6530 = 1. + t6283;
  t6642 = -0.047*t6530;
  t6671 = 0. + t6642;
  t4501 = t3027*t3575;
  t4726 = t1901*t3725;
  t4730 = t4501 + t4726;
  t6686 = -0.183*t1813;
  t6737 = 0. + t6686;
  t3395 = t884*t1391*t2756;
  t3769 = -1.*t1813*t3746;
  t3792 = t3395 + t3769;
  t4848 = t1391*t2258*t3027;
  t4888 = t1901*t1391*t2828;
  t4914 = t4848 + t4888;
  t3836 = -1.*t884*t2526;
  t4038 = -1.*t1813*t3987;
  t4288 = t3836 + t4038;
  p_output1[0]=t3307;
  p_output1[1]=t3792;
  p_output1[2]=t4288;
  p_output1[3]=0.;
  p_output1[4]=t4500;
  p_output1[5]=t4730;
  p_output1[6]=t4914;
  p_output1[7]=0.;
  p_output1[8]=t1025*t1391*t1813 + t3260*t884;
  p_output1[9]=t1391*t1813*t2756 + t3746*t884;
  p_output1[10]=-1.*t1813*t2526 + t3987*t884;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3307 - 0.13205*t4500 + t1025*t1391*t6001 + t2951*t6069 + t3121*t6671 + t3260*t6737 + var1[0];
  p_output1[13]=0. - 0.183*t3792 - 0.13205*t4730 + t1391*t2756*t6001 + t3575*t6069 + t3725*t6671 + t3746*t6737 + var1[1];
  p_output1[14]=0. - 0.183*t4288 - 0.13205*t4914 - 1.*t2526*t6001 + t1391*t2258*t6069 + t1391*t2828*t6671 + t3987*t6737 + var1[2];
  p_output1[15]=1.;
}



void H_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
