/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint.h"

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
  double t735;
  double t729;
  double t2698;
  double t2031;
  double t3399;
  double t3687;
  double t2844;
  double t5300;
  double t3593;
  double t3749;
  double t4488;
  double t5505;
  double t5537;
  double t5598;
  double t5824;
  double t5833;
  double t5847;
  double t5884;
  double t5910;
  double t5989;
  double t5116;
  double t5722;
  double t5817;
  double t6285;
  double t6289;
  double t6324;
  double t6330;
  double t6331;
  double t6342;
  double t5861;
  double t6003;
  double t6024;
  double t6062;
  double t6068;
  double t6073;
  t735 = Cos(var1[4]);
  t729 = Cos(var1[3]);
  t2698 = Sin(var1[4]);
  t2031 = Sin(var1[3]);
  t3399 = Cos(var1[5]);
  t3687 = Sin(var1[5]);
  t2844 = Sin(var1[15]);
  t5300 = Cos(var1[15]);
  t3593 = t729*t3399*t2698;
  t3749 = t2031*t3687;
  t4488 = t3593 + t3749;
  t5505 = -1.*t3399*t2031;
  t5537 = t729*t2698*t3687;
  t5598 = t5505 + t5537;
  t5824 = t3399*t2031*t2698;
  t5833 = -1.*t729*t3687;
  t5847 = t5824 + t5833;
  t5884 = t729*t3399;
  t5910 = t2031*t2698*t3687;
  t5989 = t5884 + t5910;
  t5116 = t2844*t4488;
  t5722 = t5300*t5598;
  t5817 = t5116 + t5722;
  t6285 = -0.047*t2844;
  t6289 = 0. + t6285;
  t6324 = -1.*t5300;
  t6330 = 1. + t6324;
  t6331 = 0.047*t6330;
  t6342 = 0. + t6331;
  t5861 = t2844*t5847;
  t6003 = t5300*t5989;
  t6024 = t5861 + t6003;
  t6062 = t735*t3399*t2844;
  t6068 = t5300*t735*t3687;
  t6073 = t6062 + t6068;

  p_output1(0)=t729*t735;
  p_output1(1)=t2031*t735;
  p_output1(2)=-1.*t2698;
  p_output1(3)=0.;
  p_output1(4)=t5817;
  p_output1(5)=t6024;
  p_output1(6)=t6073;
  p_output1(7)=0.;
  p_output1(8)=t4488*t5300 - 1.*t2844*t5598;
  p_output1(9)=t5300*t5847 - 1.*t2844*t5989;
  p_output1(10)=-1.*t2844*t3687*t735 + t3399*t5300*t735;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t5817 + t4488*t6289 + t5598*t6342 - 0.183*t729*t735 + var1(0);
  p_output1(13)=0. + 0.047*t6024 + t5847*t6289 + t5989*t6342 - 0.183*t2031*t735 + var1(1);
  p_output1(14)=0. + 0.183*t2698 + 0.047*t6073 + t3399*t6289*t735 + t3687*t6342*t735 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



