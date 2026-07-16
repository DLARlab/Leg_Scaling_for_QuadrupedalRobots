/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint_src.h"

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
  double t5131;
  double t5184;
  double t5209;
  double t5186;
  double t5215;
  double t5160;
  double t5188;
  double t5216;
  double t5220;
  double t5231;
  double t5243;
  double t5248;
  double t5249;
  double t2543;
  double t5134;
  double t5271;
  double t5285;
  double t5288;
  double t5289;
  double t2641;
  double t3419;
  double t5102;
  double t5129;
  double t5164;
  double t5165;
  double t5233;
  double t5234;
  double t5240;
  double t5242;
  double t5350;
  double t5351;
  double t5355;
  double t5366;
  double t5368;
  double t5375;
  double t5274;
  double t5283;
  double t5394;
  double t5397;
  double t5400;
  double t5456;
  double t5459;
  double t5465;
  t5131 = Cos(var1[3]);
  t5184 = Cos(var1[5]);
  t5209 = Sin(var1[3]);
  t5186 = Sin(var1[4]);
  t5215 = Sin(var1[5]);
  t5160 = Sin(var1[9]);
  t5188 = t5131*t5184*t5186;
  t5216 = t5209*t5215;
  t5220 = t5188 + t5216;
  t5231 = Cos(var1[9]);
  t5243 = -1.*t5184*t5209;
  t5248 = t5131*t5186*t5215;
  t5249 = t5243 + t5248;
  t2543 = Cos(var1[10]);
  t5134 = Cos(var1[4]);
  t5271 = Sin(var1[10]);
  t5285 = t5231*t5220;
  t5288 = -1.*t5160*t5249;
  t5289 = t5285 + t5288;
  t2641 = -1.*t2543;
  t3419 = 1. + t2641;
  t5102 = 0.183*t3419;
  t5129 = 0. + t5102;
  t5164 = -0.047*t5160;
  t5165 = 0. + t5164;
  t5233 = -1.*t5231;
  t5234 = 1. + t5233;
  t5240 = 0.047*t5234;
  t5242 = 0. + t5240;
  t5350 = t5184*t5209*t5186;
  t5351 = -1.*t5131*t5215;
  t5355 = t5350 + t5351;
  t5366 = t5131*t5184;
  t5368 = t5209*t5186*t5215;
  t5375 = t5366 + t5368;
  t5274 = 0.183*t5271;
  t5283 = 0. + t5274;
  t5394 = t5231*t5355;
  t5397 = -1.*t5160*t5375;
  t5400 = t5394 + t5397;
  t5456 = t5231*t5134*t5184;
  t5459 = -1.*t5134*t5160*t5215;
  t5465 = t5456 + t5459;
  p_output1[0]=0. + t5129*t5131*t5134 + t5165*t5220 + t5242*t5249 + 0.13205*(t5160*t5220 + t5231*t5249) + t5283*t5289 + 0.183*(t2543*t5131*t5134 - 1.*t5271*t5289) + var1[0];
  p_output1[1]=0. + t5129*t5134*t5209 + t5165*t5355 + t5242*t5375 + 0.13205*(t5160*t5355 + t5231*t5375) + t5283*t5400 + 0.183*(t2543*t5134*t5209 - 1.*t5271*t5400) + var1[1];
  p_output1[2]=0. + t5134*t5165*t5184 - 1.*t5129*t5186 + 0.13205*(t5134*t5160*t5184 + t5134*t5215*t5231) + t5134*t5215*t5242 + t5283*t5465 + 0.183*(-1.*t2543*t5186 - 1.*t5271*t5465) + var1[2];
}



void p_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
