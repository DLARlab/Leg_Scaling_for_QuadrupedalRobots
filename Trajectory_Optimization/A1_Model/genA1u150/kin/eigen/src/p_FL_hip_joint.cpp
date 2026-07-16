/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:35 GMT-05:00
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
  double t1076;
  double t4370;
  double t4730;
  double t4475;
  double t4794;
  double t2506;
  double t4665;
  double t4795;
  double t5109;
  double t5144;
  double t5296;
  double t5325;
  double t5341;
  double t2183;
  double t2656;
  double t3980;
  double t5159;
  double t5161;
  double t5262;
  double t5281;
  double t5477;
  double t5481;
  double t5485;
  double t5513;
  double t5521;
  double t5524;
  t1076 = Cos(var1[3]);
  t4370 = Cos(var1[5]);
  t4730 = Sin(var1[3]);
  t4475 = Sin(var1[4]);
  t4794 = Sin(var1[5]);
  t2506 = Sin(var1[9]);
  t4665 = t1076*t4370*t4475;
  t4795 = t4730*t4794;
  t5109 = t4665 + t4795;
  t5144 = Cos(var1[9]);
  t5296 = -1.*t4370*t4730;
  t5325 = t1076*t4475*t4794;
  t5341 = t5296 + t5325;
  t2183 = Cos(var1[4]);
  t2656 = -0.047*t2506;
  t3980 = 0. + t2656;
  t5159 = -1.*t5144;
  t5161 = 1. + t5159;
  t5262 = 0.047*t5161;
  t5281 = 0. + t5262;
  t5477 = t4370*t4730*t4475;
  t5481 = -1.*t1076*t4794;
  t5485 = t5477 + t5481;
  t5513 = t1076*t4370;
  t5521 = t4730*t4475*t4794;
  t5524 = t5513 + t5521;

  p_output1(0)=0. + 0.183*t1076*t2183 + t3980*t5109 + t5281*t5341 + 0.047*(t2506*t5109 + t5144*t5341) + var1(0);
  p_output1(1)=0. + 0.183*t2183*t4730 + t3980*t5485 + t5281*t5524 + 0.047*(t2506*t5485 + t5144*t5524) + var1(1);
  p_output1(2)=0. + t2183*t3980*t4370 - 0.183*t4475 + 0.047*(t2183*t2506*t4370 + t2183*t4794*t5144) + t2183*t4794*t5281 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



