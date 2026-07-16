/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot_src.h"

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
  double t1324;
  double t1865;
  double t2666;
  double t2055;
  double t3071;
  double t1779;
  double t2520;
  double t3203;
  double t3387;
  double t3575;
  double t4637;
  double t4648;
  double t4865;
  double t1489;
  double t5600;
  double t128;
  double t5887;
  double t5903;
  double t5919;
  double t5957;
  double t6005;
  double t6110;
  double t6129;
  double t6229;
  double t6246;
  double t6247;
  double t6412;
  double t6415;
  double t6431;
  double t527;
  double t575;
  double t778;
  double t978;
  double t1809;
  double t1855;
  double t3706;
  double t4396;
  double t4496;
  double t4565;
  double t6523;
  double t6531;
  double t6536;
  double t6548;
  double t6552;
  double t6555;
  double t5680;
  double t5843;
  double t6121;
  double t6150;
  double t6193;
  double t6587;
  double t6589;
  double t6597;
  double t6402;
  double t6407;
  double t6411;
  double t6613;
  double t6614;
  double t6619;
  double t6779;
  double t6814;
  double t6820;
  double t7188;
  double t7239;
  double t7333;
  double t7355;
  double t7397;
  double t7402;
  double t7406;
  double t7413;
  double t7417;
  t1324 = Cos(var1[3]);
  t1865 = Cos(var1[5]);
  t2666 = Sin(var1[3]);
  t2055 = Sin(var1[4]);
  t3071 = Sin(var1[5]);
  t1779 = Sin(var1[15]);
  t2520 = t1324*t1865*t2055;
  t3203 = t2666*t3071;
  t3387 = t2520 + t3203;
  t3575 = Cos(var1[15]);
  t4637 = -1.*t1865*t2666;
  t4648 = t1324*t2055*t3071;
  t4865 = t4637 + t4648;
  t1489 = Cos(var1[4]);
  t5600 = Sin(var1[16]);
  t128 = Cos(var1[16]);
  t5887 = t3575*t3387;
  t5903 = -1.*t1779*t4865;
  t5919 = t5887 + t5903;
  t5957 = Cos(var1[17]);
  t6005 = -1.*t5957;
  t6110 = 1. + t6005;
  t6129 = Sin(var1[17]);
  t6229 = t1324*t1489*t5600;
  t6246 = t128*t5919;
  t6247 = t6229 + t6246;
  t6412 = t128*t1324*t1489;
  t6415 = -1.*t5600*t5919;
  t6431 = t6412 + t6415;
  t527 = -1.*t128;
  t575 = 1. + t527;
  t778 = -0.183*t575;
  t978 = 0. + t778;
  t1809 = -0.047*t1779;
  t1855 = 0. + t1809;
  t3706 = -1.*t3575;
  t4396 = 1. + t3706;
  t4496 = 0.047*t4396;
  t4565 = 0. + t4496;
  t6523 = t1865*t2666*t2055;
  t6531 = -1.*t1324*t3071;
  t6536 = t6523 + t6531;
  t6548 = t1324*t1865;
  t6552 = t2666*t2055*t3071;
  t6555 = t6548 + t6552;
  t5680 = -0.183*t5600;
  t5843 = 0. + t5680;
  t6121 = -0.15*t6110;
  t6150 = -0.183*t6129;
  t6193 = 0. + t6121 + t6150;
  t6587 = t3575*t6536;
  t6589 = -1.*t1779*t6555;
  t6597 = t6587 + t6589;
  t6402 = -0.183*t6110;
  t6407 = 0.15*t6129;
  t6411 = 0. + t6402 + t6407;
  t6613 = t1489*t5600*t2666;
  t6614 = t128*t6597;
  t6619 = t6613 + t6614;
  t6779 = t128*t1489*t2666;
  t6814 = -1.*t5600*t6597;
  t6820 = t6779 + t6814;
  t7188 = t3575*t1489*t1865;
  t7239 = -1.*t1489*t1779*t3071;
  t7333 = t7188 + t7239;
  t7355 = -1.*t5600*t2055;
  t7397 = t128*t7333;
  t7402 = t7355 + t7397;
  t7406 = -1.*t128*t2055;
  t7413 = -1.*t5600*t7333;
  t7417 = t7406 + t7413;
  p_output1[0]=0. + t1855*t3387 + t4565*t4865 + 0.11079*(t1779*t3387 + t3575*t4865) + t5843*t5919 + t6193*t6247 + t6411*t6431 - 0.183*(-1.*t6129*t6247 + t5957*t6431) - 0.3*(t5957*t6247 + t6129*t6431) + t1324*t1489*t978 + var1[0];
  p_output1[1]=0. + t1855*t6536 + t4565*t6555 + 0.11079*(t1779*t6536 + t3575*t6555) + t5843*t6597 + t6193*t6619 + t6411*t6820 - 0.183*(-1.*t6129*t6619 + t5957*t6820) - 0.3*(t5957*t6619 + t6129*t6820) + t1489*t2666*t978 + var1[1];
  p_output1[2]=0. + t1489*t1855*t1865 + 0.11079*(t1489*t1779*t1865 + t1489*t3071*t3575) + t1489*t3071*t4565 + t5843*t7333 + t6193*t7402 + t6411*t7417 - 0.183*(-1.*t6129*t7402 + t5957*t7417) - 0.3*(t5957*t7402 + t6129*t7417) - 1.*t2055*t978 + var1[2];
}



void p_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
