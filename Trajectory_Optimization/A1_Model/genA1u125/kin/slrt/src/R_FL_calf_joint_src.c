/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint_src.h"

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
  double t735;
  double t2928;
  double t3292;
  double t2998;
  double t3569;
  double t2814;
  double t961;
  double t1026;
  double t2818;
  double t3231;
  double t3736;
  double t3812;
  double t4033;
  double t4248;
  double t4425;
  double t4504;
  double t4518;
  double t4523;
  double t4530;
  double t558;
  double t4600;
  double t4729;
  double t4747;
  double t4777;
  double t4782;
  double t4801;
  double t4808;
  double t4845;
  double t4854;
  double t4856;
  double t5030;
  double t5041;
  double t5084;
  double t2334;
  double t4545;
  double t4566;
  double t4604;
  double t4608;
  double t4651;
  double t4704;
  double t4866;
  double t4871;
  double t4909;
  double t4915;
  double t4924;
  double t5025;
  double t5085;
  double t5090;
  double t5159;
  double t5178;
  double t5190;
  t735 = Cos(var1[3]);
  t2928 = Cos(var1[5]);
  t3292 = Sin(var1[3]);
  t2998 = Sin(var1[4]);
  t3569 = Sin(var1[5]);
  t2814 = Cos(var1[10]);
  t961 = Cos(var1[4]);
  t1026 = Sin(var1[10]);
  t2818 = Cos(var1[9]);
  t3231 = t735*t2928*t2998;
  t3736 = t3292*t3569;
  t3812 = t3231 + t3736;
  t4033 = t2818*t3812;
  t4248 = Sin(var1[9]);
  t4425 = -1.*t2928*t3292;
  t4504 = t735*t2998*t3569;
  t4518 = t4425 + t4504;
  t4523 = -1.*t4248*t4518;
  t4530 = t4033 + t4523;
  t558 = Sin(var1[11]);
  t4600 = Cos(var1[11]);
  t4729 = t2928*t3292*t2998;
  t4747 = -1.*t735*t3569;
  t4777 = t4729 + t4747;
  t4782 = t2818*t4777;
  t4801 = t735*t2928;
  t4808 = t3292*t2998*t3569;
  t4845 = t4801 + t4808;
  t4854 = -1.*t4248*t4845;
  t4856 = t4782 + t4854;
  t5030 = t2818*t961*t2928;
  t5041 = -1.*t961*t4248*t3569;
  t5084 = t5030 + t5041;
  t2334 = t735*t961*t1026;
  t4545 = t2814*t4530;
  t4566 = t2334 + t4545;
  t4604 = t2814*t735*t961;
  t4608 = -1.*t1026*t4530;
  t4651 = t4604 + t4608;
  t4704 = t961*t1026*t3292;
  t4866 = t2814*t4856;
  t4871 = t4704 + t4866;
  t4909 = t2814*t961*t3292;
  t4915 = -1.*t1026*t4856;
  t4924 = t4909 + t4915;
  t5025 = -1.*t1026*t2998;
  t5085 = t2814*t5084;
  t5090 = t5025 + t5085;
  t5159 = -1.*t2814*t2998;
  t5178 = -1.*t1026*t5084;
  t5190 = t5159 + t5178;
  p_output1[0]=t4600*t4651 - 1.*t4566*t558;
  p_output1[1]=t4600*t4924 - 1.*t4871*t558;
  p_output1[2]=t4600*t5190 - 1.*t5090*t558;
  p_output1[3]=t3812*t4248 + t2818*t4518;
  p_output1[4]=t4248*t4777 + t2818*t4845;
  p_output1[5]=t2818*t3569*t961 + t2928*t4248*t961;
  p_output1[6]=t4566*t4600 + t4651*t558;
  p_output1[7]=t4600*t4871 + t4924*t558;
  p_output1[8]=t4600*t5090 + t5190*t558;
}



void R_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
