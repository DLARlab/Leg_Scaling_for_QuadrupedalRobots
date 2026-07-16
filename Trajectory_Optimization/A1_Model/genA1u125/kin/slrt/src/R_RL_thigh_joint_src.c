/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:43 GMT-05:00
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
  double t499;
  double t2572;
  double t2940;
  double t2607;
  double t2972;
  double t6;
  double t945;
  double t1343;
  double t1427;
  double t3702;
  double t2911;
  double t3480;
  double t3495;
  double t3725;
  double t3904;
  double t3972;
  double t4161;
  double t4201;
  double t4202;
  double t4311;
  double t4323;
  double t4388;
  double t3504;
  double t3994;
  double t4014;
  double t4246;
  double t4395;
  double t4409;
  double t4520;
  double t4527;
  double t4534;
  t499 = Cos(var1[3]);
  t2572 = Cos(var1[5]);
  t2940 = Sin(var1[3]);
  t2607 = Sin(var1[4]);
  t2972 = Sin(var1[5]);
  t6 = Cos(var1[16]);
  t945 = Cos(var1[4]);
  t1343 = Sin(var1[16]);
  t1427 = Cos(var1[15]);
  t3702 = Sin(var1[15]);
  t2911 = t499*t2572*t2607;
  t3480 = t2940*t2972;
  t3495 = t2911 + t3480;
  t3725 = -1.*t2572*t2940;
  t3904 = t499*t2607*t2972;
  t3972 = t3725 + t3904;
  t4161 = t2572*t2940*t2607;
  t4201 = -1.*t499*t2972;
  t4202 = t4161 + t4201;
  t4311 = t499*t2572;
  t4323 = t2940*t2607*t2972;
  t4388 = t4311 + t4323;
  t3504 = t1427*t3495;
  t3994 = -1.*t3702*t3972;
  t4014 = t3504 + t3994;
  t4246 = t1427*t4202;
  t4395 = -1.*t3702*t4388;
  t4409 = t4246 + t4395;
  t4520 = t1427*t945*t2572;
  t4527 = -1.*t945*t3702*t2972;
  t4534 = t4520 + t4527;
  p_output1[0]=-1.*t1343*t4014 + t499*t6*t945;
  p_output1[1]=-1.*t1343*t4409 + t2940*t6*t945;
  p_output1[2]=-1.*t1343*t4534 - 1.*t2607*t6;
  p_output1[3]=t3495*t3702 + t1427*t3972;
  p_output1[4]=t3702*t4202 + t1427*t4388;
  p_output1[5]=t1427*t2972*t945 + t2572*t3702*t945;
  p_output1[6]=t4014*t6 + t1343*t499*t945;
  p_output1[7]=t4409*t6 + t1343*t2940*t945;
  p_output1[8]=-1.*t1343*t2607 + t4534*t6;
}



void R_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
