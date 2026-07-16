/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint_src.h"

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
  double t1464;
  double t1512;
  double t376;
  double t1659;
  double t4562;
  double t6009;
  double t4561;
  double t6041;
  double t6036;
  double t6037;
  double t6038;
  double t5999;
  double t6016;
  double t6025;
  double t6053;
  double t6054;
  double t6056;
  double t6048;
  double t6050;
  double t6051;
  t1464 = Cos(var1[4]);
  t1512 = Sin(var1[3]);
  t376 = Cos(var1[3]);
  t1659 = Sin(var1[4]);
  t4562 = Cos(var1[5]);
  t6009 = Sin(var1[5]);
  t4561 = Cos(var1[6]);
  t6041 = Sin(var1[6]);
  t6036 = t376*t4562*t1659;
  t6037 = t1512*t6009;
  t6038 = t6036 + t6037;
  t5999 = -1.*t4562*t1512;
  t6016 = t376*t1659*t6009;
  t6025 = t5999 + t6016;
  t6053 = t4562*t1512*t1659;
  t6054 = -1.*t376*t6009;
  t6056 = t6053 + t6054;
  t6048 = t376*t4562;
  t6050 = t1512*t1659*t6009;
  t6051 = t6048 + t6050;
  p_output1[0]=t1464*t376;
  p_output1[1]=t1464*t1512;
  p_output1[2]=-1.*t1659;
  p_output1[3]=t4561*t6025 + t6038*t6041;
  p_output1[4]=t4561*t6051 + t6041*t6056;
  p_output1[5]=t1464*t4561*t6009 + t1464*t4562*t6041;
  p_output1[6]=t4561*t6038 - 1.*t6025*t6041;
  p_output1[7]=-1.*t6041*t6051 + t4561*t6056;
  p_output1[8]=t1464*t4561*t4562 - 1.*t1464*t6009*t6041;
}



void R_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
