/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_thigh_joint.h"

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
  double t214;
  double t3943;
  double t4240;
  double t4124;
  double t4560;
  double t6;
  double t685;
  double t1880;
  double t1902;
  double t4597;
  double t4185;
  double t4569;
  double t4576;
  double t4600;
  double t4604;
  double t4605;
  double t4871;
  double t4936;
  double t4957;
  double t5359;
  double t5503;
  double t5512;
  double t4594;
  double t4606;
  double t4608;
  double t5065;
  double t5528;
  double t5531;
  double t5725;
  double t5772;
  double t5813;
  t214 = Cos(var1[3]);
  t3943 = Cos(var1[5]);
  t4240 = Sin(var1[3]);
  t4124 = Sin(var1[4]);
  t4560 = Sin(var1[5]);
  t6 = Cos(var1[16]);
  t685 = Cos(var1[4]);
  t1880 = Sin(var1[16]);
  t1902 = Cos(var1[15]);
  t4597 = Sin(var1[15]);
  t4185 = t214*t3943*t4124;
  t4569 = t4240*t4560;
  t4576 = t4185 + t4569;
  t4600 = -1.*t3943*t4240;
  t4604 = t214*t4124*t4560;
  t4605 = t4600 + t4604;
  t4871 = t3943*t4240*t4124;
  t4936 = -1.*t214*t4560;
  t4957 = t4871 + t4936;
  t5359 = t214*t3943;
  t5503 = t4240*t4124*t4560;
  t5512 = t5359 + t5503;
  t4594 = t1902*t4576;
  t4606 = -1.*t4597*t4605;
  t4608 = t4594 + t4606;
  t5065 = t1902*t4957;
  t5528 = -1.*t4597*t5512;
  t5531 = t5065 + t5528;
  t5725 = t1902*t685*t3943;
  t5772 = -1.*t685*t4597*t4560;
  t5813 = t5725 + t5772;

  p_output1(0)=-1.*t1880*t4608 + t214*t6*t685;
  p_output1(1)=-1.*t1880*t5531 + t4240*t6*t685;
  p_output1(2)=-1.*t1880*t5813 - 1.*t4124*t6;
  p_output1(3)=t4576*t4597 + t1902*t4605;
  p_output1(4)=t4597*t4957 + t1902*t5512;
  p_output1(5)=t1902*t4560*t685 + t3943*t4597*t685;
  p_output1(6)=t4608*t6 + t1880*t214*t685;
  p_output1(7)=t5531*t6 + t1880*t4240*t685;
  p_output1(8)=-1.*t1880*t4124 + t5813*t6;
}


       
Eigen::Matrix<double,3,3> R_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



