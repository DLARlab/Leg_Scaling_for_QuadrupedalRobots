/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:04 GMT-05:00
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
  double t450;
  double t1479;
  double t1822;
  double t1555;
  double t1929;
  double t1116;
  double t772;
  double t835;
  double t1165;
  double t1597;
  double t1942;
  double t1945;
  double t1950;
  double t1981;
  double t2002;
  double t2025;
  double t2077;
  double t2079;
  double t2208;
  double t342;
  double t2338;
  double t2566;
  double t2586;
  double t2613;
  double t2717;
  double t2730;
  double t2827;
  double t2833;
  double t2835;
  double t2843;
  double t3446;
  double t3454;
  double t3455;
  double t1056;
  double t2210;
  double t2296;
  double t2418;
  double t2472;
  double t2489;
  double t2536;
  double t2895;
  double t3119;
  double t3154;
  double t3200;
  double t3210;
  double t3384;
  double t3478;
  double t3514;
  double t3657;
  double t3702;
  double t3736;
  double t3825;
  double t3835;
  double t3844;
  double t5195;
  double t5512;
  double t2309;
  double t2525;
  double t2534;
  double t3962;
  double t3987;
  double t4077;
  double t4203;
  double t4260;
  double t4271;
  double t4281;
  double t4327;
  double t4340;
  double t4495;
  double t4528;
  double t4606;
  double t4658;
  double t3865;
  double t3885;
  double t3888;
  double t4912;
  double t4954;
  double t5538;
  double t5576;
  double t5582;
  double t5626;
  double t5648;
  double t5666;
  double t3146;
  double t3306;
  double t3360;
  double t4083;
  double t4103;
  double t4111;
  double t3895;
  double t3941;
  double t3942;
  double t3642;
  double t3741;
  double t3796;
  double t4117;
  double t4138;
  double t4153;
  t450 = Cos(var1[3]);
  t1479 = Cos(var1[5]);
  t1822 = Sin(var1[3]);
  t1555 = Sin(var1[4]);
  t1929 = Sin(var1[5]);
  t1116 = Cos(var1[13]);
  t772 = Cos(var1[4]);
  t835 = Sin(var1[13]);
  t1165 = Cos(var1[12]);
  t1597 = t450*t1479*t1555;
  t1942 = t1822*t1929;
  t1945 = t1597 + t1942;
  t1950 = t1165*t1945;
  t1981 = Sin(var1[12]);
  t2002 = -1.*t1479*t1822;
  t2025 = t450*t1555*t1929;
  t2077 = t2002 + t2025;
  t2079 = -1.*t1981*t2077;
  t2208 = t1950 + t2079;
  t342 = Sin(var1[14]);
  t2338 = Cos(var1[14]);
  t2566 = t1479*t1822*t1555;
  t2586 = -1.*t450*t1929;
  t2613 = t2566 + t2586;
  t2717 = t1165*t2613;
  t2730 = t450*t1479;
  t2827 = t1822*t1555*t1929;
  t2833 = t2730 + t2827;
  t2835 = -1.*t1981*t2833;
  t2843 = t2717 + t2835;
  t3446 = t1165*t772*t1479;
  t3454 = -1.*t772*t1981*t1929;
  t3455 = t3446 + t3454;
  t1056 = t450*t772*t835;
  t2210 = t1116*t2208;
  t2296 = t1056 + t2210;
  t2418 = t1116*t450*t772;
  t2472 = -1.*t835*t2208;
  t2489 = t2418 + t2472;
  t2536 = t772*t835*t1822;
  t2895 = t1116*t2843;
  t3119 = t2536 + t2895;
  t3154 = t1116*t772*t1822;
  t3200 = -1.*t835*t2843;
  t3210 = t3154 + t3200;
  t3384 = -1.*t835*t1555;
  t3478 = t1116*t3455;
  t3514 = t3384 + t3478;
  t3657 = -1.*t1116*t1555;
  t3702 = -1.*t835*t3455;
  t3736 = t3657 + t3702;
  t3825 = t1981*t1945;
  t3835 = t1165*t2077;
  t3844 = t3825 + t3835;
  t5195 = -1.*t2338;
  t5512 = 1. + t5195;
  t2309 = -1.*t342*t2296;
  t2525 = t2338*t2489;
  t2534 = t2309 + t2525;
  t3962 = t2338*t2296;
  t3987 = t342*t2489;
  t4077 = t3962 + t3987;
  t4203 = -1.*t1116;
  t4260 = 1. + t4203;
  t4271 = -0.183*t4260;
  t4281 = 0. + t4271;
  t4327 = 0.047*t1981;
  t4340 = 0. + t4327;
  t4495 = -1.*t1165;
  t4528 = 1. + t4495;
  t4606 = -0.047*t4528;
  t4658 = 0. + t4606;
  t3865 = t1981*t2613;
  t3885 = t1165*t2833;
  t3888 = t3865 + t3885;
  t4912 = -0.183*t835;
  t4954 = 0. + t4912;
  t5538 = -0.15*t5512;
  t5576 = -0.183*t342;
  t5582 = 0. + t5538 + t5576;
  t5626 = -0.183*t5512;
  t5648 = 0.15*t342;
  t5666 = 0. + t5626 + t5648;
  t3146 = -1.*t342*t3119;
  t3306 = t2338*t3210;
  t3360 = t3146 + t3306;
  t4083 = t2338*t3119;
  t4103 = t342*t3210;
  t4111 = t4083 + t4103;
  t3895 = t772*t1479*t1981;
  t3941 = t1165*t772*t1929;
  t3942 = t3895 + t3941;
  t3642 = -1.*t342*t3514;
  t3741 = t2338*t3736;
  t3796 = t3642 + t3741;
  t4117 = t2338*t3514;
  t4138 = t342*t3736;
  t4153 = t4117 + t4138;

  p_output1(0)=t2534;
  p_output1(1)=t3360;
  p_output1(2)=t3796;
  p_output1(3)=0.;
  p_output1(4)=t3844;
  p_output1(5)=t3888;
  p_output1(6)=t3942;
  p_output1(7)=0.;
  p_output1(8)=t4077;
  p_output1(9)=t4111;
  p_output1(10)=t4153;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2534 - 0.13205*t3844 - 0.3*t4077 + t1945*t4340 + t2077*t4658 + t2208*t4954 + t2296*t5582 + t2489*t5666 + t4281*t450*t772 + var1(0);
  p_output1(13)=0. - 0.183*t3360 - 0.13205*t3888 - 0.3*t4111 + t2613*t4340 + t2833*t4658 + t2843*t4954 + t3119*t5582 + t3210*t5666 + t1822*t4281*t772 + var1(1);
  p_output1(14)=0. - 0.183*t3796 - 0.13205*t3942 - 0.3*t4153 - 1.*t1555*t4281 + t3455*t4954 + t3514*t5582 + t3736*t5666 + t1479*t4340*t772 + t1929*t4658*t772 + var1(2);
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



