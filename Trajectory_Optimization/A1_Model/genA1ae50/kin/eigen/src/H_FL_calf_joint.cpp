/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint.h"

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
  double t649;
  double t1830;
  double t2079;
  double t2013;
  double t2206;
  double t1575;
  double t812;
  double t1122;
  double t1741;
  double t2038;
  double t2253;
  double t2392;
  double t2589;
  double t2609;
  double t2630;
  double t2693;
  double t2698;
  double t2718;
  double t2816;
  double t476;
  double t2989;
  double t3354;
  double t3389;
  double t3401;
  double t3557;
  double t3599;
  double t3605;
  double t3866;
  double t4028;
  double t4040;
  double t5224;
  double t5431;
  double t5487;
  double t1351;
  double t2825;
  double t2859;
  double t3080;
  double t3088;
  double t3115;
  double t3306;
  double t4278;
  double t4357;
  double t4623;
  double t4659;
  double t4908;
  double t5096;
  double t5503;
  double t5517;
  double t5547;
  double t5576;
  double t5599;
  double t5644;
  double t5758;
  double t5783;
  double t6355;
  double t6379;
  double t2905;
  double t3200;
  double t3216;
  double t5987;
  double t6066;
  double t6090;
  double t6182;
  double t6205;
  double t6224;
  double t6232;
  double t6259;
  double t6261;
  double t6284;
  double t6304;
  double t6306;
  double t6311;
  double t5793;
  double t5887;
  double t5889;
  double t6327;
  double t6348;
  double t6393;
  double t6396;
  double t6398;
  double t6402;
  double t6403;
  double t6406;
  double t4425;
  double t4937;
  double t4945;
  double t6095;
  double t6100;
  double t6113;
  double t5911;
  double t5920;
  double t5946;
  double t5523;
  double t5632;
  double t5634;
  double t6162;
  double t6176;
  double t6181;
  t649 = Cos(var1[3]);
  t1830 = Cos(var1[5]);
  t2079 = Sin(var1[3]);
  t2013 = Sin(var1[4]);
  t2206 = Sin(var1[5]);
  t1575 = Cos(var1[10]);
  t812 = Cos(var1[4]);
  t1122 = Sin(var1[10]);
  t1741 = Cos(var1[9]);
  t2038 = t649*t1830*t2013;
  t2253 = t2079*t2206;
  t2392 = t2038 + t2253;
  t2589 = t1741*t2392;
  t2609 = Sin(var1[9]);
  t2630 = -1.*t1830*t2079;
  t2693 = t649*t2013*t2206;
  t2698 = t2630 + t2693;
  t2718 = -1.*t2609*t2698;
  t2816 = t2589 + t2718;
  t476 = Sin(var1[11]);
  t2989 = Cos(var1[11]);
  t3354 = t1830*t2079*t2013;
  t3389 = -1.*t649*t2206;
  t3401 = t3354 + t3389;
  t3557 = t1741*t3401;
  t3599 = t649*t1830;
  t3605 = t2079*t2013*t2206;
  t3866 = t3599 + t3605;
  t4028 = -1.*t2609*t3866;
  t4040 = t3557 + t4028;
  t5224 = t1741*t812*t1830;
  t5431 = -1.*t812*t2609*t2206;
  t5487 = t5224 + t5431;
  t1351 = t649*t812*t1122;
  t2825 = t1575*t2816;
  t2859 = t1351 + t2825;
  t3080 = t1575*t649*t812;
  t3088 = -1.*t1122*t2816;
  t3115 = t3080 + t3088;
  t3306 = t812*t1122*t2079;
  t4278 = t1575*t4040;
  t4357 = t3306 + t4278;
  t4623 = t1575*t812*t2079;
  t4659 = -1.*t1122*t4040;
  t4908 = t4623 + t4659;
  t5096 = -1.*t1122*t2013;
  t5503 = t1575*t5487;
  t5517 = t5096 + t5503;
  t5547 = -1.*t1575*t2013;
  t5576 = -1.*t1122*t5487;
  t5599 = t5547 + t5576;
  t5644 = t2609*t2392;
  t5758 = t1741*t2698;
  t5783 = t5644 + t5758;
  t6355 = -1.*t2989;
  t6379 = 1. + t6355;
  t2905 = -1.*t476*t2859;
  t3200 = t2989*t3115;
  t3216 = t2905 + t3200;
  t5987 = t2989*t2859;
  t6066 = t476*t3115;
  t6090 = t5987 + t6066;
  t6182 = -1.*t1575;
  t6205 = 1. + t6182;
  t6224 = 0.183*t6205;
  t6232 = 0. + t6224;
  t6259 = -0.047*t2609;
  t6261 = 0. + t6259;
  t6284 = -1.*t1741;
  t6304 = 1. + t6284;
  t6306 = 0.047*t6304;
  t6311 = 0. + t6306;
  t5793 = t2609*t3401;
  t5887 = t1741*t3866;
  t5889 = t5793 + t5887;
  t6327 = 0.183*t1122;
  t6348 = 0. + t6327;
  t6393 = -0.1*t6379;
  t6396 = 0.183*t476;
  t6398 = 0. + t6393 + t6396;
  t6402 = 0.183*t6379;
  t6403 = 0.1*t476;
  t6406 = 0. + t6402 + t6403;
  t4425 = -1.*t476*t4357;
  t4937 = t2989*t4908;
  t4945 = t4425 + t4937;
  t6095 = t2989*t4357;
  t6100 = t476*t4908;
  t6113 = t6095 + t6100;
  t5911 = t812*t1830*t2609;
  t5920 = t1741*t812*t2206;
  t5946 = t5911 + t5920;
  t5523 = -1.*t476*t5517;
  t5632 = t2989*t5599;
  t5634 = t5523 + t5632;
  t6162 = t2989*t5517;
  t6176 = t476*t5599;
  t6181 = t6162 + t6176;

  p_output1(0)=t3216;
  p_output1(1)=t4945;
  p_output1(2)=t5634;
  p_output1(3)=0.;
  p_output1(4)=t5783;
  p_output1(5)=t5889;
  p_output1(6)=t5946;
  p_output1(7)=0.;
  p_output1(8)=t6090;
  p_output1(9)=t6113;
  p_output1(10)=t6181;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3216 + 0.13205*t5783 - 0.1*t6090 + t2392*t6261 + t2698*t6311 + t2816*t6348 + t2859*t6398 + t3115*t6406 + t6232*t649*t812 + var1(0);
  p_output1(13)=0. + 0.183*t4945 + 0.13205*t5889 - 0.1*t6113 + t3401*t6261 + t3866*t6311 + t4040*t6348 + t4357*t6398 + t4908*t6406 + t2079*t6232*t812 + var1(1);
  p_output1(14)=0. + 0.183*t5634 + 0.13205*t5946 - 0.1*t6181 - 1.*t2013*t6232 + t5487*t6348 + t5517*t6398 + t5599*t6406 + t1830*t6261*t812 + t2206*t6311*t812 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



