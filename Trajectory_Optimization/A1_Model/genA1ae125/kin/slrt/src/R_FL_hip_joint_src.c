/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_hip_joint_src.h"

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
  double t1876;
  double t912;
  double t4990;
  double t4955;
  double t5016;
  double t5024;
  double t5013;
  double t5037;
  double t5018;
  double t5026;
  double t5033;
  double t5045;
  double t5051;
  double t5052;
  double t5067;
  double t5069;
  double t5072;
  double t5079;
  double t5084;
  double t5087;
  t1876 = Cos(var1[4]);
  t912 = Cos(var1[3]);
  t4990 = Sin(var1[4]);
  t4955 = Sin(var1[3]);
  t5016 = Cos(var1[5]);
  t5024 = Sin(var1[5]);
  t5013 = Sin(var1[9]);
  t5037 = Cos(var1[9]);
  t5018 = t912*t5016*t4990;
  t5026 = t4955*t5024;
  t5033 = t5018 + t5026;
  t5045 = -1.*t5016*t4955;
  t5051 = t912*t4990*t5024;
  t5052 = t5045 + t5051;
  t5067 = t5016*t4955*t4990;
  t5069 = -1.*t912*t5024;
  t5072 = t5067 + t5069;
  t5079 = t912*t5016;
  t5084 = t4955*t4990*t5024;
  t5087 = t5079 + t5084;
  p_output1[0]=t1876*t912;
  p_output1[1]=t1876*t4955;
  p_output1[2]=-1.*t4990;
  p_output1[3]=t5013*t5033 + t5037*t5052;
  p_output1[4]=t5013*t5072 + t5037*t5087;
  p_output1[5]=t1876*t5013*t5016 + t1876*t5024*t5037;
  p_output1[6]=t5033*t5037 - 1.*t5013*t5052;
  p_output1[7]=t5037*t5072 - 1.*t5013*t5087;
  p_output1[8]=-1.*t1876*t5013*t5024 + t1876*t5016*t5037;
}



void R_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
