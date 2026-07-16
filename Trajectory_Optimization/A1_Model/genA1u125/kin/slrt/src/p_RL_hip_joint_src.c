/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:38 GMT-05:00
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
  double t281;
  double t4153;
  double t6661;
  double t4276;
  double t6673;
  double t1169;
  double t6501;
  double t6967;
  double t6969;
  double t7125;
  double t7248;
  double t7279;
  double t7281;
  double t1006;
  double t2170;
  double t2220;
  double t7195;
  double t7240;
  double t7245;
  double t7247;
  double t7541;
  double t7566;
  double t7605;
  double t7611;
  double t7629;
  double t7638;
  t281 = Cos(var1[3]);
  t4153 = Cos(var1[5]);
  t6661 = Sin(var1[3]);
  t4276 = Sin(var1[4]);
  t6673 = Sin(var1[5]);
  t1169 = Sin(var1[15]);
  t6501 = t281*t4153*t4276;
  t6967 = t6661*t6673;
  t6969 = t6501 + t6967;
  t7125 = Cos(var1[15]);
  t7248 = -1.*t4153*t6661;
  t7279 = t281*t4276*t6673;
  t7281 = t7248 + t7279;
  t1006 = Cos(var1[4]);
  t2170 = -0.047*t1169;
  t2220 = 0. + t2170;
  t7195 = -1.*t7125;
  t7240 = 1. + t7195;
  t7245 = 0.047*t7240;
  t7247 = 0. + t7245;
  t7541 = t4153*t6661*t4276;
  t7566 = -1.*t281*t6673;
  t7605 = t7541 + t7566;
  t7611 = t281*t4153;
  t7629 = t6661*t4276*t6673;
  t7638 = t7611 + t7629;
  p_output1[0]=0. - 0.183*t1006*t281 + t2220*t6969 + t7247*t7281 + 0.047*(t1169*t6969 + t7125*t7281) + var1[0];
  p_output1[1]=0. - 0.183*t1006*t6661 + t2220*t7605 + t7247*t7638 + 0.047*(t1169*t7605 + t7125*t7638) + var1[1];
  p_output1[2]=0. + t1006*t2220*t4153 + 0.183*t4276 + 0.047*(t1006*t1169*t4153 + t1006*t6673*t7125) + t1006*t6673*t7247 + var1[2];
}



void p_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
