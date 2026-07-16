/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:12 GMT-05:00
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
  double t558;
  double t1671;
  double t2521;
  double t2337;
  double t2532;
  double t1120;
  double t1319;
  double t1379;
  double t2776;
  double t2984;
  double t2655;
  double t2688;
  double t2734;
  double t2514;
  double t2561;
  double t2620;
  double t3141;
  double t3154;
  double t3169;
  double t3122;
  double t3132;
  double t3133;
  double t2624;
  double t2829;
  double t2843;
  double t3140;
  double t3175;
  double t3216;
  double t3453;
  double t3471;
  double t3493;
  double t3971;
  double t4180;
  double t4186;
  double t1364;
  double t3013;
  double t3033;
  double t4654;
  double t4656;
  double t4665;
  double t4672;
  double t4718;
  double t4722;
  double t4731;
  double t4772;
  double t4814;
  double t4821;
  double t4189;
  double t4222;
  double t4300;
  double t4837;
  double t4874;
  double t3035;
  double t3245;
  double t3274;
  double t4340;
  double t4368;
  double t4397;
  double t3285;
  double t3496;
  double t3897;
  t558 = Cos(var1[3]);
  t1671 = Cos(var1[5]);
  t2521 = Sin(var1[3]);
  t2337 = Sin(var1[4]);
  t2532 = Sin(var1[5]);
  t1120 = Cos(var1[4]);
  t1319 = Cos(var1[7]);
  t1379 = Cos(var1[6]);
  t2776 = Sin(var1[6]);
  t2984 = Sin(var1[7]);
  t2655 = -1.*t1671*t2521;
  t2688 = t558*t2337*t2532;
  t2734 = t2655 + t2688;
  t2514 = t558*t1671*t2337;
  t2561 = t2521*t2532;
  t2620 = t2514 + t2561;
  t3141 = t558*t1671;
  t3154 = t2521*t2337*t2532;
  t3169 = t3141 + t3154;
  t3122 = t1671*t2521*t2337;
  t3132 = -1.*t558*t2532;
  t3133 = t3122 + t3132;
  t2624 = t1379*t2620;
  t2829 = -1.*t2734*t2776;
  t2843 = t2624 + t2829;
  t3140 = t1379*t3133;
  t3175 = -1.*t3169*t2776;
  t3216 = t3140 + t3175;
  t3453 = t1120*t1671*t1379;
  t3471 = -1.*t1120*t2532*t2776;
  t3493 = t3453 + t3471;
  t3971 = t1379*t2734;
  t4180 = t2620*t2776;
  t4186 = t3971 + t4180;
  t1364 = t558*t1120*t1319;
  t3013 = -1.*t2843*t2984;
  t3033 = t1364 + t3013;
  t4654 = -1.*t1319;
  t4656 = 1. + t4654;
  t4665 = 0.183*t4656;
  t4672 = 0. + t4665;
  t4718 = -1.*t1379;
  t4722 = 1. + t4718;
  t4731 = -0.047*t4722;
  t4772 = 0. + t4731;
  t4814 = 0.047*t2776;
  t4821 = 0. + t4814;
  t4189 = t1379*t3169;
  t4222 = t3133*t2776;
  t4300 = t4189 + t4222;
  t4837 = 0.183*t2984;
  t4874 = 0. + t4837;
  t3035 = t1120*t1319*t2521;
  t3245 = -1.*t3216*t2984;
  t3274 = t3035 + t3245;
  t4340 = t1120*t1379*t2532;
  t4368 = t1120*t1671*t2776;
  t4397 = t4340 + t4368;
  t3285 = -1.*t1319*t2337;
  t3496 = -1.*t3493*t2984;
  t3897 = t3285 + t3496;

  p_output1(0)=t3033;
  p_output1(1)=t3274;
  p_output1(2)=t3897;
  p_output1(3)=0.;
  p_output1(4)=t4186;
  p_output1(5)=t4300;
  p_output1(6)=t4397;
  p_output1(7)=0.;
  p_output1(8)=t1319*t2843 + t1120*t2984*t558;
  p_output1(9)=t1120*t2521*t2984 + t1319*t3216;
  p_output1(10)=-1.*t2337*t2984 + t1319*t3493;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3033 - 0.13205*t4186 + t2734*t4772 + t2620*t4821 + t2843*t4874 + t1120*t4672*t558 + var1(0);
  p_output1(13)=0. + 0.183*t3274 - 0.13205*t4300 + t1120*t2521*t4672 + t3169*t4772 + t3133*t4821 + t3216*t4874 + var1(1);
  p_output1(14)=0. + 0.183*t3897 - 0.13205*t4397 - 1.*t2337*t4672 + t1120*t2532*t4772 + t1120*t1671*t4821 + t3493*t4874 + var1(2);
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



