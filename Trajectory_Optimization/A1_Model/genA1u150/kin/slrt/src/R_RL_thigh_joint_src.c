/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_thigh_joint_src.h"

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
  double t337;
  double t1411;
  double t2135;
  double t1819;
  double t2242;
  double t271;
  double t502;
  double t666;
  double t970;
  double t2927;
  double t2125;
  double t2675;
  double t2818;
  double t3136;
  double t3178;
  double t3185;
  double t3508;
  double t3531;
  double t3566;
  double t4252;
  double t4310;
  double t4324;
  double t2871;
  double t3246;
  double t3283;
  double t3598;
  double t4385;
  double t4481;
  double t4881;
  double t4968;
  double t5167;
  t337 = Cos(var1[3]);
  t1411 = Cos(var1[5]);
  t2135 = Sin(var1[3]);
  t1819 = Sin(var1[4]);
  t2242 = Sin(var1[5]);
  t271 = Cos(var1[16]);
  t502 = Cos(var1[4]);
  t666 = Sin(var1[16]);
  t970 = Cos(var1[15]);
  t2927 = Sin(var1[15]);
  t2125 = t337*t1411*t1819;
  t2675 = t2135*t2242;
  t2818 = t2125 + t2675;
  t3136 = -1.*t1411*t2135;
  t3178 = t337*t1819*t2242;
  t3185 = t3136 + t3178;
  t3508 = t1411*t2135*t1819;
  t3531 = -1.*t337*t2242;
  t3566 = t3508 + t3531;
  t4252 = t337*t1411;
  t4310 = t2135*t1819*t2242;
  t4324 = t4252 + t4310;
  t2871 = t970*t2818;
  t3246 = -1.*t2927*t3185;
  t3283 = t2871 + t3246;
  t3598 = t970*t3566;
  t4385 = -1.*t2927*t4324;
  t4481 = t3598 + t4385;
  t4881 = t970*t502*t1411;
  t4968 = -1.*t502*t2927*t2242;
  t5167 = t4881 + t4968;
  p_output1[0]=t271*t337*t502 - 1.*t3283*t666;
  p_output1[1]=t2135*t271*t502 - 1.*t4481*t666;
  p_output1[2]=-1.*t1819*t271 - 1.*t5167*t666;
  p_output1[3]=t2818*t2927 + t3185*t970;
  p_output1[4]=t2927*t3566 + t4324*t970;
  p_output1[5]=t1411*t2927*t502 + t2242*t502*t970;
  p_output1[6]=t271*t3283 + t337*t502*t666;
  p_output1[7]=t271*t4481 + t2135*t502*t666;
  p_output1[8]=t271*t5167 - 1.*t1819*t666;
}



void R_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
