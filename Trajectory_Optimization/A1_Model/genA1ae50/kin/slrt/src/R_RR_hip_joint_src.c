/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint_src.h"

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
  double t7753;
  double t7459;
  double t7892;
  double t7843;
  double t7961;
  double t7979;
  double t7954;
  double t8015;
  double t7969;
  double t7980;
  double t7997;
  double t8019;
  double t8021;
  double t8022;
  double t8032;
  double t8035;
  double t8036;
  double t8046;
  double t8049;
  double t8056;
  t7753 = Cos(var1[4]);
  t7459 = Cos(var1[3]);
  t7892 = Sin(var1[4]);
  t7843 = Sin(var1[3]);
  t7961 = Cos(var1[5]);
  t7979 = Sin(var1[5]);
  t7954 = Sin(var1[12]);
  t8015 = Cos(var1[12]);
  t7969 = t7459*t7961*t7892;
  t7980 = t7843*t7979;
  t7997 = t7969 + t7980;
  t8019 = -1.*t7961*t7843;
  t8021 = t7459*t7892*t7979;
  t8022 = t8019 + t8021;
  t8032 = t7961*t7843*t7892;
  t8035 = -1.*t7459*t7979;
  t8036 = t8032 + t8035;
  t8046 = t7459*t7961;
  t8049 = t7843*t7892*t7979;
  t8056 = t8046 + t8049;
  p_output1[0]=t7459*t7753;
  p_output1[1]=t7753*t7843;
  p_output1[2]=-1.*t7892;
  p_output1[3]=t7954*t7997 + t8015*t8022;
  p_output1[4]=t7954*t8036 + t8015*t8056;
  p_output1[5]=t7753*t7954*t7961 + t7753*t7979*t8015;
  p_output1[6]=t7997*t8015 - 1.*t7954*t8022;
  p_output1[7]=t8015*t8036 - 1.*t7954*t8056;
  p_output1[8]=-1.*t7753*t7954*t7979 + t7753*t7961*t8015;
}



void R_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
