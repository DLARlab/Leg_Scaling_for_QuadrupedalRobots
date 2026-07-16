/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint.h"

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
  double t607;
  double t4179;
  double t4871;
  double t4327;
  double t4894;
  double t1454;
  double t4848;
  double t5105;
  double t5190;
  double t5217;
  double t5334;
  double t5367;
  double t5371;
  double t1012;
  double t1630;
  double t2039;
  double t5246;
  double t5282;
  double t5283;
  double t5301;
  double t5568;
  double t5572;
  double t5654;
  double t5777;
  double t5779;
  double t5864;
  t607 = Cos(var1[3]);
  t4179 = Cos(var1[5]);
  t4871 = Sin(var1[3]);
  t4327 = Sin(var1[4]);
  t4894 = Sin(var1[5]);
  t1454 = Sin(var1[12]);
  t4848 = t607*t4179*t4327;
  t5105 = t4871*t4894;
  t5190 = t4848 + t5105;
  t5217 = Cos(var1[12]);
  t5334 = -1.*t4179*t4871;
  t5367 = t607*t4327*t4894;
  t5371 = t5334 + t5367;
  t1012 = Cos(var1[4]);
  t1630 = 0.047*t1454;
  t2039 = 0. + t1630;
  t5246 = -1.*t5217;
  t5282 = 1. + t5246;
  t5283 = -0.047*t5282;
  t5301 = 0. + t5283;
  t5568 = t4179*t4871*t4327;
  t5572 = -1.*t607*t4894;
  t5654 = t5568 + t5572;
  t5777 = t607*t4179;
  t5779 = t4871*t4327*t4894;
  t5864 = t5777 + t5779;

  p_output1(0)=0. + t2039*t5190 + t5301*t5371 - 0.047*(t1454*t5190 + t5217*t5371) - 0.183*t1012*t607 + var1(0);
  p_output1(1)=0. - 0.183*t1012*t4871 + t2039*t5654 + t5301*t5864 - 0.047*(t1454*t5654 + t5217*t5864) + var1(1);
  p_output1(2)=0. + t1012*t2039*t4179 + 0.183*t4327 - 0.047*(t1012*t1454*t4179 + t1012*t4894*t5217) + t1012*t4894*t5301 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



