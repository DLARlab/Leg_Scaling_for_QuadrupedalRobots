/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint_src.h"

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
  double t491;
  double t567;
  double t585;
  double t561;
  double t588;
  double t534;
  double t571;
  double t592;
  double t597;
  double t601;
  double t604;
  double t605;
  double t607;
  double t464;
  double t542;
  double t547;
  double t552;
  double t560;
  double t608;
  double t618;
  double t639;
  double t641;
  double t642;
  double t644;
  double t646;
  double t647;
  double t754;
  double t764;
  double t767;
  double t789;
  double t790;
  double t791;
  double t774;
  double t826;
  double t898;
  double t902;
  double t903;
  double t845;
  double t851;
  double t858;
  double t861;
  t491 = Sin(var1[3]);
  t567 = Cos(var1[5]);
  t585 = Sin(var1[4]);
  t561 = Cos(var1[3]);
  t588 = Sin(var1[5]);
  t534 = Cos(var1[6]);
  t571 = -1.*t561*t567;
  t592 = -1.*t491*t585*t588;
  t597 = t571 + t592;
  t601 = -1.*t567*t491*t585;
  t604 = t561*t588;
  t605 = t601 + t604;
  t607 = Sin(var1[6]);
  t464 = Cos(var1[4]);
  t542 = -1.*t534;
  t547 = 1. + t542;
  t552 = -0.047*t547;
  t560 = 0. + t552;
  t608 = 0.047*t607;
  t618 = 0. + t608;
  t639 = -1.*t567*t491;
  t641 = t561*t585*t588;
  t642 = t639 + t641;
  t644 = t561*t567*t585;
  t646 = t491*t588;
  t647 = t644 + t646;
  t754 = t567*t491;
  t764 = -1.*t561*t585*t588;
  t767 = t754 + t764;
  t789 = t567*t491*t585;
  t790 = -1.*t561*t588;
  t791 = t789 + t790;
  t774 = t534*t647;
  t826 = t534*t791;
  t898 = t561*t567;
  t902 = t491*t585*t588;
  t903 = t898 + t902;
  t845 = t464*t567*t534;
  t851 = -1.*t464*t588*t607;
  t858 = t845 + t851;
  t861 = -0.047*t858;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.183*t464*t491 + t560*t597 - 0.047*(t534*t597 + t605*t607) + t605*t618;
  p_output1[10]=0.183*t464*t561 + t560*t642 + t618*t647 - 0.047*(t534*t642 + t607*t647);
  p_output1[11]=0;
  p_output1[12]=-0.183*t561*t585 + t464*t560*t561*t588 - 0.047*(t464*t534*t561*t588 + t464*t561*t567*t607) + t464*t561*t567*t618;
  p_output1[13]=-0.183*t491*t585 + t464*t491*t560*t588 - 0.047*(t464*t491*t534*t588 + t464*t491*t567*t607) + t464*t491*t567*t618;
  p_output1[14]=-0.183*t464 - 1.*t560*t585*t588 - 0.047*(-1.*t534*t585*t588 - 1.*t567*t585*t607) - 1.*t567*t585*t618;
  p_output1[15]=t560*t647 + t618*t767 - 0.047*(t607*t767 + t774);
  p_output1[16]=t597*t618 + t560*t791 - 0.047*(t597*t607 + t826);
  p_output1[17]=t464*t560*t567 - 1.*t464*t588*t618 + t861;
  p_output1[18]=-0.047*t607*t642 + 0.047*t534*t647 - 0.047*(-1.*t607*t642 + t774);
  p_output1[19]=0.047*t534*t791 - 0.047*t607*t903 - 0.047*(t826 - 1.*t607*t903);
  p_output1[20]=0.047*t464*t534*t567 - 0.047*t464*t588*t607 + t861;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
