/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:45 GMT-05:00
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
  double t519;
  double t2453;
  double t2326;
  double t2427;
  double t3113;
  double t834;
  double t2432;
  double t3360;
  double t3365;
  double t3548;
  double t5312;
  double t5330;
  double t5333;
  double t494;
  double t856;
  double t2240;
  double t4647;
  double t4930;
  double t4951;
  double t5093;
  double t5348;
  double t5352;
  double t5357;
  double t5361;
  double t5362;
  double t5363;
  double t6426;
  double t6499;
  double t6503;
  double t8646;
  double t8652;
  double t8656;
  double t6588;
  double t8678;
  double t8772;
  double t8775;
  double t8776;
  double t8734;
  double t8737;
  double t8742;
  double t8747;
  t519 = Sin(var1[3]);
  t2453 = Cos(var1[3]);
  t2326 = Cos(var1[5]);
  t2427 = Sin(var1[4]);
  t3113 = Sin(var1[5]);
  t834 = Sin(var1[12]);
  t2432 = -1.*t2326*t519*t2427;
  t3360 = t2453*t3113;
  t3365 = t2432 + t3360;
  t3548 = Cos(var1[12]);
  t5312 = -1.*t2453*t2326;
  t5330 = -1.*t519*t2427*t3113;
  t5333 = t5312 + t5330;
  t494 = Cos(var1[4]);
  t856 = 0.047*t834;
  t2240 = 0. + t856;
  t4647 = -1.*t3548;
  t4930 = 1. + t4647;
  t4951 = -0.047*t4930;
  t5093 = 0. + t4951;
  t5348 = t2453*t2326*t2427;
  t5352 = t519*t3113;
  t5357 = t5348 + t5352;
  t5361 = -1.*t2326*t519;
  t5362 = t2453*t2427*t3113;
  t5363 = t5361 + t5362;
  t6426 = t2326*t519;
  t6499 = -1.*t2453*t2427*t3113;
  t6503 = t6426 + t6499;
  t8646 = t2326*t519*t2427;
  t8652 = -1.*t2453*t3113;
  t8656 = t8646 + t8652;
  t6588 = t3548*t5357;
  t8678 = t3548*t8656;
  t8772 = t2453*t2326;
  t8775 = t519*t2427*t3113;
  t8776 = t8772 + t8775;
  t8734 = t3548*t494*t2326;
  t8737 = -1.*t494*t834*t3113;
  t8742 = t8734 + t8737;
  t8747 = -0.047*t8742;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2240*t3365 + 0.183*t494*t519 + t5093*t5333 - 0.047*(t3548*t5333 + t3365*t834);
  p_output1(10)=-0.183*t2453*t494 + t2240*t5357 + t5093*t5363 - 0.047*(t3548*t5363 + t5357*t834);
  p_output1(11)=0;
  p_output1(12)=0.183*t2427*t2453 + t2240*t2326*t2453*t494 + t2453*t3113*t494*t5093 - 0.047*(t2453*t3113*t3548*t494 + t2326*t2453*t494*t834);
  p_output1(13)=0.183*t2427*t519 + t2240*t2326*t494*t519 + t3113*t494*t5093*t519 - 0.047*(t3113*t3548*t494*t519 + t2326*t494*t519*t834);
  p_output1(14)=-1.*t2240*t2326*t2427 + 0.183*t494 - 1.*t2427*t3113*t5093 - 0.047*(-1.*t2427*t3113*t3548 - 1.*t2326*t2427*t834);
  p_output1(15)=t5093*t5357 + t2240*t6503 - 0.047*(t6588 + t6503*t834);
  p_output1(16)=t2240*t5333 + t5093*t8656 - 0.047*(t5333*t834 + t8678);
  p_output1(17)=-1.*t2240*t3113*t494 + t2326*t494*t5093 + t8747;
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
  p_output1(36)=0.047*t3548*t5357 - 0.047*t5363*t834 - 0.047*(t6588 - 1.*t5363*t834);
  p_output1(37)=0.047*t3548*t8656 - 0.047*t834*t8776 - 0.047*(t8678 - 1.*t834*t8776);
  p_output1(38)=0.047*t2326*t3548*t494 - 0.047*t3113*t494*t834 + t8747;
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



