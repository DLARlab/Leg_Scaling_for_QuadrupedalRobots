/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t632;
  double t1641;
  double t2324;
  double t1717;
  double t2673;
  double t208;
  double t851;
  double t1067;
  double t1270;
  double t3612;
  double t1890;
  double t3165;
  double t3184;
  double t3633;
  double t3686;
  double t3689;
  double t5540;
  double t5842;
  double t8463;
  double t8512;
  double t8519;
  double t8523;
  double t3260;
  double t3860;
  double t4701;
  double t8508;
  double t8527;
  double t8529;
  double t8541;
  double t8543;
  double t8547;
  double t8559;
  double t8562;
  double t8563;
  double t938;
  double t4706;
  double t4723;
  double t8604;
  double t8605;
  double t8606;
  double t8607;
  double t8609;
  double t8611;
  double t8617;
  double t8618;
  double t8619;
  double t8620;
  double t8569;
  double t8577;
  double t8580;
  double t8625;
  double t8626;
  double t5003;
  double t8530;
  double t8534;
  double t8581;
  double t8582;
  double t8586;
  double t8537;
  double t8548;
  double t8554;
  t632 = Cos(var1[3]);
  t1641 = Cos(var1[5]);
  t2324 = Sin(var1[3]);
  t1717 = Sin(var1[4]);
  t2673 = Sin(var1[5]);
  t208 = Cos(var1[10]);
  t851 = Cos(var1[4]);
  t1067 = Sin(var1[10]);
  t1270 = Cos(var1[9]);
  t3612 = Sin(var1[9]);
  t1890 = t632*t1641*t1717;
  t3165 = t2324*t2673;
  t3184 = t1890 + t3165;
  t3633 = -1.*t1641*t2324;
  t3686 = t632*t1717*t2673;
  t3689 = t3633 + t3686;
  t5540 = t1641*t2324*t1717;
  t5842 = -1.*t632*t2673;
  t8463 = t5540 + t5842;
  t8512 = t632*t1641;
  t8519 = t2324*t1717*t2673;
  t8523 = t8512 + t8519;
  t3260 = t1270*t3184;
  t3860 = -1.*t3612*t3689;
  t4701 = t3260 + t3860;
  t8508 = t1270*t8463;
  t8527 = -1.*t3612*t8523;
  t8529 = t8508 + t8527;
  t8541 = t1270*t851*t1641;
  t8543 = -1.*t851*t3612*t2673;
  t8547 = t8541 + t8543;
  t8559 = t3612*t3184;
  t8562 = t1270*t3689;
  t8563 = t8559 + t8562;
  t938 = t208*t632*t851;
  t4706 = -1.*t1067*t4701;
  t4723 = t938 + t4706;
  t8604 = -1.*t208;
  t8605 = 1. + t8604;
  t8606 = 0.183*t8605;
  t8607 = 0. + t8606;
  t8609 = -0.047*t3612;
  t8611 = 0. + t8609;
  t8617 = -1.*t1270;
  t8618 = 1. + t8617;
  t8619 = 0.047*t8618;
  t8620 = 0. + t8619;
  t8569 = t3612*t8463;
  t8577 = t1270*t8523;
  t8580 = t8569 + t8577;
  t8625 = 0.183*t1067;
  t8626 = 0. + t8625;
  t5003 = t208*t851*t2324;
  t8530 = -1.*t1067*t8529;
  t8534 = t5003 + t8530;
  t8581 = t851*t1641*t3612;
  t8582 = t1270*t851*t2673;
  t8586 = t8581 + t8582;
  t8537 = -1.*t208*t1717;
  t8548 = -1.*t1067*t8547;
  t8554 = t8537 + t8548;

  p_output1(0)=t4723;
  p_output1(1)=t8534;
  p_output1(2)=t8554;
  p_output1(3)=0.;
  p_output1(4)=t8563;
  p_output1(5)=t8580;
  p_output1(6)=t8586;
  p_output1(7)=0.;
  p_output1(8)=t208*t4701 + t1067*t632*t851;
  p_output1(9)=t1067*t2324*t851 + t208*t8529;
  p_output1(10)=-1.*t1067*t1717 + t208*t8547;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t4723 + 0.08953*t8563 + t632*t851*t8607 + t3184*t8611 + t3689*t8620 + t4701*t8626 + var1(0);
  p_output1(13)=0. + 0.183*t8534 + 0.08953*t8580 + t2324*t851*t8607 + t8463*t8611 + t8523*t8620 + t8529*t8626 + var1(1);
  p_output1(14)=0. + 0.183*t8554 + 0.08953*t8586 - 1.*t1717*t8607 + t1641*t851*t8611 + t2673*t851*t8620 + t8547*t8626 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



