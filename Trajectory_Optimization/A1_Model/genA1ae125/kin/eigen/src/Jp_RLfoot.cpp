/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RLfoot.h"

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
  double t440;
  double t644;
  double t532;
  double t595;
  double t649;
  double t459;
  double t627;
  double t940;
  double t1052;
  double t1063;
  double t1344;
  double t1372;
  double t1414;
  double t362;
  double t1767;
  double t40;
  double t2102;
  double t2378;
  double t2390;
  double t2473;
  double t2490;
  double t2514;
  double t2543;
  double t2705;
  double t2754;
  double t2801;
  double t3450;
  double t3462;
  double t3559;
  double t137;
  double t187;
  double t226;
  double t343;
  double t482;
  double t495;
  double t1071;
  double t1118;
  double t1150;
  double t1153;
  double t5010;
  double t5018;
  double t5025;
  double t5133;
  double t5186;
  double t5249;
  double t2084;
  double t2098;
  double t2525;
  double t2561;
  double t2624;
  double t5394;
  double t5465;
  double t5487;
  double t3019;
  double t3124;
  double t3138;
  double t5523;
  double t5545;
  double t5555;
  double t5888;
  double t5998;
  double t6003;
  double t6573;
  double t6584;
  double t6585;
  double t6675;
  double t6708;
  double t6755;
  double t6757;
  double t6765;
  double t6799;
  double t7212;
  double t7233;
  double t7255;
  double t7286;
  double t7313;
  double t7337;
  double t7344;
  double t7350;
  double t7378;
  double t7717;
  double t7730;
  double t7777;
  double t7815;
  double t7822;
  double t7854;
  double t7870;
  double t7871;
  double t7875;
  double t7949;
  double t7967;
  double t7981;
  double t8008;
  double t8011;
  double t8034;
  double t8104;
  double t8107;
  double t8122;
  double t1581;
  double t8195;
  double t8197;
  double t8418;
  double t8419;
  double t8439;
  double t8527;
  double t8531;
  double t8602;
  double t8605;
  double t8609;
  double t8682;
  double t8726;
  double t8256;
  double t8456;
  double t8460;
  double t8462;
  double t8477;
  double t8478;
  double t8480;
  double t8483;
  double t8485;
  double t8486;
  double t8487;
  double t8488;
  double t8492;
  double t8493;
  double t8497;
  double t8502;
  double t8836;
  double t8847;
  double t8855;
  double t6087;
  double t8757;
  double t8759;
  double t8933;
  double t8943;
  double t8954;
  double t8962;
  double t8970;
  double t9014;
  double t9016;
  double t9022;
  double t9027;
  double t9033;
  double t9036;
  double t6044;
  double t6090;
  double t8912;
  double t9089;
  double t9095;
  double t9100;
  double t9122;
  double t9137;
  double t9159;
  double t9160;
  double t9162;
  double t8988;
  double t8993;
  double t9193;
  double t9196;
  double t9197;
  double t9049;
  double t9079;
  t440 = Sin(var1[3]);
  t644 = Cos(var1[3]);
  t532 = Cos(var1[5]);
  t595 = Sin(var1[4]);
  t649 = Sin(var1[5]);
  t459 = Sin(var1[15]);
  t627 = -1.*t532*t440*t595;
  t940 = t644*t649;
  t1052 = t627 + t940;
  t1063 = Cos(var1[15]);
  t1344 = -1.*t644*t532;
  t1372 = -1.*t440*t595*t649;
  t1414 = t1344 + t1372;
  t362 = Cos(var1[4]);
  t1767 = Sin(var1[16]);
  t40 = Cos(var1[16]);
  t2102 = t1063*t1052;
  t2378 = -1.*t459*t1414;
  t2390 = t2102 + t2378;
  t2473 = Cos(var1[17]);
  t2490 = -1.*t2473;
  t2514 = 1. + t2490;
  t2543 = Sin(var1[17]);
  t2705 = -1.*t362*t1767*t440;
  t2754 = t40*t2390;
  t2801 = t2705 + t2754;
  t3450 = -1.*t40*t362*t440;
  t3462 = -1.*t1767*t2390;
  t3559 = t3450 + t3462;
  t137 = -1.*t40;
  t187 = 1. + t137;
  t226 = -0.183*t187;
  t343 = 0. + t226;
  t482 = -0.047*t459;
  t495 = 0. + t482;
  t1071 = -1.*t1063;
  t1118 = 1. + t1071;
  t1150 = 0.047*t1118;
  t1153 = 0. + t1150;
  t5010 = t644*t532*t595;
  t5018 = t440*t649;
  t5025 = t5010 + t5018;
  t5133 = -1.*t532*t440;
  t5186 = t644*t595*t649;
  t5249 = t5133 + t5186;
  t2084 = -0.183*t1767;
  t2098 = 0. + t2084;
  t2525 = -0.25*t2514;
  t2561 = -0.183*t2543;
  t2624 = 0. + t2525 + t2561;
  t5394 = t1063*t5025;
  t5465 = -1.*t459*t5249;
  t5487 = t5394 + t5465;
  t3019 = -0.183*t2514;
  t3124 = 0.25*t2543;
  t3138 = 0. + t3019 + t3124;
  t5523 = t644*t362*t1767;
  t5545 = t40*t5487;
  t5555 = t5523 + t5545;
  t5888 = t40*t644*t362;
  t5998 = -1.*t1767*t5487;
  t6003 = t5888 + t5998;
  t6573 = t1063*t644*t362*t532;
  t6584 = -1.*t644*t362*t459*t649;
  t6585 = t6573 + t6584;
  t6675 = -1.*t644*t1767*t595;
  t6708 = t40*t6585;
  t6755 = t6675 + t6708;
  t6757 = -1.*t40*t644*t595;
  t6765 = -1.*t1767*t6585;
  t6799 = t6757 + t6765;
  t7212 = t1063*t362*t532*t440;
  t7233 = -1.*t362*t459*t440*t649;
  t7255 = t7212 + t7233;
  t7286 = -1.*t1767*t440*t595;
  t7313 = t40*t7255;
  t7337 = t7286 + t7313;
  t7344 = -1.*t40*t440*t595;
  t7350 = -1.*t1767*t7255;
  t7378 = t7344 + t7350;
  t7717 = -1.*t1063*t532*t595;
  t7730 = t459*t595*t649;
  t7777 = t7717 + t7730;
  t7815 = -1.*t362*t1767;
  t7822 = t40*t7777;
  t7854 = t7815 + t7822;
  t7870 = -1.*t40*t362;
  t7871 = -1.*t1767*t7777;
  t7875 = t7870 + t7871;
  t7949 = t532*t440;
  t7967 = -1.*t644*t595*t649;
  t7981 = t7949 + t7967;
  t8008 = -1.*t459*t5025;
  t8011 = t1063*t7981;
  t8034 = t8008 + t8011;
  t8104 = t532*t440*t595;
  t8107 = -1.*t644*t649;
  t8122 = t8104 + t8107;
  t1581 = t1063*t1414;
  t8195 = -1.*t459*t8122;
  t8197 = t8195 + t1581;
  t8418 = -1.*t362*t532*t459;
  t8419 = -1.*t1063*t362*t649;
  t8439 = t8418 + t8419;
  t8527 = -1.*t1063*t5249;
  t8531 = t8008 + t8527;
  t8602 = t644*t532;
  t8605 = t440*t595*t649;
  t8609 = t8602 + t8605;
  t8682 = -1.*t1063*t8609;
  t8726 = t8195 + t8682;
  t8256 = t1063*t8122;
  t8456 = t2098*t8439;
  t8460 = t40*t2624*t8439;
  t8462 = -1.*t1767*t3138*t8439;
  t8477 = t1063*t362*t532;
  t8478 = -1.*t362*t459*t649;
  t8480 = t8477 + t8478;
  t8483 = 0.13205*t8480;
  t8485 = -1.*t2473*t1767*t8439;
  t8486 = -1.*t40*t2543*t8439;
  t8487 = t8485 + t8486;
  t8488 = -0.183*t8487;
  t8492 = t40*t2473*t8439;
  t8493 = -1.*t1767*t2543*t8439;
  t8497 = t8492 + t8493;
  t8502 = -0.5*t8497;
  t8836 = -1.*t644*t362*t1767;
  t8847 = -1.*t40*t5487;
  t8855 = t8836 + t8847;
  t6087 = t2473*t6003;
  t8757 = -1.*t459*t8609;
  t8759 = t8256 + t8757;
  t8933 = -1.*t40*t8759;
  t8943 = t2705 + t8933;
  t8954 = t40*t362*t440;
  t8962 = -1.*t1767*t8759;
  t8970 = t8954 + t8962;
  t9014 = t1767*t595;
  t9016 = -1.*t40*t8480;
  t9022 = t9014 + t9016;
  t9027 = -1.*t40*t595;
  t9033 = -1.*t1767*t8480;
  t9036 = t9027 + t9033;
  t6044 = -1.*t2543*t5555;
  t6090 = t6044 + t6087;
  t8912 = -1.*t2543*t6003;
  t9089 = -0.183*t2473;
  t9095 = -0.25*t2543;
  t9100 = t9089 + t9095;
  t9122 = 0.25*t2473;
  t9137 = t9122 + t2561;
  t9159 = t362*t1767*t440;
  t9160 = t40*t8759;
  t9162 = t9159 + t9160;
  t8988 = t2473*t8970;
  t8993 = -1.*t2543*t8970;
  t9193 = -1.*t1767*t595;
  t9196 = t40*t8480;
  t9197 = t9193 + t9196;
  t9049 = t2473*t9036;
  t9079 = -1.*t2543*t9036;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1153*t1414 + t2098*t2390 + t2624*t2801 + t3138*t3559 - 0.183*(-1.*t2543*t2801 + t2473*t3559) - 0.5*(t2473*t2801 + t2543*t3559) - 1.*t343*t362*t440 + 0.13205*(t1581 + t1052*t459) + t1052*t495;
  p_output1(10)=t495*t5025 + t1153*t5249 + 0.13205*(t459*t5025 + t1063*t5249) + t2098*t5487 + t2624*t5555 + t3138*t6003 - 0.5*(t2473*t5555 + t2543*t6003) - 0.183*t6090 + t343*t362*t644;
  p_output1(11)=0;
  p_output1(12)=t362*t495*t532*t644 - 1.*t343*t595*t644 + t1153*t362*t644*t649 + 0.13205*(t362*t459*t532*t644 + t1063*t362*t644*t649) + t2098*t6585 + t2624*t6755 + t3138*t6799 - 0.183*(-1.*t2543*t6755 + t2473*t6799) - 0.5*(t2473*t6755 + t2543*t6799);
  p_output1(13)=t362*t440*t495*t532 - 1.*t343*t440*t595 + t1153*t362*t440*t649 + 0.13205*(t362*t440*t459*t532 + t1063*t362*t440*t649) + t2098*t7255 + t2624*t7337 + t3138*t7378 - 0.183*(-1.*t2543*t7337 + t2473*t7378) - 0.5*(t2473*t7337 + t2543*t7378);
  p_output1(14)=-1.*t343*t362 - 1.*t495*t532*t595 - 1.*t1153*t595*t649 + 0.13205*(-1.*t459*t532*t595 - 1.*t1063*t595*t649) + t2098*t7777 + t2624*t7854 + t3138*t7875 - 0.183*(-1.*t2543*t7854 + t2473*t7875) - 0.5*(t2473*t7854 + t2543*t7875);
  p_output1(15)=t1153*t5025 + t495*t7981 + 0.13205*(t5394 + t459*t7981) + t2098*t8034 - 1.*t1767*t3138*t8034 + t2624*t40*t8034 - 0.5*(-1.*t1767*t2543*t8034 + t2473*t40*t8034) - 0.183*(-1.*t1767*t2473*t8034 - 1.*t2543*t40*t8034);
  p_output1(16)=t1414*t495 + t1153*t8122 + t2098*t8197 - 1.*t1767*t3138*t8197 + t2624*t40*t8197 - 0.5*(-1.*t1767*t2543*t8197 + t2473*t40*t8197) - 0.183*(-1.*t1767*t2473*t8197 - 1.*t2543*t40*t8197) + 0.13205*(t1414*t459 + t8256);
  p_output1(17)=t1153*t362*t532 - 1.*t362*t495*t649 + t8456 + t8460 + t8462 + t8483 + t8488 + t8502;
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
  p_output1(45)=-0.047*t1063*t5025 + 0.047*t459*t5249 + 0.13205*t5487 + t2098*t8531 - 1.*t1767*t3138*t8531 + t2624*t40*t8531 - 0.5*(-1.*t1767*t2543*t8531 + t2473*t40*t8531) - 0.183*(-1.*t1767*t2473*t8531 - 1.*t2543*t40*t8531);
  p_output1(46)=-0.047*t1063*t8122 + 0.047*t459*t8609 + t2098*t8726 - 1.*t1767*t3138*t8726 + t2624*t40*t8726 - 0.5*(-1.*t1767*t2543*t8726 + t2473*t40*t8726) - 0.183*(-1.*t1767*t2473*t8726 - 1.*t2543*t40*t8726) + 0.13205*t8759;
  p_output1(47)=-0.047*t1063*t362*t532 + 0.047*t362*t459*t649 + t8456 + t8460 + t8462 + t8483 + t8488 + t8502;
  p_output1(48)=-0.183*t40*t5487 + t2624*t6003 - 0.183*t1767*t362*t644 + t3138*t8855 - 0.5*(t6087 + t2543*t8855) - 0.183*(t2473*t8855 + t8912);
  p_output1(49)=-0.183*t1767*t362*t440 - 0.183*t40*t8759 + t3138*t8943 + t2624*t8970 - 0.5*(t2543*t8943 + t8988) - 0.183*(t2473*t8943 + t8993);
  p_output1(50)=0.183*t1767*t595 - 0.183*t40*t8480 + t3138*t9022 + t2624*t9036 - 0.5*(t2543*t9022 + t9049) - 0.183*(t2473*t9022 + t9079);
  p_output1(51)=-0.5*t6090 - 0.183*(-1.*t2473*t5555 + t8912) + t5555*t9100 + t6003*t9137;
  p_output1(52)=t8970*t9137 + t9100*t9162 - 0.183*(t8993 - 1.*t2473*t9162) - 0.5*(t8988 - 1.*t2543*t9162);
  p_output1(53)=t9036*t9137 + t9100*t9197 - 0.183*(t9079 - 1.*t2473*t9197) - 0.5*(t9049 - 1.*t2543*t9197);
}


       
Eigen::Matrix<double,3,18> Jp_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



