/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t913;
  double t4388;
  double t888;
  double t5994;
  double t7347;
  double t8644;
  double t7324;
  double t8764;
  double t8743;
  double t8749;
  double t8762;
  double t7388;
  double t8654;
  double t8685;
  double t8786;
  double t8789;
  double t8790;
  double t8772;
  double t8776;
  double t8782;
  double t8728;
  double t8768;
  double t8771;
  double t8843;
  double t8847;
  double t8848;
  double t8850;
  double t8858;
  double t8861;
  double t8784;
  double t8791;
  double t8792;
  double t8793;
  double t8795;
  double t8798;
  t913 = Cos(var1[4]);
  t4388 = Sin(var1[3]);
  t888 = Cos(var1[3]);
  t5994 = Sin(var1[4]);
  t7347 = Cos(var1[5]);
  t8644 = Sin(var1[5]);
  t7324 = Cos(var1[6]);
  t8764 = Sin(var1[6]);
  t8743 = t888*t7347*t5994;
  t8749 = t4388*t8644;
  t8762 = t8743 + t8749;
  t7388 = -1.*t7347*t4388;
  t8654 = t888*t5994*t8644;
  t8685 = t7388 + t8654;
  t8786 = t7347*t4388*t5994;
  t8789 = -1.*t888*t8644;
  t8790 = t8786 + t8789;
  t8772 = t888*t7347;
  t8776 = t4388*t5994*t8644;
  t8782 = t8772 + t8776;
  t8728 = t7324*t8685;
  t8768 = t8762*t8764;
  t8771 = t8728 + t8768;
  t8843 = -1.*t7324;
  t8847 = 1. + t8843;
  t8848 = -0.047*t8847;
  t8850 = 0. + t8848;
  t8858 = 0.047*t8764;
  t8861 = 0. + t8858;
  t8784 = t7324*t8782;
  t8791 = t8790*t8764;
  t8792 = t8784 + t8791;
  t8793 = t913*t7324*t8644;
  t8795 = t913*t7347*t8764;
  t8798 = t8793 + t8795;

  p_output1(0)=t888*t913;
  p_output1(1)=t4388*t913;
  p_output1(2)=-1.*t5994;
  p_output1(3)=0.;
  p_output1(4)=t8771;
  p_output1(5)=t8792;
  p_output1(6)=t8798;
  p_output1(7)=0.;
  p_output1(8)=t7324*t8762 - 1.*t8685*t8764;
  p_output1(9)=-1.*t8764*t8782 + t7324*t8790;
  p_output1(10)=t7324*t7347*t913 - 1.*t8644*t8764*t913;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t8771 + t8685*t8850 + t8762*t8861 + 0.183*t888*t913 + var1(0);
  p_output1(13)=0. - 0.047*t8792 + t8782*t8850 + t8790*t8861 + 0.183*t4388*t913 + var1(1);
  p_output1(14)=0. - 0.183*t5994 - 0.047*t8798 + t8644*t8850*t913 + t7347*t8861*t913 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



