/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint_src.h"

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
  double t538;
  double t669;
  double t691;
  double t676;
  double t700;
  double t606;
  double t690;
  double t724;
  double t740;
  double t759;
  double t760;
  double t763;
  double t781;
  double t554;
  double t638;
  double t651;
  double t665;
  double t666;
  double t789;
  double t796;
  double t856;
  double t868;
  double t889;
  double t897;
  double t906;
  double t913;
  t538 = Cos(var1[3]);
  t669 = Cos(var1[5]);
  t691 = Sin(var1[4]);
  t676 = Sin(var1[3]);
  t700 = Sin(var1[5]);
  t606 = Cos(var1[6]);
  t690 = -1.*t669*t676;
  t724 = t538*t691*t700;
  t740 = t690 + t724;
  t759 = t538*t669*t691;
  t760 = t676*t700;
  t763 = t759 + t760;
  t781 = Sin(var1[6]);
  t554 = Cos(var1[4]);
  t638 = -1.*t606;
  t651 = 1. + t638;
  t665 = -0.047*t651;
  t666 = 0. + t665;
  t789 = 0.047*t781;
  t796 = 0. + t789;
  t856 = t538*t669;
  t868 = t676*t691*t700;
  t889 = t856 + t868;
  t897 = t669*t676*t691;
  t906 = -1.*t538*t700;
  t913 = t897 + t906;
  p_output1[0]=0. + 0.183*t538*t554 + t666*t740 - 0.047*(t606*t740 + t763*t781) + t763*t796 + var1[0];
  p_output1[1]=0. + 0.183*t554*t676 + t666*t889 + t796*t913 - 0.047*(t606*t889 + t781*t913) + var1[1];
  p_output1[2]=0. - 0.183*t691 + t554*t666*t700 - 0.047*(t554*t606*t700 + t554*t669*t781) + t554*t669*t796 + var1[2];
}



void p_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
