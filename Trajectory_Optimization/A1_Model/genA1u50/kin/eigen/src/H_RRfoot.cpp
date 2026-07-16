/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:04 GMT-05:00
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
  double t66;
  double t874;
  double t1271;
  double t1079;
  double t1273;
  double t610;
  double t382;
  double t408;
  double t815;
  double t1251;
  double t1306;
  double t1407;
  double t1432;
  double t1434;
  double t1447;
  double t1454;
  double t1601;
  double t1734;
  double t1847;
  double t41;
  double t2328;
  double t3115;
  double t3189;
  double t3190;
  double t3192;
  double t3223;
  double t3224;
  double t3228;
  double t3248;
  double t3266;
  double t3661;
  double t3684;
  double t3685;
  double t438;
  double t2125;
  double t2126;
  double t2386;
  double t2405;
  double t2421;
  double t3069;
  double t3319;
  double t3423;
  double t3448;
  double t3452;
  double t3567;
  double t3629;
  double t3778;
  double t3850;
  double t3888;
  double t4042;
  double t4087;
  double t4171;
  double t4213;
  double t4323;
  double t4830;
  double t4952;
  double t2228;
  double t2459;
  double t2811;
  double t4546;
  double t4564;
  double t4580;
  double t4660;
  double t4663;
  double t4665;
  double t4666;
  double t4671;
  double t4672;
  double t4674;
  double t4675;
  double t4676;
  double t4677;
  double t4427;
  double t4449;
  double t4450;
  double t4684;
  double t4753;
  double t5031;
  double t5035;
  double t5037;
  double t5138;
  double t5139;
  double t5180;
  double t3435;
  double t3589;
  double t3598;
  double t4625;
  double t4636;
  double t4654;
  double t4475;
  double t4501;
  double t4532;
  double t3885;
  double t4088;
  double t4168;
  double t4655;
  double t4657;
  double t4659;
  t66 = Cos(var1[3]);
  t874 = Cos(var1[5]);
  t1271 = Sin(var1[3]);
  t1079 = Sin(var1[4]);
  t1273 = Sin(var1[5]);
  t610 = Cos(var1[13]);
  t382 = Cos(var1[4]);
  t408 = Sin(var1[13]);
  t815 = Cos(var1[12]);
  t1251 = t66*t874*t1079;
  t1306 = t1271*t1273;
  t1407 = t1251 + t1306;
  t1432 = t815*t1407;
  t1434 = Sin(var1[12]);
  t1447 = -1.*t874*t1271;
  t1454 = t66*t1079*t1273;
  t1601 = t1447 + t1454;
  t1734 = -1.*t1434*t1601;
  t1847 = t1432 + t1734;
  t41 = Sin(var1[14]);
  t2328 = Cos(var1[14]);
  t3115 = t874*t1271*t1079;
  t3189 = -1.*t66*t1273;
  t3190 = t3115 + t3189;
  t3192 = t815*t3190;
  t3223 = t66*t874;
  t3224 = t1271*t1079*t1273;
  t3228 = t3223 + t3224;
  t3248 = -1.*t1434*t3228;
  t3266 = t3192 + t3248;
  t3661 = t815*t382*t874;
  t3684 = -1.*t382*t1434*t1273;
  t3685 = t3661 + t3684;
  t438 = t66*t382*t408;
  t2125 = t610*t1847;
  t2126 = t438 + t2125;
  t2386 = t610*t66*t382;
  t2405 = -1.*t408*t1847;
  t2421 = t2386 + t2405;
  t3069 = t382*t408*t1271;
  t3319 = t610*t3266;
  t3423 = t3069 + t3319;
  t3448 = t610*t382*t1271;
  t3452 = -1.*t408*t3266;
  t3567 = t3448 + t3452;
  t3629 = -1.*t408*t1079;
  t3778 = t610*t3685;
  t3850 = t3629 + t3778;
  t3888 = -1.*t610*t1079;
  t4042 = -1.*t408*t3685;
  t4087 = t3888 + t4042;
  t4171 = t1434*t1407;
  t4213 = t815*t1601;
  t4323 = t4171 + t4213;
  t4830 = -1.*t2328;
  t4952 = 1. + t4830;
  t2228 = -1.*t41*t2126;
  t2459 = t2328*t2421;
  t2811 = t2228 + t2459;
  t4546 = t2328*t2126;
  t4564 = t41*t2421;
  t4580 = t4546 + t4564;
  t4660 = -1.*t610;
  t4663 = 1. + t4660;
  t4665 = -0.183*t4663;
  t4666 = 0. + t4665;
  t4671 = 0.047*t1434;
  t4672 = 0. + t4671;
  t4674 = -1.*t815;
  t4675 = 1. + t4674;
  t4676 = -0.047*t4675;
  t4677 = 0. + t4676;
  t4427 = t1434*t3190;
  t4449 = t815*t3228;
  t4450 = t4427 + t4449;
  t4684 = -0.183*t408;
  t4753 = 0. + t4684;
  t5031 = -0.1*t4952;
  t5035 = -0.183*t41;
  t5037 = 0. + t5031 + t5035;
  t5138 = -0.183*t4952;
  t5139 = 0.1*t41;
  t5180 = 0. + t5138 + t5139;
  t3435 = -1.*t41*t3423;
  t3589 = t2328*t3567;
  t3598 = t3435 + t3589;
  t4625 = t2328*t3423;
  t4636 = t41*t3567;
  t4654 = t4625 + t4636;
  t4475 = t382*t874*t1434;
  t4501 = t815*t382*t1273;
  t4532 = t4475 + t4501;
  t3885 = -1.*t41*t3850;
  t4088 = t2328*t4087;
  t4168 = t3885 + t4088;
  t4655 = t2328*t3850;
  t4657 = t41*t4087;
  t4659 = t4655 + t4657;

  p_output1(0)=t2811;
  p_output1(1)=t3598;
  p_output1(2)=t4168;
  p_output1(3)=0.;
  p_output1(4)=t4323;
  p_output1(5)=t4450;
  p_output1(6)=t4532;
  p_output1(7)=0.;
  p_output1(8)=t4580;
  p_output1(9)=t4654;
  p_output1(10)=t4659;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2811 - 0.08953*t4323 - 0.2*t4580 + t1407*t4672 + t1601*t4677 + t1847*t4753 + t2126*t5037 + t2421*t5180 + t382*t4666*t66 + var1(0);
  p_output1(13)=0. - 0.183*t3598 - 0.08953*t4450 - 0.2*t4654 + t1271*t382*t4666 + t3190*t4672 + t3228*t4677 + t3266*t4753 + t3423*t5037 + t3567*t5180 + var1(1);
  p_output1(14)=0. - 0.183*t4168 - 0.08953*t4532 - 0.2*t4659 - 1.*t1079*t4666 + t1273*t382*t4677 + t3685*t4753 + t3850*t5037 + t4087*t5180 + t382*t4672*t874 + var1(2);
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



