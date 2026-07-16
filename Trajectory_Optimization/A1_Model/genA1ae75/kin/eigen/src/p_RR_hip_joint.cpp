/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:43 GMT-05:00
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
  double t2449;
  double t5733;
  double t6692;
  double t6299;
  double t6777;
  double t3385;
  double t6666;
  double t7189;
  double t7329;
  double t7823;
  double t8005;
  double t8006;
  double t8013;
  double t3046;
  double t3660;
  double t4054;
  double t7876;
  double t7890;
  double t7921;
  double t7957;
  double t8180;
  double t8182;
  double t8206;
  double t8222;
  double t8227;
  double t8228;
  t2449 = Cos(var1[3]);
  t5733 = Cos(var1[5]);
  t6692 = Sin(var1[3]);
  t6299 = Sin(var1[4]);
  t6777 = Sin(var1[5]);
  t3385 = Sin(var1[12]);
  t6666 = t2449*t5733*t6299;
  t7189 = t6692*t6777;
  t7329 = t6666 + t7189;
  t7823 = Cos(var1[12]);
  t8005 = -1.*t5733*t6692;
  t8006 = t2449*t6299*t6777;
  t8013 = t8005 + t8006;
  t3046 = Cos(var1[4]);
  t3660 = 0.047*t3385;
  t4054 = 0. + t3660;
  t7876 = -1.*t7823;
  t7890 = 1. + t7876;
  t7921 = -0.047*t7890;
  t7957 = 0. + t7921;
  t8180 = t5733*t6692*t6299;
  t8182 = -1.*t2449*t6777;
  t8206 = t8180 + t8182;
  t8222 = t2449*t5733;
  t8227 = t6692*t6299*t6777;
  t8228 = t8222 + t8227;

  p_output1(0)=0. - 0.183*t2449*t3046 + t4054*t7329 + t7957*t8013 - 0.047*(t3385*t7329 + t7823*t8013) + var1(0);
  p_output1(1)=0. - 0.183*t3046*t6692 + t4054*t8206 + t7957*t8228 - 0.047*(t3385*t8206 + t7823*t8228) + var1(1);
  p_output1(2)=0. + t3046*t4054*t5733 + 0.183*t6299 - 0.047*(t3046*t3385*t5733 + t3046*t6777*t7823) + t3046*t6777*t7957 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



