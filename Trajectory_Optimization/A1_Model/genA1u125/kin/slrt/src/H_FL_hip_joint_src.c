/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:25 GMT-05:00
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
  double t582;
  double t294;
  double t2399;
  double t1719;
  double t3257;
  double t3497;
  double t3070;
  double t3637;
  double t3496;
  double t3544;
  double t3561;
  double t3977;
  double t4477;
  double t4559;
  double t5004;
  double t5136;
  double t5155;
  double t5231;
  double t5307;
  double t5309;
  double t3624;
  double t4806;
  double t4844;
  double t5591;
  double t5592;
  double t5602;
  double t5608;
  double t5611;
  double t5641;
  double t5189;
  double t5320;
  double t5330;
  double t5349;
  double t5391;
  double t5425;
  t582 = Cos(var1[4]);
  t294 = Cos(var1[3]);
  t2399 = Sin(var1[4]);
  t1719 = Sin(var1[3]);
  t3257 = Cos(var1[5]);
  t3497 = Sin(var1[5]);
  t3070 = Sin(var1[9]);
  t3637 = Cos(var1[9]);
  t3496 = t294*t3257*t2399;
  t3544 = t1719*t3497;
  t3561 = t3496 + t3544;
  t3977 = -1.*t3257*t1719;
  t4477 = t294*t2399*t3497;
  t4559 = t3977 + t4477;
  t5004 = t3257*t1719*t2399;
  t5136 = -1.*t294*t3497;
  t5155 = t5004 + t5136;
  t5231 = t294*t3257;
  t5307 = t1719*t2399*t3497;
  t5309 = t5231 + t5307;
  t3624 = t3070*t3561;
  t4806 = t3637*t4559;
  t4844 = t3624 + t4806;
  t5591 = -0.047*t3070;
  t5592 = 0. + t5591;
  t5602 = -1.*t3637;
  t5608 = 1. + t5602;
  t5611 = 0.047*t5608;
  t5641 = 0. + t5611;
  t5189 = t3070*t5155;
  t5320 = t3637*t5309;
  t5330 = t5189 + t5320;
  t5349 = t582*t3257*t3070;
  t5391 = t3637*t582*t3497;
  t5425 = t5349 + t5391;
  p_output1[0]=t294*t582;
  p_output1[1]=t1719*t582;
  p_output1[2]=-1.*t2399;
  p_output1[3]=0.;
  p_output1[4]=t4844;
  p_output1[5]=t5330;
  p_output1[6]=t5425;
  p_output1[7]=0.;
  p_output1[8]=t3561*t3637 - 1.*t3070*t4559;
  p_output1[9]=t3637*t5155 - 1.*t3070*t5309;
  p_output1[10]=-1.*t3070*t3497*t582 + t3257*t3637*t582;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.047*t4844 + t3561*t5592 + t4559*t5641 + 0.183*t294*t582 + var1[0];
  p_output1[13]=0. + 0.047*t5330 + t5155*t5592 + t5309*t5641 + 0.183*t1719*t582 + var1[1];
  p_output1[14]=0. - 0.183*t2399 + 0.047*t5425 + t3257*t5592*t582 + t3497*t5641*t582 + var1[2];
  p_output1[15]=1.;
}



void H_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
