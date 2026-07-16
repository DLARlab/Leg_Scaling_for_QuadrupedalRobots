/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot.h"

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
  double t247;
  double t1031;
  double t1083;
  double t1044;
  double t1084;
  double t992;
  double t628;
  double t631;
  double t994;
  double t1075;
  double t1326;
  double t1554;
  double t1643;
  double t1689;
  double t1697;
  double t1809;
  double t1810;
  double t1812;
  double t1896;
  double t121;
  double t2104;
  double t2544;
  double t2608;
  double t2621;
  double t2659;
  double t2704;
  double t2877;
  double t2897;
  double t2902;
  double t3113;
  double t3700;
  double t3718;
  double t3734;
  double t775;
  double t1971;
  double t1993;
  double t2118;
  double t2148;
  double t2321;
  double t2542;
  double t3131;
  double t3167;
  double t3246;
  double t3283;
  double t3453;
  double t3663;
  double t3740;
  double t3789;
  double t4113;
  double t4206;
  double t4209;
  double t4262;
  double t4273;
  double t4274;
  double t5754;
  double t5755;
  double t2103;
  double t2400;
  double t2413;
  double t4737;
  double t4897;
  double t4928;
  double t5250;
  double t5275;
  double t5360;
  double t5406;
  double t5442;
  double t5462;
  double t5477;
  double t5509;
  double t5530;
  double t5542;
  double t4280;
  double t4299;
  double t4580;
  double t5643;
  double t5660;
  double t5827;
  double t5840;
  double t5893;
  double t5998;
  double t6010;
  double t6021;
  double t3197;
  double t3532;
  double t3561;
  double t5016;
  double t5033;
  double t5057;
  double t4656;
  double t4679;
  double t4721;
  double t3875;
  double t4210;
  double t4227;
  double t5109;
  double t5158;
  double t5196;
  t247 = Cos(var1[3]);
  t1031 = Cos(var1[5]);
  t1083 = Sin(var1[3]);
  t1044 = Sin(var1[4]);
  t1084 = Sin(var1[5]);
  t992 = Cos(var1[16]);
  t628 = Cos(var1[4]);
  t631 = Sin(var1[16]);
  t994 = Cos(var1[15]);
  t1075 = t247*t1031*t1044;
  t1326 = t1083*t1084;
  t1554 = t1075 + t1326;
  t1643 = t994*t1554;
  t1689 = Sin(var1[15]);
  t1697 = -1.*t1031*t1083;
  t1809 = t247*t1044*t1084;
  t1810 = t1697 + t1809;
  t1812 = -1.*t1689*t1810;
  t1896 = t1643 + t1812;
  t121 = Sin(var1[17]);
  t2104 = Cos(var1[17]);
  t2544 = t1031*t1083*t1044;
  t2608 = -1.*t247*t1084;
  t2621 = t2544 + t2608;
  t2659 = t994*t2621;
  t2704 = t247*t1031;
  t2877 = t1083*t1044*t1084;
  t2897 = t2704 + t2877;
  t2902 = -1.*t1689*t2897;
  t3113 = t2659 + t2902;
  t3700 = t994*t628*t1031;
  t3718 = -1.*t628*t1689*t1084;
  t3734 = t3700 + t3718;
  t775 = t247*t628*t631;
  t1971 = t992*t1896;
  t1993 = t775 + t1971;
  t2118 = t992*t247*t628;
  t2148 = -1.*t631*t1896;
  t2321 = t2118 + t2148;
  t2542 = t628*t631*t1083;
  t3131 = t992*t3113;
  t3167 = t2542 + t3131;
  t3246 = t992*t628*t1083;
  t3283 = -1.*t631*t3113;
  t3453 = t3246 + t3283;
  t3663 = -1.*t631*t1044;
  t3740 = t992*t3734;
  t3789 = t3663 + t3740;
  t4113 = -1.*t992*t1044;
  t4206 = -1.*t631*t3734;
  t4209 = t4113 + t4206;
  t4262 = t1689*t1554;
  t4273 = t994*t1810;
  t4274 = t4262 + t4273;
  t5754 = -1.*t2104;
  t5755 = 1. + t5754;
  t2103 = -1.*t121*t1993;
  t2400 = t2104*t2321;
  t2413 = t2103 + t2400;
  t4737 = t2104*t1993;
  t4897 = t121*t2321;
  t4928 = t4737 + t4897;
  t5250 = -1.*t992;
  t5275 = 1. + t5250;
  t5360 = -0.183*t5275;
  t5406 = 0. + t5360;
  t5442 = -0.047*t1689;
  t5462 = 0. + t5442;
  t5477 = -1.*t994;
  t5509 = 1. + t5477;
  t5530 = 0.047*t5509;
  t5542 = 0. + t5530;
  t4280 = t1689*t2621;
  t4299 = t994*t2897;
  t4580 = t4280 + t4299;
  t5643 = -0.183*t631;
  t5660 = 0. + t5643;
  t5827 = -0.1*t5755;
  t5840 = -0.183*t121;
  t5893 = 0. + t5827 + t5840;
  t5998 = -0.183*t5755;
  t6010 = 0.1*t121;
  t6021 = 0. + t5998 + t6010;
  t3197 = -1.*t121*t3167;
  t3532 = t2104*t3453;
  t3561 = t3197 + t3532;
  t5016 = t2104*t3167;
  t5033 = t121*t3453;
  t5057 = t5016 + t5033;
  t4656 = t628*t1031*t1689;
  t4679 = t994*t628*t1084;
  t4721 = t4656 + t4679;
  t3875 = -1.*t121*t3789;
  t4210 = t2104*t4209;
  t4227 = t3875 + t4210;
  t5109 = t2104*t3789;
  t5158 = t121*t4209;
  t5196 = t5109 + t5158;

  p_output1(0)=t2413;
  p_output1(1)=t3561;
  p_output1(2)=t4227;
  p_output1(3)=0.;
  p_output1(4)=t4274;
  p_output1(5)=t4580;
  p_output1(6)=t4721;
  p_output1(7)=0.;
  p_output1(8)=t4928;
  p_output1(9)=t5057;
  p_output1(10)=t5196;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2413 + 0.13205*t4274 - 0.2*t4928 + t1554*t5462 + t1810*t5542 + t1896*t5660 + t1993*t5893 + t2321*t6021 + t247*t5406*t628 + var1(0);
  p_output1(13)=0. - 0.183*t3561 + 0.13205*t4580 - 0.2*t5057 + t2621*t5462 + t2897*t5542 + t3113*t5660 + t3167*t5893 + t3453*t6021 + t1083*t5406*t628 + var1(1);
  p_output1(14)=0. - 0.183*t4227 + 0.13205*t4721 - 0.2*t5196 - 1.*t1044*t5406 + t3734*t5660 + t3789*t5893 + t4209*t6021 + t1031*t5462*t628 + t1084*t5542*t628 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



