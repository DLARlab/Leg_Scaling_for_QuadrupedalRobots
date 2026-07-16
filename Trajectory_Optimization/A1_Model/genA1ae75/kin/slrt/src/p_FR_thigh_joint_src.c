/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint_src.h"

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
  double t2120;
  double t3067;
  double t3083;
  double t3079;
  double t3142;
  double t3001;
  double t3081;
  double t3192;
  double t3210;
  double t3223;
  double t3249;
  double t3294;
  double t3301;
  double t2728;
  double t2823;
  double t3376;
  double t3378;
  double t3380;
  double t3381;
  double t2882;
  double t2896;
  double t2962;
  double t2983;
  double t3007;
  double t3036;
  double t3046;
  double t3059;
  double t3305;
  double t3310;
  double t3504;
  double t3510;
  double t3514;
  double t3533;
  double t3534;
  double t3549;
  double t3386;
  double t3391;
  double t3696;
  double t3702;
  double t3704;
  double t3879;
  double t3906;
  double t3924;
  t2120 = Cos(var1[3]);
  t3067 = Cos(var1[5]);
  t3083 = Sin(var1[4]);
  t3079 = Sin(var1[3]);
  t3142 = Sin(var1[5]);
  t3001 = Cos(var1[6]);
  t3081 = -1.*t3067*t3079;
  t3192 = t2120*t3083*t3142;
  t3210 = t3081 + t3192;
  t3223 = t2120*t3067*t3083;
  t3249 = t3079*t3142;
  t3294 = t3223 + t3249;
  t3301 = Sin(var1[6]);
  t2728 = Cos(var1[4]);
  t2823 = Cos(var1[7]);
  t3376 = t3001*t3294;
  t3378 = -1.*t3210*t3301;
  t3380 = t3376 + t3378;
  t3381 = Sin(var1[7]);
  t2882 = -1.*t2823;
  t2896 = 1. + t2882;
  t2962 = 0.183*t2896;
  t2983 = 0. + t2962;
  t3007 = -1.*t3001;
  t3036 = 1. + t3007;
  t3046 = -0.047*t3036;
  t3059 = 0. + t3046;
  t3305 = 0.047*t3301;
  t3310 = 0. + t3305;
  t3504 = t2120*t3067;
  t3510 = t3079*t3083*t3142;
  t3514 = t3504 + t3510;
  t3533 = t3067*t3079*t3083;
  t3534 = -1.*t2120*t3142;
  t3549 = t3533 + t3534;
  t3386 = 0.183*t3381;
  t3391 = 0. + t3386;
  t3696 = t3001*t3549;
  t3702 = -1.*t3514*t3301;
  t3704 = t3696 + t3702;
  t3879 = t2728*t3067*t3001;
  t3906 = -1.*t2728*t3142*t3301;
  t3924 = t3879 + t3906;
  p_output1[0]=0. + t2120*t2728*t2983 + t3059*t3210 - 0.13205*(t3001*t3210 + t3294*t3301) + t3294*t3310 + 0.183*(t2120*t2728*t2823 - 1.*t3380*t3381) + t3380*t3391 + var1[0];
  p_output1[1]=0. + t2728*t2983*t3079 + t3059*t3514 + t3310*t3549 - 0.13205*(t3001*t3514 + t3301*t3549) + t3391*t3704 + 0.183*(t2728*t2823*t3079 - 1.*t3381*t3704) + var1[1];
  p_output1[2]=0. - 1.*t2983*t3083 + t2728*t3059*t3142 - 0.13205*(t2728*t3001*t3142 + t2728*t3067*t3301) + t2728*t3067*t3310 + t3391*t3924 + 0.183*(-1.*t2823*t3083 - 1.*t3381*t3924) + var1[2];
}



void p_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
