/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint_src.h"

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
  double t398;
  double t373;
  double t1504;
  double t830;
  double t2881;
  double t3164;
  double t1963;
  double t3800;
  double t3078;
  double t3208;
  double t3709;
  double t4061;
  double t4135;
  double t4138;
  double t4888;
  double t5367;
  double t5398;
  double t6475;
  double t6500;
  double t6511;
  double t3746;
  double t4395;
  double t4469;
  double t6832;
  double t6836;
  double t6864;
  double t6888;
  double t6904;
  double t6966;
  double t6163;
  double t6528;
  double t6618;
  double t6626;
  double t6673;
  double t6690;
  t398 = Cos(var1[4]);
  t373 = Cos(var1[3]);
  t1504 = Sin(var1[4]);
  t830 = Sin(var1[3]);
  t2881 = Cos(var1[5]);
  t3164 = Sin(var1[5]);
  t1963 = Sin(var1[12]);
  t3800 = Cos(var1[12]);
  t3078 = t373*t2881*t1504;
  t3208 = t830*t3164;
  t3709 = t3078 + t3208;
  t4061 = -1.*t2881*t830;
  t4135 = t373*t1504*t3164;
  t4138 = t4061 + t4135;
  t4888 = t2881*t830*t1504;
  t5367 = -1.*t373*t3164;
  t5398 = t4888 + t5367;
  t6475 = t373*t2881;
  t6500 = t830*t1504*t3164;
  t6511 = t6475 + t6500;
  t3746 = t1963*t3709;
  t4395 = t3800*t4138;
  t4469 = t3746 + t4395;
  t6832 = 0.047*t1963;
  t6836 = 0. + t6832;
  t6864 = -1.*t3800;
  t6888 = 1. + t6864;
  t6904 = -0.047*t6888;
  t6966 = 0. + t6904;
  t6163 = t1963*t5398;
  t6528 = t3800*t6511;
  t6618 = t6163 + t6528;
  t6626 = t398*t2881*t1963;
  t6673 = t3800*t398*t3164;
  t6690 = t6626 + t6673;
  p_output1[0]=t373*t398;
  p_output1[1]=t398*t830;
  p_output1[2]=-1.*t1504;
  p_output1[3]=0.;
  p_output1[4]=t4469;
  p_output1[5]=t6618;
  p_output1[6]=t6690;
  p_output1[7]=0.;
  p_output1[8]=t3709*t3800 - 1.*t1963*t4138;
  p_output1[9]=t3800*t5398 - 1.*t1963*t6511;
  p_output1[10]=-1.*t1963*t3164*t398 + t2881*t3800*t398;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t373*t398 - 0.047*t4469 + t3709*t6836 + t4138*t6966 + var1[0];
  p_output1[13]=0. - 0.047*t6618 + t5398*t6836 + t6511*t6966 - 0.183*t398*t830 + var1[1];
  p_output1[14]=0. + 0.183*t1504 - 0.047*t6690 + t2881*t398*t6836 + t3164*t398*t6966 + var1[2];
  p_output1[15]=1.;
}



void H_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
