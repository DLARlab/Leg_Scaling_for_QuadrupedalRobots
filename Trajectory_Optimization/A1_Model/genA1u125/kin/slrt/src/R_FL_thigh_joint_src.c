/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint_src.h"

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
  double t297;
  double t3545;
  double t4123;
  double t3701;
  double t4149;
  double t248;
  double t298;
  double t1151;
  double t3478;
  double t4192;
  double t3743;
  double t4154;
  double t4165;
  double t4195;
  double t4198;
  double t4272;
  double t4969;
  double t4974;
  double t4993;
  double t5021;
  double t5036;
  double t5058;
  double t4189;
  double t4280;
  double t4288;
  double t4999;
  double t5099;
  double t5125;
  double t5347;
  double t5491;
  double t5561;
  t297 = Cos(var1[3]);
  t3545 = Cos(var1[5]);
  t4123 = Sin(var1[3]);
  t3701 = Sin(var1[4]);
  t4149 = Sin(var1[5]);
  t248 = Cos(var1[10]);
  t298 = Cos(var1[4]);
  t1151 = Sin(var1[10]);
  t3478 = Cos(var1[9]);
  t4192 = Sin(var1[9]);
  t3743 = t297*t3545*t3701;
  t4154 = t4123*t4149;
  t4165 = t3743 + t4154;
  t4195 = -1.*t3545*t4123;
  t4198 = t297*t3701*t4149;
  t4272 = t4195 + t4198;
  t4969 = t3545*t4123*t3701;
  t4974 = -1.*t297*t4149;
  t4993 = t4969 + t4974;
  t5021 = t297*t3545;
  t5036 = t4123*t3701*t4149;
  t5058 = t5021 + t5036;
  t4189 = t3478*t4165;
  t4280 = -1.*t4192*t4272;
  t4288 = t4189 + t4280;
  t4999 = t3478*t4993;
  t5099 = -1.*t4192*t5058;
  t5125 = t4999 + t5099;
  t5347 = t3478*t298*t3545;
  t5491 = -1.*t298*t4192*t4149;
  t5561 = t5347 + t5491;
  p_output1[0]=t248*t297*t298 - 1.*t1151*t4288;
  p_output1[1]=t248*t298*t4123 - 1.*t1151*t5125;
  p_output1[2]=-1.*t248*t3701 - 1.*t1151*t5561;
  p_output1[3]=t4165*t4192 + t3478*t4272;
  p_output1[4]=t4192*t4993 + t3478*t5058;
  p_output1[5]=t298*t3478*t4149 + t298*t3545*t4192;
  p_output1[6]=t1151*t297*t298 + t248*t4288;
  p_output1[7]=t1151*t298*t4123 + t248*t5125;
  p_output1[8]=-1.*t1151*t3701 + t248*t5561;
}



void R_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
