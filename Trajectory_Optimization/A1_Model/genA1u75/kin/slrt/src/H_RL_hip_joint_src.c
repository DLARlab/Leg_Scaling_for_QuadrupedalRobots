/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint_src.h"

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
  double t521;
  double t126;
  double t3095;
  double t1836;
  double t3534;
  double t3826;
  double t3294;
  double t5505;
  double t3608;
  double t4425;
  double t4465;
  double t5668;
  double t5676;
  double t6047;
  double t6679;
  double t6913;
  double t6927;
  double t7516;
  double t7539;
  double t7607;
  double t5363;
  double t6580;
  double t6588;
  double t8195;
  double t8233;
  double t8247;
  double t8262;
  double t8275;
  double t8289;
  double t7370;
  double t7714;
  double t7863;
  double t7878;
  double t7930;
  double t7944;
  t521 = Cos(var1[4]);
  t126 = Cos(var1[3]);
  t3095 = Sin(var1[4]);
  t1836 = Sin(var1[3]);
  t3534 = Cos(var1[5]);
  t3826 = Sin(var1[5]);
  t3294 = Sin(var1[15]);
  t5505 = Cos(var1[15]);
  t3608 = t126*t3534*t3095;
  t4425 = t1836*t3826;
  t4465 = t3608 + t4425;
  t5668 = -1.*t3534*t1836;
  t5676 = t126*t3095*t3826;
  t6047 = t5668 + t5676;
  t6679 = t3534*t1836*t3095;
  t6913 = -1.*t126*t3826;
  t6927 = t6679 + t6913;
  t7516 = t126*t3534;
  t7539 = t1836*t3095*t3826;
  t7607 = t7516 + t7539;
  t5363 = t3294*t4465;
  t6580 = t5505*t6047;
  t6588 = t5363 + t6580;
  t8195 = -0.047*t3294;
  t8233 = 0. + t8195;
  t8247 = -1.*t5505;
  t8262 = 1. + t8247;
  t8275 = 0.047*t8262;
  t8289 = 0. + t8275;
  t7370 = t3294*t6927;
  t7714 = t5505*t7607;
  t7863 = t7370 + t7714;
  t7878 = t521*t3534*t3294;
  t7930 = t5505*t521*t3826;
  t7944 = t7878 + t7930;
  p_output1[0]=t126*t521;
  p_output1[1]=t1836*t521;
  p_output1[2]=-1.*t3095;
  p_output1[3]=0.;
  p_output1[4]=t6588;
  p_output1[5]=t7863;
  p_output1[6]=t7944;
  p_output1[7]=0.;
  p_output1[8]=t4465*t5505 - 1.*t3294*t6047;
  p_output1[9]=t5505*t6927 - 1.*t3294*t7607;
  p_output1[10]=-1.*t3294*t3826*t521 + t3534*t521*t5505;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t126*t521 + 0.047*t6588 + t4465*t8233 + t6047*t8289 + var1[0];
  p_output1[13]=0. - 0.183*t1836*t521 + 0.047*t7863 + t6927*t8233 + t7607*t8289 + var1[1];
  p_output1[14]=0. + 0.183*t3095 + 0.047*t7944 + t3534*t521*t8233 + t3826*t521*t8289 + var1[2];
  p_output1[15]=1.;
}



void H_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
