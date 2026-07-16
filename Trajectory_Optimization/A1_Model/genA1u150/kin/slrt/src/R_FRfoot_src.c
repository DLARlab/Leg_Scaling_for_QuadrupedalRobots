/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot_src.h"

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
  double t2685;
  double t3139;
  double t4177;
  double t3795;
  double t4203;
  double t3037;
  double t3046;
  double t3935;
  double t4309;
  double t4459;
  double t4538;
  double t4554;
  double t4562;
  double t4563;
  double t4565;
  double t4576;
  double t4653;
  double t2880;
  double t4668;
  double t2480;
  double t5111;
  double t5118;
  double t5126;
  double t5128;
  double t5143;
  double t5148;
  double t5150;
  double t5186;
  double t5217;
  double t4950;
  double t5586;
  double t5620;
  double t5630;
  double t4813;
  double t4859;
  double t4905;
  double t3038;
  double t4670;
  double t4718;
  double t5327;
  double t5328;
  double t5330;
  double t5069;
  double t5232;
  double t5239;
  double t5705;
  double t5706;
  double t5731;
  double t5446;
  double t5694;
  double t5700;
  t2685 = Cos(var1[3]);
  t3139 = Cos(var1[5]);
  t4177 = Sin(var1[3]);
  t3795 = Sin(var1[4]);
  t4203 = Sin(var1[5]);
  t3037 = Cos(var1[7]);
  t3046 = Cos(var1[6]);
  t3935 = t2685*t3139*t3795;
  t4309 = t4177*t4203;
  t4459 = t3935 + t4309;
  t4538 = t3046*t4459;
  t4554 = -1.*t3139*t4177;
  t4562 = t2685*t3795*t4203;
  t4563 = t4554 + t4562;
  t4565 = Sin(var1[6]);
  t4576 = -1.*t4563*t4565;
  t4653 = t4538 + t4576;
  t2880 = Cos(var1[4]);
  t4668 = Sin(var1[7]);
  t2480 = Cos(var1[8]);
  t5111 = t3139*t4177*t3795;
  t5118 = -1.*t2685*t4203;
  t5126 = t5111 + t5118;
  t5128 = t3046*t5126;
  t5143 = t2685*t3139;
  t5148 = t4177*t3795*t4203;
  t5150 = t5143 + t5148;
  t5186 = -1.*t5150*t4565;
  t5217 = t5128 + t5186;
  t4950 = Sin(var1[8]);
  t5586 = t2880*t3139*t3046;
  t5620 = -1.*t2880*t4203*t4565;
  t5630 = t5586 + t5620;
  t4813 = t3037*t4653;
  t4859 = t2685*t2880*t4668;
  t4905 = t4813 + t4859;
  t3038 = t2685*t2880*t3037;
  t4670 = -1.*t4653*t4668;
  t4718 = t3038 + t4670;
  t5327 = t3037*t5217;
  t5328 = t2880*t4177*t4668;
  t5330 = t5327 + t5328;
  t5069 = t2880*t3037*t4177;
  t5232 = -1.*t5217*t4668;
  t5239 = t5069 + t5232;
  t5705 = t3037*t5630;
  t5706 = -1.*t3795*t4668;
  t5731 = t5705 + t5706;
  t5446 = -1.*t3037*t3795;
  t5694 = -1.*t5630*t4668;
  t5700 = t5446 + t5694;
  p_output1[0]=t2480*t4718 - 1.*t4905*t4950;
  p_output1[1]=t2480*t5239 - 1.*t4950*t5330;
  p_output1[2]=t2480*t5700 - 1.*t4950*t5731;
  p_output1[3]=t3046*t4563 + t4459*t4565;
  p_output1[4]=t4565*t5126 + t3046*t5150;
  p_output1[5]=t2880*t3046*t4203 + t2880*t3139*t4565;
  p_output1[6]=t2480*t4905 + t4718*t4950;
  p_output1[7]=t4950*t5239 + t2480*t5330;
  p_output1[8]=t4950*t5700 + t2480*t5731;
}



void R_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
