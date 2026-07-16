/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot_src.h"

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
  double t61;
  double t729;
  double t1011;
  double t766;
  double t1292;
  double t659;
  double t146;
  double t336;
  double t708;
  double t964;
  double t1527;
  double t1664;
  double t1691;
  double t1731;
  double t1768;
  double t1824;
  double t1835;
  double t1937;
  double t1967;
  double t27;
  double t1996;
  double t2395;
  double t2561;
  double t2676;
  double t2708;
  double t2715;
  double t2746;
  double t2788;
  double t2798;
  double t2869;
  double t3054;
  double t3068;
  double t3082;
  double t426;
  double t1978;
  double t1981;
  double t2137;
  double t2190;
  double t2272;
  double t2383;
  double t2871;
  double t2903;
  double t2919;
  double t2956;
  double t2968;
  double t3026;
  double t3084;
  double t3087;
  double t3187;
  double t3205;
  double t3225;
  double t3341;
  double t3388;
  double t3405;
  double t4508;
  double t4526;
  double t1985;
  double t2299;
  double t2304;
  double t3961;
  double t3987;
  double t4047;
  double t4231;
  double t4261;
  double t4265;
  double t4291;
  double t4347;
  double t4367;
  double t4387;
  double t4389;
  double t4401;
  double t4419;
  double t3446;
  double t3705;
  double t3710;
  double t4463;
  double t4468;
  double t4529;
  double t4540;
  double t4556;
  double t4570;
  double t4611;
  double t4636;
  double t2905;
  double t2979;
  double t3010;
  double t4105;
  double t4116;
  double t4169;
  double t3724;
  double t3790;
  double t3912;
  double t3153;
  double t3279;
  double t3313;
  double t4219;
  double t4223;
  double t4228;
  t61 = Cos(var1[3]);
  t729 = Cos(var1[5]);
  t1011 = Sin(var1[3]);
  t766 = Sin(var1[4]);
  t1292 = Sin(var1[5]);
  t659 = Cos(var1[13]);
  t146 = Cos(var1[4]);
  t336 = Sin(var1[13]);
  t708 = Cos(var1[12]);
  t964 = t61*t729*t766;
  t1527 = t1011*t1292;
  t1664 = t964 + t1527;
  t1691 = t708*t1664;
  t1731 = Sin(var1[12]);
  t1768 = -1.*t729*t1011;
  t1824 = t61*t766*t1292;
  t1835 = t1768 + t1824;
  t1937 = -1.*t1731*t1835;
  t1967 = t1691 + t1937;
  t27 = Sin(var1[14]);
  t1996 = Cos(var1[14]);
  t2395 = t729*t1011*t766;
  t2561 = -1.*t61*t1292;
  t2676 = t2395 + t2561;
  t2708 = t708*t2676;
  t2715 = t61*t729;
  t2746 = t1011*t766*t1292;
  t2788 = t2715 + t2746;
  t2798 = -1.*t1731*t2788;
  t2869 = t2708 + t2798;
  t3054 = t708*t146*t729;
  t3068 = -1.*t146*t1731*t1292;
  t3082 = t3054 + t3068;
  t426 = t61*t146*t336;
  t1978 = t659*t1967;
  t1981 = t426 + t1978;
  t2137 = t659*t61*t146;
  t2190 = -1.*t336*t1967;
  t2272 = t2137 + t2190;
  t2383 = t146*t336*t1011;
  t2871 = t659*t2869;
  t2903 = t2383 + t2871;
  t2919 = t659*t146*t1011;
  t2956 = -1.*t336*t2869;
  t2968 = t2919 + t2956;
  t3026 = -1.*t336*t766;
  t3084 = t659*t3082;
  t3087 = t3026 + t3084;
  t3187 = -1.*t659*t766;
  t3205 = -1.*t336*t3082;
  t3225 = t3187 + t3205;
  t3341 = t1731*t1664;
  t3388 = t708*t1835;
  t3405 = t3341 + t3388;
  t4508 = -1.*t1996;
  t4526 = 1. + t4508;
  t1985 = -1.*t27*t1981;
  t2299 = t1996*t2272;
  t2304 = t1985 + t2299;
  t3961 = t1996*t1981;
  t3987 = t27*t2272;
  t4047 = t3961 + t3987;
  t4231 = -1.*t659;
  t4261 = 1. + t4231;
  t4265 = -0.183*t4261;
  t4291 = 0. + t4265;
  t4347 = 0.047*t1731;
  t4367 = 0. + t4347;
  t4387 = -1.*t708;
  t4389 = 1. + t4387;
  t4401 = -0.047*t4389;
  t4419 = 0. + t4401;
  t3446 = t1731*t2676;
  t3705 = t708*t2788;
  t3710 = t3446 + t3705;
  t4463 = -0.183*t336;
  t4468 = 0. + t4463;
  t4529 = -0.25*t4526;
  t4540 = -0.183*t27;
  t4556 = 0. + t4529 + t4540;
  t4570 = -0.183*t4526;
  t4611 = 0.25*t27;
  t4636 = 0. + t4570 + t4611;
  t2905 = -1.*t27*t2903;
  t2979 = t1996*t2968;
  t3010 = t2905 + t2979;
  t4105 = t1996*t2903;
  t4116 = t27*t2968;
  t4169 = t4105 + t4116;
  t3724 = t146*t729*t1731;
  t3790 = t708*t146*t1292;
  t3912 = t3724 + t3790;
  t3153 = -1.*t27*t3087;
  t3279 = t1996*t3225;
  t3313 = t3153 + t3279;
  t4219 = t1996*t3087;
  t4223 = t27*t3225;
  t4228 = t4219 + t4223;
  p_output1[0]=t2304;
  p_output1[1]=t3010;
  p_output1[2]=t3313;
  p_output1[3]=0.;
  p_output1[4]=t3405;
  p_output1[5]=t3710;
  p_output1[6]=t3912;
  p_output1[7]=0.;
  p_output1[8]=t4047;
  p_output1[9]=t4169;
  p_output1[10]=t4228;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2304 - 0.15331*t3405 - 0.5*t4047 + t1664*t4367 + t1835*t4419 + t1967*t4468 + t1981*t4556 + t2272*t4636 + t146*t4291*t61 + var1[0];
  p_output1[13]=0. - 0.183*t3010 - 0.15331*t3710 - 0.5*t4169 + t1011*t146*t4291 + t2676*t4367 + t2788*t4419 + t2869*t4468 + t2903*t4556 + t2968*t4636 + var1[1];
  p_output1[14]=0. - 0.183*t3313 - 0.15331*t3912 - 0.5*t4228 + t1292*t146*t4419 + t3082*t4468 + t3087*t4556 + t3225*t4636 + t146*t4367*t729 - 1.*t4291*t766 + var1[2];
  p_output1[15]=1.;
}



void H_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
