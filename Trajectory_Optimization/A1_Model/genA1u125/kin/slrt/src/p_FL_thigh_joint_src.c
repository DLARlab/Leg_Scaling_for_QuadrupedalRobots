/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint_src.h"

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
  double t5816;
  double t6087;
  double t6196;
  double t6148;
  double t6210;
  double t6015;
  double t6162;
  double t6230;
  double t6246;
  double t6303;
  double t6377;
  double t6380;
  double t6411;
  double t360;
  double t5907;
  double t6544;
  double t6562;
  double t6566;
  double t6585;
  double t2456;
  double t4654;
  double t4655;
  double t5732;
  double t6077;
  double t6084;
  double t6316;
  double t6323;
  double t6341;
  double t6370;
  double t6646;
  double t6648;
  double t6655;
  double t6658;
  double t6669;
  double t6706;
  double t6547;
  double t6559;
  double t6771;
  double t6779;
  double t6789;
  double t6964;
  double t6973;
  double t6979;
  t5816 = Cos(var1[3]);
  t6087 = Cos(var1[5]);
  t6196 = Sin(var1[3]);
  t6148 = Sin(var1[4]);
  t6210 = Sin(var1[5]);
  t6015 = Sin(var1[9]);
  t6162 = t5816*t6087*t6148;
  t6230 = t6196*t6210;
  t6246 = t6162 + t6230;
  t6303 = Cos(var1[9]);
  t6377 = -1.*t6087*t6196;
  t6380 = t5816*t6148*t6210;
  t6411 = t6377 + t6380;
  t360 = Cos(var1[10]);
  t5907 = Cos(var1[4]);
  t6544 = Sin(var1[10]);
  t6562 = t6303*t6246;
  t6566 = -1.*t6015*t6411;
  t6585 = t6562 + t6566;
  t2456 = -1.*t360;
  t4654 = 1. + t2456;
  t4655 = 0.183*t4654;
  t5732 = 0. + t4655;
  t6077 = -0.047*t6015;
  t6084 = 0. + t6077;
  t6316 = -1.*t6303;
  t6323 = 1. + t6316;
  t6341 = 0.047*t6323;
  t6370 = 0. + t6341;
  t6646 = t6087*t6196*t6148;
  t6648 = -1.*t5816*t6210;
  t6655 = t6646 + t6648;
  t6658 = t5816*t6087;
  t6669 = t6196*t6148*t6210;
  t6706 = t6658 + t6669;
  t6547 = 0.183*t6544;
  t6559 = 0. + t6547;
  t6771 = t6303*t6655;
  t6779 = -1.*t6015*t6706;
  t6789 = t6771 + t6779;
  t6964 = t6303*t5907*t6087;
  t6973 = -1.*t5907*t6015*t6210;
  t6979 = t6964 + t6973;
  p_output1[0]=0. + t5732*t5816*t5907 + t6084*t6246 + t6370*t6411 + 0.15331*(t6015*t6246 + t6303*t6411) + t6559*t6585 + 0.183*(t360*t5816*t5907 - 1.*t6544*t6585) + var1[0];
  p_output1[1]=0. + t5732*t5907*t6196 + t6084*t6655 + t6370*t6706 + 0.15331*(t6015*t6655 + t6303*t6706) + t6559*t6789 + 0.183*(t360*t5907*t6196 - 1.*t6544*t6789) + var1[1];
  p_output1[2]=0. + t5907*t6084*t6087 - 1.*t5732*t6148 + 0.15331*(t5907*t6015*t6087 + t5907*t6210*t6303) + t5907*t6210*t6370 + t6559*t6979 + 0.183*(-1.*t360*t6148 - 1.*t6544*t6979) + var1[2];
}



void p_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
