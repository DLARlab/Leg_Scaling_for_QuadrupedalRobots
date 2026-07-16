/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_hip_joint_src.h"

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
  double t1445;
  double t9395;
  double t9439;
  double t9437;
  double t9448;
  double t3902;
  double t9438;
  double t9451;
  double t9459;
  double t9467;
  double t9476;
  double t9477;
  double t9478;
  double t3422;
  double t5593;
  double t9367;
  double t9470;
  double t9472;
  double t9473;
  double t9475;
  double t9493;
  double t9494;
  double t9498;
  double t9501;
  double t9504;
  double t9509;
  t1445 = Cos(var1[3]);
  t9395 = Cos(var1[5]);
  t9439 = Sin(var1[3]);
  t9437 = Sin(var1[4]);
  t9448 = Sin(var1[5]);
  t3902 = Sin(var1[15]);
  t9438 = t1445*t9395*t9437;
  t9451 = t9439*t9448;
  t9459 = t9438 + t9451;
  t9467 = Cos(var1[15]);
  t9476 = -1.*t9395*t9439;
  t9477 = t1445*t9437*t9448;
  t9478 = t9476 + t9477;
  t3422 = Cos(var1[4]);
  t5593 = -0.047*t3902;
  t9367 = 0. + t5593;
  t9470 = -1.*t9467;
  t9472 = 1. + t9470;
  t9473 = 0.047*t9472;
  t9475 = 0. + t9473;
  t9493 = t9395*t9439*t9437;
  t9494 = -1.*t1445*t9448;
  t9498 = t9493 + t9494;
  t9501 = t1445*t9395;
  t9504 = t9439*t9437*t9448;
  t9509 = t9501 + t9504;
  p_output1[0]=0. - 0.183*t1445*t3422 + t9367*t9459 + t9475*t9478 + 0.047*(t3902*t9459 + t9467*t9478) + var1[0];
  p_output1[1]=0. - 0.183*t3422*t9439 + t9367*t9498 + t9475*t9509 + 0.047*(t3902*t9498 + t9467*t9509) + var1[1];
  p_output1[2]=0. + t3422*t9367*t9395 + 0.183*t9437 + 0.047*(t3422*t3902*t9395 + t3422*t9448*t9467) + t3422*t9448*t9475 + var1[2];
}



void p_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
