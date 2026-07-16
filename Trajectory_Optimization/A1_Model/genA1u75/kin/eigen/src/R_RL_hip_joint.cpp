/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:01 GMT-05:00
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
  double t3331;
  double t2509;
  double t4525;
  double t4392;
  double t6135;
  double t6189;
  double t6038;
  double t6278;
  double t6137;
  double t6222;
  double t6224;
  double t6305;
  double t6313;
  double t6317;
  double t6331;
  double t6332;
  double t6396;
  double t6458;
  double t6536;
  double t6556;
  t3331 = Cos(var1[4]);
  t2509 = Cos(var1[3]);
  t4525 = Sin(var1[4]);
  t4392 = Sin(var1[3]);
  t6135 = Cos(var1[5]);
  t6189 = Sin(var1[5]);
  t6038 = Sin(var1[15]);
  t6278 = Cos(var1[15]);
  t6137 = t2509*t6135*t4525;
  t6222 = t4392*t6189;
  t6224 = t6137 + t6222;
  t6305 = -1.*t6135*t4392;
  t6313 = t2509*t4525*t6189;
  t6317 = t6305 + t6313;
  t6331 = t6135*t4392*t4525;
  t6332 = -1.*t2509*t6189;
  t6396 = t6331 + t6332;
  t6458 = t2509*t6135;
  t6536 = t4392*t4525*t6189;
  t6556 = t6458 + t6536;

  p_output1(0)=t2509*t3331;
  p_output1(1)=t3331*t4392;
  p_output1(2)=-1.*t4525;
  p_output1(3)=t6038*t6224 + t6278*t6317;
  p_output1(4)=t6038*t6396 + t6278*t6556;
  p_output1(5)=t3331*t6038*t6135 + t3331*t6189*t6278;
  p_output1(6)=t6224*t6278 - 1.*t6038*t6317;
  p_output1(7)=t6278*t6396 - 1.*t6038*t6556;
  p_output1(8)=-1.*t3331*t6038*t6189 + t3331*t6135*t6278;
}


       
Eigen::Matrix<double,3,3> R_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



