/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint_src.h"

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
  double t20;
  double t2304;
  double t2393;
  double t2307;
  double t2395;
  double t587;
  double t1258;
  double t2028;
  double t2440;
  double t2443;
  double t2435;
  double t2436;
  double t2439;
  double t2310;
  double t2406;
  double t2429;
  double t2453;
  double t2454;
  double t2455;
  double t2447;
  double t2449;
  double t2450;
  double t2434;
  double t2441;
  double t2442;
  double t2452;
  double t2457;
  double t2459;
  double t2464;
  double t2465;
  double t2467;
  t20 = Cos(var1[3]);
  t2304 = Cos(var1[5]);
  t2393 = Sin(var1[3]);
  t2307 = Sin(var1[4]);
  t2395 = Sin(var1[5]);
  t587 = Cos(var1[4]);
  t1258 = Cos(var1[7]);
  t2028 = Cos(var1[6]);
  t2440 = Sin(var1[6]);
  t2443 = Sin(var1[7]);
  t2435 = -1.*t2304*t2393;
  t2436 = t20*t2307*t2395;
  t2439 = t2435 + t2436;
  t2310 = t20*t2304*t2307;
  t2406 = t2393*t2395;
  t2429 = t2310 + t2406;
  t2453 = t20*t2304;
  t2454 = t2393*t2307*t2395;
  t2455 = t2453 + t2454;
  t2447 = t2304*t2393*t2307;
  t2449 = -1.*t20*t2395;
  t2450 = t2447 + t2449;
  t2434 = t2028*t2429;
  t2441 = -1.*t2439*t2440;
  t2442 = t2434 + t2441;
  t2452 = t2028*t2450;
  t2457 = -1.*t2455*t2440;
  t2459 = t2452 + t2457;
  t2464 = t587*t2304*t2028;
  t2465 = -1.*t587*t2395*t2440;
  t2467 = t2464 + t2465;
  p_output1[0]=-1.*t2442*t2443 + t1258*t20*t587;
  p_output1[1]=-1.*t2443*t2459 + t1258*t2393*t587;
  p_output1[2]=-1.*t1258*t2307 - 1.*t2443*t2467;
  p_output1[3]=t2028*t2439 + t2429*t2440;
  p_output1[4]=t2440*t2450 + t2028*t2455;
  p_output1[5]=t2028*t2395*t587 + t2304*t2440*t587;
  p_output1[6]=t1258*t2442 + t20*t2443*t587;
  p_output1[7]=t1258*t2459 + t2393*t2443*t587;
  p_output1[8]=-1.*t2307*t2443 + t1258*t2467;
}



void R_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
