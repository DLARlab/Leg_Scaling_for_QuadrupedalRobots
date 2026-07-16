/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint.h"

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
  double t1423;
  double t3264;
  double t4039;
  double t3976;
  double t4785;
  double t1128;
  double t1672;
  double t2673;
  double t3172;
  double t5105;
  double t4001;
  double t4841;
  double t4848;
  double t5173;
  double t5290;
  double t5749;
  double t6722;
  double t6775;
  double t6808;
  double t6891;
  double t6942;
  double t6965;
  double t4930;
  double t6429;
  double t6430;
  double t6861;
  double t6976;
  double t7005;
  double t7171;
  double t7173;
  double t7253;
  t1423 = Cos(var1[3]);
  t3264 = Cos(var1[5]);
  t4039 = Sin(var1[3]);
  t3976 = Sin(var1[4]);
  t4785 = Sin(var1[5]);
  t1128 = Cos(var1[10]);
  t1672 = Cos(var1[4]);
  t2673 = Sin(var1[10]);
  t3172 = Cos(var1[9]);
  t5105 = Sin(var1[9]);
  t4001 = t1423*t3264*t3976;
  t4841 = t4039*t4785;
  t4848 = t4001 + t4841;
  t5173 = -1.*t3264*t4039;
  t5290 = t1423*t3976*t4785;
  t5749 = t5173 + t5290;
  t6722 = t3264*t4039*t3976;
  t6775 = -1.*t1423*t4785;
  t6808 = t6722 + t6775;
  t6891 = t1423*t3264;
  t6942 = t4039*t3976*t4785;
  t6965 = t6891 + t6942;
  t4930 = t3172*t4848;
  t6429 = -1.*t5105*t5749;
  t6430 = t4930 + t6429;
  t6861 = t3172*t6808;
  t6976 = -1.*t5105*t6965;
  t7005 = t6861 + t6976;
  t7171 = t3172*t1672*t3264;
  t7173 = -1.*t1672*t5105*t4785;
  t7253 = t7171 + t7173;

  p_output1(0)=t1128*t1423*t1672 - 1.*t2673*t6430;
  p_output1(1)=t1128*t1672*t4039 - 1.*t2673*t7005;
  p_output1(2)=-1.*t1128*t3976 - 1.*t2673*t7253;
  p_output1(3)=t4848*t5105 + t3172*t5749;
  p_output1(4)=t5105*t6808 + t3172*t6965;
  p_output1(5)=t1672*t3172*t4785 + t1672*t3264*t5105;
  p_output1(6)=t1423*t1672*t2673 + t1128*t6430;
  p_output1(7)=t1672*t2673*t4039 + t1128*t7005;
  p_output1(8)=-1.*t2673*t3976 + t1128*t7253;
}


       
Eigen::Matrix<double,3,3> R_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



