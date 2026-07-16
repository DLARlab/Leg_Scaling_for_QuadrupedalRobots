/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:27 GMT-05:00
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
  double t1079;
  double t2032;
  double t1667;
  double t1699;
  double t2080;
  double t1242;
  double t1950;
  double t2323;
  double t2346;
  double t2565;
  double t3063;
  double t3109;
  double t3266;
  double t59;
  double t1072;
  double t3931;
  double t4160;
  double t4308;
  double t4344;
  double t130;
  double t365;
  double t814;
  double t1019;
  double t1283;
  double t1286;
  double t2598;
  double t2840;
  double t2895;
  double t2952;
  double t4615;
  double t4724;
  double t4745;
  double t4820;
  double t4934;
  double t5127;
  double t4052;
  double t4143;
  double t5585;
  double t5692;
  double t5773;
  double t6269;
  double t6303;
  double t6313;
  double t7136;
  double t7214;
  double t7239;
  double t7467;
  double t7468;
  double t7483;
  double t7622;
  double t7637;
  double t7645;
  double t7717;
  double t7740;
  double t7742;
  double t7836;
  double t7841;
  double t7843;
  double t3451;
  double t7853;
  double t7855;
  double t7967;
  double t7987;
  double t7988;
  double t8081;
  double t8082;
  double t8116;
  double t8128;
  double t8132;
  double t8143;
  double t8147;
  double t7867;
  double t8008;
  double t8011;
  double t8022;
  double t8037;
  double t8038;
  double t8052;
  double t8184;
  double t8187;
  t1079 = Sin(var1[3]);
  t2032 = Cos(var1[3]);
  t1667 = Cos(var1[5]);
  t1699 = Sin(var1[4]);
  t2080 = Sin(var1[5]);
  t1242 = Sin(var1[12]);
  t1950 = -1.*t1667*t1079*t1699;
  t2323 = t2032*t2080;
  t2346 = t1950 + t2323;
  t2565 = Cos(var1[12]);
  t3063 = -1.*t2032*t1667;
  t3109 = -1.*t1079*t1699*t2080;
  t3266 = t3063 + t3109;
  t59 = Cos(var1[13]);
  t1072 = Cos(var1[4]);
  t3931 = Sin(var1[13]);
  t4160 = t2565*t2346;
  t4308 = -1.*t1242*t3266;
  t4344 = t4160 + t4308;
  t130 = -1.*t59;
  t365 = 1. + t130;
  t814 = -0.183*t365;
  t1019 = 0. + t814;
  t1283 = 0.047*t1242;
  t1286 = 0. + t1283;
  t2598 = -1.*t2565;
  t2840 = 1. + t2598;
  t2895 = -0.047*t2840;
  t2952 = 0. + t2895;
  t4615 = t2032*t1667*t1699;
  t4724 = t1079*t2080;
  t4745 = t4615 + t4724;
  t4820 = -1.*t1667*t1079;
  t4934 = t2032*t1699*t2080;
  t5127 = t4820 + t4934;
  t4052 = -0.183*t3931;
  t4143 = 0. + t4052;
  t5585 = t2565*t4745;
  t5692 = -1.*t1242*t5127;
  t5773 = t5585 + t5692;
  t6269 = t2565*t2032*t1072*t1667;
  t6303 = -1.*t2032*t1072*t1242*t2080;
  t6313 = t6269 + t6303;
  t7136 = t2565*t1072*t1667*t1079;
  t7214 = -1.*t1072*t1242*t1079*t2080;
  t7239 = t7136 + t7214;
  t7467 = -1.*t2565*t1667*t1699;
  t7468 = t1242*t1699*t2080;
  t7483 = t7467 + t7468;
  t7622 = t1667*t1079;
  t7637 = -1.*t2032*t1699*t2080;
  t7645 = t7622 + t7637;
  t7717 = -1.*t1242*t4745;
  t7740 = t2565*t7645;
  t7742 = t7717 + t7740;
  t7836 = t1667*t1079*t1699;
  t7841 = -1.*t2032*t2080;
  t7843 = t7836 + t7841;
  t3451 = t2565*t3266;
  t7853 = -1.*t1242*t7843;
  t7855 = t7853 + t3451;
  t7967 = -1.*t1072*t1667*t1242;
  t7987 = -1.*t2565*t1072*t2080;
  t7988 = t7967 + t7987;
  t8081 = -1.*t2565*t5127;
  t8082 = t7717 + t8081;
  t8116 = t2032*t1667;
  t8128 = t1079*t1699*t2080;
  t8132 = t8116 + t8128;
  t8143 = -1.*t2565*t8132;
  t8147 = t7853 + t8143;
  t7867 = t2565*t7843;
  t8008 = t4143*t7988;
  t8011 = 0.183*t3931*t7988;
  t8022 = t2565*t1072*t1667;
  t8037 = -1.*t1072*t1242*t2080;
  t8038 = t8022 + t8037;
  t8052 = -0.15331*t8038;
  t8184 = -1.*t1242*t8132;
  t8187 = t7867 + t8184;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1019*t1072*t1079 + t1286*t2346 + t2952*t3266 - 0.15331*(t1242*t2346 + t3451) + t4143*t4344 - 0.183*(-1.*t3931*t4344 - 1.*t1072*t1079*t59);
  p_output1(10)=t1019*t1072*t2032 + t1286*t4745 + t2952*t5127 - 0.15331*(t1242*t4745 + t2565*t5127) + t4143*t5773 - 0.183*(-1.*t3931*t5773 + t1072*t2032*t59);
  p_output1(11)=0;
  p_output1(12)=t1072*t1286*t1667*t2032 - 1.*t1019*t1699*t2032 - 0.15331*(t1072*t1242*t1667*t2032 + t1072*t2032*t2080*t2565) + t1072*t2032*t2080*t2952 + t4143*t6313 - 0.183*(-1.*t1699*t2032*t59 - 1.*t3931*t6313);
  p_output1(13)=t1072*t1079*t1286*t1667 - 1.*t1019*t1079*t1699 - 0.15331*(t1072*t1079*t1242*t1667 + t1072*t1079*t2080*t2565) + t1072*t1079*t2080*t2952 + t4143*t7239 - 0.183*(-1.*t1079*t1699*t59 - 1.*t3931*t7239);
  p_output1(14)=-1.*t1019*t1072 - 1.*t1286*t1667*t1699 - 0.15331*(-1.*t1242*t1667*t1699 - 1.*t1699*t2080*t2565) - 1.*t1699*t2080*t2952 + t4143*t7483 - 0.183*(-1.*t1072*t59 - 1.*t3931*t7483);
  p_output1(15)=t2952*t4745 + t1286*t7645 - 0.15331*(t5585 + t1242*t7645) + 0.183*t3931*t7742 + t4143*t7742;
  p_output1(16)=t1286*t3266 + t2952*t7843 + 0.183*t3931*t7855 + t4143*t7855 - 0.15331*(t1242*t3266 + t7867);
  p_output1(17)=-1.*t1072*t1286*t2080 + t1072*t1667*t2952 + t8008 + t8011 + t8052;
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
  p_output1(36)=0.047*t2565*t4745 - 0.047*t1242*t5127 - 0.15331*t5773 + 0.183*t3931*t8082 + t4143*t8082;
  p_output1(37)=0.047*t2565*t7843 - 0.047*t1242*t8132 + 0.183*t3931*t8147 + t4143*t8147 - 0.15331*t8187;
  p_output1(38)=-0.047*t1072*t1242*t2080 + 0.047*t1072*t1667*t2565 + t8008 + t8011 + t8052;
  p_output1(39)=-0.183*t1072*t2032*t3931 - 0.183*t5773*t59 - 0.183*(-1.*t1072*t2032*t3931 - 1.*t5773*t59);
  p_output1(40)=-0.183*t1072*t1079*t3931 - 0.183*t59*t8187 - 0.183*(-1.*t1072*t1079*t3931 - 1.*t59*t8187);
  p_output1(41)=0.183*t1699*t3931 - 0.183*t59*t8038 - 0.183*(t1699*t3931 - 1.*t59*t8038);
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



