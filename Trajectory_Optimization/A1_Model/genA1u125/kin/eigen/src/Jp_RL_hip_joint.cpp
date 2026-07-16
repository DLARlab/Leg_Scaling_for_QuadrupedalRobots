/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:32 GMT-05:00
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
  double t1236;
  double t3507;
  double t2264;
  double t2550;
  double t4725;
  double t1416;
  double t2733;
  double t4918;
  double t5115;
  double t5271;
  double t5723;
  double t5771;
  double t5824;
  double t706;
  double t1754;
  double t1772;
  double t5486;
  double t5500;
  double t5626;
  double t5700;
  double t6069;
  double t6105;
  double t6119;
  double t6192;
  double t6219;
  double t6333;
  double t7050;
  double t7072;
  double t7090;
  double t7249;
  double t7252;
  double t7277;
  double t7132;
  double t7290;
  double t7644;
  double t7676;
  double t7685;
  double t7416;
  double t7478;
  double t7486;
  double t7498;
  t1236 = Sin(var1[3]);
  t3507 = Cos(var1[3]);
  t2264 = Cos(var1[5]);
  t2550 = Sin(var1[4]);
  t4725 = Sin(var1[5]);
  t1416 = Sin(var1[15]);
  t2733 = -1.*t2264*t1236*t2550;
  t4918 = t3507*t4725;
  t5115 = t2733 + t4918;
  t5271 = Cos(var1[15]);
  t5723 = -1.*t3507*t2264;
  t5771 = -1.*t1236*t2550*t4725;
  t5824 = t5723 + t5771;
  t706 = Cos(var1[4]);
  t1754 = -0.047*t1416;
  t1772 = 0. + t1754;
  t5486 = -1.*t5271;
  t5500 = 1. + t5486;
  t5626 = 0.047*t5500;
  t5700 = 0. + t5626;
  t6069 = t3507*t2264*t2550;
  t6105 = t1236*t4725;
  t6119 = t6069 + t6105;
  t6192 = -1.*t2264*t1236;
  t6219 = t3507*t2550*t4725;
  t6333 = t6192 + t6219;
  t7050 = t2264*t1236;
  t7072 = -1.*t3507*t2550*t4725;
  t7090 = t7050 + t7072;
  t7249 = t2264*t1236*t2550;
  t7252 = -1.*t3507*t4725;
  t7277 = t7249 + t7252;
  t7132 = t5271*t6119;
  t7290 = t5271*t7277;
  t7644 = t3507*t2264;
  t7676 = t1236*t2550*t4725;
  t7685 = t7644 + t7676;
  t7416 = t5271*t706*t2264;
  t7478 = -1.*t706*t1416*t4725;
  t7486 = t7416 + t7478;
  t7498 = 0.047*t7486;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1772*t5115 + t5700*t5824 + 0.047*(t1416*t5115 + t5271*t5824) + 0.183*t1236*t706;
  p_output1(10)=t1772*t6119 + t5700*t6333 + 0.047*(t1416*t6119 + t5271*t6333) - 0.183*t3507*t706;
  p_output1(11)=0;
  p_output1(12)=0.183*t2550*t3507 + t1772*t2264*t3507*t706 + t3507*t4725*t5700*t706 + 0.047*(t1416*t2264*t3507*t706 + t3507*t4725*t5271*t706);
  p_output1(13)=0.183*t1236*t2550 + t1236*t1772*t2264*t706 + t1236*t4725*t5700*t706 + 0.047*(t1236*t1416*t2264*t706 + t1236*t4725*t5271*t706);
  p_output1(14)=-1.*t1772*t2264*t2550 + 0.047*(-1.*t1416*t2264*t2550 - 1.*t2550*t4725*t5271) - 1.*t2550*t4725*t5700 + 0.183*t706;
  p_output1(15)=t5700*t6119 + t1772*t7090 + 0.047*(t1416*t7090 + t7132);
  p_output1(16)=t1772*t5824 + t5700*t7277 + 0.047*(t1416*t5824 + t7290);
  p_output1(17)=-1.*t1772*t4725*t706 + t2264*t5700*t706 + t7498;
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
  p_output1(45)=-0.047*t5271*t6119 + 0.047*t1416*t6333 + 0.047*(-1.*t1416*t6333 + t7132);
  p_output1(46)=-0.047*t5271*t7277 + 0.047*t1416*t7685 + 0.047*(t7290 - 1.*t1416*t7685);
  p_output1(47)=0.047*t1416*t4725*t706 - 0.047*t2264*t5271*t706 + t7498;
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



