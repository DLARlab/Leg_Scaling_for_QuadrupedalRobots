/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot.h"

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
  double t831;
  double t5288;
  double t5750;
  double t5388;
  double t5828;
  double t4070;
  double t5672;
  double t5832;
  double t5836;
  double t5893;
  double t5918;
  double t5924;
  double t5948;
  double t1599;
  double t2130;
  double t6381;
  double t6459;
  double t6468;
  double t6521;
  double t6782;
  double t6803;
  double t6811;
  double t6815;
  double t6702;
  double t6746;
  double t6781;
  double t6859;
  double t6866;
  double t6883;
  double t2334;
  double t2928;
  double t3128;
  double t3302;
  double t4415;
  double t5007;
  double t5012;
  double t5254;
  double t5955;
  double t5986;
  double t6988;
  double t6989;
  double t6995;
  double t6999;
  double t7000;
  double t7006;
  double t6524;
  double t6595;
  double t7123;
  double t7131;
  double t7132;
  double t6813;
  double t6816;
  double t6833;
  double t6894;
  double t6899;
  double t6903;
  double t7255;
  double t7290;
  double t7336;
  double t7343;
  double t7411;
  double t7440;
  double t7751;
  double t7754;
  double t7759;
  double t7777;
  double t7831;
  double t7833;
  double t7837;
  double t7841;
  double t7843;
  t831 = Cos(var1[3]);
  t5288 = Cos(var1[5]);
  t5750 = Sin(var1[4]);
  t5388 = Sin(var1[3]);
  t5828 = Sin(var1[5]);
  t4070 = Cos(var1[6]);
  t5672 = -1.*t5288*t5388;
  t5832 = t831*t5750*t5828;
  t5836 = t5672 + t5832;
  t5893 = t831*t5288*t5750;
  t5918 = t5388*t5828;
  t5924 = t5893 + t5918;
  t5948 = Sin(var1[6]);
  t1599 = Cos(var1[4]);
  t2130 = Cos(var1[7]);
  t6381 = t4070*t5924;
  t6459 = -1.*t5836*t5948;
  t6468 = t6381 + t6459;
  t6521 = Sin(var1[7]);
  t6782 = Cos(var1[8]);
  t6803 = -1.*t6782;
  t6811 = 1. + t6803;
  t6815 = Sin(var1[8]);
  t6702 = t831*t1599*t2130;
  t6746 = -1.*t6468*t6521;
  t6781 = t6702 + t6746;
  t6859 = t2130*t6468;
  t6866 = t831*t1599*t6521;
  t6883 = t6859 + t6866;
  t2334 = -1.*t2130;
  t2928 = 1. + t2334;
  t3128 = 0.183*t2928;
  t3302 = 0. + t3128;
  t4415 = -1.*t4070;
  t5007 = 1. + t4415;
  t5012 = -0.047*t5007;
  t5254 = 0. + t5012;
  t5955 = 0.047*t5948;
  t5986 = 0. + t5955;
  t6988 = t831*t5288;
  t6989 = t5388*t5750*t5828;
  t6995 = t6988 + t6989;
  t6999 = t5288*t5388*t5750;
  t7000 = -1.*t831*t5828;
  t7006 = t6999 + t7000;
  t6524 = 0.183*t6521;
  t6595 = 0. + t6524;
  t7123 = t4070*t7006;
  t7131 = -1.*t6995*t5948;
  t7132 = t7123 + t7131;
  t6813 = 0.183*t6811;
  t6816 = 0.15*t6815;
  t6833 = 0. + t6813 + t6816;
  t6894 = -0.15*t6811;
  t6899 = 0.183*t6815;
  t6903 = 0. + t6894 + t6899;
  t7255 = t1599*t2130*t5388;
  t7290 = -1.*t7132*t6521;
  t7336 = t7255 + t7290;
  t7343 = t2130*t7132;
  t7411 = t1599*t5388*t6521;
  t7440 = t7343 + t7411;
  t7751 = t1599*t5288*t4070;
  t7754 = -1.*t1599*t5828*t5948;
  t7759 = t7751 + t7754;
  t7777 = -1.*t2130*t5750;
  t7831 = -1.*t7759*t6521;
  t7833 = t7777 + t7831;
  t7837 = t2130*t7759;
  t7841 = -1.*t5750*t6521;
  t7843 = t7837 + t7841;

  p_output1(0)=0. + t5254*t5836 - 0.11079*(t4070*t5836 + t5924*t5948) + t5924*t5986 + t6468*t6595 + t6781*t6833 - 0.3*(t6781*t6815 + t6782*t6883) + 0.183*(t6781*t6782 - 1.*t6815*t6883) + t6883*t6903 + t1599*t3302*t831 + var1(0);
  p_output1(1)=0. + t1599*t3302*t5388 + t5254*t6995 + t5986*t7006 - 0.11079*(t4070*t6995 + t5948*t7006) + t6595*t7132 + t6833*t7336 + t6903*t7440 - 0.3*(t6815*t7336 + t6782*t7440) + 0.183*(t6782*t7336 - 1.*t6815*t7440) + var1(1);
  p_output1(2)=0. - 1.*t3302*t5750 + t1599*t5254*t5828 - 0.11079*(t1599*t4070*t5828 + t1599*t5288*t5948) + t1599*t5288*t5986 + t6595*t7759 + t6833*t7833 + t6903*t7843 - 0.3*(t6815*t7833 + t6782*t7843) + 0.183*(t6782*t7833 - 1.*t6815*t7843) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



