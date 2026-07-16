/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:19 GMT-05:00
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
  double t1722;
  double t1041;
  double t2109;
  double t1813;
  double t3644;
  double t4239;
  double t2298;
  double t4882;
  double t4207;
  double t4791;
  double t4804;
  double t4932;
  double t5135;
  double t5320;
  double t5618;
  double t5836;
  double t5860;
  double t5984;
  double t5995;
  double t6001;
  double t4836;
  double t5337;
  double t5451;
  double t6233;
  double t6238;
  double t6297;
  double t6301;
  double t6311;
  double t6349;
  double t5964;
  double t6002;
  double t6003;
  double t6020;
  double t6021;
  double t6058;
  t1722 = Cos(var1[4]);
  t1041 = Cos(var1[3]);
  t2109 = Sin(var1[4]);
  t1813 = Sin(var1[3]);
  t3644 = Cos(var1[5]);
  t4239 = Sin(var1[5]);
  t2298 = Sin(var1[9]);
  t4882 = Cos(var1[9]);
  t4207 = t1041*t3644*t2109;
  t4791 = t1813*t4239;
  t4804 = t4207 + t4791;
  t4932 = -1.*t3644*t1813;
  t5135 = t1041*t2109*t4239;
  t5320 = t4932 + t5135;
  t5618 = t3644*t1813*t2109;
  t5836 = -1.*t1041*t4239;
  t5860 = t5618 + t5836;
  t5984 = t1041*t3644;
  t5995 = t1813*t2109*t4239;
  t6001 = t5984 + t5995;
  t4836 = t2298*t4804;
  t5337 = t4882*t5320;
  t5451 = t4836 + t5337;
  t6233 = -0.047*t2298;
  t6238 = 0. + t6233;
  t6297 = -1.*t4882;
  t6301 = 1. + t6297;
  t6311 = 0.047*t6301;
  t6349 = 0. + t6311;
  t5964 = t2298*t5860;
  t6002 = t4882*t6001;
  t6003 = t5964 + t6002;
  t6020 = t1722*t3644*t2298;
  t6021 = t4882*t1722*t4239;
  t6058 = t6020 + t6021;

  p_output1(0)=t1041*t1722;
  p_output1(1)=t1722*t1813;
  p_output1(2)=-1.*t2109;
  p_output1(3)=0.;
  p_output1(4)=t5451;
  p_output1(5)=t6003;
  p_output1(6)=t6058;
  p_output1(7)=0.;
  p_output1(8)=t4804*t4882 - 1.*t2298*t5320;
  p_output1(9)=t4882*t5860 - 1.*t2298*t6001;
  p_output1(10)=-1.*t1722*t2298*t4239 + t1722*t3644*t4882;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t1041*t1722 + 0.047*t5451 + t4804*t6238 + t5320*t6349 + var1(0);
  p_output1(13)=0. + 0.183*t1722*t1813 + 0.047*t6003 + t5860*t6238 + t6001*t6349 + var1(1);
  p_output1(14)=0. - 0.183*t2109 + 0.047*t6058 + t1722*t3644*t6238 + t1722*t4239*t6349 + var1(2);
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



