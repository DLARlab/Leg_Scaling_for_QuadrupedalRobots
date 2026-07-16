/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:42 GMT-05:00
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
  double t549;
  double t2904;
  double t4268;
  double t3410;
  double t4907;
  double t1458;
  double t4171;
  double t5032;
  double t5075;
  double t5500;
  double t5787;
  double t5789;
  double t5792;
  double t744;
  double t1693;
  double t1815;
  double t5736;
  double t5742;
  double t5745;
  double t5770;
  double t6141;
  double t6222;
  double t6245;
  double t6297;
  double t6309;
  double t6312;
  t549 = Cos(var1[3]);
  t2904 = Cos(var1[5]);
  t4268 = Sin(var1[3]);
  t3410 = Sin(var1[4]);
  t4907 = Sin(var1[5]);
  t1458 = Sin(var1[12]);
  t4171 = t549*t2904*t3410;
  t5032 = t4268*t4907;
  t5075 = t4171 + t5032;
  t5500 = Cos(var1[12]);
  t5787 = -1.*t2904*t4268;
  t5789 = t549*t3410*t4907;
  t5792 = t5787 + t5789;
  t744 = Cos(var1[4]);
  t1693 = 0.047*t1458;
  t1815 = 0. + t1693;
  t5736 = -1.*t5500;
  t5742 = 1. + t5736;
  t5745 = -0.047*t5742;
  t5770 = 0. + t5745;
  t6141 = t2904*t4268*t3410;
  t6222 = -1.*t549*t4907;
  t6245 = t6141 + t6222;
  t6297 = t549*t2904;
  t6309 = t4268*t3410*t4907;
  t6312 = t6297 + t6309;

  p_output1(0)=0. + t1815*t5075 + t5770*t5792 - 0.047*(t1458*t5075 + t5500*t5792) - 0.183*t549*t744 + var1(0);
  p_output1(1)=0. + t1815*t6245 + t5770*t6312 - 0.047*(t1458*t6245 + t5500*t6312) - 0.183*t4268*t744 + var1(1);
  p_output1(2)=0. + 0.183*t3410 + t1815*t2904*t744 + t4907*t5770*t744 - 0.047*(t1458*t2904*t744 + t4907*t5500*t744) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



