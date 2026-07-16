/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint.h"

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
  double t2976;
  double t6355;
  double t6439;
  double t6397;
  double t6475;
  double t6110;
  double t6400;
  double t6481;
  double t6486;
  double t6499;
  double t6510;
  double t6519;
  double t6526;
  double t3137;
  double t6286;
  double t6325;
  double t6337;
  double t6339;
  double t6540;
  double t6542;
  double t6611;
  double t6616;
  double t6625;
  double t6642;
  double t6692;
  double t6708;
  t2976 = Cos(var1[3]);
  t6355 = Cos(var1[5]);
  t6439 = Sin(var1[4]);
  t6397 = Sin(var1[3]);
  t6475 = Sin(var1[5]);
  t6110 = Cos(var1[6]);
  t6400 = -1.*t6355*t6397;
  t6481 = t2976*t6439*t6475;
  t6486 = t6400 + t6481;
  t6499 = t2976*t6355*t6439;
  t6510 = t6397*t6475;
  t6519 = t6499 + t6510;
  t6526 = Sin(var1[6]);
  t3137 = Cos(var1[4]);
  t6286 = -1.*t6110;
  t6325 = 1. + t6286;
  t6337 = -0.047*t6325;
  t6339 = 0. + t6337;
  t6540 = 0.047*t6526;
  t6542 = 0. + t6540;
  t6611 = t2976*t6355;
  t6616 = t6397*t6439*t6475;
  t6625 = t6611 + t6616;
  t6642 = t6355*t6397*t6439;
  t6692 = -1.*t2976*t6475;
  t6708 = t6642 + t6692;

  p_output1(0)=0. + 0.183*t2976*t3137 + t6339*t6486 - 0.047*(t6110*t6486 + t6519*t6526) + t6519*t6542 + var1(0);
  p_output1(1)=0. + 0.183*t3137*t6397 + t6339*t6625 + t6542*t6708 - 0.047*(t6110*t6625 + t6526*t6708) + var1(1);
  p_output1(2)=0. - 0.183*t6439 + t3137*t6339*t6475 - 0.047*(t3137*t6110*t6475 + t3137*t6355*t6526) + t3137*t6355*t6542 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



