/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint.h"

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
  double t581;
  double t1580;
  double t1340;
  double t1349;
  double t1847;
  double t626;
  double t1361;
  double t1876;
  double t1928;
  double t2129;
  double t2232;
  double t2298;
  double t2305;
  double t147;
  double t459;
  double t2883;
  double t3028;
  double t3060;
  double t3089;
  double t183;
  double t218;
  double t360;
  double t433;
  double t651;
  double t704;
  double t2131;
  double t2161;
  double t2180;
  double t2200;
  double t3888;
  double t3937;
  double t4491;
  double t5413;
  double t5499;
  double t5871;
  double t2892;
  double t2966;
  double t6342;
  double t6369;
  double t6453;
  double t6943;
  double t6946;
  double t6968;
  double t7226;
  double t7239;
  double t7293;
  double t7427;
  double t7474;
  double t7502;
  double t7581;
  double t7588;
  double t7594;
  double t7626;
  double t7627;
  double t7651;
  double t7732;
  double t7755;
  double t7768;
  double t2537;
  double t7813;
  double t7834;
  double t7928;
  double t7929;
  double t7949;
  double t8084;
  double t8087;
  double t8193;
  double t8205;
  double t8213;
  double t8220;
  double t8232;
  double t7849;
  double t7961;
  double t7968;
  double t7998;
  double t8013;
  double t8054;
  double t8059;
  double t8259;
  double t8274;
  t581 = Sin(var1[3]);
  t1580 = Cos(var1[3]);
  t1340 = Cos(var1[5]);
  t1349 = Sin(var1[4]);
  t1847 = Sin(var1[5]);
  t626 = Sin(var1[15]);
  t1361 = -1.*t1340*t581*t1349;
  t1876 = t1580*t1847;
  t1928 = t1361 + t1876;
  t2129 = Cos(var1[15]);
  t2232 = -1.*t1580*t1340;
  t2298 = -1.*t581*t1349*t1847;
  t2305 = t2232 + t2298;
  t147 = Cos(var1[16]);
  t459 = Cos(var1[4]);
  t2883 = Sin(var1[16]);
  t3028 = t2129*t1928;
  t3060 = -1.*t626*t2305;
  t3089 = t3028 + t3060;
  t183 = -1.*t147;
  t218 = 1. + t183;
  t360 = -0.183*t218;
  t433 = 0. + t360;
  t651 = -0.047*t626;
  t704 = 0. + t651;
  t2131 = -1.*t2129;
  t2161 = 1. + t2131;
  t2180 = 0.047*t2161;
  t2200 = 0. + t2180;
  t3888 = t1580*t1340*t1349;
  t3937 = t581*t1847;
  t4491 = t3888 + t3937;
  t5413 = -1.*t1340*t581;
  t5499 = t1580*t1349*t1847;
  t5871 = t5413 + t5499;
  t2892 = -0.183*t2883;
  t2966 = 0. + t2892;
  t6342 = t2129*t4491;
  t6369 = -1.*t626*t5871;
  t6453 = t6342 + t6369;
  t6943 = t2129*t1580*t459*t1340;
  t6946 = -1.*t1580*t459*t626*t1847;
  t6968 = t6943 + t6946;
  t7226 = t2129*t459*t1340*t581;
  t7239 = -1.*t459*t626*t581*t1847;
  t7293 = t7226 + t7239;
  t7427 = -1.*t2129*t1340*t1349;
  t7474 = t626*t1349*t1847;
  t7502 = t7427 + t7474;
  t7581 = t1340*t581;
  t7588 = -1.*t1580*t1349*t1847;
  t7594 = t7581 + t7588;
  t7626 = -1.*t626*t4491;
  t7627 = t2129*t7594;
  t7651 = t7626 + t7627;
  t7732 = t1340*t581*t1349;
  t7755 = -1.*t1580*t1847;
  t7768 = t7732 + t7755;
  t2537 = t2129*t2305;
  t7813 = -1.*t626*t7768;
  t7834 = t7813 + t2537;
  t7928 = -1.*t459*t1340*t626;
  t7929 = -1.*t2129*t459*t1847;
  t7949 = t7928 + t7929;
  t8084 = -1.*t2129*t5871;
  t8087 = t7626 + t8084;
  t8193 = t1580*t1340;
  t8205 = t581*t1349*t1847;
  t8213 = t8193 + t8205;
  t8220 = -1.*t2129*t8213;
  t8232 = t7813 + t8220;
  t7849 = t2129*t7768;
  t7961 = t2966*t7949;
  t7968 = 0.183*t2883*t7949;
  t7998 = t2129*t459*t1340;
  t8013 = -1.*t459*t626*t1847;
  t8054 = t7998 + t8013;
  t8059 = 0.17458*t8054;
  t8259 = -1.*t626*t8213;
  t8274 = t7849 + t8259;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2200*t2305 + t2966*t3089 - 1.*t433*t459*t581 - 0.183*(-1.*t2883*t3089 - 1.*t147*t459*t581) + 0.17458*(t2537 + t1928*t626) + t1928*t704;
  p_output1(10)=t1580*t433*t459 + t2200*t5871 + 0.17458*(t2129*t5871 + t4491*t626) + t2966*t6453 - 0.183*(t147*t1580*t459 - 1.*t2883*t6453) + t4491*t704;
  p_output1(11)=0;
  p_output1(12)=-1.*t1349*t1580*t433 + t1580*t1847*t2200*t459 + 0.17458*(t1580*t1847*t2129*t459 + t1340*t1580*t459*t626) + t2966*t6968 - 0.183*(-1.*t1349*t147*t1580 - 1.*t2883*t6968) + t1340*t1580*t459*t704;
  p_output1(13)=-1.*t1349*t433*t581 + t1847*t2200*t459*t581 + 0.17458*(t1847*t2129*t459*t581 + t1340*t459*t581*t626) + t1340*t459*t581*t704 + t2966*t7293 - 0.183*(-1.*t1349*t147*t581 - 1.*t2883*t7293);
  p_output1(14)=-1.*t1349*t1847*t2200 - 1.*t433*t459 + 0.17458*(-1.*t1349*t1847*t2129 - 1.*t1340*t1349*t626) - 1.*t1340*t1349*t704 + t2966*t7502 - 0.183*(-1.*t147*t459 - 1.*t2883*t7502);
  p_output1(15)=t2200*t4491 + t704*t7594 + 0.17458*(t6342 + t626*t7594) + 0.183*t2883*t7651 + t2966*t7651;
  p_output1(16)=t2305*t704 + t2200*t7768 + 0.183*t2883*t7834 + t2966*t7834 + 0.17458*(t2305*t626 + t7849);
  p_output1(17)=t1340*t2200*t459 - 1.*t1847*t459*t704 + t7961 + t7968 + t8059;
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
  p_output1(45)=-0.047*t2129*t4491 + 0.047*t5871*t626 + 0.17458*t6453 + 0.183*t2883*t8087 + t2966*t8087;
  p_output1(46)=-0.047*t2129*t7768 + 0.047*t626*t8213 + 0.183*t2883*t8232 + t2966*t8232 + 0.17458*t8274;
  p_output1(47)=-0.047*t1340*t2129*t459 + 0.047*t1847*t459*t626 + t7961 + t7968 + t8059;
  p_output1(48)=-0.183*t1580*t2883*t459 - 0.183*t147*t6453 - 0.183*(-1.*t1580*t2883*t459 - 1.*t147*t6453);
  p_output1(49)=-0.183*t2883*t459*t581 - 0.183*t147*t8274 - 0.183*(-1.*t2883*t459*t581 - 1.*t147*t8274);
  p_output1(50)=0.183*t1349*t2883 - 0.183*t147*t8054 - 0.183*(t1349*t2883 - 1.*t147*t8054);
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



