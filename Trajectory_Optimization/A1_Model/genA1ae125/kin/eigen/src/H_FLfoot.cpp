/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t530;
  double t1179;
  double t1911;
  double t1243;
  double t2020;
  double t779;
  double t581;
  double t622;
  double t1121;
  double t1734;
  double t2027;
  double t2033;
  double t2046;
  double t2061;
  double t2126;
  double t2131;
  double t2136;
  double t2138;
  double t2142;
  double t360;
  double t2263;
  double t2329;
  double t2335;
  double t2359;
  double t2366;
  double t2371;
  double t2382;
  double t2391;
  double t2392;
  double t2404;
  double t2585;
  double t2598;
  double t2643;
  double t744;
  double t2151;
  double t2197;
  double t2278;
  double t2279;
  double t2283;
  double t2327;
  double t2409;
  double t2416;
  double t2468;
  double t2493;
  double t2506;
  double t2545;
  double t2734;
  double t2746;
  double t2822;
  double t2900;
  double t2923;
  double t2986;
  double t3001;
  double t3020;
  double t4636;
  double t4661;
  double t2224;
  double t2294;
  double t2325;
  double t3586;
  double t3640;
  double t3663;
  double t3955;
  double t3959;
  double t3973;
  double t4094;
  double t4258;
  double t4269;
  double t4280;
  double t4282;
  double t4284;
  double t4303;
  double t3196;
  double t3218;
  double t3415;
  double t4447;
  double t4455;
  double t4677;
  double t4700;
  double t4720;
  double t4811;
  double t4819;
  double t4822;
  double t2426;
  double t2511;
  double t2533;
  double t3744;
  double t3745;
  double t3748;
  double t3496;
  double t3529;
  double t3554;
  double t2755;
  double t2929;
  double t2976;
  double t3776;
  double t3786;
  double t3889;
  t530 = Cos(var1[3]);
  t1179 = Cos(var1[5]);
  t1911 = Sin(var1[3]);
  t1243 = Sin(var1[4]);
  t2020 = Sin(var1[5]);
  t779 = Cos(var1[10]);
  t581 = Cos(var1[4]);
  t622 = Sin(var1[10]);
  t1121 = Cos(var1[9]);
  t1734 = t530*t1179*t1243;
  t2027 = t1911*t2020;
  t2033 = t1734 + t2027;
  t2046 = t1121*t2033;
  t2061 = Sin(var1[9]);
  t2126 = -1.*t1179*t1911;
  t2131 = t530*t1243*t2020;
  t2136 = t2126 + t2131;
  t2138 = -1.*t2061*t2136;
  t2142 = t2046 + t2138;
  t360 = Sin(var1[11]);
  t2263 = Cos(var1[11]);
  t2329 = t1179*t1911*t1243;
  t2335 = -1.*t530*t2020;
  t2359 = t2329 + t2335;
  t2366 = t1121*t2359;
  t2371 = t530*t1179;
  t2382 = t1911*t1243*t2020;
  t2391 = t2371 + t2382;
  t2392 = -1.*t2061*t2391;
  t2404 = t2366 + t2392;
  t2585 = t1121*t581*t1179;
  t2598 = -1.*t581*t2061*t2020;
  t2643 = t2585 + t2598;
  t744 = t530*t581*t622;
  t2151 = t779*t2142;
  t2197 = t744 + t2151;
  t2278 = t779*t530*t581;
  t2279 = -1.*t622*t2142;
  t2283 = t2278 + t2279;
  t2327 = t581*t622*t1911;
  t2409 = t779*t2404;
  t2416 = t2327 + t2409;
  t2468 = t779*t581*t1911;
  t2493 = -1.*t622*t2404;
  t2506 = t2468 + t2493;
  t2545 = -1.*t622*t1243;
  t2734 = t779*t2643;
  t2746 = t2545 + t2734;
  t2822 = -1.*t779*t1243;
  t2900 = -1.*t622*t2643;
  t2923 = t2822 + t2900;
  t2986 = t2061*t2033;
  t3001 = t1121*t2136;
  t3020 = t2986 + t3001;
  t4636 = -1.*t2263;
  t4661 = 1. + t4636;
  t2224 = -1.*t360*t2197;
  t2294 = t2263*t2283;
  t2325 = t2224 + t2294;
  t3586 = t2263*t2197;
  t3640 = t360*t2283;
  t3663 = t3586 + t3640;
  t3955 = -1.*t779;
  t3959 = 1. + t3955;
  t3973 = 0.183*t3959;
  t4094 = 0. + t3973;
  t4258 = -0.047*t2061;
  t4269 = 0. + t4258;
  t4280 = -1.*t1121;
  t4282 = 1. + t4280;
  t4284 = 0.047*t4282;
  t4303 = 0. + t4284;
  t3196 = t2061*t2359;
  t3218 = t1121*t2391;
  t3415 = t3196 + t3218;
  t4447 = 0.183*t622;
  t4455 = 0. + t4447;
  t4677 = -0.25*t4661;
  t4700 = 0.183*t360;
  t4720 = 0. + t4677 + t4700;
  t4811 = 0.183*t4661;
  t4819 = 0.25*t360;
  t4822 = 0. + t4811 + t4819;
  t2426 = -1.*t360*t2416;
  t2511 = t2263*t2506;
  t2533 = t2426 + t2511;
  t3744 = t2263*t2416;
  t3745 = t360*t2506;
  t3748 = t3744 + t3745;
  t3496 = t581*t1179*t2061;
  t3529 = t1121*t581*t2020;
  t3554 = t3496 + t3529;
  t2755 = -1.*t360*t2746;
  t2929 = t2263*t2923;
  t2976 = t2755 + t2929;
  t3776 = t2263*t2746;
  t3786 = t360*t2923;
  t3889 = t3776 + t3786;

  p_output1(0)=t2325;
  p_output1(1)=t2533;
  p_output1(2)=t2976;
  p_output1(3)=0.;
  p_output1(4)=t3020;
  p_output1(5)=t3415;
  p_output1(6)=t3554;
  p_output1(7)=0.;
  p_output1(8)=t3663;
  p_output1(9)=t3748;
  p_output1(10)=t3889;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2325 + 0.13205*t3020 - 0.5*t3663 + t2033*t4269 + t2136*t4303 + t2142*t4455 + t2197*t4720 + t2283*t4822 + t4094*t530*t581 + var1(0);
  p_output1(13)=0. + 0.183*t2533 + 0.13205*t3415 - 0.5*t3748 + t2359*t4269 + t2391*t4303 + t2404*t4455 + t2416*t4720 + t2506*t4822 + t1911*t4094*t581 + var1(1);
  p_output1(14)=0. + 0.183*t2976 + 0.13205*t3554 - 0.5*t3889 - 1.*t1243*t4094 + t2643*t4455 + t2746*t4720 + t2923*t4822 + t1179*t4269*t581 + t2020*t4303*t581 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



