/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_hip_joint.h"

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
  double t1134;
  double t796;
  double t5583;
  double t4179;
  double t5631;
  double t5670;
  double t5614;
  double t5689;
  double t5663;
  double t5676;
  double t5684;
  double t5695;
  double t5701;
  double t5702;
  double t5712;
  double t5713;
  double t5716;
  double t5720;
  double t5723;
  double t5724;
  t1134 = Cos(var1[4]);
  t796 = Cos(var1[3]);
  t5583 = Sin(var1[4]);
  t4179 = Sin(var1[3]);
  t5631 = Cos(var1[5]);
  t5670 = Sin(var1[5]);
  t5614 = Sin(var1[9]);
  t5689 = Cos(var1[9]);
  t5663 = t796*t5631*t5583;
  t5676 = t4179*t5670;
  t5684 = t5663 + t5676;
  t5695 = -1.*t5631*t4179;
  t5701 = t796*t5583*t5670;
  t5702 = t5695 + t5701;
  t5712 = t5631*t4179*t5583;
  t5713 = -1.*t796*t5670;
  t5716 = t5712 + t5713;
  t5720 = t796*t5631;
  t5723 = t4179*t5583*t5670;
  t5724 = t5720 + t5723;

  p_output1(0)=t1134*t796;
  p_output1(1)=t1134*t4179;
  p_output1(2)=-1.*t5583;
  p_output1(3)=t5614*t5684 + t5689*t5702;
  p_output1(4)=t5614*t5716 + t5689*t5724;
  p_output1(5)=t1134*t5614*t5631 + t1134*t5670*t5689;
  p_output1(6)=t5684*t5689 - 1.*t5614*t5702;
  p_output1(7)=t5689*t5716 - 1.*t5614*t5724;
  p_output1(8)=-1.*t1134*t5614*t5670 + t1134*t5631*t5689;
}


       
Eigen::Matrix<double,3,3> R_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



