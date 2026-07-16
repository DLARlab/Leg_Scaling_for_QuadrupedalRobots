/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint_src.h"

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
  double t488;
  double t4853;
  double t5316;
  double t5011;
  double t5406;
  double t2661;
  double t5285;
  double t5570;
  double t5693;
  double t6123;
  double t6285;
  double t6286;
  double t6288;
  double t558;
  double t3833;
  double t3841;
  double t6254;
  double t6268;
  double t6272;
  double t6280;
  double t6400;
  double t6413;
  double t6422;
  double t6445;
  double t6446;
  double t6452;
  t488 = Cos(var1[3]);
  t4853 = Cos(var1[5]);
  t5316 = Sin(var1[3]);
  t5011 = Sin(var1[4]);
  t5406 = Sin(var1[5]);
  t2661 = Sin(var1[12]);
  t5285 = t488*t4853*t5011;
  t5570 = t5316*t5406;
  t5693 = t5285 + t5570;
  t6123 = Cos(var1[12]);
  t6285 = -1.*t4853*t5316;
  t6286 = t488*t5011*t5406;
  t6288 = t6285 + t6286;
  t558 = Cos(var1[4]);
  t3833 = 0.047*t2661;
  t3841 = 0. + t3833;
  t6254 = -1.*t6123;
  t6268 = 1. + t6254;
  t6272 = -0.047*t6268;
  t6280 = 0. + t6272;
  t6400 = t4853*t5316*t5011;
  t6413 = -1.*t488*t5406;
  t6422 = t6400 + t6413;
  t6445 = t488*t4853;
  t6446 = t5316*t5011*t5406;
  t6452 = t6445 + t6446;
  p_output1[0]=0. - 0.183*t488*t558 + t3841*t5693 + t6280*t6288 - 0.047*(t2661*t5693 + t6123*t6288) + var1[0];
  p_output1[1]=0. - 0.183*t5316*t558 + t3841*t6422 + t6280*t6452 - 0.047*(t2661*t6422 + t6123*t6452) + var1[1];
  p_output1[2]=0. + 0.183*t5011 + t3841*t4853*t558 - 0.047*(t2661*t4853*t558 + t5406*t558*t6123) + t5406*t558*t6280 + var1[2];
}



void p_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
