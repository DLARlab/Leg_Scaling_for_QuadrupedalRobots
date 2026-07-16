/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:26 GMT-05:00
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
  double t831;
  double t388;
  double t1248;
  double t957;
  double t1597;
  double t2108;
  double t1307;
  double t2706;
  double t2008;
  double t2167;
  double t2458;
  double t3278;
  double t3569;
  double t3598;
  double t3829;
  double t3834;
  double t3836;
  double t3838;
  double t3840;
  double t3842;
  double t2518;
  double t3821;
  double t3822;
  double t4003;
  double t4006;
  double t4008;
  double t4010;
  double t4036;
  double t4049;
  double t3837;
  double t3866;
  double t3925;
  double t3929;
  double t3943;
  double t3948;
  t831 = Cos(var1[4]);
  t388 = Cos(var1[3]);
  t1248 = Sin(var1[4]);
  t957 = Sin(var1[3]);
  t1597 = Cos(var1[5]);
  t2108 = Sin(var1[5]);
  t1307 = Sin(var1[12]);
  t2706 = Cos(var1[12]);
  t2008 = t388*t1597*t1248;
  t2167 = t957*t2108;
  t2458 = t2008 + t2167;
  t3278 = -1.*t1597*t957;
  t3569 = t388*t1248*t2108;
  t3598 = t3278 + t3569;
  t3829 = t1597*t957*t1248;
  t3834 = -1.*t388*t2108;
  t3836 = t3829 + t3834;
  t3838 = t388*t1597;
  t3840 = t957*t1248*t2108;
  t3842 = t3838 + t3840;
  t2518 = t1307*t2458;
  t3821 = t2706*t3598;
  t3822 = t2518 + t3821;
  t4003 = 0.047*t1307;
  t4006 = 0. + t4003;
  t4008 = -1.*t2706;
  t4010 = 1. + t4008;
  t4036 = -0.047*t4010;
  t4049 = 0. + t4036;
  t3837 = t1307*t3836;
  t3866 = t2706*t3842;
  t3925 = t3837 + t3866;
  t3929 = t831*t1597*t1307;
  t3943 = t2706*t831*t2108;
  t3948 = t3929 + t3943;

  p_output1(0)=t388*t831;
  p_output1(1)=t831*t957;
  p_output1(2)=-1.*t1248;
  p_output1(3)=0.;
  p_output1(4)=t3822;
  p_output1(5)=t3925;
  p_output1(6)=t3948;
  p_output1(7)=0.;
  p_output1(8)=t2458*t2706 - 1.*t1307*t3598;
  p_output1(9)=t2706*t3836 - 1.*t1307*t3842;
  p_output1(10)=-1.*t1307*t2108*t831 + t1597*t2706*t831;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t3822 + t2458*t4006 + t3598*t4049 - 0.183*t388*t831 + var1(0);
  p_output1(13)=0. - 0.047*t3925 + t3836*t4006 + t3842*t4049 - 0.183*t831*t957 + var1(1);
  p_output1(14)=0. + 0.183*t1248 - 0.047*t3948 + t1597*t4006*t831 + t2108*t4049*t831 + var1(2);
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



