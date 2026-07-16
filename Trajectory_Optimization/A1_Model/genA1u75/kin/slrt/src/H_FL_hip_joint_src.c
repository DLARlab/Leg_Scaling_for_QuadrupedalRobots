/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint_src.h"

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
  double t1709;
  double t1224;
  double t3089;
  double t1940;
  double t3732;
  double t4292;
  double t3486;
  double t5577;
  double t3900;
  double t4345;
  double t4439;
  double t5770;
  double t5799;
  double t6683;
  double t6818;
  double t6911;
  double t7223;
  double t7353;
  double t7467;
  double t7620;
  double t5291;
  double t6803;
  double t6814;
  double t8098;
  double t8110;
  double t8193;
  double t8198;
  double t8241;
  double t8254;
  double t7268;
  double t7625;
  double t7654;
  double t7693;
  double t7701;
  double t7709;
  t1709 = Cos(var1[4]);
  t1224 = Cos(var1[3]);
  t3089 = Sin(var1[4]);
  t1940 = Sin(var1[3]);
  t3732 = Cos(var1[5]);
  t4292 = Sin(var1[5]);
  t3486 = Sin(var1[9]);
  t5577 = Cos(var1[9]);
  t3900 = t1224*t3732*t3089;
  t4345 = t1940*t4292;
  t4439 = t3900 + t4345;
  t5770 = -1.*t3732*t1940;
  t5799 = t1224*t3089*t4292;
  t6683 = t5770 + t5799;
  t6818 = t3732*t1940*t3089;
  t6911 = -1.*t1224*t4292;
  t7223 = t6818 + t6911;
  t7353 = t1224*t3732;
  t7467 = t1940*t3089*t4292;
  t7620 = t7353 + t7467;
  t5291 = t3486*t4439;
  t6803 = t5577*t6683;
  t6814 = t5291 + t6803;
  t8098 = -0.047*t3486;
  t8110 = 0. + t8098;
  t8193 = -1.*t5577;
  t8198 = 1. + t8193;
  t8241 = 0.047*t8198;
  t8254 = 0. + t8241;
  t7268 = t3486*t7223;
  t7625 = t5577*t7620;
  t7654 = t7268 + t7625;
  t7693 = t1709*t3732*t3486;
  t7701 = t5577*t1709*t4292;
  t7709 = t7693 + t7701;
  p_output1[0]=t1224*t1709;
  p_output1[1]=t1709*t1940;
  p_output1[2]=-1.*t3089;
  p_output1[3]=0.;
  p_output1[4]=t6814;
  p_output1[5]=t7654;
  p_output1[6]=t7709;
  p_output1[7]=0.;
  p_output1[8]=t4439*t5577 - 1.*t3486*t6683;
  p_output1[9]=t5577*t7223 - 1.*t3486*t7620;
  p_output1[10]=-1.*t1709*t3486*t4292 + t1709*t3732*t5577;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1224*t1709 + 0.047*t6814 + t4439*t8110 + t6683*t8254 + var1[0];
  p_output1[13]=0. + 0.183*t1709*t1940 + 0.047*t7654 + t7223*t8110 + t7620*t8254 + var1[1];
  p_output1[14]=0. - 0.183*t3089 + 0.047*t7709 + t1709*t3732*t8110 + t1709*t4292*t8254 + var1[2];
  p_output1[15]=1.;
}



void H_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
