/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot_src.h"

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
  double t992;
  double t3499;
  double t4046;
  double t3575;
  double t4113;
  double t2926;
  double t3725;
  double t4151;
  double t4196;
  double t4773;
  double t5099;
  double t5196;
  double t5301;
  double t1044;
  double t5483;
  double t413;
  double t5539;
  double t5540;
  double t5581;
  double t5719;
  double t5742;
  double t5743;
  double t5789;
  double t5845;
  double t5859;
  double t5932;
  double t6015;
  double t6024;
  double t6030;
  double t490;
  double t644;
  double t926;
  double t958;
  double t3326;
  double t3380;
  double t4789;
  double t4831;
  double t4845;
  double t5022;
  double t6261;
  double t6274;
  double t6279;
  double t6330;
  double t6332;
  double t6345;
  double t5489;
  double t5520;
  double t5782;
  double t5814;
  double t5820;
  double t6607;
  double t6627;
  double t6637;
  double t5985;
  double t5996;
  double t6008;
  double t6727;
  double t6734;
  double t6773;
  double t6837;
  double t6849;
  double t6937;
  double t7482;
  double t7487;
  double t7488;
  double t7495;
  double t7497;
  double t7501;
  double t7519;
  double t7528;
  double t7531;
  t992 = Cos(var1[3]);
  t3499 = Cos(var1[5]);
  t4046 = Sin(var1[3]);
  t3575 = Sin(var1[4]);
  t4113 = Sin(var1[5]);
  t2926 = Sin(var1[15]);
  t3725 = t992*t3499*t3575;
  t4151 = t4046*t4113;
  t4196 = t3725 + t4151;
  t4773 = Cos(var1[15]);
  t5099 = -1.*t3499*t4046;
  t5196 = t992*t3575*t4113;
  t5301 = t5099 + t5196;
  t1044 = Cos(var1[4]);
  t5483 = Sin(var1[16]);
  t413 = Cos(var1[16]);
  t5539 = t4773*t4196;
  t5540 = -1.*t2926*t5301;
  t5581 = t5539 + t5540;
  t5719 = Cos(var1[17]);
  t5742 = -1.*t5719;
  t5743 = 1. + t5742;
  t5789 = Sin(var1[17]);
  t5845 = t992*t1044*t5483;
  t5859 = t413*t5581;
  t5932 = t5845 + t5859;
  t6015 = t413*t992*t1044;
  t6024 = -1.*t5483*t5581;
  t6030 = t6015 + t6024;
  t490 = -1.*t413;
  t644 = 1. + t490;
  t926 = -0.183*t644;
  t958 = 0. + t926;
  t3326 = -0.047*t2926;
  t3380 = 0. + t3326;
  t4789 = -1.*t4773;
  t4831 = 1. + t4789;
  t4845 = 0.047*t4831;
  t5022 = 0. + t4845;
  t6261 = t3499*t4046*t3575;
  t6274 = -1.*t992*t4113;
  t6279 = t6261 + t6274;
  t6330 = t992*t3499;
  t6332 = t4046*t3575*t4113;
  t6345 = t6330 + t6332;
  t5489 = -0.183*t5483;
  t5520 = 0. + t5489;
  t5782 = -0.15*t5743;
  t5814 = -0.183*t5789;
  t5820 = 0. + t5782 + t5814;
  t6607 = t4773*t6279;
  t6627 = -1.*t2926*t6345;
  t6637 = t6607 + t6627;
  t5985 = -0.183*t5743;
  t5996 = 0.15*t5789;
  t6008 = 0. + t5985 + t5996;
  t6727 = t1044*t5483*t4046;
  t6734 = t413*t6637;
  t6773 = t6727 + t6734;
  t6837 = t413*t1044*t4046;
  t6849 = -1.*t5483*t6637;
  t6937 = t6837 + t6849;
  t7482 = t4773*t1044*t3499;
  t7487 = -1.*t1044*t2926*t4113;
  t7488 = t7482 + t7487;
  t7495 = -1.*t5483*t3575;
  t7497 = t413*t7488;
  t7501 = t7495 + t7497;
  t7519 = -1.*t413*t3575;
  t7528 = -1.*t5483*t7488;
  t7531 = t7519 + t7528;
  p_output1[0]=0. + t3380*t4196 + t5022*t5301 + 0.13205*(t2926*t4196 + t4773*t5301) + t5520*t5581 + t5820*t5932 + t6008*t6030 - 0.183*(-1.*t5789*t5932 + t5719*t6030) - 0.3*(t5719*t5932 + t5789*t6030) + t1044*t958*t992 + var1[0];
  p_output1[1]=0. + t3380*t6279 + t5022*t6345 + 0.13205*(t2926*t6279 + t4773*t6345) + t5520*t6637 + t5820*t6773 + t6008*t6937 - 0.183*(-1.*t5789*t6773 + t5719*t6937) - 0.3*(t5719*t6773 + t5789*t6937) + t1044*t4046*t958 + var1[1];
  p_output1[2]=0. + t1044*t3380*t3499 + 0.13205*(t1044*t2926*t3499 + t1044*t4113*t4773) + t1044*t4113*t5022 + t5520*t7488 + t5820*t7501 + t6008*t7531 - 0.183*(-1.*t5789*t7501 + t5719*t7531) - 0.3*(t5719*t7501 + t5789*t7531) - 1.*t3575*t958 + var1[2];
}



void p_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
