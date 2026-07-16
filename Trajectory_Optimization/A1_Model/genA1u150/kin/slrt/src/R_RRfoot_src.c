/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot_src.h"

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
  double t1776;
  double t2593;
  double t3255;
  double t2731;
  double t3347;
  double t2515;
  double t1991;
  double t2282;
  double t2524;
  double t3206;
  double t3376;
  double t3594;
  double t3648;
  double t3670;
  double t3727;
  double t3792;
  double t3798;
  double t3862;
  double t3885;
  double t1701;
  double t3990;
  double t4089;
  double t4090;
  double t4136;
  double t4137;
  double t4162;
  double t4190;
  double t4199;
  double t4206;
  double t4224;
  double t4530;
  double t4533;
  double t4542;
  double t2403;
  double t3906;
  double t3943;
  double t4004;
  double t4066;
  double t4072;
  double t4088;
  double t4243;
  double t4264;
  double t4404;
  double t4418;
  double t4473;
  double t4523;
  double t4579;
  double t4586;
  double t4604;
  double t4608;
  double t4612;
  t1776 = Cos(var1[3]);
  t2593 = Cos(var1[5]);
  t3255 = Sin(var1[3]);
  t2731 = Sin(var1[4]);
  t3347 = Sin(var1[5]);
  t2515 = Cos(var1[13]);
  t1991 = Cos(var1[4]);
  t2282 = Sin(var1[13]);
  t2524 = Cos(var1[12]);
  t3206 = t1776*t2593*t2731;
  t3376 = t3255*t3347;
  t3594 = t3206 + t3376;
  t3648 = t2524*t3594;
  t3670 = Sin(var1[12]);
  t3727 = -1.*t2593*t3255;
  t3792 = t1776*t2731*t3347;
  t3798 = t3727 + t3792;
  t3862 = -1.*t3670*t3798;
  t3885 = t3648 + t3862;
  t1701 = Sin(var1[14]);
  t3990 = Cos(var1[14]);
  t4089 = t2593*t3255*t2731;
  t4090 = -1.*t1776*t3347;
  t4136 = t4089 + t4090;
  t4137 = t2524*t4136;
  t4162 = t1776*t2593;
  t4190 = t3255*t2731*t3347;
  t4199 = t4162 + t4190;
  t4206 = -1.*t3670*t4199;
  t4224 = t4137 + t4206;
  t4530 = t2524*t1991*t2593;
  t4533 = -1.*t1991*t3670*t3347;
  t4542 = t4530 + t4533;
  t2403 = t1776*t1991*t2282;
  t3906 = t2515*t3885;
  t3943 = t2403 + t3906;
  t4004 = t2515*t1776*t1991;
  t4066 = -1.*t2282*t3885;
  t4072 = t4004 + t4066;
  t4088 = t1991*t2282*t3255;
  t4243 = t2515*t4224;
  t4264 = t4088 + t4243;
  t4404 = t2515*t1991*t3255;
  t4418 = -1.*t2282*t4224;
  t4473 = t4404 + t4418;
  t4523 = -1.*t2282*t2731;
  t4579 = t2515*t4542;
  t4586 = t4523 + t4579;
  t4604 = -1.*t2515*t2731;
  t4608 = -1.*t2282*t4542;
  t4612 = t4604 + t4608;
  p_output1[0]=-1.*t1701*t3943 + t3990*t4072;
  p_output1[1]=-1.*t1701*t4264 + t3990*t4473;
  p_output1[2]=-1.*t1701*t4586 + t3990*t4612;
  p_output1[3]=t3594*t3670 + t2524*t3798;
  p_output1[4]=t3670*t4136 + t2524*t4199;
  p_output1[5]=t1991*t2524*t3347 + t1991*t2593*t3670;
  p_output1[6]=t3943*t3990 + t1701*t4072;
  p_output1[7]=t3990*t4264 + t1701*t4473;
  p_output1[8]=t3990*t4586 + t1701*t4612;
}



void R_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
