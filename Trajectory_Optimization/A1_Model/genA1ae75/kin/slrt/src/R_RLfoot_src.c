/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RLfoot_src.h"

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
  double t1301;
  double t5814;
  double t6876;
  double t6727;
  double t7147;
  double t5437;
  double t2832;
  double t4682;
  double t5795;
  double t6857;
  double t7400;
  double t7431;
  double t7551;
  double t7595;
  double t7597;
  double t7657;
  double t7683;
  double t7685;
  double t7695;
  double t993;
  double t7724;
  double t7808;
  double t7835;
  double t7846;
  double t7857;
  double t7858;
  double t7860;
  double t7863;
  double t7864;
  double t7868;
  double t7939;
  double t7965;
  double t7966;
  double t5331;
  double t7703;
  double t7705;
  double t7731;
  double t7738;
  double t7763;
  double t7807;
  double t7869;
  double t7877;
  double t7880;
  double t7881;
  double t7886;
  double t7927;
  double t7976;
  double t7977;
  double t7979;
  double t7980;
  double t7982;
  t1301 = Cos(var1[3]);
  t5814 = Cos(var1[5]);
  t6876 = Sin(var1[3]);
  t6727 = Sin(var1[4]);
  t7147 = Sin(var1[5]);
  t5437 = Cos(var1[16]);
  t2832 = Cos(var1[4]);
  t4682 = Sin(var1[16]);
  t5795 = Cos(var1[15]);
  t6857 = t1301*t5814*t6727;
  t7400 = t6876*t7147;
  t7431 = t6857 + t7400;
  t7551 = t5795*t7431;
  t7595 = Sin(var1[15]);
  t7597 = -1.*t5814*t6876;
  t7657 = t1301*t6727*t7147;
  t7683 = t7597 + t7657;
  t7685 = -1.*t7595*t7683;
  t7695 = t7551 + t7685;
  t993 = Sin(var1[17]);
  t7724 = Cos(var1[17]);
  t7808 = t5814*t6876*t6727;
  t7835 = -1.*t1301*t7147;
  t7846 = t7808 + t7835;
  t7857 = t5795*t7846;
  t7858 = t1301*t5814;
  t7860 = t6876*t6727*t7147;
  t7863 = t7858 + t7860;
  t7864 = -1.*t7595*t7863;
  t7868 = t7857 + t7864;
  t7939 = t5795*t2832*t5814;
  t7965 = -1.*t2832*t7595*t7147;
  t7966 = t7939 + t7965;
  t5331 = t1301*t2832*t4682;
  t7703 = t5437*t7695;
  t7705 = t5331 + t7703;
  t7731 = t5437*t1301*t2832;
  t7738 = -1.*t4682*t7695;
  t7763 = t7731 + t7738;
  t7807 = t2832*t4682*t6876;
  t7869 = t5437*t7868;
  t7877 = t7807 + t7869;
  t7880 = t5437*t2832*t6876;
  t7881 = -1.*t4682*t7868;
  t7886 = t7880 + t7881;
  t7927 = -1.*t4682*t6727;
  t7976 = t5437*t7966;
  t7977 = t7927 + t7976;
  t7979 = -1.*t5437*t6727;
  t7980 = -1.*t4682*t7966;
  t7982 = t7979 + t7980;
  p_output1[0]=t7724*t7763 - 1.*t7705*t993;
  p_output1[1]=t7724*t7886 - 1.*t7877*t993;
  p_output1[2]=t7724*t7982 - 1.*t7977*t993;
  p_output1[3]=t7431*t7595 + t5795*t7683;
  p_output1[4]=t7595*t7846 + t5795*t7863;
  p_output1[5]=t2832*t5795*t7147 + t2832*t5814*t7595;
  p_output1[6]=t7705*t7724 + t7763*t993;
  p_output1[7]=t7724*t7877 + t7886*t993;
  p_output1[8]=t7724*t7977 + t7982*t993;
}



void R_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
