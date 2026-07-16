/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav.h"

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
  double t730;
  double t5402;
  double t696;
  double t5682;
  double t5783;
  double t5821;
  t730 = Cos(var1[4]);
  t5402 = Sin(var1[3]);
  t696 = Cos(var1[3]);
  t5682 = Sin(var1[4]);
  t5783 = Cos(var1[5]);
  t5821 = Sin(var1[5]);

  p_output1(0)=t696*t730;
  p_output1(1)=t5402*t730;
  p_output1(2)=-1.*t5682;
  p_output1(3)=-1.*t5402*t5783 + t5682*t5821*t696;
  p_output1(4)=t5402*t5682*t5821 + t5783*t696;
  p_output1(5)=t5821*t730;
  p_output1(6)=t5402*t5821 + t5682*t5783*t696;
  p_output1(7)=t5402*t5682*t5783 - 1.*t5821*t696;
  p_output1(8)=t5783*t730;
}


       
Eigen::Matrix<double,3,3> R_VectorNav(const Eigen::Matrix<double,18,1> &var1)
//void R_VectorNav(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



