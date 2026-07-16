/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:44 GMT-05:00
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
  double t704;
  double t650;
  double t856;
  double t824;
  double t4859;
  double t7714;
  double t4189;
  double t8388;
  double t4890;
  double t8006;
  double t8227;
  double t8496;
  double t8596;
  double t8608;
  double t8739;
  double t8746;
  double t8806;
  double t8830;
  double t8831;
  double t8857;
  double t8310;
  double t8622;
  double t8731;
  double t9064;
  double t9065;
  double t9080;
  double t9087;
  double t9090;
  double t9094;
  double t8809;
  double t8871;
  double t8894;
  double t8911;
  double t8953;
  double t8960;
  t704 = Cos(var1[4]);
  t650 = Cos(var1[3]);
  t856 = Sin(var1[4]);
  t824 = Sin(var1[3]);
  t4859 = Cos(var1[5]);
  t7714 = Sin(var1[5]);
  t4189 = Sin(var1[12]);
  t8388 = Cos(var1[12]);
  t4890 = t650*t4859*t856;
  t8006 = t824*t7714;
  t8227 = t4890 + t8006;
  t8496 = -1.*t4859*t824;
  t8596 = t650*t856*t7714;
  t8608 = t8496 + t8596;
  t8739 = t4859*t824*t856;
  t8746 = -1.*t650*t7714;
  t8806 = t8739 + t8746;
  t8830 = t650*t4859;
  t8831 = t824*t856*t7714;
  t8857 = t8830 + t8831;
  t8310 = t4189*t8227;
  t8622 = t8388*t8608;
  t8731 = t8310 + t8622;
  t9064 = 0.047*t4189;
  t9065 = 0. + t9064;
  t9080 = -1.*t8388;
  t9087 = 1. + t9080;
  t9090 = -0.047*t9087;
  t9094 = 0. + t9090;
  t8809 = t4189*t8806;
  t8871 = t8388*t8857;
  t8894 = t8809 + t8871;
  t8911 = t704*t4859*t4189;
  t8953 = t8388*t704*t7714;
  t8960 = t8911 + t8953;

  p_output1(0)=t650*t704;
  p_output1(1)=t704*t824;
  p_output1(2)=-1.*t856;
  p_output1(3)=0.;
  p_output1(4)=t8731;
  p_output1(5)=t8894;
  p_output1(6)=t8960;
  p_output1(7)=0.;
  p_output1(8)=t8227*t8388 - 1.*t4189*t8608;
  p_output1(9)=t8388*t8806 - 1.*t4189*t8857;
  p_output1(10)=-1.*t4189*t704*t7714 + t4859*t704*t8388;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t650*t704 - 0.047*t8731 + t8227*t9065 + t8608*t9094 + var1(0);
  p_output1(13)=0. - 0.183*t704*t824 - 0.047*t8894 + t8806*t9065 + t8857*t9094 + var1(1);
  p_output1(14)=0. + 0.183*t856 - 0.047*t8960 + t4859*t704*t9065 + t704*t7714*t9094 + var1(2);
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



