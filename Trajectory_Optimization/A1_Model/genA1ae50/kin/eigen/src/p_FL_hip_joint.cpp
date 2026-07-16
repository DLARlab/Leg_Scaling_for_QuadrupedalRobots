/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint.h"

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
  double t865;
  double t1952;
  double t2485;
  double t2059;
  double t2758;
  double t1180;
  double t2433;
  double t4296;
  double t4894;
  double t5082;
  double t5303;
  double t5310;
  double t5317;
  double t1091;
  double t1738;
  double t1880;
  double t5164;
  double t5275;
  double t5281;
  double t5301;
  double t5347;
  double t5367;
  double t5382;
  double t5394;
  double t5410;
  double t5434;
  t865 = Cos(var1[3]);
  t1952 = Cos(var1[5]);
  t2485 = Sin(var1[3]);
  t2059 = Sin(var1[4]);
  t2758 = Sin(var1[5]);
  t1180 = Sin(var1[9]);
  t2433 = t865*t1952*t2059;
  t4296 = t2485*t2758;
  t4894 = t2433 + t4296;
  t5082 = Cos(var1[9]);
  t5303 = -1.*t1952*t2485;
  t5310 = t865*t2059*t2758;
  t5317 = t5303 + t5310;
  t1091 = Cos(var1[4]);
  t1738 = -0.047*t1180;
  t1880 = 0. + t1738;
  t5164 = -1.*t5082;
  t5275 = 1. + t5164;
  t5281 = 0.047*t5275;
  t5301 = 0. + t5281;
  t5347 = t1952*t2485*t2059;
  t5367 = -1.*t865*t2758;
  t5382 = t5347 + t5367;
  t5394 = t865*t1952;
  t5410 = t2485*t2059*t2758;
  t5434 = t5394 + t5410;

  p_output1(0)=0. + t1880*t4894 + t5301*t5317 + 0.047*(t1180*t4894 + t5082*t5317) + 0.183*t1091*t865 + var1(0);
  p_output1(1)=0. + 0.183*t1091*t2485 + t1880*t5382 + t5301*t5434 + 0.047*(t1180*t5382 + t5082*t5434) + var1(1);
  p_output1(2)=0. + t1091*t1880*t1952 - 0.183*t2059 + 0.047*(t1091*t1180*t1952 + t1091*t2758*t5082) + t1091*t2758*t5301 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



