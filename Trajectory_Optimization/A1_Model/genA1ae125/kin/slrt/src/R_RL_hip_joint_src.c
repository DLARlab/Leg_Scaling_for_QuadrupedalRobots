/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint_src.h"

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
  double t2245;
  double t850;
  double t3952;
  double t3260;
  double t7551;
  double t7568;
  double t5488;
  double t7607;
  double t7565;
  double t7588;
  double t7603;
  double t7611;
  double t7617;
  double t7623;
  double t7631;
  double t7632;
  double t7642;
  double t7646;
  double t7648;
  double t7650;
  t2245 = Cos(var1[4]);
  t850 = Cos(var1[3]);
  t3952 = Sin(var1[4]);
  t3260 = Sin(var1[3]);
  t7551 = Cos(var1[5]);
  t7568 = Sin(var1[5]);
  t5488 = Sin(var1[15]);
  t7607 = Cos(var1[15]);
  t7565 = t850*t7551*t3952;
  t7588 = t3260*t7568;
  t7603 = t7565 + t7588;
  t7611 = -1.*t7551*t3260;
  t7617 = t850*t3952*t7568;
  t7623 = t7611 + t7617;
  t7631 = t7551*t3260*t3952;
  t7632 = -1.*t850*t7568;
  t7642 = t7631 + t7632;
  t7646 = t850*t7551;
  t7648 = t3260*t3952*t7568;
  t7650 = t7646 + t7648;
  p_output1[0]=t2245*t850;
  p_output1[1]=t2245*t3260;
  p_output1[2]=-1.*t3952;
  p_output1[3]=t5488*t7603 + t7607*t7623;
  p_output1[4]=t5488*t7642 + t7607*t7650;
  p_output1[5]=t2245*t5488*t7551 + t2245*t7568*t7607;
  p_output1[6]=t7603*t7607 - 1.*t5488*t7623;
  p_output1[7]=t7607*t7642 - 1.*t5488*t7650;
  p_output1[8]=-1.*t2245*t5488*t7568 + t2245*t7551*t7607;
}



void R_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
