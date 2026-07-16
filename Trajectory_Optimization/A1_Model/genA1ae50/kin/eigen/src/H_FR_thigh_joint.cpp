/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint.h"

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
  double t566;
  double t1026;
  double t1548;
  double t1090;
  double t1574;
  double t735;
  double t822;
  double t1016;
  double t2168;
  double t2236;
  double t1787;
  double t1878;
  double t2102;
  double t1251;
  double t1596;
  double t1704;
  double t2325;
  double t2379;
  double t2450;
  double t2293;
  double t2295;
  double t2310;
  double t1762;
  double t2223;
  double t2232;
  double t2313;
  double t2459;
  double t2484;
  double t2537;
  double t2541;
  double t2543;
  double t2610;
  double t2615;
  double t2677;
  double t1000;
  double t2248;
  double t2261;
  double t3017;
  double t3018;
  double t3042;
  double t3050;
  double t3076;
  double t3086;
  double t3117;
  double t3120;
  double t3151;
  double t3209;
  double t2717;
  double t2738;
  double t2835;
  double t3261;
  double t3278;
  double t2268;
  double t2491;
  double t2504;
  double t2847;
  double t2857;
  double t2892;
  double t2507;
  double t2576;
  double t2577;
  t566 = Cos(var1[3]);
  t1026 = Cos(var1[5]);
  t1548 = Sin(var1[3]);
  t1090 = Sin(var1[4]);
  t1574 = Sin(var1[5]);
  t735 = Cos(var1[4]);
  t822 = Cos(var1[7]);
  t1016 = Cos(var1[6]);
  t2168 = Sin(var1[6]);
  t2236 = Sin(var1[7]);
  t1787 = -1.*t1026*t1548;
  t1878 = t566*t1090*t1574;
  t2102 = t1787 + t1878;
  t1251 = t566*t1026*t1090;
  t1596 = t1548*t1574;
  t1704 = t1251 + t1596;
  t2325 = t566*t1026;
  t2379 = t1548*t1090*t1574;
  t2450 = t2325 + t2379;
  t2293 = t1026*t1548*t1090;
  t2295 = -1.*t566*t1574;
  t2310 = t2293 + t2295;
  t1762 = t1016*t1704;
  t2223 = -1.*t2102*t2168;
  t2232 = t1762 + t2223;
  t2313 = t1016*t2310;
  t2459 = -1.*t2450*t2168;
  t2484 = t2313 + t2459;
  t2537 = t735*t1026*t1016;
  t2541 = -1.*t735*t1574*t2168;
  t2543 = t2537 + t2541;
  t2610 = t1016*t2102;
  t2615 = t1704*t2168;
  t2677 = t2610 + t2615;
  t1000 = t566*t735*t822;
  t2248 = -1.*t2232*t2236;
  t2261 = t1000 + t2248;
  t3017 = -1.*t822;
  t3018 = 1. + t3017;
  t3042 = 0.183*t3018;
  t3050 = 0. + t3042;
  t3076 = -1.*t1016;
  t3086 = 1. + t3076;
  t3117 = -0.047*t3086;
  t3120 = 0. + t3117;
  t3151 = 0.047*t2168;
  t3209 = 0. + t3151;
  t2717 = t1016*t2450;
  t2738 = t2310*t2168;
  t2835 = t2717 + t2738;
  t3261 = 0.183*t2236;
  t3278 = 0. + t3261;
  t2268 = t735*t822*t1548;
  t2491 = -1.*t2484*t2236;
  t2504 = t2268 + t2491;
  t2847 = t735*t1016*t1574;
  t2857 = t735*t1026*t2168;
  t2892 = t2847 + t2857;
  t2507 = -1.*t822*t1090;
  t2576 = -1.*t2543*t2236;
  t2577 = t2507 + t2576;

  p_output1(0)=t2261;
  p_output1(1)=t2504;
  p_output1(2)=t2577;
  p_output1(3)=0.;
  p_output1(4)=t2677;
  p_output1(5)=t2835;
  p_output1(6)=t2892;
  p_output1(7)=0.;
  p_output1(8)=t2236*t566*t735 + t2232*t822;
  p_output1(9)=t1548*t2236*t735 + t2484*t822;
  p_output1(10)=-1.*t1090*t2236 + t2543*t822;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2261 - 0.13205*t2677 + t2102*t3120 + t1704*t3209 + t2232*t3278 + t3050*t566*t735 + var1(0);
  p_output1(13)=0. + 0.183*t2504 - 0.13205*t2835 + t2450*t3120 + t2310*t3209 + t2484*t3278 + t1548*t3050*t735 + var1(1);
  p_output1(14)=0. + 0.183*t2577 - 0.13205*t2892 - 1.*t1090*t3050 + t2543*t3278 + t1574*t3120*t735 + t1026*t3209*t735 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



