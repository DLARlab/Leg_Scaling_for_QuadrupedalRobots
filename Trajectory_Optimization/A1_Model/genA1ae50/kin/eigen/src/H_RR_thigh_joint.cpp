/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint.h"

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
  double t269;
  double t1191;
  double t1541;
  double t1299;
  double t1608;
  double t195;
  double t437;
  double t490;
  double t625;
  double t2596;
  double t1350;
  double t1651;
  double t1711;
  double t2695;
  double t2750;
  double t2919;
  double t3173;
  double t3399;
  double t3403;
  double t3684;
  double t3710;
  double t3734;
  double t2410;
  double t2981;
  double t3003;
  double t3442;
  double t3740;
  double t3792;
  double t4545;
  double t4723;
  double t4906;
  double t5391;
  double t5625;
  double t5809;
  double t483;
  double t3041;
  double t3043;
  double t6332;
  double t6390;
  double t6405;
  double t6421;
  double t6508;
  double t6551;
  double t6559;
  double t6583;
  double t6595;
  double t6613;
  double t5836;
  double t5857;
  double t5915;
  double t6718;
  double t6739;
  double t3058;
  double t3912;
  double t3985;
  double t6018;
  double t6020;
  double t6049;
  double t4068;
  double t5235;
  double t5312;
  t269 = Cos(var1[3]);
  t1191 = Cos(var1[5]);
  t1541 = Sin(var1[3]);
  t1299 = Sin(var1[4]);
  t1608 = Sin(var1[5]);
  t195 = Cos(var1[13]);
  t437 = Cos(var1[4]);
  t490 = Sin(var1[13]);
  t625 = Cos(var1[12]);
  t2596 = Sin(var1[12]);
  t1350 = t269*t1191*t1299;
  t1651 = t1541*t1608;
  t1711 = t1350 + t1651;
  t2695 = -1.*t1191*t1541;
  t2750 = t269*t1299*t1608;
  t2919 = t2695 + t2750;
  t3173 = t1191*t1541*t1299;
  t3399 = -1.*t269*t1608;
  t3403 = t3173 + t3399;
  t3684 = t269*t1191;
  t3710 = t1541*t1299*t1608;
  t3734 = t3684 + t3710;
  t2410 = t625*t1711;
  t2981 = -1.*t2596*t2919;
  t3003 = t2410 + t2981;
  t3442 = t625*t3403;
  t3740 = -1.*t2596*t3734;
  t3792 = t3442 + t3740;
  t4545 = t625*t437*t1191;
  t4723 = -1.*t437*t2596*t1608;
  t4906 = t4545 + t4723;
  t5391 = t2596*t1711;
  t5625 = t625*t2919;
  t5809 = t5391 + t5625;
  t483 = t195*t269*t437;
  t3041 = -1.*t490*t3003;
  t3043 = t483 + t3041;
  t6332 = -1.*t195;
  t6390 = 1. + t6332;
  t6405 = -0.183*t6390;
  t6421 = 0. + t6405;
  t6508 = 0.047*t2596;
  t6551 = 0. + t6508;
  t6559 = -1.*t625;
  t6583 = 1. + t6559;
  t6595 = -0.047*t6583;
  t6613 = 0. + t6595;
  t5836 = t2596*t3403;
  t5857 = t625*t3734;
  t5915 = t5836 + t5857;
  t6718 = -0.183*t490;
  t6739 = 0. + t6718;
  t3058 = t195*t437*t1541;
  t3912 = -1.*t490*t3792;
  t3985 = t3058 + t3912;
  t6018 = t437*t1191*t2596;
  t6020 = t625*t437*t1608;
  t6049 = t6018 + t6020;
  t4068 = -1.*t195*t1299;
  t5235 = -1.*t490*t4906;
  t5312 = t4068 + t5235;

  p_output1(0)=t3043;
  p_output1(1)=t3985;
  p_output1(2)=t5312;
  p_output1(3)=0.;
  p_output1(4)=t5809;
  p_output1(5)=t5915;
  p_output1(6)=t6049;
  p_output1(7)=0.;
  p_output1(8)=t195*t3003 + t269*t437*t490;
  p_output1(9)=t195*t3792 + t1541*t437*t490;
  p_output1(10)=-1.*t1299*t490 + t195*t4906;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3043 - 0.13205*t5809 + t269*t437*t6421 + t1711*t6551 + t2919*t6613 + t3003*t6739 + var1(0);
  p_output1(13)=0. - 0.183*t3985 - 0.13205*t5915 + t1541*t437*t6421 + t3403*t6551 + t3734*t6613 + t3792*t6739 + var1(1);
  p_output1(14)=0. - 0.183*t5312 - 0.13205*t6049 - 1.*t1299*t6421 + t1191*t437*t6551 + t1608*t437*t6613 + t4906*t6739 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



