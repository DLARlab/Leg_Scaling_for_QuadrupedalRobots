/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:11 GMT-05:00
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
  double t4286;
  double t4469;
  double t4500;
  double t4490;
  double t4526;
  double t4373;
  double t4493;
  double t4530;
  double t4536;
  double t4543;
  double t4562;
  double t4571;
  double t4572;
  double t4309;
  double t4405;
  double t4447;
  double t4550;
  double t4551;
  double t4553;
  double t4554;
  double t4610;
  double t4623;
  double t4627;
  double t4634;
  double t4637;
  double t4639;
  t4286 = Cos(var1[3]);
  t4469 = Cos(var1[5]);
  t4500 = Sin(var1[3]);
  t4490 = Sin(var1[4]);
  t4526 = Sin(var1[5]);
  t4373 = Sin(var1[9]);
  t4493 = t4286*t4469*t4490;
  t4530 = t4500*t4526;
  t4536 = t4493 + t4530;
  t4543 = Cos(var1[9]);
  t4562 = -1.*t4469*t4500;
  t4571 = t4286*t4490*t4526;
  t4572 = t4562 + t4571;
  t4309 = Cos(var1[4]);
  t4405 = -0.047*t4373;
  t4447 = 0. + t4405;
  t4550 = -1.*t4543;
  t4551 = 1. + t4550;
  t4553 = 0.047*t4551;
  t4554 = 0. + t4553;
  t4610 = t4469*t4500*t4490;
  t4623 = -1.*t4286*t4526;
  t4627 = t4610 + t4623;
  t4634 = t4286*t4469;
  t4637 = t4500*t4490*t4526;
  t4639 = t4634 + t4637;
  p_output1[0]=0. + 0.183*t4286*t4309 + t4447*t4536 + t4554*t4572 + 0.047*(t4373*t4536 + t4543*t4572) + var1[0];
  p_output1[1]=0. + 0.183*t4309*t4500 + t4447*t4627 + t4554*t4639 + 0.047*(t4373*t4627 + t4543*t4639) + var1[1];
  p_output1[2]=0. + t4309*t4447*t4469 - 0.183*t4490 + 0.047*(t4309*t4373*t4469 + t4309*t4526*t4543) + t4309*t4526*t4554 + var1[2];
}



void p_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
