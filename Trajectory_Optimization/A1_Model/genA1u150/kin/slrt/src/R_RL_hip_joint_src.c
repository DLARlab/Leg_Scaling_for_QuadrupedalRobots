/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint_src.h"

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
  double t1384;
  double t1327;
  double t4195;
  double t3514;
  double t7114;
  double t7631;
  double t5784;
  double t7743;
  double t7554;
  double t7633;
  double t7682;
  double t7745;
  double t7753;
  double t7754;
  double t7803;
  double t7805;
  double t7827;
  double t7908;
  double t7925;
  double t7971;
  t1384 = Cos(var1[4]);
  t1327 = Cos(var1[3]);
  t4195 = Sin(var1[4]);
  t3514 = Sin(var1[3]);
  t7114 = Cos(var1[5]);
  t7631 = Sin(var1[5]);
  t5784 = Sin(var1[15]);
  t7743 = Cos(var1[15]);
  t7554 = t1327*t7114*t4195;
  t7633 = t3514*t7631;
  t7682 = t7554 + t7633;
  t7745 = -1.*t7114*t3514;
  t7753 = t1327*t4195*t7631;
  t7754 = t7745 + t7753;
  t7803 = t7114*t3514*t4195;
  t7805 = -1.*t1327*t7631;
  t7827 = t7803 + t7805;
  t7908 = t1327*t7114;
  t7925 = t3514*t4195*t7631;
  t7971 = t7908 + t7925;
  p_output1[0]=t1327*t1384;
  p_output1[1]=t1384*t3514;
  p_output1[2]=-1.*t4195;
  p_output1[3]=t5784*t7682 + t7743*t7754;
  p_output1[4]=t5784*t7827 + t7743*t7971;
  p_output1[5]=t1384*t5784*t7114 + t1384*t7631*t7743;
  p_output1[6]=t7682*t7743 - 1.*t5784*t7754;
  p_output1[7]=t7743*t7827 - 1.*t5784*t7971;
  p_output1[8]=-1.*t1384*t5784*t7631 + t1384*t7114*t7743;
}



void R_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
