/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:33 GMT-05:00
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
  double t2752;
  double t2055;
  double t6143;
  double t3333;
  double t6535;
  double t6605;
  double t6453;
  double t6653;
  double t6589;
  double t6611;
  double t6630;
  double t6679;
  double t6692;
  double t6696;
  double t6727;
  double t6730;
  double t6778;
  double t6891;
  double t6914;
  double t6926;
  t2752 = Cos(var1[4]);
  t2055 = Cos(var1[3]);
  t6143 = Sin(var1[4]);
  t3333 = Sin(var1[3]);
  t6535 = Cos(var1[5]);
  t6605 = Sin(var1[5]);
  t6453 = Sin(var1[12]);
  t6653 = Cos(var1[12]);
  t6589 = t2055*t6535*t6143;
  t6611 = t3333*t6605;
  t6630 = t6589 + t6611;
  t6679 = -1.*t6535*t3333;
  t6692 = t2055*t6143*t6605;
  t6696 = t6679 + t6692;
  t6727 = t6535*t3333*t6143;
  t6730 = -1.*t2055*t6605;
  t6778 = t6727 + t6730;
  t6891 = t2055*t6535;
  t6914 = t3333*t6143*t6605;
  t6926 = t6891 + t6914;
  p_output1[0]=t2055*t2752;
  p_output1[1]=t2752*t3333;
  p_output1[2]=-1.*t6143;
  p_output1[3]=t6453*t6630 + t6653*t6696;
  p_output1[4]=t6453*t6778 + t6653*t6926;
  p_output1[5]=t2752*t6453*t6535 + t2752*t6605*t6653;
  p_output1[6]=t6630*t6653 - 1.*t6453*t6696;
  p_output1[7]=t6653*t6778 - 1.*t6453*t6926;
  p_output1[8]=-1.*t2752*t6453*t6605 + t2752*t6535*t6653;
}



void R_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
