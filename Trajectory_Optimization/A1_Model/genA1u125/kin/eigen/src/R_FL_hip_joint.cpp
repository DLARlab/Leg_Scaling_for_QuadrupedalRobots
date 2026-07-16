/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:19 GMT-05:00
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
  double t1883;
  double t1111;
  double t4836;
  double t3152;
  double t5666;
  double t6020;
  double t5274;
  double t6162;
  double t5964;
  double t6021;
  double t6087;
  double t6165;
  double t6171;
  double t6177;
  double t6288;
  double t6311;
  double t6349;
  double t6415;
  double t6420;
  double t6436;
  t1883 = Cos(var1[4]);
  t1111 = Cos(var1[3]);
  t4836 = Sin(var1[4]);
  t3152 = Sin(var1[3]);
  t5666 = Cos(var1[5]);
  t6020 = Sin(var1[5]);
  t5274 = Sin(var1[9]);
  t6162 = Cos(var1[9]);
  t5964 = t1111*t5666*t4836;
  t6021 = t3152*t6020;
  t6087 = t5964 + t6021;
  t6165 = -1.*t5666*t3152;
  t6171 = t1111*t4836*t6020;
  t6177 = t6165 + t6171;
  t6288 = t5666*t3152*t4836;
  t6311 = -1.*t1111*t6020;
  t6349 = t6288 + t6311;
  t6415 = t1111*t5666;
  t6420 = t3152*t4836*t6020;
  t6436 = t6415 + t6420;

  p_output1(0)=t1111*t1883;
  p_output1(1)=t1883*t3152;
  p_output1(2)=-1.*t4836;
  p_output1(3)=t5274*t6087 + t6162*t6177;
  p_output1(4)=t5274*t6349 + t6162*t6436;
  p_output1(5)=t1883*t5274*t5666 + t1883*t6020*t6162;
  p_output1(6)=t6087*t6162 - 1.*t5274*t6177;
  p_output1(7)=t6162*t6349 - 1.*t5274*t6436;
  p_output1(8)=-1.*t1883*t5274*t6020 + t1883*t5666*t6162;
}


       
Eigen::Matrix<double,3,3> R_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



