/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint.h"

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
  double t3656;
  double t5197;
  double t5422;
  double t5198;
  double t5510;
  double t3949;
  double t5378;
  double t5550;
  double t5570;
  double t5642;
  double t5764;
  double t5792;
  double t5794;
  double t1564;
  double t3776;
  double t6339;
  double t6424;
  double t6425;
  double t6445;
  double t2443;
  double t2495;
  double t3511;
  double t3565;
  double t4368;
  double t4797;
  double t5659;
  double t5671;
  double t5728;
  double t5734;
  double t6597;
  double t6608;
  double t6654;
  double t6656;
  double t6700;
  double t6715;
  double t6350;
  double t6360;
  double t6772;
  double t6793;
  double t6803;
  double t9375;
  double t9383;
  double t9385;
  t3656 = Cos(var1[3]);
  t5197 = Cos(var1[5]);
  t5422 = Sin(var1[3]);
  t5198 = Sin(var1[4]);
  t5510 = Sin(var1[5]);
  t3949 = Sin(var1[15]);
  t5378 = t3656*t5197*t5198;
  t5550 = t5422*t5510;
  t5570 = t5378 + t5550;
  t5642 = Cos(var1[15]);
  t5764 = -1.*t5197*t5422;
  t5792 = t3656*t5198*t5510;
  t5794 = t5764 + t5792;
  t1564 = Cos(var1[16]);
  t3776 = Cos(var1[4]);
  t6339 = Sin(var1[16]);
  t6424 = t5642*t5570;
  t6425 = -1.*t3949*t5794;
  t6445 = t6424 + t6425;
  t2443 = -1.*t1564;
  t2495 = 1. + t2443;
  t3511 = -0.183*t2495;
  t3565 = 0. + t3511;
  t4368 = -0.047*t3949;
  t4797 = 0. + t4368;
  t5659 = -1.*t5642;
  t5671 = 1. + t5659;
  t5728 = 0.047*t5671;
  t5734 = 0. + t5728;
  t6597 = t5197*t5422*t5198;
  t6608 = -1.*t3656*t5510;
  t6654 = t6597 + t6608;
  t6656 = t3656*t5197;
  t6700 = t5422*t5198*t5510;
  t6715 = t6656 + t6700;
  t6350 = -0.183*t6339;
  t6360 = 0. + t6350;
  t6772 = t5642*t6654;
  t6793 = -1.*t3949*t6715;
  t6803 = t6772 + t6793;
  t9375 = t5642*t3776*t5197;
  t9383 = -1.*t3776*t3949*t5510;
  t9385 = t9375 + t9383;

  p_output1(0)=0. + t3565*t3656*t3776 + t4797*t5570 + t5734*t5794 + 0.13205*(t3949*t5570 + t5642*t5794) + t6360*t6445 - 0.183*(t1564*t3656*t3776 - 1.*t6339*t6445) + var1(0);
  p_output1(1)=0. + t3565*t3776*t5422 + t4797*t6654 + t5734*t6715 + 0.13205*(t3949*t6654 + t5642*t6715) + t6360*t6803 - 0.183*(t1564*t3776*t5422 - 1.*t6339*t6803) + var1(1);
  p_output1(2)=0. + t3776*t4797*t5197 - 1.*t3565*t5198 + 0.13205*(t3776*t3949*t5197 + t3776*t5510*t5642) + t3776*t5510*t5734 + t6360*t9385 - 0.183*(-1.*t1564*t5198 - 1.*t6339*t9385) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



