/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_hip_joint_src.h"

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
  double t224;
  double t3217;
  double t7046;
  double t3610;
  double t7122;
  double t2157;
  double t4377;
  double t7297;
  double t7303;
  double t7363;
  double t7380;
  double t7383;
  double t7391;
  double t718;
  double t2328;
  double t3011;
  double t7364;
  double t7368;
  double t7370;
  double t7371;
  double t7419;
  double t7420;
  double t7421;
  double t7425;
  double t7426;
  double t7427;
  t224 = Cos(var1[3]);
  t3217 = Cos(var1[5]);
  t7046 = Sin(var1[3]);
  t3610 = Sin(var1[4]);
  t7122 = Sin(var1[5]);
  t2157 = Sin(var1[15]);
  t4377 = t224*t3217*t3610;
  t7297 = t7046*t7122;
  t7303 = t4377 + t7297;
  t7363 = Cos(var1[15]);
  t7380 = -1.*t3217*t7046;
  t7383 = t224*t3610*t7122;
  t7391 = t7380 + t7383;
  t718 = Cos(var1[4]);
  t2328 = -0.047*t2157;
  t3011 = 0. + t2328;
  t7364 = -1.*t7363;
  t7368 = 1. + t7364;
  t7370 = 0.047*t7368;
  t7371 = 0. + t7370;
  t7419 = t3217*t7046*t3610;
  t7420 = -1.*t224*t7122;
  t7421 = t7419 + t7420;
  t7425 = t224*t3217;
  t7426 = t7046*t3610*t7122;
  t7427 = t7425 + t7426;
  p_output1[0]=0. - 0.183*t224*t718 + t3011*t7303 + t7371*t7391 + 0.047*(t2157*t7303 + t7363*t7391) + var1[0];
  p_output1[1]=0. - 0.183*t7046*t718 + t3011*t7421 + t7371*t7427 + 0.047*(t2157*t7421 + t7363*t7427) + var1[1];
  p_output1[2]=0. + 0.183*t3610 + t3011*t3217*t718 + 0.047*(t2157*t3217*t718 + t7122*t718*t7363) + t7122*t718*t7371 + var1[2];
}



void p_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
