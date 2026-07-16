/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint.h"

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
  double t993;
  double t4489;
  double t4918;
  double t4497;
  double t5222;
  double t2065;
  double t4649;
  double t5567;
  double t5584;
  double t5736;
  double t5829;
  double t5830;
  double t5831;
  double t1766;
  double t2619;
  double t4273;
  double t5787;
  double t5791;
  double t5795;
  double t5797;
  double t5940;
  double t5948;
  double t5970;
  double t5979;
  double t6002;
  double t6012;
  t993 = Cos(var1[3]);
  t4489 = Cos(var1[5]);
  t4918 = Sin(var1[3]);
  t4497 = Sin(var1[4]);
  t5222 = Sin(var1[5]);
  t2065 = Sin(var1[9]);
  t4649 = t993*t4489*t4497;
  t5567 = t4918*t5222;
  t5584 = t4649 + t5567;
  t5736 = Cos(var1[9]);
  t5829 = -1.*t4489*t4918;
  t5830 = t993*t4497*t5222;
  t5831 = t5829 + t5830;
  t1766 = Cos(var1[4]);
  t2619 = -0.047*t2065;
  t4273 = 0. + t2619;
  t5787 = -1.*t5736;
  t5791 = 1. + t5787;
  t5795 = 0.047*t5791;
  t5797 = 0. + t5795;
  t5940 = t4489*t4918*t4497;
  t5948 = -1.*t993*t5222;
  t5970 = t5940 + t5948;
  t5979 = t993*t4489;
  t6002 = t4918*t4497*t5222;
  t6012 = t5979 + t6002;

  p_output1(0)=0. + t4273*t5584 + t5797*t5831 + 0.047*(t2065*t5584 + t5736*t5831) + 0.183*t1766*t993 + var1(0);
  p_output1(1)=0. + 0.183*t1766*t4918 + t4273*t5970 + t5797*t6012 + 0.047*(t2065*t5970 + t5736*t6012) + var1(1);
  p_output1(2)=0. + t1766*t4273*t4489 - 0.183*t4497 + 0.047*(t1766*t2065*t4489 + t1766*t5222*t5736) + t1766*t5222*t5797 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



