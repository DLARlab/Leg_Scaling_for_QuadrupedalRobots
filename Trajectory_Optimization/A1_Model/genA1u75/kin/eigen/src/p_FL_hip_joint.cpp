/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:45 GMT-05:00
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
  double t335;
  double t1571;
  double t1612;
  double t1573;
  double t1622;
  double t1468;
  double t1607;
  double t1623;
  double t1624;
  double t1817;
  double t2047;
  double t2053;
  double t2077;
  double t1347;
  double t1557;
  double t1558;
  double t1891;
  double t1892;
  double t1896;
  double t1924;
  double t3230;
  double t3246;
  double t3247;
  double t3263;
  double t3264;
  double t3265;
  t335 = Cos(var1[3]);
  t1571 = Cos(var1[5]);
  t1612 = Sin(var1[3]);
  t1573 = Sin(var1[4]);
  t1622 = Sin(var1[5]);
  t1468 = Sin(var1[9]);
  t1607 = t335*t1571*t1573;
  t1623 = t1612*t1622;
  t1624 = t1607 + t1623;
  t1817 = Cos(var1[9]);
  t2047 = -1.*t1571*t1612;
  t2053 = t335*t1573*t1622;
  t2077 = t2047 + t2053;
  t1347 = Cos(var1[4]);
  t1557 = -0.047*t1468;
  t1558 = 0. + t1557;
  t1891 = -1.*t1817;
  t1892 = 1. + t1891;
  t1896 = 0.047*t1892;
  t1924 = 0. + t1896;
  t3230 = t1571*t1612*t1573;
  t3246 = -1.*t335*t1622;
  t3247 = t3230 + t3246;
  t3263 = t335*t1571;
  t3264 = t1612*t1573*t1622;
  t3265 = t3263 + t3264;

  p_output1(0)=0. + t1558*t1624 + t1924*t2077 + 0.047*(t1468*t1624 + t1817*t2077) + 0.183*t1347*t335 + var1(0);
  p_output1(1)=0. + 0.183*t1347*t1612 + t1558*t3247 + t1924*t3265 + 0.047*(t1468*t3247 + t1817*t3265) + var1(1);
  p_output1(2)=0. + t1347*t1558*t1571 - 0.183*t1573 + 0.047*(t1347*t1468*t1571 + t1347*t1622*t1817) + t1347*t1622*t1924 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



