/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t941;
  double t1184;
  double t1471;
  double t1205;
  double t1643;
  double t1099;
  double t1024;
  double t1083;
  double t1161;
  double t1383;
  double t1729;
  double t2096;
  double t2102;
  double t2133;
  double t2147;
  double t2152;
  double t2171;
  double t2184;
  double t2194;
  double t327;
  double t2668;
  double t3867;
  double t4013;
  double t4072;
  double t4076;
  double t4088;
  double t4103;
  double t4124;
  double t4182;
  double t4185;
  double t4542;
  double t4566;
  double t4655;
  double t1097;
  double t2226;
  double t2315;
  double t2768;
  double t2946;
  double t3280;
  double t3750;
  double t4190;
  double t4191;
  double t4292;
  double t4337;
  double t4404;
  double t4473;
  double t4692;
  double t4730;
  double t4774;
  double t4805;
  double t4811;
  double t4926;
  double t4945;
  double t4949;
  double t5617;
  double t5630;
  double t2428;
  double t3517;
  double t3742;
  double t5062;
  double t5122;
  double t5170;
  double t5412;
  double t5453;
  double t5458;
  double t5466;
  double t5492;
  double t5495;
  double t5515;
  double t5530;
  double t5532;
  double t5570;
  double t4989;
  double t5001;
  double t5007;
  double t5590;
  double t5591;
  double t5650;
  double t5680;
  double t5720;
  double t5738;
  double t5743;
  double t5757;
  double t4213;
  double t4415;
  double t4418;
  double t5172;
  double t5280;
  double t5287;
  double t5015;
  double t5022;
  double t5057;
  double t4768;
  double t4911;
  double t4922;
  double t5351;
  double t5352;
  double t5384;
  t941 = Cos(var1[3]);
  t1184 = Cos(var1[5]);
  t1471 = Sin(var1[3]);
  t1205 = Sin(var1[4]);
  t1643 = Sin(var1[5]);
  t1099 = Cos(var1[16]);
  t1024 = Cos(var1[4]);
  t1083 = Sin(var1[16]);
  t1161 = Cos(var1[15]);
  t1383 = t941*t1184*t1205;
  t1729 = t1471*t1643;
  t2096 = t1383 + t1729;
  t2102 = t1161*t2096;
  t2133 = Sin(var1[15]);
  t2147 = -1.*t1184*t1471;
  t2152 = t941*t1205*t1643;
  t2171 = t2147 + t2152;
  t2184 = -1.*t2133*t2171;
  t2194 = t2102 + t2184;
  t327 = Sin(var1[17]);
  t2668 = Cos(var1[17]);
  t3867 = t1184*t1471*t1205;
  t4013 = -1.*t941*t1643;
  t4072 = t3867 + t4013;
  t4076 = t1161*t4072;
  t4088 = t941*t1184;
  t4103 = t1471*t1205*t1643;
  t4124 = t4088 + t4103;
  t4182 = -1.*t2133*t4124;
  t4185 = t4076 + t4182;
  t4542 = t1161*t1024*t1184;
  t4566 = -1.*t1024*t2133*t1643;
  t4655 = t4542 + t4566;
  t1097 = t941*t1024*t1083;
  t2226 = t1099*t2194;
  t2315 = t1097 + t2226;
  t2768 = t1099*t941*t1024;
  t2946 = -1.*t1083*t2194;
  t3280 = t2768 + t2946;
  t3750 = t1024*t1083*t1471;
  t4190 = t1099*t4185;
  t4191 = t3750 + t4190;
  t4292 = t1099*t1024*t1471;
  t4337 = -1.*t1083*t4185;
  t4404 = t4292 + t4337;
  t4473 = -1.*t1083*t1205;
  t4692 = t1099*t4655;
  t4730 = t4473 + t4692;
  t4774 = -1.*t1099*t1205;
  t4805 = -1.*t1083*t4655;
  t4811 = t4774 + t4805;
  t4926 = t2133*t2096;
  t4945 = t1161*t2171;
  t4949 = t4926 + t4945;
  t5617 = -1.*t2668;
  t5630 = 1. + t5617;
  t2428 = -1.*t327*t2315;
  t3517 = t2668*t3280;
  t3742 = t2428 + t3517;
  t5062 = t2668*t2315;
  t5122 = t327*t3280;
  t5170 = t5062 + t5122;
  t5412 = -1.*t1099;
  t5453 = 1. + t5412;
  t5458 = -0.183*t5453;
  t5466 = 0. + t5458;
  t5492 = -0.047*t2133;
  t5495 = 0. + t5492;
  t5515 = -1.*t1161;
  t5530 = 1. + t5515;
  t5532 = 0.047*t5530;
  t5570 = 0. + t5532;
  t4989 = t2133*t4072;
  t5001 = t1161*t4124;
  t5007 = t4989 + t5001;
  t5590 = -0.183*t1083;
  t5591 = 0. + t5590;
  t5650 = -0.25*t5630;
  t5680 = -0.183*t327;
  t5720 = 0. + t5650 + t5680;
  t5738 = -0.183*t5630;
  t5743 = 0.25*t327;
  t5757 = 0. + t5738 + t5743;
  t4213 = -1.*t327*t4191;
  t4415 = t2668*t4404;
  t4418 = t4213 + t4415;
  t5172 = t2668*t4191;
  t5280 = t327*t4404;
  t5287 = t5172 + t5280;
  t5015 = t1024*t1184*t2133;
  t5022 = t1161*t1024*t1643;
  t5057 = t5015 + t5022;
  t4768 = -1.*t327*t4730;
  t4911 = t2668*t4811;
  t4922 = t4768 + t4911;
  t5351 = t2668*t4730;
  t5352 = t327*t4811;
  t5384 = t5351 + t5352;

  p_output1(0)=t3742;
  p_output1(1)=t4418;
  p_output1(2)=t4922;
  p_output1(3)=0.;
  p_output1(4)=t4949;
  p_output1(5)=t5007;
  p_output1(6)=t5057;
  p_output1(7)=0.;
  p_output1(8)=t5170;
  p_output1(9)=t5287;
  p_output1(10)=t5384;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3742 + 0.15331*t4949 - 0.25*t5170 + t2096*t5495 + t2171*t5570 + t2194*t5591 + t2315*t5720 + t3280*t5757 + t1024*t5466*t941 + var1(0);
  p_output1(13)=0. - 0.183*t4418 + 0.15331*t5007 - 0.25*t5287 + t1024*t1471*t5466 + t4072*t5495 + t4124*t5570 + t4185*t5591 + t4191*t5720 + t4404*t5757 + var1(1);
  p_output1(14)=0. - 0.183*t4922 + 0.15331*t5057 - 0.25*t5384 - 1.*t1205*t5466 + t1024*t1184*t5495 + t1024*t1643*t5570 + t4655*t5591 + t4730*t5720 + t4811*t5757 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



