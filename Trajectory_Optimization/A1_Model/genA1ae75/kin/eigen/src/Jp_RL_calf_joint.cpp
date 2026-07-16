/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint.h"

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
  double t726;
  double t1367;
  double t1149;
  double t1203;
  double t1418;
  double t961;
  double t1330;
  double t1456;
  double t1458;
  double t1973;
  double t2066;
  double t2104;
  double t2157;
  double t628;
  double t2456;
  double t244;
  double t2549;
  double t2600;
  double t2601;
  double t2634;
  double t2646;
  double t2647;
  double t2664;
  double t2673;
  double t2676;
  double t2681;
  double t2723;
  double t2729;
  double t2733;
  double t264;
  double t480;
  double t542;
  double t588;
  double t1049;
  double t1141;
  double t2011;
  double t2026;
  double t2030;
  double t2048;
  double t2856;
  double t2858;
  double t2864;
  double t2877;
  double t2880;
  double t2881;
  double t2481;
  double t2510;
  double t2652;
  double t2665;
  double t2672;
  double t2913;
  double t2918;
  double t2921;
  double t2706;
  double t2718;
  double t2719;
  double t2963;
  double t2973;
  double t2975;
  double t2992;
  double t2993;
  double t2994;
  double t3107;
  double t3116;
  double t3121;
  double t3126;
  double t3132;
  double t3134;
  double t3162;
  double t3165;
  double t3169;
  double t3374;
  double t3396;
  double t3403;
  double t3413;
  double t3418;
  double t3420;
  double t3476;
  double t3480;
  double t3486;
  double t3934;
  double t3940;
  double t3960;
  double t3990;
  double t4011;
  double t4015;
  double t4032;
  double t4038;
  double t4045;
  double t4206;
  double t4208;
  double t4223;
  double t4248;
  double t4249;
  double t4270;
  double t4471;
  double t4473;
  double t4475;
  double t2332;
  double t4498;
  double t4504;
  double t4874;
  double t4900;
  double t4921;
  double t5337;
  double t5338;
  double t5786;
  double t5807;
  double t5858;
  double t5870;
  double t5893;
  double t4549;
  double t4935;
  double t4969;
  double t4971;
  double t5012;
  double t5015;
  double t5027;
  double t5038;
  double t5056;
  double t5062;
  double t5122;
  double t5232;
  double t5270;
  double t5274;
  double t5277;
  double t5279;
  double t6063;
  double t6067;
  double t6073;
  double t3009;
  double t5917;
  double t5942;
  double t6189;
  double t6199;
  double t6223;
  double t6228;
  double t6235;
  double t6517;
  double t6526;
  double t6567;
  double t6591;
  double t6661;
  double t6665;
  double t3000;
  double t3016;
  double t6114;
  double t6765;
  double t6799;
  double t6818;
  double t6828;
  double t6844;
  double t6902;
  double t6904;
  double t6906;
  double t6282;
  double t6420;
  double t7021;
  double t7056;
  double t7108;
  double t6691;
  double t6735;
  t726 = Sin(var1[3]);
  t1367 = Cos(var1[3]);
  t1149 = Cos(var1[5]);
  t1203 = Sin(var1[4]);
  t1418 = Sin(var1[5]);
  t961 = Sin(var1[15]);
  t1330 = -1.*t1149*t726*t1203;
  t1456 = t1367*t1418;
  t1458 = t1330 + t1456;
  t1973 = Cos(var1[15]);
  t2066 = -1.*t1367*t1149;
  t2104 = -1.*t726*t1203*t1418;
  t2157 = t2066 + t2104;
  t628 = Cos(var1[4]);
  t2456 = Sin(var1[16]);
  t244 = Cos(var1[16]);
  t2549 = t1973*t1458;
  t2600 = -1.*t961*t2157;
  t2601 = t2549 + t2600;
  t2634 = Cos(var1[17]);
  t2646 = -1.*t2634;
  t2647 = 1. + t2646;
  t2664 = Sin(var1[17]);
  t2673 = -1.*t628*t2456*t726;
  t2676 = t244*t2601;
  t2681 = t2673 + t2676;
  t2723 = -1.*t244*t628*t726;
  t2729 = -1.*t2456*t2601;
  t2733 = t2723 + t2729;
  t264 = -1.*t244;
  t480 = 1. + t264;
  t542 = -0.183*t480;
  t588 = 0. + t542;
  t1049 = -0.047*t961;
  t1141 = 0. + t1049;
  t2011 = -1.*t1973;
  t2026 = 1. + t2011;
  t2030 = 0.047*t2026;
  t2048 = 0. + t2030;
  t2856 = t1367*t1149*t1203;
  t2858 = t726*t1418;
  t2864 = t2856 + t2858;
  t2877 = -1.*t1149*t726;
  t2880 = t1367*t1203*t1418;
  t2881 = t2877 + t2880;
  t2481 = -0.183*t2456;
  t2510 = 0. + t2481;
  t2652 = -0.15*t2647;
  t2665 = -0.183*t2664;
  t2672 = 0. + t2652 + t2665;
  t2913 = t1973*t2864;
  t2918 = -1.*t961*t2881;
  t2921 = t2913 + t2918;
  t2706 = -0.183*t2647;
  t2718 = 0.15*t2664;
  t2719 = 0. + t2706 + t2718;
  t2963 = t1367*t628*t2456;
  t2973 = t244*t2921;
  t2975 = t2963 + t2973;
  t2992 = t244*t1367*t628;
  t2993 = -1.*t2456*t2921;
  t2994 = t2992 + t2993;
  t3107 = t1973*t1367*t628*t1149;
  t3116 = -1.*t1367*t628*t961*t1418;
  t3121 = t3107 + t3116;
  t3126 = -1.*t1367*t2456*t1203;
  t3132 = t244*t3121;
  t3134 = t3126 + t3132;
  t3162 = -1.*t244*t1367*t1203;
  t3165 = -1.*t2456*t3121;
  t3169 = t3162 + t3165;
  t3374 = t1973*t628*t1149*t726;
  t3396 = -1.*t628*t961*t726*t1418;
  t3403 = t3374 + t3396;
  t3413 = -1.*t2456*t726*t1203;
  t3418 = t244*t3403;
  t3420 = t3413 + t3418;
  t3476 = -1.*t244*t726*t1203;
  t3480 = -1.*t2456*t3403;
  t3486 = t3476 + t3480;
  t3934 = -1.*t1973*t1149*t1203;
  t3940 = t961*t1203*t1418;
  t3960 = t3934 + t3940;
  t3990 = -1.*t628*t2456;
  t4011 = t244*t3960;
  t4015 = t3990 + t4011;
  t4032 = -1.*t244*t628;
  t4038 = -1.*t2456*t3960;
  t4045 = t4032 + t4038;
  t4206 = t1149*t726;
  t4208 = -1.*t1367*t1203*t1418;
  t4223 = t4206 + t4208;
  t4248 = -1.*t961*t2864;
  t4249 = t1973*t4223;
  t4270 = t4248 + t4249;
  t4471 = t1149*t726*t1203;
  t4473 = -1.*t1367*t1418;
  t4475 = t4471 + t4473;
  t2332 = t1973*t2157;
  t4498 = -1.*t961*t4475;
  t4504 = t4498 + t2332;
  t4874 = -1.*t628*t1149*t961;
  t4900 = -1.*t1973*t628*t1418;
  t4921 = t4874 + t4900;
  t5337 = -1.*t1973*t2881;
  t5338 = t4248 + t5337;
  t5786 = t1367*t1149;
  t5807 = t726*t1203*t1418;
  t5858 = t5786 + t5807;
  t5870 = -1.*t1973*t5858;
  t5893 = t4498 + t5870;
  t4549 = t1973*t4475;
  t4935 = t2510*t4921;
  t4969 = t244*t2672*t4921;
  t4971 = -1.*t2456*t2719*t4921;
  t5012 = t1973*t628*t1149;
  t5015 = -1.*t628*t961*t1418;
  t5027 = t5012 + t5015;
  t5038 = 0.13205*t5027;
  t5056 = -1.*t2634*t2456*t4921;
  t5062 = -1.*t244*t2664*t4921;
  t5122 = t5056 + t5062;
  t5232 = -0.183*t5122;
  t5270 = t244*t2634*t4921;
  t5274 = -1.*t2456*t2664*t4921;
  t5277 = t5270 + t5274;
  t5279 = -0.15*t5277;
  t6063 = -1.*t1367*t628*t2456;
  t6067 = -1.*t244*t2921;
  t6073 = t6063 + t6067;
  t3009 = t2634*t2994;
  t5917 = -1.*t961*t5858;
  t5942 = t4549 + t5917;
  t6189 = -1.*t244*t5942;
  t6199 = t2673 + t6189;
  t6223 = t244*t628*t726;
  t6228 = -1.*t2456*t5942;
  t6235 = t6223 + t6228;
  t6517 = t2456*t1203;
  t6526 = -1.*t244*t5027;
  t6567 = t6517 + t6526;
  t6591 = -1.*t244*t1203;
  t6661 = -1.*t2456*t5027;
  t6665 = t6591 + t6661;
  t3000 = -1.*t2664*t2975;
  t3016 = t3000 + t3009;
  t6114 = -1.*t2664*t2994;
  t6765 = -0.183*t2634;
  t6799 = -0.15*t2664;
  t6818 = t6765 + t6799;
  t6828 = 0.15*t2634;
  t6844 = t6828 + t2665;
  t6902 = t628*t2456*t726;
  t6904 = t244*t5942;
  t6906 = t6902 + t6904;
  t6282 = t2634*t6235;
  t6420 = -1.*t2664*t6235;
  t7021 = -1.*t2456*t1203;
  t7056 = t244*t5027;
  t7108 = t7021 + t7056;
  t6691 = t2634*t6665;
  t6735 = -1.*t2664*t6665;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1141*t1458 + t2048*t2157 + t2510*t2601 + t2672*t2681 + t2719*t2733 - 0.183*(-1.*t2664*t2681 + t2634*t2733) - 0.15*(t2634*t2681 + t2664*t2733) - 1.*t588*t628*t726 + 0.13205*(t2332 + t1458*t961);
  p_output1(10)=t1141*t2864 + t2048*t2881 + t2510*t2921 + t2672*t2975 + t2719*t2994 - 0.15*(t2634*t2975 + t2664*t2994) - 0.183*t3016 + t1367*t588*t628 + 0.13205*(t1973*t2881 + t2864*t961);
  p_output1(11)=0;
  p_output1(12)=t2510*t3121 + t2672*t3134 + t2719*t3169 - 0.183*(-1.*t2664*t3134 + t2634*t3169) - 0.15*(t2634*t3134 + t2664*t3169) - 1.*t1203*t1367*t588 + t1141*t1149*t1367*t628 + t1367*t1418*t2048*t628 + 0.13205*(t1367*t1418*t1973*t628 + t1149*t1367*t628*t961);
  p_output1(13)=t2510*t3403 + t2672*t3420 + t2719*t3486 - 0.183*(-1.*t2664*t3420 + t2634*t3486) - 0.15*(t2634*t3420 + t2664*t3486) - 1.*t1203*t588*t726 + t1141*t1149*t628*t726 + t1418*t2048*t628*t726 + 0.13205*(t1418*t1973*t628*t726 + t1149*t628*t726*t961);
  p_output1(14)=-1.*t1141*t1149*t1203 - 1.*t1203*t1418*t2048 + t2510*t3960 + t2672*t4015 + t2719*t4045 - 0.183*(-1.*t2664*t4015 + t2634*t4045) - 0.15*(t2634*t4015 + t2664*t4045) - 1.*t588*t628 + 0.13205*(-1.*t1203*t1418*t1973 - 1.*t1149*t1203*t961);
  p_output1(15)=t2048*t2864 + t1141*t4223 + t2510*t4270 + t244*t2672*t4270 - 1.*t2456*t2719*t4270 - 0.183*(-1.*t2456*t2634*t4270 - 1.*t244*t2664*t4270) - 0.15*(t244*t2634*t4270 - 1.*t2456*t2664*t4270) + 0.13205*(t2913 + t4223*t961);
  p_output1(16)=t1141*t2157 + t2048*t4475 + t2510*t4504 + t244*t2672*t4504 - 1.*t2456*t2719*t4504 - 0.183*(-1.*t2456*t2634*t4504 - 1.*t244*t2664*t4504) - 0.15*(t244*t2634*t4504 - 1.*t2456*t2664*t4504) + 0.13205*(t4549 + t2157*t961);
  p_output1(17)=t4935 + t4969 + t4971 + t5038 + t5232 + t5279 - 1.*t1141*t1418*t628 + t1149*t2048*t628;
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
  p_output1(45)=-0.047*t1973*t2864 + 0.13205*t2921 + t2510*t5338 + t244*t2672*t5338 - 1.*t2456*t2719*t5338 - 0.183*(-1.*t2456*t2634*t5338 - 1.*t244*t2664*t5338) - 0.15*(t244*t2634*t5338 - 1.*t2456*t2664*t5338) + 0.047*t2881*t961;
  p_output1(46)=-0.047*t1973*t4475 + t2510*t5893 + t244*t2672*t5893 - 1.*t2456*t2719*t5893 - 0.183*(-1.*t2456*t2634*t5893 - 1.*t244*t2664*t5893) - 0.15*(t244*t2634*t5893 - 1.*t2456*t2664*t5893) + 0.13205*t5942 + 0.047*t5858*t961;
  p_output1(47)=t4935 + t4969 + t4971 + t5038 + t5232 + t5279 - 0.047*t1149*t1973*t628 + 0.047*t1418*t628*t961;
  p_output1(48)=-0.183*t244*t2921 + t2672*t2994 + t2719*t6073 - 0.15*(t3009 + t2664*t6073) - 0.183*(t2634*t6073 + t6114) - 0.183*t1367*t2456*t628;
  p_output1(49)=-0.183*t244*t5942 + t2719*t6199 + t2672*t6235 - 0.15*(t2664*t6199 + t6282) - 0.183*(t2634*t6199 + t6420) - 0.183*t2456*t628*t726;
  p_output1(50)=0.183*t1203*t2456 - 0.183*t244*t5027 + t2719*t6567 + t2672*t6665 - 0.15*(t2664*t6567 + t6691) - 0.183*(t2634*t6567 + t6735);
  p_output1(51)=-0.15*t3016 - 0.183*(-1.*t2634*t2975 + t6114) + t2975*t6818 + t2994*t6844;
  p_output1(52)=t6235*t6844 + t6818*t6906 - 0.183*(t6420 - 1.*t2634*t6906) - 0.15*(t6282 - 1.*t2664*t6906);
  p_output1(53)=t6665*t6844 + t6818*t7108 - 0.183*(t6735 - 1.*t2634*t7108) - 0.15*(t6691 - 1.*t2664*t7108);
}


       
Eigen::Matrix<double,3,18> Jp_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



