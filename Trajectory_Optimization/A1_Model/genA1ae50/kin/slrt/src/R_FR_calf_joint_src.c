/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint_src.h"

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
  double t3499;
  double t4082;
  double t4333;
  double t4303;
  double t4347;
  double t3791;
  double t3973;
  double t4316;
  double t4348;
  double t4351;
  double t4355;
  double t4386;
  double t4391;
  double t4397;
  double t4405;
  double t4415;
  double t4441;
  double t3595;
  double t4468;
  double t3315;
  double t4675;
  double t4678;
  double t4679;
  double t4685;
  double t4705;
  double t4706;
  double t4708;
  double t4714;
  double t4724;
  double t4556;
  double t4801;
  double t4806;
  double t4818;
  double t4534;
  double t4536;
  double t4555;
  double t3959;
  double t4480;
  double t4484;
  double t4751;
  double t4758;
  double t4765;
  double t4654;
  double t4734;
  double t4735;
  double t4878;
  double t4883;
  double t4889;
  double t4792;
  double t4835;
  double t4856;
  t3499 = Cos(var1[3]);
  t4082 = Cos(var1[5]);
  t4333 = Sin(var1[3]);
  t4303 = Sin(var1[4]);
  t4347 = Sin(var1[5]);
  t3791 = Cos(var1[7]);
  t3973 = Cos(var1[6]);
  t4316 = t3499*t4082*t4303;
  t4348 = t4333*t4347;
  t4351 = t4316 + t4348;
  t4355 = t3973*t4351;
  t4386 = -1.*t4082*t4333;
  t4391 = t3499*t4303*t4347;
  t4397 = t4386 + t4391;
  t4405 = Sin(var1[6]);
  t4415 = -1.*t4397*t4405;
  t4441 = t4355 + t4415;
  t3595 = Cos(var1[4]);
  t4468 = Sin(var1[7]);
  t3315 = Cos(var1[8]);
  t4675 = t4082*t4333*t4303;
  t4678 = -1.*t3499*t4347;
  t4679 = t4675 + t4678;
  t4685 = t3973*t4679;
  t4705 = t3499*t4082;
  t4706 = t4333*t4303*t4347;
  t4708 = t4705 + t4706;
  t4714 = -1.*t4708*t4405;
  t4724 = t4685 + t4714;
  t4556 = Sin(var1[8]);
  t4801 = t3595*t4082*t3973;
  t4806 = -1.*t3595*t4347*t4405;
  t4818 = t4801 + t4806;
  t4534 = t3791*t4441;
  t4536 = t3499*t3595*t4468;
  t4555 = t4534 + t4536;
  t3959 = t3499*t3595*t3791;
  t4480 = -1.*t4441*t4468;
  t4484 = t3959 + t4480;
  t4751 = t3791*t4724;
  t4758 = t3595*t4333*t4468;
  t4765 = t4751 + t4758;
  t4654 = t3595*t3791*t4333;
  t4734 = -1.*t4724*t4468;
  t4735 = t4654 + t4734;
  t4878 = t3791*t4818;
  t4883 = -1.*t4303*t4468;
  t4889 = t4878 + t4883;
  t4792 = -1.*t3791*t4303;
  t4835 = -1.*t4818*t4468;
  t4856 = t4792 + t4835;
  p_output1[0]=t3315*t4484 - 1.*t4555*t4556;
  p_output1[1]=t3315*t4735 - 1.*t4556*t4765;
  p_output1[2]=t3315*t4856 - 1.*t4556*t4889;
  p_output1[3]=t3973*t4397 + t4351*t4405;
  p_output1[4]=t4405*t4679 + t3973*t4708;
  p_output1[5]=t3595*t3973*t4347 + t3595*t4082*t4405;
  p_output1[6]=t3315*t4555 + t4484*t4556;
  p_output1[7]=t4556*t4735 + t3315*t4765;
  p_output1[8]=t4556*t4856 + t3315*t4889;
}



void R_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
