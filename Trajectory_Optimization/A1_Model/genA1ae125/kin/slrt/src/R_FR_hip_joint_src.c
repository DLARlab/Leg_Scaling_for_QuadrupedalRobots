/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:05 GMT-05:00
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
  double t791;
  double t897;
  double t737;
  double t927;
  double t989;
  double t992;
  double t973;
  double t1014;
  double t1008;
  double t1010;
  double t1013;
  double t991;
  double t996;
  double t998;
  double t1032;
  double t1033;
  double t1036;
  double t1024;
  double t1026;
  double t1027;
  t791 = Cos(var1[4]);
  t897 = Sin(var1[3]);
  t737 = Cos(var1[3]);
  t927 = Sin(var1[4]);
  t989 = Cos(var1[5]);
  t992 = Sin(var1[5]);
  t973 = Cos(var1[6]);
  t1014 = Sin(var1[6]);
  t1008 = t737*t989*t927;
  t1010 = t897*t992;
  t1013 = t1008 + t1010;
  t991 = -1.*t989*t897;
  t996 = t737*t927*t992;
  t998 = t991 + t996;
  t1032 = t989*t897*t927;
  t1033 = -1.*t737*t992;
  t1036 = t1032 + t1033;
  t1024 = t737*t989;
  t1026 = t897*t927*t992;
  t1027 = t1024 + t1026;
  p_output1[0]=t737*t791;
  p_output1[1]=t791*t897;
  p_output1[2]=-1.*t927;
  p_output1[3]=t1013*t1014 + t973*t998;
  p_output1[4]=t1014*t1036 + t1027*t973;
  p_output1[5]=t1014*t791*t989 + t791*t973*t992;
  p_output1[6]=t1013*t973 - 1.*t1014*t998;
  p_output1[7]=-1.*t1014*t1027 + t1036*t973;
  p_output1[8]=t791*t973*t989 - 1.*t1014*t791*t992;
}



void R_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
