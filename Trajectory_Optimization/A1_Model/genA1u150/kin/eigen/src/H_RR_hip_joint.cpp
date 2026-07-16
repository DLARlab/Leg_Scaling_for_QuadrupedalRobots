/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:43 GMT-05:00
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
  double t994;
  double t508;
  double t1642;
  double t1220;
  double t3739;
  double t5475;
  double t2583;
  double t6132;
  double t4277;
  double t5811;
  double t5967;
  double t6266;
  double t6267;
  double t6269;
  double t6427;
  double t6439;
  double t6481;
  double t6560;
  double t6609;
  double t6612;
  double t5972;
  double t6312;
  double t6380;
  double t7163;
  double t7204;
  double t7297;
  double t7304;
  double t7312;
  double t7320;
  double t6538;
  double t6622;
  double t6664;
  double t6670;
  double t6688;
  double t6690;
  t994 = Cos(var1[4]);
  t508 = Cos(var1[3]);
  t1642 = Sin(var1[4]);
  t1220 = Sin(var1[3]);
  t3739 = Cos(var1[5]);
  t5475 = Sin(var1[5]);
  t2583 = Sin(var1[12]);
  t6132 = Cos(var1[12]);
  t4277 = t508*t3739*t1642;
  t5811 = t1220*t5475;
  t5967 = t4277 + t5811;
  t6266 = -1.*t3739*t1220;
  t6267 = t508*t1642*t5475;
  t6269 = t6266 + t6267;
  t6427 = t3739*t1220*t1642;
  t6439 = -1.*t508*t5475;
  t6481 = t6427 + t6439;
  t6560 = t508*t3739;
  t6609 = t1220*t1642*t5475;
  t6612 = t6560 + t6609;
  t5972 = t2583*t5967;
  t6312 = t6132*t6269;
  t6380 = t5972 + t6312;
  t7163 = 0.047*t2583;
  t7204 = 0. + t7163;
  t7297 = -1.*t6132;
  t7304 = 1. + t7297;
  t7312 = -0.047*t7304;
  t7320 = 0. + t7312;
  t6538 = t2583*t6481;
  t6622 = t6132*t6612;
  t6664 = t6538 + t6622;
  t6670 = t994*t3739*t2583;
  t6688 = t6132*t994*t5475;
  t6690 = t6670 + t6688;

  p_output1(0)=t508*t994;
  p_output1(1)=t1220*t994;
  p_output1(2)=-1.*t1642;
  p_output1(3)=0.;
  p_output1(4)=t6380;
  p_output1(5)=t6664;
  p_output1(6)=t6690;
  p_output1(7)=0.;
  p_output1(8)=t5967*t6132 - 1.*t2583*t6269;
  p_output1(9)=t6132*t6481 - 1.*t2583*t6612;
  p_output1(10)=-1.*t2583*t5475*t994 + t3739*t6132*t994;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t6380 + t5967*t7204 + t6269*t7320 - 0.183*t508*t994 + var1(0);
  p_output1(13)=0. - 0.047*t6664 + t6481*t7204 + t6612*t7320 - 0.183*t1220*t994 + var1(1);
  p_output1(14)=0. + 0.183*t1642 - 0.047*t6690 + t3739*t7204*t994 + t5475*t7320*t994 + var1(2);
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



