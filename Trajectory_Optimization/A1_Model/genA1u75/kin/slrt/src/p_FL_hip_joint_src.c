/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:52 GMT-05:00
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
  double t216;
  double t5096;
  double t6296;
  double t6156;
  double t6600;
  double t3765;
  double t6170;
  double t6715;
  double t6718;
  double t7311;
  double t7417;
  double t7441;
  double t7459;
  double t687;
  double t5086;
  double t5088;
  double t7320;
  double t7343;
  double t7348;
  double t7367;
  double t7514;
  double t7532;
  double t7561;
  double t7620;
  double t7625;
  double t7654;
  t216 = Cos(var1[3]);
  t5096 = Cos(var1[5]);
  t6296 = Sin(var1[3]);
  t6156 = Sin(var1[4]);
  t6600 = Sin(var1[5]);
  t3765 = Sin(var1[9]);
  t6170 = t216*t5096*t6156;
  t6715 = t6296*t6600;
  t6718 = t6170 + t6715;
  t7311 = Cos(var1[9]);
  t7417 = -1.*t5096*t6296;
  t7441 = t216*t6156*t6600;
  t7459 = t7417 + t7441;
  t687 = Cos(var1[4]);
  t5086 = -0.047*t3765;
  t5088 = 0. + t5086;
  t7320 = -1.*t7311;
  t7343 = 1. + t7320;
  t7348 = 0.047*t7343;
  t7367 = 0. + t7348;
  t7514 = t5096*t6296*t6156;
  t7532 = -1.*t216*t6600;
  t7561 = t7514 + t7532;
  t7620 = t216*t5096;
  t7625 = t6296*t6156*t6600;
  t7654 = t7620 + t7625;
  p_output1[0]=0. + t5088*t6718 + 0.183*t216*t687 + t7367*t7459 + 0.047*(t3765*t6718 + t7311*t7459) + var1[0];
  p_output1[1]=0. + 0.183*t6296*t687 + t5088*t7561 + t7367*t7654 + 0.047*(t3765*t7561 + t7311*t7654) + var1[1];
  p_output1[2]=0. - 0.183*t6156 + t5088*t5096*t687 + 0.047*(t3765*t5096*t687 + t6600*t687*t7311) + t6600*t687*t7367 + var1[2];
}



void p_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
