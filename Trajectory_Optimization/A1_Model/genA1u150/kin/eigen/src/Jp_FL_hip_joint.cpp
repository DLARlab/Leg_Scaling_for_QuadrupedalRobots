/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint.h"

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
  double t1708;
  double t4795;
  double t4059;
  double t4149;
  double t5109;
  double t2297;
  double t4278;
  double t5130;
  double t5341;
  double t5396;
  double t5485;
  double t5489;
  double t5513;
  double t116;
  double t2516;
  double t2656;
  double t5397;
  double t5420;
  double t5428;
  double t5477;
  double t5602;
  double t5608;
  double t5613;
  double t5623;
  double t5624;
  double t5635;
  double t6144;
  double t6176;
  double t6234;
  double t6522;
  double t6537;
  double t6605;
  double t6320;
  double t6804;
  double t7302;
  double t7318;
  double t7321;
  double t7097;
  double t7102;
  double t7116;
  double t7127;
  t1708 = Sin(var1[3]);
  t4795 = Cos(var1[3]);
  t4059 = Cos(var1[5]);
  t4149 = Sin(var1[4]);
  t5109 = Sin(var1[5]);
  t2297 = Sin(var1[9]);
  t4278 = -1.*t4059*t1708*t4149;
  t5130 = t4795*t5109;
  t5341 = t4278 + t5130;
  t5396 = Cos(var1[9]);
  t5485 = -1.*t4795*t4059;
  t5489 = -1.*t1708*t4149*t5109;
  t5513 = t5485 + t5489;
  t116 = Cos(var1[4]);
  t2516 = -0.047*t2297;
  t2656 = 0. + t2516;
  t5397 = -1.*t5396;
  t5420 = 1. + t5397;
  t5428 = 0.047*t5420;
  t5477 = 0. + t5428;
  t5602 = t4795*t4059*t4149;
  t5608 = t1708*t5109;
  t5613 = t5602 + t5608;
  t5623 = -1.*t4059*t1708;
  t5624 = t4795*t4149*t5109;
  t5635 = t5623 + t5624;
  t6144 = t4059*t1708;
  t6176 = -1.*t4795*t4149*t5109;
  t6234 = t6144 + t6176;
  t6522 = t4059*t1708*t4149;
  t6537 = -1.*t4795*t5109;
  t6605 = t6522 + t6537;
  t6320 = t5396*t5613;
  t6804 = t5396*t6605;
  t7302 = t4795*t4059;
  t7318 = t1708*t4149*t5109;
  t7321 = t7302 + t7318;
  t7097 = t5396*t116*t4059;
  t7102 = -1.*t116*t2297*t5109;
  t7116 = t7097 + t7102;
  t7127 = 0.047*t7116;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t116*t1708 + t2656*t5341 + t5477*t5513 + 0.047*(t2297*t5341 + t5396*t5513);
  p_output1(10)=0.183*t116*t4795 + t2656*t5613 + t5477*t5635 + 0.047*(t2297*t5613 + t5396*t5635);
  p_output1(11)=0;
  p_output1(12)=t116*t2656*t4059*t4795 - 0.183*t4149*t4795 + 0.047*(t116*t2297*t4059*t4795 + t116*t4795*t5109*t5396) + t116*t4795*t5109*t5477;
  p_output1(13)=t116*t1708*t2656*t4059 - 0.183*t1708*t4149 + 0.047*(t116*t1708*t2297*t4059 + t116*t1708*t5109*t5396) + t116*t1708*t5109*t5477;
  p_output1(14)=-0.183*t116 - 1.*t2656*t4059*t4149 + 0.047*(-1.*t2297*t4059*t4149 - 1.*t4149*t5109*t5396) - 1.*t4149*t5109*t5477;
  p_output1(15)=t5477*t5613 + t2656*t6234 + 0.047*(t2297*t6234 + t6320);
  p_output1(16)=t2656*t5513 + t5477*t6605 + 0.047*(t2297*t5513 + t6804);
  p_output1(17)=-1.*t116*t2656*t5109 + t116*t4059*t5477 + t7127;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t5396*t5613 + 0.047*t2297*t5635 + 0.047*(-1.*t2297*t5635 + t6320);
  p_output1(28)=-0.047*t5396*t6605 + 0.047*t2297*t7321 + 0.047*(t6804 - 1.*t2297*t7321);
  p_output1(29)=0.047*t116*t2297*t5109 - 0.047*t116*t4059*t5396 + t7127;
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


       
Eigen::Matrix<double,3,18> Jp_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



