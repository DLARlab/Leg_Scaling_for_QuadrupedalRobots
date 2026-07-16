/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1108;
  double t1622;
  double t1902;
  double t1874;
  double t1906;
  double t1527;
  double t1891;
  double t2384;
  double t2393;
  double t2727;
  double t3327;
  double t3352;
  double t3435;
  double t1202;
  double t4281;
  double t238;
  double t4762;
  double t4966;
  double t5345;
  double t5361;
  double t5363;
  double t5365;
  double t5645;
  double t5821;
  double t5932;
  double t6236;
  double t6543;
  double t6677;
  double t6719;
  double t533;
  double t603;
  double t690;
  double t1020;
  double t1610;
  double t1613;
  double t2766;
  double t3002;
  double t3005;
  double t3110;
  double t6997;
  double t7004;
  double t7028;
  double t7363;
  double t7463;
  double t7487;
  double t4417;
  double t4718;
  double t5512;
  double t5665;
  double t5751;
  double t7888;
  double t7908;
  double t7915;
  double t6253;
  double t6416;
  double t6438;
  double t7927;
  double t7928;
  double t7940;
  double t7990;
  double t8002;
  double t8004;
  double t8164;
  double t8165;
  double t8171;
  double t8185;
  double t8186;
  double t8253;
  double t8275;
  double t8278;
  double t8287;
  t1108 = Cos(var1[3]);
  t1622 = Cos(var1[5]);
  t1902 = Sin(var1[3]);
  t1874 = Sin(var1[4]);
  t1906 = Sin(var1[5]);
  t1527 = Sin(var1[9]);
  t1891 = t1108*t1622*t1874;
  t2384 = t1902*t1906;
  t2393 = t1891 + t2384;
  t2727 = Cos(var1[9]);
  t3327 = -1.*t1622*t1902;
  t3352 = t1108*t1874*t1906;
  t3435 = t3327 + t3352;
  t1202 = Cos(var1[4]);
  t4281 = Sin(var1[10]);
  t238 = Cos(var1[10]);
  t4762 = t2727*t2393;
  t4966 = -1.*t1527*t3435;
  t5345 = t4762 + t4966;
  t5361 = Cos(var1[11]);
  t5363 = -1.*t5361;
  t5365 = 1. + t5363;
  t5645 = Sin(var1[11]);
  t5821 = t1108*t1202*t4281;
  t5932 = t238*t5345;
  t6236 = t5821 + t5932;
  t6543 = t238*t1108*t1202;
  t6677 = -1.*t4281*t5345;
  t6719 = t6543 + t6677;
  t533 = -1.*t238;
  t603 = 1. + t533;
  t690 = 0.183*t603;
  t1020 = 0. + t690;
  t1610 = -0.047*t1527;
  t1613 = 0. + t1610;
  t2766 = -1.*t2727;
  t3002 = 1. + t2766;
  t3005 = 0.047*t3002;
  t3110 = 0. + t3005;
  t6997 = t1622*t1902*t1874;
  t7004 = -1.*t1108*t1906;
  t7028 = t6997 + t7004;
  t7363 = t1108*t1622;
  t7463 = t1902*t1874*t1906;
  t7487 = t7363 + t7463;
  t4417 = 0.183*t4281;
  t4718 = 0. + t4417;
  t5512 = -0.1*t5365;
  t5665 = 0.183*t5645;
  t5751 = 0. + t5512 + t5665;
  t7888 = t2727*t7028;
  t7908 = -1.*t1527*t7487;
  t7915 = t7888 + t7908;
  t6253 = 0.183*t5365;
  t6416 = 0.1*t5645;
  t6438 = 0. + t6253 + t6416;
  t7927 = t1202*t4281*t1902;
  t7928 = t238*t7915;
  t7940 = t7927 + t7928;
  t7990 = t238*t1202*t1902;
  t8002 = -1.*t4281*t7915;
  t8004 = t7990 + t8002;
  t8164 = t2727*t1202*t1622;
  t8165 = -1.*t1202*t1527*t1906;
  t8171 = t8164 + t8165;
  t8185 = -1.*t4281*t1874;
  t8186 = t238*t8171;
  t8253 = t8185 + t8186;
  t8275 = -1.*t238*t1874;
  t8278 = -1.*t4281*t8171;
  t8287 = t8275 + t8278;

  p_output1(0)=0. + t1020*t1108*t1202 + t1613*t2393 + t3110*t3435 + 0.13205*(t1527*t2393 + t2727*t3435) + t4718*t5345 + t5751*t6236 + t6438*t6719 + 0.183*(-1.*t5645*t6236 + t5361*t6719) - 0.2*(t5361*t6236 + t5645*t6719) + var1(0);
  p_output1(1)=0. + t1020*t1202*t1902 + t1613*t7028 + t3110*t7487 + 0.13205*(t1527*t7028 + t2727*t7487) + t4718*t7915 + t5751*t7940 + t6438*t8004 + 0.183*(-1.*t5645*t7940 + t5361*t8004) - 0.2*(t5361*t7940 + t5645*t8004) + var1(1);
  p_output1(2)=0. + t1202*t1613*t1622 - 1.*t1020*t1874 + 0.13205*(t1202*t1527*t1622 + t1202*t1906*t2727) + t1202*t1906*t3110 + t4718*t8171 + t5751*t8253 + t6438*t8287 + 0.183*(-1.*t5645*t8253 + t5361*t8287) - 0.2*(t5361*t8253 + t5645*t8287) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



