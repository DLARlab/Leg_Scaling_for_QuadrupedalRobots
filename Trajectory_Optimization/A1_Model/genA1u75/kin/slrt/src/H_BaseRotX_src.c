/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:44 GMT-05:00
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
  double t999;
  double t5430;
  double t843;
  double t6106;
  double t6135;
  double t6153;
  t999 = Cos(var1[4]);
  t5430 = Sin(var1[3]);
  t843 = Cos(var1[3]);
  t6106 = Sin(var1[4]);
  t6135 = Cos(var1[5]);
  t6153 = Sin(var1[5]);
  p_output1[0]=t843*t999;
  p_output1[1]=t5430*t999;
  p_output1[2]=-1.*t6106;
  p_output1[3]=0;
  p_output1[4]=-1.*t5430*t6135 + t6106*t6153*t843;
  p_output1[5]=t5430*t6106*t6153 + t6135*t843;
  p_output1[6]=t6153*t999;
  p_output1[7]=0;
  p_output1[8]=t5430*t6153 + t6106*t6135*t843;
  p_output1[9]=t5430*t6106*t6135 - 1.*t6153*t843;
  p_output1[10]=t6135*t999;
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
