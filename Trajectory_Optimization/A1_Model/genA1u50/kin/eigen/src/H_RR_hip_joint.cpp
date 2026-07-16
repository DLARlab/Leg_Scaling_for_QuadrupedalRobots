/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint.h"

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
  double t905;
  double t588;
  double t3962;
  double t3883;
  double t3984;
  double t3991;
  double t3983;
  double t4000;
  double t3985;
  double t3993;
  double t3994;
  double t4005;
  double t4006;
  double t4012;
  double t4926;
  double t4928;
  double t4951;
  double t5334;
  double t5337;
  double t5341;
  double t3999;
  double t4787;
  double t4794;
  double t5379;
  double t5380;
  double t5382;
  double t5383;
  double t5385;
  double t5386;
  double t5333;
  double t5342;
  double t5344;
  double t5345;
  double t5346;
  double t5357;
  t905 = Cos(var1[4]);
  t588 = Cos(var1[3]);
  t3962 = Sin(var1[4]);
  t3883 = Sin(var1[3]);
  t3984 = Cos(var1[5]);
  t3991 = Sin(var1[5]);
  t3983 = Sin(var1[12]);
  t4000 = Cos(var1[12]);
  t3985 = t588*t3984*t3962;
  t3993 = t3883*t3991;
  t3994 = t3985 + t3993;
  t4005 = -1.*t3984*t3883;
  t4006 = t588*t3962*t3991;
  t4012 = t4005 + t4006;
  t4926 = t3984*t3883*t3962;
  t4928 = -1.*t588*t3991;
  t4951 = t4926 + t4928;
  t5334 = t588*t3984;
  t5337 = t3883*t3962*t3991;
  t5341 = t5334 + t5337;
  t3999 = t3983*t3994;
  t4787 = t4000*t4012;
  t4794 = t3999 + t4787;
  t5379 = 0.047*t3983;
  t5380 = 0. + t5379;
  t5382 = -1.*t4000;
  t5383 = 1. + t5382;
  t5385 = -0.047*t5383;
  t5386 = 0. + t5385;
  t5333 = t3983*t4951;
  t5342 = t4000*t5341;
  t5344 = t5333 + t5342;
  t5345 = t905*t3984*t3983;
  t5346 = t4000*t905*t3991;
  t5357 = t5345 + t5346;

  p_output1(0)=t588*t905;
  p_output1(1)=t3883*t905;
  p_output1(2)=-1.*t3962;
  p_output1(3)=0.;
  p_output1(4)=t4794;
  p_output1(5)=t5344;
  p_output1(6)=t5357;
  p_output1(7)=0.;
  p_output1(8)=t3994*t4000 - 1.*t3983*t4012;
  p_output1(9)=t4000*t4951 - 1.*t3983*t5341;
  p_output1(10)=-1.*t3983*t3991*t905 + t3984*t4000*t905;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t4794 + t3994*t5380 + t4012*t5386 - 0.183*t588*t905 + var1(0);
  p_output1(13)=0. - 0.047*t5344 + t4951*t5380 + t5341*t5386 - 0.183*t3883*t905 + var1(1);
  p_output1(14)=0. + 0.183*t3962 - 0.047*t5357 + t3984*t5380*t905 + t3991*t5386*t905 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



