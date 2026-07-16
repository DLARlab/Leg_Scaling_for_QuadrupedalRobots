/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:46 GMT-05:00
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
  double t1496;
  double t958;
  double t3360;
  double t1693;
  double t4794;
  double t5143;
  double t3957;
  double t5360;
  double t5139;
  double t5337;
  double t5346;
  double t5362;
  double t5364;
  double t5366;
  double t5369;
  double t5371;
  double t5372;
  double t5379;
  double t5380;
  double t5381;
  t1496 = Cos(var1[4]);
  t958 = Cos(var1[3]);
  t3360 = Sin(var1[4]);
  t1693 = Sin(var1[3]);
  t4794 = Cos(var1[5]);
  t5143 = Sin(var1[5]);
  t3957 = Sin(var1[12]);
  t5360 = Cos(var1[12]);
  t5139 = t958*t4794*t3360;
  t5337 = t1693*t5143;
  t5346 = t5139 + t5337;
  t5362 = -1.*t4794*t1693;
  t5364 = t958*t3360*t5143;
  t5366 = t5362 + t5364;
  t5369 = t4794*t1693*t3360;
  t5371 = -1.*t958*t5143;
  t5372 = t5369 + t5371;
  t5379 = t958*t4794;
  t5380 = t1693*t3360*t5143;
  t5381 = t5379 + t5380;

  p_output1(0)=t1496*t958;
  p_output1(1)=t1496*t1693;
  p_output1(2)=-1.*t3360;
  p_output1(3)=t3957*t5346 + t5360*t5366;
  p_output1(4)=t3957*t5372 + t5360*t5381;
  p_output1(5)=t1496*t3957*t4794 + t1496*t5143*t5360;
  p_output1(6)=t5346*t5360 - 1.*t3957*t5366;
  p_output1(7)=t5360*t5372 - 1.*t3957*t5381;
  p_output1(8)=-1.*t1496*t3957*t5143 + t1496*t4794*t5360;
}


       
Eigen::Matrix<double,3,3> R_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



