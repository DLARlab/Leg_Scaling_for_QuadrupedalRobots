/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint_src.h"

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
  double t5024;
  double t10093;
  double t10100;
  double t10096;
  double t10101;
  double t10067;
  double t10099;
  double t10109;
  double t10110;
  double t10114;
  double t10122;
  double t10123;
  double t10124;
  double t1047;
  double t7638;
  double t10133;
  double t10137;
  double t10138;
  double t10139;
  double t1862;
  double t3065;
  double t3841;
  double t4847;
  double t10089;
  double t10092;
  double t10115;
  double t10116;
  double t10117;
  double t10119;
  double t10161;
  double t10162;
  double t10164;
  double t10168;
  double t10169;
  double t10170;
  double t10134;
  double t10135;
  double t10177;
  double t10178;
  double t10182;
  double t10201;
  double t10203;
  double t10204;
  t5024 = Cos(var1[3]);
  t10093 = Cos(var1[5]);
  t10100 = Sin(var1[3]);
  t10096 = Sin(var1[4]);
  t10101 = Sin(var1[5]);
  t10067 = Sin(var1[9]);
  t10099 = t5024*t10093*t10096;
  t10109 = t10100*t10101;
  t10110 = t10099 + t10109;
  t10114 = Cos(var1[9]);
  t10122 = -1.*t10093*t10100;
  t10123 = t5024*t10096*t10101;
  t10124 = t10122 + t10123;
  t1047 = Cos(var1[10]);
  t7638 = Cos(var1[4]);
  t10133 = Sin(var1[10]);
  t10137 = t10114*t10110;
  t10138 = -1.*t10067*t10124;
  t10139 = t10137 + t10138;
  t1862 = -1.*t1047;
  t3065 = 1. + t1862;
  t3841 = 0.183*t3065;
  t4847 = 0. + t3841;
  t10089 = -0.047*t10067;
  t10092 = 0. + t10089;
  t10115 = -1.*t10114;
  t10116 = 1. + t10115;
  t10117 = 0.047*t10116;
  t10119 = 0. + t10117;
  t10161 = t10093*t10100*t10096;
  t10162 = -1.*t5024*t10101;
  t10164 = t10161 + t10162;
  t10168 = t5024*t10093;
  t10169 = t10100*t10096*t10101;
  t10170 = t10168 + t10169;
  t10134 = 0.183*t10133;
  t10135 = 0. + t10134;
  t10177 = t10114*t10164;
  t10178 = -1.*t10067*t10170;
  t10182 = t10177 + t10178;
  t10201 = t10114*t7638*t10093;
  t10203 = -1.*t7638*t10067*t10101;
  t10204 = t10201 + t10203;
  p_output1[0]=0. + t10092*t10110 + t10119*t10124 + 0.13205*(t10067*t10110 + t10114*t10124) + t10135*t10139 + t4847*t5024*t7638 + 0.183*(-1.*t10133*t10139 + t1047*t5024*t7638) + var1[0];
  p_output1[1]=0. + t10092*t10164 + t10119*t10170 + 0.13205*(t10067*t10164 + t10114*t10170) + t10135*t10182 + t10100*t4847*t7638 + 0.183*(-1.*t10133*t10182 + t10100*t1047*t7638) + var1[1];
  p_output1[2]=0. + t10135*t10204 + 0.183*(-1.*t10133*t10204 - 1.*t10096*t1047) - 1.*t10096*t4847 + t10092*t10093*t7638 + t10101*t10119*t7638 + 0.13205*(t10067*t10093*t7638 + t10101*t10114*t7638) + var1[2];
}



void p_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
