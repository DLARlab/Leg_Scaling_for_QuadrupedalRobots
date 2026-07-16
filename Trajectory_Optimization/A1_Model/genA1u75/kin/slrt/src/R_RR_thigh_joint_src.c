/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint_src.h"

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
  double t2128;
  double t5128;
  double t5918;
  double t5522;
  double t5924;
  double t1825;
  double t2130;
  double t4199;
  double t4327;
  double t5996;
  double t5848;
  double t5948;
  double t5955;
  double t7336;
  double t7361;
  double t7385;
  double t7637;
  double t7759;
  double t7763;
  double t7837;
  double t7841;
  double t7862;
  double t5991;
  double t7486;
  double t7491;
  double t7835;
  double t7870;
  double t7910;
  double t8007;
  double t8019;
  double t8032;
  t2128 = Cos(var1[3]);
  t5128 = Cos(var1[5]);
  t5918 = Sin(var1[3]);
  t5522 = Sin(var1[4]);
  t5924 = Sin(var1[5]);
  t1825 = Cos(var1[13]);
  t2130 = Cos(var1[4]);
  t4199 = Sin(var1[13]);
  t4327 = Cos(var1[12]);
  t5996 = Sin(var1[12]);
  t5848 = t2128*t5128*t5522;
  t5948 = t5918*t5924;
  t5955 = t5848 + t5948;
  t7336 = -1.*t5128*t5918;
  t7361 = t2128*t5522*t5924;
  t7385 = t7336 + t7361;
  t7637 = t5128*t5918*t5522;
  t7759 = -1.*t2128*t5924;
  t7763 = t7637 + t7759;
  t7837 = t2128*t5128;
  t7841 = t5918*t5522*t5924;
  t7862 = t7837 + t7841;
  t5991 = t4327*t5955;
  t7486 = -1.*t5996*t7385;
  t7491 = t5991 + t7486;
  t7835 = t4327*t7763;
  t7870 = -1.*t5996*t7862;
  t7910 = t7835 + t7870;
  t8007 = t4327*t2130*t5128;
  t8019 = -1.*t2130*t5996*t5924;
  t8032 = t8007 + t8019;
  p_output1[0]=t1825*t2128*t2130 - 1.*t4199*t7491;
  p_output1[1]=t1825*t2130*t5918 - 1.*t4199*t7910;
  p_output1[2]=-1.*t1825*t5522 - 1.*t4199*t8032;
  p_output1[3]=t5955*t5996 + t4327*t7385;
  p_output1[4]=t5996*t7763 + t4327*t7862;
  p_output1[5]=t2130*t4327*t5924 + t2130*t5128*t5996;
  p_output1[6]=t2128*t2130*t4199 + t1825*t7491;
  p_output1[7]=t2130*t4199*t5918 + t1825*t7910;
  p_output1[8]=-1.*t4199*t5522 + t1825*t8032;
}



void R_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
