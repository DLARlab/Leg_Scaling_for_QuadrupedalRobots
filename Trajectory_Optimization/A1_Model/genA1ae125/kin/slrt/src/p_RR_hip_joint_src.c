/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint_src.h"

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
  double t4885;
  double t6393;
  double t6489;
  double t6395;
  double t6507;
  double t5639;
  double t6469;
  double t6524;
  double t6526;
  double t6532;
  double t6544;
  double t6547;
  double t6548;
  double t5030;
  double t5656;
  double t5728;
  double t6534;
  double t6538;
  double t6539;
  double t6541;
  double t6566;
  double t6568;
  double t6571;
  double t6575;
  double t6577;
  double t6579;
  t4885 = Cos(var1[3]);
  t6393 = Cos(var1[5]);
  t6489 = Sin(var1[3]);
  t6395 = Sin(var1[4]);
  t6507 = Sin(var1[5]);
  t5639 = Sin(var1[12]);
  t6469 = t4885*t6393*t6395;
  t6524 = t6489*t6507;
  t6526 = t6469 + t6524;
  t6532 = Cos(var1[12]);
  t6544 = -1.*t6393*t6489;
  t6547 = t4885*t6395*t6507;
  t6548 = t6544 + t6547;
  t5030 = Cos(var1[4]);
  t5656 = 0.047*t5639;
  t5728 = 0. + t5656;
  t6534 = -1.*t6532;
  t6538 = 1. + t6534;
  t6539 = -0.047*t6538;
  t6541 = 0. + t6539;
  t6566 = t6393*t6489*t6395;
  t6568 = -1.*t4885*t6507;
  t6571 = t6566 + t6568;
  t6575 = t4885*t6393;
  t6577 = t6489*t6395*t6507;
  t6579 = t6575 + t6577;
  p_output1[0]=0. - 0.183*t4885*t5030 + t5728*t6526 + t6541*t6548 - 0.047*(t5639*t6526 + t6532*t6548) + var1[0];
  p_output1[1]=0. - 0.183*t5030*t6489 + t5728*t6571 + t6541*t6579 - 0.047*(t5639*t6571 + t6532*t6579) + var1[1];
  p_output1[2]=0. + t5030*t5728*t6393 + 0.183*t6395 - 0.047*(t5030*t5639*t6393 + t5030*t6507*t6532) + t5030*t6507*t6541 + var1[2];
}



void p_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
