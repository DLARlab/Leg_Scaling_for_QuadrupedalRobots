/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint.h"

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
  double t677;
  double t338;
  double t2817;
  double t2048;
  double t6418;
  double t6661;
  double t4153;
  double t6831;
  double t6658;
  double t6702;
  double t6757;
  double t6916;
  double t6926;
  double t6929;
  double t6944;
  double t6945;
  double t6958;
  double t7083;
  double t7090;
  double t7129;
  t677 = Cos(var1[4]);
  t338 = Cos(var1[3]);
  t2817 = Sin(var1[4]);
  t2048 = Sin(var1[3]);
  t6418 = Cos(var1[5]);
  t6661 = Sin(var1[5]);
  t4153 = Sin(var1[15]);
  t6831 = Cos(var1[15]);
  t6658 = t338*t6418*t2817;
  t6702 = t2048*t6661;
  t6757 = t6658 + t6702;
  t6916 = -1.*t6418*t2048;
  t6926 = t338*t2817*t6661;
  t6929 = t6916 + t6926;
  t6944 = t6418*t2048*t2817;
  t6945 = -1.*t338*t6661;
  t6958 = t6944 + t6945;
  t7083 = t338*t6418;
  t7090 = t2048*t2817*t6661;
  t7129 = t7083 + t7090;

  p_output1(0)=t338*t677;
  p_output1(1)=t2048*t677;
  p_output1(2)=-1.*t2817;
  p_output1(3)=t4153*t6757 + t6831*t6929;
  p_output1(4)=t4153*t6958 + t6831*t7129;
  p_output1(5)=t4153*t6418*t677 + t6661*t677*t6831;
  p_output1(6)=t6757*t6831 - 1.*t4153*t6929;
  p_output1(7)=t6831*t6958 - 1.*t4153*t7129;
  p_output1(8)=-1.*t4153*t6661*t677 + t6418*t677*t6831;
}


       
Eigen::Matrix<double,3,3> R_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



