/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_hip_joint_src.h"

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
  double t867;
  double t470;
  double t3695;
  double t2475;
  double t3984;
  double t4067;
  double t3854;
  double t4475;
  double t4047;
  double t4287;
  double t4342;
  double t4634;
  double t4652;
  double t4674;
  double t4764;
  double t4780;
  double t4794;
  double t4857;
  double t5098;
  double t5109;
  t867 = Cos(var1[4]);
  t470 = Cos(var1[3]);
  t3695 = Sin(var1[4]);
  t2475 = Sin(var1[3]);
  t3984 = Cos(var1[5]);
  t4067 = Sin(var1[5]);
  t3854 = Sin(var1[9]);
  t4475 = Cos(var1[9]);
  t4047 = t470*t3984*t3695;
  t4287 = t2475*t4067;
  t4342 = t4047 + t4287;
  t4634 = -1.*t3984*t2475;
  t4652 = t470*t3695*t4067;
  t4674 = t4634 + t4652;
  t4764 = t3984*t2475*t3695;
  t4780 = -1.*t470*t4067;
  t4794 = t4764 + t4780;
  t4857 = t470*t3984;
  t5098 = t2475*t3695*t4067;
  t5109 = t4857 + t5098;
  p_output1[0]=t470*t867;
  p_output1[1]=t2475*t867;
  p_output1[2]=-1.*t3695;
  p_output1[3]=t3854*t4342 + t4475*t4674;
  p_output1[4]=t3854*t4794 + t4475*t5109;
  p_output1[5]=t3854*t3984*t867 + t4067*t4475*t867;
  p_output1[6]=t4342*t4475 - 1.*t3854*t4674;
  p_output1[7]=t4475*t4794 - 1.*t3854*t5109;
  p_output1[8]=-1.*t3854*t4067*t867 + t3984*t4475*t867;
}



void R_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
