/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint_src.h"

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
  double t1301;
  double t9790;
  double t9795;
  double t9791;
  double t9798;
  double t9763;
  double t9794;
  double t9802;
  double t9803;
  double t9806;
  double t9817;
  double t9818;
  double t9819;
  double t9737;
  double t9768;
  double t9769;
  double t9807;
  double t9812;
  double t9813;
  double t9816;
  double t9832;
  double t9834;
  double t9835;
  double t9838;
  double t9842;
  double t9843;
  t1301 = Cos(var1[3]);
  t9790 = Cos(var1[5]);
  t9795 = Sin(var1[3]);
  t9791 = Sin(var1[4]);
  t9798 = Sin(var1[5]);
  t9763 = Sin(var1[9]);
  t9794 = t1301*t9790*t9791;
  t9802 = t9795*t9798;
  t9803 = t9794 + t9802;
  t9806 = Cos(var1[9]);
  t9817 = -1.*t9790*t9795;
  t9818 = t1301*t9791*t9798;
  t9819 = t9817 + t9818;
  t9737 = Cos(var1[4]);
  t9768 = -0.047*t9763;
  t9769 = 0. + t9768;
  t9807 = -1.*t9806;
  t9812 = 1. + t9807;
  t9813 = 0.047*t9812;
  t9816 = 0. + t9813;
  t9832 = t9790*t9795*t9791;
  t9834 = -1.*t1301*t9798;
  t9835 = t9832 + t9834;
  t9838 = t1301*t9790;
  t9842 = t9795*t9791*t9798;
  t9843 = t9838 + t9842;
  p_output1[0]=0. + 0.183*t1301*t9737 + t9769*t9803 + t9816*t9819 + 0.047*(t9763*t9803 + t9806*t9819) + var1[0];
  p_output1[1]=0. + 0.183*t9737*t9795 + t9769*t9835 + t9816*t9843 + 0.047*(t9763*t9835 + t9806*t9843) + var1[1];
  p_output1[2]=0. + t9737*t9769*t9790 - 0.183*t9791 + 0.047*(t9737*t9763*t9790 + t9737*t9798*t9806) + t9737*t9798*t9816 + var1[2];
}



void p_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
