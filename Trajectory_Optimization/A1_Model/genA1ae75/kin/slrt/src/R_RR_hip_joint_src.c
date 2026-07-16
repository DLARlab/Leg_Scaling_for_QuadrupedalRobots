/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint_src.h"

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
  double t7396;
  double t4427;
  double t8458;
  double t8340;
  double t8532;
  double t8558;
  double t8513;
  double t8567;
  double t8533;
  double t8559;
  double t8561;
  double t8573;
  double t8579;
  double t8582;
  double t8594;
  double t8617;
  double t8630;
  double t8643;
  double t8647;
  double t8653;
  t7396 = Cos(var1[4]);
  t4427 = Cos(var1[3]);
  t8458 = Sin(var1[4]);
  t8340 = Sin(var1[3]);
  t8532 = Cos(var1[5]);
  t8558 = Sin(var1[5]);
  t8513 = Sin(var1[12]);
  t8567 = Cos(var1[12]);
  t8533 = t4427*t8532*t8458;
  t8559 = t8340*t8558;
  t8561 = t8533 + t8559;
  t8573 = -1.*t8532*t8340;
  t8579 = t4427*t8458*t8558;
  t8582 = t8573 + t8579;
  t8594 = t8532*t8340*t8458;
  t8617 = -1.*t4427*t8558;
  t8630 = t8594 + t8617;
  t8643 = t4427*t8532;
  t8647 = t8340*t8458*t8558;
  t8653 = t8643 + t8647;
  p_output1[0]=t4427*t7396;
  p_output1[1]=t7396*t8340;
  p_output1[2]=-1.*t8458;
  p_output1[3]=t8513*t8561 + t8567*t8582;
  p_output1[4]=t8513*t8630 + t8567*t8653;
  p_output1[5]=t7396*t8513*t8532 + t7396*t8558*t8567;
  p_output1[6]=t8561*t8567 - 1.*t8513*t8582;
  p_output1[7]=t8567*t8630 - 1.*t8513*t8653;
  p_output1[8]=-1.*t7396*t8513*t8558 + t7396*t8532*t8567;
}



void R_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
