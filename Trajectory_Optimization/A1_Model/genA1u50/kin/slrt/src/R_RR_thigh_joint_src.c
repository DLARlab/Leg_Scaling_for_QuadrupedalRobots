/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint_src.h"

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
  double t3267;
  double t3291;
  double t3304;
  double t3300;
  double t3305;
  double t3187;
  double t3268;
  double t3287;
  double t3288;
  double t3309;
  double t3303;
  double t3306;
  double t3307;
  double t3310;
  double t3311;
  double t3312;
  double t3318;
  double t3319;
  double t3320;
  double t3322;
  double t3323;
  double t3324;
  double t3308;
  double t3313;
  double t3314;
  double t3321;
  double t3325;
  double t3326;
  double t3330;
  double t3331;
  double t3332;
  t3267 = Cos(var1[3]);
  t3291 = Cos(var1[5]);
  t3304 = Sin(var1[3]);
  t3300 = Sin(var1[4]);
  t3305 = Sin(var1[5]);
  t3187 = Cos(var1[13]);
  t3268 = Cos(var1[4]);
  t3287 = Sin(var1[13]);
  t3288 = Cos(var1[12]);
  t3309 = Sin(var1[12]);
  t3303 = t3267*t3291*t3300;
  t3306 = t3304*t3305;
  t3307 = t3303 + t3306;
  t3310 = -1.*t3291*t3304;
  t3311 = t3267*t3300*t3305;
  t3312 = t3310 + t3311;
  t3318 = t3291*t3304*t3300;
  t3319 = -1.*t3267*t3305;
  t3320 = t3318 + t3319;
  t3322 = t3267*t3291;
  t3323 = t3304*t3300*t3305;
  t3324 = t3322 + t3323;
  t3308 = t3288*t3307;
  t3313 = -1.*t3309*t3312;
  t3314 = t3308 + t3313;
  t3321 = t3288*t3320;
  t3325 = -1.*t3309*t3324;
  t3326 = t3321 + t3325;
  t3330 = t3288*t3268*t3291;
  t3331 = -1.*t3268*t3309*t3305;
  t3332 = t3330 + t3331;
  p_output1[0]=t3187*t3267*t3268 - 1.*t3287*t3314;
  p_output1[1]=t3187*t3268*t3304 - 1.*t3287*t3326;
  p_output1[2]=-1.*t3187*t3300 - 1.*t3287*t3332;
  p_output1[3]=t3307*t3309 + t3288*t3312;
  p_output1[4]=t3309*t3320 + t3288*t3324;
  p_output1[5]=t3268*t3288*t3305 + t3268*t3291*t3309;
  p_output1[6]=t3267*t3268*t3287 + t3187*t3314;
  p_output1[7]=t3268*t3287*t3304 + t3187*t3326;
  p_output1[8]=-1.*t3287*t3300 + t3187*t3332;
}



void R_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
