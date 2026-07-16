/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint.h"

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
  double t445;
  double t2410;
  double t1304;
  double t1344;
  double t2852;
  double t847;
  double t1664;
  double t3165;
  double t3184;
  double t3300;
  double t3949;
  double t4322;
  double t4351;
  double t7;
  double t439;
  double t6725;
  double t8463;
  double t8494;
  double t8507;
  double t226;
  double t238;
  double t404;
  double t433;
  double t851;
  double t1062;
  double t3376;
  double t3716;
  double t3860;
  double t3941;
  double t8534;
  double t8537;
  double t8538;
  double t8542;
  double t8543;
  double t8546;
  double t8447;
  double t8449;
  double t8563;
  double t8564;
  double t8567;
  double t8593;
  double t8594;
  double t8595;
  double t8612;
  double t8615;
  double t8616;
  double t8634;
  double t8635;
  double t8636;
  double t8646;
  double t8647;
  double t8648;
  double t8650;
  double t8651;
  double t8652;
  double t8662;
  double t8663;
  double t8664;
  double t4940;
  double t8667;
  double t8668;
  double t8686;
  double t8687;
  double t8688;
  double t8702;
  double t8703;
  double t8709;
  double t8710;
  double t8711;
  double t8713;
  double t8714;
  double t8678;
  double t8689;
  double t8691;
  double t8693;
  double t8694;
  double t8695;
  double t8698;
  double t8717;
  double t8718;
  t445 = Sin(var1[3]);
  t2410 = Cos(var1[3]);
  t1304 = Cos(var1[5]);
  t1344 = Sin(var1[4]);
  t2852 = Sin(var1[5]);
  t847 = Sin(var1[9]);
  t1664 = -1.*t1304*t445*t1344;
  t3165 = t2410*t2852;
  t3184 = t1664 + t3165;
  t3300 = Cos(var1[9]);
  t3949 = -1.*t2410*t1304;
  t4322 = -1.*t445*t1344*t2852;
  t4351 = t3949 + t4322;
  t7 = Cos(var1[10]);
  t439 = Cos(var1[4]);
  t6725 = Sin(var1[10]);
  t8463 = t3300*t3184;
  t8494 = -1.*t847*t4351;
  t8507 = t8463 + t8494;
  t226 = -1.*t7;
  t238 = 1. + t226;
  t404 = 0.183*t238;
  t433 = 0. + t404;
  t851 = -0.047*t847;
  t1062 = 0. + t851;
  t3376 = -1.*t3300;
  t3716 = 1. + t3376;
  t3860 = 0.047*t3716;
  t3941 = 0. + t3860;
  t8534 = t2410*t1304*t1344;
  t8537 = t445*t2852;
  t8538 = t8534 + t8537;
  t8542 = -1.*t1304*t445;
  t8543 = t2410*t1344*t2852;
  t8546 = t8542 + t8543;
  t8447 = 0.183*t6725;
  t8449 = 0. + t8447;
  t8563 = t3300*t8538;
  t8564 = -1.*t847*t8546;
  t8567 = t8563 + t8564;
  t8593 = t3300*t2410*t439*t1304;
  t8594 = -1.*t2410*t439*t847*t2852;
  t8595 = t8593 + t8594;
  t8612 = t3300*t439*t1304*t445;
  t8615 = -1.*t439*t847*t445*t2852;
  t8616 = t8612 + t8615;
  t8634 = -1.*t3300*t1304*t1344;
  t8635 = t847*t1344*t2852;
  t8636 = t8634 + t8635;
  t8646 = t1304*t445;
  t8647 = -1.*t2410*t1344*t2852;
  t8648 = t8646 + t8647;
  t8650 = -1.*t847*t8538;
  t8651 = t3300*t8648;
  t8652 = t8650 + t8651;
  t8662 = t1304*t445*t1344;
  t8663 = -1.*t2410*t2852;
  t8664 = t8662 + t8663;
  t4940 = t3300*t4351;
  t8667 = -1.*t847*t8664;
  t8668 = t8667 + t4940;
  t8686 = -1.*t439*t1304*t847;
  t8687 = -1.*t3300*t439*t2852;
  t8688 = t8686 + t8687;
  t8702 = -1.*t3300*t8546;
  t8703 = t8650 + t8702;
  t8709 = t2410*t1304;
  t8710 = t445*t1344*t2852;
  t8711 = t8709 + t8710;
  t8713 = -1.*t3300*t8711;
  t8714 = t8667 + t8713;
  t8678 = t3300*t8664;
  t8689 = t8449*t8688;
  t8691 = -0.183*t6725*t8688;
  t8693 = t3300*t439*t1304;
  t8694 = -1.*t439*t847*t2852;
  t8695 = t8693 + t8694;
  t8698 = 0.08953*t8695;
  t8717 = -1.*t847*t8711;
  t8718 = t8678 + t8717;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1062*t3184 + t3941*t4351 - 1.*t433*t439*t445 + 0.08953*(t4940 + t3184*t847) + t8449*t8507 + 0.183*(-1.*t439*t445*t7 - 1.*t6725*t8507);
  p_output1(10)=t2410*t433*t439 + t1062*t8538 + t3941*t8546 + 0.08953*(t847*t8538 + t3300*t8546) + t8449*t8567 + 0.183*(t2410*t439*t7 - 1.*t6725*t8567);
  p_output1(11)=0;
  p_output1(12)=-1.*t1344*t2410*t433 + t1062*t1304*t2410*t439 + t2410*t2852*t3941*t439 + 0.08953*(t2410*t2852*t3300*t439 + t1304*t2410*t439*t847) + t8449*t8595 + 0.183*(-1.*t1344*t2410*t7 - 1.*t6725*t8595);
  p_output1(13)=-1.*t1344*t433*t445 + t1062*t1304*t439*t445 + t2852*t3941*t439*t445 + 0.08953*(t2852*t3300*t439*t445 + t1304*t439*t445*t847) + t8449*t8616 + 0.183*(-1.*t1344*t445*t7 - 1.*t6725*t8616);
  p_output1(14)=-1.*t1062*t1304*t1344 - 1.*t1344*t2852*t3941 - 1.*t433*t439 + 0.08953*(-1.*t1344*t2852*t3300 - 1.*t1304*t1344*t847) + t8449*t8636 + 0.183*(-1.*t439*t7 - 1.*t6725*t8636);
  p_output1(15)=t3941*t8538 + t1062*t8648 + 0.08953*(t8563 + t847*t8648) - 0.183*t6725*t8652 + t8449*t8652;
  p_output1(16)=t1062*t4351 + t3941*t8664 - 0.183*t6725*t8668 + t8449*t8668 + 0.08953*(t4351*t847 + t8678);
  p_output1(17)=-1.*t1062*t2852*t439 + t1304*t3941*t439 + t8689 + t8691 + t8698;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t3300*t8538 + 0.047*t847*t8546 + 0.08953*t8567 - 0.183*t6725*t8703 + t8449*t8703;
  p_output1(28)=-0.047*t3300*t8664 + 0.047*t847*t8711 - 0.183*t6725*t8714 + t8449*t8714 + 0.08953*t8718;
  p_output1(29)=-0.047*t1304*t3300*t439 + 0.047*t2852*t439*t847 + t8689 + t8691 + t8698;
  p_output1(30)=0.183*t2410*t439*t6725 + 0.183*t7*t8567 + 0.183*(-1.*t2410*t439*t6725 - 1.*t7*t8567);
  p_output1(31)=0.183*t439*t445*t6725 + 0.183*t7*t8718 + 0.183*(-1.*t439*t445*t6725 - 1.*t7*t8718);
  p_output1(32)=-0.183*t1344*t6725 + 0.183*t7*t8695 + 0.183*(t1344*t6725 - 1.*t7*t8695);
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


       
Eigen::Matrix<double,3,18> Jp_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



