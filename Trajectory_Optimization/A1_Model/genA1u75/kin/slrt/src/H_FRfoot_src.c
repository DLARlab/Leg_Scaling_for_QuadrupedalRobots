/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot_src.h"

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
  double t418;
  double t1309;
  double t1356;
  double t1336;
  double t1359;
  double t1290;
  double t1299;
  double t1353;
  double t1541;
  double t1605;
  double t1637;
  double t1642;
  double t1786;
  double t1847;
  double t1859;
  double t1862;
  double t1958;
  double t888;
  double t1962;
  double t296;
  double t2414;
  double t2491;
  double t2531;
  double t2581;
  double t2582;
  double t2739;
  double t2761;
  double t2778;
  double t2786;
  double t2211;
  double t2885;
  double t2890;
  double t2918;
  double t2145;
  double t2146;
  double t2191;
  double t1296;
  double t2086;
  double t2105;
  double t2804;
  double t2823;
  double t2855;
  double t2398;
  double t2787;
  double t2795;
  double t3091;
  double t3135;
  double t3239;
  double t2873;
  double t2974;
  double t2987;
  double t3469;
  double t3498;
  double t3583;
  double t4421;
  double t4437;
  double t2123;
  double t2268;
  double t2284;
  double t3745;
  double t3754;
  double t3869;
  double t4011;
  double t4017;
  double t4043;
  double t4071;
  double t4097;
  double t4105;
  double t4119;
  double t4129;
  double t4201;
  double t4202;
  double t3585;
  double t3619;
  double t3674;
  double t4323;
  double t4384;
  double t4478;
  double t4487;
  double t4488;
  double t4546;
  double t4564;
  double t4625;
  double t2800;
  double t2857;
  double t2862;
  double t3874;
  double t3887;
  double t3928;
  double t3702;
  double t3705;
  double t3737;
  double t3002;
  double t3261;
  double t3412;
  double t3973;
  double t3979;
  double t3989;
  t418 = Cos(var1[3]);
  t1309 = Cos(var1[5]);
  t1356 = Sin(var1[3]);
  t1336 = Sin(var1[4]);
  t1359 = Sin(var1[5]);
  t1290 = Cos(var1[7]);
  t1299 = Cos(var1[6]);
  t1353 = t418*t1309*t1336;
  t1541 = t1356*t1359;
  t1605 = t1353 + t1541;
  t1637 = t1299*t1605;
  t1642 = -1.*t1309*t1356;
  t1786 = t418*t1336*t1359;
  t1847 = t1642 + t1786;
  t1859 = Sin(var1[6]);
  t1862 = -1.*t1847*t1859;
  t1958 = t1637 + t1862;
  t888 = Cos(var1[4]);
  t1962 = Sin(var1[7]);
  t296 = Cos(var1[8]);
  t2414 = t1309*t1356*t1336;
  t2491 = -1.*t418*t1359;
  t2531 = t2414 + t2491;
  t2581 = t1299*t2531;
  t2582 = t418*t1309;
  t2739 = t1356*t1336*t1359;
  t2761 = t2582 + t2739;
  t2778 = -1.*t2761*t1859;
  t2786 = t2581 + t2778;
  t2211 = Sin(var1[8]);
  t2885 = t888*t1309*t1299;
  t2890 = -1.*t888*t1359*t1859;
  t2918 = t2885 + t2890;
  t2145 = t1290*t1958;
  t2146 = t418*t888*t1962;
  t2191 = t2145 + t2146;
  t1296 = t418*t888*t1290;
  t2086 = -1.*t1958*t1962;
  t2105 = t1296 + t2086;
  t2804 = t1290*t2786;
  t2823 = t888*t1356*t1962;
  t2855 = t2804 + t2823;
  t2398 = t888*t1290*t1356;
  t2787 = -1.*t2786*t1962;
  t2795 = t2398 + t2787;
  t3091 = t1290*t2918;
  t3135 = -1.*t1336*t1962;
  t3239 = t3091 + t3135;
  t2873 = -1.*t1290*t1336;
  t2974 = -1.*t2918*t1962;
  t2987 = t2873 + t2974;
  t3469 = t1299*t1847;
  t3498 = t1605*t1859;
  t3583 = t3469 + t3498;
  t4421 = -1.*t296;
  t4437 = 1. + t4421;
  t2123 = t296*t2105;
  t2268 = -1.*t2191*t2211;
  t2284 = t2123 + t2268;
  t3745 = t296*t2191;
  t3754 = t2105*t2211;
  t3869 = t3745 + t3754;
  t4011 = -1.*t1290;
  t4017 = 1. + t4011;
  t4043 = 0.183*t4017;
  t4071 = 0. + t4043;
  t4097 = -1.*t1299;
  t4105 = 1. + t4097;
  t4119 = -0.047*t4105;
  t4129 = 0. + t4119;
  t4201 = 0.047*t1859;
  t4202 = 0. + t4201;
  t3585 = t1299*t2761;
  t3619 = t2531*t1859;
  t3674 = t3585 + t3619;
  t4323 = 0.183*t1962;
  t4384 = 0. + t4323;
  t4478 = 0.183*t4437;
  t4487 = 0.15*t2211;
  t4488 = 0. + t4478 + t4487;
  t4546 = -0.15*t4437;
  t4564 = 0.183*t2211;
  t4625 = 0. + t4546 + t4564;
  t2800 = t296*t2795;
  t2857 = -1.*t2855*t2211;
  t2862 = t2800 + t2857;
  t3874 = t296*t2855;
  t3887 = t2795*t2211;
  t3928 = t3874 + t3887;
  t3702 = t888*t1299*t1359;
  t3705 = t888*t1309*t1859;
  t3737 = t3702 + t3705;
  t3002 = t296*t2987;
  t3261 = -1.*t3239*t2211;
  t3412 = t3002 + t3261;
  t3973 = t296*t3239;
  t3979 = t2987*t2211;
  t3989 = t3973 + t3979;
  p_output1[0]=t2284;
  p_output1[1]=t2862;
  p_output1[2]=t3412;
  p_output1[3]=0.;
  p_output1[4]=t3583;
  p_output1[5]=t3674;
  p_output1[6]=t3737;
  p_output1[7]=0.;
  p_output1[8]=t3869;
  p_output1[9]=t3928;
  p_output1[10]=t3989;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2284 - 0.11079*t3583 - 0.3*t3869 + t1847*t4129 + t1605*t4202 + t1958*t4384 + t2105*t4488 + t2191*t4625 + t4071*t418*t888 + var1[0];
  p_output1[13]=0. + 0.183*t2862 - 0.11079*t3674 - 0.3*t3928 + t2761*t4129 + t2531*t4202 + t2786*t4384 + t2795*t4488 + t2855*t4625 + t1356*t4071*t888 + var1[1];
  p_output1[14]=0. + 0.183*t3412 - 0.11079*t3737 - 0.3*t3989 - 1.*t1336*t4071 + t2918*t4384 + t2987*t4488 + t3239*t4625 + t1359*t4129*t888 + t1309*t4202*t888 + var1[2];
  p_output1[15]=1.;
}



void H_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
