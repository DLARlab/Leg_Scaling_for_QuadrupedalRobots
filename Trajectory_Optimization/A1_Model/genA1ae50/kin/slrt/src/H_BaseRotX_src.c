/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_BaseRotX_src.h"

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
  double t309;
  double t330;
  double t285;
  double t358;
  double t378;
  double t384;
  t309 = Cos(var1[4]);
  t330 = Sin(var1[3]);
  t285 = Cos(var1[3]);
  t358 = Sin(var1[4]);
  t378 = Cos(var1[5]);
  t384 = Sin(var1[5]);
  p_output1[0]=t285*t309;
  p_output1[1]=t309*t330;
  p_output1[2]=-1.*t358;
  p_output1[3]=0;
  p_output1[4]=-1.*t330*t378 + t285*t358*t384;
  p_output1[5]=t285*t378 + t330*t358*t384;
  p_output1[6]=t309*t384;
  p_output1[7]=0;
  p_output1[8]=t285*t358*t378 + t330*t384;
  p_output1[9]=t330*t358*t378 - 1.*t285*t384;
  p_output1[10]=t309*t378;
  p_output1[11]=0;
  p_output1[12]=var1[0];
  p_output1[13]=var1[1];
  p_output1[14]=var1[2];
  p_output1[15]=1.;
}



void H_BaseRotX_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
