/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint.h"

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
  double t1772;
  double t3459;
  double t4058;
  double t3749;
  double t4497;
  double t2572;
  double t3877;
  double t4621;
  double t5751;
  double t6194;
  double t6410;
  double t6444;
  double t6445;
  double t317;
  double t1956;
  double t6534;
  double t6587;
  double t6610;
  double t6621;
  double t836;
  double t923;
  double t1188;
  double t1414;
  double t3002;
  double t3060;
  double t6219;
  double t6285;
  double t6342;
  double t6369;
  double t6813;
  double t6819;
  double t6830;
  double t6839;
  double t6842;
  double t6924;
  double t6562;
  double t6584;
  double t6972;
  double t6985;
  double t6990;
  double t7226;
  double t7228;
  double t7240;
  t1772 = Cos(var1[3]);
  t3459 = Cos(var1[5]);
  t4058 = Sin(var1[3]);
  t3749 = Sin(var1[4]);
  t4497 = Sin(var1[5]);
  t2572 = Sin(var1[15]);
  t3877 = t1772*t3459*t3749;
  t4621 = t4058*t4497;
  t5751 = t3877 + t4621;
  t6194 = Cos(var1[15]);
  t6410 = -1.*t3459*t4058;
  t6444 = t1772*t3749*t4497;
  t6445 = t6410 + t6444;
  t317 = Cos(var1[16]);
  t1956 = Cos(var1[4]);
  t6534 = Sin(var1[16]);
  t6587 = t6194*t5751;
  t6610 = -1.*t2572*t6445;
  t6621 = t6587 + t6610;
  t836 = -1.*t317;
  t923 = 1. + t836;
  t1188 = -0.183*t923;
  t1414 = 0. + t1188;
  t3002 = -0.047*t2572;
  t3060 = 0. + t3002;
  t6219 = -1.*t6194;
  t6285 = 1. + t6219;
  t6342 = 0.047*t6285;
  t6369 = 0. + t6342;
  t6813 = t3459*t4058*t3749;
  t6819 = -1.*t1772*t4497;
  t6830 = t6813 + t6819;
  t6839 = t1772*t3459;
  t6842 = t4058*t3749*t4497;
  t6924 = t6839 + t6842;
  t6562 = -0.183*t6534;
  t6584 = 0. + t6562;
  t6972 = t6194*t6830;
  t6985 = -1.*t2572*t6924;
  t6990 = t6972 + t6985;
  t7226 = t6194*t1956*t3459;
  t7228 = -1.*t1956*t2572*t4497;
  t7240 = t7226 + t7228;

  p_output1(0)=0. + t1414*t1772*t1956 + t3060*t5751 + t6369*t6445 + 0.17458*(t2572*t5751 + t6194*t6445) + t6584*t6621 - 0.183*(t1772*t1956*t317 - 1.*t6534*t6621) + var1(0);
  p_output1(1)=0. + t1414*t1956*t4058 + t3060*t6830 + t6369*t6924 + 0.17458*(t2572*t6830 + t6194*t6924) + t6584*t6990 - 0.183*(t1956*t317*t4058 - 1.*t6534*t6990) + var1(1);
  p_output1(2)=0. + t1956*t3060*t3459 - 1.*t1414*t3749 + 0.17458*(t1956*t2572*t3459 + t1956*t4497*t6194) + t1956*t4497*t6369 + t6584*t7240 - 0.183*(-1.*t317*t3749 - 1.*t6534*t7240) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



