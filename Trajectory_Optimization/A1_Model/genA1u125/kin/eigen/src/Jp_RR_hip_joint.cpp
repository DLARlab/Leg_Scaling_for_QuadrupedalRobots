/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:25 GMT-05:00
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
  double t1965;
  double t5283;
  double t4708;
  double t4734;
  double t5288;
  double t2237;
  double t5264;
  double t5301;
  double t5343;
  double t5416;
  double t5568;
  double t5569;
  double t5643;
  double t1454;
  double t3756;
  double t4586;
  double t5490;
  double t5517;
  double t5539;
  double t5550;
  double t5864;
  double t5903;
  double t5915;
  double t5930;
  double t5939;
  double t6022;
  double t6654;
  double t6678;
  double t6696;
  double t6924;
  double t6994;
  double t6999;
  double t6783;
  double t7066;
  double t7366;
  double t7370;
  double t7371;
  double t7239;
  double t7246;
  double t7269;
  double t7301;
  t1965 = Sin(var1[3]);
  t5283 = Cos(var1[3]);
  t4708 = Cos(var1[5]);
  t4734 = Sin(var1[4]);
  t5288 = Sin(var1[5]);
  t2237 = Sin(var1[12]);
  t5264 = -1.*t4708*t1965*t4734;
  t5301 = t5283*t5288;
  t5343 = t5264 + t5301;
  t5416 = Cos(var1[12]);
  t5568 = -1.*t5283*t4708;
  t5569 = -1.*t1965*t4734*t5288;
  t5643 = t5568 + t5569;
  t1454 = Cos(var1[4]);
  t3756 = 0.047*t2237;
  t4586 = 0. + t3756;
  t5490 = -1.*t5416;
  t5517 = 1. + t5490;
  t5539 = -0.047*t5517;
  t5550 = 0. + t5539;
  t5864 = t5283*t4708*t4734;
  t5903 = t1965*t5288;
  t5915 = t5864 + t5903;
  t5930 = -1.*t4708*t1965;
  t5939 = t5283*t4734*t5288;
  t6022 = t5930 + t5939;
  t6654 = t4708*t1965;
  t6678 = -1.*t5283*t4734*t5288;
  t6696 = t6654 + t6678;
  t6924 = t4708*t1965*t4734;
  t6994 = -1.*t5283*t5288;
  t6999 = t6924 + t6994;
  t6783 = t5416*t5915;
  t7066 = t5416*t6999;
  t7366 = t5283*t4708;
  t7370 = t1965*t4734*t5288;
  t7371 = t7366 + t7370;
  t7239 = t5416*t1454*t4708;
  t7246 = -1.*t1454*t2237*t5288;
  t7269 = t7239 + t7246;
  t7301 = -0.047*t7269;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.183*t1454*t1965 + t4586*t5343 + t5550*t5643 - 0.047*(t2237*t5343 + t5416*t5643);
  p_output1(10)=-0.183*t1454*t5283 + t4586*t5915 + t5550*t6022 - 0.047*(t2237*t5915 + t5416*t6022);
  p_output1(11)=0;
  p_output1(12)=t1454*t4586*t4708*t5283 + 0.183*t4734*t5283 - 0.047*(t1454*t2237*t4708*t5283 + t1454*t5283*t5288*t5416) + t1454*t5283*t5288*t5550;
  p_output1(13)=t1454*t1965*t4586*t4708 + 0.183*t1965*t4734 - 0.047*(t1454*t1965*t2237*t4708 + t1454*t1965*t5288*t5416) + t1454*t1965*t5288*t5550;
  p_output1(14)=0.183*t1454 - 1.*t4586*t4708*t4734 - 0.047*(-1.*t2237*t4708*t4734 - 1.*t4734*t5288*t5416) - 1.*t4734*t5288*t5550;
  p_output1(15)=t5550*t5915 + t4586*t6696 - 0.047*(t2237*t6696 + t6783);
  p_output1(16)=t4586*t5643 + t5550*t6999 - 0.047*(t2237*t5643 + t7066);
  p_output1(17)=-1.*t1454*t4586*t5288 + t1454*t4708*t5550 + t7301;
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
  p_output1(36)=0.047*t5416*t5915 - 0.047*t2237*t6022 - 0.047*(-1.*t2237*t6022 + t6783);
  p_output1(37)=0.047*t5416*t6999 - 0.047*t2237*t7371 - 0.047*(t7066 - 1.*t2237*t7371);
  p_output1(38)=-0.047*t1454*t2237*t5288 + 0.047*t1454*t4708*t5416 + t7301;
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



