/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:53 GMT-05:00
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
  double t140;
  double t138;
  double t2801;
  double t2532;
  double t4078;
  double t4548;
  double t3624;
  double t4776;
  double t4468;
  double t4549;
  double t4553;
  double t4909;
  double t4913;
  double t5039;
  double t5235;
  double t5256;
  double t5329;
  double t5459;
  double t5481;
  double t5549;
  t140 = Cos(var1[4]);
  t138 = Cos(var1[3]);
  t2801 = Sin(var1[4]);
  t2532 = Sin(var1[3]);
  t4078 = Cos(var1[5]);
  t4548 = Sin(var1[5]);
  t3624 = Sin(var1[15]);
  t4776 = Cos(var1[15]);
  t4468 = t138*t4078*t2801;
  t4549 = t2532*t4548;
  t4553 = t4468 + t4549;
  t4909 = -1.*t4078*t2532;
  t4913 = t138*t2801*t4548;
  t5039 = t4909 + t4913;
  t5235 = t4078*t2532*t2801;
  t5256 = -1.*t138*t4548;
  t5329 = t5235 + t5256;
  t5459 = t138*t4078;
  t5481 = t2532*t2801*t4548;
  t5549 = t5459 + t5481;

  p_output1(0)=t138*t140;
  p_output1(1)=t140*t2532;
  p_output1(2)=-1.*t2801;
  p_output1(3)=t3624*t4553 + t4776*t5039;
  p_output1(4)=t3624*t5329 + t4776*t5549;
  p_output1(5)=t140*t3624*t4078 + t140*t4548*t4776;
  p_output1(6)=t4553*t4776 - 1.*t3624*t5039;
  p_output1(7)=t4776*t5329 - 1.*t3624*t5549;
  p_output1(8)=-1.*t140*t3624*t4548 + t140*t4078*t4776;
}


       
Eigen::Matrix<double,3,3> R_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



