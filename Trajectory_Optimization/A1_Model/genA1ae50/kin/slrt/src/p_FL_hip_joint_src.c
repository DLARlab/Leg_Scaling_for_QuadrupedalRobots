/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint_src.h"

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
  double t4842;
  double t5190;
  double t5219;
  double t5215;
  double t5231;
  double t5064;
  double t5216;
  double t5242;
  double t5246;
  double t5252;
  double t5271;
  double t5277;
  double t5280;
  double t5016;
  double t5123;
  double t5152;
  double t5254;
  double t5256;
  double t5259;
  double t5262;
  double t5306;
  double t5322;
  double t5324;
  double t5330;
  double t5336;
  double t5339;
  t4842 = Cos(var1[3]);
  t5190 = Cos(var1[5]);
  t5219 = Sin(var1[3]);
  t5215 = Sin(var1[4]);
  t5231 = Sin(var1[5]);
  t5064 = Sin(var1[9]);
  t5216 = t4842*t5190*t5215;
  t5242 = t5219*t5231;
  t5246 = t5216 + t5242;
  t5252 = Cos(var1[9]);
  t5271 = -1.*t5190*t5219;
  t5277 = t4842*t5215*t5231;
  t5280 = t5271 + t5277;
  t5016 = Cos(var1[4]);
  t5123 = -0.047*t5064;
  t5152 = 0. + t5123;
  t5254 = -1.*t5252;
  t5256 = 1. + t5254;
  t5259 = 0.047*t5256;
  t5262 = 0. + t5259;
  t5306 = t5190*t5219*t5215;
  t5322 = -1.*t4842*t5231;
  t5324 = t5306 + t5322;
  t5330 = t4842*t5190;
  t5336 = t5219*t5215*t5231;
  t5339 = t5330 + t5336;
  p_output1[0]=0. + 0.183*t4842*t5016 + t5152*t5246 + t5262*t5280 + 0.047*(t5064*t5246 + t5252*t5280) + var1[0];
  p_output1[1]=0. + 0.183*t5016*t5219 + t5152*t5324 + t5262*t5339 + 0.047*(t5064*t5324 + t5252*t5339) + var1[1];
  p_output1[2]=0. + t5016*t5152*t5190 - 0.183*t5215 + 0.047*(t5016*t5064*t5190 + t5016*t5231*t5252) + t5016*t5231*t5262 + var1[2];
}



void p_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
