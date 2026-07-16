/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint.h"

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
  double t325;
  double t823;
  double t1152;
  double t875;
  double t1549;
  double t703;
  double t442;
  double t504;
  double t722;
  double t904;
  double t1584;
  double t1823;
  double t1841;
  double t1939;
  double t1959;
  double t1979;
  double t1990;
  double t2048;
  double t2049;
  double t277;
  double t2200;
  double t2609;
  double t2694;
  double t2723;
  double t2815;
  double t2839;
  double t2842;
  double t2846;
  double t2853;
  double t2865;
  double t3636;
  double t3653;
  double t3673;
  double t516;
  double t2057;
  double t2075;
  double t2310;
  double t2349;
  double t2360;
  double t2533;
  double t2899;
  double t2931;
  double t3114;
  double t3148;
  double t3289;
  double t3541;
  double t3723;
  double t3731;
  double t3877;
  double t3937;
  double t4082;
  double t4617;
  double t4635;
  double t4822;
  double t6445;
  double t6457;
  double t2088;
  double t2368;
  double t2433;
  double t5174;
  double t5209;
  double t5216;
  double t5450;
  double t5461;
  double t5573;
  double t5635;
  double t5809;
  double t5907;
  double t6030;
  double t6061;
  double t6160;
  double t6199;
  double t4908;
  double t4918;
  double t4976;
  double t6270;
  double t6316;
  double t6464;
  double t6732;
  double t6733;
  double t6765;
  double t6798;
  double t6809;
  double t3028;
  double t3509;
  double t3534;
  double t5257;
  double t5353;
  double t5355;
  double t4990;
  double t5010;
  double t5028;
  double t3769;
  double t4263;
  double t4319;
  double t5405;
  double t5429;
  double t5443;
  t325 = Cos(var1[3]);
  t823 = Cos(var1[5]);
  t1152 = Sin(var1[3]);
  t875 = Sin(var1[4]);
  t1549 = Sin(var1[5]);
  t703 = Cos(var1[10]);
  t442 = Cos(var1[4]);
  t504 = Sin(var1[10]);
  t722 = Cos(var1[9]);
  t904 = t325*t823*t875;
  t1584 = t1152*t1549;
  t1823 = t904 + t1584;
  t1841 = t722*t1823;
  t1939 = Sin(var1[9]);
  t1959 = -1.*t823*t1152;
  t1979 = t325*t875*t1549;
  t1990 = t1959 + t1979;
  t2048 = -1.*t1939*t1990;
  t2049 = t1841 + t2048;
  t277 = Sin(var1[11]);
  t2200 = Cos(var1[11]);
  t2609 = t823*t1152*t875;
  t2694 = -1.*t325*t1549;
  t2723 = t2609 + t2694;
  t2815 = t722*t2723;
  t2839 = t325*t823;
  t2842 = t1152*t875*t1549;
  t2846 = t2839 + t2842;
  t2853 = -1.*t1939*t2846;
  t2865 = t2815 + t2853;
  t3636 = t722*t442*t823;
  t3653 = -1.*t442*t1939*t1549;
  t3673 = t3636 + t3653;
  t516 = t325*t442*t504;
  t2057 = t703*t2049;
  t2075 = t516 + t2057;
  t2310 = t703*t325*t442;
  t2349 = -1.*t504*t2049;
  t2360 = t2310 + t2349;
  t2533 = t442*t504*t1152;
  t2899 = t703*t2865;
  t2931 = t2533 + t2899;
  t3114 = t703*t442*t1152;
  t3148 = -1.*t504*t2865;
  t3289 = t3114 + t3148;
  t3541 = -1.*t504*t875;
  t3723 = t703*t3673;
  t3731 = t3541 + t3723;
  t3877 = -1.*t703*t875;
  t3937 = -1.*t504*t3673;
  t4082 = t3877 + t3937;
  t4617 = t1939*t1823;
  t4635 = t722*t1990;
  t4822 = t4617 + t4635;
  t6445 = -1.*t2200;
  t6457 = 1. + t6445;
  t2088 = -1.*t277*t2075;
  t2368 = t2200*t2360;
  t2433 = t2088 + t2368;
  t5174 = t2200*t2075;
  t5209 = t277*t2360;
  t5216 = t5174 + t5209;
  t5450 = -1.*t703;
  t5461 = 1. + t5450;
  t5573 = 0.183*t5461;
  t5635 = 0. + t5573;
  t5809 = -0.047*t1939;
  t5907 = 0. + t5809;
  t6030 = -1.*t722;
  t6061 = 1. + t6030;
  t6160 = 0.047*t6061;
  t6199 = 0. + t6160;
  t4908 = t1939*t2723;
  t4918 = t722*t2846;
  t4976 = t4908 + t4918;
  t6270 = 0.183*t504;
  t6316 = 0. + t6270;
  t6464 = -0.15*t6457;
  t6732 = 0.183*t277;
  t6733 = 0. + t6464 + t6732;
  t6765 = 0.183*t6457;
  t6798 = 0.15*t277;
  t6809 = 0. + t6765 + t6798;
  t3028 = -1.*t277*t2931;
  t3509 = t2200*t3289;
  t3534 = t3028 + t3509;
  t5257 = t2200*t2931;
  t5353 = t277*t3289;
  t5355 = t5257 + t5353;
  t4990 = t442*t823*t1939;
  t5010 = t722*t442*t1549;
  t5028 = t4990 + t5010;
  t3769 = -1.*t277*t3731;
  t4263 = t2200*t4082;
  t4319 = t3769 + t4263;
  t5405 = t2200*t3731;
  t5429 = t277*t4082;
  t5443 = t5405 + t5429;

  p_output1(0)=t2433;
  p_output1(1)=t3534;
  p_output1(2)=t4319;
  p_output1(3)=0.;
  p_output1(4)=t4822;
  p_output1(5)=t4976;
  p_output1(6)=t5028;
  p_output1(7)=0.;
  p_output1(8)=t5216;
  p_output1(9)=t5355;
  p_output1(10)=t5443;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2433 + 0.11079*t4822 - 0.15*t5216 + t325*t442*t5635 + t1823*t5907 + t1990*t6199 + t2049*t6316 + t2075*t6733 + t2360*t6809 + var1(0);
  p_output1(13)=0. + 0.183*t3534 + 0.11079*t4976 - 0.15*t5355 + t1152*t442*t5635 + t2723*t5907 + t2846*t6199 + t2865*t6316 + t2931*t6733 + t3289*t6809 + var1(1);
  p_output1(14)=0. + 0.183*t4319 + 0.11079*t5028 - 0.15*t5443 + t1549*t442*t6199 + t3673*t6316 + t3731*t6733 + t4082*t6809 + t442*t5907*t823 - 1.*t5635*t875 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



