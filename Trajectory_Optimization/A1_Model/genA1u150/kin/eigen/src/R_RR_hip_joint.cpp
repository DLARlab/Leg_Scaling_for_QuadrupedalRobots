/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint.h"

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
  double t1237;
  double t919;
  double t4945;
  double t2595;
  double t5520;
  double t5587;
  double t5382;
  double t5650;
  double t5575;
  double t5589;
  double t5590;
  double t5680;
  double t5720;
  double t5811;
  double t6267;
  double t6312;
  double t6380;
  double t6427;
  double t6538;
  double t6560;
  t1237 = Cos(var1[4]);
  t919 = Cos(var1[3]);
  t4945 = Sin(var1[4]);
  t2595 = Sin(var1[3]);
  t5520 = Cos(var1[5]);
  t5587 = Sin(var1[5]);
  t5382 = Sin(var1[12]);
  t5650 = Cos(var1[12]);
  t5575 = t919*t5520*t4945;
  t5589 = t2595*t5587;
  t5590 = t5575 + t5589;
  t5680 = -1.*t5520*t2595;
  t5720 = t919*t4945*t5587;
  t5811 = t5680 + t5720;
  t6267 = t5520*t2595*t4945;
  t6312 = -1.*t919*t5587;
  t6380 = t6267 + t6312;
  t6427 = t919*t5520;
  t6538 = t2595*t4945*t5587;
  t6560 = t6427 + t6538;

  p_output1(0)=t1237*t919;
  p_output1(1)=t1237*t2595;
  p_output1(2)=-1.*t4945;
  p_output1(3)=t5382*t5590 + t5650*t5811;
  p_output1(4)=t5382*t6380 + t5650*t6560;
  p_output1(5)=t1237*t5382*t5520 + t1237*t5587*t5650;
  p_output1(6)=t5590*t5650 - 1.*t5382*t5811;
  p_output1(7)=t5650*t6380 - 1.*t5382*t6560;
  p_output1(8)=-1.*t1237*t5382*t5587 + t1237*t5520*t5650;
}


       
Eigen::Matrix<double,3,3> R_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



