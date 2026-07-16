/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint_src.h"

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
  double t646;
  double t669;
  double t641;
  double t684;
  double t699;
  double t704;
  double t697;
  double t743;
  double t735;
  double t737;
  double t741;
  double t701;
  double t708;
  double t721;
  double t783;
  double t787;
  double t789;
  double t767;
  double t770;
  double t780;
  double t732;
  double t751;
  double t754;
  double t902;
  double t904;
  double t906;
  double t911;
  double t920;
  double t924;
  double t782;
  double t791;
  double t827;
  double t828;
  double t829;
  double t834;
  t646 = Cos(var1[4]);
  t669 = Sin(var1[3]);
  t641 = Cos(var1[3]);
  t684 = Sin(var1[4]);
  t699 = Cos(var1[5]);
  t704 = Sin(var1[5]);
  t697 = Cos(var1[6]);
  t743 = Sin(var1[6]);
  t735 = t641*t699*t684;
  t737 = t669*t704;
  t741 = t735 + t737;
  t701 = -1.*t699*t669;
  t708 = t641*t684*t704;
  t721 = t701 + t708;
  t783 = t699*t669*t684;
  t787 = -1.*t641*t704;
  t789 = t783 + t787;
  t767 = t641*t699;
  t770 = t669*t684*t704;
  t780 = t767 + t770;
  t732 = t697*t721;
  t751 = t741*t743;
  t754 = t732 + t751;
  t902 = -1.*t697;
  t904 = 1. + t902;
  t906 = -0.047*t904;
  t911 = 0. + t906;
  t920 = 0.047*t743;
  t924 = 0. + t920;
  t782 = t697*t780;
  t791 = t789*t743;
  t827 = t782 + t791;
  t828 = t646*t697*t704;
  t829 = t646*t699*t743;
  t834 = t828 + t829;
  p_output1[0]=t641*t646;
  p_output1[1]=t646*t669;
  p_output1[2]=-1.*t684;
  p_output1[3]=0.;
  p_output1[4]=t754;
  p_output1[5]=t827;
  p_output1[6]=t834;
  p_output1[7]=0.;
  p_output1[8]=t697*t741 - 1.*t721*t743;
  p_output1[9]=-1.*t743*t780 + t697*t789;
  p_output1[10]=t646*t697*t699 - 1.*t646*t704*t743;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t641*t646 - 0.047*t754 + t721*t911 + t741*t924 + var1[0];
  p_output1[13]=0. + 0.183*t646*t669 - 0.047*t827 + t780*t911 + t789*t924 + var1[1];
  p_output1[14]=0. - 0.183*t684 - 0.047*t834 + t646*t704*t911 + t646*t699*t924 + var1[2];
  p_output1[15]=1.;
}



void H_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
