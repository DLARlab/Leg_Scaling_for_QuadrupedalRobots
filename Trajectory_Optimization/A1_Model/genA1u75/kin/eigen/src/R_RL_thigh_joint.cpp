/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_thigh_joint.h"

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
  double t241;
  double t3057;
  double t5462;
  double t5222;
  double t5467;
  double t206;
  double t500;
  double t1535;
  double t2138;
  double t5621;
  double t5266;
  double t5468;
  double t5616;
  double t6231;
  double t6233;
  double t6645;
  double t7302;
  double t7316;
  double t7432;
  double t7544;
  double t7571;
  double t7586;
  double t5618;
  double t6800;
  double t6897;
  double t7518;
  double t7604;
  double t7636;
  double t7679;
  double t7680;
  double t7681;
  t241 = Cos(var1[3]);
  t3057 = Cos(var1[5]);
  t5462 = Sin(var1[3]);
  t5222 = Sin(var1[4]);
  t5467 = Sin(var1[5]);
  t206 = Cos(var1[16]);
  t500 = Cos(var1[4]);
  t1535 = Sin(var1[16]);
  t2138 = Cos(var1[15]);
  t5621 = Sin(var1[15]);
  t5266 = t241*t3057*t5222;
  t5468 = t5462*t5467;
  t5616 = t5266 + t5468;
  t6231 = -1.*t3057*t5462;
  t6233 = t241*t5222*t5467;
  t6645 = t6231 + t6233;
  t7302 = t3057*t5462*t5222;
  t7316 = -1.*t241*t5467;
  t7432 = t7302 + t7316;
  t7544 = t241*t3057;
  t7571 = t5462*t5222*t5467;
  t7586 = t7544 + t7571;
  t5618 = t2138*t5616;
  t6800 = -1.*t5621*t6645;
  t6897 = t5618 + t6800;
  t7518 = t2138*t7432;
  t7604 = -1.*t5621*t7586;
  t7636 = t7518 + t7604;
  t7679 = t2138*t500*t3057;
  t7680 = -1.*t500*t5621*t5467;
  t7681 = t7679 + t7680;

  p_output1(0)=t206*t241*t500 - 1.*t1535*t6897;
  p_output1(1)=t206*t500*t5462 - 1.*t1535*t7636;
  p_output1(2)=-1.*t206*t5222 - 1.*t1535*t7681;
  p_output1(3)=t5616*t5621 + t2138*t6645;
  p_output1(4)=t5621*t7432 + t2138*t7586;
  p_output1(5)=t2138*t500*t5467 + t3057*t500*t5621;
  p_output1(6)=t1535*t241*t500 + t206*t6897;
  p_output1(7)=t1535*t500*t5462 + t206*t7636;
  p_output1(8)=-1.*t1535*t5222 + t206*t7681;
}


       
Eigen::Matrix<double,3,3> R_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



