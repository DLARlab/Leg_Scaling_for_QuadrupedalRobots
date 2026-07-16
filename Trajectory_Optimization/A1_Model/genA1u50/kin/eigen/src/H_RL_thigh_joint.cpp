/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint.h"

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
  double t992;
  double t1842;
  double t2100;
  double t1853;
  double t2191;
  double t498;
  double t1545;
  double t1684;
  double t1803;
  double t3134;
  double t1902;
  double t2751;
  double t2756;
  double t3293;
  double t3390;
  double t3469;
  double t3955;
  double t4011;
  double t4016;
  double t4185;
  double t4240;
  double t4248;
  double t2770;
  double t3498;
  double t3651;
  double t4039;
  double t4250;
  double t4254;
  double t4377;
  double t4384;
  double t4425;
  double t4519;
  double t4538;
  double t4556;
  double t1665;
  double t3747;
  double t3916;
  double t4617;
  double t4619;
  double t4680;
  double t4727;
  double t4936;
  double t4957;
  double t5145;
  double t5354;
  double t5359;
  double t5503;
  double t4559;
  double t4560;
  double t4569;
  double t5638;
  double t5725;
  double t3927;
  double t4258;
  double t4259;
  double t4576;
  double t4587;
  double t4592;
  double t4262;
  double t4465;
  double t4493;
  t992 = Cos(var1[3]);
  t1842 = Cos(var1[5]);
  t2100 = Sin(var1[3]);
  t1853 = Sin(var1[4]);
  t2191 = Sin(var1[5]);
  t498 = Cos(var1[16]);
  t1545 = Cos(var1[4]);
  t1684 = Sin(var1[16]);
  t1803 = Cos(var1[15]);
  t3134 = Sin(var1[15]);
  t1902 = t992*t1842*t1853;
  t2751 = t2100*t2191;
  t2756 = t1902 + t2751;
  t3293 = -1.*t1842*t2100;
  t3390 = t992*t1853*t2191;
  t3469 = t3293 + t3390;
  t3955 = t1842*t2100*t1853;
  t4011 = -1.*t992*t2191;
  t4016 = t3955 + t4011;
  t4185 = t992*t1842;
  t4240 = t2100*t1853*t2191;
  t4248 = t4185 + t4240;
  t2770 = t1803*t2756;
  t3498 = -1.*t3134*t3469;
  t3651 = t2770 + t3498;
  t4039 = t1803*t4016;
  t4250 = -1.*t3134*t4248;
  t4254 = t4039 + t4250;
  t4377 = t1803*t1545*t1842;
  t4384 = -1.*t1545*t3134*t2191;
  t4425 = t4377 + t4384;
  t4519 = t3134*t2756;
  t4538 = t1803*t3469;
  t4556 = t4519 + t4538;
  t1665 = t498*t992*t1545;
  t3747 = -1.*t1684*t3651;
  t3916 = t1665 + t3747;
  t4617 = -1.*t498;
  t4619 = 1. + t4617;
  t4680 = -0.183*t4619;
  t4727 = 0. + t4680;
  t4936 = -0.047*t3134;
  t4957 = 0. + t4936;
  t5145 = -1.*t1803;
  t5354 = 1. + t5145;
  t5359 = 0.047*t5354;
  t5503 = 0. + t5359;
  t4559 = t3134*t4016;
  t4560 = t1803*t4248;
  t4569 = t4559 + t4560;
  t5638 = -0.183*t1684;
  t5725 = 0. + t5638;
  t3927 = t498*t1545*t2100;
  t4258 = -1.*t1684*t4254;
  t4259 = t3927 + t4258;
  t4576 = t1545*t1842*t3134;
  t4587 = t1803*t1545*t2191;
  t4592 = t4576 + t4587;
  t4262 = -1.*t498*t1853;
  t4465 = -1.*t1684*t4425;
  t4493 = t4262 + t4465;

  p_output1(0)=t3916;
  p_output1(1)=t4259;
  p_output1(2)=t4493;
  p_output1(3)=0.;
  p_output1(4)=t4556;
  p_output1(5)=t4569;
  p_output1(6)=t4592;
  p_output1(7)=0.;
  p_output1(8)=t3651*t498 + t1545*t1684*t992;
  p_output1(9)=t1545*t1684*t2100 + t4254*t498;
  p_output1(10)=-1.*t1684*t1853 + t4425*t498;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3916 + 0.08953*t4556 + t2756*t4957 + t3469*t5503 + t3651*t5725 + t1545*t4727*t992 + var1(0);
  p_output1(13)=0. - 0.183*t4259 + 0.08953*t4569 + t1545*t2100*t4727 + t4016*t4957 + t4248*t5503 + t4254*t5725 + var1(1);
  p_output1(14)=0. - 0.183*t4493 + 0.08953*t4592 - 1.*t1853*t4727 + t1545*t1842*t4957 + t1545*t2191*t5503 + t4425*t5725 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



