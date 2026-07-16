/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot_src.h"

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
  double t2133;
  double t3978;
  double t4078;
  double t4060;
  double t4139;
  double t3673;
  double t4063;
  double t4162;
  double t4163;
  double t4195;
  double t4231;
  double t4254;
  double t4259;
  double t2199;
  double t4312;
  double t661;
  double t4324;
  double t4331;
  double t4332;
  double t4390;
  double t4392;
  double t5081;
  double t5161;
  double t5259;
  double t5527;
  double t5567;
  double t5796;
  double t5798;
  double t5826;
  double t963;
  double t1017;
  double t1703;
  double t2069;
  double t3700;
  double t3965;
  double t4204;
  double t4218;
  double t4221;
  double t4229;
  double t6196;
  double t6198;
  double t6212;
  double t6224;
  double t6231;
  double t6238;
  double t4315;
  double t4322;
  double t5084;
  double t5224;
  double t5253;
  double t6281;
  double t6297;
  double t6302;
  double t5578;
  double t5579;
  double t5583;
  double t6313;
  double t6314;
  double t6319;
  double t6323;
  double t6324;
  double t6327;
  double t6540;
  double t6576;
  double t6584;
  double t6591;
  double t6593;
  double t6596;
  double t6612;
  double t6622;
  double t6630;
  t2133 = Cos(var1[3]);
  t3978 = Cos(var1[5]);
  t4078 = Sin(var1[3]);
  t4060 = Sin(var1[4]);
  t4139 = Sin(var1[5]);
  t3673 = Sin(var1[9]);
  t4063 = t2133*t3978*t4060;
  t4162 = t4078*t4139;
  t4163 = t4063 + t4162;
  t4195 = Cos(var1[9]);
  t4231 = -1.*t3978*t4078;
  t4254 = t2133*t4060*t4139;
  t4259 = t4231 + t4254;
  t2199 = Cos(var1[4]);
  t4312 = Sin(var1[10]);
  t661 = Cos(var1[10]);
  t4324 = t4195*t4163;
  t4331 = -1.*t3673*t4259;
  t4332 = t4324 + t4331;
  t4390 = Cos(var1[11]);
  t4392 = -1.*t4390;
  t5081 = 1. + t4392;
  t5161 = Sin(var1[11]);
  t5259 = t2133*t2199*t4312;
  t5527 = t661*t4332;
  t5567 = t5259 + t5527;
  t5796 = t661*t2133*t2199;
  t5798 = -1.*t4312*t4332;
  t5826 = t5796 + t5798;
  t963 = -1.*t661;
  t1017 = 1. + t963;
  t1703 = 0.183*t1017;
  t2069 = 0. + t1703;
  t3700 = -0.047*t3673;
  t3965 = 0. + t3700;
  t4204 = -1.*t4195;
  t4218 = 1. + t4204;
  t4221 = 0.047*t4218;
  t4229 = 0. + t4221;
  t6196 = t3978*t4078*t4060;
  t6198 = -1.*t2133*t4139;
  t6212 = t6196 + t6198;
  t6224 = t2133*t3978;
  t6231 = t4078*t4060*t4139;
  t6238 = t6224 + t6231;
  t4315 = 0.183*t4312;
  t4322 = 0. + t4315;
  t5084 = -0.15*t5081;
  t5224 = 0.183*t5161;
  t5253 = 0. + t5084 + t5224;
  t6281 = t4195*t6212;
  t6297 = -1.*t3673*t6238;
  t6302 = t6281 + t6297;
  t5578 = 0.183*t5081;
  t5579 = 0.15*t5161;
  t5583 = 0. + t5578 + t5579;
  t6313 = t2199*t4312*t4078;
  t6314 = t661*t6302;
  t6319 = t6313 + t6314;
  t6323 = t661*t2199*t4078;
  t6324 = -1.*t4312*t6302;
  t6327 = t6323 + t6324;
  t6540 = t4195*t2199*t3978;
  t6576 = -1.*t2199*t3673*t4139;
  t6584 = t6540 + t6576;
  t6591 = -1.*t4312*t4060;
  t6593 = t661*t6584;
  t6596 = t6591 + t6593;
  t6612 = -1.*t661*t4060;
  t6622 = -1.*t4312*t6584;
  t6630 = t6612 + t6622;
  p_output1[0]=0. + t2069*t2133*t2199 + t3965*t4163 + t4229*t4259 + 0.13205*(t3673*t4163 + t4195*t4259) + t4322*t4332 + t5253*t5567 + t5583*t5826 + 0.183*(-1.*t5161*t5567 + t4390*t5826) - 0.3*(t4390*t5567 + t5161*t5826) + var1[0];
  p_output1[1]=0. + t2069*t2199*t4078 + t3965*t6212 + t4229*t6238 + 0.13205*(t3673*t6212 + t4195*t6238) + t4322*t6302 + t5253*t6319 + t5583*t6327 + 0.183*(-1.*t5161*t6319 + t4390*t6327) - 0.3*(t4390*t6319 + t5161*t6327) + var1[1];
  p_output1[2]=0. + t2199*t3965*t3978 - 1.*t2069*t4060 + 0.13205*(t2199*t3673*t3978 + t2199*t4139*t4195) + t2199*t4139*t4229 + t4322*t6584 + t5253*t6596 + t5583*t6630 + 0.183*(-1.*t5161*t6596 + t4390*t6630) - 0.3*(t4390*t6596 + t5161*t6630) + var1[2];
}



void p_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
