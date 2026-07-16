/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot.h"

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
  double t233;
  double t3585;
  double t4421;
  double t4203;
  double t4427;
  double t3224;
  double t1456;
  double t1467;
  double t3319;
  double t4323;
  double t4501;
  double t4546;
  double t4564;
  double t4580;
  double t4625;
  double t4636;
  double t4654;
  double t4655;
  double t4657;
  double t231;
  double t4671;
  double t4684;
  double t4753;
  double t4783;
  double t4875;
  double t5031;
  double t5035;
  double t5037;
  double t5045;
  double t5138;
  double t5364;
  double t5369;
  double t5379;
  double t3069;
  double t4659;
  double t4665;
  double t4672;
  double t4673;
  double t4676;
  double t4683;
  double t5139;
  double t5180;
  double t5215;
  double t5220;
  double t5234;
  double t5362;
  double t5380;
  double t5422;
  double t5427;
  double t5433;
  double t5453;
  t233 = Cos(var1[3]);
  t3585 = Cos(var1[5]);
  t4421 = Sin(var1[3]);
  t4203 = Sin(var1[4]);
  t4427 = Sin(var1[5]);
  t3224 = Cos(var1[13]);
  t1456 = Cos(var1[4]);
  t1467 = Sin(var1[13]);
  t3319 = Cos(var1[12]);
  t4323 = t233*t3585*t4203;
  t4501 = t4421*t4427;
  t4546 = t4323 + t4501;
  t4564 = t3319*t4546;
  t4580 = Sin(var1[12]);
  t4625 = -1.*t3585*t4421;
  t4636 = t233*t4203*t4427;
  t4654 = t4625 + t4636;
  t4655 = -1.*t4580*t4654;
  t4657 = t4564 + t4655;
  t231 = Sin(var1[14]);
  t4671 = Cos(var1[14]);
  t4684 = t3585*t4421*t4203;
  t4753 = -1.*t233*t4427;
  t4783 = t4684 + t4753;
  t4875 = t3319*t4783;
  t5031 = t233*t3585;
  t5035 = t4421*t4203*t4427;
  t5037 = t5031 + t5035;
  t5045 = -1.*t4580*t5037;
  t5138 = t4875 + t5045;
  t5364 = t3319*t1456*t3585;
  t5369 = -1.*t1456*t4580*t4427;
  t5379 = t5364 + t5369;
  t3069 = t233*t1456*t1467;
  t4659 = t3224*t4657;
  t4665 = t3069 + t4659;
  t4672 = t3224*t233*t1456;
  t4673 = -1.*t1467*t4657;
  t4676 = t4672 + t4673;
  t4683 = t1456*t1467*t4421;
  t5139 = t3224*t5138;
  t5180 = t4683 + t5139;
  t5215 = t3224*t1456*t4421;
  t5220 = -1.*t1467*t5138;
  t5234 = t5215 + t5220;
  t5362 = -1.*t1467*t4203;
  t5380 = t3224*t5379;
  t5422 = t5362 + t5380;
  t5427 = -1.*t3224*t4203;
  t5433 = -1.*t1467*t5379;
  t5453 = t5427 + t5433;

  p_output1(0)=-1.*t231*t4665 + t4671*t4676;
  p_output1(1)=-1.*t231*t5180 + t4671*t5234;
  p_output1(2)=-1.*t231*t5422 + t4671*t5453;
  p_output1(3)=t4546*t4580 + t3319*t4654;
  p_output1(4)=t4580*t4783 + t3319*t5037;
  p_output1(5)=t1456*t3319*t4427 + t1456*t3585*t4580;
  p_output1(6)=t4665*t4671 + t231*t4676;
  p_output1(7)=t4671*t5180 + t231*t5234;
  p_output1(8)=t4671*t5422 + t231*t5453;
}


       
Eigen::Matrix<double,3,3> R_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



