/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint_src.h"

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
  double t6759;
  double t1963;
  double t9604;
  double t9407;
  double t9684;
  double t9705;
  double t9674;
  double t9722;
  double t9697;
  double t9717;
  double t9719;
  double t9723;
  double t9724;
  double t9731;
  double t9734;
  double t9735;
  double t9736;
  double t9738;
  double t9740;
  double t9742;
  t6759 = Cos(var1[4]);
  t1963 = Cos(var1[3]);
  t9604 = Sin(var1[4]);
  t9407 = Sin(var1[3]);
  t9684 = Cos(var1[5]);
  t9705 = Sin(var1[5]);
  t9674 = Sin(var1[15]);
  t9722 = Cos(var1[15]);
  t9697 = t1963*t9684*t9604;
  t9717 = t9407*t9705;
  t9719 = t9697 + t9717;
  t9723 = -1.*t9684*t9407;
  t9724 = t1963*t9604*t9705;
  t9731 = t9723 + t9724;
  t9734 = t9684*t9407*t9604;
  t9735 = -1.*t1963*t9705;
  t9736 = t9734 + t9735;
  t9738 = t1963*t9684;
  t9740 = t9407*t9604*t9705;
  t9742 = t9738 + t9740;
  p_output1[0]=t1963*t6759;
  p_output1[1]=t6759*t9407;
  p_output1[2]=-1.*t9604;
  p_output1[3]=t9674*t9719 + t9722*t9731;
  p_output1[4]=t9674*t9736 + t9722*t9742;
  p_output1[5]=t6759*t9674*t9684 + t6759*t9705*t9722;
  p_output1[6]=t9719*t9722 - 1.*t9674*t9731;
  p_output1[7]=t9722*t9736 - 1.*t9674*t9742;
  p_output1[8]=-1.*t6759*t9674*t9705 + t6759*t9684*t9722;
}



void R_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
