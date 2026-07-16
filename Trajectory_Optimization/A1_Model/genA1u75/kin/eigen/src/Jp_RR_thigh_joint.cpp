/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint.h"

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
  double t1325;
  double t3023;
  double t2153;
  double t2210;
  double t3053;
  double t1652;
  double t2975;
  double t3100;
  double t3442;
  double t3507;
  double t4241;
  double t4427;
  double t4481;
  double t115;
  double t1307;
  double t5023;
  double t5956;
  double t5958;
  double t5982;
  double t143;
  double t233;
  double t1158;
  double t1292;
  double t1670;
  double t1947;
  double t3681;
  double t3895;
  double t4071;
  double t4233;
  double t6032;
  double t6033;
  double t6034;
  double t6181;
  double t6741;
  double t6889;
  double t5642;
  double t5657;
  double t7888;
  double t7892;
  double t7972;
  double t8408;
  double t8433;
  double t8482;
  double t8835;
  double t8838;
  double t8849;
  double t9047;
  double t9054;
  double t9068;
  double t9184;
  double t9185;
  double t9193;
  double t9212;
  double t9214;
  double t9215;
  double t9246;
  double t9273;
  double t9288;
  double t4753;
  double t9295;
  double t9299;
  double t9389;
  double t9394;
  double t9399;
  double t9472;
  double t9473;
  double t9516;
  double t9534;
  double t9548;
  double t9557;
  double t9569;
  double t9329;
  double t9414;
  double t9422;
  double t9423;
  double t9448;
  double t9459;
  double t9462;
  double t9575;
  double t9581;
  t1325 = Sin(var1[3]);
  t3023 = Cos(var1[3]);
  t2153 = Cos(var1[5]);
  t2210 = Sin(var1[4]);
  t3053 = Sin(var1[5]);
  t1652 = Sin(var1[12]);
  t2975 = -1.*t2153*t1325*t2210;
  t3100 = t3023*t3053;
  t3442 = t2975 + t3100;
  t3507 = Cos(var1[12]);
  t4241 = -1.*t3023*t2153;
  t4427 = -1.*t1325*t2210*t3053;
  t4481 = t4241 + t4427;
  t115 = Cos(var1[13]);
  t1307 = Cos(var1[4]);
  t5023 = Sin(var1[13]);
  t5956 = t3507*t3442;
  t5958 = -1.*t1652*t4481;
  t5982 = t5956 + t5958;
  t143 = -1.*t115;
  t233 = 1. + t143;
  t1158 = -0.183*t233;
  t1292 = 0. + t1158;
  t1670 = 0.047*t1652;
  t1947 = 0. + t1670;
  t3681 = -1.*t3507;
  t3895 = 1. + t3681;
  t4071 = -0.047*t3895;
  t4233 = 0. + t4071;
  t6032 = t3023*t2153*t2210;
  t6033 = t1325*t3053;
  t6034 = t6032 + t6033;
  t6181 = -1.*t2153*t1325;
  t6741 = t3023*t2210*t3053;
  t6889 = t6181 + t6741;
  t5642 = -0.183*t5023;
  t5657 = 0. + t5642;
  t7888 = t3507*t6034;
  t7892 = -1.*t1652*t6889;
  t7972 = t7888 + t7892;
  t8408 = t3507*t3023*t1307*t2153;
  t8433 = -1.*t3023*t1307*t1652*t3053;
  t8482 = t8408 + t8433;
  t8835 = t3507*t1307*t2153*t1325;
  t8838 = -1.*t1307*t1652*t1325*t3053;
  t8849 = t8835 + t8838;
  t9047 = -1.*t3507*t2153*t2210;
  t9054 = t1652*t2210*t3053;
  t9068 = t9047 + t9054;
  t9184 = t2153*t1325;
  t9185 = -1.*t3023*t2210*t3053;
  t9193 = t9184 + t9185;
  t9212 = -1.*t1652*t6034;
  t9214 = t3507*t9193;
  t9215 = t9212 + t9214;
  t9246 = t2153*t1325*t2210;
  t9273 = -1.*t3023*t3053;
  t9288 = t9246 + t9273;
  t4753 = t3507*t4481;
  t9295 = -1.*t1652*t9288;
  t9299 = t9295 + t4753;
  t9389 = -1.*t1307*t2153*t1652;
  t9394 = -1.*t3507*t1307*t3053;
  t9399 = t9389 + t9394;
  t9472 = -1.*t3507*t6889;
  t9473 = t9212 + t9472;
  t9516 = t3023*t2153;
  t9534 = t1325*t2210*t3053;
  t9548 = t9516 + t9534;
  t9557 = -1.*t3507*t9548;
  t9569 = t9295 + t9557;
  t9329 = t3507*t9288;
  t9414 = t5657*t9399;
  t9422 = 0.183*t5023*t9399;
  t9423 = t3507*t1307*t2153;
  t9448 = -1.*t1307*t1652*t3053;
  t9459 = t9423 + t9448;
  t9462 = -0.11079*t9459;
  t9575 = -1.*t1652*t9548;
  t9581 = t9329 + t9575;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1292*t1307*t1325 + t1947*t3442 + t4233*t4481 - 0.11079*(t1652*t3442 + t4753) + t5657*t5982 - 0.183*(-1.*t115*t1307*t1325 - 1.*t5023*t5982);
  p_output1(10)=t1292*t1307*t3023 + t1947*t6034 + t4233*t6889 - 0.11079*(t1652*t6034 + t3507*t6889) + t5657*t7972 - 0.183*(t115*t1307*t3023 - 1.*t5023*t7972);
  p_output1(11)=0;
  p_output1(12)=t1307*t1947*t2153*t3023 - 1.*t1292*t2210*t3023 - 0.11079*(t1307*t1652*t2153*t3023 + t1307*t3023*t3053*t3507) + t1307*t3023*t3053*t4233 + t5657*t8482 - 0.183*(-1.*t115*t2210*t3023 - 1.*t5023*t8482);
  p_output1(13)=t1307*t1325*t1947*t2153 - 1.*t1292*t1325*t2210 - 0.11079*(t1307*t1325*t1652*t2153 + t1307*t1325*t3053*t3507) + t1307*t1325*t3053*t4233 + t5657*t8849 - 0.183*(-1.*t115*t1325*t2210 - 1.*t5023*t8849);
  p_output1(14)=-1.*t1292*t1307 - 1.*t1947*t2153*t2210 - 0.11079*(-1.*t1652*t2153*t2210 - 1.*t2210*t3053*t3507) - 1.*t2210*t3053*t4233 + t5657*t9068 - 0.183*(-1.*t115*t1307 - 1.*t5023*t9068);
  p_output1(15)=t4233*t6034 + t1947*t9193 - 0.11079*(t7888 + t1652*t9193) + 0.183*t5023*t9215 + t5657*t9215;
  p_output1(16)=t1947*t4481 + t4233*t9288 + 0.183*t5023*t9299 + t5657*t9299 - 0.11079*(t1652*t4481 + t9329);
  p_output1(17)=-1.*t1307*t1947*t3053 + t1307*t2153*t4233 + t9414 + t9422 + t9462;
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
  p_output1(36)=0.047*t3507*t6034 - 0.047*t1652*t6889 - 0.11079*t7972 + 0.183*t5023*t9473 + t5657*t9473;
  p_output1(37)=0.047*t3507*t9288 - 0.047*t1652*t9548 + 0.183*t5023*t9569 + t5657*t9569 - 0.11079*t9581;
  p_output1(38)=-0.047*t1307*t1652*t3053 + 0.047*t1307*t2153*t3507 + t9414 + t9422 + t9462;
  p_output1(39)=-0.183*t1307*t3023*t5023 - 0.183*t115*t7972 - 0.183*(-1.*t1307*t3023*t5023 - 1.*t115*t7972);
  p_output1(40)=-0.183*t1307*t1325*t5023 - 0.183*t115*t9581 - 0.183*(-1.*t1307*t1325*t5023 - 1.*t115*t9581);
  p_output1(41)=0.183*t2210*t5023 - 0.183*t115*t9459 - 0.183*(t2210*t5023 - 1.*t115*t9459);
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


       
Eigen::Matrix<double,3,18> Jp_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



