/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot.h"

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
  double t547;
  double t1241;
  double t1750;
  double t1286;
  double t1782;
  double t1075;
  double t740;
  double t868;
  double t1194;
  double t1399;
  double t1833;
  double t2303;
  double t2320;
  double t2332;
  double t2373;
  double t2388;
  double t2389;
  double t2405;
  double t2466;
  double t457;
  double t2620;
  double t3044;
  double t3057;
  double t3068;
  double t3076;
  double t3093;
  double t3133;
  double t3230;
  double t3262;
  double t3343;
  double t3847;
  double t3850;
  double t3851;
  double t993;
  double t2481;
  double t2530;
  double t2642;
  double t2682;
  double t2723;
  double t3035;
  double t3606;
  double t3643;
  double t3651;
  double t3653;
  double t3771;
  double t3806;
  double t3854;
  double t3883;
  double t3971;
  double t4186;
  double t4189;
  double t4343;
  double t4345;
  double t4433;
  double t5390;
  double t5471;
  double t2581;
  double t2830;
  double t3033;
  double t4670;
  double t4721;
  double t4797;
  double t4905;
  double t4920;
  double t4921;
  double t4923;
  double t4959;
  double t4978;
  double t4994;
  double t5088;
  double t5102;
  double t5110;
  double t4490;
  double t4541;
  double t4547;
  double t5261;
  double t5292;
  double t5519;
  double t5608;
  double t5661;
  double t5689;
  double t5745;
  double t5748;
  double t3646;
  double t3788;
  double t3800;
  double t4847;
  double t4848;
  double t4873;
  double t4549;
  double t4584;
  double t4663;
  double t3897;
  double t4222;
  double t4291;
  double t4879;
  double t4884;
  double t4902;
  t547 = Cos(var1[3]);
  t1241 = Cos(var1[5]);
  t1750 = Sin(var1[3]);
  t1286 = Sin(var1[4]);
  t1782 = Sin(var1[5]);
  t1075 = Cos(var1[13]);
  t740 = Cos(var1[4]);
  t868 = Sin(var1[13]);
  t1194 = Cos(var1[12]);
  t1399 = t547*t1241*t1286;
  t1833 = t1750*t1782;
  t2303 = t1399 + t1833;
  t2320 = t1194*t2303;
  t2332 = Sin(var1[12]);
  t2373 = -1.*t1241*t1750;
  t2388 = t547*t1286*t1782;
  t2389 = t2373 + t2388;
  t2405 = -1.*t2332*t2389;
  t2466 = t2320 + t2405;
  t457 = Sin(var1[14]);
  t2620 = Cos(var1[14]);
  t3044 = t1241*t1750*t1286;
  t3057 = -1.*t547*t1782;
  t3068 = t3044 + t3057;
  t3076 = t1194*t3068;
  t3093 = t547*t1241;
  t3133 = t1750*t1286*t1782;
  t3230 = t3093 + t3133;
  t3262 = -1.*t2332*t3230;
  t3343 = t3076 + t3262;
  t3847 = t1194*t740*t1241;
  t3850 = -1.*t740*t2332*t1782;
  t3851 = t3847 + t3850;
  t993 = t547*t740*t868;
  t2481 = t1075*t2466;
  t2530 = t993 + t2481;
  t2642 = t1075*t547*t740;
  t2682 = -1.*t868*t2466;
  t2723 = t2642 + t2682;
  t3035 = t740*t868*t1750;
  t3606 = t1075*t3343;
  t3643 = t3035 + t3606;
  t3651 = t1075*t740*t1750;
  t3653 = -1.*t868*t3343;
  t3771 = t3651 + t3653;
  t3806 = -1.*t868*t1286;
  t3854 = t1075*t3851;
  t3883 = t3806 + t3854;
  t3971 = -1.*t1075*t1286;
  t4186 = -1.*t868*t3851;
  t4189 = t3971 + t4186;
  t4343 = t2332*t2303;
  t4345 = t1194*t2389;
  t4433 = t4343 + t4345;
  t5390 = -1.*t2620;
  t5471 = 1. + t5390;
  t2581 = -1.*t457*t2530;
  t2830 = t2620*t2723;
  t3033 = t2581 + t2830;
  t4670 = t2620*t2530;
  t4721 = t457*t2723;
  t4797 = t4670 + t4721;
  t4905 = -1.*t1075;
  t4920 = 1. + t4905;
  t4921 = -0.183*t4920;
  t4923 = 0. + t4921;
  t4959 = 0.047*t2332;
  t4978 = 0. + t4959;
  t4994 = -1.*t1194;
  t5088 = 1. + t4994;
  t5102 = -0.047*t5088;
  t5110 = 0. + t5102;
  t4490 = t2332*t3068;
  t4541 = t1194*t3230;
  t4547 = t4490 + t4541;
  t5261 = -0.183*t868;
  t5292 = 0. + t5261;
  t5519 = -0.25*t5471;
  t5608 = -0.183*t457;
  t5661 = 0. + t5519 + t5608;
  t5689 = -0.183*t5471;
  t5745 = 0.25*t457;
  t5748 = 0. + t5689 + t5745;
  t3646 = -1.*t457*t3643;
  t3788 = t2620*t3771;
  t3800 = t3646 + t3788;
  t4847 = t2620*t3643;
  t4848 = t457*t3771;
  t4873 = t4847 + t4848;
  t4549 = t740*t1241*t2332;
  t4584 = t1194*t740*t1782;
  t4663 = t4549 + t4584;
  t3897 = -1.*t457*t3883;
  t4222 = t2620*t4189;
  t4291 = t3897 + t4222;
  t4879 = t2620*t3883;
  t4884 = t457*t4189;
  t4902 = t4879 + t4884;

  p_output1(0)=t3033;
  p_output1(1)=t3800;
  p_output1(2)=t4291;
  p_output1(3)=0.;
  p_output1(4)=t4433;
  p_output1(5)=t4547;
  p_output1(6)=t4663;
  p_output1(7)=0.;
  p_output1(8)=t4797;
  p_output1(9)=t4873;
  p_output1(10)=t4902;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3033 - 0.13205*t4433 - 0.5*t4797 + t2303*t4978 + t2389*t5110 + t2466*t5292 + t2530*t5661 + t2723*t5748 + t4923*t547*t740 + var1(0);
  p_output1(13)=0. - 0.183*t3800 - 0.13205*t4547 - 0.5*t4873 + t3068*t4978 + t3230*t5110 + t3343*t5292 + t3643*t5661 + t3771*t5748 + t1750*t4923*t740 + var1(1);
  p_output1(14)=0. - 0.183*t4291 - 0.13205*t4663 - 0.5*t4902 - 1.*t1286*t4923 + t3851*t5292 + t3883*t5661 + t4189*t5748 + t1241*t4978*t740 + t1782*t5110*t740 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



