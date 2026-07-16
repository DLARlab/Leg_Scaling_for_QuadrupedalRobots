/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint.h"

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
  double t301;
  double t186;
  double t1097;
  double t644;
  double t1894;
  double t2159;
  double t1803;
  double t2461;
  double t1897;
  double t2282;
  double t2419;
  double t2502;
  double t2572;
  double t2591;
  double t2825;
  double t2886;
  double t2891;
  double t2964;
  double t2969;
  double t2970;
  double t2428;
  double t2689;
  double t2707;
  double t4157;
  double t4531;
  double t4738;
  double t4816;
  double t5082;
  double t5153;
  double t2913;
  double t2972;
  double t2982;
  double t3009;
  double t3073;
  double t3136;
  t301 = Cos(var1[4]);
  t186 = Cos(var1[3]);
  t1097 = Sin(var1[4]);
  t644 = Sin(var1[3]);
  t1894 = Cos(var1[5]);
  t2159 = Sin(var1[5]);
  t1803 = Sin(var1[12]);
  t2461 = Cos(var1[12]);
  t1897 = t186*t1894*t1097;
  t2282 = t644*t2159;
  t2419 = t1897 + t2282;
  t2502 = -1.*t1894*t644;
  t2572 = t186*t1097*t2159;
  t2591 = t2502 + t2572;
  t2825 = t1894*t644*t1097;
  t2886 = -1.*t186*t2159;
  t2891 = t2825 + t2886;
  t2964 = t186*t1894;
  t2969 = t644*t1097*t2159;
  t2970 = t2964 + t2969;
  t2428 = t1803*t2419;
  t2689 = t2461*t2591;
  t2707 = t2428 + t2689;
  t4157 = 0.047*t1803;
  t4531 = 0. + t4157;
  t4738 = -1.*t2461;
  t4816 = 1. + t4738;
  t5082 = -0.047*t4816;
  t5153 = 0. + t5082;
  t2913 = t1803*t2891;
  t2972 = t2461*t2970;
  t2982 = t2913 + t2972;
  t3009 = t301*t1894*t1803;
  t3073 = t2461*t301*t2159;
  t3136 = t3009 + t3073;

  p_output1(0)=t186*t301;
  p_output1(1)=t301*t644;
  p_output1(2)=-1.*t1097;
  p_output1(3)=0.;
  p_output1(4)=t2707;
  p_output1(5)=t2982;
  p_output1(6)=t3136;
  p_output1(7)=0.;
  p_output1(8)=t2419*t2461 - 1.*t1803*t2591;
  p_output1(9)=t2461*t2891 - 1.*t1803*t2970;
  p_output1(10)=-1.*t1803*t2159*t301 + t1894*t2461*t301;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t2707 - 0.183*t186*t301 + t2419*t4531 + t2591*t5153 + var1(0);
  p_output1(13)=0. - 0.047*t2982 + t2891*t4531 + t2970*t5153 - 0.183*t301*t644 + var1(1);
  p_output1(14)=0. + 0.183*t1097 - 0.047*t3136 + t1894*t301*t4531 + t2159*t301*t5153 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



