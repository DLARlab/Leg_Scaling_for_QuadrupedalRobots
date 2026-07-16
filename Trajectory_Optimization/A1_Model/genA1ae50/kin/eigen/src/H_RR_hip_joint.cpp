/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:03 GMT-05:00
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
  double t1868;
  double t1297;
  double t3286;
  double t2188;
  double t3964;
  double t4448;
  double t3623;
  double t5284;
  double t4074;
  double t4845;
  double t4872;
  double t5419;
  double t5420;
  double t5436;
  double t5457;
  double t5463;
  double t5524;
  double t5610;
  double t5654;
  double t5679;
  double t5189;
  double t5446;
  double t5450;
  double t6664;
  double t6665;
  double t6667;
  double t6671;
  double t6672;
  double t6679;
  double t5574;
  double t5927;
  double t6427;
  double t6545;
  double t6604;
  double t6614;
  t1868 = Cos(var1[4]);
  t1297 = Cos(var1[3]);
  t3286 = Sin(var1[4]);
  t2188 = Sin(var1[3]);
  t3964 = Cos(var1[5]);
  t4448 = Sin(var1[5]);
  t3623 = Sin(var1[12]);
  t5284 = Cos(var1[12]);
  t4074 = t1297*t3964*t3286;
  t4845 = t2188*t4448;
  t4872 = t4074 + t4845;
  t5419 = -1.*t3964*t2188;
  t5420 = t1297*t3286*t4448;
  t5436 = t5419 + t5420;
  t5457 = t3964*t2188*t3286;
  t5463 = -1.*t1297*t4448;
  t5524 = t5457 + t5463;
  t5610 = t1297*t3964;
  t5654 = t2188*t3286*t4448;
  t5679 = t5610 + t5654;
  t5189 = t3623*t4872;
  t5446 = t5284*t5436;
  t5450 = t5189 + t5446;
  t6664 = 0.047*t3623;
  t6665 = 0. + t6664;
  t6667 = -1.*t5284;
  t6671 = 1. + t6667;
  t6672 = -0.047*t6671;
  t6679 = 0. + t6672;
  t5574 = t3623*t5524;
  t5927 = t5284*t5679;
  t6427 = t5574 + t5927;
  t6545 = t1868*t3964*t3623;
  t6604 = t5284*t1868*t4448;
  t6614 = t6545 + t6604;

  p_output1(0)=t1297*t1868;
  p_output1(1)=t1868*t2188;
  p_output1(2)=-1.*t3286;
  p_output1(3)=0.;
  p_output1(4)=t5450;
  p_output1(5)=t6427;
  p_output1(6)=t6614;
  p_output1(7)=0.;
  p_output1(8)=t4872*t5284 - 1.*t3623*t5436;
  p_output1(9)=t5284*t5524 - 1.*t3623*t5679;
  p_output1(10)=-1.*t1868*t3623*t4448 + t1868*t3964*t5284;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1297*t1868 - 0.047*t5450 + t4872*t6665 + t5436*t6679 + var1(0);
  p_output1(13)=0. - 0.183*t1868*t2188 - 0.047*t6427 + t5524*t6665 + t5679*t6679 + var1(1);
  p_output1(14)=0. + 0.183*t3286 - 0.047*t6614 + t1868*t3964*t6665 + t1868*t4448*t6679 + var1(2);
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



