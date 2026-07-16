/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:41 GMT-05:00
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
  double t891;
  double t4964;
  double t5553;
  double t5499;
  double t6100;
  double t2244;
  double t5535;
  double t6437;
  double t6496;
  double t6719;
  double t6967;
  double t6992;
  double t7011;
  double t1987;
  double t3758;
  double t4078;
  double t6797;
  double t6846;
  double t6908;
  double t6956;
  double t7134;
  double t7149;
  double t7172;
  double t7182;
  double t7190;
  double t7225;
  t891 = Cos(var1[3]);
  t4964 = Cos(var1[5]);
  t5553 = Sin(var1[3]);
  t5499 = Sin(var1[4]);
  t6100 = Sin(var1[5]);
  t2244 = Sin(var1[9]);
  t5535 = t891*t4964*t5499;
  t6437 = t5553*t6100;
  t6496 = t5535 + t6437;
  t6719 = Cos(var1[9]);
  t6967 = -1.*t4964*t5553;
  t6992 = t891*t5499*t6100;
  t7011 = t6967 + t6992;
  t1987 = Cos(var1[4]);
  t3758 = -0.047*t2244;
  t4078 = 0. + t3758;
  t6797 = -1.*t6719;
  t6846 = 1. + t6797;
  t6908 = 0.047*t6846;
  t6956 = 0. + t6908;
  t7134 = t4964*t5553*t5499;
  t7149 = -1.*t891*t6100;
  t7172 = t7134 + t7149;
  t7182 = t891*t4964;
  t7190 = t5553*t5499*t6100;
  t7225 = t7182 + t7190;
  p_output1[0]=0. + t4078*t6496 + t6956*t7011 + 0.047*(t2244*t6496 + t6719*t7011) + 0.183*t1987*t891 + var1[0];
  p_output1[1]=0. + 0.183*t1987*t5553 + t4078*t7172 + t6956*t7225 + 0.047*(t2244*t7172 + t6719*t7225) + var1[1];
  p_output1[2]=0. + t1987*t4078*t4964 - 0.183*t5499 + 0.047*(t1987*t2244*t4964 + t1987*t6100*t6719) + t1987*t6100*t6956 + var1[2];
}



void p_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
