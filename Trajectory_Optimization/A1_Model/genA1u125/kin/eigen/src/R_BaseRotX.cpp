/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_BaseRotX.h"

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
  double t3061;
  double t5955;
  double t2824;
  double t6107;
  double t6159;
  double t6215;
  t3061 = Cos(var1[4]);
  t5955 = Sin(var1[3]);
  t2824 = Cos(var1[3]);
  t6107 = Sin(var1[4]);
  t6159 = Cos(var1[5]);
  t6215 = Sin(var1[5]);

  p_output1(0)=t2824*t3061;
  p_output1(1)=t3061*t5955;
  p_output1(2)=-1.*t6107;
  p_output1(3)=-1.*t5955*t6159 + t2824*t6107*t6215;
  p_output1(4)=t2824*t6159 + t5955*t6107*t6215;
  p_output1(5)=t3061*t6215;
  p_output1(6)=t2824*t6107*t6159 + t5955*t6215;
  p_output1(7)=t5955*t6107*t6159 - 1.*t2824*t6215;
  p_output1(8)=t3061*t6159;
}


       
Eigen::Matrix<double,3,3> R_BaseRotX(const Eigen::Matrix<double,18,1> &var1)
//void R_BaseRotX(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



