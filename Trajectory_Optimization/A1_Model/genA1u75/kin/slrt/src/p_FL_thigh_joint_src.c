/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:55 GMT-05:00
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
  double t2511;
  double t3960;
  double t6245;
  double t5231;
  double t6856;
  double t3293;
  double t6238;
  double t6869;
  double t7030;
  double t8467;
  double t8795;
  double t8906;
  double t8908;
  double t729;
  double t2609;
  double t8994;
  double t9041;
  double t9053;
  double t9055;
  double t803;
  double t806;
  double t835;
  double t1008;
  double t3503;
  double t3517;
  double t8507;
  double t8660;
  double t8725;
  double t8762;
  double t9214;
  double t9248;
  double t9391;
  double t9553;
  double t9560;
  double t9604;
  double t9029;
  double t9034;
  double t9714;
  double t9719;
  double t9731;
  double t9835;
  double t9837;
  double t9840;
  t2511 = Cos(var1[3]);
  t3960 = Cos(var1[5]);
  t6245 = Sin(var1[3]);
  t5231 = Sin(var1[4]);
  t6856 = Sin(var1[5]);
  t3293 = Sin(var1[9]);
  t6238 = t2511*t3960*t5231;
  t6869 = t6245*t6856;
  t7030 = t6238 + t6869;
  t8467 = Cos(var1[9]);
  t8795 = -1.*t3960*t6245;
  t8906 = t2511*t5231*t6856;
  t8908 = t8795 + t8906;
  t729 = Cos(var1[10]);
  t2609 = Cos(var1[4]);
  t8994 = Sin(var1[10]);
  t9041 = t8467*t7030;
  t9053 = -1.*t3293*t8908;
  t9055 = t9041 + t9053;
  t803 = -1.*t729;
  t806 = 1. + t803;
  t835 = 0.183*t806;
  t1008 = 0. + t835;
  t3503 = -0.047*t3293;
  t3517 = 0. + t3503;
  t8507 = -1.*t8467;
  t8660 = 1. + t8507;
  t8725 = 0.047*t8660;
  t8762 = 0. + t8725;
  t9214 = t3960*t6245*t5231;
  t9248 = -1.*t2511*t6856;
  t9391 = t9214 + t9248;
  t9553 = t2511*t3960;
  t9560 = t6245*t5231*t6856;
  t9604 = t9553 + t9560;
  t9029 = 0.183*t8994;
  t9034 = 0. + t9029;
  t9714 = t8467*t9391;
  t9719 = -1.*t3293*t9604;
  t9731 = t9714 + t9719;
  t9835 = t8467*t2609*t3960;
  t9837 = -1.*t2609*t3293*t6856;
  t9840 = t9835 + t9837;
  p_output1[0]=0. + t1008*t2511*t2609 + t3517*t7030 + t8762*t8908 + 0.11079*(t3293*t7030 + t8467*t8908) + t9034*t9055 + 0.183*(t2511*t2609*t729 - 1.*t8994*t9055) + var1[0];
  p_output1[1]=0. + t1008*t2609*t6245 + t3517*t9391 + t8762*t9604 + 0.11079*(t3293*t9391 + t8467*t9604) + t9034*t9731 + 0.183*(t2609*t6245*t729 - 1.*t8994*t9731) + var1[1];
  p_output1[2]=0. + t2609*t3517*t3960 - 1.*t1008*t5231 + 0.11079*(t2609*t3293*t3960 + t2609*t6856*t8467) + t2609*t6856*t8762 + t9034*t9840 + 0.183*(-1.*t5231*t729 - 1.*t8994*t9840) + var1[2];
}



void p_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
