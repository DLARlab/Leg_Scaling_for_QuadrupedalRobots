/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint.h"

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
  double t455;
  double t3844;
  double t3305;
  double t3410;
  double t5465;
  double t744;
  double t3437;
  double t5475;
  double t5491;
  double t5747;
  double t5891;
  double t5921;
  double t5967;
  double t435;
  double t1086;
  double t1458;
  double t5792;
  double t5820;
  double t5867;
  double t5873;
  double t6380;
  double t6427;
  double t6439;
  double t6527;
  double t6538;
  double t6555;
  double t7461;
  double t7468;
  double t7490;
  double t7636;
  double t7638;
  double t7651;
  double t7516;
  double t7684;
  double t7897;
  double t7918;
  double t7956;
  double t7755;
  double t7760;
  double t7769;
  double t7775;
  t455 = Sin(var1[3]);
  t3844 = Cos(var1[3]);
  t3305 = Cos(var1[5]);
  t3410 = Sin(var1[4]);
  t5465 = Sin(var1[5]);
  t744 = Sin(var1[12]);
  t3437 = -1.*t3305*t455*t3410;
  t5475 = t3844*t5465;
  t5491 = t3437 + t5475;
  t5747 = Cos(var1[12]);
  t5891 = -1.*t3844*t3305;
  t5921 = -1.*t455*t3410*t5465;
  t5967 = t5891 + t5921;
  t435 = Cos(var1[4]);
  t1086 = 0.047*t744;
  t1458 = 0. + t1086;
  t5792 = -1.*t5747;
  t5820 = 1. + t5792;
  t5867 = -0.047*t5820;
  t5873 = 0. + t5867;
  t6380 = t3844*t3305*t3410;
  t6427 = t455*t5465;
  t6439 = t6380 + t6427;
  t6527 = -1.*t3305*t455;
  t6538 = t3844*t3410*t5465;
  t6555 = t6527 + t6538;
  t7461 = t3305*t455;
  t7468 = -1.*t3844*t3410*t5465;
  t7490 = t7461 + t7468;
  t7636 = t3305*t455*t3410;
  t7638 = -1.*t3844*t5465;
  t7651 = t7636 + t7638;
  t7516 = t5747*t6439;
  t7684 = t5747*t7651;
  t7897 = t3844*t3305;
  t7918 = t455*t3410*t5465;
  t7956 = t7897 + t7918;
  t7755 = t5747*t435*t3305;
  t7760 = -1.*t435*t744*t5465;
  t7769 = t7755 + t7760;
  t7775 = -0.047*t7769;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.183*t435*t455 + t1458*t5491 + t5873*t5967 - 0.047*(t5747*t5967 + t5491*t744);
  p_output1(10)=-0.183*t3844*t435 + t1458*t6439 + t5873*t6555 - 0.047*(t5747*t6555 + t6439*t744);
  p_output1(11)=0;
  p_output1(12)=0.183*t3410*t3844 + t1458*t3305*t3844*t435 + t3844*t435*t5465*t5873 - 0.047*(t3844*t435*t5465*t5747 + t3305*t3844*t435*t744);
  p_output1(13)=0.183*t3410*t455 + t1458*t3305*t435*t455 + t435*t455*t5465*t5873 - 0.047*(t435*t455*t5465*t5747 + t3305*t435*t455*t744);
  p_output1(14)=-1.*t1458*t3305*t3410 + 0.183*t435 - 1.*t3410*t5465*t5873 - 0.047*(-1.*t3410*t5465*t5747 - 1.*t3305*t3410*t744);
  p_output1(15)=t5873*t6439 + t1458*t7490 - 0.047*(t744*t7490 + t7516);
  p_output1(16)=t1458*t5967 + t5873*t7651 - 0.047*(t5967*t744 + t7684);
  p_output1(17)=-1.*t1458*t435*t5465 + t3305*t435*t5873 + t7775;
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
  p_output1(36)=0.047*t5747*t6439 - 0.047*t6555*t744 - 0.047*(-1.*t6555*t744 + t7516);
  p_output1(37)=0.047*t5747*t7651 - 0.047*t744*t7956 - 0.047*(t7684 - 1.*t744*t7956);
  p_output1(38)=0.047*t3305*t435*t5747 - 0.047*t435*t5465*t744 + t7775;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



