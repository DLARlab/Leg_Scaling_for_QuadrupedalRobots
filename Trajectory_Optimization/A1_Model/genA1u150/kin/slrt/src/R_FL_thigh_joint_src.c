/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:46 GMT-05:00
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
  double t919;
  double t3672;
  double t4419;
  double t3747;
  double t4945;
  double t157;
  double t1237;
  double t1623;
  double t2007;
  double t5280;
  double t3809;
  double t5029;
  double t5031;
  double t5287;
  double t5382;
  double t5387;
  double t5520;
  double t5532;
  double t5540;
  double t5575;
  double t5587;
  double t5589;
  double t5178;
  double t5449;
  double t5472;
  double t5570;
  double t5590;
  double t5592;
  double t5650;
  double t5680;
  double t5720;
  t919 = Cos(var1[3]);
  t3672 = Cos(var1[5]);
  t4419 = Sin(var1[3]);
  t3747 = Sin(var1[4]);
  t4945 = Sin(var1[5]);
  t157 = Cos(var1[10]);
  t1237 = Cos(var1[4]);
  t1623 = Sin(var1[10]);
  t2007 = Cos(var1[9]);
  t5280 = Sin(var1[9]);
  t3809 = t919*t3672*t3747;
  t5029 = t4419*t4945;
  t5031 = t3809 + t5029;
  t5287 = -1.*t3672*t4419;
  t5382 = t919*t3747*t4945;
  t5387 = t5287 + t5382;
  t5520 = t3672*t4419*t3747;
  t5532 = -1.*t919*t4945;
  t5540 = t5520 + t5532;
  t5575 = t919*t3672;
  t5587 = t4419*t3747*t4945;
  t5589 = t5575 + t5587;
  t5178 = t2007*t5031;
  t5449 = -1.*t5280*t5387;
  t5472 = t5178 + t5449;
  t5570 = t2007*t5540;
  t5590 = -1.*t5280*t5589;
  t5592 = t5570 + t5590;
  t5650 = t2007*t1237*t3672;
  t5680 = -1.*t1237*t5280*t4945;
  t5720 = t5650 + t5680;
  p_output1[0]=-1.*t1623*t5472 + t1237*t157*t919;
  p_output1[1]=t1237*t157*t4419 - 1.*t1623*t5592;
  p_output1[2]=-1.*t157*t3747 - 1.*t1623*t5720;
  p_output1[3]=t5031*t5280 + t2007*t5387;
  p_output1[4]=t5280*t5540 + t2007*t5589;
  p_output1[5]=t1237*t2007*t4945 + t1237*t3672*t5280;
  p_output1[6]=t157*t5472 + t1237*t1623*t919;
  p_output1[7]=t1237*t1623*t4419 + t157*t5592;
  p_output1[8]=-1.*t1623*t3747 + t157*t5720;
}



void R_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
