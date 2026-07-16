/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint_src.h"

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
  double t1157;
  double t804;
  double t2030;
  double t1795;
  double t2779;
  double t2873;
  double t2728;
  double t3141;
  double t2785;
  double t2876;
  double t2914;
  double t3146;
  double t3173;
  double t3234;
  double t3303;
  double t3348;
  double t3408;
  double t3459;
  double t3555;
  double t3603;
  double t3039;
  double t3260;
  double t3271;
  double t4068;
  double t4074;
  double t4216;
  double t4269;
  double t4287;
  double t4342;
  double t3417;
  double t3654;
  double t3673;
  double t3688;
  double t3754;
  double t3804;
  t1157 = Cos(var1[4]);
  t804 = Cos(var1[3]);
  t2030 = Sin(var1[4]);
  t1795 = Sin(var1[3]);
  t2779 = Cos(var1[5]);
  t2873 = Sin(var1[5]);
  t2728 = Sin(var1[9]);
  t3141 = Cos(var1[9]);
  t2785 = t804*t2779*t2030;
  t2876 = t1795*t2873;
  t2914 = t2785 + t2876;
  t3146 = -1.*t2779*t1795;
  t3173 = t804*t2030*t2873;
  t3234 = t3146 + t3173;
  t3303 = t2779*t1795*t2030;
  t3348 = -1.*t804*t2873;
  t3408 = t3303 + t3348;
  t3459 = t804*t2779;
  t3555 = t1795*t2030*t2873;
  t3603 = t3459 + t3555;
  t3039 = t2728*t2914;
  t3260 = t3141*t3234;
  t3271 = t3039 + t3260;
  t4068 = -0.047*t2728;
  t4074 = 0. + t4068;
  t4216 = -1.*t3141;
  t4269 = 1. + t4216;
  t4287 = 0.047*t4269;
  t4342 = 0. + t4287;
  t3417 = t2728*t3408;
  t3654 = t3141*t3603;
  t3673 = t3417 + t3654;
  t3688 = t1157*t2779*t2728;
  t3754 = t3141*t1157*t2873;
  t3804 = t3688 + t3754;
  p_output1[0]=t1157*t804;
  p_output1[1]=t1157*t1795;
  p_output1[2]=-1.*t2030;
  p_output1[3]=0.;
  p_output1[4]=t3271;
  p_output1[5]=t3673;
  p_output1[6]=t3804;
  p_output1[7]=0.;
  p_output1[8]=t2914*t3141 - 1.*t2728*t3234;
  p_output1[9]=t3141*t3408 - 1.*t2728*t3603;
  p_output1[10]=-1.*t1157*t2728*t2873 + t1157*t2779*t3141;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.047*t3271 + t2914*t4074 + t3234*t4342 + 0.183*t1157*t804 + var1[0];
  p_output1[13]=0. + 0.183*t1157*t1795 + 0.047*t3673 + t3408*t4074 + t3603*t4342 + var1[1];
  p_output1[14]=0. - 0.183*t2030 + 0.047*t3804 + t1157*t2779*t4074 + t1157*t2873*t4342 + var1[2];
  p_output1[15]=1.;
}



void H_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
