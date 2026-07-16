/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_src.h"

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
  double t1016;
  double t1571;
  double t861;
  double t2394;
  double t3264;
  double t3613;
  t1016 = Cos(var1[4]);
  t1571 = Sin(var1[3]);
  t861 = Cos(var1[3]);
  t2394 = Sin(var1[4]);
  t3264 = Cos(var1[5]);
  t3613 = Sin(var1[5]);
  p_output1[0]=t1016*t861;
  p_output1[1]=t1016*t1571;
  p_output1[2]=-1.*t2394;
  p_output1[3]=0;
  p_output1[4]=-1.*t1571*t3264 + t2394*t3613*t861;
  p_output1[5]=t1571*t2394*t3613 + t3264*t861;
  p_output1[6]=t1016*t3613;
  p_output1[7]=0;
  p_output1[8]=t1571*t3613 + t2394*t3264*t861;
  p_output1[9]=t1571*t2394*t3264 - 1.*t3613*t861;
  p_output1[10]=t1016*t3264;
  p_output1[11]=0;
  p_output1[12]=var1[0];
  p_output1[13]=var1[1];
  p_output1[14]=var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
