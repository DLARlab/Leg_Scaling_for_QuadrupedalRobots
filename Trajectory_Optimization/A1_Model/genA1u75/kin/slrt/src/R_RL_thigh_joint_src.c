/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:10 GMT-05:00
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
  double t1784;
  double t5874;
  double t6379;
  double t5945;
  double t6386;
  double t1740;
  double t2254;
  double t2685;
  double t3962;
  double t6693;
  double t5963;
  double t6447;
  double t6627;
  double t6844;
  double t6941;
  double t7009;
  double t7168;
  double t7194;
  double t7219;
  double t7272;
  double t7408;
  double t7419;
  double t6660;
  double t7025;
  double t7042;
  double t7256;
  double t7471;
  double t7472;
  double t7667;
  double t7705;
  double t7729;
  t1784 = Cos(var1[3]);
  t5874 = Cos(var1[5]);
  t6379 = Sin(var1[3]);
  t5945 = Sin(var1[4]);
  t6386 = Sin(var1[5]);
  t1740 = Cos(var1[16]);
  t2254 = Cos(var1[4]);
  t2685 = Sin(var1[16]);
  t3962 = Cos(var1[15]);
  t6693 = Sin(var1[15]);
  t5963 = t1784*t5874*t5945;
  t6447 = t6379*t6386;
  t6627 = t5963 + t6447;
  t6844 = -1.*t5874*t6379;
  t6941 = t1784*t5945*t6386;
  t7009 = t6844 + t6941;
  t7168 = t5874*t6379*t5945;
  t7194 = -1.*t1784*t6386;
  t7219 = t7168 + t7194;
  t7272 = t1784*t5874;
  t7408 = t6379*t5945*t6386;
  t7419 = t7272 + t7408;
  t6660 = t3962*t6627;
  t7025 = -1.*t6693*t7009;
  t7042 = t6660 + t7025;
  t7256 = t3962*t7219;
  t7471 = -1.*t6693*t7419;
  t7472 = t7256 + t7471;
  t7667 = t3962*t2254*t5874;
  t7705 = -1.*t2254*t6693*t6386;
  t7729 = t7667 + t7705;
  p_output1[0]=t1740*t1784*t2254 - 1.*t2685*t7042;
  p_output1[1]=t1740*t2254*t6379 - 1.*t2685*t7472;
  p_output1[2]=-1.*t1740*t5945 - 1.*t2685*t7729;
  p_output1[3]=t6627*t6693 + t3962*t7009;
  p_output1[4]=t6693*t7219 + t3962*t7419;
  p_output1[5]=t2254*t3962*t6386 + t2254*t5874*t6693;
  p_output1[6]=t1784*t2254*t2685 + t1740*t7042;
  p_output1[7]=t2254*t2685*t6379 + t1740*t7472;
  p_output1[8]=-1.*t2685*t5945 + t1740*t7729;
}



void R_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
