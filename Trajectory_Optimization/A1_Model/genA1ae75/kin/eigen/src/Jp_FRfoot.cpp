/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:58 GMT-05:00
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
  double t764;
  double t1111;
  double t1177;
  double t1096;
  double t1204;
  double t905;
  double t1123;
  double t1227;
  double t1361;
  double t1796;
  double t1889;
  double t1917;
  double t2183;
  double t371;
  double t625;
  double t2819;
  double t3257;
  double t3332;
  double t3391;
  double t3969;
  double t4169;
  double t4223;
  double t4429;
  double t3516;
  double t3562;
  double t3950;
  double t4574;
  double t4590;
  double t4596;
  double t635;
  double t683;
  double t706;
  double t747;
  double t925;
  double t966;
  double t1076;
  double t1079;
  double t2245;
  double t2532;
  double t4948;
  double t4953;
  double t4957;
  double t4975;
  double t5012;
  double t5030;
  double t3459;
  double t3477;
  double t5142;
  double t5184;
  double t5282;
  double t4241;
  double t4497;
  double t4507;
  double t4597;
  double t4607;
  double t4659;
  double t5325;
  double t5335;
  double t5366;
  double t5403;
  double t5409;
  double t5417;
  double t5903;
  double t5904;
  double t5911;
  double t5944;
  double t5945;
  double t5956;
  double t5966;
  double t5973;
  double t6003;
  double t6182;
  double t6199;
  double t6200;
  double t6278;
  double t6370;
  double t6371;
  double t6436;
  double t6441;
  double t6450;
  double t6674;
  double t6679;
  double t6707;
  double t6726;
  double t6744;
  double t6746;
  double t6759;
  double t6765;
  double t6782;
  double t6897;
  double t6902;
  double t6904;
  double t6930;
  double t6931;
  double t6938;
  double t7162;
  double t7163;
  double t7172;
  double t2590;
  double t7246;
  double t7249;
  double t7415;
  double t7416;
  double t7419;
  double t7553;
  double t7554;
  double t7193;
  double t7646;
  double t7653;
  double t7663;
  double t7689;
  double t7699;
  double t7382;
  double t7391;
  double t7392;
  double t7393;
  double t7424;
  double t7428;
  double t7430;
  double t7440;
  double t7457;
  double t7460;
  double t7473;
  double t7479;
  double t7481;
  double t7489;
  double t7498;
  double t5439;
  double t7888;
  double t7900;
  double t7912;
  double t7669;
  double t7681;
  double t8251;
  double t8252;
  double t8266;
  double t8154;
  double t8214;
  double t8404;
  double t8413;
  double t8416;
  double t8377;
  double t8391;
  double t8393;
  double t5442;
  double t5470;
  double t8025;
  double t8531;
  double t8563;
  double t8571;
  double t8601;
  double t8618;
  double t8301;
  double t8677;
  double t8684;
  double t8688;
  double t8330;
  double t8421;
  double t8733;
  double t8741;
  double t8742;
  double t8455;
  t764 = Sin(var1[3]);
  t1111 = Cos(var1[5]);
  t1177 = Sin(var1[4]);
  t1096 = Cos(var1[3]);
  t1204 = Sin(var1[5]);
  t905 = Cos(var1[6]);
  t1123 = -1.*t1096*t1111;
  t1227 = -1.*t764*t1177*t1204;
  t1361 = t1123 + t1227;
  t1796 = -1.*t1111*t764*t1177;
  t1889 = t1096*t1204;
  t1917 = t1796 + t1889;
  t2183 = Sin(var1[6]);
  t371 = Cos(var1[4]);
  t625 = Cos(var1[7]);
  t2819 = t905*t1917;
  t3257 = -1.*t1361*t2183;
  t3332 = t2819 + t3257;
  t3391 = Sin(var1[7]);
  t3969 = Cos(var1[8]);
  t4169 = -1.*t3969;
  t4223 = 1. + t4169;
  t4429 = Sin(var1[8]);
  t3516 = -1.*t371*t625*t764;
  t3562 = -1.*t3332*t3391;
  t3950 = t3516 + t3562;
  t4574 = t625*t3332;
  t4590 = -1.*t371*t764*t3391;
  t4596 = t4574 + t4590;
  t635 = -1.*t625;
  t683 = 1. + t635;
  t706 = 0.183*t683;
  t747 = 0. + t706;
  t925 = -1.*t905;
  t966 = 1. + t925;
  t1076 = -0.047*t966;
  t1079 = 0. + t1076;
  t2245 = 0.047*t2183;
  t2532 = 0. + t2245;
  t4948 = -1.*t1111*t764;
  t4953 = t1096*t1177*t1204;
  t4957 = t4948 + t4953;
  t4975 = t1096*t1111*t1177;
  t5012 = t764*t1204;
  t5030 = t4975 + t5012;
  t3459 = 0.183*t3391;
  t3477 = 0. + t3459;
  t5142 = t905*t5030;
  t5184 = -1.*t4957*t2183;
  t5282 = t5142 + t5184;
  t4241 = 0.183*t4223;
  t4497 = 0.15*t4429;
  t4507 = 0. + t4241 + t4497;
  t4597 = -0.15*t4223;
  t4607 = 0.183*t4429;
  t4659 = 0. + t4597 + t4607;
  t5325 = t1096*t371*t625;
  t5335 = -1.*t5282*t3391;
  t5366 = t5325 + t5335;
  t5403 = t625*t5282;
  t5409 = t1096*t371*t3391;
  t5417 = t5403 + t5409;
  t5903 = t1096*t371*t1111*t905;
  t5904 = -1.*t1096*t371*t1204*t2183;
  t5911 = t5903 + t5904;
  t5944 = -1.*t1096*t625*t1177;
  t5945 = -1.*t5911*t3391;
  t5956 = t5944 + t5945;
  t5966 = t625*t5911;
  t5973 = -1.*t1096*t1177*t3391;
  t6003 = t5966 + t5973;
  t6182 = t371*t1111*t905*t764;
  t6199 = -1.*t371*t764*t1204*t2183;
  t6200 = t6182 + t6199;
  t6278 = -1.*t625*t764*t1177;
  t6370 = -1.*t6200*t3391;
  t6371 = t6278 + t6370;
  t6436 = t625*t6200;
  t6441 = -1.*t764*t1177*t3391;
  t6450 = t6436 + t6441;
  t6674 = -1.*t1111*t905*t1177;
  t6679 = t1177*t1204*t2183;
  t6707 = t6674 + t6679;
  t6726 = -1.*t371*t625;
  t6744 = -1.*t6707*t3391;
  t6746 = t6726 + t6744;
  t6759 = t625*t6707;
  t6765 = -1.*t371*t3391;
  t6782 = t6759 + t6765;
  t6897 = t1111*t764;
  t6902 = -1.*t1096*t1177*t1204;
  t6904 = t6897 + t6902;
  t6930 = t905*t6904;
  t6931 = -1.*t5030*t2183;
  t6938 = t6930 + t6931;
  t7162 = t1111*t764*t1177;
  t7163 = -1.*t1096*t1204;
  t7172 = t7162 + t7163;
  t2590 = t905*t1361;
  t7246 = -1.*t7172*t2183;
  t7249 = t2590 + t7246;
  t7415 = -1.*t371*t905*t1204;
  t7416 = -1.*t371*t1111*t2183;
  t7419 = t7415 + t7416;
  t7553 = -1.*t905*t4957;
  t7554 = t7553 + t6931;
  t7193 = t905*t7172;
  t7646 = t1096*t1111;
  t7653 = t764*t1177*t1204;
  t7663 = t7646 + t7653;
  t7689 = -1.*t905*t7663;
  t7699 = t7689 + t7246;
  t7382 = t371*t1111*t905;
  t7391 = -1.*t371*t1204*t2183;
  t7392 = t7382 + t7391;
  t7393 = -0.13205*t7392;
  t7424 = t7419*t3477;
  t7428 = -1.*t7419*t3391*t4507;
  t7430 = t625*t7419*t4659;
  t7440 = -1.*t3969*t7419*t3391;
  t7457 = -1.*t625*t7419*t4429;
  t7460 = t7440 + t7457;
  t7473 = 0.183*t7460;
  t7479 = t625*t3969*t7419;
  t7481 = -1.*t7419*t3391*t4429;
  t7489 = t7479 + t7481;
  t7498 = -0.3*t7489;
  t5439 = t3969*t5366;
  t7888 = -1.*t625*t5282;
  t7900 = -1.*t1096*t371*t3391;
  t7912 = t7888 + t7900;
  t7669 = -1.*t7663*t2183;
  t7681 = t7193 + t7669;
  t8251 = t371*t625*t764;
  t8252 = -1.*t7681*t3391;
  t8266 = t8251 + t8252;
  t8154 = -1.*t625*t7681;
  t8214 = t8154 + t4590;
  t8404 = -1.*t625*t1177;
  t8413 = -1.*t7392*t3391;
  t8416 = t8404 + t8413;
  t8377 = -1.*t625*t7392;
  t8391 = t1177*t3391;
  t8393 = t8377 + t8391;
  t5442 = -1.*t5417*t4429;
  t5470 = t5439 + t5442;
  t8025 = -1.*t5366*t4429;
  t8531 = 0.183*t3969;
  t8563 = -0.15*t4429;
  t8571 = t8531 + t8563;
  t8601 = 0.15*t3969;
  t8618 = t8601 + t4607;
  t8301 = t3969*t8266;
  t8677 = t625*t7681;
  t8684 = t371*t764*t3391;
  t8688 = t8677 + t8684;
  t8330 = -1.*t8266*t4429;
  t8421 = t3969*t8416;
  t8733 = t625*t7392;
  t8741 = -1.*t1177*t3391;
  t8742 = t8733 + t8741;
  t8455 = -1.*t8416*t4429;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1079*t1361 + t1917*t2532 - 0.13205*(t1917*t2183 + t2590) + t3332*t3477 + t3950*t4507 - 0.3*(t3950*t4429 + t3969*t4596) + 0.183*(t3950*t3969 - 1.*t4429*t4596) + t4596*t4659 - 1.*t371*t747*t764;
  p_output1(10)=t1079*t4957 + t2532*t5030 + t3477*t5282 + t4507*t5366 + t4659*t5417 - 0.3*(t4429*t5366 + t3969*t5417) + 0.183*t5470 + t1096*t371*t747 - 0.13205*(t2183*t5030 + t4957*t905);
  p_output1(11)=0;
  p_output1(12)=t1079*t1096*t1204*t371 + t1096*t1111*t2532*t371 + t3477*t5911 + t4507*t5956 + t4659*t6003 - 0.3*(t4429*t5956 + t3969*t6003) + 0.183*(t3969*t5956 - 1.*t4429*t6003) - 1.*t1096*t1177*t747 - 0.13205*(t1096*t1111*t2183*t371 + t1096*t1204*t371*t905);
  p_output1(13)=t3477*t6200 + t4507*t6371 + t4659*t6450 - 0.3*(t4429*t6371 + t3969*t6450) + 0.183*(t3969*t6371 - 1.*t4429*t6450) + t1079*t1204*t371*t764 + t1111*t2532*t371*t764 - 1.*t1177*t747*t764 - 0.13205*(t1111*t2183*t371*t764 + t1204*t371*t764*t905);
  p_output1(14)=-1.*t1079*t1177*t1204 - 1.*t1111*t1177*t2532 + t3477*t6707 + t4507*t6746 + t4659*t6782 - 0.3*(t4429*t6746 + t3969*t6782) + 0.183*(t3969*t6746 - 1.*t4429*t6782) - 1.*t371*t747 - 0.13205*(-1.*t1111*t1177*t2183 - 1.*t1177*t1204*t905);
  p_output1(15)=t1079*t5030 + t2532*t6904 - 0.13205*(t5142 + t2183*t6904) + t3477*t6938 - 1.*t3391*t4507*t6938 + t4659*t625*t6938 - 0.3*(-1.*t3391*t4429*t6938 + t3969*t625*t6938) + 0.183*(-1.*t3391*t3969*t6938 - 1.*t4429*t625*t6938);
  p_output1(16)=t1361*t2532 + t1079*t7172 - 0.13205*(t1361*t2183 + t7193) + t3477*t7249 - 1.*t3391*t4507*t7249 + t4659*t625*t7249 - 0.3*(-1.*t3391*t4429*t7249 + t3969*t625*t7249) + 0.183*(-1.*t3391*t3969*t7249 - 1.*t4429*t625*t7249);
  p_output1(17)=t1079*t1111*t371 - 1.*t1204*t2532*t371 + t7393 + t7424 + t7428 + t7430 + t7473 + t7498;
  p_output1(18)=-0.047*t2183*t4957 - 0.13205*t5282 + t3477*t7554 - 1.*t3391*t4507*t7554 + t4659*t625*t7554 - 0.3*(-1.*t3391*t4429*t7554 + t3969*t625*t7554) + 0.183*(-1.*t3391*t3969*t7554 - 1.*t4429*t625*t7554) + 0.047*t5030*t905;
  p_output1(19)=-0.047*t2183*t7663 - 0.13205*t7681 + t3477*t7699 - 1.*t3391*t4507*t7699 + t4659*t625*t7699 - 0.3*(-1.*t3391*t4429*t7699 + t3969*t625*t7699) + 0.183*(-1.*t3391*t3969*t7699 - 1.*t4429*t625*t7699) + 0.047*t7172*t905;
  p_output1(20)=-0.047*t1204*t2183*t371 + t7393 + t7424 + t7428 + t7430 + t7473 + t7498 + 0.047*t1111*t371*t905;
  p_output1(21)=0.183*t1096*t3391*t371 + t4659*t5366 + 0.183*t5282*t625 + t4507*t7912 - 0.3*(t5439 + t4429*t7912) + 0.183*(t3969*t7912 + t8025);
  p_output1(22)=0.183*t3391*t371*t764 + 0.183*t625*t7681 + t4507*t8214 + t4659*t8266 - 0.3*(t4429*t8214 + t8301) + 0.183*(t3969*t8214 + t8330);
  p_output1(23)=-0.183*t1177*t3391 + 0.183*t625*t7392 + t4507*t8393 + t4659*t8416 - 0.3*(t4429*t8393 + t8421) + 0.183*(t3969*t8393 + t8455);
  p_output1(24)=-0.3*t5470 + 0.183*(-1.*t3969*t5417 + t8025) + t5417*t8571 + t5366*t8618;
  p_output1(25)=t8266*t8618 + t8571*t8688 + 0.183*(t8330 - 1.*t3969*t8688) - 0.3*(t8301 - 1.*t4429*t8688);
  p_output1(26)=t8416*t8618 + t8571*t8742 + 0.183*(t8455 - 1.*t3969*t8742) - 0.3*(t8421 - 1.*t4429*t8742);
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



