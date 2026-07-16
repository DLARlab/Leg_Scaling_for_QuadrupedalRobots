/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:06 GMT-05:00
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
  double t3358;
  double t5391;
  double t5915;
  double t5625;
  double t6002;
  double t654;
  double t3363;
  double t3442;
  double t3684;
  double t6049;
  double t5744;
  double t6018;
  double t6020;
  double t6082;
  double t6098;
  double t6115;
  double t6296;
  double t6324;
  double t6405;
  double t6453;
  double t6508;
  double t6551;
  double t6022;
  double t6142;
  double t6146;
  double t6447;
  double t6552;
  double t6562;
  double t6619;
  double t6621;
  double t6692;
  t3358 = Cos(var1[3]);
  t5391 = Cos(var1[5]);
  t5915 = Sin(var1[3]);
  t5625 = Sin(var1[4]);
  t6002 = Sin(var1[5]);
  t654 = Cos(var1[13]);
  t3363 = Cos(var1[4]);
  t3442 = Sin(var1[13]);
  t3684 = Cos(var1[12]);
  t6049 = Sin(var1[12]);
  t5744 = t3358*t5391*t5625;
  t6018 = t5915*t6002;
  t6020 = t5744 + t6018;
  t6082 = -1.*t5391*t5915;
  t6098 = t3358*t5625*t6002;
  t6115 = t6082 + t6098;
  t6296 = t5391*t5915*t5625;
  t6324 = -1.*t3358*t6002;
  t6405 = t6296 + t6324;
  t6453 = t3358*t5391;
  t6508 = t5915*t5625*t6002;
  t6551 = t6453 + t6508;
  t6022 = t3684*t6020;
  t6142 = -1.*t6049*t6115;
  t6146 = t6022 + t6142;
  t6447 = t3684*t6405;
  t6552 = -1.*t6049*t6551;
  t6562 = t6447 + t6552;
  t6619 = t3684*t3363*t5391;
  t6621 = -1.*t3363*t6049*t6002;
  t6692 = t6619 + t6621;

  p_output1(0)=-1.*t3442*t6146 + t3358*t3363*t654;
  p_output1(1)=t3363*t5915*t654 - 1.*t3442*t6562;
  p_output1(2)=-1.*t5625*t654 - 1.*t3442*t6692;
  p_output1(3)=t6020*t6049 + t3684*t6115;
  p_output1(4)=t6049*t6405 + t3684*t6551;
  p_output1(5)=t3363*t3684*t6002 + t3363*t5391*t6049;
  p_output1(6)=t3358*t3363*t3442 + t6146*t654;
  p_output1(7)=t3363*t3442*t5915 + t654*t6562;
  p_output1(8)=-1.*t3442*t5625 + t654*t6692;
}


       
Eigen::Matrix<double,3,3> R_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



