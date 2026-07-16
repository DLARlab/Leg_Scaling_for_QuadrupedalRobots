/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint_src.h"

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
  double t876;
  double t1197;
  double t1303;
  double t1276;
  double t1321;
  double t939;
  double t1046;
  double t1288;
  double t1322;
  double t1368;
  double t1372;
  double t1378;
  double t1400;
  double t1422;
  double t1429;
  double t1451;
  double t1567;
  double t932;
  double t1604;
  double t657;
  double t1967;
  double t2008;
  double t2017;
  double t2027;
  double t2047;
  double t2056;
  double t2073;
  double t2081;
  double t2111;
  double t1874;
  double t2438;
  double t2465;
  double t2475;
  double t1717;
  double t1741;
  double t1802;
  double t950;
  double t1646;
  double t1660;
  double t2367;
  double t2373;
  double t2384;
  double t1957;
  double t2177;
  double t2253;
  double t2561;
  double t2593;
  double t2595;
  double t2422;
  double t2477;
  double t2497;
  double t2730;
  double t2750;
  double t2755;
  double t3526;
  double t3591;
  double t1713;
  double t1891;
  double t1950;
  double t2883;
  double t2893;
  double t2921;
  double t3265;
  double t3280;
  double t3315;
  double t3319;
  double t3323;
  double t3336;
  double t3337;
  double t3341;
  double t3352;
  double t3371;
  double t2810;
  double t2811;
  double t2847;
  double t3439;
  double t3495;
  double t3595;
  double t3603;
  double t3629;
  double t3648;
  double t3657;
  double t3670;
  double t2353;
  double t2393;
  double t2398;
  double t2924;
  double t2960;
  double t2975;
  double t2859;
  double t2869;
  double t2872;
  double t2521;
  double t2624;
  double t2630;
  double t3133;
  double t3147;
  double t3248;
  t876 = Cos(var1[3]);
  t1197 = Cos(var1[5]);
  t1303 = Sin(var1[3]);
  t1276 = Sin(var1[4]);
  t1321 = Sin(var1[5]);
  t939 = Cos(var1[7]);
  t1046 = Cos(var1[6]);
  t1288 = t876*t1197*t1276;
  t1322 = t1303*t1321;
  t1368 = t1288 + t1322;
  t1372 = t1046*t1368;
  t1378 = -1.*t1197*t1303;
  t1400 = t876*t1276*t1321;
  t1422 = t1378 + t1400;
  t1429 = Sin(var1[6]);
  t1451 = -1.*t1422*t1429;
  t1567 = t1372 + t1451;
  t932 = Cos(var1[4]);
  t1604 = Sin(var1[7]);
  t657 = Cos(var1[8]);
  t1967 = t1197*t1303*t1276;
  t2008 = -1.*t876*t1321;
  t2017 = t1967 + t2008;
  t2027 = t1046*t2017;
  t2047 = t876*t1197;
  t2056 = t1303*t1276*t1321;
  t2073 = t2047 + t2056;
  t2081 = -1.*t2073*t1429;
  t2111 = t2027 + t2081;
  t1874 = Sin(var1[8]);
  t2438 = t932*t1197*t1046;
  t2465 = -1.*t932*t1321*t1429;
  t2475 = t2438 + t2465;
  t1717 = t939*t1567;
  t1741 = t876*t932*t1604;
  t1802 = t1717 + t1741;
  t950 = t876*t932*t939;
  t1646 = -1.*t1567*t1604;
  t1660 = t950 + t1646;
  t2367 = t939*t2111;
  t2373 = t932*t1303*t1604;
  t2384 = t2367 + t2373;
  t1957 = t932*t939*t1303;
  t2177 = -1.*t2111*t1604;
  t2253 = t1957 + t2177;
  t2561 = t939*t2475;
  t2593 = -1.*t1276*t1604;
  t2595 = t2561 + t2593;
  t2422 = -1.*t939*t1276;
  t2477 = -1.*t2475*t1604;
  t2497 = t2422 + t2477;
  t2730 = t1046*t1422;
  t2750 = t1368*t1429;
  t2755 = t2730 + t2750;
  t3526 = -1.*t657;
  t3591 = 1. + t3526;
  t1713 = t657*t1660;
  t1891 = -1.*t1802*t1874;
  t1950 = t1713 + t1891;
  t2883 = t657*t1802;
  t2893 = t1660*t1874;
  t2921 = t2883 + t2893;
  t3265 = -1.*t939;
  t3280 = 1. + t3265;
  t3315 = 0.183*t3280;
  t3319 = 0. + t3315;
  t3323 = -1.*t1046;
  t3336 = 1. + t3323;
  t3337 = -0.047*t3336;
  t3341 = 0. + t3337;
  t3352 = 0.047*t1429;
  t3371 = 0. + t3352;
  t2810 = t1046*t2073;
  t2811 = t2017*t1429;
  t2847 = t2810 + t2811;
  t3439 = 0.183*t1604;
  t3495 = 0. + t3439;
  t3595 = 0.183*t3591;
  t3603 = 0.1*t1874;
  t3629 = 0. + t3595 + t3603;
  t3648 = -0.1*t3591;
  t3657 = 0.183*t1874;
  t3670 = 0. + t3648 + t3657;
  t2353 = t657*t2253;
  t2393 = -1.*t2384*t1874;
  t2398 = t2353 + t2393;
  t2924 = t657*t2384;
  t2960 = t2253*t1874;
  t2975 = t2924 + t2960;
  t2859 = t932*t1046*t1321;
  t2869 = t932*t1197*t1429;
  t2872 = t2859 + t2869;
  t2521 = t657*t2497;
  t2624 = -1.*t2595*t1874;
  t2630 = t2521 + t2624;
  t3133 = t657*t2595;
  t3147 = t2497*t1874;
  t3248 = t3133 + t3147;
  p_output1[0]=t1950;
  p_output1[1]=t2398;
  p_output1[2]=t2630;
  p_output1[3]=0.;
  p_output1[4]=t2755;
  p_output1[5]=t2847;
  p_output1[6]=t2872;
  p_output1[7]=0.;
  p_output1[8]=t2921;
  p_output1[9]=t2975;
  p_output1[10]=t3248;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1950 - 0.13205*t2755 - 0.1*t2921 + t1422*t3341 + t1368*t3371 + t1567*t3495 + t1660*t3629 + t1802*t3670 + t3319*t876*t932 + var1[0];
  p_output1[13]=0. + 0.183*t2398 - 0.13205*t2847 - 0.1*t2975 + t2073*t3341 + t2017*t3371 + t2111*t3495 + t2253*t3629 + t2384*t3670 + t1303*t3319*t932 + var1[1];
  p_output1[14]=0. + 0.183*t2630 - 0.13205*t2872 - 0.1*t3248 - 1.*t1276*t3319 + t2475*t3495 + t2497*t3629 + t2595*t3670 + t1321*t3341*t932 + t1197*t3371*t932 + var1[2];
  p_output1[15]=1.;
}



void H_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
