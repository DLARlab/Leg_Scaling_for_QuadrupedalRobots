/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot_src.h"

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
  double t2708;
  double t3806;
  double t3852;
  double t3847;
  double t3853;
  double t3472;
  double t3611;
  double t3850;
  double t3854;
  double t3870;
  double t3883;
  double t3909;
  double t3918;
  double t3923;
  double t3967;
  double t3986;
  double t4004;
  double t2766;
  double t4028;
  double t2413;
  double t4541;
  double t4547;
  double t4549;
  double t4584;
  double t4662;
  double t4670;
  double t4721;
  double t4778;
  double t4848;
  double t4343;
  double t5022;
  double t5053;
  double t5088;
  double t4291;
  double t4301;
  double t4310;
  double t3606;
  double t4145;
  double t4237;
  double t4958;
  double t4959;
  double t4978;
  double t4433;
  double t4873;
  double t4902;
  double t5261;
  double t5270;
  double t5292;
  double t5011;
  double t5110;
  double t5140;
  t2708 = Cos(var1[3]);
  t3806 = Cos(var1[5]);
  t3852 = Sin(var1[3]);
  t3847 = Sin(var1[4]);
  t3853 = Sin(var1[5]);
  t3472 = Cos(var1[7]);
  t3611 = Cos(var1[6]);
  t3850 = t2708*t3806*t3847;
  t3854 = t3852*t3853;
  t3870 = t3850 + t3854;
  t3883 = t3611*t3870;
  t3909 = -1.*t3806*t3852;
  t3918 = t2708*t3847*t3853;
  t3923 = t3909 + t3918;
  t3967 = Sin(var1[6]);
  t3986 = -1.*t3923*t3967;
  t4004 = t3883 + t3986;
  t2766 = Cos(var1[4]);
  t4028 = Sin(var1[7]);
  t2413 = Cos(var1[8]);
  t4541 = t3806*t3852*t3847;
  t4547 = -1.*t2708*t3853;
  t4549 = t4541 + t4547;
  t4584 = t3611*t4549;
  t4662 = t2708*t3806;
  t4670 = t3852*t3847*t3853;
  t4721 = t4662 + t4670;
  t4778 = -1.*t4721*t3967;
  t4848 = t4584 + t4778;
  t4343 = Sin(var1[8]);
  t5022 = t2766*t3806*t3611;
  t5053 = -1.*t2766*t3853*t3967;
  t5088 = t5022 + t5053;
  t4291 = t3472*t4004;
  t4301 = t2708*t2766*t4028;
  t4310 = t4291 + t4301;
  t3606 = t2708*t2766*t3472;
  t4145 = -1.*t4004*t4028;
  t4237 = t3606 + t4145;
  t4958 = t3472*t4848;
  t4959 = t2766*t3852*t4028;
  t4978 = t4958 + t4959;
  t4433 = t2766*t3472*t3852;
  t4873 = -1.*t4848*t4028;
  t4902 = t4433 + t4873;
  t5261 = t3472*t5088;
  t5270 = -1.*t3847*t4028;
  t5292 = t5261 + t5270;
  t5011 = -1.*t3472*t3847;
  t5110 = -1.*t5088*t4028;
  t5140 = t5011 + t5110;
  p_output1[0]=t2413*t4237 - 1.*t4310*t4343;
  p_output1[1]=t2413*t4902 - 1.*t4343*t4978;
  p_output1[2]=t2413*t5140 - 1.*t4343*t5292;
  p_output1[3]=t3611*t3923 + t3870*t3967;
  p_output1[4]=t3967*t4549 + t3611*t4721;
  p_output1[5]=t2766*t3611*t3853 + t2766*t3806*t3967;
  p_output1[6]=t2413*t4310 + t4237*t4343;
  p_output1[7]=t4343*t4902 + t2413*t4978;
  p_output1[8]=t4343*t5140 + t2413*t5292;
}



void R_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
