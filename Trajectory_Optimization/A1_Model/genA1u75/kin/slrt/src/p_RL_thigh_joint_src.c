/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint_src.h"

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
  double t991;
  double t3653;
  double t3868;
  double t3665;
  double t4498;
  double t2166;
  double t3670;
  double t4748;
  double t4755;
  double t4764;
  double t6457;
  double t7358;
  double t7688;
  double t110;
  double t1301;
  double t8377;
  double t8474;
  double t8497;
  double t8533;
  double t576;
  double t596;
  double t865;
  double t913;
  double t2272;
  double t3173;
  double t4773;
  double t6216;
  double t6249;
  double t6260;
  double t8750;
  double t8774;
  double t8800;
  double t8827;
  double t8845;
  double t8859;
  double t8423;
  double t8468;
  double t8969;
  double t8984;
  double t8989;
  double t9213;
  double t9215;
  double t9216;
  t991 = Cos(var1[3]);
  t3653 = Cos(var1[5]);
  t3868 = Sin(var1[3]);
  t3665 = Sin(var1[4]);
  t4498 = Sin(var1[5]);
  t2166 = Sin(var1[15]);
  t3670 = t991*t3653*t3665;
  t4748 = t3868*t4498;
  t4755 = t3670 + t4748;
  t4764 = Cos(var1[15]);
  t6457 = -1.*t3653*t3868;
  t7358 = t991*t3665*t4498;
  t7688 = t6457 + t7358;
  t110 = Cos(var1[16]);
  t1301 = Cos(var1[4]);
  t8377 = Sin(var1[16]);
  t8474 = t4764*t4755;
  t8497 = -1.*t2166*t7688;
  t8533 = t8474 + t8497;
  t576 = -1.*t110;
  t596 = 1. + t576;
  t865 = -0.183*t596;
  t913 = 0. + t865;
  t2272 = -0.047*t2166;
  t3173 = 0. + t2272;
  t4773 = -1.*t4764;
  t6216 = 1. + t4773;
  t6249 = 0.047*t6216;
  t6260 = 0. + t6249;
  t8750 = t3653*t3868*t3665;
  t8774 = -1.*t991*t4498;
  t8800 = t8750 + t8774;
  t8827 = t991*t3653;
  t8845 = t3868*t3665*t4498;
  t8859 = t8827 + t8845;
  t8423 = -0.183*t8377;
  t8468 = 0. + t8423;
  t8969 = t4764*t8800;
  t8984 = -1.*t2166*t8859;
  t8989 = t8969 + t8984;
  t9213 = t4764*t1301*t3653;
  t9215 = -1.*t1301*t2166*t4498;
  t9216 = t9213 + t9215;
  p_output1[0]=0. + t3173*t4755 + t6260*t7688 + 0.11079*(t2166*t4755 + t4764*t7688) + t8468*t8533 + t1301*t913*t991 - 0.183*(-1.*t8377*t8533 + t110*t1301*t991) + var1[0];
  p_output1[1]=0. + t3173*t8800 + t6260*t8859 + 0.11079*(t2166*t8800 + t4764*t8859) + t8468*t8989 - 0.183*(t110*t1301*t3868 - 1.*t8377*t8989) + t1301*t3868*t913 + var1[1];
  p_output1[2]=0. + t1301*t3173*t3653 + 0.11079*(t1301*t2166*t3653 + t1301*t4498*t4764) + t1301*t4498*t6260 - 1.*t3665*t913 + t8468*t9216 - 0.183*(-1.*t110*t3665 - 1.*t8377*t9216) + var1[2];
}



void p_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
