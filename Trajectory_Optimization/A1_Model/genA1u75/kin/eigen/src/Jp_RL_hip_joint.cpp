/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint.h"

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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t851;
  double t3612;
  double t2834;
  double t3021;
  double t4105;
  double t1303;
  double t3471;
  double t4220;
  double t4648;
  double t5518;
  double t6025;
  double t6036;
  double t6037;
  double t70;
  double t2409;
  double t2477;
  double t5519;
  double t5999;
  double t6009;
  double t6022;
  double t6065;
  double t6100;
  double t6137;
  double t6171;
  double t6178;
  double t6182;
  double t6842;
  double t6843;
  double t6849;
  double t7103;
  double t7105;
  double t7110;
  double t6873;
  double t7198;
  double t7636;
  double t7644;
  double t7645;
  double t7376;
  double t7403;
  double t7448;
  double t7467;
  t851 = Sin(var1[3]);
  t3612 = Cos(var1[3]);
  t2834 = Cos(var1[5]);
  t3021 = Sin(var1[4]);
  t4105 = Sin(var1[5]);
  t1303 = Sin(var1[15]);
  t3471 = -1.*t2834*t851*t3021;
  t4220 = t3612*t4105;
  t4648 = t3471 + t4220;
  t5518 = Cos(var1[15]);
  t6025 = -1.*t3612*t2834;
  t6036 = -1.*t851*t3021*t4105;
  t6037 = t6025 + t6036;
  t70 = Cos(var1[4]);
  t2409 = -0.047*t1303;
  t2477 = 0. + t2409;
  t5519 = -1.*t5518;
  t5999 = 1. + t5519;
  t6009 = 0.047*t5999;
  t6022 = 0. + t6009;
  t6065 = t3612*t2834*t3021;
  t6100 = t851*t4105;
  t6137 = t6065 + t6100;
  t6171 = -1.*t2834*t851;
  t6178 = t3612*t3021*t4105;
  t6182 = t6171 + t6178;
  t6842 = t2834*t851;
  t6843 = -1.*t3612*t3021*t4105;
  t6849 = t6842 + t6843;
  t7103 = t2834*t851*t3021;
  t7105 = -1.*t3612*t4105;
  t7110 = t7103 + t7105;
  t6873 = t5518*t6137;
  t7198 = t5518*t7110;
  t7636 = t3612*t2834;
  t7644 = t851*t3021*t4105;
  t7645 = t7636 + t7644;
  t7376 = t5518*t70*t2834;
  t7403 = -1.*t70*t1303*t4105;
  t7448 = t7376 + t7403;
  t7467 = 0.047*t7448;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2477*t4648 + t6022*t6037 + 0.047*(t1303*t4648 + t5518*t6037) + 0.183*t70*t851;
  p_output1(10)=t2477*t6137 + t6022*t6182 + 0.047*(t1303*t6137 + t5518*t6182) - 0.183*t3612*t70;
  p_output1(11)=0;
  p_output1(12)=0.183*t3021*t3612 + t2477*t2834*t3612*t70 + t3612*t4105*t6022*t70 + 0.047*(t1303*t2834*t3612*t70 + t3612*t4105*t5518*t70);
  p_output1(13)=0.183*t3021*t851 + t2477*t2834*t70*t851 + t4105*t6022*t70*t851 + 0.047*(t1303*t2834*t70*t851 + t4105*t5518*t70*t851);
  p_output1(14)=-1.*t2477*t2834*t3021 + 0.047*(-1.*t1303*t2834*t3021 - 1.*t3021*t4105*t5518) - 1.*t3021*t4105*t6022 + 0.183*t70;
  p_output1(15)=t6022*t6137 + t2477*t6849 + 0.047*(t1303*t6849 + t6873);
  p_output1(16)=t2477*t6037 + t6022*t7110 + 0.047*(t1303*t6037 + t7198);
  p_output1(17)=-1.*t2477*t4105*t70 + t2834*t6022*t70 + t7467;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=-0.047*t5518*t6137 + 0.047*t1303*t6182 + 0.047*(-1.*t1303*t6182 + t6873);
  p_output1(46)=-0.047*t5518*t7110 + 0.047*t1303*t7645 + 0.047*(t7198 - 1.*t1303*t7645);
  p_output1(47)=0.047*t1303*t4105*t70 - 0.047*t2834*t5518*t70 + t7467;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



