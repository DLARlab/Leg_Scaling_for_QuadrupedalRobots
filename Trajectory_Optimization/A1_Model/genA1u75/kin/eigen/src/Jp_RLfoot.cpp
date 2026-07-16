/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:13 GMT-05:00
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
  double t339;
  double t744;
  double t658;
  double t707;
  double t855;
  double t469;
  double t713;
  double t973;
  double t1096;
  double t1321;
  double t1642;
  double t1660;
  double t1768;
  double t328;
  double t2297;
  double t5;
  double t2423;
  double t2447;
  double t2478;
  double t2606;
  double t2630;
  double t2644;
  double t2681;
  double t2806;
  double t3034;
  double t3155;
  double t3896;
  double t4196;
  double t4248;
  double t105;
  double t136;
  double t161;
  double t183;
  double t508;
  double t631;
  double t1356;
  double t1384;
  double t1417;
  double t1617;
  double t5268;
  double t5274;
  double t5279;
  double t5300;
  double t5325;
  double t5364;
  double t2305;
  double t2392;
  double t2675;
  double t2697;
  double t2729;
  double t5535;
  double t5622;
  double t5623;
  double t3384;
  double t3480;
  double t3616;
  double t5756;
  double t5760;
  double t5775;
  double t5827;
  double t5858;
  double t5872;
  double t6744;
  double t6785;
  double t6877;
  double t6948;
  double t6955;
  double t6958;
  double t7013;
  double t7017;
  double t7050;
  double t7311;
  double t7320;
  double t7321;
  double t7338;
  double t7384;
  double t7389;
  double t7395;
  double t7396;
  double t7407;
  double t7815;
  double t7816;
  double t7823;
  double t7836;
  double t7853;
  double t7862;
  double t7874;
  double t7876;
  double t7887;
  double t8097;
  double t8185;
  double t8190;
  double t8201;
  double t8257;
  double t8264;
  double t8502;
  double t8548;
  double t8553;
  double t2129;
  double t8653;
  double t8684;
  double t8852;
  double t8854;
  double t8860;
  double t9125;
  double t9132;
  double t9332;
  double t9341;
  double t9352;
  double t9395;
  double t9430;
  double t8720;
  double t8870;
  double t8891;
  double t8897;
  double t8909;
  double t8931;
  double t8984;
  double t8985;
  double t9028;
  double t9069;
  double t9076;
  double t9078;
  double t9079;
  double t9086;
  double t9089;
  double t9092;
  double t9804;
  double t9806;
  double t9807;
  double t6059;
  double t9564;
  double t9572;
  double t10046;
  double t10052;
  double t10067;
  double t10068;
  double t10084;
  double t10184;
  double t10188;
  double t10189;
  double t10202;
  double t10203;
  double t10221;
  double t5894;
  double t6071;
  double t9862;
  double t10277;
  double t10289;
  double t10293;
  double t10305;
  double t10317;
  double t10363;
  double t10366;
  double t10375;
  double t10120;
  double t10154;
  double t10410;
  double t10411;
  double t10417;
  double t10249;
  double t10264;
  t339 = Sin(var1[3]);
  t744 = Cos(var1[3]);
  t658 = Cos(var1[5]);
  t707 = Sin(var1[4]);
  t855 = Sin(var1[5]);
  t469 = Sin(var1[15]);
  t713 = -1.*t658*t339*t707;
  t973 = t744*t855;
  t1096 = t713 + t973;
  t1321 = Cos(var1[15]);
  t1642 = -1.*t744*t658;
  t1660 = -1.*t339*t707*t855;
  t1768 = t1642 + t1660;
  t328 = Cos(var1[4]);
  t2297 = Sin(var1[16]);
  t5 = Cos(var1[16]);
  t2423 = t1321*t1096;
  t2447 = -1.*t469*t1768;
  t2478 = t2423 + t2447;
  t2606 = Cos(var1[17]);
  t2630 = -1.*t2606;
  t2644 = 1. + t2630;
  t2681 = Sin(var1[17]);
  t2806 = -1.*t328*t2297*t339;
  t3034 = t5*t2478;
  t3155 = t2806 + t3034;
  t3896 = -1.*t5*t328*t339;
  t4196 = -1.*t2297*t2478;
  t4248 = t3896 + t4196;
  t105 = -1.*t5;
  t136 = 1. + t105;
  t161 = -0.183*t136;
  t183 = 0. + t161;
  t508 = -0.047*t469;
  t631 = 0. + t508;
  t1356 = -1.*t1321;
  t1384 = 1. + t1356;
  t1417 = 0.047*t1384;
  t1617 = 0. + t1417;
  t5268 = t744*t658*t707;
  t5274 = t339*t855;
  t5279 = t5268 + t5274;
  t5300 = -1.*t658*t339;
  t5325 = t744*t707*t855;
  t5364 = t5300 + t5325;
  t2305 = -0.183*t2297;
  t2392 = 0. + t2305;
  t2675 = -0.15*t2644;
  t2697 = -0.183*t2681;
  t2729 = 0. + t2675 + t2697;
  t5535 = t1321*t5279;
  t5622 = -1.*t469*t5364;
  t5623 = t5535 + t5622;
  t3384 = -0.183*t2644;
  t3480 = 0.15*t2681;
  t3616 = 0. + t3384 + t3480;
  t5756 = t744*t328*t2297;
  t5760 = t5*t5623;
  t5775 = t5756 + t5760;
  t5827 = t5*t744*t328;
  t5858 = -1.*t2297*t5623;
  t5872 = t5827 + t5858;
  t6744 = t1321*t744*t328*t658;
  t6785 = -1.*t744*t328*t469*t855;
  t6877 = t6744 + t6785;
  t6948 = -1.*t744*t2297*t707;
  t6955 = t5*t6877;
  t6958 = t6948 + t6955;
  t7013 = -1.*t5*t744*t707;
  t7017 = -1.*t2297*t6877;
  t7050 = t7013 + t7017;
  t7311 = t1321*t328*t658*t339;
  t7320 = -1.*t328*t469*t339*t855;
  t7321 = t7311 + t7320;
  t7338 = -1.*t2297*t339*t707;
  t7384 = t5*t7321;
  t7389 = t7338 + t7384;
  t7395 = -1.*t5*t339*t707;
  t7396 = -1.*t2297*t7321;
  t7407 = t7395 + t7396;
  t7815 = -1.*t1321*t658*t707;
  t7816 = t469*t707*t855;
  t7823 = t7815 + t7816;
  t7836 = -1.*t328*t2297;
  t7853 = t5*t7823;
  t7862 = t7836 + t7853;
  t7874 = -1.*t5*t328;
  t7876 = -1.*t2297*t7823;
  t7887 = t7874 + t7876;
  t8097 = t658*t339;
  t8185 = -1.*t744*t707*t855;
  t8190 = t8097 + t8185;
  t8201 = -1.*t469*t5279;
  t8257 = t1321*t8190;
  t8264 = t8201 + t8257;
  t8502 = t658*t339*t707;
  t8548 = -1.*t744*t855;
  t8553 = t8502 + t8548;
  t2129 = t1321*t1768;
  t8653 = -1.*t469*t8553;
  t8684 = t8653 + t2129;
  t8852 = -1.*t328*t658*t469;
  t8854 = -1.*t1321*t328*t855;
  t8860 = t8852 + t8854;
  t9125 = -1.*t1321*t5364;
  t9132 = t8201 + t9125;
  t9332 = t744*t658;
  t9341 = t339*t707*t855;
  t9352 = t9332 + t9341;
  t9395 = -1.*t1321*t9352;
  t9430 = t8653 + t9395;
  t8720 = t1321*t8553;
  t8870 = t2392*t8860;
  t8891 = t5*t2729*t8860;
  t8897 = -1.*t2297*t3616*t8860;
  t8909 = t1321*t328*t658;
  t8931 = -1.*t328*t469*t855;
  t8984 = t8909 + t8931;
  t8985 = 0.11079*t8984;
  t9028 = -1.*t2606*t2297*t8860;
  t9069 = -1.*t5*t2681*t8860;
  t9076 = t9028 + t9069;
  t9078 = -0.183*t9076;
  t9079 = t5*t2606*t8860;
  t9086 = -1.*t2297*t2681*t8860;
  t9089 = t9079 + t9086;
  t9092 = -0.3*t9089;
  t9804 = -1.*t744*t328*t2297;
  t9806 = -1.*t5*t5623;
  t9807 = t9804 + t9806;
  t6059 = t2606*t5872;
  t9564 = -1.*t469*t9352;
  t9572 = t8720 + t9564;
  t10046 = -1.*t5*t9572;
  t10052 = t2806 + t10046;
  t10067 = t5*t328*t339;
  t10068 = -1.*t2297*t9572;
  t10084 = t10067 + t10068;
  t10184 = t2297*t707;
  t10188 = -1.*t5*t8984;
  t10189 = t10184 + t10188;
  t10202 = -1.*t5*t707;
  t10203 = -1.*t2297*t8984;
  t10221 = t10202 + t10203;
  t5894 = -1.*t2681*t5775;
  t6071 = t5894 + t6059;
  t9862 = -1.*t2681*t5872;
  t10277 = -0.183*t2606;
  t10289 = -0.15*t2681;
  t10293 = t10277 + t10289;
  t10305 = 0.15*t2606;
  t10317 = t10305 + t2697;
  t10363 = t328*t2297*t339;
  t10366 = t5*t9572;
  t10375 = t10363 + t10366;
  t10120 = t2606*t10084;
  t10154 = -1.*t2681*t10084;
  t10410 = -1.*t2297*t707;
  t10411 = t5*t8984;
  t10417 = t10410 + t10411;
  t10249 = t2606*t10221;
  t10264 = -1.*t2681*t10221;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1617*t1768 + t2392*t2478 + t2729*t3155 - 1.*t183*t328*t339 + t3616*t4248 - 0.183*(-1.*t2681*t3155 + t2606*t4248) - 0.3*(t2606*t3155 + t2681*t4248) + 0.11079*(t2129 + t1096*t469) + t1096*t631;
  p_output1(10)=t1617*t5364 + 0.11079*(t469*t5279 + t1321*t5364) + t2392*t5623 + t2729*t5775 + t3616*t5872 - 0.3*(t2606*t5775 + t2681*t5872) - 0.183*t6071 + t5279*t631 + t183*t328*t744;
  p_output1(11)=0;
  p_output1(12)=t2392*t6877 + t2729*t6958 + t3616*t7050 - 0.183*(-1.*t2681*t6958 + t2606*t7050) - 0.3*(t2606*t6958 + t2681*t7050) + t328*t631*t658*t744 - 1.*t183*t707*t744 + t1617*t328*t744*t855 + 0.11079*(t328*t469*t658*t744 + t1321*t328*t744*t855);
  p_output1(13)=t328*t339*t631*t658 - 1.*t183*t339*t707 + t2392*t7321 + t2729*t7389 + t3616*t7407 - 0.183*(-1.*t2681*t7389 + t2606*t7407) - 0.3*(t2606*t7389 + t2681*t7407) + t1617*t328*t339*t855 + 0.11079*(t328*t339*t469*t658 + t1321*t328*t339*t855);
  p_output1(14)=-1.*t183*t328 - 1.*t631*t658*t707 + t2392*t7823 + t2729*t7862 + t3616*t7887 - 0.183*(-1.*t2681*t7862 + t2606*t7887) - 0.3*(t2606*t7862 + t2681*t7887) - 1.*t1617*t707*t855 + 0.11079*(-1.*t469*t658*t707 - 1.*t1321*t707*t855);
  p_output1(15)=t1617*t5279 + t631*t8190 + 0.11079*(t5535 + t469*t8190) + t2392*t8264 - 1.*t2297*t3616*t8264 + t2729*t5*t8264 - 0.3*(-1.*t2297*t2681*t8264 + t2606*t5*t8264) - 0.183*(-1.*t2297*t2606*t8264 - 1.*t2681*t5*t8264);
  p_output1(16)=t1768*t631 + t1617*t8553 + t2392*t8684 - 1.*t2297*t3616*t8684 + t2729*t5*t8684 - 0.3*(-1.*t2297*t2681*t8684 + t2606*t5*t8684) - 0.183*(-1.*t2297*t2606*t8684 - 1.*t2681*t5*t8684) + 0.11079*(t1768*t469 + t8720);
  p_output1(17)=t1617*t328*t658 - 1.*t328*t631*t855 + t8870 + t8891 + t8897 + t8985 + t9078 + t9092;
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
  p_output1(45)=-0.047*t1321*t5279 + 0.047*t469*t5364 + 0.11079*t5623 + t2392*t9132 - 1.*t2297*t3616*t9132 + t2729*t5*t9132 - 0.3*(-1.*t2297*t2681*t9132 + t2606*t5*t9132) - 0.183*(-1.*t2297*t2606*t9132 - 1.*t2681*t5*t9132);
  p_output1(46)=-0.047*t1321*t8553 + 0.047*t469*t9352 + t2392*t9430 - 1.*t2297*t3616*t9430 + t2729*t5*t9430 - 0.3*(-1.*t2297*t2681*t9430 + t2606*t5*t9430) - 0.183*(-1.*t2297*t2606*t9430 - 1.*t2681*t5*t9430) + 0.11079*t9572;
  p_output1(47)=-0.047*t1321*t328*t658 + 0.047*t328*t469*t855 + t8870 + t8891 + t8897 + t8985 + t9078 + t9092;
  p_output1(48)=-0.183*t5*t5623 + t2729*t5872 - 0.183*t2297*t328*t744 + t3616*t9807 - 0.3*(t6059 + t2681*t9807) - 0.183*(t2606*t9807 + t9862);
  p_output1(49)=-0.183*(t10154 + t10052*t2606) - 0.3*(t10120 + t10052*t2681) + t10084*t2729 - 0.183*t2297*t328*t339 + t10052*t3616 - 0.183*t5*t9572;
  p_output1(50)=-0.183*(t10264 + t10189*t2606) - 0.3*(t10249 + t10189*t2681) + t10221*t2729 + t10189*t3616 + 0.183*t2297*t707 - 0.183*t5*t8984;
  p_output1(51)=t10293*t5775 + t10317*t5872 - 0.3*t6071 - 0.183*(-1.*t2606*t5775 + t9862);
  p_output1(52)=t10084*t10317 + t10293*t10375 - 0.183*(t10154 - 1.*t10375*t2606) - 0.3*(t10120 - 1.*t10375*t2681);
  p_output1(53)=t10221*t10317 + t10293*t10417 - 0.183*(t10264 - 1.*t10417*t2606) - 0.3*(t10249 - 1.*t10417*t2681);
}


       
Eigen::Matrix<double,3,18> Jp_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



