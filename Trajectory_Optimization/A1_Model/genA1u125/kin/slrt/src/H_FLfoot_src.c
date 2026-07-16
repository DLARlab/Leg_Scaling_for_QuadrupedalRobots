/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:49 GMT-05:00
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
  double t551;
  double t1237;
  double t1623;
  double t1393;
  double t1669;
  double t1203;
  double t852;
  double t905;
  double t1207;
  double t1558;
  double t1880;
  double t1911;
  double t1943;
  double t1988;
  double t2007;
  double t2014;
  double t2144;
  double t2153;
  double t2161;
  double t344;
  double t2344;
  double t2543;
  double t2610;
  double t2754;
  double t2804;
  double t2826;
  double t2834;
  double t2843;
  double t2973;
  double t2974;
  double t3331;
  double t3339;
  double t3390;
  double t1193;
  double t2176;
  double t2185;
  double t2436;
  double t2449;
  double t2465;
  double t2526;
  double t3019;
  double t3021;
  double t3046;
  double t3049;
  double t3180;
  double t3325;
  double t3391;
  double t3420;
  double t3432;
  double t3447;
  double t3484;
  double t3557;
  double t3643;
  double t3659;
  double t4842;
  double t4958;
  double t2213;
  double t2477;
  double t2511;
  double t4137;
  double t4152;
  double t4187;
  double t4485;
  double t4525;
  double t4549;
  double t4553;
  double t4598;
  double t4599;
  double t4719;
  double t4725;
  double t4728;
  double t4745;
  double t3708;
  double t3815;
  double t3915;
  double t4786;
  double t4803;
  double t4986;
  double t4996;
  double t5063;
  double t5202;
  double t5242;
  double t5294;
  double t3023;
  double t3195;
  double t3276;
  double t4217;
  double t4241;
  double t4290;
  double t3942;
  double t3965;
  double t3979;
  double t3422;
  double t3488;
  double t3552;
  double t4341;
  double t4452;
  double t4484;
  t551 = Cos(var1[3]);
  t1237 = Cos(var1[5]);
  t1623 = Sin(var1[3]);
  t1393 = Sin(var1[4]);
  t1669 = Sin(var1[5]);
  t1203 = Cos(var1[10]);
  t852 = Cos(var1[4]);
  t905 = Sin(var1[10]);
  t1207 = Cos(var1[9]);
  t1558 = t551*t1237*t1393;
  t1880 = t1623*t1669;
  t1911 = t1558 + t1880;
  t1943 = t1207*t1911;
  t1988 = Sin(var1[9]);
  t2007 = -1.*t1237*t1623;
  t2014 = t551*t1393*t1669;
  t2144 = t2007 + t2014;
  t2153 = -1.*t1988*t2144;
  t2161 = t1943 + t2153;
  t344 = Sin(var1[11]);
  t2344 = Cos(var1[11]);
  t2543 = t1237*t1623*t1393;
  t2610 = -1.*t551*t1669;
  t2754 = t2543 + t2610;
  t2804 = t1207*t2754;
  t2826 = t551*t1237;
  t2834 = t1623*t1393*t1669;
  t2843 = t2826 + t2834;
  t2973 = -1.*t1988*t2843;
  t2974 = t2804 + t2973;
  t3331 = t1207*t852*t1237;
  t3339 = -1.*t852*t1988*t1669;
  t3390 = t3331 + t3339;
  t1193 = t551*t852*t905;
  t2176 = t1203*t2161;
  t2185 = t1193 + t2176;
  t2436 = t1203*t551*t852;
  t2449 = -1.*t905*t2161;
  t2465 = t2436 + t2449;
  t2526 = t852*t905*t1623;
  t3019 = t1203*t2974;
  t3021 = t2526 + t3019;
  t3046 = t1203*t852*t1623;
  t3049 = -1.*t905*t2974;
  t3180 = t3046 + t3049;
  t3325 = -1.*t905*t1393;
  t3391 = t1203*t3390;
  t3420 = t3325 + t3391;
  t3432 = -1.*t1203*t1393;
  t3447 = -1.*t905*t3390;
  t3484 = t3432 + t3447;
  t3557 = t1988*t1911;
  t3643 = t1207*t2144;
  t3659 = t3557 + t3643;
  t4842 = -1.*t2344;
  t4958 = 1. + t4842;
  t2213 = -1.*t344*t2185;
  t2477 = t2344*t2465;
  t2511 = t2213 + t2477;
  t4137 = t2344*t2185;
  t4152 = t344*t2465;
  t4187 = t4137 + t4152;
  t4485 = -1.*t1203;
  t4525 = 1. + t4485;
  t4549 = 0.183*t4525;
  t4553 = 0. + t4549;
  t4598 = -0.047*t1988;
  t4599 = 0. + t4598;
  t4719 = -1.*t1207;
  t4725 = 1. + t4719;
  t4728 = 0.047*t4725;
  t4745 = 0. + t4728;
  t3708 = t1988*t2754;
  t3815 = t1207*t2843;
  t3915 = t3708 + t3815;
  t4786 = 0.183*t905;
  t4803 = 0. + t4786;
  t4986 = -0.25*t4958;
  t4996 = 0.183*t344;
  t5063 = 0. + t4986 + t4996;
  t5202 = 0.183*t4958;
  t5242 = 0.25*t344;
  t5294 = 0. + t5202 + t5242;
  t3023 = -1.*t344*t3021;
  t3195 = t2344*t3180;
  t3276 = t3023 + t3195;
  t4217 = t2344*t3021;
  t4241 = t344*t3180;
  t4290 = t4217 + t4241;
  t3942 = t852*t1237*t1988;
  t3965 = t1207*t852*t1669;
  t3979 = t3942 + t3965;
  t3422 = -1.*t344*t3420;
  t3488 = t2344*t3484;
  t3552 = t3422 + t3488;
  t4341 = t2344*t3420;
  t4452 = t344*t3484;
  t4484 = t4341 + t4452;
  p_output1[0]=t2511;
  p_output1[1]=t3276;
  p_output1[2]=t3552;
  p_output1[3]=0.;
  p_output1[4]=t3659;
  p_output1[5]=t3915;
  p_output1[6]=t3979;
  p_output1[7]=0.;
  p_output1[8]=t4187;
  p_output1[9]=t4290;
  p_output1[10]=t4484;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2511 + 0.15331*t3659 - 0.5*t4187 + t1911*t4599 + t2144*t4745 + t2161*t4803 + t2185*t5063 + t2465*t5294 + t4553*t551*t852 + var1[0];
  p_output1[13]=0. + 0.183*t3276 + 0.15331*t3915 - 0.5*t4290 + t2754*t4599 + t2843*t4745 + t2974*t4803 + t3021*t5063 + t3180*t5294 + t1623*t4553*t852 + var1[1];
  p_output1[14]=0. + 0.183*t3552 + 0.15331*t3979 - 0.5*t4484 - 1.*t1393*t4553 + t3390*t4803 + t3420*t5063 + t3484*t5294 + t1237*t4599*t852 + t1669*t4745*t852 + var1[2];
  p_output1[15]=1.;
}



void H_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
