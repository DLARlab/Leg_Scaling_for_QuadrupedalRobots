/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint.h"

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
  double t1230;
  double t108;
  double t5277;
  double t2447;
  double t5476;
  double t5519;
  double t5434;
  double t5534;
  double t5513;
  double t5522;
  double t5528;
  double t5561;
  double t5568;
  double t5572;
  double t5588;
  double t5592;
  double t5594;
  double t5604;
  double t5605;
  double t5606;
  double t5533;
  double t5577;
  double t5583;
  double t5695;
  double t5701;
  double t5703;
  double t5706;
  double t5707;
  double t5710;
  double t5595;
  double t5612;
  double t5614;
  double t5616;
  double t5619;
  double t5629;
  t1230 = Cos(var1[4]);
  t108 = Cos(var1[3]);
  t5277 = Sin(var1[4]);
  t2447 = Sin(var1[3]);
  t5476 = Cos(var1[5]);
  t5519 = Sin(var1[5]);
  t5434 = Sin(var1[9]);
  t5534 = Cos(var1[9]);
  t5513 = t108*t5476*t5277;
  t5522 = t2447*t5519;
  t5528 = t5513 + t5522;
  t5561 = -1.*t5476*t2447;
  t5568 = t108*t5277*t5519;
  t5572 = t5561 + t5568;
  t5588 = t5476*t2447*t5277;
  t5592 = -1.*t108*t5519;
  t5594 = t5588 + t5592;
  t5604 = t108*t5476;
  t5605 = t2447*t5277*t5519;
  t5606 = t5604 + t5605;
  t5533 = t5434*t5528;
  t5577 = t5534*t5572;
  t5583 = t5533 + t5577;
  t5695 = -0.047*t5434;
  t5701 = 0. + t5695;
  t5703 = -1.*t5534;
  t5706 = 1. + t5703;
  t5707 = 0.047*t5706;
  t5710 = 0. + t5707;
  t5595 = t5434*t5594;
  t5612 = t5534*t5606;
  t5614 = t5595 + t5612;
  t5616 = t1230*t5476*t5434;
  t5619 = t5534*t1230*t5519;
  t5629 = t5616 + t5619;

  p_output1(0)=t108*t1230;
  p_output1(1)=t1230*t2447;
  p_output1(2)=-1.*t5277;
  p_output1(3)=0.;
  p_output1(4)=t5583;
  p_output1(5)=t5614;
  p_output1(6)=t5629;
  p_output1(7)=0.;
  p_output1(8)=t5528*t5534 - 1.*t5434*t5572;
  p_output1(9)=t5534*t5594 - 1.*t5434*t5606;
  p_output1(10)=-1.*t1230*t5434*t5519 + t1230*t5476*t5534;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t108*t1230 + 0.047*t5583 + t5528*t5701 + t5572*t5710 + var1(0);
  p_output1(13)=0. + 0.183*t1230*t2447 + 0.047*t5614 + t5594*t5701 + t5606*t5710 + var1(1);
  p_output1(14)=0. - 0.183*t5277 + 0.047*t5629 + t1230*t5476*t5701 + t1230*t5519*t5710 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



