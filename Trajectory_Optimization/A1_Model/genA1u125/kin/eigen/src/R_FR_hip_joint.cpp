/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint.h"

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
  double t694;
  double t1843;
  double t528;
  double t3831;
  double t6555;
  double t6814;
  double t5441;
  double t6984;
  double t6956;
  double t6967;
  double t6974;
  double t6797;
  double t6908;
  double t6938;
  double t7043;
  double t7056;
  double t7067;
  double t7011;
  double t7012;
  double t7032;
  t694 = Cos(var1[4]);
  t1843 = Sin(var1[3]);
  t528 = Cos(var1[3]);
  t3831 = Sin(var1[4]);
  t6555 = Cos(var1[5]);
  t6814 = Sin(var1[5]);
  t5441 = Cos(var1[6]);
  t6984 = Sin(var1[6]);
  t6956 = t528*t6555*t3831;
  t6967 = t1843*t6814;
  t6974 = t6956 + t6967;
  t6797 = -1.*t6555*t1843;
  t6908 = t528*t3831*t6814;
  t6938 = t6797 + t6908;
  t7043 = t6555*t1843*t3831;
  t7056 = -1.*t528*t6814;
  t7067 = t7043 + t7056;
  t7011 = t528*t6555;
  t7012 = t1843*t3831*t6814;
  t7032 = t7011 + t7012;

  p_output1(0)=t528*t694;
  p_output1(1)=t1843*t694;
  p_output1(2)=-1.*t3831;
  p_output1(3)=t5441*t6938 + t6974*t6984;
  p_output1(4)=t5441*t7032 + t6984*t7067;
  p_output1(5)=t5441*t6814*t694 + t6555*t694*t6984;
  p_output1(6)=t5441*t6974 - 1.*t6938*t6984;
  p_output1(7)=-1.*t6984*t7032 + t5441*t7067;
  p_output1(8)=t5441*t6555*t694 - 1.*t6814*t694*t6984;
}


       
Eigen::Matrix<double,3,3> R_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



