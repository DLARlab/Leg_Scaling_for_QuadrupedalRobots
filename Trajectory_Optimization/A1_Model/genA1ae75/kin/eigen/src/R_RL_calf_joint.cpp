/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint.h"

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
  double t571;
  double t3030;
  double t3196;
  double t3035;
  double t3214;
  double t2358;
  double t954;
  double t1176;
  double t2901;
  double t3175;
  double t3325;
  double t3358;
  double t3458;
  double t3465;
  double t3470;
  double t3472;
  double t3494;
  double t3497;
  double t3528;
  double t109;
  double t3576;
  double t3803;
  double t3805;
  double t3834;
  double t3837;
  double t3859;
  double t3862;
  double t3883;
  double t3900;
  double t3910;
  double t4011;
  double t4021;
  double t4070;
  double t1415;
  double t3560;
  double t3571;
  double t3579;
  double t3618;
  double t3724;
  double t3786;
  double t3911;
  double t3923;
  double t3940;
  double t3963;
  double t3964;
  double t4001;
  double t4078;
  double t4086;
  double t4094;
  double t4102;
  double t4118;
  t571 = Cos(var1[3]);
  t3030 = Cos(var1[5]);
  t3196 = Sin(var1[3]);
  t3035 = Sin(var1[4]);
  t3214 = Sin(var1[5]);
  t2358 = Cos(var1[16]);
  t954 = Cos(var1[4]);
  t1176 = Sin(var1[16]);
  t2901 = Cos(var1[15]);
  t3175 = t571*t3030*t3035;
  t3325 = t3196*t3214;
  t3358 = t3175 + t3325;
  t3458 = t2901*t3358;
  t3465 = Sin(var1[15]);
  t3470 = -1.*t3030*t3196;
  t3472 = t571*t3035*t3214;
  t3494 = t3470 + t3472;
  t3497 = -1.*t3465*t3494;
  t3528 = t3458 + t3497;
  t109 = Sin(var1[17]);
  t3576 = Cos(var1[17]);
  t3803 = t3030*t3196*t3035;
  t3805 = -1.*t571*t3214;
  t3834 = t3803 + t3805;
  t3837 = t2901*t3834;
  t3859 = t571*t3030;
  t3862 = t3196*t3035*t3214;
  t3883 = t3859 + t3862;
  t3900 = -1.*t3465*t3883;
  t3910 = t3837 + t3900;
  t4011 = t2901*t954*t3030;
  t4021 = -1.*t954*t3465*t3214;
  t4070 = t4011 + t4021;
  t1415 = t571*t954*t1176;
  t3560 = t2358*t3528;
  t3571 = t1415 + t3560;
  t3579 = t2358*t571*t954;
  t3618 = -1.*t1176*t3528;
  t3724 = t3579 + t3618;
  t3786 = t954*t1176*t3196;
  t3911 = t2358*t3910;
  t3923 = t3786 + t3911;
  t3940 = t2358*t954*t3196;
  t3963 = -1.*t1176*t3910;
  t3964 = t3940 + t3963;
  t4001 = -1.*t1176*t3035;
  t4078 = t2358*t4070;
  t4086 = t4001 + t4078;
  t4094 = -1.*t2358*t3035;
  t4102 = -1.*t1176*t4070;
  t4118 = t4094 + t4102;

  p_output1(0)=-1.*t109*t3571 + t3576*t3724;
  p_output1(1)=-1.*t109*t3923 + t3576*t3964;
  p_output1(2)=-1.*t109*t4086 + t3576*t4118;
  p_output1(3)=t3358*t3465 + t2901*t3494;
  p_output1(4)=t3465*t3834 + t2901*t3883;
  p_output1(5)=t2901*t3214*t954 + t3030*t3465*t954;
  p_output1(6)=t3571*t3576 + t109*t3724;
  p_output1(7)=t3576*t3923 + t109*t3964;
  p_output1(8)=t3576*t4086 + t109*t4118;
}


       
Eigen::Matrix<double,3,3> R_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



