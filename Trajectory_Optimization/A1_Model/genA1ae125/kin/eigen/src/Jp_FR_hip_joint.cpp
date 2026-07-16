/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint.h"

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
  double t858;
  double t3346;
  double t5684;
  double t3345;
  double t5699;
  double t1744;
  double t4341;
  double t6221;
  double t6634;
  double t8184;
  double t8283;
  double t8773;
  double t8778;
  double t800;
  double t2838;
  double t2925;
  double t3270;
  double t3319;
  double t8823;
  double t8859;
  double t9102;
  double t9133;
  double t9152;
  double t9170;
  double t9182;
  double t9184;
  double t9429;
  double t9441;
  double t9446;
  double t9474;
  double t9479;
  double t9484;
  double t9459;
  double t9492;
  double t9549;
  double t9550;
  double t9552;
  double t9524;
  double t9526;
  double t9528;
  double t9535;
  t858 = Sin(var1[3]);
  t3346 = Cos(var1[5]);
  t5684 = Sin(var1[4]);
  t3345 = Cos(var1[3]);
  t5699 = Sin(var1[5]);
  t1744 = Cos(var1[6]);
  t4341 = -1.*t3345*t3346;
  t6221 = -1.*t858*t5684*t5699;
  t6634 = t4341 + t6221;
  t8184 = -1.*t3346*t858*t5684;
  t8283 = t3345*t5699;
  t8773 = t8184 + t8283;
  t8778 = Sin(var1[6]);
  t800 = Cos(var1[4]);
  t2838 = -1.*t1744;
  t2925 = 1. + t2838;
  t3270 = -0.047*t2925;
  t3319 = 0. + t3270;
  t8823 = 0.047*t8778;
  t8859 = 0. + t8823;
  t9102 = -1.*t3346*t858;
  t9133 = t3345*t5684*t5699;
  t9152 = t9102 + t9133;
  t9170 = t3345*t3346*t5684;
  t9182 = t858*t5699;
  t9184 = t9170 + t9182;
  t9429 = t3346*t858;
  t9441 = -1.*t3345*t5684*t5699;
  t9446 = t9429 + t9441;
  t9474 = t3346*t858*t5684;
  t9479 = -1.*t3345*t5699;
  t9484 = t9474 + t9479;
  t9459 = t1744*t9184;
  t9492 = t1744*t9484;
  t9549 = t3345*t3346;
  t9550 = t858*t5684*t5699;
  t9552 = t9549 + t9550;
  t9524 = t800*t3346*t1744;
  t9526 = -1.*t800*t5699*t8778;
  t9528 = t9524 + t9526;
  t9535 = -0.047*t9528;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t3319*t6634 - 0.183*t800*t858 - 0.047*(t1744*t6634 + t8773*t8778) + t8773*t8859;
  p_output1(10)=0.183*t3345*t800 + t3319*t9152 + t8859*t9184 - 0.047*(t1744*t9152 + t8778*t9184);
  p_output1(11)=0;
  p_output1(12)=-0.183*t3345*t5684 + t3319*t3345*t5699*t800 - 0.047*(t1744*t3345*t5699*t800 + t3345*t3346*t800*t8778) + t3345*t3346*t800*t8859;
  p_output1(13)=-0.183*t5684*t858 + t3319*t5699*t800*t858 - 0.047*(t1744*t5699*t800*t858 + t3346*t800*t858*t8778) + t3346*t800*t858*t8859;
  p_output1(14)=-1.*t3319*t5684*t5699 - 0.183*t800 - 0.047*(-1.*t1744*t5684*t5699 - 1.*t3346*t5684*t8778) - 1.*t3346*t5684*t8859;
  p_output1(15)=t3319*t9184 + t8859*t9446 - 0.047*(t8778*t9446 + t9459);
  p_output1(16)=t6634*t8859 + t3319*t9484 - 0.047*(t6634*t8778 + t9492);
  p_output1(17)=t3319*t3346*t800 - 1.*t5699*t800*t8859 + t9535;
  p_output1(18)=-0.047*t8778*t9152 + 0.047*t1744*t9184 - 0.047*(-1.*t8778*t9152 + t9459);
  p_output1(19)=0.047*t1744*t9484 - 0.047*t8778*t9552 - 0.047*(t9492 - 1.*t8778*t9552);
  p_output1(20)=0.047*t1744*t3346*t800 - 0.047*t5699*t800*t8778 + t9535;
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


       
Eigen::Matrix<double,3,18> Jp_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



