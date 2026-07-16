/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:13 GMT-05:00
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
  double t7322;
  double t8152;
  double t3745;
  double t8386;
  double t8415;
  double t8434;
  t7322 = Cos(var1[4]);
  t8152 = Sin(var1[3]);
  t3745 = Cos(var1[3]);
  t8386 = Sin(var1[4]);
  t8415 = Cos(var1[5]);
  t8434 = Sin(var1[5]);
  p_output1[0]=t3745*t7322;
  p_output1[1]=t7322*t8152;
  p_output1[2]=-1.*t8386;
  p_output1[3]=0;
  p_output1[4]=-1.*t8152*t8415 + t3745*t8386*t8434;
  p_output1[5]=t3745*t8415 + t8152*t8386*t8434;
  p_output1[6]=t7322*t8434;
  p_output1[7]=0;
  p_output1[8]=t3745*t8386*t8415 + t8152*t8434;
  p_output1[9]=t8152*t8386*t8415 - 1.*t3745*t8434;
  p_output1[10]=t7322*t8415;
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
