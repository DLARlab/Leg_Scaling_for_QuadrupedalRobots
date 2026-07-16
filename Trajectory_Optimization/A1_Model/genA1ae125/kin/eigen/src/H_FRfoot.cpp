/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot.h"

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
  double t637;
  double t1380;
  double t1605;
  double t1471;
  double t1884;
  double t1028;
  double t1330;
  double t1559;
  double t2030;
  double t2049;
  double t2052;
  double t2292;
  double t2298;
  double t2353;
  double t2482;
  double t2510;
  double t2554;
  double t664;
  double t2559;
  double t518;
  double t4067;
  double t4105;
  double t4110;
  double t4470;
  double t4472;
  double t4570;
  double t4669;
  double t4727;
  double t4738;
  double t3211;
  double t5240;
  double t5257;
  double t5321;
  double t2898;
  double t3052;
  double t3202;
  double t1177;
  double t2608;
  double t2769;
  double t4922;
  double t4970;
  double t5054;
  double t3509;
  double t4754;
  double t4756;
  double t5613;
  double t5696;
  double t5707;
  double t5109;
  double t5359;
  double t5441;
  double t5836;
  double t5928;
  double t5943;
  double t6881;
  double t6886;
  double t2875;
  double t3255;
  double t3376;
  double t6342;
  double t6366;
  double t6369;
  double t6645;
  double t6654;
  double t6711;
  double t6736;
  double t6747;
  double t6758;
  double t6762;
  double t6764;
  double t6787;
  double t6795;
  double t6013;
  double t6017;
  double t6057;
  double t6850;
  double t6871;
  double t6899;
  double t6951;
  double t6977;
  double t6987;
  double t6992;
  double t6994;
  double t4757;
  double t5056;
  double t5063;
  double t6380;
  double t6405;
  double t6413;
  double t6111;
  double t6133;
  double t6318;
  double t5464;
  double t5766;
  double t5798;
  double t6470;
  double t6471;
  double t6487;
  t637 = Cos(var1[3]);
  t1380 = Cos(var1[5]);
  t1605 = Sin(var1[3]);
  t1471 = Sin(var1[4]);
  t1884 = Sin(var1[5]);
  t1028 = Cos(var1[7]);
  t1330 = Cos(var1[6]);
  t1559 = t637*t1380*t1471;
  t2030 = t1605*t1884;
  t2049 = t1559 + t2030;
  t2052 = t1330*t2049;
  t2292 = -1.*t1380*t1605;
  t2298 = t637*t1471*t1884;
  t2353 = t2292 + t2298;
  t2482 = Sin(var1[6]);
  t2510 = -1.*t2353*t2482;
  t2554 = t2052 + t2510;
  t664 = Cos(var1[4]);
  t2559 = Sin(var1[7]);
  t518 = Cos(var1[8]);
  t4067 = t1380*t1605*t1471;
  t4105 = -1.*t637*t1884;
  t4110 = t4067 + t4105;
  t4470 = t1330*t4110;
  t4472 = t637*t1380;
  t4570 = t1605*t1471*t1884;
  t4669 = t4472 + t4570;
  t4727 = -1.*t4669*t2482;
  t4738 = t4470 + t4727;
  t3211 = Sin(var1[8]);
  t5240 = t664*t1380*t1330;
  t5257 = -1.*t664*t1884*t2482;
  t5321 = t5240 + t5257;
  t2898 = t1028*t2554;
  t3052 = t637*t664*t2559;
  t3202 = t2898 + t3052;
  t1177 = t637*t664*t1028;
  t2608 = -1.*t2554*t2559;
  t2769 = t1177 + t2608;
  t4922 = t1028*t4738;
  t4970 = t664*t1605*t2559;
  t5054 = t4922 + t4970;
  t3509 = t664*t1028*t1605;
  t4754 = -1.*t4738*t2559;
  t4756 = t3509 + t4754;
  t5613 = t1028*t5321;
  t5696 = -1.*t1471*t2559;
  t5707 = t5613 + t5696;
  t5109 = -1.*t1028*t1471;
  t5359 = -1.*t5321*t2559;
  t5441 = t5109 + t5359;
  t5836 = t1330*t2353;
  t5928 = t2049*t2482;
  t5943 = t5836 + t5928;
  t6881 = -1.*t518;
  t6886 = 1. + t6881;
  t2875 = t518*t2769;
  t3255 = -1.*t3202*t3211;
  t3376 = t2875 + t3255;
  t6342 = t518*t3202;
  t6366 = t2769*t3211;
  t6369 = t6342 + t6366;
  t6645 = -1.*t1028;
  t6654 = 1. + t6645;
  t6711 = 0.183*t6654;
  t6736 = 0. + t6711;
  t6747 = -1.*t1330;
  t6758 = 1. + t6747;
  t6762 = -0.047*t6758;
  t6764 = 0. + t6762;
  t6787 = 0.047*t2482;
  t6795 = 0. + t6787;
  t6013 = t1330*t4669;
  t6017 = t4110*t2482;
  t6057 = t6013 + t6017;
  t6850 = 0.183*t2559;
  t6871 = 0. + t6850;
  t6899 = -0.25*t6886;
  t6951 = 0.183*t3211;
  t6977 = 0. + t6899 + t6951;
  t6987 = 0.183*t6886;
  t6992 = 0.25*t3211;
  t6994 = 0. + t6987 + t6992;
  t4757 = t518*t4756;
  t5056 = -1.*t5054*t3211;
  t5063 = t4757 + t5056;
  t6380 = t518*t5054;
  t6405 = t4756*t3211;
  t6413 = t6380 + t6405;
  t6111 = t664*t1330*t1884;
  t6133 = t664*t1380*t2482;
  t6318 = t6111 + t6133;
  t5464 = t518*t5441;
  t5766 = -1.*t5707*t3211;
  t5798 = t5464 + t5766;
  t6470 = t518*t5707;
  t6471 = t5441*t3211;
  t6487 = t6470 + t6471;

  p_output1(0)=t3376;
  p_output1(1)=t5063;
  p_output1(2)=t5798;
  p_output1(3)=0.;
  p_output1(4)=t5943;
  p_output1(5)=t6057;
  p_output1(6)=t6318;
  p_output1(7)=0.;
  p_output1(8)=t6369;
  p_output1(9)=t6413;
  p_output1(10)=t6487;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3376 - 0.13205*t5943 - 0.5*t6369 + t637*t664*t6736 + t2353*t6764 + t2049*t6795 + t2554*t6871 + t3202*t6977 + t2769*t6994 + var1(0);
  p_output1(13)=0. + 0.183*t5063 - 0.13205*t6057 - 0.5*t6413 + t1605*t664*t6736 + t4669*t6764 + t4110*t6795 + t4738*t6871 + t5054*t6977 + t4756*t6994 + var1(1);
  p_output1(14)=0. + 0.183*t5798 - 0.13205*t6318 - 0.5*t6487 - 1.*t1471*t6736 + t1884*t664*t6764 + t1380*t664*t6795 + t5321*t6871 + t5707*t6977 + t5441*t6994 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



