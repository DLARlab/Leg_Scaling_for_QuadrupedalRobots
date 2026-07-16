/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint.h"

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
  double t1147;
  double t3640;
  double t4108;
  double t3939;
  double t4446;
  double t2326;
  double t4083;
  double t4571;
  double t4634;
  double t4651;
  double t4995;
  double t5029;
  double t5085;
  double t1882;
  double t3113;
  double t3205;
  double t4856;
  double t4889;
  double t4930;
  double t4951;
  double t5334;
  double t5336;
  double t5337;
  double t5342;
  double t5344;
  double t5345;
  t1147 = Cos(var1[3]);
  t3640 = Cos(var1[5]);
  t4108 = Sin(var1[3]);
  t3939 = Sin(var1[4]);
  t4446 = Sin(var1[5]);
  t2326 = Sin(var1[12]);
  t4083 = t1147*t3640*t3939;
  t4571 = t4108*t4446;
  t4634 = t4083 + t4571;
  t4651 = Cos(var1[12]);
  t4995 = -1.*t3640*t4108;
  t5029 = t1147*t3939*t4446;
  t5085 = t4995 + t5029;
  t1882 = Cos(var1[4]);
  t3113 = 0.047*t2326;
  t3205 = 0. + t3113;
  t4856 = -1.*t4651;
  t4889 = 1. + t4856;
  t4930 = -0.047*t4889;
  t4951 = 0. + t4930;
  t5334 = t3640*t4108*t3939;
  t5336 = -1.*t1147*t4446;
  t5337 = t5334 + t5336;
  t5342 = t1147*t3640;
  t5344 = t4108*t3939*t4446;
  t5345 = t5342 + t5344;

  p_output1(0)=0. - 0.183*t1147*t1882 + t3205*t4634 + t4951*t5085 - 0.047*(t2326*t4634 + t4651*t5085) + var1(0);
  p_output1(1)=0. - 0.183*t1882*t4108 + t3205*t5337 + t4951*t5345 - 0.047*(t2326*t5337 + t4651*t5345) + var1(1);
  p_output1(2)=0. + t1882*t3205*t3640 + 0.183*t3939 - 0.047*(t1882*t2326*t3640 + t1882*t4446*t4651) + t1882*t4446*t4951 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



