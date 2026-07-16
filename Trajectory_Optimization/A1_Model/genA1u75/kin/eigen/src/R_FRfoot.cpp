/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot.h"

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
  double t275;
  double t3803;
  double t5205;
  double t4537;
  double t5293;
  double t1826;
  double t3606;
  double t4646;
  double t5352;
  double t5362;
  double t5384;
  double t5453;
  double t5556;
  double t5559;
  double t5614;
  double t5617;
  double t5624;
  double t278;
  double t5626;
  double t251;
  double t6306;
  double t6340;
  double t6352;
  double t6375;
  double t6381;
  double t6472;
  double t6478;
  double t6485;
  double t6497;
  double t5986;
  double t6833;
  double t6858;
  double t6942;
  double t5688;
  double t5703;
  double t5789;
  double t2950;
  double t5647;
  double t5650;
  double t6553;
  double t6675;
  double t6682;
  double t6296;
  double t6508;
  double t6524;
  double t6981;
  double t6986;
  double t6988;
  double t6715;
  double t6945;
  double t6949;
  t275 = Cos(var1[3]);
  t3803 = Cos(var1[5]);
  t5205 = Sin(var1[3]);
  t4537 = Sin(var1[4]);
  t5293 = Sin(var1[5]);
  t1826 = Cos(var1[7]);
  t3606 = Cos(var1[6]);
  t4646 = t275*t3803*t4537;
  t5352 = t5205*t5293;
  t5362 = t4646 + t5352;
  t5384 = t3606*t5362;
  t5453 = -1.*t3803*t5205;
  t5556 = t275*t4537*t5293;
  t5559 = t5453 + t5556;
  t5614 = Sin(var1[6]);
  t5617 = -1.*t5559*t5614;
  t5624 = t5384 + t5617;
  t278 = Cos(var1[4]);
  t5626 = Sin(var1[7]);
  t251 = Cos(var1[8]);
  t6306 = t3803*t5205*t4537;
  t6340 = -1.*t275*t5293;
  t6352 = t6306 + t6340;
  t6375 = t3606*t6352;
  t6381 = t275*t3803;
  t6472 = t5205*t4537*t5293;
  t6478 = t6381 + t6472;
  t6485 = -1.*t6478*t5614;
  t6497 = t6375 + t6485;
  t5986 = Sin(var1[8]);
  t6833 = t278*t3803*t3606;
  t6858 = -1.*t278*t5293*t5614;
  t6942 = t6833 + t6858;
  t5688 = t1826*t5624;
  t5703 = t275*t278*t5626;
  t5789 = t5688 + t5703;
  t2950 = t275*t278*t1826;
  t5647 = -1.*t5624*t5626;
  t5650 = t2950 + t5647;
  t6553 = t1826*t6497;
  t6675 = t278*t5205*t5626;
  t6682 = t6553 + t6675;
  t6296 = t278*t1826*t5205;
  t6508 = -1.*t6497*t5626;
  t6524 = t6296 + t6508;
  t6981 = t1826*t6942;
  t6986 = -1.*t4537*t5626;
  t6988 = t6981 + t6986;
  t6715 = -1.*t1826*t4537;
  t6945 = -1.*t6942*t5626;
  t6949 = t6715 + t6945;

  p_output1(0)=t251*t5650 - 1.*t5789*t5986;
  p_output1(1)=t251*t6524 - 1.*t5986*t6682;
  p_output1(2)=t251*t6949 - 1.*t5986*t6988;
  p_output1(3)=t3606*t5559 + t5362*t5614;
  p_output1(4)=t5614*t6352 + t3606*t6478;
  p_output1(5)=t278*t3606*t5293 + t278*t3803*t5614;
  p_output1(6)=t251*t5789 + t5650*t5986;
  p_output1(7)=t5986*t6524 + t251*t6682;
  p_output1(8)=t5986*t6949 + t251*t6988;
}


       
Eigen::Matrix<double,3,3> R_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



