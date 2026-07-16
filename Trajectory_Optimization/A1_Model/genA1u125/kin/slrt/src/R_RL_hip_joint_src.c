/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint_src.h"

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
  double t1365;
  double t1361;
  double t3601;
  double t1923;
  double t4928;
  double t4967;
  double t4713;
  double t5333;
  double t4935;
  double t5089;
  double t5092;
  double t5334;
  double t5371;
  double t5397;
  double t5489;
  double t5490;
  double t5510;
  double t5527;
  double t5572;
  double t5604;
  t1365 = Cos(var1[4]);
  t1361 = Cos(var1[3]);
  t3601 = Sin(var1[4]);
  t1923 = Sin(var1[3]);
  t4928 = Cos(var1[5]);
  t4967 = Sin(var1[5]);
  t4713 = Sin(var1[15]);
  t5333 = Cos(var1[15]);
  t4935 = t1361*t4928*t3601;
  t5089 = t1923*t4967;
  t5092 = t4935 + t5089;
  t5334 = -1.*t4928*t1923;
  t5371 = t1361*t3601*t4967;
  t5397 = t5334 + t5371;
  t5489 = t4928*t1923*t3601;
  t5490 = -1.*t1361*t4967;
  t5510 = t5489 + t5490;
  t5527 = t1361*t4928;
  t5572 = t1923*t3601*t4967;
  t5604 = t5527 + t5572;
  p_output1[0]=t1361*t1365;
  p_output1[1]=t1365*t1923;
  p_output1[2]=-1.*t3601;
  p_output1[3]=t4713*t5092 + t5333*t5397;
  p_output1[4]=t4713*t5510 + t5333*t5604;
  p_output1[5]=t1365*t4713*t4928 + t1365*t4967*t5333;
  p_output1[6]=t5092*t5333 - 1.*t4713*t5397;
  p_output1[7]=t5333*t5510 - 1.*t4713*t5604;
  p_output1[8]=-1.*t1365*t4713*t4967 + t1365*t4928*t5333;
}



void R_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
