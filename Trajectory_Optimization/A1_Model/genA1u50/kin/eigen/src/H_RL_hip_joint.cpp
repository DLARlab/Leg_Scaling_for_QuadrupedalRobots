/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint.h"

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
  double t1728;
  double t1520;
  double t3116;
  double t2470;
  double t4071;
  double t4235;
  double t3959;
  double t4471;
  double t4078;
  double t4243;
  double t4257;
  double t4498;
  double t4504;
  double t4518;
  double t4633;
  double t4653;
  double t4725;
  double t4738;
  double t4771;
  double t4780;
  double t4468;
  double t4602;
  double t4622;
  double t5256;
  double t5329;
  double t5378;
  double t5420;
  double t5459;
  double t5481;
  double t4726;
  double t4806;
  double t4835;
  double t4907;
  double t4909;
  double t4913;
  t1728 = Cos(var1[4]);
  t1520 = Cos(var1[3]);
  t3116 = Sin(var1[4]);
  t2470 = Sin(var1[3]);
  t4071 = Cos(var1[5]);
  t4235 = Sin(var1[5]);
  t3959 = Sin(var1[15]);
  t4471 = Cos(var1[15]);
  t4078 = t1520*t4071*t3116;
  t4243 = t2470*t4235;
  t4257 = t4078 + t4243;
  t4498 = -1.*t4071*t2470;
  t4504 = t1520*t3116*t4235;
  t4518 = t4498 + t4504;
  t4633 = t4071*t2470*t3116;
  t4653 = -1.*t1520*t4235;
  t4725 = t4633 + t4653;
  t4738 = t1520*t4071;
  t4771 = t2470*t3116*t4235;
  t4780 = t4738 + t4771;
  t4468 = t3959*t4257;
  t4602 = t4471*t4518;
  t4622 = t4468 + t4602;
  t5256 = -0.047*t3959;
  t5329 = 0. + t5256;
  t5378 = -1.*t4471;
  t5420 = 1. + t5378;
  t5459 = 0.047*t5420;
  t5481 = 0. + t5459;
  t4726 = t3959*t4725;
  t4806 = t4471*t4780;
  t4835 = t4726 + t4806;
  t4907 = t1728*t4071*t3959;
  t4909 = t4471*t1728*t4235;
  t4913 = t4907 + t4909;

  p_output1(0)=t1520*t1728;
  p_output1(1)=t1728*t2470;
  p_output1(2)=-1.*t3116;
  p_output1(3)=0.;
  p_output1(4)=t4622;
  p_output1(5)=t4835;
  p_output1(6)=t4913;
  p_output1(7)=0.;
  p_output1(8)=t4257*t4471 - 1.*t3959*t4518;
  p_output1(9)=t4471*t4725 - 1.*t3959*t4780;
  p_output1(10)=-1.*t1728*t3959*t4235 + t1728*t4071*t4471;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1520*t1728 + 0.047*t4622 + t4257*t5329 + t4518*t5481 + var1(0);
  p_output1(13)=0. - 0.183*t1728*t2470 + 0.047*t4835 + t4725*t5329 + t4780*t5481 + var1(1);
  p_output1(14)=0. + 0.183*t3116 + 0.047*t4913 + t1728*t4071*t5329 + t1728*t4235*t5481 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



