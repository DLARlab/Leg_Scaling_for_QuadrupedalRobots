/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:57 GMT-05:00
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
  double t813;
  double t403;
  double t3206;
  double t1584;
  double t4572;
  double t6355;
  double t3814;
  double t6910;
  double t4579;
  double t6442;
  double t6505;
  double t6994;
  double t7114;
  double t7154;
  double t7175;
  double t7228;
  double t7234;
  double t7255;
  double t7325;
  double t7354;
  double t6646;
  double t7157;
  double t7168;
  double t7636;
  double t7638;
  double t7673;
  double t7675;
  double t7682;
  double t7684;
  double t7246;
  double t7387;
  double t7469;
  double t7516;
  double t7518;
  double t7525;
  t813 = Cos(var1[4]);
  t403 = Cos(var1[3]);
  t3206 = Sin(var1[4]);
  t1584 = Sin(var1[3]);
  t4572 = Cos(var1[5]);
  t6355 = Sin(var1[5]);
  t3814 = Sin(var1[15]);
  t6910 = Cos(var1[15]);
  t4579 = t403*t4572*t3206;
  t6442 = t1584*t6355;
  t6505 = t4579 + t6442;
  t6994 = -1.*t4572*t1584;
  t7114 = t403*t3206*t6355;
  t7154 = t6994 + t7114;
  t7175 = t4572*t1584*t3206;
  t7228 = -1.*t403*t6355;
  t7234 = t7175 + t7228;
  t7255 = t403*t4572;
  t7325 = t1584*t3206*t6355;
  t7354 = t7255 + t7325;
  t6646 = t3814*t6505;
  t7157 = t6910*t7154;
  t7168 = t6646 + t7157;
  t7636 = -0.047*t3814;
  t7638 = 0. + t7636;
  t7673 = -1.*t6910;
  t7675 = 1. + t7673;
  t7682 = 0.047*t7675;
  t7684 = 0. + t7682;
  t7246 = t3814*t7234;
  t7387 = t6910*t7354;
  t7469 = t7246 + t7387;
  t7516 = t813*t4572*t3814;
  t7518 = t6910*t813*t6355;
  t7525 = t7516 + t7518;
  p_output1[0]=t403*t813;
  p_output1[1]=t1584*t813;
  p_output1[2]=-1.*t3206;
  p_output1[3]=0.;
  p_output1[4]=t7168;
  p_output1[5]=t7469;
  p_output1[6]=t7525;
  p_output1[7]=0.;
  p_output1[8]=t6505*t6910 - 1.*t3814*t7154;
  p_output1[9]=t6910*t7234 - 1.*t3814*t7354;
  p_output1[10]=-1.*t3814*t6355*t813 + t4572*t6910*t813;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.047*t7168 + t6505*t7638 + t7154*t7684 - 0.183*t403*t813 + var1[0];
  p_output1[13]=0. + 0.047*t7469 + t7234*t7638 + t7354*t7684 - 0.183*t1584*t813 + var1[1];
  p_output1[14]=0. + 0.183*t3206 + 0.047*t7525 + t4572*t7638*t813 + t6355*t7684*t813 + var1[2];
  p_output1[15]=1.;
}



void H_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
