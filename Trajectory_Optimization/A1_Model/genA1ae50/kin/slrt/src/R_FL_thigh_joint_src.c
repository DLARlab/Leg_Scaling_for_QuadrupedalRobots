/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint_src.h"

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
  double t2351;
  double t6242;
  double t6444;
  double t6439;
  double t6509;
  double t1472;
  double t2851;
  double t6116;
  double t6223;
  double t6552;
  double t6443;
  double t6515;
  double t6525;
  double t6553;
  double t6566;
  double t6568;
  double t6599;
  double t6608;
  double t6609;
  double t6611;
  double t6612;
  double t6613;
  double t6531;
  double t6570;
  double t6572;
  double t6610;
  double t6615;
  double t6620;
  double t6631;
  double t6638;
  double t6644;
  t2351 = Cos(var1[3]);
  t6242 = Cos(var1[5]);
  t6444 = Sin(var1[3]);
  t6439 = Sin(var1[4]);
  t6509 = Sin(var1[5]);
  t1472 = Cos(var1[10]);
  t2851 = Cos(var1[4]);
  t6116 = Sin(var1[10]);
  t6223 = Cos(var1[9]);
  t6552 = Sin(var1[9]);
  t6443 = t2351*t6242*t6439;
  t6515 = t6444*t6509;
  t6525 = t6443 + t6515;
  t6553 = -1.*t6242*t6444;
  t6566 = t2351*t6439*t6509;
  t6568 = t6553 + t6566;
  t6599 = t6242*t6444*t6439;
  t6608 = -1.*t2351*t6509;
  t6609 = t6599 + t6608;
  t6611 = t2351*t6242;
  t6612 = t6444*t6439*t6509;
  t6613 = t6611 + t6612;
  t6531 = t6223*t6525;
  t6570 = -1.*t6552*t6568;
  t6572 = t6531 + t6570;
  t6610 = t6223*t6609;
  t6615 = -1.*t6552*t6613;
  t6620 = t6610 + t6615;
  t6631 = t6223*t2851*t6242;
  t6638 = -1.*t2851*t6552*t6509;
  t6644 = t6631 + t6638;
  p_output1[0]=t1472*t2351*t2851 - 1.*t6116*t6572;
  p_output1[1]=t1472*t2851*t6444 - 1.*t6116*t6620;
  p_output1[2]=-1.*t1472*t6439 - 1.*t6116*t6644;
  p_output1[3]=t6525*t6552 + t6223*t6568;
  p_output1[4]=t6552*t6609 + t6223*t6613;
  p_output1[5]=t2851*t6223*t6509 + t2851*t6242*t6552;
  p_output1[6]=t2351*t2851*t6116 + t1472*t6572;
  p_output1[7]=t2851*t6116*t6444 + t1472*t6620;
  p_output1[8]=-1.*t6116*t6439 + t1472*t6644;
}



void R_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
