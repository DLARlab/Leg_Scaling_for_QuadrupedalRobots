/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot_src.h"

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
  double t647;
  double t1065;
  double t1626;
  double t1455;
  double t1631;
  double t926;
  double t732;
  double t830;
  double t1047;
  double t1576;
  double t1650;
  double t1673;
  double t1682;
  double t1764;
  double t1842;
  double t1960;
  double t2042;
  double t2066;
  double t2121;
  double t362;
  double t2373;
  double t2744;
  double t2762;
  double t2846;
  double t2853;
  double t2854;
  double t2996;
  double t3035;
  double t3053;
  double t3119;
  double t3524;
  double t3530;
  double t3550;
  double t911;
  double t2196;
  double t2247;
  double t2399;
  double t2401;
  double t2432;
  double t2571;
  double t3131;
  double t3156;
  double t3226;
  double t3308;
  double t3320;
  double t3458;
  double t3578;
  double t3607;
  double t3708;
  double t3712;
  double t3724;
  double t3769;
  double t3770;
  double t3784;
  double t4627;
  double t4630;
  double t2298;
  double t2466;
  double t2507;
  double t4042;
  double t4055;
  double t4061;
  double t4211;
  double t4232;
  double t4234;
  double t4249;
  double t4363;
  double t4391;
  double t4411;
  double t4421;
  double t4457;
  double t4477;
  double t3803;
  double t3810;
  double t3833;
  double t4534;
  double t4560;
  double t4717;
  double t4727;
  double t4739;
  double t4755;
  double t4772;
  double t4807;
  double t3165;
  double t3434;
  double t3451;
  double t4062;
  double t4097;
  double t4098;
  double t3988;
  double t4013;
  double t4015;
  double t3686;
  double t3731;
  double t3744;
  double t4166;
  double t4176;
  double t4204;
  t647 = Cos(var1[3]);
  t1065 = Cos(var1[5]);
  t1626 = Sin(var1[3]);
  t1455 = Sin(var1[4]);
  t1631 = Sin(var1[5]);
  t926 = Cos(var1[10]);
  t732 = Cos(var1[4]);
  t830 = Sin(var1[10]);
  t1047 = Cos(var1[9]);
  t1576 = t647*t1065*t1455;
  t1650 = t1626*t1631;
  t1673 = t1576 + t1650;
  t1682 = t1047*t1673;
  t1764 = Sin(var1[9]);
  t1842 = -1.*t1065*t1626;
  t1960 = t647*t1455*t1631;
  t2042 = t1842 + t1960;
  t2066 = -1.*t1764*t2042;
  t2121 = t1682 + t2066;
  t362 = Sin(var1[11]);
  t2373 = Cos(var1[11]);
  t2744 = t1065*t1626*t1455;
  t2762 = -1.*t647*t1631;
  t2846 = t2744 + t2762;
  t2853 = t1047*t2846;
  t2854 = t647*t1065;
  t2996 = t1626*t1455*t1631;
  t3035 = t2854 + t2996;
  t3053 = -1.*t1764*t3035;
  t3119 = t2853 + t3053;
  t3524 = t1047*t732*t1065;
  t3530 = -1.*t732*t1764*t1631;
  t3550 = t3524 + t3530;
  t911 = t647*t732*t830;
  t2196 = t926*t2121;
  t2247 = t911 + t2196;
  t2399 = t926*t647*t732;
  t2401 = -1.*t830*t2121;
  t2432 = t2399 + t2401;
  t2571 = t732*t830*t1626;
  t3131 = t926*t3119;
  t3156 = t2571 + t3131;
  t3226 = t926*t732*t1626;
  t3308 = -1.*t830*t3119;
  t3320 = t3226 + t3308;
  t3458 = -1.*t830*t1455;
  t3578 = t926*t3550;
  t3607 = t3458 + t3578;
  t3708 = -1.*t926*t1455;
  t3712 = -1.*t830*t3550;
  t3724 = t3708 + t3712;
  t3769 = t1764*t1673;
  t3770 = t1047*t2042;
  t3784 = t3769 + t3770;
  t4627 = -1.*t2373;
  t4630 = 1. + t4627;
  t2298 = -1.*t362*t2247;
  t2466 = t2373*t2432;
  t2507 = t2298 + t2466;
  t4042 = t2373*t2247;
  t4055 = t362*t2432;
  t4061 = t4042 + t4055;
  t4211 = -1.*t926;
  t4232 = 1. + t4211;
  t4234 = 0.183*t4232;
  t4249 = 0. + t4234;
  t4363 = -0.047*t1764;
  t4391 = 0. + t4363;
  t4411 = -1.*t1047;
  t4421 = 1. + t4411;
  t4457 = 0.047*t4421;
  t4477 = 0. + t4457;
  t3803 = t1764*t2846;
  t3810 = t1047*t3035;
  t3833 = t3803 + t3810;
  t4534 = 0.183*t830;
  t4560 = 0. + t4534;
  t4717 = -0.3*t4630;
  t4727 = 0.183*t362;
  t4739 = 0. + t4717 + t4727;
  t4755 = 0.183*t4630;
  t4772 = 0.3*t362;
  t4807 = 0. + t4755 + t4772;
  t3165 = -1.*t362*t3156;
  t3434 = t2373*t3320;
  t3451 = t3165 + t3434;
  t4062 = t2373*t3156;
  t4097 = t362*t3320;
  t4098 = t4062 + t4097;
  t3988 = t732*t1065*t1764;
  t4013 = t1047*t732*t1631;
  t4015 = t3988 + t4013;
  t3686 = -1.*t362*t3607;
  t3731 = t2373*t3724;
  t3744 = t3686 + t3731;
  t4166 = t2373*t3607;
  t4176 = t362*t3724;
  t4204 = t4166 + t4176;
  p_output1[0]=t2507;
  p_output1[1]=t3451;
  p_output1[2]=t3744;
  p_output1[3]=0.;
  p_output1[4]=t3784;
  p_output1[5]=t3833;
  p_output1[6]=t4015;
  p_output1[7]=0.;
  p_output1[8]=t4061;
  p_output1[9]=t4098;
  p_output1[10]=t4204;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2507 + 0.17458*t3784 - 0.6*t4061 + t1673*t4391 + t2042*t4477 + t2121*t4560 + t2247*t4739 + t2432*t4807 + t4249*t647*t732 + var1[0];
  p_output1[13]=0. + 0.183*t3451 + 0.17458*t3833 - 0.6*t4098 + t2846*t4391 + t3035*t4477 + t3119*t4560 + t3156*t4739 + t3320*t4807 + t1626*t4249*t732 + var1[1];
  p_output1[14]=0. + 0.183*t3744 + 0.17458*t4015 - 0.6*t4204 - 1.*t1455*t4249 + t3550*t4560 + t3607*t4739 + t3724*t4807 + t1065*t4391*t732 + t1631*t4477*t732 + var1[2];
  p_output1[15]=1.;
}



void H_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
