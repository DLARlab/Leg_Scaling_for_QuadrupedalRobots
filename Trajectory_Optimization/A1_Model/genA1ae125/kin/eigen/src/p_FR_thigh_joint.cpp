/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:10 GMT-05:00
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
  double t696;
  double t6862;
  double t8699;
  double t6891;
  double t9298;
  double t5561;
  double t7389;
  double t9313;
  double t9318;
  double t9329;
  double t9331;
  double t9332;
  double t9359;
  double t1964;
  double t2014;
  double t9486;
  double t9493;
  double t9495;
  double t9499;
  double t2221;
  double t3002;
  double t3175;
  double t3711;
  double t6378;
  double t6455;
  double t6529;
  double t6780;
  double t9429;
  double t9446;
  double t9547;
  double t9548;
  double t9549;
  double t9564;
  double t9570;
  double t9571;
  double t9506;
  double t9507;
  double t9579;
  double t9580;
  double t9582;
  double t9617;
  double t9618;
  double t9621;
  t696 = Cos(var1[3]);
  t6862 = Cos(var1[5]);
  t8699 = Sin(var1[4]);
  t6891 = Sin(var1[3]);
  t9298 = Sin(var1[5]);
  t5561 = Cos(var1[6]);
  t7389 = -1.*t6862*t6891;
  t9313 = t696*t8699*t9298;
  t9318 = t7389 + t9313;
  t9329 = t696*t6862*t8699;
  t9331 = t6891*t9298;
  t9332 = t9329 + t9331;
  t9359 = Sin(var1[6]);
  t1964 = Cos(var1[4]);
  t2014 = Cos(var1[7]);
  t9486 = t5561*t9332;
  t9493 = -1.*t9318*t9359;
  t9495 = t9486 + t9493;
  t9499 = Sin(var1[7]);
  t2221 = -1.*t2014;
  t3002 = 1. + t2221;
  t3175 = 0.183*t3002;
  t3711 = 0. + t3175;
  t6378 = -1.*t5561;
  t6455 = 1. + t6378;
  t6529 = -0.047*t6455;
  t6780 = 0. + t6529;
  t9429 = 0.047*t9359;
  t9446 = 0. + t9429;
  t9547 = t696*t6862;
  t9548 = t6891*t8699*t9298;
  t9549 = t9547 + t9548;
  t9564 = t6862*t6891*t8699;
  t9570 = -1.*t696*t9298;
  t9571 = t9564 + t9570;
  t9506 = 0.183*t9499;
  t9507 = 0. + t9506;
  t9579 = t5561*t9571;
  t9580 = -1.*t9549*t9359;
  t9582 = t9579 + t9580;
  t9617 = t1964*t6862*t5561;
  t9618 = -1.*t1964*t9298*t9359;
  t9621 = t9617 + t9618;

  p_output1(0)=0. + t1964*t3711*t696 + t6780*t9318 - 0.13205*(t5561*t9318 + t9332*t9359) + t9332*t9446 + 0.183*(t1964*t2014*t696 - 1.*t9495*t9499) + t9495*t9507 + var1(0);
  p_output1(1)=0. + t1964*t3711*t6891 + t6780*t9549 + t9446*t9571 - 0.13205*(t5561*t9549 + t9359*t9571) + t9507*t9582 + 0.183*(t1964*t2014*t6891 - 1.*t9499*t9582) + var1(1);
  p_output1(2)=0. - 1.*t3711*t8699 + t1964*t6780*t9298 - 0.13205*(t1964*t5561*t9298 + t1964*t6862*t9359) + t1964*t6862*t9446 + t9507*t9621 + 0.183*(-1.*t2014*t8699 - 1.*t9499*t9621) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



