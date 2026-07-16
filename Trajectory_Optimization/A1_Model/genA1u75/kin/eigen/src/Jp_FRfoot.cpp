/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot.h"

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
  double t940;
  double t1538;
  double t1626;
  double t1496;
  double t1724;
  double t1126;
  double t1605;
  double t1787;
  double t1857;
  double t2051;
  double t2287;
  double t2291;
  double t2435;
  double t133;
  double t452;
  double t3513;
  double t3529;
  double t3569;
  double t3634;
  double t4229;
  double t4249;
  double t4255;
  double t4479;
  double t3895;
  double t4032;
  double t4113;
  double t5043;
  double t5087;
  double t5091;
  double t549;
  double t711;
  double t756;
  double t809;
  double t1161;
  double t1261;
  double t1378;
  double t1379;
  double t2442;
  double t2610;
  double t6595;
  double t6682;
  double t6735;
  double t6761;
  double t6833;
  double t6847;
  double t3726;
  double t3765;
  double t6951;
  double t6952;
  double t6972;
  double t4436;
  double t4484;
  double t4513;
  double t5243;
  double t5498;
  double t5918;
  double t6988;
  double t6989;
  double t6997;
  double t7006;
  double t7015;
  double t7026;
  double t7422;
  double t7429;
  double t7436;
  double t7468;
  double t7475;
  double t7539;
  double t7595;
  double t7598;
  double t7633;
  double t7903;
  double t7910;
  double t7912;
  double t7945;
  double t7985;
  double t8001;
  double t8020;
  double t8022;
  double t8034;
  double t8422;
  double t8437;
  double t8492;
  double t8597;
  double t8626;
  double t8654;
  double t8658;
  double t8659;
  double t8672;
  double t8807;
  double t8808;
  double t8820;
  double t8860;
  double t8865;
  double t8872;
  double t9096;
  double t9097;
  double t9105;
  double t3029;
  double t9166;
  double t9171;
  double t9360;
  double t9365;
  double t9368;
  double t9552;
  double t9555;
  double t9135;
  double t9780;
  double t9785;
  double t9786;
  double t9795;
  double t9800;
  double t9298;
  double t9305;
  double t9329;
  double t9359;
  double t9378;
  double t9382;
  double t9385;
  double t9397;
  double t9457;
  double t9477;
  double t9478;
  double t9481;
  double t9496;
  double t9498;
  double t9503;
  double t7032;
  double t9931;
  double t9932;
  double t9935;
  double t9789;
  double t9793;
  double t10004;
  double t10005;
  double t10015;
  double t9991;
  double t10001;
  double t10097;
  double t10119;
  double t10126;
  double t10080;
  double t10084;
  double t10087;
  double t7035;
  double t7065;
  double t9964;
  double t10194;
  double t10202;
  double t10218;
  double t10221;
  double t10224;
  double t10019;
  double t10254;
  double t10255;
  double t10256;
  double t10058;
  double t10134;
  double t10280;
  double t10281;
  double t10283;
  double t10155;
  t940 = Sin(var1[3]);
  t1538 = Cos(var1[5]);
  t1626 = Sin(var1[4]);
  t1496 = Cos(var1[3]);
  t1724 = Sin(var1[5]);
  t1126 = Cos(var1[6]);
  t1605 = -1.*t1496*t1538;
  t1787 = -1.*t940*t1626*t1724;
  t1857 = t1605 + t1787;
  t2051 = -1.*t1538*t940*t1626;
  t2287 = t1496*t1724;
  t2291 = t2051 + t2287;
  t2435 = Sin(var1[6]);
  t133 = Cos(var1[4]);
  t452 = Cos(var1[7]);
  t3513 = t1126*t2291;
  t3529 = -1.*t1857*t2435;
  t3569 = t3513 + t3529;
  t3634 = Sin(var1[7]);
  t4229 = Cos(var1[8]);
  t4249 = -1.*t4229;
  t4255 = 1. + t4249;
  t4479 = Sin(var1[8]);
  t3895 = -1.*t133*t452*t940;
  t4032 = -1.*t3569*t3634;
  t4113 = t3895 + t4032;
  t5043 = t452*t3569;
  t5087 = -1.*t133*t940*t3634;
  t5091 = t5043 + t5087;
  t549 = -1.*t452;
  t711 = 1. + t549;
  t756 = 0.183*t711;
  t809 = 0. + t756;
  t1161 = -1.*t1126;
  t1261 = 1. + t1161;
  t1378 = -0.047*t1261;
  t1379 = 0. + t1378;
  t2442 = 0.047*t2435;
  t2610 = 0. + t2442;
  t6595 = -1.*t1538*t940;
  t6682 = t1496*t1626*t1724;
  t6735 = t6595 + t6682;
  t6761 = t1496*t1538*t1626;
  t6833 = t940*t1724;
  t6847 = t6761 + t6833;
  t3726 = 0.183*t3634;
  t3765 = 0. + t3726;
  t6951 = t1126*t6847;
  t6952 = -1.*t6735*t2435;
  t6972 = t6951 + t6952;
  t4436 = 0.183*t4255;
  t4484 = 0.15*t4479;
  t4513 = 0. + t4436 + t4484;
  t5243 = -0.15*t4255;
  t5498 = 0.183*t4479;
  t5918 = 0. + t5243 + t5498;
  t6988 = t1496*t133*t452;
  t6989 = -1.*t6972*t3634;
  t6997 = t6988 + t6989;
  t7006 = t452*t6972;
  t7015 = t1496*t133*t3634;
  t7026 = t7006 + t7015;
  t7422 = t1496*t133*t1538*t1126;
  t7429 = -1.*t1496*t133*t1724*t2435;
  t7436 = t7422 + t7429;
  t7468 = -1.*t1496*t452*t1626;
  t7475 = -1.*t7436*t3634;
  t7539 = t7468 + t7475;
  t7595 = t452*t7436;
  t7598 = -1.*t1496*t1626*t3634;
  t7633 = t7595 + t7598;
  t7903 = t133*t1538*t1126*t940;
  t7910 = -1.*t133*t940*t1724*t2435;
  t7912 = t7903 + t7910;
  t7945 = -1.*t452*t940*t1626;
  t7985 = -1.*t7912*t3634;
  t8001 = t7945 + t7985;
  t8020 = t452*t7912;
  t8022 = -1.*t940*t1626*t3634;
  t8034 = t8020 + t8022;
  t8422 = -1.*t1538*t1126*t1626;
  t8437 = t1626*t1724*t2435;
  t8492 = t8422 + t8437;
  t8597 = -1.*t133*t452;
  t8626 = -1.*t8492*t3634;
  t8654 = t8597 + t8626;
  t8658 = t452*t8492;
  t8659 = -1.*t133*t3634;
  t8672 = t8658 + t8659;
  t8807 = t1538*t940;
  t8808 = -1.*t1496*t1626*t1724;
  t8820 = t8807 + t8808;
  t8860 = t1126*t8820;
  t8865 = -1.*t6847*t2435;
  t8872 = t8860 + t8865;
  t9096 = t1538*t940*t1626;
  t9097 = -1.*t1496*t1724;
  t9105 = t9096 + t9097;
  t3029 = t1126*t1857;
  t9166 = -1.*t9105*t2435;
  t9171 = t3029 + t9166;
  t9360 = -1.*t133*t1126*t1724;
  t9365 = -1.*t133*t1538*t2435;
  t9368 = t9360 + t9365;
  t9552 = -1.*t1126*t6735;
  t9555 = t9552 + t8865;
  t9135 = t1126*t9105;
  t9780 = t1496*t1538;
  t9785 = t940*t1626*t1724;
  t9786 = t9780 + t9785;
  t9795 = -1.*t1126*t9786;
  t9800 = t9795 + t9166;
  t9298 = t133*t1538*t1126;
  t9305 = -1.*t133*t1724*t2435;
  t9329 = t9298 + t9305;
  t9359 = -0.11079*t9329;
  t9378 = t9368*t3765;
  t9382 = -1.*t9368*t3634*t4513;
  t9385 = t452*t9368*t5918;
  t9397 = -1.*t4229*t9368*t3634;
  t9457 = -1.*t452*t9368*t4479;
  t9477 = t9397 + t9457;
  t9478 = 0.183*t9477;
  t9481 = t452*t4229*t9368;
  t9496 = -1.*t9368*t3634*t4479;
  t9498 = t9481 + t9496;
  t9503 = -0.3*t9498;
  t7032 = t4229*t6997;
  t9931 = -1.*t452*t6972;
  t9932 = -1.*t1496*t133*t3634;
  t9935 = t9931 + t9932;
  t9789 = -1.*t9786*t2435;
  t9793 = t9135 + t9789;
  t10004 = t133*t452*t940;
  t10005 = -1.*t9793*t3634;
  t10015 = t10004 + t10005;
  t9991 = -1.*t452*t9793;
  t10001 = t9991 + t5087;
  t10097 = -1.*t452*t1626;
  t10119 = -1.*t9329*t3634;
  t10126 = t10097 + t10119;
  t10080 = -1.*t452*t9329;
  t10084 = t1626*t3634;
  t10087 = t10080 + t10084;
  t7035 = -1.*t7026*t4479;
  t7065 = t7032 + t7035;
  t9964 = -1.*t6997*t4479;
  t10194 = 0.183*t4229;
  t10202 = -0.15*t4479;
  t10218 = t10194 + t10202;
  t10221 = 0.15*t4229;
  t10224 = t10221 + t5498;
  t10019 = t4229*t10015;
  t10254 = t452*t9793;
  t10255 = t133*t940*t3634;
  t10256 = t10254 + t10255;
  t10058 = -1.*t10015*t4479;
  t10134 = t4229*t10126;
  t10280 = t452*t9329;
  t10281 = -1.*t1626*t3634;
  t10283 = t10280 + t10281;
  t10155 = -1.*t10126*t4479;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1379*t1857 + t2291*t2610 - 0.11079*(t2291*t2435 + t3029) + t3569*t3765 + t4113*t4513 - 0.3*(t4113*t4479 + t4229*t5091) + 0.183*(t4113*t4229 - 1.*t4479*t5091) + t5091*t5918 - 1.*t133*t809*t940;
  p_output1(10)=t1379*t6735 + t2610*t6847 - 0.11079*(t1126*t6735 + t2435*t6847) + t3765*t6972 + t4513*t6997 + t5918*t7026 - 0.3*(t4479*t6997 + t4229*t7026) + 0.183*t7065 + t133*t1496*t809;
  p_output1(11)=0;
  p_output1(12)=t133*t1379*t1496*t1724 - 0.11079*(t1126*t133*t1496*t1724 + t133*t1496*t1538*t2435) + t133*t1496*t1538*t2610 + t3765*t7436 + t4513*t7539 + t5918*t7633 - 0.3*(t4479*t7539 + t4229*t7633) + 0.183*(t4229*t7539 - 1.*t4479*t7633) - 1.*t1496*t1626*t809;
  p_output1(13)=t3765*t7912 + t4513*t8001 + t5918*t8034 - 0.3*(t4479*t8001 + t4229*t8034) + 0.183*(t4229*t8001 - 1.*t4479*t8034) + t133*t1379*t1724*t940 + t133*t1538*t2610*t940 - 1.*t1626*t809*t940 - 0.11079*(t1126*t133*t1724*t940 + t133*t1538*t2435*t940);
  p_output1(14)=-1.*t1379*t1626*t1724 - 0.11079*(-1.*t1126*t1626*t1724 - 1.*t1538*t1626*t2435) - 1.*t1538*t1626*t2610 - 1.*t133*t809 + t3765*t8492 + t4513*t8654 + t5918*t8672 - 0.3*(t4479*t8654 + t4229*t8672) + 0.183*(t4229*t8654 - 1.*t4479*t8672);
  p_output1(15)=t1379*t6847 + t2610*t8820 - 0.11079*(t6951 + t2435*t8820) + t3765*t8872 - 1.*t3634*t4513*t8872 + t452*t5918*t8872 - 0.3*(-1.*t3634*t4479*t8872 + t4229*t452*t8872) + 0.183*(-1.*t3634*t4229*t8872 - 1.*t4479*t452*t8872);
  p_output1(16)=t1857*t2610 + t1379*t9105 - 0.11079*(t1857*t2435 + t9135) + t3765*t9171 - 1.*t3634*t4513*t9171 + t452*t5918*t9171 - 0.3*(-1.*t3634*t4479*t9171 + t4229*t452*t9171) + 0.183*(-1.*t3634*t4229*t9171 - 1.*t4479*t452*t9171);
  p_output1(17)=t133*t1379*t1538 - 1.*t133*t1724*t2610 + t9359 + t9378 + t9382 + t9385 + t9478 + t9503;
  p_output1(18)=-0.047*t2435*t6735 + 0.047*t1126*t6847 - 0.11079*t6972 + t3765*t9555 - 1.*t3634*t4513*t9555 + t452*t5918*t9555 - 0.3*(-1.*t3634*t4479*t9555 + t4229*t452*t9555) + 0.183*(-1.*t3634*t4229*t9555 - 1.*t4479*t452*t9555);
  p_output1(19)=0.047*t1126*t9105 - 0.047*t2435*t9786 - 0.11079*t9793 + t3765*t9800 - 1.*t3634*t4513*t9800 + t452*t5918*t9800 - 0.3*(-1.*t3634*t4479*t9800 + t4229*t452*t9800) + 0.183*(-1.*t3634*t4229*t9800 - 1.*t4479*t452*t9800);
  p_output1(20)=0.047*t1126*t133*t1538 - 0.047*t133*t1724*t2435 + t9359 + t9378 + t9382 + t9385 + t9478 + t9503;
  p_output1(21)=0.183*t133*t1496*t3634 + 0.183*t452*t6972 + t5918*t6997 + t4513*t9935 - 0.3*(t7032 + t4479*t9935) + 0.183*(t4229*t9935 + t9964);
  p_output1(22)=0.183*(t10058 + t10001*t4229) - 0.3*(t10019 + t10001*t4479) + t10001*t4513 + t10015*t5918 + 0.183*t133*t3634*t940 + 0.183*t452*t9793;
  p_output1(23)=-0.183*t1626*t3634 + 0.183*(t10155 + t10087*t4229) - 0.3*(t10134 + t10087*t4479) + t10087*t4513 + t10126*t5918 + 0.183*t452*t9329;
  p_output1(24)=t10224*t6997 + t10218*t7026 - 0.3*t7065 + 0.183*(-1.*t4229*t7026 + t9964);
  p_output1(25)=t10015*t10224 + t10218*t10256 + 0.183*(t10058 - 1.*t10256*t4229) - 0.3*(t10019 - 1.*t10256*t4479);
  p_output1(26)=t10126*t10224 + t10218*t10283 + 0.183*(t10155 - 1.*t10283*t4229) - 0.3*(t10134 - 1.*t10283*t4479);
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


       
Eigen::Matrix<double,3,18> Jp_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



