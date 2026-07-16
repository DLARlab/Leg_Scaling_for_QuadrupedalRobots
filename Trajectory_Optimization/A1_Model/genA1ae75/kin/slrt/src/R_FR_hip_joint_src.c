/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint_src.h"

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
  double t1871;
  double t2077;
  double t1817;
  double t2210;
  double t2428;
  double t2458;
  double t2370;
  double t2519;
  double t2488;
  double t2489;
  double t2490;
  double t2442;
  double t2467;
  double t2474;
  double t2543;
  double t2564;
  double t2574;
  double t2534;
  double t2536;
  double t2537;
  t1871 = Cos(var1[4]);
  t2077 = Sin(var1[3]);
  t1817 = Cos(var1[3]);
  t2210 = Sin(var1[4]);
  t2428 = Cos(var1[5]);
  t2458 = Sin(var1[5]);
  t2370 = Cos(var1[6]);
  t2519 = Sin(var1[6]);
  t2488 = t1817*t2428*t2210;
  t2489 = t2077*t2458;
  t2490 = t2488 + t2489;
  t2442 = -1.*t2428*t2077;
  t2467 = t1817*t2210*t2458;
  t2474 = t2442 + t2467;
  t2543 = t2428*t2077*t2210;
  t2564 = -1.*t1817*t2458;
  t2574 = t2543 + t2564;
  t2534 = t1817*t2428;
  t2536 = t2077*t2210*t2458;
  t2537 = t2534 + t2536;
  p_output1[0]=t1817*t1871;
  p_output1[1]=t1871*t2077;
  p_output1[2]=-1.*t2210;
  p_output1[3]=t2370*t2474 + t2490*t2519;
  p_output1[4]=t2370*t2537 + t2519*t2574;
  p_output1[5]=t1871*t2370*t2458 + t1871*t2428*t2519;
  p_output1[6]=t2370*t2490 - 1.*t2474*t2519;
  p_output1[7]=-1.*t2519*t2537 + t2370*t2574;
  p_output1[8]=t1871*t2370*t2428 - 1.*t1871*t2458*t2519;
}



void R_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
