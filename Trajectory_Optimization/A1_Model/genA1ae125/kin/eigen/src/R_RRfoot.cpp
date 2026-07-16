/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:48 GMT-05:00
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
  double t1787;
  double t2842;
  double t3093;
  double t2989;
  double t3112;
  double t2712;
  double t1860;
  double t1980;
  double t2784;
  double t3076;
  double t3233;
  double t3399;
  double t3923;
  double t4296;
  double t4343;
  double t4405;
  double t4541;
  double t4547;
  double t4605;
  double t1090;
  double t4902;
  double t5099;
  double t5102;
  double t5110;
  double t5222;
  double t5224;
  double t5261;
  double t5292;
  double t5367;
  double t5504;
  double t5748;
  double t5764;
  double t5765;
  double t2644;
  double t4610;
  double t4847;
  double t4921;
  double t4958;
  double t4959;
  double t5019;
  double t5519;
  double t5572;
  double t5616;
  double t5661;
  double t5667;
  double t5745;
  double t5841;
  double t5887;
  double t5892;
  double t5903;
  double t5904;
  t1787 = Cos(var1[3]);
  t2842 = Cos(var1[5]);
  t3093 = Sin(var1[3]);
  t2989 = Sin(var1[4]);
  t3112 = Sin(var1[5]);
  t2712 = Cos(var1[13]);
  t1860 = Cos(var1[4]);
  t1980 = Sin(var1[13]);
  t2784 = Cos(var1[12]);
  t3076 = t1787*t2842*t2989;
  t3233 = t3093*t3112;
  t3399 = t3076 + t3233;
  t3923 = t2784*t3399;
  t4296 = Sin(var1[12]);
  t4343 = -1.*t2842*t3093;
  t4405 = t1787*t2989*t3112;
  t4541 = t4343 + t4405;
  t4547 = -1.*t4296*t4541;
  t4605 = t3923 + t4547;
  t1090 = Sin(var1[14]);
  t4902 = Cos(var1[14]);
  t5099 = t2842*t3093*t2989;
  t5102 = -1.*t1787*t3112;
  t5110 = t5099 + t5102;
  t5222 = t2784*t5110;
  t5224 = t1787*t2842;
  t5261 = t3093*t2989*t3112;
  t5292 = t5224 + t5261;
  t5367 = -1.*t4296*t5292;
  t5504 = t5222 + t5367;
  t5748 = t2784*t1860*t2842;
  t5764 = -1.*t1860*t4296*t3112;
  t5765 = t5748 + t5764;
  t2644 = t1787*t1860*t1980;
  t4610 = t2712*t4605;
  t4847 = t2644 + t4610;
  t4921 = t2712*t1787*t1860;
  t4958 = -1.*t1980*t4605;
  t4959 = t4921 + t4958;
  t5019 = t1860*t1980*t3093;
  t5519 = t2712*t5504;
  t5572 = t5019 + t5519;
  t5616 = t2712*t1860*t3093;
  t5661 = -1.*t1980*t5504;
  t5667 = t5616 + t5661;
  t5745 = -1.*t1980*t2989;
  t5841 = t2712*t5765;
  t5887 = t5745 + t5841;
  t5892 = -1.*t2712*t2989;
  t5903 = -1.*t1980*t5765;
  t5904 = t5892 + t5903;

  p_output1(0)=-1.*t1090*t4847 + t4902*t4959;
  p_output1(1)=-1.*t1090*t5572 + t4902*t5667;
  p_output1(2)=-1.*t1090*t5887 + t4902*t5904;
  p_output1(3)=t3399*t4296 + t2784*t4541;
  p_output1(4)=t4296*t5110 + t2784*t5292;
  p_output1(5)=t1860*t2784*t3112 + t1860*t2842*t4296;
  p_output1(6)=t4847*t4902 + t1090*t4959;
  p_output1(7)=t4902*t5572 + t1090*t5667;
  p_output1(8)=t4902*t5887 + t1090*t5904;
}


       
Eigen::Matrix<double,3,3> R_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



