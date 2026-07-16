/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1352;
  double t2655;
  double t2691;
  double t2670;
  double t2699;
  double t1720;
  double t2523;
  double t2584;
  double t2782;
  double t2788;
  double t2752;
  double t2767;
  double t2781;
  double t2671;
  double t2704;
  double t2720;
  double t2825;
  double t2865;
  double t2866;
  double t2802;
  double t2812;
  double t2821;
  double t2746;
  double t2784;
  double t2786;
  double t2824;
  double t2873;
  double t2886;
  double t2912;
  double t2917;
  double t2920;
  t1352 = Cos(var1[3]);
  t2655 = Cos(var1[5]);
  t2691 = Sin(var1[3]);
  t2670 = Sin(var1[4]);
  t2699 = Sin(var1[5]);
  t1720 = Cos(var1[4]);
  t2523 = Cos(var1[7]);
  t2584 = Cos(var1[6]);
  t2782 = Sin(var1[6]);
  t2788 = Sin(var1[7]);
  t2752 = -1.*t2655*t2691;
  t2767 = t1352*t2670*t2699;
  t2781 = t2752 + t2767;
  t2671 = t1352*t2655*t2670;
  t2704 = t2691*t2699;
  t2720 = t2671 + t2704;
  t2825 = t1352*t2655;
  t2865 = t2691*t2670*t2699;
  t2866 = t2825 + t2865;
  t2802 = t2655*t2691*t2670;
  t2812 = -1.*t1352*t2699;
  t2821 = t2802 + t2812;
  t2746 = t2584*t2720;
  t2784 = -1.*t2781*t2782;
  t2786 = t2746 + t2784;
  t2824 = t2584*t2821;
  t2873 = -1.*t2866*t2782;
  t2886 = t2824 + t2873;
  t2912 = t1720*t2655*t2584;
  t2917 = -1.*t1720*t2699*t2782;
  t2920 = t2912 + t2917;

  p_output1(0)=t1352*t1720*t2523 - 1.*t2786*t2788;
  p_output1(1)=t1720*t2523*t2691 - 1.*t2788*t2886;
  p_output1(2)=-1.*t2523*t2670 - 1.*t2788*t2920;
  p_output1(3)=t2584*t2781 + t2720*t2782;
  p_output1(4)=t2782*t2821 + t2584*t2866;
  p_output1(5)=t1720*t2584*t2699 + t1720*t2655*t2782;
  p_output1(6)=t2523*t2786 + t1352*t1720*t2788;
  p_output1(7)=t1720*t2691*t2788 + t2523*t2886;
  p_output1(8)=-1.*t2670*t2788 + t2523*t2920;
}


       
Eigen::Matrix<double,3,3> R_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



