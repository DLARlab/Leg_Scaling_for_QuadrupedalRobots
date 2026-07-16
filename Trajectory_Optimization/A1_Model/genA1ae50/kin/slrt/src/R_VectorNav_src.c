/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_src.h"

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
  double t2464;
  double t3831;
  double t1215;
  double t3855;
  double t3869;
  double t3883;
  t2464 = Cos(var1[4]);
  t3831 = Sin(var1[3]);
  t1215 = Cos(var1[3]);
  t3855 = Sin(var1[4]);
  t3869 = Cos(var1[5]);
  t3883 = Sin(var1[5]);
  p_output1[0]=t1215*t2464;
  p_output1[1]=t2464*t3831;
  p_output1[2]=-1.*t3855;
  p_output1[3]=-1.*t3831*t3869 + t1215*t3855*t3883;
  p_output1[4]=t1215*t3869 + t3831*t3855*t3883;
  p_output1[5]=t2464*t3883;
  p_output1[6]=t1215*t3855*t3869 + t3831*t3883;
  p_output1[7]=t3831*t3855*t3869 - 1.*t1215*t3883;
  p_output1[8]=t2464*t3869;
}



void R_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
