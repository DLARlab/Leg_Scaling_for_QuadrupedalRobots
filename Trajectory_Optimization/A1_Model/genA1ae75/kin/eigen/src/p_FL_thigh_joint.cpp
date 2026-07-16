/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint.h"

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
  double t3376;
  double t4803;
  double t4873;
  double t4840;
  double t4929;
  double t4588;
  double t4843;
  double t5010;
  double t5052;
  double t5097;
  double t5140;
  double t5144;
  double t5169;
  double t829;
  double t3551;
  double t5293;
  double t5355;
  double t5356;
  double t5363;
  double t1266;
  double t1753;
  double t2900;
  double t3113;
  double t4704;
  double t4705;
  double t5104;
  double t5106;
  double t5113;
  double t5120;
  double t5598;
  double t5621;
  double t5631;
  double t5808;
  double t5877;
  double t5950;
  double t5327;
  double t5342;
  double t6103;
  double t6116;
  double t6118;
  double t6290;
  double t6335;
  double t6337;
  t3376 = Cos(var1[3]);
  t4803 = Cos(var1[5]);
  t4873 = Sin(var1[3]);
  t4840 = Sin(var1[4]);
  t4929 = Sin(var1[5]);
  t4588 = Sin(var1[9]);
  t4843 = t3376*t4803*t4840;
  t5010 = t4873*t4929;
  t5052 = t4843 + t5010;
  t5097 = Cos(var1[9]);
  t5140 = -1.*t4803*t4873;
  t5144 = t3376*t4840*t4929;
  t5169 = t5140 + t5144;
  t829 = Cos(var1[10]);
  t3551 = Cos(var1[4]);
  t5293 = Sin(var1[10]);
  t5355 = t5097*t5052;
  t5356 = -1.*t4588*t5169;
  t5363 = t5355 + t5356;
  t1266 = -1.*t829;
  t1753 = 1. + t1266;
  t2900 = 0.183*t1753;
  t3113 = 0. + t2900;
  t4704 = -0.047*t4588;
  t4705 = 0. + t4704;
  t5104 = -1.*t5097;
  t5106 = 1. + t5104;
  t5113 = 0.047*t5106;
  t5120 = 0. + t5113;
  t5598 = t4803*t4873*t4840;
  t5621 = -1.*t3376*t4929;
  t5631 = t5598 + t5621;
  t5808 = t3376*t4803;
  t5877 = t4873*t4840*t4929;
  t5950 = t5808 + t5877;
  t5327 = 0.183*t5293;
  t5342 = 0. + t5327;
  t6103 = t5097*t5631;
  t6116 = -1.*t4588*t5950;
  t6118 = t6103 + t6116;
  t6290 = t5097*t3551*t4803;
  t6335 = -1.*t3551*t4588*t4929;
  t6337 = t6290 + t6335;

  p_output1(0)=0. + t3113*t3376*t3551 + t4705*t5052 + t5120*t5169 + 0.13205*(t4588*t5052 + t5097*t5169) + t5342*t5363 + 0.183*(-1.*t5293*t5363 + t3376*t3551*t829) + var1(0);
  p_output1(1)=0. + t3113*t3551*t4873 + t4705*t5631 + t5120*t5950 + 0.13205*(t4588*t5631 + t5097*t5950) + t5342*t6118 + 0.183*(-1.*t5293*t6118 + t3551*t4873*t829) + var1(1);
  p_output1(2)=0. + t3551*t4705*t4803 - 1.*t3113*t4840 + 0.13205*(t3551*t4588*t4803 + t3551*t4929*t5097) + t3551*t4929*t5120 + t5342*t6337 + 0.183*(-1.*t5293*t6337 - 1.*t4840*t829) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



