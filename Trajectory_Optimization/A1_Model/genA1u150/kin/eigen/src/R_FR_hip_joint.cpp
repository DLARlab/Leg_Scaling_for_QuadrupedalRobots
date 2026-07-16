/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:30 GMT-05:00
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
  double t2551;
  double t4359;
  double t1378;
  double t6680;
  double t6879;
  double t7096;
  double t6700;
  double t7231;
  double t7207;
  double t7208;
  double t7210;
  double t7083;
  double t7113;
  double t7174;
  double t7455;
  double t7459;
  double t7465;
  double t7301;
  double t7307;
  double t7351;
  t2551 = Cos(var1[4]);
  t4359 = Sin(var1[3]);
  t1378 = Cos(var1[3]);
  t6680 = Sin(var1[4]);
  t6879 = Cos(var1[5]);
  t7096 = Sin(var1[5]);
  t6700 = Cos(var1[6]);
  t7231 = Sin(var1[6]);
  t7207 = t1378*t6879*t6680;
  t7208 = t4359*t7096;
  t7210 = t7207 + t7208;
  t7083 = -1.*t6879*t4359;
  t7113 = t1378*t6680*t7096;
  t7174 = t7083 + t7113;
  t7455 = t6879*t4359*t6680;
  t7459 = -1.*t1378*t7096;
  t7465 = t7455 + t7459;
  t7301 = t1378*t6879;
  t7307 = t4359*t6680*t7096;
  t7351 = t7301 + t7307;

  p_output1(0)=t1378*t2551;
  p_output1(1)=t2551*t4359;
  p_output1(2)=-1.*t6680;
  p_output1(3)=t6700*t7174 + t7210*t7231;
  p_output1(4)=t6700*t7351 + t7231*t7465;
  p_output1(5)=t2551*t6700*t7096 + t2551*t6879*t7231;
  p_output1(6)=t6700*t7210 - 1.*t7174*t7231;
  p_output1(7)=-1.*t7231*t7351 + t6700*t7465;
  p_output1(8)=t2551*t6700*t6879 - 1.*t2551*t7096*t7231;
}


       
Eigen::Matrix<double,3,3> R_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



