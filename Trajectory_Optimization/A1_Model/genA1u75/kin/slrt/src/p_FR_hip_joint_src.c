/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:45 GMT-05:00
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
  double t2223;
  double t6259;
  double t6275;
  double t6267;
  double t6282;
  double t4474;
  double t6270;
  double t6303;
  double t6321;
  double t6359;
  double t6373;
  double t6408;
  double t6466;
  double t3214;
  double t6198;
  double t6205;
  double t6253;
  double t6258;
  double t6484;
  double t6486;
  double t6621;
  double t6664;
  double t6666;
  double t6696;
  double t6749;
  double t6754;
  t2223 = Cos(var1[3]);
  t6259 = Cos(var1[5]);
  t6275 = Sin(var1[4]);
  t6267 = Sin(var1[3]);
  t6282 = Sin(var1[5]);
  t4474 = Cos(var1[6]);
  t6270 = -1.*t6259*t6267;
  t6303 = t2223*t6275*t6282;
  t6321 = t6270 + t6303;
  t6359 = t2223*t6259*t6275;
  t6373 = t6267*t6282;
  t6408 = t6359 + t6373;
  t6466 = Sin(var1[6]);
  t3214 = Cos(var1[4]);
  t6198 = -1.*t4474;
  t6205 = 1. + t6198;
  t6253 = -0.047*t6205;
  t6258 = 0. + t6253;
  t6484 = 0.047*t6466;
  t6486 = 0. + t6484;
  t6621 = t2223*t6259;
  t6664 = t6267*t6275*t6282;
  t6666 = t6621 + t6664;
  t6696 = t6259*t6267*t6275;
  t6749 = -1.*t2223*t6282;
  t6754 = t6696 + t6749;
  p_output1[0]=0. + 0.183*t2223*t3214 + t6258*t6321 - 0.047*(t4474*t6321 + t6408*t6466) + t6408*t6486 + var1[0];
  p_output1[1]=0. + 0.183*t3214*t6267 + t6258*t6666 + t6486*t6754 - 0.047*(t4474*t6666 + t6466*t6754) + var1[1];
  p_output1[2]=0. - 0.183*t6275 + t3214*t6258*t6282 - 0.047*(t3214*t4474*t6282 + t3214*t6259*t6466) + t3214*t6259*t6486 + var1[2];
}



void p_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
