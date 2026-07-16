/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint_src.h"

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
  double t2941;
  double t5408;
  double t9279;
  double t9175;
  double t9392;
  double t441;
  double t3622;
  double t4858;
  double t5388;
  double t9484;
  double t9276;
  double t9433;
  double t9458;
  double t9514;
  double t9548;
  double t9569;
  double t9612;
  double t9643;
  double t9644;
  double t9710;
  double t9722;
  double t9724;
  double t9478;
  double t9573;
  double t9576;
  double t9697;
  double t9740;
  double t9858;
  double t9916;
  double t9927;
  double t9940;
  t2941 = Cos(var1[3]);
  t5408 = Cos(var1[5]);
  t9279 = Sin(var1[3]);
  t9175 = Sin(var1[4]);
  t9392 = Sin(var1[5]);
  t441 = Cos(var1[13]);
  t3622 = Cos(var1[4]);
  t4858 = Sin(var1[13]);
  t5388 = Cos(var1[12]);
  t9484 = Sin(var1[12]);
  t9276 = t2941*t5408*t9175;
  t9433 = t9279*t9392;
  t9458 = t9276 + t9433;
  t9514 = -1.*t5408*t9279;
  t9548 = t2941*t9175*t9392;
  t9569 = t9514 + t9548;
  t9612 = t5408*t9279*t9175;
  t9643 = -1.*t2941*t9392;
  t9644 = t9612 + t9643;
  t9710 = t2941*t5408;
  t9722 = t9279*t9175*t9392;
  t9724 = t9710 + t9722;
  t9478 = t5388*t9458;
  t9573 = -1.*t9484*t9569;
  t9576 = t9478 + t9573;
  t9697 = t5388*t9644;
  t9740 = -1.*t9484*t9724;
  t9858 = t9697 + t9740;
  t9916 = t5388*t3622*t5408;
  t9927 = -1.*t3622*t9484*t9392;
  t9940 = t9916 + t9927;
  p_output1[0]=t2941*t3622*t441 - 1.*t4858*t9576;
  p_output1[1]=t3622*t441*t9279 - 1.*t4858*t9858;
  p_output1[2]=-1.*t441*t9175 - 1.*t4858*t9940;
  p_output1[3]=t9458*t9484 + t5388*t9569;
  p_output1[4]=t9484*t9644 + t5388*t9724;
  p_output1[5]=t3622*t5388*t9392 + t3622*t5408*t9484;
  p_output1[6]=t2941*t3622*t4858 + t441*t9576;
  p_output1[7]=t3622*t4858*t9279 + t441*t9858;
  p_output1[8]=-1.*t4858*t9175 + t441*t9940;
}



void R_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
