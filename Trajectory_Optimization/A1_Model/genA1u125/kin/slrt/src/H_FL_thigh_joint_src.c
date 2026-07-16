/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint_src.h"

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
  double t256;
  double t413;
  double t564;
  double t559;
  double t592;
  double t221;
  double t389;
  double t399;
  double t400;
  double t1119;
  double t563;
  double t755;
  double t807;
  double t1150;
  double t1171;
  double t1265;
  double t1739;
  double t1838;
  double t1865;
  double t2001;
  double t2256;
  double t2366;
  double t967;
  double t1329;
  double t1506;
  double t1868;
  double t2378;
  double t2513;
  double t2636;
  double t2640;
  double t2696;
  double t2831;
  double t2848;
  double t2945;
  double t396;
  double t1516;
  double t1570;
  double t4004;
  double t4007;
  double t4032;
  double t4083;
  double t4100;
  double t4114;
  double t4128;
  double t4145;
  double t4149;
  double t4154;
  double t3005;
  double t3067;
  double t3126;
  double t4184;
  double t4189;
  double t1591;
  double t2541;
  double t2576;
  double t3205;
  double t3370;
  double t3415;
  double t2585;
  double t2722;
  double t2727;
  t256 = Cos(var1[3]);
  t413 = Cos(var1[5]);
  t564 = Sin(var1[3]);
  t559 = Sin(var1[4]);
  t592 = Sin(var1[5]);
  t221 = Cos(var1[10]);
  t389 = Cos(var1[4]);
  t399 = Sin(var1[10]);
  t400 = Cos(var1[9]);
  t1119 = Sin(var1[9]);
  t563 = t256*t413*t559;
  t755 = t564*t592;
  t807 = t563 + t755;
  t1150 = -1.*t413*t564;
  t1171 = t256*t559*t592;
  t1265 = t1150 + t1171;
  t1739 = t413*t564*t559;
  t1838 = -1.*t256*t592;
  t1865 = t1739 + t1838;
  t2001 = t256*t413;
  t2256 = t564*t559*t592;
  t2366 = t2001 + t2256;
  t967 = t400*t807;
  t1329 = -1.*t1119*t1265;
  t1506 = t967 + t1329;
  t1868 = t400*t1865;
  t2378 = -1.*t1119*t2366;
  t2513 = t1868 + t2378;
  t2636 = t400*t389*t413;
  t2640 = -1.*t389*t1119*t592;
  t2696 = t2636 + t2640;
  t2831 = t1119*t807;
  t2848 = t400*t1265;
  t2945 = t2831 + t2848;
  t396 = t221*t256*t389;
  t1516 = -1.*t399*t1506;
  t1570 = t396 + t1516;
  t4004 = -1.*t221;
  t4007 = 1. + t4004;
  t4032 = 0.183*t4007;
  t4083 = 0. + t4032;
  t4100 = -0.047*t1119;
  t4114 = 0. + t4100;
  t4128 = -1.*t400;
  t4145 = 1. + t4128;
  t4149 = 0.047*t4145;
  t4154 = 0. + t4149;
  t3005 = t1119*t1865;
  t3067 = t400*t2366;
  t3126 = t3005 + t3067;
  t4184 = 0.183*t399;
  t4189 = 0. + t4184;
  t1591 = t221*t389*t564;
  t2541 = -1.*t399*t2513;
  t2576 = t1591 + t2541;
  t3205 = t389*t413*t1119;
  t3370 = t400*t389*t592;
  t3415 = t3205 + t3370;
  t2585 = -1.*t221*t559;
  t2722 = -1.*t399*t2696;
  t2727 = t2585 + t2722;
  p_output1[0]=t1570;
  p_output1[1]=t2576;
  p_output1[2]=t2727;
  p_output1[3]=0.;
  p_output1[4]=t2945;
  p_output1[5]=t3126;
  p_output1[6]=t3415;
  p_output1[7]=0.;
  p_output1[8]=t1506*t221 + t256*t389*t399;
  p_output1[9]=t221*t2513 + t389*t399*t564;
  p_output1[10]=t221*t2696 - 1.*t399*t559;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1570 + 0.15331*t2945 + t256*t389*t4083 + t1265*t4154 + t1506*t4189 + t4114*t807 + var1[0];
  p_output1[13]=0. + 0.183*t2576 + 0.15331*t3126 + t1865*t4114 + t2366*t4154 + t2513*t4189 + t389*t4083*t564 + var1[1];
  p_output1[14]=0. + 0.183*t2727 + 0.15331*t3415 + t389*t4114*t413 + t2696*t4189 - 1.*t4083*t559 + t389*t4154*t592 + var1[2];
  p_output1[15]=1.;
}



void H_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
