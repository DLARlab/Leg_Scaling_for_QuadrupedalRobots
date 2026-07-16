/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint_src.h"

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
  double t2243;
  double t2604;
  double t2876;
  double t2608;
  double t3717;
  double t2594;
  double t2636;
  double t3806;
  double t4190;
  double t5219;
  double t5728;
  double t6740;
  double t6862;
  double t2245;
  double t8107;
  double t802;
  double t8233;
  double t8308;
  double t8316;
  double t8357;
  double t8366;
  double t8398;
  double t8449;
  double t8496;
  double t8515;
  double t8522;
  double t8582;
  double t8599;
  double t8630;
  double t1486;
  double t1702;
  double t2202;
  double t2203;
  double t2596;
  double t2600;
  double t5356;
  double t5448;
  double t5687;
  double t5702;
  double t8747;
  double t8776;
  double t8778;
  double t8794;
  double t8818;
  double t8840;
  double t8108;
  double t8192;
  double t8423;
  double t8458;
  double t8491;
  double t8918;
  double t8929;
  double t8939;
  double t8546;
  double t8554;
  double t8564;
  double t8944;
  double t8984;
  double t8998;
  double t9013;
  double t9043;
  double t9047;
  double t9308;
  double t9358;
  double t9416;
  double t9440;
  double t9457;
  double t9485;
  double t9513;
  double t9517;
  double t9532;
  t2243 = Cos(var1[3]);
  t2604 = Cos(var1[5]);
  t2876 = Sin(var1[3]);
  t2608 = Sin(var1[4]);
  t3717 = Sin(var1[5]);
  t2594 = Sin(var1[12]);
  t2636 = t2243*t2604*t2608;
  t3806 = t2876*t3717;
  t4190 = t2636 + t3806;
  t5219 = Cos(var1[12]);
  t5728 = -1.*t2604*t2876;
  t6740 = t2243*t2608*t3717;
  t6862 = t5728 + t6740;
  t2245 = Cos(var1[4]);
  t8107 = Sin(var1[13]);
  t802 = Cos(var1[13]);
  t8233 = t5219*t4190;
  t8308 = -1.*t2594*t6862;
  t8316 = t8233 + t8308;
  t8357 = Cos(var1[14]);
  t8366 = -1.*t8357;
  t8398 = 1. + t8366;
  t8449 = Sin(var1[14]);
  t8496 = t2243*t2245*t8107;
  t8515 = t802*t8316;
  t8522 = t8496 + t8515;
  t8582 = t802*t2243*t2245;
  t8599 = -1.*t8107*t8316;
  t8630 = t8582 + t8599;
  t1486 = -1.*t802;
  t1702 = 1. + t1486;
  t2202 = -0.183*t1702;
  t2203 = 0. + t2202;
  t2596 = 0.047*t2594;
  t2600 = 0. + t2596;
  t5356 = -1.*t5219;
  t5448 = 1. + t5356;
  t5687 = -0.047*t5448;
  t5702 = 0. + t5687;
  t8747 = t2604*t2876*t2608;
  t8776 = -1.*t2243*t3717;
  t8778 = t8747 + t8776;
  t8794 = t2243*t2604;
  t8818 = t2876*t2608*t3717;
  t8840 = t8794 + t8818;
  t8108 = -0.183*t8107;
  t8192 = 0. + t8108;
  t8423 = -0.15*t8398;
  t8458 = -0.183*t8449;
  t8491 = 0. + t8423 + t8458;
  t8918 = t5219*t8778;
  t8929 = -1.*t2594*t8840;
  t8939 = t8918 + t8929;
  t8546 = -0.183*t8398;
  t8554 = 0.15*t8449;
  t8564 = 0. + t8546 + t8554;
  t8944 = t2245*t8107*t2876;
  t8984 = t802*t8939;
  t8998 = t8944 + t8984;
  t9013 = t802*t2245*t2876;
  t9043 = -1.*t8107*t8939;
  t9047 = t9013 + t9043;
  t9308 = t5219*t2245*t2604;
  t9358 = -1.*t2245*t2594*t3717;
  t9416 = t9308 + t9358;
  t9440 = -1.*t8107*t2608;
  t9457 = t802*t9416;
  t9485 = t9440 + t9457;
  t9513 = -1.*t802*t2608;
  t9517 = -1.*t8107*t9416;
  t9532 = t9513 + t9517;
  p_output1[0]=0. + t2203*t2243*t2245 + t2600*t4190 + t5702*t6862 - 0.11079*(t2594*t4190 + t5219*t6862) + t8192*t8316 + t8491*t8522 + t8564*t8630 - 0.183*(-1.*t8449*t8522 + t8357*t8630) - 0.15*(t8357*t8522 + t8449*t8630) + var1[0];
  p_output1[1]=0. + t2203*t2245*t2876 + t2600*t8778 + t5702*t8840 - 0.11079*(t2594*t8778 + t5219*t8840) + t8192*t8939 + t8491*t8998 + t8564*t9047 - 0.183*(-1.*t8449*t8998 + t8357*t9047) - 0.15*(t8357*t8998 + t8449*t9047) + var1[1];
  p_output1[2]=0. + t2245*t2600*t2604 - 1.*t2203*t2608 - 0.11079*(t2245*t2594*t2604 + t2245*t3717*t5219) + t2245*t3717*t5702 + t8192*t9416 + t8491*t9485 + t8564*t9532 - 0.183*(-1.*t8449*t9485 + t8357*t9532) - 0.15*(t8357*t9485 + t8449*t9532) + var1[2];
}



void p_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
