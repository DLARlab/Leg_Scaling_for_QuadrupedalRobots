/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:51 GMT-05:00
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
  double t1651;
  double t5672;
  double t1446;
  double t7365;
  double t7499;
  double t7599;
  t1651 = Cos(var1[4]);
  t5672 = Sin(var1[3]);
  t1446 = Cos(var1[3]);
  t7365 = Sin(var1[4]);
  t7499 = Cos(var1[5]);
  t7599 = Sin(var1[5]);
  p_output1[0]=t1446*t1651;
  p_output1[1]=t1651*t5672;
  p_output1[2]=-1.*t7365;
  p_output1[3]=-1.*t5672*t7499 + t1446*t7365*t7599;
  p_output1[4]=t1446*t7499 + t5672*t7365*t7599;
  p_output1[5]=t1651*t7599;
  p_output1[6]=t1446*t7365*t7499 + t5672*t7599;
  p_output1[7]=t5672*t7365*t7499 - 1.*t1446*t7599;
  p_output1[8]=t1651*t7499;
}



void R_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
