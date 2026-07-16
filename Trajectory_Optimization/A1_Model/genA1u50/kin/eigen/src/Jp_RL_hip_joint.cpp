/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:52 GMT-05:00
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
  double t1007;
  double t2391;
  double t2381;
  double t2383;
  double t2395;
  double t1527;
  double t2387;
  double t2479;
  double t2525;
  double t2746;
  double t3398;
  double t3877;
  double t3882;
  double t620;
  double t1848;
  double t2133;
  double t2752;
  double t2762;
  double t3025;
  double t3397;
  double t4257;
  double t4365;
  double t4467;
  double t4470;
  double t4471;
  double t4497;
  double t5420;
  double t5446;
  double t5459;
  double t5720;
  double t5721;
  double t5725;
  double t5535;
  double t5802;
  double t6391;
  double t6410;
  double t6423;
  double t6103;
  double t6123;
  double t6127;
  double t6292;
  t1007 = Sin(var1[3]);
  t2391 = Cos(var1[3]);
  t2381 = Cos(var1[5]);
  t2383 = Sin(var1[4]);
  t2395 = Sin(var1[5]);
  t1527 = Sin(var1[15]);
  t2387 = -1.*t2381*t1007*t2383;
  t2479 = t2391*t2395;
  t2525 = t2387 + t2479;
  t2746 = Cos(var1[15]);
  t3398 = -1.*t2391*t2381;
  t3877 = -1.*t1007*t2383*t2395;
  t3882 = t3398 + t3877;
  t620 = Cos(var1[4]);
  t1848 = -0.047*t1527;
  t2133 = 0. + t1848;
  t2752 = -1.*t2746;
  t2762 = 1. + t2752;
  t3025 = 0.047*t2762;
  t3397 = 0. + t3025;
  t4257 = t2391*t2381*t2383;
  t4365 = t1007*t2395;
  t4467 = t4257 + t4365;
  t4470 = -1.*t2381*t1007;
  t4471 = t2391*t2383*t2395;
  t4497 = t4470 + t4471;
  t5420 = t2381*t1007;
  t5446 = -1.*t2391*t2383*t2395;
  t5459 = t5420 + t5446;
  t5720 = t2381*t1007*t2383;
  t5721 = -1.*t2391*t2395;
  t5725 = t5720 + t5721;
  t5535 = t2746*t4467;
  t5802 = t2746*t5725;
  t6391 = t2391*t2381;
  t6410 = t1007*t2383*t2395;
  t6423 = t6391 + t6410;
  t6103 = t2746*t620*t2381;
  t6123 = -1.*t620*t1527*t2395;
  t6127 = t6103 + t6123;
  t6292 = 0.047*t6127;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2133*t2525 + t3397*t3882 + 0.047*(t1527*t2525 + t2746*t3882) + 0.183*t1007*t620;
  p_output1(10)=t2133*t4467 + t3397*t4497 + 0.047*(t1527*t4467 + t2746*t4497) - 0.183*t2391*t620;
  p_output1(11)=0;
  p_output1(12)=0.183*t2383*t2391 + t2133*t2381*t2391*t620 + t2391*t2395*t3397*t620 + 0.047*(t1527*t2381*t2391*t620 + t2391*t2395*t2746*t620);
  p_output1(13)=0.183*t1007*t2383 + t1007*t2133*t2381*t620 + t1007*t2395*t3397*t620 + 0.047*(t1007*t1527*t2381*t620 + t1007*t2395*t2746*t620);
  p_output1(14)=-1.*t2133*t2381*t2383 + 0.047*(-1.*t1527*t2381*t2383 - 1.*t2383*t2395*t2746) - 1.*t2383*t2395*t3397 + 0.183*t620;
  p_output1(15)=t3397*t4467 + t2133*t5459 + 0.047*(t1527*t5459 + t5535);
  p_output1(16)=t2133*t3882 + t3397*t5725 + 0.047*(t1527*t3882 + t5802);
  p_output1(17)=-1.*t2133*t2395*t620 + t2381*t3397*t620 + t6292;
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
  p_output1(45)=-0.047*t2746*t4467 + 0.047*t1527*t4497 + 0.047*(-1.*t1527*t4497 + t5535);
  p_output1(46)=-0.047*t2746*t5725 + 0.047*t1527*t6423 + 0.047*(t5802 - 1.*t1527*t6423);
  p_output1(47)=0.047*t1527*t2395*t620 - 0.047*t2381*t2746*t620 + t6292;
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



