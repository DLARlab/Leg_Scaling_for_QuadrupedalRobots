/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint.h"

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
  double t226;
  double t1124;
  double t1451;
  double t1418;
  double t1472;
  double t440;
  double t845;
  double t1090;
  double t3081;
  double t3235;
  double t2860;
  double t2951;
  double t3042;
  double t1437;
  double t1496;
  double t1509;
  double t3670;
  double t3771;
  double t3782;
  double t3619;
  double t3649;
  double t3651;
  double t1590;
  double t3174;
  double t3222;
  double t3658;
  double t3874;
  double t3888;
  double t3978;
  double t4036;
  double t4056;
  double t4240;
  double t4257;
  double t4268;
  double t974;
  double t3498;
  double t3516;
  double t4683;
  double t4684;
  double t4686;
  double t4702;
  double t4735;
  double t4741;
  double t4742;
  double t4765;
  double t4874;
  double t4875;
  double t4304;
  double t4364;
  double t4374;
  double t4964;
  double t4965;
  double t3536;
  double t3944;
  double t3945;
  double t4384;
  double t4396;
  double t4410;
  double t3953;
  double t4102;
  double t4142;
  t226 = Cos(var1[3]);
  t1124 = Cos(var1[5]);
  t1451 = Sin(var1[3]);
  t1418 = Sin(var1[4]);
  t1472 = Sin(var1[5]);
  t440 = Cos(var1[4]);
  t845 = Cos(var1[7]);
  t1090 = Cos(var1[6]);
  t3081 = Sin(var1[6]);
  t3235 = Sin(var1[7]);
  t2860 = -1.*t1124*t1451;
  t2951 = t226*t1418*t1472;
  t3042 = t2860 + t2951;
  t1437 = t226*t1124*t1418;
  t1496 = t1451*t1472;
  t1509 = t1437 + t1496;
  t3670 = t226*t1124;
  t3771 = t1451*t1418*t1472;
  t3782 = t3670 + t3771;
  t3619 = t1124*t1451*t1418;
  t3649 = -1.*t226*t1472;
  t3651 = t3619 + t3649;
  t1590 = t1090*t1509;
  t3174 = -1.*t3042*t3081;
  t3222 = t1590 + t3174;
  t3658 = t1090*t3651;
  t3874 = -1.*t3782*t3081;
  t3888 = t3658 + t3874;
  t3978 = t440*t1124*t1090;
  t4036 = -1.*t440*t1472*t3081;
  t4056 = t3978 + t4036;
  t4240 = t1090*t3042;
  t4257 = t1509*t3081;
  t4268 = t4240 + t4257;
  t974 = t226*t440*t845;
  t3498 = -1.*t3222*t3235;
  t3516 = t974 + t3498;
  t4683 = -1.*t845;
  t4684 = 1. + t4683;
  t4686 = 0.183*t4684;
  t4702 = 0. + t4686;
  t4735 = -1.*t1090;
  t4741 = 1. + t4735;
  t4742 = -0.047*t4741;
  t4765 = 0. + t4742;
  t4874 = 0.047*t3081;
  t4875 = 0. + t4874;
  t4304 = t1090*t3782;
  t4364 = t3651*t3081;
  t4374 = t4304 + t4364;
  t4964 = 0.183*t3235;
  t4965 = 0. + t4964;
  t3536 = t440*t845*t1451;
  t3944 = -1.*t3888*t3235;
  t3945 = t3536 + t3944;
  t4384 = t440*t1090*t1472;
  t4396 = t440*t1124*t3081;
  t4410 = t4384 + t4396;
  t3953 = -1.*t845*t1418;
  t4102 = -1.*t4056*t3235;
  t4142 = t3953 + t4102;

  p_output1(0)=t3516;
  p_output1(1)=t3945;
  p_output1(2)=t4142;
  p_output1(3)=0.;
  p_output1(4)=t4268;
  p_output1(5)=t4374;
  p_output1(6)=t4410;
  p_output1(7)=0.;
  p_output1(8)=t226*t3235*t440 + t3222*t845;
  p_output1(9)=t1451*t3235*t440 + t3888*t845;
  p_output1(10)=-1.*t1418*t3235 + t4056*t845;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3516 - 0.15331*t4268 + t226*t440*t4702 + t3042*t4765 + t1509*t4875 + t3222*t4965 + var1(0);
  p_output1(13)=0. + 0.183*t3945 - 0.15331*t4374 + t1451*t440*t4702 + t3782*t4765 + t3651*t4875 + t3888*t4965 + var1(1);
  p_output1(14)=0. + 0.183*t4142 - 0.15331*t4410 - 1.*t1418*t4702 + t1472*t440*t4765 + t1124*t440*t4875 + t4056*t4965 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



