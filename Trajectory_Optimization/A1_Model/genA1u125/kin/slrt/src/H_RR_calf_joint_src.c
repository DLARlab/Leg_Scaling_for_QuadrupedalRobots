/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint_src.h"

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
  double t521;
  double t965;
  double t1244;
  double t986;
  double t1259;
  double t754;
  double t608;
  double t647;
  double t878;
  double t1189;
  double t1284;
  double t1305;
  double t1351;
  double t1375;
  double t1403;
  double t1505;
  double t1518;
  double t1539;
  double t1614;
  double t246;
  double t1925;
  double t2343;
  double t2356;
  double t2403;
  double t2431;
  double t2441;
  double t2489;
  double t2490;
  double t2495;
  double t2551;
  double t2618;
  double t2628;
  double t2642;
  double t711;
  double t1642;
  double t1733;
  double t1949;
  double t2039;
  double t2085;
  double t2341;
  double t2554;
  double t2558;
  double t2567;
  double t2581;
  double t2588;
  double t2617;
  double t2649;
  double t2659;
  double t2665;
  double t2667;
  double t2679;
  double t3013;
  double t3047;
  double t3142;
  double t4407;
  double t4446;
  double t1835;
  double t2232;
  double t2278;
  double t3273;
  double t3312;
  double t3319;
  double t3494;
  double t3566;
  double t3652;
  double t3692;
  double t3742;
  double t3765;
  double t3883;
  double t3977;
  double t3980;
  double t4056;
  double t3159;
  double t3181;
  double t3214;
  double t4120;
  double t4328;
  double t4495;
  double t4500;
  double t4560;
  double t4593;
  double t4606;
  double t4649;
  double t2566;
  double t2597;
  double t2601;
  double t3324;
  double t3346;
  double t3347;
  double t3216;
  double t3217;
  double t3261;
  double t2662;
  double t2753;
  double t2787;
  double t3374;
  double t3384;
  double t3421;
  t521 = Cos(var1[3]);
  t965 = Cos(var1[5]);
  t1244 = Sin(var1[3]);
  t986 = Sin(var1[4]);
  t1259 = Sin(var1[5]);
  t754 = Cos(var1[13]);
  t608 = Cos(var1[4]);
  t647 = Sin(var1[13]);
  t878 = Cos(var1[12]);
  t1189 = t521*t965*t986;
  t1284 = t1244*t1259;
  t1305 = t1189 + t1284;
  t1351 = t878*t1305;
  t1375 = Sin(var1[12]);
  t1403 = -1.*t965*t1244;
  t1505 = t521*t986*t1259;
  t1518 = t1403 + t1505;
  t1539 = -1.*t1375*t1518;
  t1614 = t1351 + t1539;
  t246 = Sin(var1[14]);
  t1925 = Cos(var1[14]);
  t2343 = t965*t1244*t986;
  t2356 = -1.*t521*t1259;
  t2403 = t2343 + t2356;
  t2431 = t878*t2403;
  t2441 = t521*t965;
  t2489 = t1244*t986*t1259;
  t2490 = t2441 + t2489;
  t2495 = -1.*t1375*t2490;
  t2551 = t2431 + t2495;
  t2618 = t878*t608*t965;
  t2628 = -1.*t608*t1375*t1259;
  t2642 = t2618 + t2628;
  t711 = t521*t608*t647;
  t1642 = t754*t1614;
  t1733 = t711 + t1642;
  t1949 = t754*t521*t608;
  t2039 = -1.*t647*t1614;
  t2085 = t1949 + t2039;
  t2341 = t608*t647*t1244;
  t2554 = t754*t2551;
  t2558 = t2341 + t2554;
  t2567 = t754*t608*t1244;
  t2581 = -1.*t647*t2551;
  t2588 = t2567 + t2581;
  t2617 = -1.*t647*t986;
  t2649 = t754*t2642;
  t2659 = t2617 + t2649;
  t2665 = -1.*t754*t986;
  t2667 = -1.*t647*t2642;
  t2679 = t2665 + t2667;
  t3013 = t1375*t1305;
  t3047 = t878*t1518;
  t3142 = t3013 + t3047;
  t4407 = -1.*t1925;
  t4446 = 1. + t4407;
  t1835 = -1.*t246*t1733;
  t2232 = t1925*t2085;
  t2278 = t1835 + t2232;
  t3273 = t1925*t1733;
  t3312 = t246*t2085;
  t3319 = t3273 + t3312;
  t3494 = -1.*t754;
  t3566 = 1. + t3494;
  t3652 = -0.183*t3566;
  t3692 = 0. + t3652;
  t3742 = 0.047*t1375;
  t3765 = 0. + t3742;
  t3883 = -1.*t878;
  t3977 = 1. + t3883;
  t3980 = -0.047*t3977;
  t4056 = 0. + t3980;
  t3159 = t1375*t2403;
  t3181 = t878*t2490;
  t3214 = t3159 + t3181;
  t4120 = -0.183*t647;
  t4328 = 0. + t4120;
  t4495 = -0.25*t4446;
  t4500 = -0.183*t246;
  t4560 = 0. + t4495 + t4500;
  t4593 = -0.183*t4446;
  t4606 = 0.25*t246;
  t4649 = 0. + t4593 + t4606;
  t2566 = -1.*t246*t2558;
  t2597 = t1925*t2588;
  t2601 = t2566 + t2597;
  t3324 = t1925*t2558;
  t3346 = t246*t2588;
  t3347 = t3324 + t3346;
  t3216 = t608*t965*t1375;
  t3217 = t878*t608*t1259;
  t3261 = t3216 + t3217;
  t2662 = -1.*t246*t2659;
  t2753 = t1925*t2679;
  t2787 = t2662 + t2753;
  t3374 = t1925*t2659;
  t3384 = t246*t2679;
  t3421 = t3374 + t3384;
  p_output1[0]=t2278;
  p_output1[1]=t2601;
  p_output1[2]=t2787;
  p_output1[3]=0.;
  p_output1[4]=t3142;
  p_output1[5]=t3214;
  p_output1[6]=t3261;
  p_output1[7]=0.;
  p_output1[8]=t3319;
  p_output1[9]=t3347;
  p_output1[10]=t3421;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2278 - 0.15331*t3142 - 0.25*t3319 + t1305*t3765 + t1518*t4056 + t1614*t4328 + t1733*t4560 + t2085*t4649 + t3692*t521*t608 + var1[0];
  p_output1[13]=0. - 0.183*t2601 - 0.15331*t3214 - 0.25*t3347 + t2403*t3765 + t2490*t4056 + t2551*t4328 + t2558*t4560 + t2588*t4649 + t1244*t3692*t608 + var1[1];
  p_output1[14]=0. - 0.183*t2787 - 0.15331*t3261 - 0.25*t3421 + t2642*t4328 + t2659*t4560 + t2679*t4649 + t1259*t4056*t608 + t3765*t608*t965 - 1.*t3692*t986 + var1[2];
  p_output1[15]=1.;
}



void H_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
