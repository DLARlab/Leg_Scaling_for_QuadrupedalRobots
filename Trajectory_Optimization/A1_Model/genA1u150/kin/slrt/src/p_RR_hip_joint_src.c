/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:49 GMT-05:00
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
  double t472;
  double t2510;
  double t4583;
  double t3677;
  double t5082;
  double t1568;
  double t4161;
  double t5332;
  double t5348;
  double t5577;
  double t5652;
  double t5657;
  double t5673;
  double t522;
  double t1714;
  double t2508;
  double t5595;
  double t5614;
  double t5636;
  double t5638;
  double t5800;
  double t5802;
  double t5814;
  double t5948;
  double t5955;
  double t5982;
  t472 = Cos(var1[3]);
  t2510 = Cos(var1[5]);
  t4583 = Sin(var1[3]);
  t3677 = Sin(var1[4]);
  t5082 = Sin(var1[5]);
  t1568 = Sin(var1[12]);
  t4161 = t472*t2510*t3677;
  t5332 = t4583*t5082;
  t5348 = t4161 + t5332;
  t5577 = Cos(var1[12]);
  t5652 = -1.*t2510*t4583;
  t5657 = t472*t3677*t5082;
  t5673 = t5652 + t5657;
  t522 = Cos(var1[4]);
  t1714 = 0.047*t1568;
  t2508 = 0. + t1714;
  t5595 = -1.*t5577;
  t5614 = 1. + t5595;
  t5636 = -0.047*t5614;
  t5638 = 0. + t5636;
  t5800 = t2510*t4583*t3677;
  t5802 = -1.*t472*t5082;
  t5814 = t5800 + t5802;
  t5948 = t472*t2510;
  t5955 = t4583*t3677*t5082;
  t5982 = t5948 + t5955;
  p_output1[0]=0. - 0.183*t472*t522 + t2508*t5348 + t5638*t5673 - 0.047*(t1568*t5348 + t5577*t5673) + var1[0];
  p_output1[1]=0. - 0.183*t4583*t522 + t2508*t5814 + t5638*t5982 - 0.047*(t1568*t5814 + t5577*t5982) + var1[1];
  p_output1[2]=0. + 0.183*t3677 + t2508*t2510*t522 - 0.047*(t1568*t2510*t522 + t5082*t522*t5577) + t5082*t522*t5638 + var1[2];
}



void p_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
