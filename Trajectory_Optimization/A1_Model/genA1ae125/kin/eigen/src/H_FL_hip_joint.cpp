/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t851;
  double t464;
  double t3131;
  double t2252;
  double t5137;
  double t5247;
  double t5115;
  double t5982;
  double t5172;
  double t5830;
  double t5970;
  double t5994;
  double t6031;
  double t6045;
  double t6162;
  double t6217;
  double t6233;
  double t6263;
  double t6300;
  double t6307;
  double t5979;
  double t6094;
  double t6128;
  double t6403;
  double t6405;
  double t6427;
  double t6428;
  double t6431;
  double t6432;
  double t6256;
  double t6316;
  double t6320;
  double t6323;
  double t6342;
  double t6345;
  t851 = Cos(var1[4]);
  t464 = Cos(var1[3]);
  t3131 = Sin(var1[4]);
  t2252 = Sin(var1[3]);
  t5137 = Cos(var1[5]);
  t5247 = Sin(var1[5]);
  t5115 = Sin(var1[9]);
  t5982 = Cos(var1[9]);
  t5172 = t464*t5137*t3131;
  t5830 = t2252*t5247;
  t5970 = t5172 + t5830;
  t5994 = -1.*t5137*t2252;
  t6031 = t464*t3131*t5247;
  t6045 = t5994 + t6031;
  t6162 = t5137*t2252*t3131;
  t6217 = -1.*t464*t5247;
  t6233 = t6162 + t6217;
  t6263 = t464*t5137;
  t6300 = t2252*t3131*t5247;
  t6307 = t6263 + t6300;
  t5979 = t5115*t5970;
  t6094 = t5982*t6045;
  t6128 = t5979 + t6094;
  t6403 = -0.047*t5115;
  t6405 = 0. + t6403;
  t6427 = -1.*t5982;
  t6428 = 1. + t6427;
  t6431 = 0.047*t6428;
  t6432 = 0. + t6431;
  t6256 = t5115*t6233;
  t6316 = t5982*t6307;
  t6320 = t6256 + t6316;
  t6323 = t851*t5137*t5115;
  t6342 = t5982*t851*t5247;
  t6345 = t6323 + t6342;

  p_output1(0)=t464*t851;
  p_output1(1)=t2252*t851;
  p_output1(2)=-1.*t3131;
  p_output1(3)=0.;
  p_output1(4)=t6128;
  p_output1(5)=t6320;
  p_output1(6)=t6345;
  p_output1(7)=0.;
  p_output1(8)=t5970*t5982 - 1.*t5115*t6045;
  p_output1(9)=t5982*t6233 - 1.*t5115*t6307;
  p_output1(10)=-1.*t5115*t5247*t851 + t5137*t5982*t851;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t6128 + t5970*t6405 + t6045*t6432 + 0.183*t464*t851 + var1(0);
  p_output1(13)=0. + 0.047*t6320 + t6233*t6405 + t6307*t6432 + 0.183*t2252*t851 + var1(1);
  p_output1(14)=0. - 0.183*t3131 + 0.047*t6345 + t5137*t6405*t851 + t5247*t6432*t851 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



