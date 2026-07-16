/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint.h"

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
  double t101;
  double t7430;
  double t7489;
  double t7479;
  double t7491;
  double t3419;
  double t7486;
  double t7515;
  double t7530;
  double t7534;
  double t7559;
  double t7563;
  double t7572;
  double t114;
  double t159;
  double t7668;
  double t7671;
  double t7672;
  double t7713;
  double t366;
  double t1125;
  double t2451;
  double t2664;
  double t4238;
  double t7192;
  double t7265;
  double t7386;
  double t7575;
  double t7583;
  double t7825;
  double t7878;
  double t7900;
  double t7931;
  double t7950;
  double t7960;
  double t7715;
  double t7725;
  double t8041;
  double t8043;
  double t8051;
  double t8204;
  double t8208;
  double t8209;
  t101 = Cos(var1[3]);
  t7430 = Cos(var1[5]);
  t7489 = Sin(var1[4]);
  t7479 = Sin(var1[3]);
  t7491 = Sin(var1[5]);
  t3419 = Cos(var1[6]);
  t7486 = -1.*t7430*t7479;
  t7515 = t101*t7489*t7491;
  t7530 = t7486 + t7515;
  t7534 = t101*t7430*t7489;
  t7559 = t7479*t7491;
  t7563 = t7534 + t7559;
  t7572 = Sin(var1[6]);
  t114 = Cos(var1[4]);
  t159 = Cos(var1[7]);
  t7668 = t3419*t7563;
  t7671 = -1.*t7530*t7572;
  t7672 = t7668 + t7671;
  t7713 = Sin(var1[7]);
  t366 = -1.*t159;
  t1125 = 1. + t366;
  t2451 = 0.183*t1125;
  t2664 = 0. + t2451;
  t4238 = -1.*t3419;
  t7192 = 1. + t4238;
  t7265 = -0.047*t7192;
  t7386 = 0. + t7265;
  t7575 = 0.047*t7572;
  t7583 = 0. + t7575;
  t7825 = t101*t7430;
  t7878 = t7479*t7489*t7491;
  t7900 = t7825 + t7878;
  t7931 = t7430*t7479*t7489;
  t7950 = -1.*t101*t7491;
  t7960 = t7931 + t7950;
  t7715 = 0.183*t7713;
  t7725 = 0. + t7715;
  t8041 = t3419*t7960;
  t8043 = -1.*t7900*t7572;
  t8051 = t8041 + t8043;
  t8204 = t114*t7430*t3419;
  t8208 = -1.*t114*t7491*t7572;
  t8209 = t8204 + t8208;

  p_output1(0)=0. + t101*t114*t2664 + t7386*t7530 - 0.17458*(t3419*t7530 + t7563*t7572) + t7563*t7583 + 0.183*(t101*t114*t159 - 1.*t7672*t7713) + t7672*t7725 + var1(0);
  p_output1(1)=0. + t114*t2664*t7479 + t7386*t7900 + t7583*t7960 - 0.17458*(t3419*t7900 + t7572*t7960) + t7725*t8051 + 0.183*(t114*t159*t7479 - 1.*t7713*t8051) + var1(1);
  p_output1(2)=0. - 1.*t2664*t7489 + t114*t7386*t7491 - 0.17458*(t114*t3419*t7491 + t114*t7430*t7572) + t114*t7430*t7583 + t7725*t8209 + 0.183*(-1.*t159*t7489 - 1.*t7713*t8209) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



