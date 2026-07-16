/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint_src.h"

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
  double t10246;
  double t10309;
  double t10342;
  double t10331;
  double t10344;
  double t10303;
  double t10338;
  double t10345;
  double t10347;
  double t10352;
  double t10381;
  double t10388;
  double t10390;
  double t10263;
  double t10408;
  double t4135;
  double t10416;
  double t10420;
  double t10421;
  double t10427;
  double t10431;
  double t10432;
  double t10435;
  double t10443;
  double t10446;
  double t10448;
  double t10466;
  double t10471;
  double t10472;
  double t6490;
  double t6826;
  double t7141;
  double t9589;
  double t10307;
  double t10308;
  double t10356;
  double t10362;
  double t10363;
  double t10368;
  double t10521;
  double t10525;
  double t10539;
  double t10546;
  double t10548;
  double t10549;
  double t10410;
  double t10414;
  double t10434;
  double t10436;
  double t10440;
  double t10569;
  double t10575;
  double t10577;
  double t10454;
  double t10456;
  double t10463;
  double t10584;
  double t10585;
  double t10586;
  double t10589;
  double t10593;
  double t10595;
  double t10642;
  double t10644;
  double t10646;
  double t10648;
  double t10650;
  double t10651;
  double t10656;
  double t10661;
  double t10663;
  t10246 = Cos(var1[3]);
  t10309 = Cos(var1[5]);
  t10342 = Sin(var1[3]);
  t10331 = Sin(var1[4]);
  t10344 = Sin(var1[5]);
  t10303 = Sin(var1[12]);
  t10338 = t10246*t10309*t10331;
  t10345 = t10342*t10344;
  t10347 = t10338 + t10345;
  t10352 = Cos(var1[12]);
  t10381 = -1.*t10309*t10342;
  t10388 = t10246*t10331*t10344;
  t10390 = t10381 + t10388;
  t10263 = Cos(var1[4]);
  t10408 = Sin(var1[13]);
  t4135 = Cos(var1[13]);
  t10416 = t10352*t10347;
  t10420 = -1.*t10303*t10390;
  t10421 = t10416 + t10420;
  t10427 = Cos(var1[14]);
  t10431 = -1.*t10427;
  t10432 = 1. + t10431;
  t10435 = Sin(var1[14]);
  t10443 = t10246*t10263*t10408;
  t10446 = t4135*t10421;
  t10448 = t10443 + t10446;
  t10466 = t4135*t10246*t10263;
  t10471 = -1.*t10408*t10421;
  t10472 = t10466 + t10471;
  t6490 = -1.*t4135;
  t6826 = 1. + t6490;
  t7141 = -0.183*t6826;
  t9589 = 0. + t7141;
  t10307 = 0.047*t10303;
  t10308 = 0. + t10307;
  t10356 = -1.*t10352;
  t10362 = 1. + t10356;
  t10363 = -0.047*t10362;
  t10368 = 0. + t10363;
  t10521 = t10309*t10342*t10331;
  t10525 = -1.*t10246*t10344;
  t10539 = t10521 + t10525;
  t10546 = t10246*t10309;
  t10548 = t10342*t10331*t10344;
  t10549 = t10546 + t10548;
  t10410 = -0.183*t10408;
  t10414 = 0. + t10410;
  t10434 = -0.15*t10432;
  t10436 = -0.183*t10435;
  t10440 = 0. + t10434 + t10436;
  t10569 = t10352*t10539;
  t10575 = -1.*t10303*t10549;
  t10577 = t10569 + t10575;
  t10454 = -0.183*t10432;
  t10456 = 0.15*t10435;
  t10463 = 0. + t10454 + t10456;
  t10584 = t10263*t10408*t10342;
  t10585 = t4135*t10577;
  t10586 = t10584 + t10585;
  t10589 = t4135*t10263*t10342;
  t10593 = -1.*t10408*t10577;
  t10595 = t10589 + t10593;
  t10642 = t10352*t10263*t10309;
  t10644 = -1.*t10263*t10303*t10344;
  t10646 = t10642 + t10644;
  t10648 = -1.*t10408*t10331;
  t10650 = t4135*t10646;
  t10651 = t10648 + t10650;
  t10656 = -1.*t4135*t10331;
  t10661 = -1.*t10408*t10646;
  t10663 = t10656 + t10661;
  p_output1[0]=0. + t10308*t10347 + t10368*t10390 - 0.13205*(t10303*t10347 + t10352*t10390) + t10414*t10421 + t10440*t10448 + t10463*t10472 - 0.183*(-1.*t10435*t10448 + t10427*t10472) - 0.15*(t10427*t10448 + t10435*t10472) + t10246*t10263*t9589 + var1[0];
  p_output1[1]=0. + t10308*t10539 + t10368*t10549 - 0.13205*(t10303*t10539 + t10352*t10549) + t10414*t10577 + t10440*t10586 + t10463*t10595 - 0.183*(-1.*t10435*t10586 + t10427*t10595) - 0.15*(t10427*t10586 + t10435*t10595) + t10263*t10342*t9589 + var1[1];
  p_output1[2]=0. + t10263*t10308*t10309 - 0.13205*(t10263*t10303*t10309 + t10263*t10344*t10352) + t10263*t10344*t10368 + t10414*t10646 + t10440*t10651 + t10463*t10663 - 0.183*(-1.*t10435*t10651 + t10427*t10663) - 0.15*(t10427*t10651 + t10435*t10663) - 1.*t10331*t9589 + var1[2];
}



void p_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
