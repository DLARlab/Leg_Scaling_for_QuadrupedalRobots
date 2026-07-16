/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint_src.h"

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
  double t102;
  double t399;
  double t925;
  double t525;
  double t1049;
  double t152;
  double t366;
  double t588;
  double t1055;
  double t1345;
  double t1550;
  double t1554;
  double t1682;
  double t1854;
  double t1859;
  double t1869;
  double t1921;
  double t141;
  double t1932;
  double t18;
  double t2450;
  double t2595;
  double t2635;
  double t2655;
  double t2724;
  double t2746;
  double t2761;
  double t2826;
  double t2842;
  double t2204;
  double t3109;
  double t3164;
  double t3180;
  double t2056;
  double t2059;
  double t2200;
  double t211;
  double t1959;
  double t2045;
  double t2989;
  double t2997;
  double t3007;
  double t2368;
  double t2871;
  double t2890;
  double t3496;
  double t3529;
  double t3544;
  double t3081;
  double t3195;
  double t3224;
  double t3577;
  double t3667;
  double t3738;
  double t4697;
  double t4733;
  double t2055;
  double t2210;
  double t2269;
  double t3874;
  double t3882;
  double t3887;
  double t4122;
  double t4152;
  double t4181;
  double t4196;
  double t4238;
  double t4360;
  double t4408;
  double t4420;
  double t4484;
  double t4552;
  double t3741;
  double t3745;
  double t3779;
  double t4654;
  double t4679;
  double t4737;
  double t4747;
  double t4763;
  double t4786;
  double t4803;
  double t4804;
  double t2970;
  double t3009;
  double t3043;
  double t3888;
  double t3928;
  double t3944;
  double t3782;
  double t3830;
  double t3833;
  double t3331;
  double t3549;
  double t3557;
  double t3991;
  double t4022;
  double t4025;
  t102 = Cos(var1[3]);
  t399 = Cos(var1[5]);
  t925 = Sin(var1[3]);
  t525 = Sin(var1[4]);
  t1049 = Sin(var1[5]);
  t152 = Cos(var1[7]);
  t366 = Cos(var1[6]);
  t588 = t102*t399*t525;
  t1055 = t925*t1049;
  t1345 = t588 + t1055;
  t1550 = t366*t1345;
  t1554 = -1.*t399*t925;
  t1682 = t102*t525*t1049;
  t1854 = t1554 + t1682;
  t1859 = Sin(var1[6]);
  t1869 = -1.*t1854*t1859;
  t1921 = t1550 + t1869;
  t141 = Cos(var1[4]);
  t1932 = Sin(var1[7]);
  t18 = Cos(var1[8]);
  t2450 = t399*t925*t525;
  t2595 = -1.*t102*t1049;
  t2635 = t2450 + t2595;
  t2655 = t366*t2635;
  t2724 = t102*t399;
  t2746 = t925*t525*t1049;
  t2761 = t2724 + t2746;
  t2826 = -1.*t2761*t1859;
  t2842 = t2655 + t2826;
  t2204 = Sin(var1[8]);
  t3109 = t141*t399*t366;
  t3164 = -1.*t141*t1049*t1859;
  t3180 = t3109 + t3164;
  t2056 = t152*t1921;
  t2059 = t102*t141*t1932;
  t2200 = t2056 + t2059;
  t211 = t102*t141*t152;
  t1959 = -1.*t1921*t1932;
  t2045 = t211 + t1959;
  t2989 = t152*t2842;
  t2997 = t141*t925*t1932;
  t3007 = t2989 + t2997;
  t2368 = t141*t152*t925;
  t2871 = -1.*t2842*t1932;
  t2890 = t2368 + t2871;
  t3496 = t152*t3180;
  t3529 = -1.*t525*t1932;
  t3544 = t3496 + t3529;
  t3081 = -1.*t152*t525;
  t3195 = -1.*t3180*t1932;
  t3224 = t3081 + t3195;
  t3577 = t366*t1854;
  t3667 = t1345*t1859;
  t3738 = t3577 + t3667;
  t4697 = -1.*t18;
  t4733 = 1. + t4697;
  t2055 = t18*t2045;
  t2210 = -1.*t2200*t2204;
  t2269 = t2055 + t2210;
  t3874 = t18*t2200;
  t3882 = t2045*t2204;
  t3887 = t3874 + t3882;
  t4122 = -1.*t152;
  t4152 = 1. + t4122;
  t4181 = 0.183*t4152;
  t4196 = 0. + t4181;
  t4238 = -1.*t366;
  t4360 = 1. + t4238;
  t4408 = -0.047*t4360;
  t4420 = 0. + t4408;
  t4484 = 0.047*t1859;
  t4552 = 0. + t4484;
  t3741 = t366*t2761;
  t3745 = t2635*t1859;
  t3779 = t3741 + t3745;
  t4654 = 0.183*t1932;
  t4679 = 0. + t4654;
  t4737 = -0.3*t4733;
  t4747 = 0.183*t2204;
  t4763 = 0. + t4737 + t4747;
  t4786 = 0.183*t4733;
  t4803 = 0.3*t2204;
  t4804 = 0. + t4786 + t4803;
  t2970 = t18*t2890;
  t3009 = -1.*t3007*t2204;
  t3043 = t2970 + t3009;
  t3888 = t18*t3007;
  t3928 = t2890*t2204;
  t3944 = t3888 + t3928;
  t3782 = t141*t366*t1049;
  t3830 = t141*t399*t1859;
  t3833 = t3782 + t3830;
  t3331 = t18*t3224;
  t3549 = -1.*t3544*t2204;
  t3557 = t3331 + t3549;
  t3991 = t18*t3544;
  t4022 = t3224*t2204;
  t4025 = t3991 + t4022;
  p_output1[0]=t2269;
  p_output1[1]=t3043;
  p_output1[2]=t3557;
  p_output1[3]=0.;
  p_output1[4]=t3738;
  p_output1[5]=t3779;
  p_output1[6]=t3833;
  p_output1[7]=0.;
  p_output1[8]=t3887;
  p_output1[9]=t3944;
  p_output1[10]=t4025;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2269 - 0.17458*t3738 - 0.3*t3887 + t102*t141*t4196 + t1854*t4420 + t1345*t4552 + t1921*t4679 + t2200*t4763 + t2045*t4804 + var1[0];
  p_output1[13]=0. + 0.183*t3043 - 0.17458*t3779 - 0.3*t3944 + t2761*t4420 + t2635*t4552 + t2842*t4679 + t3007*t4763 + t2890*t4804 + t141*t4196*t925 + var1[1];
  p_output1[14]=0. + 0.183*t3557 - 0.17458*t3833 - 0.3*t4025 + t1049*t141*t4420 + t141*t399*t4552 + t3180*t4679 + t3544*t4763 + t3224*t4804 - 1.*t4196*t525 + var1[2];
  p_output1[15]=1.;
}



void H_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
