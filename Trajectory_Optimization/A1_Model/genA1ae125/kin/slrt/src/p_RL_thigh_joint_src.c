/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint_src.h"

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
  double t6234;
  double t7686;
  double t7693;
  double t7687;
  double t7694;
  double t7674;
  double t7688;
  double t7696;
  double t7700;
  double t7702;
  double t7710;
  double t7714;
  double t7715;
  double t96;
  double t7120;
  double t7724;
  double t7731;
  double t7732;
  double t7736;
  double t99;
  double t1918;
  double t4904;
  double t5106;
  double t7679;
  double t7682;
  double t7703;
  double t7704;
  double t7706;
  double t7709;
  double t7750;
  double t7752;
  double t7753;
  double t7756;
  double t7757;
  double t7758;
  double t7728;
  double t7730;
  double t7776;
  double t7778;
  double t7782;
  double t7804;
  double t7808;
  double t7810;
  t6234 = Cos(var1[3]);
  t7686 = Cos(var1[5]);
  t7693 = Sin(var1[3]);
  t7687 = Sin(var1[4]);
  t7694 = Sin(var1[5]);
  t7674 = Sin(var1[15]);
  t7688 = t6234*t7686*t7687;
  t7696 = t7693*t7694;
  t7700 = t7688 + t7696;
  t7702 = Cos(var1[15]);
  t7710 = -1.*t7686*t7693;
  t7714 = t6234*t7687*t7694;
  t7715 = t7710 + t7714;
  t96 = Cos(var1[16]);
  t7120 = Cos(var1[4]);
  t7724 = Sin(var1[16]);
  t7731 = t7702*t7700;
  t7732 = -1.*t7674*t7715;
  t7736 = t7731 + t7732;
  t99 = -1.*t96;
  t1918 = 1. + t99;
  t4904 = -0.183*t1918;
  t5106 = 0. + t4904;
  t7679 = -0.047*t7674;
  t7682 = 0. + t7679;
  t7703 = -1.*t7702;
  t7704 = 1. + t7703;
  t7706 = 0.047*t7704;
  t7709 = 0. + t7706;
  t7750 = t7686*t7693*t7687;
  t7752 = -1.*t6234*t7694;
  t7753 = t7750 + t7752;
  t7756 = t6234*t7686;
  t7757 = t7693*t7687*t7694;
  t7758 = t7756 + t7757;
  t7728 = -0.183*t7724;
  t7730 = 0. + t7728;
  t7776 = t7702*t7753;
  t7778 = -1.*t7674*t7758;
  t7782 = t7776 + t7778;
  t7804 = t7702*t7120*t7686;
  t7808 = -1.*t7120*t7674*t7694;
  t7810 = t7804 + t7808;
  p_output1[0]=0. + t5106*t6234*t7120 + t7682*t7700 + t7709*t7715 + 0.13205*(t7674*t7700 + t7702*t7715) + t7730*t7736 - 0.183*(-1.*t7724*t7736 + t6234*t7120*t96) + var1[0];
  p_output1[1]=0. + t5106*t7120*t7693 + t7682*t7753 + t7709*t7758 + 0.13205*(t7674*t7753 + t7702*t7758) + t7730*t7782 - 0.183*(-1.*t7724*t7782 + t7120*t7693*t96) + var1[1];
  p_output1[2]=0. + t7120*t7682*t7686 - 1.*t5106*t7687 + 0.13205*(t7120*t7674*t7686 + t7120*t7694*t7702) + t7120*t7694*t7709 + t7730*t7810 - 0.183*(-1.*t7724*t7810 - 1.*t7687*t96) + var1[2];
}



void p_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
