/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t6435;
  double t6520;
  double t6631;
  double t6548;
  double t6635;
  double t6465;
  double t6603;
  double t6645;
  double t6681;
  double t6739;
  double t6830;
  double t6833;
  double t6834;
  double t524;
  double t6454;
  double t6954;
  double t6967;
  double t6968;
  double t6975;
  double t3369;
  double t5427;
  double t6379;
  double t6432;
  double t6473;
  double t6506;
  double t6785;
  double t6803;
  double t6817;
  double t6825;
  double t7020;
  double t7022;
  double t7025;
  double t7032;
  double t7033;
  double t7037;
  double t6959;
  double t6962;
  double t7074;
  double t7079;
  double t7080;
  double t7178;
  double t7192;
  double t7215;
  t6435 = Cos(var1[3]);
  t6520 = Cos(var1[5]);
  t6631 = Sin(var1[3]);
  t6548 = Sin(var1[4]);
  t6635 = Sin(var1[5]);
  t6465 = Sin(var1[9]);
  t6603 = t6435*t6520*t6548;
  t6645 = t6631*t6635;
  t6681 = t6603 + t6645;
  t6739 = Cos(var1[9]);
  t6830 = -1.*t6520*t6631;
  t6833 = t6435*t6548*t6635;
  t6834 = t6830 + t6833;
  t524 = Cos(var1[10]);
  t6454 = Cos(var1[4]);
  t6954 = Sin(var1[10]);
  t6967 = t6739*t6681;
  t6968 = -1.*t6465*t6834;
  t6975 = t6967 + t6968;
  t3369 = -1.*t524;
  t5427 = 1. + t3369;
  t6379 = 0.183*t5427;
  t6432 = 0. + t6379;
  t6473 = -0.047*t6465;
  t6506 = 0. + t6473;
  t6785 = -1.*t6739;
  t6803 = 1. + t6785;
  t6817 = 0.047*t6803;
  t6825 = 0. + t6817;
  t7020 = t6520*t6631*t6548;
  t7022 = -1.*t6435*t6635;
  t7025 = t7020 + t7022;
  t7032 = t6435*t6520;
  t7033 = t6631*t6548*t6635;
  t7037 = t7032 + t7033;
  t6959 = 0.183*t6954;
  t6962 = 0. + t6959;
  t7074 = t6739*t7025;
  t7079 = -1.*t6465*t7037;
  t7080 = t7074 + t7079;
  t7178 = t6739*t6454*t6520;
  t7192 = -1.*t6454*t6465*t6635;
  t7215 = t7178 + t7192;

  p_output1(0)=0. + t6432*t6435*t6454 + t6506*t6681 + t6825*t6834 + 0.13205*(t6465*t6681 + t6739*t6834) + t6962*t6975 + 0.183*(t524*t6435*t6454 - 1.*t6954*t6975) + var1(0);
  p_output1(1)=0. + t6432*t6454*t6631 + t6506*t7025 + t6825*t7037 + 0.13205*(t6465*t7025 + t6739*t7037) + t6962*t7080 + 0.183*(t524*t6454*t6631 - 1.*t6954*t7080) + var1(1);
  p_output1(2)=0. + t6454*t6506*t6520 - 1.*t6432*t6548 + 0.13205*(t6454*t6465*t6520 + t6454*t6635*t6739) + t6454*t6635*t6825 + t6962*t7215 + 0.183*(-1.*t524*t6548 - 1.*t6954*t7215) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



