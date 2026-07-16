/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint_src.h"

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
  double t434;
  double t3036;
  double t3578;
  double t3107;
  double t3624;
  double t1975;
  double t3287;
  double t3707;
  double t3799;
  double t4806;
  double t5004;
  double t5307;
  double t5330;
  double t581;
  double t2331;
  double t2362;
  double t2622;
  double t3035;
  double t5447;
  double t5479;
  double t6285;
  double t6328;
  double t6338;
  double t6411;
  double t6424;
  double t6426;
  t434 = Cos(var1[3]);
  t3036 = Cos(var1[5]);
  t3578 = Sin(var1[4]);
  t3107 = Sin(var1[3]);
  t3624 = Sin(var1[5]);
  t1975 = Cos(var1[6]);
  t3287 = -1.*t3036*t3107;
  t3707 = t434*t3578*t3624;
  t3799 = t3287 + t3707;
  t4806 = t434*t3036*t3578;
  t5004 = t3107*t3624;
  t5307 = t4806 + t5004;
  t5330 = Sin(var1[6]);
  t581 = Cos(var1[4]);
  t2331 = -1.*t1975;
  t2362 = 1. + t2331;
  t2622 = -0.047*t2362;
  t3035 = 0. + t2622;
  t5447 = 0.047*t5330;
  t5479 = 0. + t5447;
  t6285 = t434*t3036;
  t6328 = t3107*t3578*t3624;
  t6338 = t6285 + t6328;
  t6411 = t3036*t3107*t3578;
  t6424 = -1.*t434*t3624;
  t6426 = t6411 + t6424;
  p_output1[0]=0. + t3035*t3799 - 0.047*(t1975*t3799 + t5307*t5330) + t5307*t5479 + 0.183*t434*t581 + var1[0];
  p_output1[1]=0. + 0.183*t3107*t581 + t3035*t6338 + t5479*t6426 - 0.047*(t1975*t6338 + t5330*t6426) + var1[1];
  p_output1[2]=0. - 0.183*t3578 + t3035*t3624*t581 + t3036*t5479*t581 - 0.047*(t1975*t3624*t581 + t3036*t5330*t581) + var1[2];
}



void p_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
