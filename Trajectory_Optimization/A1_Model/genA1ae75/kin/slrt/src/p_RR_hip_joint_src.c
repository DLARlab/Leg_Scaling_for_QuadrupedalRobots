/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:46 GMT-05:00
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
  double t7730;
  double t7883;
  double t7898;
  double t7891;
  double t7915;
  double t7791;
  double t7894;
  double t7916;
  double t7919;
  double t7926;
  double t7969;
  double t7973;
  double t7974;
  double t7742;
  double t7813;
  double t7855;
  double t7931;
  double t7932;
  double t7944;
  double t7955;
  double t8032;
  double t8049;
  double t8080;
  double t8111;
  double t8116;
  double t8123;
  t7730 = Cos(var1[3]);
  t7883 = Cos(var1[5]);
  t7898 = Sin(var1[3]);
  t7891 = Sin(var1[4]);
  t7915 = Sin(var1[5]);
  t7791 = Sin(var1[12]);
  t7894 = t7730*t7883*t7891;
  t7916 = t7898*t7915;
  t7919 = t7894 + t7916;
  t7926 = Cos(var1[12]);
  t7969 = -1.*t7883*t7898;
  t7973 = t7730*t7891*t7915;
  t7974 = t7969 + t7973;
  t7742 = Cos(var1[4]);
  t7813 = 0.047*t7791;
  t7855 = 0. + t7813;
  t7931 = -1.*t7926;
  t7932 = 1. + t7931;
  t7944 = -0.047*t7932;
  t7955 = 0. + t7944;
  t8032 = t7883*t7898*t7891;
  t8049 = -1.*t7730*t7915;
  t8080 = t8032 + t8049;
  t8111 = t7730*t7883;
  t8116 = t7898*t7891*t7915;
  t8123 = t8111 + t8116;
  p_output1[0]=0. - 0.183*t7730*t7742 + t7855*t7919 + t7955*t7974 - 0.047*(t7791*t7919 + t7926*t7974) + var1[0];
  p_output1[1]=0. - 0.183*t7742*t7898 + t7855*t8080 + t7955*t8123 - 0.047*(t7791*t8080 + t7926*t8123) + var1[1];
  p_output1[2]=0. + t7742*t7855*t7883 + 0.183*t7891 - 0.047*(t7742*t7791*t7883 + t7742*t7915*t7926) + t7742*t7915*t7955 + var1[2];
}



void p_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
