/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:19 GMT-05:00
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
  double t1364;
  double t1596;
  double t131;
  double t3570;
  double t4805;
  double t5062;
  double t4688;
  double t5877;
  double t5812;
  double t5827;
  double t5850;
  double t4911;
  double t5738;
  double t5760;
  double t6062;
  double t6071;
  double t6075;
  double t5965;
  double t5968;
  double t6004;
  t1364 = Cos(var1[4]);
  t1596 = Sin(var1[3]);
  t131 = Cos(var1[3]);
  t3570 = Sin(var1[4]);
  t4805 = Cos(var1[5]);
  t5062 = Sin(var1[5]);
  t4688 = Cos(var1[6]);
  t5877 = Sin(var1[6]);
  t5812 = t131*t4805*t3570;
  t5827 = t1596*t5062;
  t5850 = t5812 + t5827;
  t4911 = -1.*t4805*t1596;
  t5738 = t131*t3570*t5062;
  t5760 = t4911 + t5738;
  t6062 = t4805*t1596*t3570;
  t6071 = -1.*t131*t5062;
  t6075 = t6062 + t6071;
  t5965 = t131*t4805;
  t5968 = t1596*t3570*t5062;
  t6004 = t5965 + t5968;
  p_output1[0]=t131*t1364;
  p_output1[1]=t1364*t1596;
  p_output1[2]=-1.*t3570;
  p_output1[3]=t4688*t5760 + t5850*t5877;
  p_output1[4]=t4688*t6004 + t5877*t6075;
  p_output1[5]=t1364*t4688*t5062 + t1364*t4805*t5877;
  p_output1[6]=t4688*t5850 - 1.*t5760*t5877;
  p_output1[7]=-1.*t5877*t6004 + t4688*t6075;
  p_output1[8]=t1364*t4688*t4805 - 1.*t1364*t5062*t5877;
}



void R_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
