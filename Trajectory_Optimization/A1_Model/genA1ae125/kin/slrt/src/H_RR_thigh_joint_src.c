/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint_src.h"

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
  double t2026;
  double t2131;
  double t2224;
  double t2222;
  double t2240;
  double t1291;
  double t2088;
  double t2112;
  double t2116;
  double t2279;
  double t2223;
  double t2246;
  double t2248;
  double t2281;
  double t2317;
  double t2318;
  double t2356;
  double t2366;
  double t2378;
  double t2386;
  double t2390;
  double t2391;
  double t2249;
  double t2335;
  double t2337;
  double t2379;
  double t2404;
  double t2448;
  double t2536;
  double t2552;
  double t2554;
  double t2610;
  double t2617;
  double t2667;
  double t2108;
  double t2338;
  double t2342;
  double t2985;
  double t2989;
  double t2992;
  double t2993;
  double t3005;
  double t3013;
  double t3033;
  double t3091;
  double t3116;
  double t3117;
  double t2689;
  double t2711;
  double t2722;
  double t3120;
  double t3122;
  double t2343;
  double t2491;
  double t2515;
  double t2734;
  double t2741;
  double t2756;
  double t2516;
  double t2559;
  double t2597;
  t2026 = Cos(var1[3]);
  t2131 = Cos(var1[5]);
  t2224 = Sin(var1[3]);
  t2222 = Sin(var1[4]);
  t2240 = Sin(var1[5]);
  t1291 = Cos(var1[13]);
  t2088 = Cos(var1[4]);
  t2112 = Sin(var1[13]);
  t2116 = Cos(var1[12]);
  t2279 = Sin(var1[12]);
  t2223 = t2026*t2131*t2222;
  t2246 = t2224*t2240;
  t2248 = t2223 + t2246;
  t2281 = -1.*t2131*t2224;
  t2317 = t2026*t2222*t2240;
  t2318 = t2281 + t2317;
  t2356 = t2131*t2224*t2222;
  t2366 = -1.*t2026*t2240;
  t2378 = t2356 + t2366;
  t2386 = t2026*t2131;
  t2390 = t2224*t2222*t2240;
  t2391 = t2386 + t2390;
  t2249 = t2116*t2248;
  t2335 = -1.*t2279*t2318;
  t2337 = t2249 + t2335;
  t2379 = t2116*t2378;
  t2404 = -1.*t2279*t2391;
  t2448 = t2379 + t2404;
  t2536 = t2116*t2088*t2131;
  t2552 = -1.*t2088*t2279*t2240;
  t2554 = t2536 + t2552;
  t2610 = t2279*t2248;
  t2617 = t2116*t2318;
  t2667 = t2610 + t2617;
  t2108 = t1291*t2026*t2088;
  t2338 = -1.*t2112*t2337;
  t2342 = t2108 + t2338;
  t2985 = -1.*t1291;
  t2989 = 1. + t2985;
  t2992 = -0.183*t2989;
  t2993 = 0. + t2992;
  t3005 = 0.047*t2279;
  t3013 = 0. + t3005;
  t3033 = -1.*t2116;
  t3091 = 1. + t3033;
  t3116 = -0.047*t3091;
  t3117 = 0. + t3116;
  t2689 = t2279*t2378;
  t2711 = t2116*t2391;
  t2722 = t2689 + t2711;
  t3120 = -0.183*t2112;
  t3122 = 0. + t3120;
  t2343 = t1291*t2088*t2224;
  t2491 = -1.*t2112*t2448;
  t2515 = t2343 + t2491;
  t2734 = t2088*t2131*t2279;
  t2741 = t2116*t2088*t2240;
  t2756 = t2734 + t2741;
  t2516 = -1.*t1291*t2222;
  t2559 = -1.*t2112*t2554;
  t2597 = t2516 + t2559;
  p_output1[0]=t2342;
  p_output1[1]=t2515;
  p_output1[2]=t2597;
  p_output1[3]=0.;
  p_output1[4]=t2667;
  p_output1[5]=t2722;
  p_output1[6]=t2756;
  p_output1[7]=0.;
  p_output1[8]=t2026*t2088*t2112 + t1291*t2337;
  p_output1[9]=t2088*t2112*t2224 + t1291*t2448;
  p_output1[10]=-1.*t2112*t2222 + t1291*t2554;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2342 - 0.13205*t2667 + t2026*t2088*t2993 + t2248*t3013 + t2318*t3117 + t2337*t3122 + var1[0];
  p_output1[13]=0. - 0.183*t2515 - 0.13205*t2722 + t2088*t2224*t2993 + t2378*t3013 + t2391*t3117 + t2448*t3122 + var1[1];
  p_output1[14]=0. - 0.183*t2597 - 0.13205*t2756 - 1.*t2222*t2993 + t2088*t2131*t3013 + t2088*t2240*t3117 + t2554*t3122 + var1[2];
  p_output1[15]=1.;
}



void H_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
