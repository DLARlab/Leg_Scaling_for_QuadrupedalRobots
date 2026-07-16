/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_hip_joint.h"

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
  double t788;
  double t1857;
  double t3334;
  double t1956;
  double t3339;
  double t1007;
  double t1983;
  double t3340;
  double t3959;
  double t3986;
  double t4018;
  double t4074;
  double t4078;
  double t793;
  double t1505;
  double t1716;
  double t3992;
  double t3996;
  double t4001;
  double t4013;
  double t4365;
  double t4380;
  double t4467;
  double t4470;
  double t4471;
  double t4497;
  t788 = Cos(var1[3]);
  t1857 = Cos(var1[5]);
  t3334 = Sin(var1[3]);
  t1956 = Sin(var1[4]);
  t3339 = Sin(var1[5]);
  t1007 = Sin(var1[15]);
  t1983 = t788*t1857*t1956;
  t3340 = t3334*t3339;
  t3959 = t1983 + t3340;
  t3986 = Cos(var1[15]);
  t4018 = -1.*t1857*t3334;
  t4074 = t788*t1956*t3339;
  t4078 = t4018 + t4074;
  t793 = Cos(var1[4]);
  t1505 = -0.047*t1007;
  t1716 = 0. + t1505;
  t3992 = -1.*t3986;
  t3996 = 1. + t3992;
  t4001 = 0.047*t3996;
  t4013 = 0. + t4001;
  t4365 = t1857*t3334*t1956;
  t4380 = -1.*t788*t3339;
  t4467 = t4365 + t4380;
  t4470 = t788*t1857;
  t4471 = t3334*t1956*t3339;
  t4497 = t4470 + t4471;

  p_output1(0)=0. + t1716*t3959 + t4013*t4078 + 0.047*(t1007*t3959 + t3986*t4078) - 0.183*t788*t793 + var1(0);
  p_output1(1)=0. + t1716*t4467 + t4013*t4497 + 0.047*(t1007*t4467 + t3986*t4497) - 0.183*t3334*t793 + var1(1);
  p_output1(2)=0. + 0.183*t1956 + t1716*t1857*t793 + t3339*t4013*t793 + 0.047*(t1007*t1857*t793 + t3339*t3986*t793) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



