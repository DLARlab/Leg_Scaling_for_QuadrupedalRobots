/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint_src.h"

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
  double t180;
  double t1655;
  double t3605;
  double t2836;
  double t3752;
  double t104;
  double t663;
  double t1312;
  double t1342;
  double t5367;
  double t3268;
  double t3914;
  double t5133;
  double t5692;
  double t5721;
  double t5771;
  double t6250;
  double t6408;
  double t6422;
  double t6558;
  double t6590;
  double t6613;
  double t5227;
  double t5870;
  double t5874;
  double t6472;
  double t6672;
  double t6776;
  double t7085;
  double t7165;
  double t7178;
  t180 = Cos(var1[3]);
  t1655 = Cos(var1[5]);
  t3605 = Sin(var1[3]);
  t2836 = Sin(var1[4]);
  t3752 = Sin(var1[5]);
  t104 = Cos(var1[13]);
  t663 = Cos(var1[4]);
  t1312 = Sin(var1[13]);
  t1342 = Cos(var1[12]);
  t5367 = Sin(var1[12]);
  t3268 = t180*t1655*t2836;
  t3914 = t3605*t3752;
  t5133 = t3268 + t3914;
  t5692 = -1.*t1655*t3605;
  t5721 = t180*t2836*t3752;
  t5771 = t5692 + t5721;
  t6250 = t1655*t3605*t2836;
  t6408 = -1.*t180*t3752;
  t6422 = t6250 + t6408;
  t6558 = t180*t1655;
  t6590 = t3605*t2836*t3752;
  t6613 = t6558 + t6590;
  t5227 = t1342*t5133;
  t5870 = -1.*t5367*t5771;
  t5874 = t5227 + t5870;
  t6472 = t1342*t6422;
  t6672 = -1.*t5367*t6613;
  t6776 = t6472 + t6672;
  t7085 = t1342*t663*t1655;
  t7165 = -1.*t663*t5367*t3752;
  t7178 = t7085 + t7165;
  p_output1[0]=-1.*t1312*t5874 + t104*t180*t663;
  p_output1[1]=t104*t3605*t663 - 1.*t1312*t6776;
  p_output1[2]=-1.*t104*t2836 - 1.*t1312*t7178;
  p_output1[3]=t5133*t5367 + t1342*t5771;
  p_output1[4]=t5367*t6422 + t1342*t6613;
  p_output1[5]=t1342*t3752*t663 + t1655*t5367*t663;
  p_output1[6]=t104*t5874 + t1312*t180*t663;
  p_output1[7]=t1312*t3605*t663 + t104*t6776;
  p_output1[8]=-1.*t1312*t2836 + t104*t7178;
}



void R_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
