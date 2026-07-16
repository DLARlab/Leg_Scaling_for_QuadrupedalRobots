/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:39 GMT-05:00
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
  double t227;
  double t160;
  double t2531;
  double t1877;
  double t8342;
  double t8373;
  double t4724;
  double t8395;
  double t8368;
  double t8385;
  double t8391;
  double t8396;
  double t8400;
  double t8401;
  double t8405;
  double t8409;
  double t8410;
  double t8412;
  double t8431;
  double t8434;
  t227 = Cos(var1[4]);
  t160 = Cos(var1[3]);
  t2531 = Sin(var1[4]);
  t1877 = Sin(var1[3]);
  t8342 = Cos(var1[5]);
  t8373 = Sin(var1[5]);
  t4724 = Sin(var1[9]);
  t8395 = Cos(var1[9]);
  t8368 = t160*t8342*t2531;
  t8385 = t1877*t8373;
  t8391 = t8368 + t8385;
  t8396 = -1.*t8342*t1877;
  t8400 = t160*t2531*t8373;
  t8401 = t8396 + t8400;
  t8405 = t8342*t1877*t2531;
  t8409 = -1.*t160*t8373;
  t8410 = t8405 + t8409;
  t8412 = t160*t8342;
  t8431 = t1877*t2531*t8373;
  t8434 = t8412 + t8431;

  p_output1(0)=t160*t227;
  p_output1(1)=t1877*t227;
  p_output1(2)=-1.*t2531;
  p_output1(3)=t4724*t8391 + t8395*t8401;
  p_output1(4)=t4724*t8410 + t8395*t8434;
  p_output1(5)=t227*t4724*t8342 + t227*t8373*t8395;
  p_output1(6)=t8391*t8395 - 1.*t4724*t8401;
  p_output1(7)=t8395*t8410 - 1.*t4724*t8434;
  p_output1(8)=-1.*t227*t4724*t8373 + t227*t8342*t8395;
}


       
Eigen::Matrix<double,3,3> R_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



