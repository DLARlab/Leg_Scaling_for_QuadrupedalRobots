/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint_src.h"

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
  double t209;
  double t1776;
  double t1984;
  double t1830;
  double t2004;
  double t447;
  double t763;
  double t1314;
  double t2021;
  double t2033;
  double t2009;
  double t2010;
  double t2011;
  double t1928;
  double t2005;
  double t2006;
  double t2402;
  double t2471;
  double t2523;
  double t2321;
  double t2329;
  double t2331;
  double t2008;
  double t2023;
  double t2032;
  double t2362;
  double t2559;
  double t2562;
  double t2686;
  double t2720;
  double t2879;
  double t2983;
  double t3044;
  double t3050;
  double t1213;
  double t2080;
  double t2094;
  double t3809;
  double t3848;
  double t3962;
  double t4008;
  double t4176;
  double t4235;
  double t4339;
  double t4377;
  double t4629;
  double t4647;
  double t3200;
  double t3315;
  double t3335;
  double t4838;
  double t5069;
  double t2180;
  double t2605;
  double t2620;
  double t3336;
  double t3337;
  double t3341;
  double t2685;
  double t2894;
  double t2951;
  t209 = Cos(var1[3]);
  t1776 = Cos(var1[5]);
  t1984 = Sin(var1[3]);
  t1830 = Sin(var1[4]);
  t2004 = Sin(var1[5]);
  t447 = Cos(var1[4]);
  t763 = Cos(var1[7]);
  t1314 = Cos(var1[6]);
  t2021 = Sin(var1[6]);
  t2033 = Sin(var1[7]);
  t2009 = -1.*t1776*t1984;
  t2010 = t209*t1830*t2004;
  t2011 = t2009 + t2010;
  t1928 = t209*t1776*t1830;
  t2005 = t1984*t2004;
  t2006 = t1928 + t2005;
  t2402 = t209*t1776;
  t2471 = t1984*t1830*t2004;
  t2523 = t2402 + t2471;
  t2321 = t1776*t1984*t1830;
  t2329 = -1.*t209*t2004;
  t2331 = t2321 + t2329;
  t2008 = t1314*t2006;
  t2023 = -1.*t2011*t2021;
  t2032 = t2008 + t2023;
  t2362 = t1314*t2331;
  t2559 = -1.*t2523*t2021;
  t2562 = t2362 + t2559;
  t2686 = t447*t1776*t1314;
  t2720 = -1.*t447*t2004*t2021;
  t2879 = t2686 + t2720;
  t2983 = t1314*t2011;
  t3044 = t2006*t2021;
  t3050 = t2983 + t3044;
  t1213 = t209*t447*t763;
  t2080 = -1.*t2032*t2033;
  t2094 = t1213 + t2080;
  t3809 = -1.*t763;
  t3848 = 1. + t3809;
  t3962 = 0.183*t3848;
  t4008 = 0. + t3962;
  t4176 = -1.*t1314;
  t4235 = 1. + t4176;
  t4339 = -0.047*t4235;
  t4377 = 0. + t4339;
  t4629 = 0.047*t2021;
  t4647 = 0. + t4629;
  t3200 = t1314*t2523;
  t3315 = t2331*t2021;
  t3335 = t3200 + t3315;
  t4838 = 0.183*t2033;
  t5069 = 0. + t4838;
  t2180 = t447*t763*t1984;
  t2605 = -1.*t2562*t2033;
  t2620 = t2180 + t2605;
  t3336 = t447*t1314*t2004;
  t3337 = t447*t1776*t2021;
  t3341 = t3336 + t3337;
  t2685 = -1.*t763*t1830;
  t2894 = -1.*t2879*t2033;
  t2951 = t2685 + t2894;
  p_output1[0]=t2094;
  p_output1[1]=t2620;
  p_output1[2]=t2951;
  p_output1[3]=0.;
  p_output1[4]=t3050;
  p_output1[5]=t3335;
  p_output1[6]=t3341;
  p_output1[7]=0.;
  p_output1[8]=t2033*t209*t447 + t2032*t763;
  p_output1[9]=t1984*t2033*t447 + t2562*t763;
  p_output1[10]=-1.*t1830*t2033 + t2879*t763;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2094 - 0.15331*t3050 + t2011*t4377 + t209*t4008*t447 + t2006*t4647 + t2032*t5069 + var1[0];
  p_output1[13]=0. + 0.183*t2620 - 0.15331*t3335 + t2523*t4377 + t1984*t4008*t447 + t2331*t4647 + t2562*t5069 + var1[1];
  p_output1[14]=0. + 0.183*t2951 - 0.15331*t3341 - 1.*t1830*t4008 + t2004*t4377*t447 + t1776*t447*t4647 + t2879*t5069 + var1[2];
  p_output1[15]=1.;
}



void H_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
