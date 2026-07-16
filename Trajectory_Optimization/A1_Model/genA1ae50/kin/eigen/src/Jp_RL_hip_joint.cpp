/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint.h"

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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1093;
  double t2855;
  double t2712;
  double t2789;
  double t2926;
  double t2323;
  double t2794;
  double t2973;
  double t2976;
  double t2987;
  double t3107;
  double t3149;
  double t3153;
  double t445;
  double t2324;
  double t2549;
  double t3052;
  double t3066;
  double t3070;
  double t3077;
  double t3303;
  double t3314;
  double t3332;
  double t3360;
  double t3369;
  double t3378;
  double t3970;
  double t4014;
  double t4048;
  double t4445;
  double t4457;
  double t4465;
  double t4352;
  double t4599;
  double t5102;
  double t5143;
  double t5145;
  double t4701;
  double t4798;
  double t4799;
  double t4803;
  t1093 = Sin(var1[3]);
  t2855 = Cos(var1[3]);
  t2712 = Cos(var1[5]);
  t2789 = Sin(var1[4]);
  t2926 = Sin(var1[5]);
  t2323 = Sin(var1[15]);
  t2794 = -1.*t2712*t1093*t2789;
  t2973 = t2855*t2926;
  t2976 = t2794 + t2973;
  t2987 = Cos(var1[15]);
  t3107 = -1.*t2855*t2712;
  t3149 = -1.*t1093*t2789*t2926;
  t3153 = t3107 + t3149;
  t445 = Cos(var1[4]);
  t2324 = -0.047*t2323;
  t2549 = 0. + t2324;
  t3052 = -1.*t2987;
  t3066 = 1. + t3052;
  t3070 = 0.047*t3066;
  t3077 = 0. + t3070;
  t3303 = t2855*t2712*t2789;
  t3314 = t1093*t2926;
  t3332 = t3303 + t3314;
  t3360 = -1.*t2712*t1093;
  t3369 = t2855*t2789*t2926;
  t3378 = t3360 + t3369;
  t3970 = t2712*t1093;
  t4014 = -1.*t2855*t2789*t2926;
  t4048 = t3970 + t4014;
  t4445 = t2712*t1093*t2789;
  t4457 = -1.*t2855*t2926;
  t4465 = t4445 + t4457;
  t4352 = t2987*t3332;
  t4599 = t2987*t4465;
  t5102 = t2855*t2712;
  t5143 = t1093*t2789*t2926;
  t5145 = t5102 + t5143;
  t4701 = t2987*t445*t2712;
  t4798 = -1.*t445*t2323*t2926;
  t4799 = t4701 + t4798;
  t4803 = 0.047*t4799;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2549*t2976 + t3077*t3153 + 0.047*(t2323*t2976 + t2987*t3153) + 0.183*t1093*t445;
  p_output1(10)=t2549*t3332 + t3077*t3378 + 0.047*(t2323*t3332 + t2987*t3378) - 0.183*t2855*t445;
  p_output1(11)=0;
  p_output1(12)=0.183*t2789*t2855 + t2549*t2712*t2855*t445 + t2855*t2926*t3077*t445 + 0.047*(t2323*t2712*t2855*t445 + t2855*t2926*t2987*t445);
  p_output1(13)=0.183*t1093*t2789 + t1093*t2549*t2712*t445 + t1093*t2926*t3077*t445 + 0.047*(t1093*t2323*t2712*t445 + t1093*t2926*t2987*t445);
  p_output1(14)=-1.*t2549*t2712*t2789 + 0.047*(-1.*t2323*t2712*t2789 - 1.*t2789*t2926*t2987) - 1.*t2789*t2926*t3077 + 0.183*t445;
  p_output1(15)=t3077*t3332 + t2549*t4048 + 0.047*(t2323*t4048 + t4352);
  p_output1(16)=t2549*t3153 + t3077*t4465 + 0.047*(t2323*t3153 + t4599);
  p_output1(17)=-1.*t2549*t2926*t445 + t2712*t3077*t445 + t4803;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=-0.047*t2987*t3332 + 0.047*t2323*t3378 + 0.047*(-1.*t2323*t3378 + t4352);
  p_output1(46)=-0.047*t2987*t4465 + 0.047*t2323*t5145 + 0.047*(t4599 - 1.*t2323*t5145);
  p_output1(47)=0.047*t2323*t2926*t445 - 0.047*t2712*t2987*t445 + t4803;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



