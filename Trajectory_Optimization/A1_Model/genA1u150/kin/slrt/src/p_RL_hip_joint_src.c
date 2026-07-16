/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:56 GMT-05:00
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
  double t537;
  double t2699;
  double t3337;
  double t3241;
  double t3614;
  double t2203;
  double t3336;
  double t3685;
  double t3937;
  double t6032;
  double t6394;
  double t6452;
  double t6474;
  double t1278;
  double t2473;
  double t2620;
  double t6128;
  double t6243;
  double t6261;
  double t6393;
  double t6708;
  double t6805;
  double t6807;
  double t6966;
  double t6986;
  double t6994;
  t537 = Cos(var1[3]);
  t2699 = Cos(var1[5]);
  t3337 = Sin(var1[3]);
  t3241 = Sin(var1[4]);
  t3614 = Sin(var1[5]);
  t2203 = Sin(var1[15]);
  t3336 = t537*t2699*t3241;
  t3685 = t3337*t3614;
  t3937 = t3336 + t3685;
  t6032 = Cos(var1[15]);
  t6394 = -1.*t2699*t3337;
  t6452 = t537*t3241*t3614;
  t6474 = t6394 + t6452;
  t1278 = Cos(var1[4]);
  t2473 = -0.047*t2203;
  t2620 = 0. + t2473;
  t6128 = -1.*t6032;
  t6243 = 1. + t6128;
  t6261 = 0.047*t6243;
  t6393 = 0. + t6261;
  t6708 = t2699*t3337*t3241;
  t6805 = -1.*t537*t3614;
  t6807 = t6708 + t6805;
  t6966 = t537*t2699;
  t6986 = t3337*t3241*t3614;
  t6994 = t6966 + t6986;
  p_output1[0]=0. + t2620*t3937 - 0.183*t1278*t537 + t6393*t6474 + 0.047*(t2203*t3937 + t6032*t6474) + var1[0];
  p_output1[1]=0. - 0.183*t1278*t3337 + t2620*t6807 + t6393*t6994 + 0.047*(t2203*t6807 + t6032*t6994) + var1[1];
  p_output1[2]=0. + t1278*t2620*t2699 + 0.183*t3241 + 0.047*(t1278*t2203*t2699 + t1278*t3614*t6032) + t1278*t3614*t6393 + var1[2];
}



void p_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
