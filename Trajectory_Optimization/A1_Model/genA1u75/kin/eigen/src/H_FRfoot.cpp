/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot.h"

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
  double t99;
  double t1068;
  double t2323;
  double t1323;
  double t2363;
  double t890;
  double t969;
  double t2291;
  double t2414;
  double t2416;
  double t2658;
  double t2733;
  double t2810;
  double t3003;
  double t3017;
  double t3029;
  double t3048;
  double t383;
  double t3189;
  double t34;
  double t4484;
  double t4503;
  double t4537;
  double t4646;
  double t4653;
  double t4737;
  double t4786;
  double t4831;
  double t4858;
  double t4060;
  double t5414;
  double t5498;
  double t5544;
  double t3521;
  double t3522;
  double t3726;
  double t903;
  double t3260;
  double t3295;
  double t5088;
  double t5109;
  double t5163;
  double t4436;
  double t4929;
  double t5043;
  double t5789;
  double t5918;
  double t5923;
  double t5367;
  double t5580;
  double t5614;
  double t6156;
  double t6296;
  double t6306;
  double t7015;
  double t7030;
  double t3449;
  double t4163;
  double t4190;
  double t6485;
  double t6497;
  double t6524;
  double t6742;
  double t6761;
  double t6833;
  double t6850;
  double t6859;
  double t6907;
  double t6942;
  double t6945;
  double t6951;
  double t6981;
  double t6340;
  double t6352;
  double t6375;
  double t6992;
  double t6999;
  double t7032;
  double t7056;
  double t7065;
  double t7081;
  double t7090;
  double t7099;
  double t5075;
  double t5243;
  double t5260;
  double t6550;
  double t6553;
  double t6675;
  double t6381;
  double t6472;
  double t6478;
  double t5626;
  double t5955;
  double t5986;
  double t6682;
  double t6684;
  double t6715;
  t99 = Cos(var1[3]);
  t1068 = Cos(var1[5]);
  t2323 = Sin(var1[3]);
  t1323 = Sin(var1[4]);
  t2363 = Sin(var1[5]);
  t890 = Cos(var1[7]);
  t969 = Cos(var1[6]);
  t2291 = t99*t1068*t1323;
  t2414 = t2323*t2363;
  t2416 = t2291 + t2414;
  t2658 = t969*t2416;
  t2733 = -1.*t1068*t2323;
  t2810 = t99*t1323*t2363;
  t3003 = t2733 + t2810;
  t3017 = Sin(var1[6]);
  t3029 = -1.*t3003*t3017;
  t3048 = t2658 + t3029;
  t383 = Cos(var1[4]);
  t3189 = Sin(var1[7]);
  t34 = Cos(var1[8]);
  t4484 = t1068*t2323*t1323;
  t4503 = -1.*t99*t2363;
  t4537 = t4484 + t4503;
  t4646 = t969*t4537;
  t4653 = t99*t1068;
  t4737 = t2323*t1323*t2363;
  t4786 = t4653 + t4737;
  t4831 = -1.*t4786*t3017;
  t4858 = t4646 + t4831;
  t4060 = Sin(var1[8]);
  t5414 = t383*t1068*t969;
  t5498 = -1.*t383*t2363*t3017;
  t5544 = t5414 + t5498;
  t3521 = t890*t3048;
  t3522 = t99*t383*t3189;
  t3726 = t3521 + t3522;
  t903 = t99*t383*t890;
  t3260 = -1.*t3048*t3189;
  t3295 = t903 + t3260;
  t5088 = t890*t4858;
  t5109 = t383*t2323*t3189;
  t5163 = t5088 + t5109;
  t4436 = t383*t890*t2323;
  t4929 = -1.*t4858*t3189;
  t5043 = t4436 + t4929;
  t5789 = t890*t5544;
  t5918 = -1.*t1323*t3189;
  t5923 = t5789 + t5918;
  t5367 = -1.*t890*t1323;
  t5580 = -1.*t5544*t3189;
  t5614 = t5367 + t5580;
  t6156 = t969*t3003;
  t6296 = t2416*t3017;
  t6306 = t6156 + t6296;
  t7015 = -1.*t34;
  t7030 = 1. + t7015;
  t3449 = t34*t3295;
  t4163 = -1.*t3726*t4060;
  t4190 = t3449 + t4163;
  t6485 = t34*t3726;
  t6497 = t3295*t4060;
  t6524 = t6485 + t6497;
  t6742 = -1.*t890;
  t6761 = 1. + t6742;
  t6833 = 0.183*t6761;
  t6850 = 0. + t6833;
  t6859 = -1.*t969;
  t6907 = 1. + t6859;
  t6942 = -0.047*t6907;
  t6945 = 0. + t6942;
  t6951 = 0.047*t3017;
  t6981 = 0. + t6951;
  t6340 = t969*t4786;
  t6352 = t4537*t3017;
  t6375 = t6340 + t6352;
  t6992 = 0.183*t3189;
  t6999 = 0. + t6992;
  t7032 = 0.183*t7030;
  t7056 = 0.15*t4060;
  t7065 = 0. + t7032 + t7056;
  t7081 = -0.15*t7030;
  t7090 = 0.183*t4060;
  t7099 = 0. + t7081 + t7090;
  t5075 = t34*t5043;
  t5243 = -1.*t5163*t4060;
  t5260 = t5075 + t5243;
  t6550 = t34*t5163;
  t6553 = t5043*t4060;
  t6675 = t6550 + t6553;
  t6381 = t383*t969*t2363;
  t6472 = t383*t1068*t3017;
  t6478 = t6381 + t6472;
  t5626 = t34*t5614;
  t5955 = -1.*t5923*t4060;
  t5986 = t5626 + t5955;
  t6682 = t34*t5923;
  t6684 = t5614*t4060;
  t6715 = t6682 + t6684;

  p_output1(0)=t4190;
  p_output1(1)=t5260;
  p_output1(2)=t5986;
  p_output1(3)=0.;
  p_output1(4)=t6306;
  p_output1(5)=t6375;
  p_output1(6)=t6478;
  p_output1(7)=0.;
  p_output1(8)=t6524;
  p_output1(9)=t6675;
  p_output1(10)=t6715;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t4190 - 0.11079*t6306 - 0.3*t6524 + t3003*t6945 + t2416*t6981 + t3048*t6999 + t3295*t7065 + t3726*t7099 + t383*t6850*t99 + var1(0);
  p_output1(13)=0. + 0.183*t5260 - 0.11079*t6375 - 0.3*t6675 + t2323*t383*t6850 + t4786*t6945 + t4537*t6981 + t4858*t6999 + t5043*t7065 + t5163*t7099 + var1(1);
  p_output1(14)=0. + 0.183*t5986 - 0.11079*t6478 - 0.3*t6715 - 1.*t1323*t6850 + t2363*t383*t6945 + t1068*t383*t6981 + t5544*t6999 + t5614*t7065 + t5923*t7099 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



