/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t518;
  double t1642;
  double t2041;
  double t1691;
  double t2096;
  double t649;
  double t1969;
  double t2167;
  double t2177;
  double t2212;
  double t2694;
  double t2695;
  double t2698;
  double t590;
  double t3255;
  double t330;
  double t3653;
  double t3670;
  double t3675;
  double t3711;
  double t3800;
  double t3830;
  double t3889;
  double t4355;
  double t4407;
  double t4448;
  double t4526;
  double t4529;
  double t4553;
  double t363;
  double t380;
  double t400;
  double t421;
  double t707;
  double t1371;
  double t2224;
  double t2493;
  double t2511;
  double t2669;
  double t4731;
  double t4741;
  double t4750;
  double t4762;
  double t4763;
  double t4766;
  double t3277;
  double t3330;
  double t3855;
  double t3937;
  double t4120;
  double t4922;
  double t4923;
  double t4946;
  double t4468;
  double t4499;
  double t4523;
  double t5006;
  double t5012;
  double t5036;
  double t5102;
  double t5146;
  double t5175;
  double t5862;
  double t5900;
  double t5903;
  double t5943;
  double t5962;
  double t5966;
  double t5993;
  double t6018;
  double t6019;
  t518 = Cos(var1[3]);
  t1642 = Cos(var1[5]);
  t2041 = Sin(var1[3]);
  t1691 = Sin(var1[4]);
  t2096 = Sin(var1[5]);
  t649 = Sin(var1[9]);
  t1969 = t518*t1642*t1691;
  t2167 = t2041*t2096;
  t2177 = t1969 + t2167;
  t2212 = Cos(var1[9]);
  t2694 = -1.*t1642*t2041;
  t2695 = t518*t1691*t2096;
  t2698 = t2694 + t2695;
  t590 = Cos(var1[4]);
  t3255 = Sin(var1[10]);
  t330 = Cos(var1[10]);
  t3653 = t2212*t2177;
  t3670 = -1.*t649*t2698;
  t3675 = t3653 + t3670;
  t3711 = Cos(var1[11]);
  t3800 = -1.*t3711;
  t3830 = 1. + t3800;
  t3889 = Sin(var1[11]);
  t4355 = t518*t590*t3255;
  t4407 = t330*t3675;
  t4448 = t4355 + t4407;
  t4526 = t330*t518*t590;
  t4529 = -1.*t3255*t3675;
  t4553 = t4526 + t4529;
  t363 = -1.*t330;
  t380 = 1. + t363;
  t400 = 0.183*t380;
  t421 = 0. + t400;
  t707 = -0.047*t649;
  t1371 = 0. + t707;
  t2224 = -1.*t2212;
  t2493 = 1. + t2224;
  t2511 = 0.047*t2493;
  t2669 = 0. + t2511;
  t4731 = t1642*t2041*t1691;
  t4741 = -1.*t518*t2096;
  t4750 = t4731 + t4741;
  t4762 = t518*t1642;
  t4763 = t2041*t1691*t2096;
  t4766 = t4762 + t4763;
  t3277 = 0.183*t3255;
  t3330 = 0. + t3277;
  t3855 = -0.15*t3830;
  t3937 = 0.183*t3889;
  t4120 = 0. + t3855 + t3937;
  t4922 = t2212*t4750;
  t4923 = -1.*t649*t4766;
  t4946 = t4922 + t4923;
  t4468 = 0.183*t3830;
  t4499 = 0.15*t3889;
  t4523 = 0. + t4468 + t4499;
  t5006 = t590*t3255*t2041;
  t5012 = t330*t4946;
  t5036 = t5006 + t5012;
  t5102 = t330*t590*t2041;
  t5146 = -1.*t3255*t4946;
  t5175 = t5102 + t5146;
  t5862 = t2212*t590*t1642;
  t5900 = -1.*t590*t649*t2096;
  t5903 = t5862 + t5900;
  t5943 = -1.*t3255*t1691;
  t5962 = t330*t5903;
  t5966 = t5943 + t5962;
  t5993 = -1.*t330*t1691;
  t6018 = -1.*t3255*t5903;
  t6019 = t5993 + t6018;

  p_output1(0)=0. + t1371*t2177 + t2669*t2698 + t3330*t3675 + t4120*t4448 + t4523*t4553 + 0.183*(-1.*t3889*t4448 + t3711*t4553) - 0.3*(t3711*t4448 + t3889*t4553) + t421*t518*t590 + 0.13205*(t2212*t2698 + t2177*t649) + var1(0);
  p_output1(1)=0. + t1371*t4750 + t2669*t4766 + t3330*t4946 + t4120*t5036 + t4523*t5175 + 0.183*(-1.*t3889*t5036 + t3711*t5175) - 0.3*(t3711*t5036 + t3889*t5175) + t2041*t421*t590 + 0.13205*(t2212*t4766 + t4750*t649) + var1(1);
  p_output1(2)=0. - 1.*t1691*t421 + t1371*t1642*t590 + t2096*t2669*t590 + t3330*t5903 + t4120*t5966 + t4523*t6019 + 0.183*(-1.*t3889*t5966 + t3711*t6019) - 0.3*(t3711*t5966 + t3889*t6019) + 0.13205*(t2096*t2212*t590 + t1642*t590*t649) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



