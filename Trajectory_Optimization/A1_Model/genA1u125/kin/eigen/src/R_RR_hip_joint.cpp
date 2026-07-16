/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:26 GMT-05:00
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
  double t1295;
  double t1217;
  double t5637;
  double t2373;
  double t5864;
  double t6032;
  double t5684;
  double t6126;
  double t5903;
  double t6097;
  double t6106;
  double t6156;
  double t6160;
  double t6209;
  double t6307;
  double t6312;
  double t6321;
  double t6413;
  double t6432;
  double t6455;
  t1295 = Cos(var1[4]);
  t1217 = Cos(var1[3]);
  t5637 = Sin(var1[4]);
  t2373 = Sin(var1[3]);
  t5864 = Cos(var1[5]);
  t6032 = Sin(var1[5]);
  t5684 = Sin(var1[12]);
  t6126 = Cos(var1[12]);
  t5903 = t1217*t5864*t5637;
  t6097 = t2373*t6032;
  t6106 = t5903 + t6097;
  t6156 = -1.*t5864*t2373;
  t6160 = t1217*t5637*t6032;
  t6209 = t6156 + t6160;
  t6307 = t5864*t2373*t5637;
  t6312 = -1.*t1217*t6032;
  t6321 = t6307 + t6312;
  t6413 = t1217*t5864;
  t6432 = t2373*t5637*t6032;
  t6455 = t6413 + t6432;

  p_output1(0)=t1217*t1295;
  p_output1(1)=t1295*t2373;
  p_output1(2)=-1.*t5637;
  p_output1(3)=t5684*t6106 + t6126*t6209;
  p_output1(4)=t5684*t6321 + t6126*t6455;
  p_output1(5)=t1295*t5684*t5864 + t1295*t6032*t6126;
  p_output1(6)=t6106*t6126 - 1.*t5684*t6209;
  p_output1(7)=t6126*t6321 - 1.*t5684*t6455;
  p_output1(8)=-1.*t1295*t5684*t6032 + t1295*t5864*t6126;
}


       
Eigen::Matrix<double,3,3> R_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



