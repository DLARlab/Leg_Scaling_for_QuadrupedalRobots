/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint_src.h"

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
  double t5555;
  double t1079;
  double t6537;
  double t6391;
  double t7503;
  double t7516;
  double t7495;
  double t7529;
  double t7512;
  double t7517;
  double t7519;
  double t7531;
  double t7533;
  double t7536;
  double t7545;
  double t7549;
  double t7550;
  double t7552;
  double t7553;
  double t7554;
  double t7527;
  double t7540;
  double t7543;
  double t7604;
  double t7607;
  double t7612;
  double t7614;
  double t7617;
  double t7623;
  double t7551;
  double t7557;
  double t7558;
  double t7562;
  double t7563;
  double t7565;
  t5555 = Cos(var1[4]);
  t1079 = Cos(var1[3]);
  t6537 = Sin(var1[4]);
  t6391 = Sin(var1[3]);
  t7503 = Cos(var1[5]);
  t7516 = Sin(var1[5]);
  t7495 = Sin(var1[15]);
  t7529 = Cos(var1[15]);
  t7512 = t1079*t7503*t6537;
  t7517 = t6391*t7516;
  t7519 = t7512 + t7517;
  t7531 = -1.*t7503*t6391;
  t7533 = t1079*t6537*t7516;
  t7536 = t7531 + t7533;
  t7545 = t7503*t6391*t6537;
  t7549 = -1.*t1079*t7516;
  t7550 = t7545 + t7549;
  t7552 = t1079*t7503;
  t7553 = t6391*t6537*t7516;
  t7554 = t7552 + t7553;
  t7527 = t7495*t7519;
  t7540 = t7529*t7536;
  t7543 = t7527 + t7540;
  t7604 = -0.047*t7495;
  t7607 = 0. + t7604;
  t7612 = -1.*t7529;
  t7614 = 1. + t7612;
  t7617 = 0.047*t7614;
  t7623 = 0. + t7617;
  t7551 = t7495*t7550;
  t7557 = t7529*t7554;
  t7558 = t7551 + t7557;
  t7562 = t5555*t7503*t7495;
  t7563 = t7529*t5555*t7516;
  t7565 = t7562 + t7563;
  p_output1[0]=t1079*t5555;
  p_output1[1]=t5555*t6391;
  p_output1[2]=-1.*t6537;
  p_output1[3]=0.;
  p_output1[4]=t7543;
  p_output1[5]=t7558;
  p_output1[6]=t7565;
  p_output1[7]=0.;
  p_output1[8]=t7519*t7529 - 1.*t7495*t7536;
  p_output1[9]=t7529*t7550 - 1.*t7495*t7554;
  p_output1[10]=-1.*t5555*t7495*t7516 + t5555*t7503*t7529;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t1079*t5555 + 0.047*t7543 + t7519*t7607 + t7536*t7623 + var1[0];
  p_output1[13]=0. - 0.183*t5555*t6391 + 0.047*t7558 + t7550*t7607 + t7554*t7623 + var1[1];
  p_output1[14]=0. + 0.183*t6537 + 0.047*t7565 + t5555*t7503*t7607 + t5555*t7516*t7623 + var1[2];
  p_output1[15]=1.;
}



void H_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
