/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:04 GMT-05:00
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
  double t1945;
  double t452;
  double t4133;
  double t2653;
  double t6545;
  double t6649;
  double t6427;
  double t6663;
  double t6620;
  double t6650;
  double t6658;
  double t6664;
  double t6665;
  double t6666;
  double t6680;
  double t6696;
  double t6697;
  double t6711;
  double t6712;
  double t6714;
  t1945 = Cos(var1[4]);
  t452 = Cos(var1[3]);
  t4133 = Sin(var1[4]);
  t2653 = Sin(var1[3]);
  t6545 = Cos(var1[5]);
  t6649 = Sin(var1[5]);
  t6427 = Sin(var1[12]);
  t6663 = Cos(var1[12]);
  t6620 = t452*t6545*t4133;
  t6650 = t2653*t6649;
  t6658 = t6620 + t6650;
  t6664 = -1.*t6545*t2653;
  t6665 = t452*t4133*t6649;
  t6666 = t6664 + t6665;
  t6680 = t6545*t2653*t4133;
  t6696 = -1.*t452*t6649;
  t6697 = t6680 + t6696;
  t6711 = t452*t6545;
  t6712 = t2653*t4133*t6649;
  t6714 = t6711 + t6712;

  p_output1(0)=t1945*t452;
  p_output1(1)=t1945*t2653;
  p_output1(2)=-1.*t4133;
  p_output1(3)=t6427*t6658 + t6663*t6666;
  p_output1(4)=t6427*t6697 + t6663*t6714;
  p_output1(5)=t1945*t6427*t6545 + t1945*t6649*t6663;
  p_output1(6)=t6658*t6663 - 1.*t6427*t6666;
  p_output1(7)=t6663*t6697 - 1.*t6427*t6714;
  p_output1(8)=-1.*t1945*t6427*t6649 + t1945*t6545*t6663;
}


       
Eigen::Matrix<double,3,3> R_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



