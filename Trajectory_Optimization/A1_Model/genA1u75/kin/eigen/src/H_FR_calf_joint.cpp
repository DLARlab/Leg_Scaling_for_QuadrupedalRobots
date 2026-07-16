/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint.h"

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
  double t274;
  double t683;
  double t815;
  double t729;
  double t1157;
  double t596;
  double t670;
  double t734;
  double t1253;
  double t1439;
  double t1504;
  double t1706;
  double t1840;
  double t1846;
  double t1866;
  double t1931;
  double t2178;
  double t485;
  double t2238;
  double t185;
  double t3175;
  double t3286;
  double t3318;
  double t3414;
  double t3559;
  double t3573;
  double t3715;
  double t3764;
  double t3776;
  double t2874;
  double t3983;
  double t3984;
  double t3991;
  double t2700;
  double t2843;
  double t2858;
  double t664;
  double t2258;
  double t2546;
  double t3837;
  double t3861;
  double t3883;
  double t2954;
  double t3824;
  double t3826;
  double t4137;
  double t4247;
  double t4302;
  double t3970;
  double t3994;
  double t4000;
  double t4641;
  double t4674;
  double t4695;
  double t5552;
  double t5574;
  double t2698;
  double t2893;
  double t2936;
  double t4944;
  double t4957;
  double t4967;
  double t5148;
  double t5154;
  double t5211;
  double t5248;
  double t5416;
  double t5471;
  double t5489;
  double t5490;
  double t5501;
  double t5510;
  double t4770;
  double t4835;
  double t4885;
  double t5532;
  double t5540;
  double t5604;
  double t5610;
  double t5615;
  double t5678;
  double t5700;
  double t5718;
  double t3829;
  double t3926;
  double t3932;
  double t4984;
  double t5005;
  double t5008;
  double t4904;
  double t4905;
  double t4943;
  double t4110;
  double t4422;
  double t4602;
  double t5080;
  double t5092;
  double t5100;
  t274 = Cos(var1[3]);
  t683 = Cos(var1[5]);
  t815 = Sin(var1[3]);
  t729 = Sin(var1[4]);
  t1157 = Sin(var1[5]);
  t596 = Cos(var1[7]);
  t670 = Cos(var1[6]);
  t734 = t274*t683*t729;
  t1253 = t815*t1157;
  t1439 = t734 + t1253;
  t1504 = t670*t1439;
  t1706 = -1.*t683*t815;
  t1840 = t274*t729*t1157;
  t1846 = t1706 + t1840;
  t1866 = Sin(var1[6]);
  t1931 = -1.*t1846*t1866;
  t2178 = t1504 + t1931;
  t485 = Cos(var1[4]);
  t2238 = Sin(var1[7]);
  t185 = Cos(var1[8]);
  t3175 = t683*t815*t729;
  t3286 = -1.*t274*t1157;
  t3318 = t3175 + t3286;
  t3414 = t670*t3318;
  t3559 = t274*t683;
  t3573 = t815*t729*t1157;
  t3715 = t3559 + t3573;
  t3764 = -1.*t3715*t1866;
  t3776 = t3414 + t3764;
  t2874 = Sin(var1[8]);
  t3983 = t485*t683*t670;
  t3984 = -1.*t485*t1157*t1866;
  t3991 = t3983 + t3984;
  t2700 = t596*t2178;
  t2843 = t274*t485*t2238;
  t2858 = t2700 + t2843;
  t664 = t274*t485*t596;
  t2258 = -1.*t2178*t2238;
  t2546 = t664 + t2258;
  t3837 = t596*t3776;
  t3861 = t485*t815*t2238;
  t3883 = t3837 + t3861;
  t2954 = t485*t596*t815;
  t3824 = -1.*t3776*t2238;
  t3826 = t2954 + t3824;
  t4137 = t596*t3991;
  t4247 = -1.*t729*t2238;
  t4302 = t4137 + t4247;
  t3970 = -1.*t596*t729;
  t3994 = -1.*t3991*t2238;
  t4000 = t3970 + t3994;
  t4641 = t670*t1846;
  t4674 = t1439*t1866;
  t4695 = t4641 + t4674;
  t5552 = -1.*t185;
  t5574 = 1. + t5552;
  t2698 = t185*t2546;
  t2893 = -1.*t2858*t2874;
  t2936 = t2698 + t2893;
  t4944 = t185*t2858;
  t4957 = t2546*t2874;
  t4967 = t4944 + t4957;
  t5148 = -1.*t596;
  t5154 = 1. + t5148;
  t5211 = 0.183*t5154;
  t5248 = 0. + t5211;
  t5416 = -1.*t670;
  t5471 = 1. + t5416;
  t5489 = -0.047*t5471;
  t5490 = 0. + t5489;
  t5501 = 0.047*t1866;
  t5510 = 0. + t5501;
  t4770 = t670*t3715;
  t4835 = t3318*t1866;
  t4885 = t4770 + t4835;
  t5532 = 0.183*t2238;
  t5540 = 0. + t5532;
  t5604 = 0.183*t5574;
  t5610 = 0.15*t2874;
  t5615 = 0. + t5604 + t5610;
  t5678 = -0.15*t5574;
  t5700 = 0.183*t2874;
  t5718 = 0. + t5678 + t5700;
  t3829 = t185*t3826;
  t3926 = -1.*t3883*t2874;
  t3932 = t3829 + t3926;
  t4984 = t185*t3883;
  t5005 = t3826*t2874;
  t5008 = t4984 + t5005;
  t4904 = t485*t670*t1157;
  t4905 = t485*t683*t1866;
  t4943 = t4904 + t4905;
  t4110 = t185*t4000;
  t4422 = -1.*t4302*t2874;
  t4602 = t4110 + t4422;
  t5080 = t185*t4302;
  t5092 = t4000*t2874;
  t5100 = t5080 + t5092;

  p_output1(0)=t2936;
  p_output1(1)=t3932;
  p_output1(2)=t4602;
  p_output1(3)=0.;
  p_output1(4)=t4695;
  p_output1(5)=t4885;
  p_output1(6)=t4943;
  p_output1(7)=0.;
  p_output1(8)=t4967;
  p_output1(9)=t5008;
  p_output1(10)=t5100;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2936 - 0.11079*t4695 - 0.15*t4967 + t274*t485*t5248 + t1846*t5490 + t1439*t5510 + t2178*t5540 + t2546*t5615 + t2858*t5718 + var1(0);
  p_output1(13)=0. + 0.183*t3932 - 0.11079*t4885 - 0.15*t5008 + t3715*t5490 + t3318*t5510 + t3776*t5540 + t3826*t5615 + t3883*t5718 + t485*t5248*t815 + var1(1);
  p_output1(14)=0. + 0.183*t4602 - 0.11079*t4943 - 0.15*t5100 + t1157*t485*t5490 + t3991*t5540 + t4000*t5615 + t4302*t5718 + t485*t5510*t683 - 1.*t5248*t729 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



