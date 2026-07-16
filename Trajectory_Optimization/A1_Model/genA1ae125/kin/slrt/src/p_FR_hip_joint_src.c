/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:03 GMT-05:00
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
  double t362;
  double t437;
  double t455;
  double t447;
  double t459;
  double t405;
  double t452;
  double t463;
  double t464;
  double t477;
  double t479;
  double t480;
  double t482;
  double t380;
  double t423;
  double t432;
  double t433;
  double t434;
  double t488;
  double t490;
  double t530;
  double t532;
  double t534;
  double t542;
  double t544;
  double t547;
  t362 = Cos(var1[3]);
  t437 = Cos(var1[5]);
  t455 = Sin(var1[4]);
  t447 = Sin(var1[3]);
  t459 = Sin(var1[5]);
  t405 = Cos(var1[6]);
  t452 = -1.*t437*t447;
  t463 = t362*t455*t459;
  t464 = t452 + t463;
  t477 = t362*t437*t455;
  t479 = t447*t459;
  t480 = t477 + t479;
  t482 = Sin(var1[6]);
  t380 = Cos(var1[4]);
  t423 = -1.*t405;
  t432 = 1. + t423;
  t433 = -0.047*t432;
  t434 = 0. + t433;
  t488 = 0.047*t482;
  t490 = 0. + t488;
  t530 = t362*t437;
  t532 = t447*t455*t459;
  t534 = t530 + t532;
  t542 = t437*t447*t455;
  t544 = -1.*t362*t459;
  t547 = t542 + t544;
  p_output1[0]=0. + 0.183*t362*t380 + t434*t464 - 0.047*(t405*t464 + t480*t482) + t480*t490 + var1[0];
  p_output1[1]=0. + 0.183*t380*t447 + t434*t534 + t490*t547 - 0.047*(t405*t534 + t482*t547) + var1[1];
  p_output1[2]=0. - 0.183*t455 + t380*t434*t459 - 0.047*(t380*t405*t459 + t380*t437*t482) + t380*t437*t490 + var1[2];
}



void p_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
