/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint_src.h"

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
  double t2737;
  double t3095;
  double t3192;
  double t3159;
  double t3231;
  double t2958;
  double t3071;
  double t3093;
  double t3349;
  double t3361;
  double t3253;
  double t3339;
  double t3344;
  double t3182;
  double t3234;
  double t3236;
  double t3440;
  double t3444;
  double t3447;
  double t3409;
  double t3416;
  double t3418;
  double t3239;
  double t3356;
  double t3358;
  double t3434;
  double t3450;
  double t3455;
  double t3512;
  double t3527;
  double t3548;
  double t3568;
  double t3570;
  double t3590;
  double t3090;
  double t3363;
  double t3365;
  double t3809;
  double t3816;
  double t3856;
  double t3870;
  double t3874;
  double t3882;
  double t3904;
  double t3918;
  double t3925;
  double t3928;
  double t3604;
  double t3606;
  double t3623;
  double t3964;
  double t3965;
  double t3372;
  double t3456;
  double t3479;
  double t3653;
  double t3680;
  double t3701;
  double t3481;
  double t3550;
  double t3554;
  t2737 = Cos(var1[3]);
  t3095 = Cos(var1[5]);
  t3192 = Sin(var1[3]);
  t3159 = Sin(var1[4]);
  t3231 = Sin(var1[5]);
  t2958 = Cos(var1[4]);
  t3071 = Cos(var1[7]);
  t3093 = Cos(var1[6]);
  t3349 = Sin(var1[6]);
  t3361 = Sin(var1[7]);
  t3253 = -1.*t3095*t3192;
  t3339 = t2737*t3159*t3231;
  t3344 = t3253 + t3339;
  t3182 = t2737*t3095*t3159;
  t3234 = t3192*t3231;
  t3236 = t3182 + t3234;
  t3440 = t2737*t3095;
  t3444 = t3192*t3159*t3231;
  t3447 = t3440 + t3444;
  t3409 = t3095*t3192*t3159;
  t3416 = -1.*t2737*t3231;
  t3418 = t3409 + t3416;
  t3239 = t3093*t3236;
  t3356 = -1.*t3344*t3349;
  t3358 = t3239 + t3356;
  t3434 = t3093*t3418;
  t3450 = -1.*t3447*t3349;
  t3455 = t3434 + t3450;
  t3512 = t2958*t3095*t3093;
  t3527 = -1.*t2958*t3231*t3349;
  t3548 = t3512 + t3527;
  t3568 = t3093*t3344;
  t3570 = t3236*t3349;
  t3590 = t3568 + t3570;
  t3090 = t2737*t2958*t3071;
  t3363 = -1.*t3358*t3361;
  t3365 = t3090 + t3363;
  t3809 = -1.*t3071;
  t3816 = 1. + t3809;
  t3856 = 0.183*t3816;
  t3870 = 0. + t3856;
  t3874 = -1.*t3093;
  t3882 = 1. + t3874;
  t3904 = -0.047*t3882;
  t3918 = 0. + t3904;
  t3925 = 0.047*t3349;
  t3928 = 0. + t3925;
  t3604 = t3093*t3447;
  t3606 = t3418*t3349;
  t3623 = t3604 + t3606;
  t3964 = 0.183*t3361;
  t3965 = 0. + t3964;
  t3372 = t2958*t3071*t3192;
  t3456 = -1.*t3455*t3361;
  t3479 = t3372 + t3456;
  t3653 = t2958*t3093*t3231;
  t3680 = t2958*t3095*t3349;
  t3701 = t3653 + t3680;
  t3481 = -1.*t3071*t3159;
  t3550 = -1.*t3548*t3361;
  t3554 = t3481 + t3550;
  p_output1[0]=t3365;
  p_output1[1]=t3479;
  p_output1[2]=t3554;
  p_output1[3]=0.;
  p_output1[4]=t3590;
  p_output1[5]=t3623;
  p_output1[6]=t3701;
  p_output1[7]=0.;
  p_output1[8]=t3071*t3358 + t2737*t2958*t3361;
  p_output1[9]=t2958*t3192*t3361 + t3071*t3455;
  p_output1[10]=-1.*t3159*t3361 + t3071*t3548;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3365 - 0.13205*t3590 + t2737*t2958*t3870 + t3344*t3918 + t3236*t3928 + t3358*t3965 + var1[0];
  p_output1[13]=0. + 0.183*t3479 - 0.13205*t3623 + t2958*t3192*t3870 + t3447*t3918 + t3418*t3928 + t3455*t3965 + var1[1];
  p_output1[14]=0. + 0.183*t3554 - 0.13205*t3701 - 1.*t3159*t3870 + t2958*t3231*t3918 + t2958*t3095*t3928 + t3548*t3965 + var1[2];
  p_output1[15]=1.;
}



void H_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
