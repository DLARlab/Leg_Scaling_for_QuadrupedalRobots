/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint_src.h"

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
  double t1234;
  double t3818;
  double t4116;
  double t3825;
  double t4122;
  double t2560;
  double t3756;
  double t3848;
  double t4269;
  double t4309;
  double t4329;
  double t4336;
  double t4370;
  double t4526;
  double t4718;
  double t5114;
  double t5243;
  double t1502;
  double t5255;
  double t394;
  double t5646;
  double t5647;
  double t5654;
  double t5732;
  double t5742;
  double t5859;
  double t5933;
  double t5965;
  double t6005;
  double t5612;
  double t6242;
  double t6269;
  double t6284;
  double t5571;
  double t5599;
  double t5604;
  double t3480;
  double t5483;
  double t5552;
  double t6101;
  double t6162;
  double t6183;
  double t5645;
  double t6012;
  double t6086;
  double t6376;
  double t6399;
  double t6421;
  double t6240;
  double t6323;
  double t6329;
  t1234 = Cos(var1[3]);
  t3818 = Cos(var1[5]);
  t4116 = Sin(var1[3]);
  t3825 = Sin(var1[4]);
  t4122 = Sin(var1[5]);
  t2560 = Cos(var1[7]);
  t3756 = Cos(var1[6]);
  t3848 = t1234*t3818*t3825;
  t4269 = t4116*t4122;
  t4309 = t3848 + t4269;
  t4329 = t3756*t4309;
  t4336 = -1.*t3818*t4116;
  t4370 = t1234*t3825*t4122;
  t4526 = t4336 + t4370;
  t4718 = Sin(var1[6]);
  t5114 = -1.*t4526*t4718;
  t5243 = t4329 + t5114;
  t1502 = Cos(var1[4]);
  t5255 = Sin(var1[7]);
  t394 = Cos(var1[8]);
  t5646 = t3818*t4116*t3825;
  t5647 = -1.*t1234*t4122;
  t5654 = t5646 + t5647;
  t5732 = t3756*t5654;
  t5742 = t1234*t3818;
  t5859 = t4116*t3825*t4122;
  t5933 = t5742 + t5859;
  t5965 = -1.*t5933*t4718;
  t6005 = t5732 + t5965;
  t5612 = Sin(var1[8]);
  t6242 = t1502*t3818*t3756;
  t6269 = -1.*t1502*t4122*t4718;
  t6284 = t6242 + t6269;
  t5571 = t2560*t5243;
  t5599 = t1234*t1502*t5255;
  t5604 = t5571 + t5599;
  t3480 = t1234*t1502*t2560;
  t5483 = -1.*t5243*t5255;
  t5552 = t3480 + t5483;
  t6101 = t2560*t6005;
  t6162 = t1502*t4116*t5255;
  t6183 = t6101 + t6162;
  t5645 = t1502*t2560*t4116;
  t6012 = -1.*t6005*t5255;
  t6086 = t5645 + t6012;
  t6376 = t2560*t6284;
  t6399 = -1.*t3825*t5255;
  t6421 = t6376 + t6399;
  t6240 = -1.*t2560*t3825;
  t6323 = -1.*t6284*t5255;
  t6329 = t6240 + t6323;
  p_output1[0]=t394*t5552 - 1.*t5604*t5612;
  p_output1[1]=t394*t6086 - 1.*t5612*t6183;
  p_output1[2]=t394*t6329 - 1.*t5612*t6421;
  p_output1[3]=t3756*t4526 + t4309*t4718;
  p_output1[4]=t4718*t5654 + t3756*t5933;
  p_output1[5]=t1502*t3756*t4122 + t1502*t3818*t4718;
  p_output1[6]=t394*t5604 + t5552*t5612;
  p_output1[7]=t5612*t6086 + t394*t6183;
  p_output1[8]=t5612*t6329 + t394*t6421;
}



void R_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
