/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:43 GMT-05:00
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
  double t628;
  double t3593;
  double t4423;
  double t4333;
  double t4560;
  double t666;
  double t3291;
  double t3519;
  double t4606;
  double t4936;
  double t4576;
  double t4604;
  double t4605;
  double t4390;
  double t4566;
  double t4568;
  double t5512;
  double t5528;
  double t5531;
  double t5151;
  double t5185;
  double t5359;
  double t4569;
  double t4608;
  double t4871;
  double t5503;
  double t5632;
  double t5725;
  double t5867;
  double t5908;
  double t6098;
  t628 = Cos(var1[3]);
  t3593 = Cos(var1[5]);
  t4423 = Sin(var1[3]);
  t4333 = Sin(var1[4]);
  t4560 = Sin(var1[5]);
  t666 = Cos(var1[4]);
  t3291 = Cos(var1[7]);
  t3519 = Cos(var1[6]);
  t4606 = Sin(var1[6]);
  t4936 = Sin(var1[7]);
  t4576 = -1.*t3593*t4423;
  t4604 = t628*t4333*t4560;
  t4605 = t4576 + t4604;
  t4390 = t628*t3593*t4333;
  t4566 = t4423*t4560;
  t4568 = t4390 + t4566;
  t5512 = t628*t3593;
  t5528 = t4423*t4333*t4560;
  t5531 = t5512 + t5528;
  t5151 = t3593*t4423*t4333;
  t5185 = -1.*t628*t4560;
  t5359 = t5151 + t5185;
  t4569 = t3519*t4568;
  t4608 = -1.*t4605*t4606;
  t4871 = t4569 + t4608;
  t5503 = t3519*t5359;
  t5632 = -1.*t5531*t4606;
  t5725 = t5503 + t5632;
  t5867 = t666*t3593*t3519;
  t5908 = -1.*t666*t4560*t4606;
  t6098 = t5867 + t5908;

  p_output1(0)=-1.*t4871*t4936 + t3291*t628*t666;
  p_output1(1)=-1.*t4936*t5725 + t3291*t4423*t666;
  p_output1(2)=-1.*t3291*t4333 - 1.*t4936*t6098;
  p_output1(3)=t3519*t4605 + t4568*t4606;
  p_output1(4)=t4606*t5359 + t3519*t5531;
  p_output1(5)=t3519*t4560*t666 + t3593*t4606*t666;
  p_output1(6)=t3291*t4871 + t4936*t628*t666;
  p_output1(7)=t3291*t5725 + t4423*t4936*t666;
  p_output1(8)=-1.*t4333*t4936 + t3291*t6098;
}


       
Eigen::Matrix<double,3,3> R_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



