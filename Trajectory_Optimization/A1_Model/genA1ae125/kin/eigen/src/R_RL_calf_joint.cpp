/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1059;
  double t4522;
  double t6059;
  double t4999;
  double t6148;
  double t1776;
  double t1215;
  double t1656;
  double t3900;
  double t5035;
  double t6165;
  double t6166;
  double t6322;
  double t6332;
  double t6415;
  double t6421;
  double t6437;
  double t6444;
  double t6452;
  double t890;
  double t6559;
  double t6612;
  double t6614;
  double t6615;
  double t6619;
  double t6621;
  double t6629;
  double t6641;
  double t6648;
  double t6649;
  double t6678;
  double t6679;
  double t6684;
  double t1698;
  double t6460;
  double t6466;
  double t6563;
  double t6575;
  double t6581;
  double t6599;
  double t6651;
  double t6652;
  double t6656;
  double t6657;
  double t6659;
  double t6674;
  double t6699;
  double t6700;
  double t6712;
  double t6713;
  double t6715;
  t1059 = Cos(var1[3]);
  t4522 = Cos(var1[5]);
  t6059 = Sin(var1[3]);
  t4999 = Sin(var1[4]);
  t6148 = Sin(var1[5]);
  t1776 = Cos(var1[16]);
  t1215 = Cos(var1[4]);
  t1656 = Sin(var1[16]);
  t3900 = Cos(var1[15]);
  t5035 = t1059*t4522*t4999;
  t6165 = t6059*t6148;
  t6166 = t5035 + t6165;
  t6322 = t3900*t6166;
  t6332 = Sin(var1[15]);
  t6415 = -1.*t4522*t6059;
  t6421 = t1059*t4999*t6148;
  t6437 = t6415 + t6421;
  t6444 = -1.*t6332*t6437;
  t6452 = t6322 + t6444;
  t890 = Sin(var1[17]);
  t6559 = Cos(var1[17]);
  t6612 = t4522*t6059*t4999;
  t6614 = -1.*t1059*t6148;
  t6615 = t6612 + t6614;
  t6619 = t3900*t6615;
  t6621 = t1059*t4522;
  t6629 = t6059*t4999*t6148;
  t6641 = t6621 + t6629;
  t6648 = -1.*t6332*t6641;
  t6649 = t6619 + t6648;
  t6678 = t3900*t1215*t4522;
  t6679 = -1.*t1215*t6332*t6148;
  t6684 = t6678 + t6679;
  t1698 = t1059*t1215*t1656;
  t6460 = t1776*t6452;
  t6466 = t1698 + t6460;
  t6563 = t1776*t1059*t1215;
  t6575 = -1.*t1656*t6452;
  t6581 = t6563 + t6575;
  t6599 = t1215*t1656*t6059;
  t6651 = t1776*t6649;
  t6652 = t6599 + t6651;
  t6656 = t1776*t1215*t6059;
  t6657 = -1.*t1656*t6649;
  t6659 = t6656 + t6657;
  t6674 = -1.*t1656*t4999;
  t6699 = t1776*t6684;
  t6700 = t6674 + t6699;
  t6712 = -1.*t1776*t4999;
  t6713 = -1.*t1656*t6684;
  t6715 = t6712 + t6713;

  p_output1(0)=t6559*t6581 - 1.*t6466*t890;
  p_output1(1)=t6559*t6659 - 1.*t6652*t890;
  p_output1(2)=t6559*t6715 - 1.*t6700*t890;
  p_output1(3)=t6166*t6332 + t3900*t6437;
  p_output1(4)=t6332*t6615 + t3900*t6641;
  p_output1(5)=t1215*t3900*t6148 + t1215*t4522*t6332;
  p_output1(6)=t6466*t6559 + t6581*t890;
  p_output1(7)=t6559*t6652 + t6659*t890;
  p_output1(8)=t6559*t6700 + t6715*t890;
}


       
Eigen::Matrix<double,3,3> R_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



