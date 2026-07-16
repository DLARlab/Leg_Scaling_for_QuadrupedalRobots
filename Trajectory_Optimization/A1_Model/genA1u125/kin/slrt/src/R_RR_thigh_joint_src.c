/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint_src.h"

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
  double t839;
  double t2825;
  double t2982;
  double t2861;
  double t3141;
  double t471;
  double t1849;
  double t2704;
  double t2728;
  double t3408;
  double t2873;
  double t3146;
  double t3271;
  double t3417;
  double t3459;
  double t3654;
  double t3754;
  double t3768;
  double t3797;
  double t3825;
  double t3832;
  double t3838;
  double t3303;
  double t3673;
  double t3688;
  double t3804;
  double t3854;
  double t3864;
  double t4040;
  double t4067;
  double t4074;
  t839 = Cos(var1[3]);
  t2825 = Cos(var1[5]);
  t2982 = Sin(var1[3]);
  t2861 = Sin(var1[4]);
  t3141 = Sin(var1[5]);
  t471 = Cos(var1[13]);
  t1849 = Cos(var1[4]);
  t2704 = Sin(var1[13]);
  t2728 = Cos(var1[12]);
  t3408 = Sin(var1[12]);
  t2873 = t839*t2825*t2861;
  t3146 = t2982*t3141;
  t3271 = t2873 + t3146;
  t3417 = -1.*t2825*t2982;
  t3459 = t839*t2861*t3141;
  t3654 = t3417 + t3459;
  t3754 = t2825*t2982*t2861;
  t3768 = -1.*t839*t3141;
  t3797 = t3754 + t3768;
  t3825 = t839*t2825;
  t3832 = t2982*t2861*t3141;
  t3838 = t3825 + t3832;
  t3303 = t2728*t3271;
  t3673 = -1.*t3408*t3654;
  t3688 = t3303 + t3673;
  t3804 = t2728*t3797;
  t3854 = -1.*t3408*t3838;
  t3864 = t3804 + t3854;
  t4040 = t2728*t1849*t2825;
  t4067 = -1.*t1849*t3408*t3141;
  t4074 = t4040 + t4067;
  p_output1[0]=-1.*t2704*t3688 + t1849*t471*t839;
  p_output1[1]=-1.*t2704*t3864 + t1849*t2982*t471;
  p_output1[2]=-1.*t2704*t4074 - 1.*t2861*t471;
  p_output1[3]=t3271*t3408 + t2728*t3654;
  p_output1[4]=t3408*t3797 + t2728*t3838;
  p_output1[5]=t1849*t2728*t3141 + t1849*t2825*t3408;
  p_output1[6]=t3688*t471 + t1849*t2704*t839;
  p_output1[7]=t1849*t2704*t2982 + t3864*t471;
  p_output1[8]=-1.*t2704*t2861 + t4074*t471;
}



void R_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
