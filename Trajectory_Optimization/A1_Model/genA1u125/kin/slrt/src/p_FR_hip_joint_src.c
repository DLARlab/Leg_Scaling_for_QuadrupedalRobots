/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint_src.h"

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
  double t378;
  double t5366;
  double t5484;
  double t5393;
  double t5520;
  double t2775;
  double t5472;
  double t5534;
  double t5535;
  double t5582;
  double t5634;
  double t5645;
  double t5655;
  double t643;
  double t4903;
  double t5294;
  double t5325;
  double t5326;
  double t5686;
  double t5702;
  double t5783;
  double t5797;
  double t5827;
  double t5883;
  double t5905;
  double t5910;
  t378 = Cos(var1[3]);
  t5366 = Cos(var1[5]);
  t5484 = Sin(var1[4]);
  t5393 = Sin(var1[3]);
  t5520 = Sin(var1[5]);
  t2775 = Cos(var1[6]);
  t5472 = -1.*t5366*t5393;
  t5534 = t378*t5484*t5520;
  t5535 = t5472 + t5534;
  t5582 = t378*t5366*t5484;
  t5634 = t5393*t5520;
  t5645 = t5582 + t5634;
  t5655 = Sin(var1[6]);
  t643 = Cos(var1[4]);
  t4903 = -1.*t2775;
  t5294 = 1. + t4903;
  t5325 = -0.047*t5294;
  t5326 = 0. + t5325;
  t5686 = 0.047*t5655;
  t5702 = 0. + t5686;
  t5783 = t378*t5366;
  t5797 = t5393*t5484*t5520;
  t5827 = t5783 + t5797;
  t5883 = t5366*t5393*t5484;
  t5905 = -1.*t378*t5520;
  t5910 = t5883 + t5905;
  p_output1[0]=0. + t5326*t5535 - 0.047*(t2775*t5535 + t5645*t5655) + t5645*t5702 + 0.183*t378*t643 + var1[0];
  p_output1[1]=0. + t5326*t5827 + t5702*t5910 - 0.047*(t2775*t5827 + t5655*t5910) + 0.183*t5393*t643 + var1[1];
  p_output1[2]=0. - 0.183*t5484 + t5326*t5520*t643 + t5366*t5702*t643 - 0.047*(t2775*t5520*t643 + t5366*t5655*t643) + var1[2];
}



void p_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
