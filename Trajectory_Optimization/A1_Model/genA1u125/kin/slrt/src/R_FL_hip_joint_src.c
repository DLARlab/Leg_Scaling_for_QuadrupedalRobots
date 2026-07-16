/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_hip_joint_src.h"

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
  double t1495;
  double t1225;
  double t3911;
  double t2466;
  double t4225;
  double t5349;
  double t4204;
  double t5591;
  double t4300;
  double t5391;
  double t5514;
  double t5592;
  double t5597;
  double t5611;
  double t5673;
  double t5691;
  double t5706;
  double t5719;
  double t5720;
  double t5733;
  t1495 = Cos(var1[4]);
  t1225 = Cos(var1[3]);
  t3911 = Sin(var1[4]);
  t2466 = Sin(var1[3]);
  t4225 = Cos(var1[5]);
  t5349 = Sin(var1[5]);
  t4204 = Sin(var1[9]);
  t5591 = Cos(var1[9]);
  t4300 = t1225*t4225*t3911;
  t5391 = t2466*t5349;
  t5514 = t4300 + t5391;
  t5592 = -1.*t4225*t2466;
  t5597 = t1225*t3911*t5349;
  t5611 = t5592 + t5597;
  t5673 = t4225*t2466*t3911;
  t5691 = -1.*t1225*t5349;
  t5706 = t5673 + t5691;
  t5719 = t1225*t4225;
  t5720 = t2466*t3911*t5349;
  t5733 = t5719 + t5720;
  p_output1[0]=t1225*t1495;
  p_output1[1]=t1495*t2466;
  p_output1[2]=-1.*t3911;
  p_output1[3]=t4204*t5514 + t5591*t5611;
  p_output1[4]=t4204*t5706 + t5591*t5733;
  p_output1[5]=t1495*t4204*t4225 + t1495*t5349*t5591;
  p_output1[6]=t5514*t5591 - 1.*t4204*t5611;
  p_output1[7]=t5591*t5706 - 1.*t4204*t5733;
  p_output1[8]=-1.*t1495*t4204*t5349 + t1495*t4225*t5591;
}



void R_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
