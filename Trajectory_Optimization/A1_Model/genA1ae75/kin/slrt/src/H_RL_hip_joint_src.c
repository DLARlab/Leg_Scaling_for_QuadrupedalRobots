/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:55 GMT-05:00
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
  double t2070;
  double t166;
  double t4178;
  double t3509;
  double t6552;
  double t6568;
  double t6531;
  double t6624;
  double t6555;
  double t6573;
  double t6601;
  double t6643;
  double t6674;
  double t6676;
  double t6821;
  double t6836;
  double t6846;
  double t6934;
  double t6938;
  double t6940;
  double t6614;
  double t6745;
  double t6812;
  double t7329;
  double t7378;
  double t7393;
  double t7422;
  double t7424;
  double t7428;
  double t6931;
  double t6946;
  double t6965;
  double t7019;
  double t7065;
  double t7068;
  t2070 = Cos(var1[4]);
  t166 = Cos(var1[3]);
  t4178 = Sin(var1[4]);
  t3509 = Sin(var1[3]);
  t6552 = Cos(var1[5]);
  t6568 = Sin(var1[5]);
  t6531 = Sin(var1[15]);
  t6624 = Cos(var1[15]);
  t6555 = t166*t6552*t4178;
  t6573 = t3509*t6568;
  t6601 = t6555 + t6573;
  t6643 = -1.*t6552*t3509;
  t6674 = t166*t4178*t6568;
  t6676 = t6643 + t6674;
  t6821 = t6552*t3509*t4178;
  t6836 = -1.*t166*t6568;
  t6846 = t6821 + t6836;
  t6934 = t166*t6552;
  t6938 = t3509*t4178*t6568;
  t6940 = t6934 + t6938;
  t6614 = t6531*t6601;
  t6745 = t6624*t6676;
  t6812 = t6614 + t6745;
  t7329 = -0.047*t6531;
  t7378 = 0. + t7329;
  t7393 = -1.*t6624;
  t7422 = 1. + t7393;
  t7424 = 0.047*t7422;
  t7428 = 0. + t7424;
  t6931 = t6531*t6846;
  t6946 = t6624*t6940;
  t6965 = t6931 + t6946;
  t7019 = t2070*t6552*t6531;
  t7065 = t6624*t2070*t6568;
  t7068 = t7019 + t7065;
  p_output1[0]=t166*t2070;
  p_output1[1]=t2070*t3509;
  p_output1[2]=-1.*t4178;
  p_output1[3]=0.;
  p_output1[4]=t6812;
  p_output1[5]=t6965;
  p_output1[6]=t7068;
  p_output1[7]=0.;
  p_output1[8]=t6601*t6624 - 1.*t6531*t6676;
  p_output1[9]=t6624*t6846 - 1.*t6531*t6940;
  p_output1[10]=-1.*t2070*t6531*t6568 + t2070*t6552*t6624;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t166*t2070 + 0.047*t6812 + t6601*t7378 + t6676*t7428 + var1[0];
  p_output1[13]=0. - 0.183*t2070*t3509 + 0.047*t6965 + t6846*t7378 + t6940*t7428 + var1[1];
  p_output1[14]=0. + 0.183*t4178 + 0.047*t7068 + t2070*t6552*t7378 + t2070*t6568*t7428 + var1[2];
  p_output1[15]=1.;
}



void H_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
