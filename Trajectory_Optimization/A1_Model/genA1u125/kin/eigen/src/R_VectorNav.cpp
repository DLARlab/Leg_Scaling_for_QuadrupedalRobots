/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:49 GMT-05:00
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
  double t1895;
  double t2525;
  double t967;
  double t3455;
  double t3997;
  double t4275;
  t1895 = Cos(var1[4]);
  t2525 = Sin(var1[3]);
  t967 = Cos(var1[3]);
  t3455 = Sin(var1[4]);
  t3997 = Cos(var1[5]);
  t4275 = Sin(var1[5]);

  p_output1(0)=t1895*t967;
  p_output1(1)=t1895*t2525;
  p_output1(2)=-1.*t3455;
  p_output1(3)=-1.*t2525*t3997 + t3455*t4275*t967;
  p_output1(4)=t2525*t3455*t4275 + t3997*t967;
  p_output1(5)=t1895*t4275;
  p_output1(6)=t2525*t4275 + t3455*t3997*t967;
  p_output1(7)=t2525*t3455*t3997 - 1.*t4275*t967;
  p_output1(8)=t1895*t3997;
}


       
Eigen::Matrix<double,3,3> R_VectorNav(const Eigen::Matrix<double,18,1> &var1)
//void R_VectorNav(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



