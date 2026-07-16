/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:43 GMT-05:00
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
  double t628;
  double t1029;
  double t1438;
  double t1083;
  double t1544;
  double t1017;
  double t679;
  double t692;
  double t1020;
  double t1347;
  double t1557;
  double t1571;
  double t1591;
  double t1605;
  double t1606;
  double t1607;
  double t1608;
  double t1609;
  double t1610;
  double t536;
  double t1615;
  double t1686;
  double t1737;
  double t1822;
  double t1891;
  double t1892;
  double t1896;
  double t1911;
  double t1943;
  double t1967;
  double t2694;
  double t3215;
  double t3225;
  double t810;
  double t1612;
  double t1613;
  double t1618;
  double t1619;
  double t1620;
  double t1624;
  double t2047;
  double t2052;
  double t2357;
  double t2401;
  double t2466;
  double t2626;
  double t3230;
  double t3231;
  double t3236;
  double t3237;
  double t3246;
  double t3263;
  double t3264;
  double t3265;
  double t4242;
  double t4247;
  double t1614;
  double t1622;
  double t1623;
  double t3284;
  double t3285;
  double t3296;
  double t3645;
  double t3656;
  double t3710;
  double t3715;
  double t3902;
  double t3924;
  double t3931;
  double t3935;
  double t3939;
  double t3976;
  double t3270;
  double t3273;
  double t3276;
  double t4108;
  double t4193;
  double t4252;
  double t4256;
  double t4260;
  double t4294;
  double t4314;
  double t4446;
  double t2104;
  double t2499;
  double t2510;
  double t3366;
  double t3377;
  double t3475;
  double t3280;
  double t3281;
  double t3282;
  double t3234;
  double t3247;
  double t3259;
  double t3492;
  double t3565;
  double t3566;
  t628 = Cos(var1[3]);
  t1029 = Cos(var1[5]);
  t1438 = Sin(var1[3]);
  t1083 = Sin(var1[4]);
  t1544 = Sin(var1[5]);
  t1017 = Cos(var1[10]);
  t679 = Cos(var1[4]);
  t692 = Sin(var1[10]);
  t1020 = Cos(var1[9]);
  t1347 = t628*t1029*t1083;
  t1557 = t1438*t1544;
  t1571 = t1347 + t1557;
  t1591 = t1020*t1571;
  t1605 = Sin(var1[9]);
  t1606 = -1.*t1029*t1438;
  t1607 = t628*t1083*t1544;
  t1608 = t1606 + t1607;
  t1609 = -1.*t1605*t1608;
  t1610 = t1591 + t1609;
  t536 = Sin(var1[11]);
  t1615 = Cos(var1[11]);
  t1686 = t1029*t1438*t1083;
  t1737 = -1.*t628*t1544;
  t1822 = t1686 + t1737;
  t1891 = t1020*t1822;
  t1892 = t628*t1029;
  t1896 = t1438*t1083*t1544;
  t1911 = t1892 + t1896;
  t1943 = -1.*t1605*t1911;
  t1967 = t1891 + t1943;
  t2694 = t1020*t679*t1029;
  t3215 = -1.*t679*t1605*t1544;
  t3225 = t2694 + t3215;
  t810 = t628*t679*t692;
  t1612 = t1017*t1610;
  t1613 = t810 + t1612;
  t1618 = t1017*t628*t679;
  t1619 = -1.*t692*t1610;
  t1620 = t1618 + t1619;
  t1624 = t679*t692*t1438;
  t2047 = t1017*t1967;
  t2052 = t1624 + t2047;
  t2357 = t1017*t679*t1438;
  t2401 = -1.*t692*t1967;
  t2466 = t2357 + t2401;
  t2626 = -1.*t692*t1083;
  t3230 = t1017*t3225;
  t3231 = t2626 + t3230;
  t3236 = -1.*t1017*t1083;
  t3237 = -1.*t692*t3225;
  t3246 = t3236 + t3237;
  t3263 = t1605*t1571;
  t3264 = t1020*t1608;
  t3265 = t3263 + t3264;
  t4242 = -1.*t1615;
  t4247 = 1. + t4242;
  t1614 = -1.*t536*t1613;
  t1622 = t1615*t1620;
  t1623 = t1614 + t1622;
  t3284 = t1615*t1613;
  t3285 = t536*t1620;
  t3296 = t3284 + t3285;
  t3645 = -1.*t1017;
  t3656 = 1. + t3645;
  t3710 = 0.183*t3656;
  t3715 = 0. + t3710;
  t3902 = -0.047*t1605;
  t3924 = 0. + t3902;
  t3931 = -1.*t1020;
  t3935 = 1. + t3931;
  t3939 = 0.047*t3935;
  t3976 = 0. + t3939;
  t3270 = t1605*t1822;
  t3273 = t1020*t1911;
  t3276 = t3270 + t3273;
  t4108 = 0.183*t692;
  t4193 = 0. + t4108;
  t4252 = -0.1*t4247;
  t4256 = 0.183*t536;
  t4260 = 0. + t4252 + t4256;
  t4294 = 0.183*t4247;
  t4314 = 0.1*t536;
  t4446 = 0. + t4294 + t4314;
  t2104 = -1.*t536*t2052;
  t2499 = t1615*t2466;
  t2510 = t2104 + t2499;
  t3366 = t1615*t2052;
  t3377 = t536*t2466;
  t3475 = t3366 + t3377;
  t3280 = t679*t1029*t1605;
  t3281 = t1020*t679*t1544;
  t3282 = t3280 + t3281;
  t3234 = -1.*t536*t3231;
  t3247 = t1615*t3246;
  t3259 = t3234 + t3247;
  t3492 = t1615*t3231;
  t3565 = t536*t3246;
  t3566 = t3492 + t3565;

  p_output1(0)=t1623;
  p_output1(1)=t2510;
  p_output1(2)=t3259;
  p_output1(3)=0.;
  p_output1(4)=t3265;
  p_output1(5)=t3276;
  p_output1(6)=t3282;
  p_output1(7)=0.;
  p_output1(8)=t3296;
  p_output1(9)=t3475;
  p_output1(10)=t3566;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t1623 + 0.08953*t3265 - 0.1*t3296 + t1571*t3924 + t1608*t3976 + t1610*t4193 + t1613*t4260 + t1620*t4446 + t3715*t628*t679 + var1(0);
  p_output1(13)=0. + 0.183*t2510 + 0.08953*t3276 - 0.1*t3475 + t1822*t3924 + t1911*t3976 + t1967*t4193 + t2052*t4260 + t2466*t4446 + t1438*t3715*t679 + var1(1);
  p_output1(14)=0. + 0.183*t3259 + 0.08953*t3282 - 0.1*t3566 - 1.*t1083*t3715 + t3225*t4193 + t3231*t4260 + t3246*t4446 + t1029*t3924*t679 + t1544*t3976*t679 + var1(2);
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



