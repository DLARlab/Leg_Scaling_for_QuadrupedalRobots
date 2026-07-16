/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:31 GMT-05:00
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
  double t2650;
  double t4602;
  double t5116;
  double t4923;
  double t5118;
  double t3787;
  double t5115;
  double t5269;
  double t5271;
  double t5331;
  double t5548;
  double t5626;
  double t5628;
  double t3347;
  double t3816;
  double t4510;
  double t5344;
  double t5368;
  double t5442;
  double t5465;
  double t5895;
  double t5908;
  double t5961;
  double t6060;
  double t6068;
  double t6069;
  t2650 = Cos(var1[3]);
  t4602 = Cos(var1[5]);
  t5116 = Sin(var1[3]);
  t4923 = Sin(var1[4]);
  t5118 = Sin(var1[5]);
  t3787 = Sin(var1[15]);
  t5115 = t2650*t4602*t4923;
  t5269 = t5116*t5118;
  t5271 = t5115 + t5269;
  t5331 = Cos(var1[15]);
  t5548 = -1.*t4602*t5116;
  t5626 = t2650*t4923*t5118;
  t5628 = t5548 + t5626;
  t3347 = Cos(var1[4]);
  t3816 = -0.047*t3787;
  t4510 = 0. + t3816;
  t5344 = -1.*t5331;
  t5368 = 1. + t5344;
  t5442 = 0.047*t5368;
  t5465 = 0. + t5442;
  t5895 = t4602*t5116*t4923;
  t5908 = -1.*t2650*t5118;
  t5961 = t5895 + t5908;
  t6060 = t2650*t4602;
  t6068 = t5116*t4923*t5118;
  t6069 = t6060 + t6068;

  p_output1(0)=0. - 0.183*t2650*t3347 + t4510*t5271 + t5465*t5628 + 0.047*(t3787*t5271 + t5331*t5628) + var1(0);
  p_output1(1)=0. - 0.183*t3347*t5116 + t4510*t5961 + t5465*t6069 + 0.047*(t3787*t5961 + t5331*t6069) + var1(1);
  p_output1(2)=0. + t3347*t4510*t4602 + 0.183*t4923 + 0.047*(t3347*t3787*t4602 + t3347*t5118*t5331) + t3347*t5118*t5465 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



