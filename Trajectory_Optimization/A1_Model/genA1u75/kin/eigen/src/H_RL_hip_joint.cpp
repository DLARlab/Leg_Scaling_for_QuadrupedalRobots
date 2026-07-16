/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:00 GMT-05:00
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
  double t999;
  double t843;
  double t2409;
  double t1526;
  double t4357;
  double t4648;
  double t2749;
  double t5430;
  double t4525;
  double t4962;
  double t4983;
  double t6009;
  double t6038;
  double t6041;
  double t6056;
  double t6065;
  double t6100;
  double t6135;
  double t6137;
  double t6153;
  double t5335;
  double t6046;
  double t6053;
  double t6332;
  double t6396;
  double t6490;
  double t6532;
  double t6536;
  double t6556;
  double t6106;
  double t6164;
  double t6178;
  double t6186;
  double t6189;
  double t6195;
  t999 = Cos(var1[4]);
  t843 = Cos(var1[3]);
  t2409 = Sin(var1[4]);
  t1526 = Sin(var1[3]);
  t4357 = Cos(var1[5]);
  t4648 = Sin(var1[5]);
  t2749 = Sin(var1[15]);
  t5430 = Cos(var1[15]);
  t4525 = t843*t4357*t2409;
  t4962 = t1526*t4648;
  t4983 = t4525 + t4962;
  t6009 = -1.*t4357*t1526;
  t6038 = t843*t2409*t4648;
  t6041 = t6009 + t6038;
  t6056 = t4357*t1526*t2409;
  t6065 = -1.*t843*t4648;
  t6100 = t6056 + t6065;
  t6135 = t843*t4357;
  t6137 = t1526*t2409*t4648;
  t6153 = t6135 + t6137;
  t5335 = t2749*t4983;
  t6046 = t5430*t6041;
  t6053 = t5335 + t6046;
  t6332 = -0.047*t2749;
  t6396 = 0. + t6332;
  t6490 = -1.*t5430;
  t6532 = 1. + t6490;
  t6536 = 0.047*t6532;
  t6556 = 0. + t6536;
  t6106 = t2749*t6100;
  t6164 = t5430*t6153;
  t6178 = t6106 + t6164;
  t6186 = t999*t4357*t2749;
  t6189 = t5430*t999*t4648;
  t6195 = t6186 + t6189;

  p_output1(0)=t843*t999;
  p_output1(1)=t1526*t999;
  p_output1(2)=-1.*t2409;
  p_output1(3)=0.;
  p_output1(4)=t6053;
  p_output1(5)=t6178;
  p_output1(6)=t6195;
  p_output1(7)=0.;
  p_output1(8)=t4983*t5430 - 1.*t2749*t6041;
  p_output1(9)=t5430*t6100 - 1.*t2749*t6153;
  p_output1(10)=-1.*t2749*t4648*t999 + t4357*t5430*t999;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t6053 + t4983*t6396 + t6041*t6556 - 0.183*t843*t999 + var1(0);
  p_output1(13)=0. + 0.047*t6178 + t6100*t6396 + t6153*t6556 - 0.183*t1526*t999 + var1(1);
  p_output1(14)=0. + 0.183*t2409 + 0.047*t6195 + t4357*t6396*t999 + t4648*t6556*t999 + var1(2);
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



