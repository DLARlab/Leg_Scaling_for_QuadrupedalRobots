/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint.h"

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
  double t549;
  double t1620;
  double t2151;
  double t1827;
  double t2491;
  double t1327;
  double t2100;
  double t2855;
  double t2857;
  double t3371;
  double t3883;
  double t3924;
  double t4195;
  double t728;
  double t5021;
  double t155;
  double t5491;
  double t5498;
  double t5693;
  double t5902;
  double t6053;
  double t6271;
  double t6364;
  double t6559;
  double t6787;
  double t6807;
  double t6999;
  double t7009;
  double t7020;
  double t190;
  double t204;
  double t272;
  double t456;
  double t1419;
  double t1450;
  double t3386;
  double t3621;
  double t3635;
  double t3792;
  double t7354;
  double t7358;
  double t7361;
  double t7371;
  double t7394;
  double t7399;
  double t5347;
  double t5460;
  double t6356;
  double t6366;
  double t6529;
  double t7516;
  double t7531;
  double t7532;
  double t6856;
  double t6966;
  double t6992;
  double t7548;
  double t7592;
  double t7604;
  double t7622;
  double t7643;
  double t7652;
  double t7865;
  double t7879;
  double t7896;
  double t7968;
  double t7988;
  double t7992;
  double t8018;
  double t8043;
  double t8048;
  t549 = Cos(var1[3]);
  t1620 = Cos(var1[5]);
  t2151 = Sin(var1[3]);
  t1827 = Sin(var1[4]);
  t2491 = Sin(var1[5]);
  t1327 = Sin(var1[9]);
  t2100 = t549*t1620*t1827;
  t2855 = t2151*t2491;
  t2857 = t2100 + t2855;
  t3371 = Cos(var1[9]);
  t3883 = -1.*t1620*t2151;
  t3924 = t549*t1827*t2491;
  t4195 = t3883 + t3924;
  t728 = Cos(var1[4]);
  t5021 = Sin(var1[10]);
  t155 = Cos(var1[10]);
  t5491 = t3371*t2857;
  t5498 = -1.*t1327*t4195;
  t5693 = t5491 + t5498;
  t5902 = Cos(var1[11]);
  t6053 = -1.*t5902;
  t6271 = 1. + t6053;
  t6364 = Sin(var1[11]);
  t6559 = t549*t728*t5021;
  t6787 = t155*t5693;
  t6807 = t6559 + t6787;
  t6999 = t155*t549*t728;
  t7009 = -1.*t5021*t5693;
  t7020 = t6999 + t7009;
  t190 = -1.*t155;
  t204 = 1. + t190;
  t272 = 0.183*t204;
  t456 = 0. + t272;
  t1419 = -0.047*t1327;
  t1450 = 0. + t1419;
  t3386 = -1.*t3371;
  t3621 = 1. + t3386;
  t3635 = 0.047*t3621;
  t3792 = 0. + t3635;
  t7354 = t1620*t2151*t1827;
  t7358 = -1.*t549*t2491;
  t7361 = t7354 + t7358;
  t7371 = t549*t1620;
  t7394 = t2151*t1827*t2491;
  t7399 = t7371 + t7394;
  t5347 = 0.183*t5021;
  t5460 = 0. + t5347;
  t6356 = -0.25*t6271;
  t6366 = 0.183*t6364;
  t6529 = 0. + t6356 + t6366;
  t7516 = t3371*t7361;
  t7531 = -1.*t1327*t7399;
  t7532 = t7516 + t7531;
  t6856 = 0.183*t6271;
  t6966 = 0.25*t6364;
  t6992 = 0. + t6856 + t6966;
  t7548 = t728*t5021*t2151;
  t7592 = t155*t7532;
  t7604 = t7548 + t7592;
  t7622 = t155*t728*t2151;
  t7643 = -1.*t5021*t7532;
  t7652 = t7622 + t7643;
  t7865 = t3371*t728*t1620;
  t7879 = -1.*t728*t1327*t2491;
  t7896 = t7865 + t7879;
  t7968 = -1.*t5021*t1827;
  t7988 = t155*t7896;
  t7992 = t7968 + t7988;
  t8018 = -1.*t155*t1827;
  t8043 = -1.*t5021*t7896;
  t8048 = t8018 + t8043;

  p_output1(0)=0. + t1450*t2857 + t3792*t4195 + 0.15331*(t1327*t2857 + t3371*t4195) + t5460*t5693 + t6529*t6807 + t6992*t7020 + 0.183*(-1.*t6364*t6807 + t5902*t7020) - 0.25*(t5902*t6807 + t6364*t7020) + t456*t549*t728 + var1(0);
  p_output1(1)=0. + t2151*t456*t728 + t1450*t7361 + t3792*t7399 + 0.15331*(t1327*t7361 + t3371*t7399) + t5460*t7532 + t6529*t7604 + t6992*t7652 + 0.183*(-1.*t6364*t7604 + t5902*t7652) - 0.25*(t5902*t7604 + t6364*t7652) + var1(1);
  p_output1(2)=0. - 1.*t1827*t456 + t1450*t1620*t728 + t2491*t3792*t728 + 0.15331*(t1327*t1620*t728 + t2491*t3371*t728) + t5460*t7896 + t6529*t7992 + t6992*t8048 + 0.183*(-1.*t6364*t7992 + t5902*t8048) - 0.25*(t5902*t7992 + t6364*t8048) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



