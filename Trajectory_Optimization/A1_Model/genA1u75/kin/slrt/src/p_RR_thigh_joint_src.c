/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint_src.h"

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
  double t629;
  double t644;
  double t647;
  double t645;
  double t648;
  double t641;
  double t646;
  double t649;
  double t650;
  double t655;
  double t660;
  double t661;
  double t662;
  double t523;
  double t639;
  double t1414;
  double t1981;
  double t3014;
  double t3258;
  double t604;
  double t605;
  double t624;
  double t625;
  double t642;
  double t643;
  double t656;
  double t657;
  double t658;
  double t659;
  double t7328;
  double t7330;
  double t7335;
  double t7486;
  double t7556;
  double t7616;
  double t1929;
  double t1930;
  double t7632;
  double t7697;
  double t7741;
  double t7937;
  double t7938;
  double t7975;
  t629 = Cos(var1[3]);
  t644 = Cos(var1[5]);
  t647 = Sin(var1[3]);
  t645 = Sin(var1[4]);
  t648 = Sin(var1[5]);
  t641 = Sin(var1[12]);
  t646 = t629*t644*t645;
  t649 = t647*t648;
  t650 = t646 + t649;
  t655 = Cos(var1[12]);
  t660 = -1.*t644*t647;
  t661 = t629*t645*t648;
  t662 = t660 + t661;
  t523 = Cos(var1[13]);
  t639 = Cos(var1[4]);
  t1414 = Sin(var1[13]);
  t1981 = t655*t650;
  t3014 = -1.*t641*t662;
  t3258 = t1981 + t3014;
  t604 = -1.*t523;
  t605 = 1. + t604;
  t624 = -0.183*t605;
  t625 = 0. + t624;
  t642 = 0.047*t641;
  t643 = 0. + t642;
  t656 = -1.*t655;
  t657 = 1. + t656;
  t658 = -0.047*t657;
  t659 = 0. + t658;
  t7328 = t644*t647*t645;
  t7330 = -1.*t629*t648;
  t7335 = t7328 + t7330;
  t7486 = t629*t644;
  t7556 = t647*t645*t648;
  t7616 = t7486 + t7556;
  t1929 = -0.183*t1414;
  t1930 = 0. + t1929;
  t7632 = t655*t7335;
  t7697 = -1.*t641*t7616;
  t7741 = t7632 + t7697;
  t7937 = t655*t639*t644;
  t7938 = -1.*t639*t641*t648;
  t7975 = t7937 + t7938;
  p_output1[0]=0. + t1930*t3258 + t625*t629*t639 - 0.183*(-1.*t1414*t3258 + t523*t629*t639) + t643*t650 + t659*t662 - 0.11079*(t641*t650 + t655*t662) + var1[0];
  p_output1[1]=0. + t625*t639*t647 + t643*t7335 + t659*t7616 - 0.11079*(t641*t7335 + t655*t7616) + t1930*t7741 - 0.183*(t523*t639*t647 - 1.*t1414*t7741) + var1[1];
  p_output1[2]=0. + t639*t643*t644 - 1.*t625*t645 - 0.11079*(t639*t641*t644 + t639*t648*t655) + t639*t648*t659 + t1930*t7975 - 0.183*(-1.*t523*t645 - 1.*t1414*t7975) + var1[2];
}



void p_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
