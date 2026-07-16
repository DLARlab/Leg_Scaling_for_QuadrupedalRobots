/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:54 GMT-05:00
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
  double t1763;
  double t759;
  double t6557;
  double t4405;
  double t7733;
  double t8065;
  double t7353;
  double t8241;
  double t7803;
  double t8098;
  double t8110;
  double t8245;
  double t8254;
  double t8258;
  double t8317;
  double t8348;
  double t8350;
  double t8367;
  double t8378;
  double t8380;
  t1763 = Cos(var1[4]);
  t759 = Cos(var1[3]);
  t6557 = Sin(var1[4]);
  t4405 = Sin(var1[3]);
  t7733 = Cos(var1[5]);
  t8065 = Sin(var1[5]);
  t7353 = Sin(var1[9]);
  t8241 = Cos(var1[9]);
  t7803 = t759*t7733*t6557;
  t8098 = t4405*t8065;
  t8110 = t7803 + t8098;
  t8245 = -1.*t7733*t4405;
  t8254 = t759*t6557*t8065;
  t8258 = t8245 + t8254;
  t8317 = t7733*t4405*t6557;
  t8348 = -1.*t759*t8065;
  t8350 = t8317 + t8348;
  t8367 = t759*t7733;
  t8378 = t4405*t6557*t8065;
  t8380 = t8367 + t8378;
  p_output1[0]=t1763*t759;
  p_output1[1]=t1763*t4405;
  p_output1[2]=-1.*t6557;
  p_output1[3]=t7353*t8110 + t8241*t8258;
  p_output1[4]=t7353*t8350 + t8241*t8380;
  p_output1[5]=t1763*t7353*t7733 + t1763*t8065*t8241;
  p_output1[6]=t8110*t8241 - 1.*t7353*t8258;
  p_output1[7]=t8241*t8350 - 1.*t7353*t8380;
  p_output1[8]=-1.*t1763*t7353*t8065 + t1763*t7733*t8241;
}



void R_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
