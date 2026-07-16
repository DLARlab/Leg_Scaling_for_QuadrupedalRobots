/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:05 GMT-05:00
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
  double t307;
  double t889;
  double t1192;
  double t917;
  double t1193;
  double t695;
  double t529;
  double t531;
  double t888;
  double t998;
  double t1232;
  double t1288;
  double t1422;
  double t1458;
  double t1462;
  double t1472;
  double t1474;
  double t1475;
  double t1524;
  double t89;
  double t1669;
  double t2341;
  double t2378;
  double t2452;
  double t2469;
  double t2482;
  double t2508;
  double t2676;
  double t2708;
  double t2754;
  double t2948;
  double t2952;
  double t2976;
  double t545;
  double t1530;
  double t1563;
  double t1859;
  double t2079;
  double t2089;
  double t2332;
  double t2769;
  double t2790;
  double t2820;
  double t2826;
  double t2883;
  double t2921;
  double t3012;
  double t3055;
  double t3101;
  double t3137;
  double t3151;
  double t3349;
  double t3508;
  double t3572;
  double t4803;
  double t4902;
  double t1589;
  double t2235;
  double t2327;
  double t3730;
  double t3801;
  double t3820;
  double t3995;
  double t4006;
  double t4022;
  double t4057;
  double t4090;
  double t4098;
  double t4400;
  double t4485;
  double t4630;
  double t4645;
  double t3574;
  double t3596;
  double t3660;
  double t4774;
  double t4795;
  double t4907;
  double t4942;
  double t5007;
  double t5055;
  double t5061;
  double t5089;
  double t2802;
  double t2890;
  double t2909;
  double t3825;
  double t3832;
  double t3893;
  double t3668;
  double t3688;
  double t3717;
  double t3096;
  double t3158;
  double t3166;
  double t3897;
  double t3900;
  double t3993;
  t307 = Cos(var1[3]);
  t889 = Cos(var1[5]);
  t1192 = Sin(var1[3]);
  t917 = Sin(var1[4]);
  t1193 = Sin(var1[5]);
  t695 = Cos(var1[16]);
  t529 = Cos(var1[4]);
  t531 = Sin(var1[16]);
  t888 = Cos(var1[15]);
  t998 = t307*t889*t917;
  t1232 = t1192*t1193;
  t1288 = t998 + t1232;
  t1422 = t888*t1288;
  t1458 = Sin(var1[15]);
  t1462 = -1.*t889*t1192;
  t1472 = t307*t917*t1193;
  t1474 = t1462 + t1472;
  t1475 = -1.*t1458*t1474;
  t1524 = t1422 + t1475;
  t89 = Sin(var1[17]);
  t1669 = Cos(var1[17]);
  t2341 = t889*t1192*t917;
  t2378 = -1.*t307*t1193;
  t2452 = t2341 + t2378;
  t2469 = t888*t2452;
  t2482 = t307*t889;
  t2508 = t1192*t917*t1193;
  t2676 = t2482 + t2508;
  t2708 = -1.*t1458*t2676;
  t2754 = t2469 + t2708;
  t2948 = t888*t529*t889;
  t2952 = -1.*t529*t1458*t1193;
  t2976 = t2948 + t2952;
  t545 = t307*t529*t531;
  t1530 = t695*t1524;
  t1563 = t545 + t1530;
  t1859 = t695*t307*t529;
  t2079 = -1.*t531*t1524;
  t2089 = t1859 + t2079;
  t2332 = t529*t531*t1192;
  t2769 = t695*t2754;
  t2790 = t2332 + t2769;
  t2820 = t695*t529*t1192;
  t2826 = -1.*t531*t2754;
  t2883 = t2820 + t2826;
  t2921 = -1.*t531*t917;
  t3012 = t695*t2976;
  t3055 = t2921 + t3012;
  t3101 = -1.*t695*t917;
  t3137 = -1.*t531*t2976;
  t3151 = t3101 + t3137;
  t3349 = t1458*t1288;
  t3508 = t888*t1474;
  t3572 = t3349 + t3508;
  t4803 = -1.*t1669;
  t4902 = 1. + t4803;
  t1589 = -1.*t89*t1563;
  t2235 = t1669*t2089;
  t2327 = t1589 + t2235;
  t3730 = t1669*t1563;
  t3801 = t89*t2089;
  t3820 = t3730 + t3801;
  t3995 = -1.*t695;
  t4006 = 1. + t3995;
  t4022 = -0.183*t4006;
  t4057 = 0. + t4022;
  t4090 = -0.047*t1458;
  t4098 = 0. + t4090;
  t4400 = -1.*t888;
  t4485 = 1. + t4400;
  t4630 = 0.047*t4485;
  t4645 = 0. + t4630;
  t3574 = t1458*t2452;
  t3596 = t888*t2676;
  t3660 = t3574 + t3596;
  t4774 = -0.183*t531;
  t4795 = 0. + t4774;
  t4907 = -0.15*t4902;
  t4942 = -0.183*t89;
  t5007 = 0. + t4907 + t4942;
  t5055 = -0.183*t4902;
  t5061 = 0.15*t89;
  t5089 = 0. + t5055 + t5061;
  t2802 = -1.*t89*t2790;
  t2890 = t1669*t2883;
  t2909 = t2802 + t2890;
  t3825 = t1669*t2790;
  t3832 = t89*t2883;
  t3893 = t3825 + t3832;
  t3668 = t529*t889*t1458;
  t3688 = t888*t529*t1193;
  t3717 = t3668 + t3688;
  t3096 = -1.*t89*t3055;
  t3158 = t1669*t3151;
  t3166 = t3096 + t3158;
  t3897 = t1669*t3055;
  t3900 = t89*t3151;
  t3993 = t3897 + t3900;

  p_output1(0)=t2327;
  p_output1(1)=t2909;
  p_output1(2)=t3166;
  p_output1(3)=0.;
  p_output1(4)=t3572;
  p_output1(5)=t3660;
  p_output1(6)=t3717;
  p_output1(7)=0.;
  p_output1(8)=t3820;
  p_output1(9)=t3893;
  p_output1(10)=t3993;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2327 + 0.11079*t3572 - 0.15*t3820 + t1288*t4098 + t1474*t4645 + t1524*t4795 + t1563*t5007 + t2089*t5089 + t307*t4057*t529 + var1(0);
  p_output1(13)=0. - 0.183*t2909 + 0.11079*t3660 - 0.15*t3893 + t2452*t4098 + t2676*t4645 + t2754*t4795 + t2790*t5007 + t2883*t5089 + t1192*t4057*t529 + var1(1);
  p_output1(14)=0. - 0.183*t3166 + 0.11079*t3717 - 0.15*t3993 + t2976*t4795 + t3055*t5007 + t3151*t5089 + t1193*t4645*t529 + t4098*t529*t889 - 1.*t4057*t917 + var1(2);
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



