/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint.h"

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
  double t2897;
  double t5851;
  double t6546;
  double t5425;
  double t7734;
  double t4434;
  double t6029;
  double t8569;
  double t8637;
  double t8648;
  double t8654;
  double t8685;
  double t8724;
  double t2108;
  double t5089;
  double t5091;
  double t5098;
  double t5368;
  double t8728;
  double t8735;
  double t8765;
  double t8768;
  double t8770;
  double t8772;
  double t8776;
  double t8782;
  double t8870;
  double t8872;
  double t8873;
  double t8906;
  double t8907;
  double t8912;
  double t8888;
  double t8921;
  double t8969;
  double t8970;
  double t8973;
  double t8934;
  double t8935;
  double t8937;
  double t8939;
  t2897 = Sin(var1[3]);
  t5851 = Cos(var1[5]);
  t6546 = Sin(var1[4]);
  t5425 = Cos(var1[3]);
  t7734 = Sin(var1[5]);
  t4434 = Cos(var1[6]);
  t6029 = -1.*t5425*t5851;
  t8569 = -1.*t2897*t6546*t7734;
  t8637 = t6029 + t8569;
  t8648 = -1.*t5851*t2897*t6546;
  t8654 = t5425*t7734;
  t8685 = t8648 + t8654;
  t8724 = Sin(var1[6]);
  t2108 = Cos(var1[4]);
  t5089 = -1.*t4434;
  t5091 = 1. + t5089;
  t5098 = -0.047*t5091;
  t5368 = 0. + t5098;
  t8728 = 0.047*t8724;
  t8735 = 0. + t8728;
  t8765 = -1.*t5851*t2897;
  t8768 = t5425*t6546*t7734;
  t8770 = t8765 + t8768;
  t8772 = t5425*t5851*t6546;
  t8776 = t2897*t7734;
  t8782 = t8772 + t8776;
  t8870 = t5851*t2897;
  t8872 = -1.*t5425*t6546*t7734;
  t8873 = t8870 + t8872;
  t8906 = t5851*t2897*t6546;
  t8907 = -1.*t5425*t7734;
  t8912 = t8906 + t8907;
  t8888 = t4434*t8782;
  t8921 = t4434*t8912;
  t8969 = t5425*t5851;
  t8970 = t2897*t6546*t7734;
  t8973 = t8969 + t8970;
  t8934 = t2108*t5851*t4434;
  t8935 = -1.*t2108*t7734*t8724;
  t8937 = t8934 + t8935;
  t8939 = -0.047*t8937;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t2108*t2897 + t5368*t8637 - 0.047*(t4434*t8637 + t8685*t8724) + t8685*t8735;
  p_output1(10)=0.183*t2108*t5425 + t5368*t8770 + t8735*t8782 - 0.047*(t4434*t8770 + t8724*t8782);
  p_output1(11)=0;
  p_output1(12)=-0.183*t5425*t6546 + t2108*t5368*t5425*t7734 - 0.047*(t2108*t4434*t5425*t7734 + t2108*t5425*t5851*t8724) + t2108*t5425*t5851*t8735;
  p_output1(13)=-0.183*t2897*t6546 + t2108*t2897*t5368*t7734 - 0.047*(t2108*t2897*t4434*t7734 + t2108*t2897*t5851*t8724) + t2108*t2897*t5851*t8735;
  p_output1(14)=-0.183*t2108 - 1.*t5368*t6546*t7734 - 0.047*(-1.*t4434*t6546*t7734 - 1.*t5851*t6546*t8724) - 1.*t5851*t6546*t8735;
  p_output1(15)=t5368*t8782 + t8735*t8873 - 0.047*(t8724*t8873 + t8888);
  p_output1(16)=t8637*t8735 + t5368*t8912 - 0.047*(t8637*t8724 + t8921);
  p_output1(17)=t2108*t5368*t5851 - 1.*t2108*t7734*t8735 + t8939;
  p_output1(18)=-0.047*t8724*t8770 + 0.047*t4434*t8782 - 0.047*(-1.*t8724*t8770 + t8888);
  p_output1(19)=0.047*t4434*t8912 - 0.047*t8724*t8973 - 0.047*(t8921 - 1.*t8724*t8973);
  p_output1(20)=0.047*t2108*t4434*t5851 - 0.047*t2108*t7734*t8724 + t8939;
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
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



