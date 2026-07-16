/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint.h"

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
  double t1196;
  double t2990;
  double t3234;
  double t2672;
  double t3603;
  double t2261;
  double t3231;
  double t3617;
  double t4102;
  double t4438;
  double t5095;
  double t5204;
  double t5402;
  double t798;
  double t2276;
  double t2611;
  double t2635;
  double t2641;
  double t5500;
  double t6519;
  double t6659;
  double t6661;
  double t6662;
  double t6673;
  double t6674;
  double t6688;
  double t7058;
  double t7062;
  double t7069;
  double t7157;
  double t7187;
  double t7188;
  double t7074;
  double t7275;
  double t7780;
  double t7783;
  double t7788;
  double t7379;
  double t7397;
  double t7404;
  double t7418;
  t1196 = Sin(var1[3]);
  t2990 = Cos(var1[5]);
  t3234 = Sin(var1[4]);
  t2672 = Cos(var1[3]);
  t3603 = Sin(var1[5]);
  t2261 = Cos(var1[6]);
  t3231 = -1.*t2672*t2990;
  t3617 = -1.*t1196*t3234*t3603;
  t4102 = t3231 + t3617;
  t4438 = -1.*t2990*t1196*t3234;
  t5095 = t2672*t3603;
  t5204 = t4438 + t5095;
  t5402 = Sin(var1[6]);
  t798 = Cos(var1[4]);
  t2276 = -1.*t2261;
  t2611 = 1. + t2276;
  t2635 = -0.047*t2611;
  t2641 = 0. + t2635;
  t5500 = 0.047*t5402;
  t6519 = 0. + t5500;
  t6659 = -1.*t2990*t1196;
  t6661 = t2672*t3234*t3603;
  t6662 = t6659 + t6661;
  t6673 = t2672*t2990*t3234;
  t6674 = t1196*t3603;
  t6688 = t6673 + t6674;
  t7058 = t2990*t1196;
  t7062 = -1.*t2672*t3234*t3603;
  t7069 = t7058 + t7062;
  t7157 = t2990*t1196*t3234;
  t7187 = -1.*t2672*t3603;
  t7188 = t7157 + t7187;
  t7074 = t2261*t6688;
  t7275 = t2261*t7188;
  t7780 = t2672*t2990;
  t7783 = t1196*t3234*t3603;
  t7788 = t7780 + t7783;
  t7379 = t798*t2990*t2261;
  t7397 = -1.*t798*t3603*t5402;
  t7404 = t7379 + t7397;
  t7418 = -0.047*t7404;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2641*t4102 - 0.047*(t2261*t4102 + t5204*t5402) + t5204*t6519 - 0.183*t1196*t798;
  p_output1(10)=t2641*t6662 + t6519*t6688 - 0.047*(t2261*t6662 + t5402*t6688) + 0.183*t2672*t798;
  p_output1(11)=0;
  p_output1(12)=-0.183*t2672*t3234 + t2641*t2672*t3603*t798 + t2672*t2990*t6519*t798 - 0.047*(t2261*t2672*t3603*t798 + t2672*t2990*t5402*t798);
  p_output1(13)=-0.183*t1196*t3234 + t1196*t2641*t3603*t798 + t1196*t2990*t6519*t798 - 0.047*(t1196*t2261*t3603*t798 + t1196*t2990*t5402*t798);
  p_output1(14)=-1.*t2641*t3234*t3603 - 0.047*(-1.*t2261*t3234*t3603 - 1.*t2990*t3234*t5402) - 1.*t2990*t3234*t6519 - 0.183*t798;
  p_output1(15)=t2641*t6688 + t6519*t7069 - 0.047*(t5402*t7069 + t7074);
  p_output1(16)=t4102*t6519 + t2641*t7188 - 0.047*(t4102*t5402 + t7275);
  p_output1(17)=t7418 + t2641*t2990*t798 - 1.*t3603*t6519*t798;
  p_output1(18)=-0.047*t5402*t6662 + 0.047*t2261*t6688 - 0.047*(-1.*t5402*t6662 + t7074);
  p_output1(19)=0.047*t2261*t7188 - 0.047*t5402*t7788 - 0.047*(t7275 - 1.*t5402*t7788);
  p_output1(20)=t7418 + 0.047*t2261*t2990*t798 - 0.047*t3603*t5402*t798;
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


       
Eigen::Matrix<double,3,18> Jp_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



