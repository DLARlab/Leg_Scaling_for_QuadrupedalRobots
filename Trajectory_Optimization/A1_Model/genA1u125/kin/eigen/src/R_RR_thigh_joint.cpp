/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint.h"

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
  double t1089;
  double t4160;
  double t4713;
  double t4298;
  double t5179;
  double t783;
  double t1113;
  double t1481;
  double t1494;
  double t5604;
  double t4332;
  double t5333;
  double t5510;
  double t5842;
  double t5957;
  double t6130;
  double t6236;
  double t6265;
  double t6317;
  double t6398;
  double t6405;
  double t6521;
  double t5580;
  double t6137;
  double t6166;
  double t6395;
  double t6543;
  double t6554;
  double t6812;
  double t6845;
  double t6856;
  t1089 = Cos(var1[3]);
  t4160 = Cos(var1[5]);
  t4713 = Sin(var1[3]);
  t4298 = Sin(var1[4]);
  t5179 = Sin(var1[5]);
  t783 = Cos(var1[13]);
  t1113 = Cos(var1[4]);
  t1481 = Sin(var1[13]);
  t1494 = Cos(var1[12]);
  t5604 = Sin(var1[12]);
  t4332 = t1089*t4160*t4298;
  t5333 = t4713*t5179;
  t5510 = t4332 + t5333;
  t5842 = -1.*t4160*t4713;
  t5957 = t1089*t4298*t5179;
  t6130 = t5842 + t5957;
  t6236 = t4160*t4713*t4298;
  t6265 = -1.*t1089*t5179;
  t6317 = t6236 + t6265;
  t6398 = t1089*t4160;
  t6405 = t4713*t4298*t5179;
  t6521 = t6398 + t6405;
  t5580 = t1494*t5510;
  t6137 = -1.*t5604*t6130;
  t6166 = t5580 + t6137;
  t6395 = t1494*t6317;
  t6543 = -1.*t5604*t6521;
  t6554 = t6395 + t6543;
  t6812 = t1494*t1113*t4160;
  t6845 = -1.*t1113*t5604*t5179;
  t6856 = t6812 + t6845;

  p_output1(0)=-1.*t1481*t6166 + t1089*t1113*t783;
  p_output1(1)=-1.*t1481*t6554 + t1113*t4713*t783;
  p_output1(2)=-1.*t1481*t6856 - 1.*t4298*t783;
  p_output1(3)=t5510*t5604 + t1494*t6130;
  p_output1(4)=t5604*t6317 + t1494*t6521;
  p_output1(5)=t1113*t1494*t5179 + t1113*t4160*t5604;
  p_output1(6)=t1089*t1113*t1481 + t6166*t783;
  p_output1(7)=t1113*t1481*t4713 + t6554*t783;
  p_output1(8)=-1.*t1481*t4298 + t6856*t783;
}


       
Eigen::Matrix<double,3,3> R_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



