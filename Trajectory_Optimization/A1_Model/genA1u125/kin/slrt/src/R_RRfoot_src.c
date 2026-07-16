/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot_src.h"

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
  double t795;
  double t2791;
  double t2984;
  double t2899;
  double t3251;
  double t2326;
  double t1903;
  double t2117;
  double t2334;
  double t2906;
  double t3405;
  double t3445;
  double t3446;
  double t3450;
  double t3509;
  double t3534;
  double t3535;
  double t3591;
  double t3597;
  double t17;
  double t3689;
  double t3736;
  double t3790;
  double t3811;
  double t3840;
  double t3852;
  double t3857;
  double t3881;
  double t3886;
  double t3912;
  double t4033;
  double t4047;
  double t4078;
  double t2122;
  double t3636;
  double t3684;
  double t3697;
  double t3705;
  double t3710;
  double t3724;
  double t3939;
  double t3959;
  double t3966;
  double t3987;
  double t3992;
  double t4029;
  double t4082;
  double t4097;
  double t4105;
  double t4116;
  double t4134;
  t795 = Cos(var1[3]);
  t2791 = Cos(var1[5]);
  t2984 = Sin(var1[3]);
  t2899 = Sin(var1[4]);
  t3251 = Sin(var1[5]);
  t2326 = Cos(var1[13]);
  t1903 = Cos(var1[4]);
  t2117 = Sin(var1[13]);
  t2334 = Cos(var1[12]);
  t2906 = t795*t2791*t2899;
  t3405 = t2984*t3251;
  t3445 = t2906 + t3405;
  t3446 = t2334*t3445;
  t3450 = Sin(var1[12]);
  t3509 = -1.*t2791*t2984;
  t3534 = t795*t2899*t3251;
  t3535 = t3509 + t3534;
  t3591 = -1.*t3450*t3535;
  t3597 = t3446 + t3591;
  t17 = Sin(var1[14]);
  t3689 = Cos(var1[14]);
  t3736 = t2791*t2984*t2899;
  t3790 = -1.*t795*t3251;
  t3811 = t3736 + t3790;
  t3840 = t2334*t3811;
  t3852 = t795*t2791;
  t3857 = t2984*t2899*t3251;
  t3881 = t3852 + t3857;
  t3886 = -1.*t3450*t3881;
  t3912 = t3840 + t3886;
  t4033 = t2334*t1903*t2791;
  t4047 = -1.*t1903*t3450*t3251;
  t4078 = t4033 + t4047;
  t2122 = t795*t1903*t2117;
  t3636 = t2326*t3597;
  t3684 = t2122 + t3636;
  t3697 = t2326*t795*t1903;
  t3705 = -1.*t2117*t3597;
  t3710 = t3697 + t3705;
  t3724 = t1903*t2117*t2984;
  t3939 = t2326*t3912;
  t3959 = t3724 + t3939;
  t3966 = t2326*t1903*t2984;
  t3987 = -1.*t2117*t3912;
  t3992 = t3966 + t3987;
  t4029 = -1.*t2117*t2899;
  t4082 = t2326*t4078;
  t4097 = t4029 + t4082;
  t4105 = -1.*t2326*t2899;
  t4116 = -1.*t2117*t4078;
  t4134 = t4105 + t4116;
  p_output1[0]=-1.*t17*t3684 + t3689*t3710;
  p_output1[1]=-1.*t17*t3959 + t3689*t3992;
  p_output1[2]=-1.*t17*t4097 + t3689*t4134;
  p_output1[3]=t3445*t3450 + t2334*t3535;
  p_output1[4]=t3450*t3811 + t2334*t3881;
  p_output1[5]=t1903*t2334*t3251 + t1903*t2791*t3450;
  p_output1[6]=t3684*t3689 + t17*t3710;
  p_output1[7]=t3689*t3959 + t17*t3992;
  p_output1[8]=t3689*t4097 + t17*t4134;
}



void R_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
