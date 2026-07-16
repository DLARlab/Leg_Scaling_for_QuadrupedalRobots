/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_hip_joint_src.h"

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
  double t5206;
  double t5744;
  double t5865;
  double t5840;
  double t5902;
  double t5630;
  double t5849;
  double t5909;
  double t5957;
  double t5961;
  double t6113;
  double t6126;
  double t6138;
  double t5319;
  double t5635;
  double t5669;
  double t5987;
  double t5993;
  double t6017;
  double t6100;
  double t6233;
  double t6234;
  double t6240;
  double t6252;
  double t6258;
  double t6259;
  t5206 = Cos(var1[3]);
  t5744 = Cos(var1[5]);
  t5865 = Sin(var1[3]);
  t5840 = Sin(var1[4]);
  t5902 = Sin(var1[5]);
  t5630 = Sin(var1[15]);
  t5849 = t5206*t5744*t5840;
  t5909 = t5865*t5902;
  t5957 = t5849 + t5909;
  t5961 = Cos(var1[15]);
  t6113 = -1.*t5744*t5865;
  t6126 = t5206*t5840*t5902;
  t6138 = t6113 + t6126;
  t5319 = Cos(var1[4]);
  t5635 = -0.047*t5630;
  t5669 = 0. + t5635;
  t5987 = -1.*t5961;
  t5993 = 1. + t5987;
  t6017 = 0.047*t5993;
  t6100 = 0. + t6017;
  t6233 = t5744*t5865*t5840;
  t6234 = -1.*t5206*t5902;
  t6240 = t6233 + t6234;
  t6252 = t5206*t5744;
  t6258 = t5865*t5840*t5902;
  t6259 = t6252 + t6258;
  p_output1[0]=0. - 0.183*t5206*t5319 + t5669*t5957 + t6100*t6138 + 0.047*(t5630*t5957 + t5961*t6138) + var1[0];
  p_output1[1]=0. - 0.183*t5319*t5865 + t5669*t6240 + t6100*t6259 + 0.047*(t5630*t6240 + t5961*t6259) + var1[1];
  p_output1[2]=0. + t5319*t5669*t5744 + 0.183*t5840 + 0.047*(t5319*t5630*t5744 + t5319*t5902*t5961) + t5319*t5902*t6100 + var1[2];
}



void p_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
