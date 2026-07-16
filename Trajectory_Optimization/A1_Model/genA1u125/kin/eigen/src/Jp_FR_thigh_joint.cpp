/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint.h"

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
  double t921;
  double t1839;
  double t2284;
  double t1786;
  double t2388;
  double t1144;
  double t1846;
  double t2518;
  double t2736;
  double t2926;
  double t2951;
  double t3081;
  double t3158;
  double t234;
  double t295;
  double t3734;
  double t3847;
  double t3851;
  double t3929;
  double t319;
  double t378;
  double t415;
  double t690;
  double t1162;
  double t1379;
  double t1637;
  double t1764;
  double t3174;
  double t3219;
  double t4623;
  double t4628;
  double t4664;
  double t4703;
  double t4715;
  double t4821;
  double t3945;
  double t3953;
  double t7004;
  double t7097;
  double t7107;
  double t7429;
  double t7443;
  double t7455;
  double t7611;
  double t7613;
  double t7615;
  double t7771;
  double t7777;
  double t7784;
  double t7829;
  double t7837;
  double t7840;
  double t7931;
  double t7936;
  double t7946;
  double t8024;
  double t8044;
  double t8046;
  double t3385;
  double t8164;
  double t8175;
  double t8259;
  double t8260;
  double t8326;
  double t8398;
  double t8399;
  double t8051;
  double t8447;
  double t8453;
  double t8457;
  double t8475;
  double t8481;
  double t8210;
  double t8215;
  double t8244;
  double t8256;
  double t8338;
  double t8358;
  double t8465;
  double t8466;
  t921 = Sin(var1[3]);
  t1839 = Cos(var1[5]);
  t2284 = Sin(var1[4]);
  t1786 = Cos(var1[3]);
  t2388 = Sin(var1[5]);
  t1144 = Cos(var1[6]);
  t1846 = -1.*t1786*t1839;
  t2518 = -1.*t921*t2284*t2388;
  t2736 = t1846 + t2518;
  t2926 = -1.*t1839*t921*t2284;
  t2951 = t1786*t2388;
  t3081 = t2926 + t2951;
  t3158 = Sin(var1[6]);
  t234 = Cos(var1[4]);
  t295 = Cos(var1[7]);
  t3734 = t1144*t3081;
  t3847 = -1.*t2736*t3158;
  t3851 = t3734 + t3847;
  t3929 = Sin(var1[7]);
  t319 = -1.*t295;
  t378 = 1. + t319;
  t415 = 0.183*t378;
  t690 = 0. + t415;
  t1162 = -1.*t1144;
  t1379 = 1. + t1162;
  t1637 = -0.047*t1379;
  t1764 = 0. + t1637;
  t3174 = 0.047*t3158;
  t3219 = 0. + t3174;
  t4623 = -1.*t1839*t921;
  t4628 = t1786*t2284*t2388;
  t4664 = t4623 + t4628;
  t4703 = t1786*t1839*t2284;
  t4715 = t921*t2388;
  t4821 = t4703 + t4715;
  t3945 = 0.183*t3929;
  t3953 = 0. + t3945;
  t7004 = t1144*t4821;
  t7097 = -1.*t4664*t3158;
  t7107 = t7004 + t7097;
  t7429 = t1786*t234*t1839*t1144;
  t7443 = -1.*t1786*t234*t2388*t3158;
  t7455 = t7429 + t7443;
  t7611 = t234*t1839*t1144*t921;
  t7613 = -1.*t234*t921*t2388*t3158;
  t7615 = t7611 + t7613;
  t7771 = -1.*t1839*t1144*t2284;
  t7777 = t2284*t2388*t3158;
  t7784 = t7771 + t7777;
  t7829 = t1839*t921;
  t7837 = -1.*t1786*t2284*t2388;
  t7840 = t7829 + t7837;
  t7931 = t1144*t7840;
  t7936 = -1.*t4821*t3158;
  t7946 = t7931 + t7936;
  t8024 = t1839*t921*t2284;
  t8044 = -1.*t1786*t2388;
  t8046 = t8024 + t8044;
  t3385 = t1144*t2736;
  t8164 = -1.*t8046*t3158;
  t8175 = t3385 + t8164;
  t8259 = -1.*t234*t1144*t2388;
  t8260 = -1.*t234*t1839*t3158;
  t8326 = t8259 + t8260;
  t8398 = -1.*t1144*t4664;
  t8399 = t8398 + t7936;
  t8051 = t1144*t8046;
  t8447 = t1786*t1839;
  t8453 = t921*t2284*t2388;
  t8457 = t8447 + t8453;
  t8475 = -1.*t1144*t8457;
  t8481 = t8475 + t8164;
  t8210 = t234*t1839*t1144;
  t8215 = -1.*t234*t2388*t3158;
  t8244 = t8210 + t8215;
  t8256 = -0.15331*t8244;
  t8338 = t8326*t3953;
  t8358 = -0.183*t8326*t3929;
  t8465 = -1.*t8457*t3158;
  t8466 = t8051 + t8465;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1764*t2736 + t3081*t3219 - 0.15331*(t3081*t3158 + t3385) + t3851*t3953 - 1.*t234*t690*t921 + 0.183*(-1.*t3851*t3929 - 1.*t234*t295*t921);
  p_output1(10)=t1764*t4664 + t3219*t4821 - 0.15331*(t1144*t4664 + t3158*t4821) + t1786*t234*t690 + t3953*t7107 + 0.183*(t1786*t234*t295 - 1.*t3929*t7107);
  p_output1(11)=0;
  p_output1(12)=t1764*t1786*t234*t2388 - 0.15331*(t1144*t1786*t234*t2388 + t1786*t1839*t234*t3158) + t1786*t1839*t234*t3219 - 1.*t1786*t2284*t690 + t3953*t7455 + 0.183*(-1.*t1786*t2284*t295 - 1.*t3929*t7455);
  p_output1(13)=t3953*t7615 + t1764*t234*t2388*t921 + t1839*t234*t3219*t921 - 1.*t2284*t690*t921 + 0.183*(-1.*t3929*t7615 - 1.*t2284*t295*t921) - 0.15331*(t1144*t234*t2388*t921 + t1839*t234*t3158*t921);
  p_output1(14)=-1.*t1764*t2284*t2388 - 0.15331*(-1.*t1144*t2284*t2388 - 1.*t1839*t2284*t3158) - 1.*t1839*t2284*t3219 - 1.*t234*t690 + t3953*t7784 + 0.183*(-1.*t234*t295 - 1.*t3929*t7784);
  p_output1(15)=t1764*t4821 + t3219*t7840 - 0.15331*(t7004 + t3158*t7840) - 0.183*t3929*t7946 + t3953*t7946;
  p_output1(16)=t2736*t3219 + t1764*t8046 - 0.15331*(t2736*t3158 + t8051) - 0.183*t3929*t8175 + t3953*t8175;
  p_output1(17)=t1764*t1839*t234 - 1.*t234*t2388*t3219 + t8256 + t8338 + t8358;
  p_output1(18)=-0.047*t3158*t4664 + 0.047*t1144*t4821 - 0.15331*t7107 - 0.183*t3929*t8399 + t3953*t8399;
  p_output1(19)=0.047*t1144*t8046 - 0.047*t3158*t8457 - 0.15331*t8466 - 0.183*t3929*t8481 + t3953*t8481;
  p_output1(20)=0.047*t1144*t1839*t234 - 0.047*t234*t2388*t3158 + t8256 + t8338 + t8358;
  p_output1(21)=0.183*t1786*t234*t3929 + 0.183*t295*t7107 + 0.183*(-1.*t1786*t234*t3929 - 1.*t295*t7107);
  p_output1(22)=0.183*t295*t8466 + 0.183*t234*t3929*t921 + 0.183*(-1.*t295*t8466 - 1.*t234*t3929*t921);
  p_output1(23)=-0.183*t2284*t3929 + 0.183*t295*t8244 + 0.183*(t2284*t3929 - 1.*t295*t8244);
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


       
Eigen::Matrix<double,3,18> Jp_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



