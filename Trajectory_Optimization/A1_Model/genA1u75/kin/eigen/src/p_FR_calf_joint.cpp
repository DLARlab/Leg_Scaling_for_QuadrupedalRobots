/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint.h"

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
  double t652;
  double t3917;
  double t4284;
  double t4021;
  double t4591;
  double t3489;
  double t4141;
  double t4644;
  double t4649;
  double t4957;
  double t5092;
  double t5118;
  double t5358;
  double t702;
  double t1100;
  double t5638;
  double t5643;
  double t5686;
  double t5696;
  double t6152;
  double t6174;
  double t6458;
  double t6763;
  double t5854;
  double t5910;
  double t5929;
  double t7084;
  double t7091;
  double t7097;
  double t1976;
  double t2370;
  double t2765;
  double t3406;
  double t3662;
  double t3672;
  double t3785;
  double t3883;
  double t5371;
  double t5407;
  double t7803;
  double t7809;
  double t7860;
  double t7956;
  double t7976;
  double t7989;
  double t5700;
  double t5729;
  double t8039;
  double t8041;
  double t8045;
  double t6545;
  double t6806;
  double t6869;
  double t7112;
  double t7113;
  double t7142;
  double t8118;
  double t8121;
  double t8169;
  double t8181;
  double t8182;
  double t8194;
  double t8432;
  double t8436;
  double t8441;
  double t8461;
  double t8467;
  double t8480;
  double t8484;
  double t8488;
  double t8498;
  t652 = Cos(var1[3]);
  t3917 = Cos(var1[5]);
  t4284 = Sin(var1[4]);
  t4021 = Sin(var1[3]);
  t4591 = Sin(var1[5]);
  t3489 = Cos(var1[6]);
  t4141 = -1.*t3917*t4021;
  t4644 = t652*t4284*t4591;
  t4649 = t4141 + t4644;
  t4957 = t652*t3917*t4284;
  t5092 = t4021*t4591;
  t5118 = t4957 + t5092;
  t5358 = Sin(var1[6]);
  t702 = Cos(var1[4]);
  t1100 = Cos(var1[7]);
  t5638 = t3489*t5118;
  t5643 = -1.*t4649*t5358;
  t5686 = t5638 + t5643;
  t5696 = Sin(var1[7]);
  t6152 = Cos(var1[8]);
  t6174 = -1.*t6152;
  t6458 = 1. + t6174;
  t6763 = Sin(var1[8]);
  t5854 = t652*t702*t1100;
  t5910 = -1.*t5686*t5696;
  t5929 = t5854 + t5910;
  t7084 = t1100*t5686;
  t7091 = t652*t702*t5696;
  t7097 = t7084 + t7091;
  t1976 = -1.*t1100;
  t2370 = 1. + t1976;
  t2765 = 0.183*t2370;
  t3406 = 0. + t2765;
  t3662 = -1.*t3489;
  t3672 = 1. + t3662;
  t3785 = -0.047*t3672;
  t3883 = 0. + t3785;
  t5371 = 0.047*t5358;
  t5407 = 0. + t5371;
  t7803 = t652*t3917;
  t7809 = t4021*t4284*t4591;
  t7860 = t7803 + t7809;
  t7956 = t3917*t4021*t4284;
  t7976 = -1.*t652*t4591;
  t7989 = t7956 + t7976;
  t5700 = 0.183*t5696;
  t5729 = 0. + t5700;
  t8039 = t3489*t7989;
  t8041 = -1.*t7860*t5358;
  t8045 = t8039 + t8041;
  t6545 = 0.183*t6458;
  t6806 = 0.15*t6763;
  t6869 = 0. + t6545 + t6806;
  t7112 = -0.15*t6458;
  t7113 = 0.183*t6763;
  t7142 = 0. + t7112 + t7113;
  t8118 = t702*t1100*t4021;
  t8121 = -1.*t8045*t5696;
  t8169 = t8118 + t8121;
  t8181 = t1100*t8045;
  t8182 = t702*t4021*t5696;
  t8194 = t8181 + t8182;
  t8432 = t702*t3917*t3489;
  t8436 = -1.*t702*t4591*t5358;
  t8441 = t8432 + t8436;
  t8461 = -1.*t1100*t4284;
  t8467 = -1.*t8441*t5696;
  t8480 = t8461 + t8467;
  t8484 = t1100*t8441;
  t8488 = -1.*t4284*t5696;
  t8498 = t8484 + t8488;

  p_output1(0)=0. + t3883*t4649 - 0.11079*(t3489*t4649 + t5118*t5358) + t5118*t5407 + t5686*t5729 + t5929*t6869 + t3406*t652*t702 - 0.15*(t5929*t6763 + t6152*t7097) + 0.183*(t5929*t6152 - 1.*t6763*t7097) + t7097*t7142 + var1(0);
  p_output1(1)=0. + t3406*t4021*t702 + t3883*t7860 + t5407*t7989 - 0.11079*(t3489*t7860 + t5358*t7989) + t5729*t8045 + t6869*t8169 + t7142*t8194 - 0.15*(t6763*t8169 + t6152*t8194) + 0.183*(t6152*t8169 - 1.*t6763*t8194) + var1(1);
  p_output1(2)=0. - 1.*t3406*t4284 + t3883*t4591*t702 + t3917*t5407*t702 - 0.11079*(t3489*t4591*t702 + t3917*t5358*t702) + t5729*t8441 + t6869*t8480 + t7142*t8498 - 0.15*(t6763*t8480 + t6152*t8498) + 0.183*(t6152*t8480 - 1.*t6763*t8498) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



