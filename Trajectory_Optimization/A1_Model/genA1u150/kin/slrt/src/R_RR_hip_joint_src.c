/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint_src.h"

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
  double t347;
  double t31;
  double t1847;
  double t1457;
  double t6110;
  double t6138;
  double t5125;
  double t6360;
  double t6132;
  double t6245;
  double t6286;
  double t6380;
  double t6439;
  double t6445;
  double t6481;
  double t6527;
  double t6539;
  double t6555;
  double t6560;
  double t6580;
  t347 = Cos(var1[4]);
  t31 = Cos(var1[3]);
  t1847 = Sin(var1[4]);
  t1457 = Sin(var1[3]);
  t6110 = Cos(var1[5]);
  t6138 = Sin(var1[5]);
  t5125 = Sin(var1[12]);
  t6360 = Cos(var1[12]);
  t6132 = t31*t6110*t1847;
  t6245 = t1457*t6138;
  t6286 = t6132 + t6245;
  t6380 = -1.*t6110*t1457;
  t6439 = t31*t1847*t6138;
  t6445 = t6380 + t6439;
  t6481 = t6110*t1457*t1847;
  t6527 = -1.*t31*t6138;
  t6539 = t6481 + t6527;
  t6555 = t31*t6110;
  t6560 = t1457*t1847*t6138;
  t6580 = t6555 + t6560;
  p_output1[0]=t31*t347;
  p_output1[1]=t1457*t347;
  p_output1[2]=-1.*t1847;
  p_output1[3]=t5125*t6286 + t6360*t6445;
  p_output1[4]=t5125*t6539 + t6360*t6580;
  p_output1[5]=t347*t5125*t6110 + t347*t6138*t6360;
  p_output1[6]=t6286*t6360 - 1.*t5125*t6445;
  p_output1[7]=t6360*t6539 - 1.*t5125*t6580;
  p_output1[8]=-1.*t347*t5125*t6138 + t347*t6110*t6360;
}



void R_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
