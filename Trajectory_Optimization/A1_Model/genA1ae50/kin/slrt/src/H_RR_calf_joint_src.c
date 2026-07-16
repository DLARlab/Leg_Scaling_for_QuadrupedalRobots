/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint_src.h"

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
  double t364;
  double t1473;
  double t2942;
  double t1935;
  double t3014;
  double t1353;
  double t572;
  double t890;
  double t1377;
  double t2399;
  double t3127;
  double t3249;
  double t3256;
  double t3417;
  double t3474;
  double t3628;
  double t3629;
  double t3660;
  double t3908;
  double t187;
  double t4744;
  double t6801;
  double t6802;
  double t7174;
  double t7205;
  double t7206;
  double t7241;
  double t7295;
  double t7312;
  double t7352;
  double t8576;
  double t8580;
  double t8583;
  double t1032;
  double t4085;
  double t4173;
  double t4940;
  double t5255;
  double t5456;
  double t6550;
  double t7687;
  double t7848;
  double t8280;
  double t8368;
  double t8386;
  double t8569;
  double t8584;
  double t8644;
  double t8660;
  double t8661;
  double t8675;
  double t8720;
  double t8729;
  double t8731;
  double t8910;
  double t8911;
  double t4610;
  double t6101;
  double t6359;
  double t8786;
  double t8796;
  double t8798;
  double t8837;
  double t8838;
  double t8840;
  double t8841;
  double t8850;
  double t8855;
  double t8884;
  double t8895;
  double t8901;
  double t8903;
  double t8747;
  double t8749;
  double t8772;
  double t8907;
  double t8908;
  double t8912;
  double t8913;
  double t8914;
  double t8918;
  double t8929;
  double t8931;
  double t8267;
  double t8504;
  double t8568;
  double t8807;
  double t8822;
  double t8826;
  double t8776;
  double t8781;
  double t8785;
  double t8653;
  double t8704;
  double t8706;
  double t8832;
  double t8833;
  double t8836;
  t364 = Cos(var1[3]);
  t1473 = Cos(var1[5]);
  t2942 = Sin(var1[3]);
  t1935 = Sin(var1[4]);
  t3014 = Sin(var1[5]);
  t1353 = Cos(var1[13]);
  t572 = Cos(var1[4]);
  t890 = Sin(var1[13]);
  t1377 = Cos(var1[12]);
  t2399 = t364*t1473*t1935;
  t3127 = t2942*t3014;
  t3249 = t2399 + t3127;
  t3256 = t1377*t3249;
  t3417 = Sin(var1[12]);
  t3474 = -1.*t1473*t2942;
  t3628 = t364*t1935*t3014;
  t3629 = t3474 + t3628;
  t3660 = -1.*t3417*t3629;
  t3908 = t3256 + t3660;
  t187 = Sin(var1[14]);
  t4744 = Cos(var1[14]);
  t6801 = t1473*t2942*t1935;
  t6802 = -1.*t364*t3014;
  t7174 = t6801 + t6802;
  t7205 = t1377*t7174;
  t7206 = t364*t1473;
  t7241 = t2942*t1935*t3014;
  t7295 = t7206 + t7241;
  t7312 = -1.*t3417*t7295;
  t7352 = t7205 + t7312;
  t8576 = t1377*t572*t1473;
  t8580 = -1.*t572*t3417*t3014;
  t8583 = t8576 + t8580;
  t1032 = t364*t572*t890;
  t4085 = t1353*t3908;
  t4173 = t1032 + t4085;
  t4940 = t1353*t364*t572;
  t5255 = -1.*t890*t3908;
  t5456 = t4940 + t5255;
  t6550 = t572*t890*t2942;
  t7687 = t1353*t7352;
  t7848 = t6550 + t7687;
  t8280 = t1353*t572*t2942;
  t8368 = -1.*t890*t7352;
  t8386 = t8280 + t8368;
  t8569 = -1.*t890*t1935;
  t8584 = t1353*t8583;
  t8644 = t8569 + t8584;
  t8660 = -1.*t1353*t1935;
  t8661 = -1.*t890*t8583;
  t8675 = t8660 + t8661;
  t8720 = t3417*t3249;
  t8729 = t1377*t3629;
  t8731 = t8720 + t8729;
  t8910 = -1.*t4744;
  t8911 = 1. + t8910;
  t4610 = -1.*t187*t4173;
  t6101 = t4744*t5456;
  t6359 = t4610 + t6101;
  t8786 = t4744*t4173;
  t8796 = t187*t5456;
  t8798 = t8786 + t8796;
  t8837 = -1.*t1353;
  t8838 = 1. + t8837;
  t8840 = -0.183*t8838;
  t8841 = 0. + t8840;
  t8850 = 0.047*t3417;
  t8855 = 0. + t8850;
  t8884 = -1.*t1377;
  t8895 = 1. + t8884;
  t8901 = -0.047*t8895;
  t8903 = 0. + t8901;
  t8747 = t3417*t7174;
  t8749 = t1377*t7295;
  t8772 = t8747 + t8749;
  t8907 = -0.183*t890;
  t8908 = 0. + t8907;
  t8912 = -0.1*t8911;
  t8913 = -0.183*t187;
  t8914 = 0. + t8912 + t8913;
  t8918 = -0.183*t8911;
  t8929 = 0.1*t187;
  t8931 = 0. + t8918 + t8929;
  t8267 = -1.*t187*t7848;
  t8504 = t4744*t8386;
  t8568 = t8267 + t8504;
  t8807 = t4744*t7848;
  t8822 = t187*t8386;
  t8826 = t8807 + t8822;
  t8776 = t572*t1473*t3417;
  t8781 = t1377*t572*t3014;
  t8785 = t8776 + t8781;
  t8653 = -1.*t187*t8644;
  t8704 = t4744*t8675;
  t8706 = t8653 + t8704;
  t8832 = t4744*t8644;
  t8833 = t187*t8675;
  t8836 = t8832 + t8833;
  p_output1[0]=t6359;
  p_output1[1]=t8568;
  p_output1[2]=t8706;
  p_output1[3]=0.;
  p_output1[4]=t8731;
  p_output1[5]=t8772;
  p_output1[6]=t8785;
  p_output1[7]=0.;
  p_output1[8]=t8798;
  p_output1[9]=t8826;
  p_output1[10]=t8836;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t6359 - 0.13205*t8731 - 0.1*t8798 + t364*t572*t8841 + t3249*t8855 + t3629*t8903 + t3908*t8908 + t4173*t8914 + t5456*t8931 + var1[0];
  p_output1[13]=0. - 0.183*t8568 - 0.13205*t8772 - 0.1*t8826 + t2942*t572*t8841 + t7174*t8855 + t7295*t8903 + t7352*t8908 + t7848*t8914 + t8386*t8931 + var1[1];
  p_output1[14]=0. - 0.183*t8706 - 0.13205*t8785 - 0.1*t8836 - 1.*t1935*t8841 + t1473*t572*t8855 + t3014*t572*t8903 + t8583*t8908 + t8644*t8914 + t8675*t8931 + var1[2];
  p_output1[15]=1.;
}



void H_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
