/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:15 GMT-05:00
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
  double t161;
  double t2912;
  double t4665;
  double t3537;
  double t4681;
  double t1951;
  double t4158;
  double t4907;
  double t4965;
  double t5048;
  double t5149;
  double t5180;
  double t5182;
  double t1076;
  double t5502;
  double t5563;
  double t5629;
  double t1074;
  double t5783;
  double t6170;
  double t6185;
  double t6228;
  double t6334;
  double t6653;
  double t6778;
  double t6806;
  double t5890;
  double t5990;
  double t6064;
  double t1387;
  double t1395;
  double t1482;
  double t1743;
  double t1972;
  double t2471;
  double t2686;
  double t2722;
  double t5198;
  double t5215;
  double t7271;
  double t7313;
  double t7314;
  double t7394;
  double t7409;
  double t7410;
  double t5800;
  double t5825;
  double t7491;
  double t7499;
  double t7515;
  double t6260;
  double t6342;
  double t6349;
  double t6947;
  double t6953;
  double t6987;
  double t7610;
  double t7611;
  double t7618;
  double t7531;
  double t7548;
  double t7595;
  double t7825;
  double t7829;
  double t7840;
  double t7903;
  double t7910;
  double t7931;
  double t7871;
  double t7874;
  double t7884;
  t161 = Cos(var1[3]);
  t2912 = Cos(var1[5]);
  t4665 = Sin(var1[4]);
  t3537 = Sin(var1[3]);
  t4681 = Sin(var1[5]);
  t1951 = Cos(var1[6]);
  t4158 = -1.*t2912*t3537;
  t4907 = t161*t4665*t4681;
  t4965 = t4158 + t4907;
  t5048 = t161*t2912*t4665;
  t5149 = t3537*t4681;
  t5180 = t5048 + t5149;
  t5182 = Sin(var1[6]);
  t1076 = Cos(var1[7]);
  t5502 = t1951*t5180;
  t5563 = -1.*t4965*t5182;
  t5629 = t5502 + t5563;
  t1074 = Cos(var1[4]);
  t5783 = Sin(var1[7]);
  t6170 = Cos(var1[8]);
  t6185 = -1.*t6170;
  t6228 = 1. + t6185;
  t6334 = Sin(var1[8]);
  t6653 = t161*t1074*t1076;
  t6778 = -1.*t5629*t5783;
  t6806 = t6653 + t6778;
  t5890 = t1076*t5629;
  t5990 = t161*t1074*t5783;
  t6064 = t5890 + t5990;
  t1387 = -1.*t1076;
  t1395 = 1. + t1387;
  t1482 = 0.183*t1395;
  t1743 = 0. + t1482;
  t1972 = -1.*t1951;
  t2471 = 1. + t1972;
  t2686 = -0.047*t2471;
  t2722 = 0. + t2686;
  t5198 = 0.047*t5182;
  t5215 = 0. + t5198;
  t7271 = t161*t2912;
  t7313 = t3537*t4665*t4681;
  t7314 = t7271 + t7313;
  t7394 = t2912*t3537*t4665;
  t7409 = -1.*t161*t4681;
  t7410 = t7394 + t7409;
  t5800 = 0.183*t5783;
  t5825 = 0. + t5800;
  t7491 = t1951*t7410;
  t7499 = -1.*t7314*t5182;
  t7515 = t7491 + t7499;
  t6260 = -0.25*t6228;
  t6342 = 0.183*t6334;
  t6349 = 0. + t6260 + t6342;
  t6947 = 0.183*t6228;
  t6953 = 0.25*t6334;
  t6987 = 0. + t6947 + t6953;
  t7610 = t1074*t1076*t3537;
  t7611 = -1.*t7515*t5783;
  t7618 = t7610 + t7611;
  t7531 = t1076*t7515;
  t7548 = t1074*t3537*t5783;
  t7595 = t7531 + t7548;
  t7825 = t1074*t2912*t1951;
  t7829 = -1.*t1074*t4681*t5182;
  t7840 = t7825 + t7829;
  t7903 = -1.*t1076*t4665;
  t7910 = -1.*t7840*t5783;
  t7931 = t7903 + t7910;
  t7871 = t1076*t7840;
  t7874 = -1.*t4665*t5783;
  t7884 = t7871 + t7874;

  p_output1(0)=0. + t1074*t161*t1743 + t2722*t4965 - 0.15331*(t1951*t4965 + t5180*t5182) + t5180*t5215 + t5629*t5825 + t6064*t6349 + 0.183*(-1.*t6064*t6334 + t6170*t6806) - 0.25*(t6064*t6170 + t6334*t6806) + t6806*t6987 + var1(0);
  p_output1(1)=0. + t1074*t1743*t3537 + t2722*t7314 + t5215*t7410 - 0.15331*(t1951*t7314 + t5182*t7410) + t5825*t7515 + t6349*t7595 + t6987*t7618 + 0.183*(-1.*t6334*t7595 + t6170*t7618) - 0.25*(t6170*t7595 + t6334*t7618) + var1(1);
  p_output1(2)=0. - 1.*t1743*t4665 + t1074*t2722*t4681 - 0.15331*(t1074*t1951*t4681 + t1074*t2912*t5182) + t1074*t2912*t5215 + t5825*t7840 + t6349*t7884 + t6987*t7931 + 0.183*(-1.*t6334*t7884 + t6170*t7931) - 0.25*(t6170*t7884 + t6334*t7931) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



