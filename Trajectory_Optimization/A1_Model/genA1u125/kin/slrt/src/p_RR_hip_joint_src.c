/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:31 GMT-05:00
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
  double t408;
  double t1079;
  double t2323;
  double t1109;
  double t2579;
  double t756;
  double t1855;
  double t2733;
  double t3895;
  double t5154;
  double t5692;
  double t5787;
  double t5804;
  double t554;
  double t918;
  double t1031;
  double t5448;
  double t5506;
  double t5662;
  double t5683;
  double t5867;
  double t5868;
  double t5878;
  double t5921;
  double t5931;
  double t5949;
  t408 = Cos(var1[3]);
  t1079 = Cos(var1[5]);
  t2323 = Sin(var1[3]);
  t1109 = Sin(var1[4]);
  t2579 = Sin(var1[5]);
  t756 = Sin(var1[12]);
  t1855 = t408*t1079*t1109;
  t2733 = t2323*t2579;
  t3895 = t1855 + t2733;
  t5154 = Cos(var1[12]);
  t5692 = -1.*t1079*t2323;
  t5787 = t408*t1109*t2579;
  t5804 = t5692 + t5787;
  t554 = Cos(var1[4]);
  t918 = 0.047*t756;
  t1031 = 0. + t918;
  t5448 = -1.*t5154;
  t5506 = 1. + t5448;
  t5662 = -0.047*t5506;
  t5683 = 0. + t5662;
  t5867 = t1079*t2323*t1109;
  t5868 = -1.*t408*t2579;
  t5878 = t5867 + t5868;
  t5921 = t408*t1079;
  t5931 = t2323*t1109*t2579;
  t5949 = t5921 + t5931;
  p_output1[0]=0. + t1031*t3895 - 0.183*t408*t554 + t5683*t5804 - 0.047*(t5154*t5804 + t3895*t756) + var1[0];
  p_output1[1]=0. - 0.183*t2323*t554 + t1031*t5878 + t5683*t5949 - 0.047*(t5154*t5949 + t5878*t756) + var1[1];
  p_output1[2]=0. + 0.183*t1109 + t1031*t1079*t554 + t2579*t554*t5683 - 0.047*(t2579*t5154*t554 + t1079*t554*t756) + var1[2];
}



void p_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
