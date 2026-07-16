/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:34 GMT-05:00
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
  double t501;
  double t870;
  double t1767;
  double t1039;
  double t1781;
  double t737;
  double t843;
  double t1115;
  double t1794;
  double t1900;
  double t1998;
  double t2081;
  double t2089;
  double t2133;
  double t2165;
  double t2191;
  double t2222;
  double t604;
  double t2356;
  double t331;
  double t3161;
  double t3227;
  double t3278;
  double t3301;
  double t3431;
  double t3439;
  double t3515;
  double t3561;
  double t3579;
  double t2816;
  double t3969;
  double t3973;
  double t4023;
  double t2459;
  double t2538;
  double t2679;
  double t760;
  double t2357;
  double t2423;
  double t3716;
  double t3722;
  double t3785;
  double t3123;
  double t3616;
  double t3683;
  double t4153;
  double t4157;
  double t4267;
  double t3907;
  double t4026;
  double t4043;
  double t4304;
  double t4341;
  double t4362;
  double t5228;
  double t5235;
  double t2444;
  double t2887;
  double t2929;
  double t4515;
  double t4595;
  double t4628;
  double t4799;
  double t4815;
  double t4833;
  double t4908;
  double t4927;
  double t4932;
  double t4934;
  double t4959;
  double t4991;
  double t5073;
  double t4369;
  double t4370;
  double t4434;
  double t5136;
  double t5144;
  double t5262;
  double t5296;
  double t5341;
  double t5365;
  double t5380;
  double t5386;
  double t3696;
  double t3849;
  double t3858;
  double t4632;
  double t4669;
  double t4709;
  double t4442;
  double t4479;
  double t4505;
  double t4050;
  double t4272;
  double t4273;
  double t4730;
  double t4760;
  double t4795;
  t501 = Cos(var1[3]);
  t870 = Cos(var1[5]);
  t1767 = Sin(var1[3]);
  t1039 = Sin(var1[4]);
  t1781 = Sin(var1[5]);
  t737 = Cos(var1[7]);
  t843 = Cos(var1[6]);
  t1115 = t501*t870*t1039;
  t1794 = t1767*t1781;
  t1900 = t1115 + t1794;
  t1998 = t843*t1900;
  t2081 = -1.*t870*t1767;
  t2089 = t501*t1039*t1781;
  t2133 = t2081 + t2089;
  t2165 = Sin(var1[6]);
  t2191 = -1.*t2133*t2165;
  t2222 = t1998 + t2191;
  t604 = Cos(var1[4]);
  t2356 = Sin(var1[7]);
  t331 = Cos(var1[8]);
  t3161 = t870*t1767*t1039;
  t3227 = -1.*t501*t1781;
  t3278 = t3161 + t3227;
  t3301 = t843*t3278;
  t3431 = t501*t870;
  t3439 = t1767*t1039*t1781;
  t3515 = t3431 + t3439;
  t3561 = -1.*t3515*t2165;
  t3579 = t3301 + t3561;
  t2816 = Sin(var1[8]);
  t3969 = t604*t870*t843;
  t3973 = -1.*t604*t1781*t2165;
  t4023 = t3969 + t3973;
  t2459 = t737*t2222;
  t2538 = t501*t604*t2356;
  t2679 = t2459 + t2538;
  t760 = t501*t604*t737;
  t2357 = -1.*t2222*t2356;
  t2423 = t760 + t2357;
  t3716 = t737*t3579;
  t3722 = t604*t1767*t2356;
  t3785 = t3716 + t3722;
  t3123 = t604*t737*t1767;
  t3616 = -1.*t3579*t2356;
  t3683 = t3123 + t3616;
  t4153 = t737*t4023;
  t4157 = -1.*t1039*t2356;
  t4267 = t4153 + t4157;
  t3907 = -1.*t737*t1039;
  t4026 = -1.*t4023*t2356;
  t4043 = t3907 + t4026;
  t4304 = t843*t2133;
  t4341 = t1900*t2165;
  t4362 = t4304 + t4341;
  t5228 = -1.*t331;
  t5235 = 1. + t5228;
  t2444 = t331*t2423;
  t2887 = -1.*t2679*t2816;
  t2929 = t2444 + t2887;
  t4515 = t331*t2679;
  t4595 = t2423*t2816;
  t4628 = t4515 + t4595;
  t4799 = -1.*t737;
  t4815 = 1. + t4799;
  t4833 = 0.183*t4815;
  t4908 = 0. + t4833;
  t4927 = -1.*t843;
  t4932 = 1. + t4927;
  t4934 = -0.047*t4932;
  t4959 = 0. + t4934;
  t4991 = 0.047*t2165;
  t5073 = 0. + t4991;
  t4369 = t843*t3515;
  t4370 = t3278*t2165;
  t4434 = t4369 + t4370;
  t5136 = 0.183*t2356;
  t5144 = 0. + t5136;
  t5262 = -0.3*t5235;
  t5296 = 0.183*t2816;
  t5341 = 0. + t5262 + t5296;
  t5365 = 0.183*t5235;
  t5380 = 0.3*t2816;
  t5386 = 0. + t5365 + t5380;
  t3696 = t331*t3683;
  t3849 = -1.*t3785*t2816;
  t3858 = t3696 + t3849;
  t4632 = t331*t3785;
  t4669 = t3683*t2816;
  t4709 = t4632 + t4669;
  t4442 = t604*t843*t1781;
  t4479 = t604*t870*t2165;
  t4505 = t4442 + t4479;
  t4050 = t331*t4043;
  t4272 = -1.*t4267*t2816;
  t4273 = t4050 + t4272;
  t4730 = t331*t4267;
  t4760 = t4043*t2816;
  t4795 = t4730 + t4760;

  p_output1(0)=t2929;
  p_output1(1)=t3858;
  p_output1(2)=t4273;
  p_output1(3)=0.;
  p_output1(4)=t4362;
  p_output1(5)=t4434;
  p_output1(6)=t4505;
  p_output1(7)=0.;
  p_output1(8)=t4628;
  p_output1(9)=t4709;
  p_output1(10)=t4795;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2929 - 0.17458*t4362 - 0.3*t4628 + t2133*t4959 + t1900*t5073 + t2222*t5144 + t2679*t5341 + t2423*t5386 + t4908*t501*t604 + var1(0);
  p_output1(13)=0. + 0.183*t3858 - 0.17458*t4434 - 0.3*t4709 + t3515*t4959 + t3278*t5073 + t3579*t5144 + t3785*t5341 + t3683*t5386 + t1767*t4908*t604 + var1(1);
  p_output1(14)=0. + 0.183*t4273 - 0.17458*t4505 - 0.3*t4795 - 1.*t1039*t4908 + t4023*t5144 + t4267*t5341 + t4043*t5386 + t1781*t4959*t604 + t5073*t604*t870 + var1(2);
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



