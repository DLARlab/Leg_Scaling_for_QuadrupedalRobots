/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:54 GMT-05:00
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
  double t3096;
  double t5387;
  double t2773;
  double t6178;
  double t6527;
  double t6560;
  t3096 = Cos(var1[4]);
  t5387 = Sin(var1[3]);
  t2773 = Cos(var1[3]);
  t6178 = Sin(var1[4]);
  t6527 = Cos(var1[5]);
  t6560 = Sin(var1[5]);

  p_output1(0)=t2773*t3096;
  p_output1(1)=t3096*t5387;
  p_output1(2)=-1.*t6178;
  p_output1(3)=-1.*t5387*t6527 + t2773*t6178*t6560;
  p_output1(4)=t2773*t6527 + t5387*t6178*t6560;
  p_output1(5)=t3096*t6560;
  p_output1(6)=t2773*t6178*t6527 + t5387*t6560;
  p_output1(7)=t5387*t6178*t6527 - 1.*t2773*t6560;
  p_output1(8)=t3096*t6527;
}


       
Eigen::Matrix<double,3,3> R_VectorNav(const Eigen::Matrix<double,18,1> &var1)
//void R_VectorNav(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



