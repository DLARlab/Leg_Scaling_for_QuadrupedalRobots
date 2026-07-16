/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint.h"

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
  double t1238;
  double t2239;
  double t1700;
  double t1853;
  double t2250;
  double t1275;
  double t2195;
  double t2262;
  double t2271;
  double t2369;
  double t2592;
  double t2804;
  double t3011;
  double t36;
  double t939;
  double t3487;
  double t3519;
  double t3525;
  double t3571;
  double t414;
  double t462;
  double t464;
  double t848;
  double t1529;
  double t1650;
  double t2465;
  double t2502;
  double t2537;
  double t2545;
  double t4041;
  double t4054;
  double t4070;
  double t4147;
  double t4209;
  double t4314;
  double t3490;
  double t3515;
  double t5460;
  double t5461;
  double t5593;
  double t7158;
  double t7182;
  double t7190;
  double t7430;
  double t7432;
  double t7465;
  double t7640;
  double t7643;
  double t7650;
  double t7801;
  double t7822;
  double t7825;
  double t7850;
  double t7855;
  double t7857;
  double t7919;
  double t7928;
  double t7939;
  double t3157;
  double t7978;
  double t7988;
  double t8100;
  double t8140;
  double t8181;
  double t8258;
  double t8280;
  double t8304;
  double t8305;
  double t8317;
  double t8332;
  double t8362;
  double t8018;
  double t8183;
  double t8185;
  double t8190;
  double t8192;
  double t8198;
  double t8200;
  double t8373;
  double t8375;
  t1238 = Sin(var1[3]);
  t2239 = Cos(var1[3]);
  t1700 = Cos(var1[5]);
  t1853 = Sin(var1[4]);
  t2250 = Sin(var1[5]);
  t1275 = Sin(var1[9]);
  t2195 = -1.*t1700*t1238*t1853;
  t2262 = t2239*t2250;
  t2271 = t2195 + t2262;
  t2369 = Cos(var1[9]);
  t2592 = -1.*t2239*t1700;
  t2804 = -1.*t1238*t1853*t2250;
  t3011 = t2592 + t2804;
  t36 = Cos(var1[10]);
  t939 = Cos(var1[4]);
  t3487 = Sin(var1[10]);
  t3519 = t2369*t2271;
  t3525 = -1.*t1275*t3011;
  t3571 = t3519 + t3525;
  t414 = -1.*t36;
  t462 = 1. + t414;
  t464 = 0.183*t462;
  t848 = 0. + t464;
  t1529 = -0.047*t1275;
  t1650 = 0. + t1529;
  t2465 = -1.*t2369;
  t2502 = 1. + t2465;
  t2537 = 0.047*t2502;
  t2545 = 0. + t2537;
  t4041 = t2239*t1700*t1853;
  t4054 = t1238*t2250;
  t4070 = t4041 + t4054;
  t4147 = -1.*t1700*t1238;
  t4209 = t2239*t1853*t2250;
  t4314 = t4147 + t4209;
  t3490 = 0.183*t3487;
  t3515 = 0. + t3490;
  t5460 = t2369*t4070;
  t5461 = -1.*t1275*t4314;
  t5593 = t5460 + t5461;
  t7158 = t2369*t2239*t939*t1700;
  t7182 = -1.*t2239*t939*t1275*t2250;
  t7190 = t7158 + t7182;
  t7430 = t2369*t939*t1700*t1238;
  t7432 = -1.*t939*t1275*t1238*t2250;
  t7465 = t7430 + t7432;
  t7640 = -1.*t2369*t1700*t1853;
  t7643 = t1275*t1853*t2250;
  t7650 = t7640 + t7643;
  t7801 = t1700*t1238;
  t7822 = -1.*t2239*t1853*t2250;
  t7825 = t7801 + t7822;
  t7850 = -1.*t1275*t4070;
  t7855 = t2369*t7825;
  t7857 = t7850 + t7855;
  t7919 = t1700*t1238*t1853;
  t7928 = -1.*t2239*t2250;
  t7939 = t7919 + t7928;
  t3157 = t2369*t3011;
  t7978 = -1.*t1275*t7939;
  t7988 = t7978 + t3157;
  t8100 = -1.*t939*t1700*t1275;
  t8140 = -1.*t2369*t939*t2250;
  t8181 = t8100 + t8140;
  t8258 = -1.*t2369*t4314;
  t8280 = t7850 + t8258;
  t8304 = t2239*t1700;
  t8305 = t1238*t1853*t2250;
  t8317 = t8304 + t8305;
  t8332 = -1.*t2369*t8317;
  t8362 = t7978 + t8332;
  t8018 = t2369*t7939;
  t8183 = t3515*t8181;
  t8185 = -0.183*t3487*t8181;
  t8190 = t2369*t939*t1700;
  t8192 = -1.*t939*t1275*t2250;
  t8198 = t8190 + t8192;
  t8200 = 0.15331*t8198;
  t8373 = -1.*t1275*t8317;
  t8375 = t8018 + t8373;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1650*t2271 + t2545*t3011 + 0.15331*(t1275*t2271 + t3157) + t3515*t3571 - 1.*t1238*t848*t939 + 0.183*(-1.*t3487*t3571 - 1.*t1238*t36*t939);
  p_output1(10)=t1650*t4070 + t2545*t4314 + 0.15331*(t1275*t4070 + t2369*t4314) + t3515*t5593 + t2239*t848*t939 + 0.183*(-1.*t3487*t5593 + t2239*t36*t939);
  p_output1(11)=0;
  p_output1(12)=t3515*t7190 + 0.183*(-1.*t1853*t2239*t36 - 1.*t3487*t7190) - 1.*t1853*t2239*t848 + t1650*t1700*t2239*t939 + t2239*t2250*t2545*t939 + 0.15331*(t1275*t1700*t2239*t939 + t2239*t2250*t2369*t939);
  p_output1(13)=t3515*t7465 + 0.183*(-1.*t1238*t1853*t36 - 1.*t3487*t7465) - 1.*t1238*t1853*t848 + t1238*t1650*t1700*t939 + t1238*t2250*t2545*t939 + 0.15331*(t1238*t1275*t1700*t939 + t1238*t2250*t2369*t939);
  p_output1(14)=-1.*t1650*t1700*t1853 + 0.15331*(-1.*t1275*t1700*t1853 - 1.*t1853*t2250*t2369) - 1.*t1853*t2250*t2545 + t3515*t7650 - 1.*t848*t939 + 0.183*(-1.*t3487*t7650 - 1.*t36*t939);
  p_output1(15)=t2545*t4070 + t1650*t7825 + 0.15331*(t5460 + t1275*t7825) - 0.183*t3487*t7857 + t3515*t7857;
  p_output1(16)=t1650*t3011 + t2545*t7939 - 0.183*t3487*t7988 + t3515*t7988 + 0.15331*(t1275*t3011 + t8018);
  p_output1(17)=t8183 + t8185 + t8200 - 1.*t1650*t2250*t939 + t1700*t2545*t939;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t2369*t4070 + 0.047*t1275*t4314 + 0.15331*t5593 - 0.183*t3487*t8280 + t3515*t8280;
  p_output1(28)=-0.047*t2369*t7939 + 0.047*t1275*t8317 - 0.183*t3487*t8362 + t3515*t8362 + 0.15331*t8375;
  p_output1(29)=t8183 + t8185 + t8200 + 0.047*t1275*t2250*t939 - 0.047*t1700*t2369*t939;
  p_output1(30)=0.183*t36*t5593 + 0.183*t2239*t3487*t939 + 0.183*(-1.*t36*t5593 - 1.*t2239*t3487*t939);
  p_output1(31)=0.183*t36*t8375 + 0.183*t1238*t3487*t939 + 0.183*(-1.*t36*t8375 - 1.*t1238*t3487*t939);
  p_output1(32)=-0.183*t1853*t3487 + 0.183*t36*t8198 + 0.183*(t1853*t3487 - 1.*t36*t8198);
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


       
Eigen::Matrix<double,3,18> Jp_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



