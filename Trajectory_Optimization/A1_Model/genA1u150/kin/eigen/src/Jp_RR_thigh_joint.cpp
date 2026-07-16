/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:45 GMT-05:00
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
  double t851;
  double t2070;
  double t1653;
  double t1745;
  double t2084;
  double t1293;
  double t1927;
  double t2100;
  double t2419;
  double t2500;
  double t3368;
  double t3599;
  double t3761;
  double t89;
  double t619;
  double t4192;
  double t4486;
  double t4541;
  double t4768;
  double t273;
  double t512;
  double t526;
  double t582;
  double t1480;
  double t1599;
  double t2556;
  double t2847;
  double t2857;
  double t2983;
  double t5597;
  double t5843;
  double t5882;
  double t5925;
  double t5958;
  double t6060;
  double t4208;
  double t4361;
  double t6618;
  double t6622;
  double t6626;
  double t7353;
  double t7365;
  double t7401;
  double t7769;
  double t7826;
  double t7832;
  double t8085;
  double t8091;
  double t8105;
  double t8185;
  double t8187;
  double t8194;
  double t8211;
  double t8214;
  double t8220;
  double t8283;
  double t8305;
  double t8319;
  double t4002;
  double t8353;
  double t8358;
  double t8472;
  double t8485;
  double t8490;
  double t8615;
  double t8685;
  double t8731;
  double t8744;
  double t8759;
  double t8783;
  double t8811;
  double t8382;
  double t8498;
  double t8504;
  double t8508;
  double t8510;
  double t8535;
  double t8550;
  double t8848;
  double t8854;
  t851 = Sin(var1[3]);
  t2070 = Cos(var1[3]);
  t1653 = Cos(var1[5]);
  t1745 = Sin(var1[4]);
  t2084 = Sin(var1[5]);
  t1293 = Sin(var1[12]);
  t1927 = -1.*t1653*t851*t1745;
  t2100 = t2070*t2084;
  t2419 = t1927 + t2100;
  t2500 = Cos(var1[12]);
  t3368 = -1.*t2070*t1653;
  t3599 = -1.*t851*t1745*t2084;
  t3761 = t3368 + t3599;
  t89 = Cos(var1[13]);
  t619 = Cos(var1[4]);
  t4192 = Sin(var1[13]);
  t4486 = t2500*t2419;
  t4541 = -1.*t1293*t3761;
  t4768 = t4486 + t4541;
  t273 = -1.*t89;
  t512 = 1. + t273;
  t526 = -0.183*t512;
  t582 = 0. + t526;
  t1480 = 0.047*t1293;
  t1599 = 0. + t1480;
  t2556 = -1.*t2500;
  t2847 = 1. + t2556;
  t2857 = -0.047*t2847;
  t2983 = 0. + t2857;
  t5597 = t2070*t1653*t1745;
  t5843 = t851*t2084;
  t5882 = t5597 + t5843;
  t5925 = -1.*t1653*t851;
  t5958 = t2070*t1745*t2084;
  t6060 = t5925 + t5958;
  t4208 = -0.183*t4192;
  t4361 = 0. + t4208;
  t6618 = t2500*t5882;
  t6622 = -1.*t1293*t6060;
  t6626 = t6618 + t6622;
  t7353 = t2500*t2070*t619*t1653;
  t7365 = -1.*t2070*t619*t1293*t2084;
  t7401 = t7353 + t7365;
  t7769 = t2500*t619*t1653*t851;
  t7826 = -1.*t619*t1293*t851*t2084;
  t7832 = t7769 + t7826;
  t8085 = -1.*t2500*t1653*t1745;
  t8091 = t1293*t1745*t2084;
  t8105 = t8085 + t8091;
  t8185 = t1653*t851;
  t8187 = -1.*t2070*t1745*t2084;
  t8194 = t8185 + t8187;
  t8211 = -1.*t1293*t5882;
  t8214 = t2500*t8194;
  t8220 = t8211 + t8214;
  t8283 = t1653*t851*t1745;
  t8305 = -1.*t2070*t2084;
  t8319 = t8283 + t8305;
  t4002 = t2500*t3761;
  t8353 = -1.*t1293*t8319;
  t8358 = t8353 + t4002;
  t8472 = -1.*t619*t1653*t1293;
  t8485 = -1.*t2500*t619*t2084;
  t8490 = t8472 + t8485;
  t8615 = -1.*t2500*t6060;
  t8685 = t8211 + t8615;
  t8731 = t2070*t1653;
  t8744 = t851*t1745*t2084;
  t8759 = t8731 + t8744;
  t8783 = -1.*t2500*t8759;
  t8811 = t8353 + t8783;
  t8382 = t2500*t8319;
  t8498 = t4361*t8490;
  t8504 = 0.183*t4192*t8490;
  t8508 = t2500*t619*t1653;
  t8510 = -1.*t619*t1293*t2084;
  t8535 = t8508 + t8510;
  t8550 = -0.17458*t8535;
  t8848 = -1.*t1293*t8759;
  t8854 = t8382 + t8848;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1599*t2419 + t2983*t3761 - 0.17458*(t1293*t2419 + t4002) + t4361*t4768 - 1.*t582*t619*t851 - 0.183*(-1.*t4192*t4768 - 1.*t619*t851*t89);
  p_output1(10)=t1599*t5882 + t2983*t6060 - 0.17458*(t1293*t5882 + t2500*t6060) + t2070*t582*t619 + t4361*t6626 - 0.183*(-1.*t4192*t6626 + t2070*t619*t89);
  p_output1(11)=0;
  p_output1(12)=-1.*t1745*t2070*t582 + t1599*t1653*t2070*t619 + t2070*t2084*t2983*t619 - 0.17458*(t1293*t1653*t2070*t619 + t2070*t2084*t2500*t619) + t4361*t7401 - 0.183*(-1.*t4192*t7401 - 1.*t1745*t2070*t89);
  p_output1(13)=t4361*t7832 - 1.*t1745*t582*t851 + t1599*t1653*t619*t851 + t2084*t2983*t619*t851 - 0.17458*(t1293*t1653*t619*t851 + t2084*t2500*t619*t851) - 0.183*(-1.*t4192*t7832 - 1.*t1745*t851*t89);
  p_output1(14)=-1.*t1599*t1653*t1745 - 0.17458*(-1.*t1293*t1653*t1745 - 1.*t1745*t2084*t2500) - 1.*t1745*t2084*t2983 - 1.*t582*t619 + t4361*t8105 - 0.183*(-1.*t4192*t8105 - 1.*t619*t89);
  p_output1(15)=t2983*t5882 + t1599*t8194 - 0.17458*(t6618 + t1293*t8194) + 0.183*t4192*t8220 + t4361*t8220;
  p_output1(16)=t1599*t3761 + t2983*t8319 + 0.183*t4192*t8358 + t4361*t8358 - 0.17458*(t1293*t3761 + t8382);
  p_output1(17)=-1.*t1599*t2084*t619 + t1653*t2983*t619 + t8498 + t8504 + t8550;
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
  p_output1(36)=0.047*t2500*t5882 - 0.047*t1293*t6060 - 0.17458*t6626 + 0.183*t4192*t8685 + t4361*t8685;
  p_output1(37)=0.047*t2500*t8319 - 0.047*t1293*t8759 + 0.183*t4192*t8811 + t4361*t8811 - 0.17458*t8854;
  p_output1(38)=-0.047*t1293*t2084*t619 + 0.047*t1653*t2500*t619 + t8498 + t8504 + t8550;
  p_output1(39)=-0.183*t2070*t4192*t619 - 0.183*t6626*t89 - 0.183*(-1.*t2070*t4192*t619 - 1.*t6626*t89);
  p_output1(40)=-0.183*t4192*t619*t851 - 0.183*t8854*t89 - 0.183*(-1.*t4192*t619*t851 - 1.*t8854*t89);
  p_output1(41)=0.183*t1745*t4192 - 0.183*t8535*t89 - 0.183*(t1745*t4192 - 1.*t8535*t89);
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



