/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:54 GMT-05:00
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
  double t1393;
  double t1530;
  double t1239;
  double t1607;
  double t1679;
  double t1700;
  double t1662;
  double t1767;
  double t1743;
  double t1745;
  double t1746;
  double t1690;
  double t1706;
  double t1710;
  double t1812;
  double t1840;
  double t1853;
  double t1786;
  double t1790;
  double t1792;
  t1393 = Cos(var1[4]);
  t1530 = Sin(var1[3]);
  t1239 = Cos(var1[3]);
  t1607 = Sin(var1[4]);
  t1679 = Cos(var1[5]);
  t1700 = Sin(var1[5]);
  t1662 = Cos(var1[6]);
  t1767 = Sin(var1[6]);
  t1743 = t1239*t1679*t1607;
  t1745 = t1530*t1700;
  t1746 = t1743 + t1745;
  t1690 = -1.*t1679*t1530;
  t1706 = t1239*t1607*t1700;
  t1710 = t1690 + t1706;
  t1812 = t1679*t1530*t1607;
  t1840 = -1.*t1239*t1700;
  t1853 = t1812 + t1840;
  t1786 = t1239*t1679;
  t1790 = t1530*t1607*t1700;
  t1792 = t1786 + t1790;
  p_output1[0]=t1239*t1393;
  p_output1[1]=t1393*t1530;
  p_output1[2]=-1.*t1607;
  p_output1[3]=t1662*t1710 + t1746*t1767;
  p_output1[4]=t1662*t1792 + t1767*t1853;
  p_output1[5]=t1393*t1662*t1700 + t1393*t1679*t1767;
  p_output1[6]=t1662*t1746 - 1.*t1710*t1767;
  p_output1[7]=-1.*t1767*t1792 + t1662*t1853;
  p_output1[8]=t1393*t1662*t1679 - 1.*t1393*t1700*t1767;
}



void R_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
