/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot_src.h"

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
  double t509;
  double t1734;
  double t2225;
  double t1964;
  double t2359;
  double t882;
  double t2206;
  double t2512;
  double t2595;
  double t2650;
  double t3124;
  double t3221;
  double t3667;
  double t716;
  double t3948;
  double t122;
  double t4131;
  double t4216;
  double t4237;
  double t4260;
  double t4261;
  double t4294;
  double t4402;
  double t4444;
  double t4447;
  double t4453;
  double t4555;
  double t4598;
  double t4599;
  double t168;
  double t193;
  double t199;
  double t215;
  double t1370;
  double t1601;
  double t2766;
  double t2767;
  double t2840;
  double t2887;
  double t6738;
  double t6788;
  double t6847;
  double t6998;
  double t7022;
  double t7078;
  double t3997;
  double t3998;
  double t4342;
  double t4434;
  double t4442;
  double t7284;
  double t7337;
  double t7387;
  double t4476;
  double t4508;
  double t4529;
  double t7413;
  double t7423;
  double t7425;
  double t7431;
  double t7444;
  double t7454;
  double t7537;
  double t7559;
  double t7563;
  double t7578;
  double t7593;
  double t7604;
  double t7683;
  double t7690;
  double t7751;
  t509 = Cos(var1[3]);
  t1734 = Cos(var1[5]);
  t2225 = Sin(var1[3]);
  t1964 = Sin(var1[4]);
  t2359 = Sin(var1[5]);
  t882 = Sin(var1[12]);
  t2206 = t509*t1734*t1964;
  t2512 = t2225*t2359;
  t2595 = t2206 + t2512;
  t2650 = Cos(var1[12]);
  t3124 = -1.*t1734*t2225;
  t3221 = t509*t1964*t2359;
  t3667 = t3124 + t3221;
  t716 = Cos(var1[4]);
  t3948 = Sin(var1[13]);
  t122 = Cos(var1[13]);
  t4131 = t2650*t2595;
  t4216 = -1.*t882*t3667;
  t4237 = t4131 + t4216;
  t4260 = Cos(var1[14]);
  t4261 = -1.*t4260;
  t4294 = 1. + t4261;
  t4402 = Sin(var1[14]);
  t4444 = t509*t716*t3948;
  t4447 = t122*t4237;
  t4453 = t4444 + t4447;
  t4555 = t122*t509*t716;
  t4598 = -1.*t3948*t4237;
  t4599 = t4555 + t4598;
  t168 = -1.*t122;
  t193 = 1. + t168;
  t199 = -0.183*t193;
  t215 = 0. + t199;
  t1370 = 0.047*t882;
  t1601 = 0. + t1370;
  t2766 = -1.*t2650;
  t2767 = 1. + t2766;
  t2840 = -0.047*t2767;
  t2887 = 0. + t2840;
  t6738 = t1734*t2225*t1964;
  t6788 = -1.*t509*t2359;
  t6847 = t6738 + t6788;
  t6998 = t509*t1734;
  t7022 = t2225*t1964*t2359;
  t7078 = t6998 + t7022;
  t3997 = -0.183*t3948;
  t3998 = 0. + t3997;
  t4342 = -0.15*t4294;
  t4434 = -0.183*t4402;
  t4442 = 0. + t4342 + t4434;
  t7284 = t2650*t6847;
  t7337 = -1.*t882*t7078;
  t7387 = t7284 + t7337;
  t4476 = -0.183*t4294;
  t4508 = 0.15*t4402;
  t4529 = 0. + t4476 + t4508;
  t7413 = t716*t3948*t2225;
  t7423 = t122*t7387;
  t7425 = t7413 + t7423;
  t7431 = t122*t716*t2225;
  t7444 = -1.*t3948*t7387;
  t7454 = t7431 + t7444;
  t7537 = t2650*t716*t1734;
  t7559 = -1.*t716*t882*t2359;
  t7563 = t7537 + t7559;
  t7578 = -1.*t3948*t1964;
  t7593 = t122*t7563;
  t7604 = t7578 + t7593;
  t7683 = -1.*t122*t1964;
  t7690 = -1.*t3948*t7563;
  t7751 = t7683 + t7690;
  p_output1[0]=0. + t1601*t2595 + t2887*t3667 + t3998*t4237 + t4442*t4453 + t4529*t4599 - 0.183*(-1.*t4402*t4453 + t4260*t4599) - 0.3*(t4260*t4453 + t4402*t4599) + t215*t509*t716 - 0.11079*(t2650*t3667 + t2595*t882) + var1[0];
  p_output1[1]=0. + t1601*t6847 + t2887*t7078 + t215*t2225*t716 + t3998*t7387 + t4442*t7425 + t4529*t7454 - 0.183*(-1.*t4402*t7425 + t4260*t7454) - 0.3*(t4260*t7425 + t4402*t7454) - 0.11079*(t2650*t7078 + t6847*t882) + var1[1];
  p_output1[2]=0. - 1.*t1964*t215 + t1601*t1734*t716 + t2359*t2887*t716 + t3998*t7563 + t4442*t7604 + t4529*t7751 - 0.183*(-1.*t4402*t7604 + t4260*t7751) - 0.3*(t4260*t7604 + t4402*t7751) - 0.11079*(t2359*t2650*t716 + t1734*t716*t882) + var1[2];
}



void p_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
