/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:37 GMT-05:00
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
  double t950;
  double t1735;
  double t2916;
  double t2037;
  double t2973;
  double t560;
  double t1170;
  double t1629;
  double t1694;
  double t3635;
  double t2881;
  double t3160;
  double t3244;
  double t3678;
  double t3769;
  double t3789;
  double t4870;
  double t4986;
  double t5297;
  double t5430;
  double t5457;
  double t5466;
  double t3414;
  double t4169;
  double t4249;
  double t5384;
  double t5468;
  double t5482;
  double t5501;
  double t5513;
  double t5525;
  double t5621;
  double t5630;
  double t5632;
  double t1309;
  double t4316;
  double t4530;
  double t5820;
  double t5821;
  double t5824;
  double t5846;
  double t5849;
  double t5850;
  double t5853;
  double t5860;
  double t5863;
  double t5864;
  double t5633;
  double t5703;
  double t5711;
  double t5880;
  double t5893;
  double t4647;
  double t5489;
  double t5491;
  double t5712;
  double t5753;
  double t5773;
  double t5494;
  double t5597;
  double t5602;
  t950 = Cos(var1[3]);
  t1735 = Cos(var1[5]);
  t2916 = Sin(var1[3]);
  t2037 = Sin(var1[4]);
  t2973 = Sin(var1[5]);
  t560 = Cos(var1[16]);
  t1170 = Cos(var1[4]);
  t1629 = Sin(var1[16]);
  t1694 = Cos(var1[15]);
  t3635 = Sin(var1[15]);
  t2881 = t950*t1735*t2037;
  t3160 = t2916*t2973;
  t3244 = t2881 + t3160;
  t3678 = -1.*t1735*t2916;
  t3769 = t950*t2037*t2973;
  t3789 = t3678 + t3769;
  t4870 = t1735*t2916*t2037;
  t4986 = -1.*t950*t2973;
  t5297 = t4870 + t4986;
  t5430 = t950*t1735;
  t5457 = t2916*t2037*t2973;
  t5466 = t5430 + t5457;
  t3414 = t1694*t3244;
  t4169 = -1.*t3635*t3789;
  t4249 = t3414 + t4169;
  t5384 = t1694*t5297;
  t5468 = -1.*t3635*t5466;
  t5482 = t5384 + t5468;
  t5501 = t1694*t1170*t1735;
  t5513 = -1.*t1170*t3635*t2973;
  t5525 = t5501 + t5513;
  t5621 = t3635*t3244;
  t5630 = t1694*t3789;
  t5632 = t5621 + t5630;
  t1309 = t560*t950*t1170;
  t4316 = -1.*t1629*t4249;
  t4530 = t1309 + t4316;
  t5820 = -1.*t560;
  t5821 = 1. + t5820;
  t5824 = -0.183*t5821;
  t5846 = 0. + t5824;
  t5849 = -0.047*t3635;
  t5850 = 0. + t5849;
  t5853 = -1.*t1694;
  t5860 = 1. + t5853;
  t5863 = 0.047*t5860;
  t5864 = 0. + t5863;
  t5633 = t3635*t5297;
  t5703 = t1694*t5466;
  t5711 = t5633 + t5703;
  t5880 = -0.183*t1629;
  t5893 = 0. + t5880;
  t4647 = t560*t1170*t2916;
  t5489 = -1.*t1629*t5482;
  t5491 = t4647 + t5489;
  t5712 = t1170*t1735*t3635;
  t5753 = t1694*t1170*t2973;
  t5773 = t5712 + t5753;
  t5494 = -1.*t560*t2037;
  t5597 = -1.*t1629*t5525;
  t5602 = t5494 + t5597;

  p_output1(0)=t4530;
  p_output1(1)=t5491;
  p_output1(2)=t5602;
  p_output1(3)=0.;
  p_output1(4)=t5632;
  p_output1(5)=t5711;
  p_output1(6)=t5773;
  p_output1(7)=0.;
  p_output1(8)=t4249*t560 + t1170*t1629*t950;
  p_output1(9)=t1170*t1629*t2916 + t5482*t560;
  p_output1(10)=-1.*t1629*t2037 + t5525*t560;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t4530 + 0.13205*t5632 + t3244*t5850 + t3789*t5864 + t4249*t5893 + t1170*t5846*t950 + var1(0);
  p_output1(13)=0. - 0.183*t5491 + 0.13205*t5711 + t1170*t2916*t5846 + t5297*t5850 + t5466*t5864 + t5482*t5893 + var1(1);
  p_output1(14)=0. - 0.183*t5602 + 0.13205*t5773 - 1.*t2037*t5846 + t1170*t1735*t5850 + t1170*t2973*t5864 + t5525*t5893 + var1(2);
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



