/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:49 GMT-05:00
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
  double t1198;
  double t2343;
  double t3054;
  double t2843;
  double t3086;
  double t2011;
  double t2908;
  double t4006;
  double t4837;
  double t4880;
  double t5595;
  double t5598;
  double t5600;
  double t1436;
  double t2031;
  double t2341;
  double t5436;
  double t5450;
  double t5501;
  double t5577;
  double t5777;
  double t5814;
  double t5824;
  double t5861;
  double t5884;
  double t5910;
  t1198 = Cos(var1[3]);
  t2343 = Cos(var1[5]);
  t3054 = Sin(var1[3]);
  t2843 = Sin(var1[4]);
  t3086 = Sin(var1[5]);
  t2011 = Sin(var1[15]);
  t2908 = t1198*t2343*t2843;
  t4006 = t3054*t3086;
  t4837 = t2908 + t4006;
  t4880 = Cos(var1[15]);
  t5595 = -1.*t2343*t3054;
  t5598 = t1198*t2843*t3086;
  t5600 = t5595 + t5598;
  t1436 = Cos(var1[4]);
  t2031 = -0.047*t2011;
  t2341 = 0. + t2031;
  t5436 = -1.*t4880;
  t5450 = 1. + t5436;
  t5501 = 0.047*t5450;
  t5577 = 0. + t5501;
  t5777 = t2343*t3054*t2843;
  t5814 = -1.*t1198*t3086;
  t5824 = t5777 + t5814;
  t5861 = t1198*t2343;
  t5884 = t3054*t2843*t3086;
  t5910 = t5861 + t5884;

  p_output1(0)=0. - 0.183*t1198*t1436 + t2341*t4837 + t5577*t5600 + 0.047*(t2011*t4837 + t4880*t5600) + var1(0);
  p_output1(1)=0. - 0.183*t1436*t3054 + t2341*t5824 + t5577*t5910 + 0.047*(t2011*t5824 + t4880*t5910) + var1(1);
  p_output1(2)=0. + t1436*t2341*t2343 + 0.183*t2843 + 0.047*(t1436*t2011*t2343 + t1436*t3086*t4880) + t1436*t3086*t5577 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



