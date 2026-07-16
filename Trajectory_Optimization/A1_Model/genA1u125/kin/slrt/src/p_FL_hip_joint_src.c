/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint_src.h"

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
  double t153;
  double t1098;
  double t1690;
  double t1537;
  double t2251;
  double t611;
  double t1663;
  double t2267;
  double t2319;
  double t2856;
  double t3227;
  double t3288;
  double t3308;
  double t171;
  double t681;
  double t935;
  double t2907;
  double t3090;
  double t3201;
  double t3202;
  double t3862;
  double t4023;
  double t4037;
  double t4378;
  double t4428;
  double t4466;
  t153 = Cos(var1[3]);
  t1098 = Cos(var1[5]);
  t1690 = Sin(var1[3]);
  t1537 = Sin(var1[4]);
  t2251 = Sin(var1[5]);
  t611 = Sin(var1[9]);
  t1663 = t153*t1098*t1537;
  t2267 = t1690*t2251;
  t2319 = t1663 + t2267;
  t2856 = Cos(var1[9]);
  t3227 = -1.*t1098*t1690;
  t3288 = t153*t1537*t2251;
  t3308 = t3227 + t3288;
  t171 = Cos(var1[4]);
  t681 = -0.047*t611;
  t935 = 0. + t681;
  t2907 = -1.*t2856;
  t3090 = 1. + t2907;
  t3201 = 0.047*t3090;
  t3202 = 0. + t3201;
  t3862 = t1098*t1690*t1537;
  t4023 = -1.*t153*t2251;
  t4037 = t3862 + t4023;
  t4378 = t153*t1098;
  t4428 = t1690*t1537*t2251;
  t4466 = t4378 + t4428;
  p_output1[0]=0. + 0.183*t153*t171 + t3202*t3308 + 0.047*(t2856*t3308 + t2319*t611) + t2319*t935 + var1[0];
  p_output1[1]=0. + 0.183*t1690*t171 + t3202*t4466 + 0.047*(t2856*t4466 + t4037*t611) + t4037*t935 + var1[1];
  p_output1[2]=0. - 0.183*t1537 + t171*t2251*t3202 + 0.047*(t171*t2251*t2856 + t1098*t171*t611) + t1098*t171*t935 + var1[2];
}



void p_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
