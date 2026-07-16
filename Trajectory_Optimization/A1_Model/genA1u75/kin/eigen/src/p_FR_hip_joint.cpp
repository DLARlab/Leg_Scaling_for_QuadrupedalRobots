/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint.h"

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
  double t429;
  double t6557;
  double t6562;
  double t6559;
  double t6603;
  double t6290;
  double t6561;
  double t6607;
  double t6608;
  double t6614;
  double t6615;
  double t6621;
  double t6623;
  double t447;
  double t6360;
  double t6527;
  double t6552;
  double t6554;
  double t6625;
  double t6633;
  double t6658;
  double t6659;
  double t6661;
  double t6663;
  double t6664;
  double t6673;
  t429 = Cos(var1[3]);
  t6557 = Cos(var1[5]);
  t6562 = Sin(var1[4]);
  t6559 = Sin(var1[3]);
  t6603 = Sin(var1[5]);
  t6290 = Cos(var1[6]);
  t6561 = -1.*t6557*t6559;
  t6607 = t429*t6562*t6603;
  t6608 = t6561 + t6607;
  t6614 = t429*t6557*t6562;
  t6615 = t6559*t6603;
  t6621 = t6614 + t6615;
  t6623 = Sin(var1[6]);
  t447 = Cos(var1[4]);
  t6360 = -1.*t6290;
  t6527 = 1. + t6360;
  t6552 = -0.047*t6527;
  t6554 = 0. + t6552;
  t6625 = 0.047*t6623;
  t6633 = 0. + t6625;
  t6658 = t429*t6557;
  t6659 = t6559*t6562*t6603;
  t6661 = t6658 + t6659;
  t6663 = t6557*t6559*t6562;
  t6664 = -1.*t429*t6603;
  t6673 = t6663 + t6664;

  p_output1(0)=0. + 0.183*t429*t447 + t6554*t6608 - 0.047*(t6290*t6608 + t6621*t6623) + t6621*t6633 + var1(0);
  p_output1(1)=0. + 0.183*t447*t6559 + t6554*t6661 + t6633*t6673 - 0.047*(t6290*t6661 + t6623*t6673) + var1(1);
  p_output1(2)=0. - 0.183*t6562 + t447*t6554*t6603 - 0.047*(t447*t6290*t6603 + t447*t6557*t6623) + t447*t6557*t6633 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



