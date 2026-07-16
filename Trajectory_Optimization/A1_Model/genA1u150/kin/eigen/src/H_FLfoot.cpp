/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot.h"

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
  double t625;
  double t937;
  double t1163;
  double t1012;
  double t1273;
  double t807;
  double t731;
  double t794;
  double t906;
  double t1081;
  double t1344;
  double t1359;
  double t1428;
  double t1482;
  double t1553;
  double t1557;
  double t1644;
  double t1691;
  double t1755;
  double t296;
  double t2076;
  double t2434;
  double t2453;
  double t2466;
  double t2467;
  double t2470;
  double t2501;
  double t2510;
  double t2536;
  double t2601;
  double t3242;
  double t3284;
  double t3304;
  double t802;
  double t1799;
  double t1800;
  double t2085;
  double t2107;
  double t2119;
  double t2250;
  double t2618;
  double t2775;
  double t2799;
  double t2865;
  double t3092;
  double t3241;
  double t3334;
  double t3343;
  double t3437;
  double t3441;
  double t3465;
  double t3777;
  double t3805;
  double t3816;
  double t5062;
  double t5076;
  double t1944;
  double t2136;
  double t2157;
  double t4085;
  double t4108;
  double t4127;
  double t4432;
  double t4496;
  double t4583;
  double t4591;
  double t4642;
  double t4667;
  double t4806;
  double t4816;
  double t4876;
  double t4891;
  double t3857;
  double t3865;
  double t3874;
  double t4996;
  double t5012;
  double t5094;
  double t5119;
  double t5199;
  double t5274;
  double t5301;
  double t5344;
  double t2786;
  double t3149;
  double t3165;
  double t4195;
  double t4200;
  double t4229;
  double t3911;
  double t3949;
  double t3951;
  double t3363;
  double t3708;
  double t3771;
  double t4258;
  double t4260;
  double t4289;
  t625 = Cos(var1[3]);
  t937 = Cos(var1[5]);
  t1163 = Sin(var1[3]);
  t1012 = Sin(var1[4]);
  t1273 = Sin(var1[5]);
  t807 = Cos(var1[10]);
  t731 = Cos(var1[4]);
  t794 = Sin(var1[10]);
  t906 = Cos(var1[9]);
  t1081 = t625*t937*t1012;
  t1344 = t1163*t1273;
  t1359 = t1081 + t1344;
  t1428 = t906*t1359;
  t1482 = Sin(var1[9]);
  t1553 = -1.*t937*t1163;
  t1557 = t625*t1012*t1273;
  t1644 = t1553 + t1557;
  t1691 = -1.*t1482*t1644;
  t1755 = t1428 + t1691;
  t296 = Sin(var1[11]);
  t2076 = Cos(var1[11]);
  t2434 = t937*t1163*t1012;
  t2453 = -1.*t625*t1273;
  t2466 = t2434 + t2453;
  t2467 = t906*t2466;
  t2470 = t625*t937;
  t2501 = t1163*t1012*t1273;
  t2510 = t2470 + t2501;
  t2536 = -1.*t1482*t2510;
  t2601 = t2467 + t2536;
  t3242 = t906*t731*t937;
  t3284 = -1.*t731*t1482*t1273;
  t3304 = t3242 + t3284;
  t802 = t625*t731*t794;
  t1799 = t807*t1755;
  t1800 = t802 + t1799;
  t2085 = t807*t625*t731;
  t2107 = -1.*t794*t1755;
  t2119 = t2085 + t2107;
  t2250 = t731*t794*t1163;
  t2618 = t807*t2601;
  t2775 = t2250 + t2618;
  t2799 = t807*t731*t1163;
  t2865 = -1.*t794*t2601;
  t3092 = t2799 + t2865;
  t3241 = -1.*t794*t1012;
  t3334 = t807*t3304;
  t3343 = t3241 + t3334;
  t3437 = -1.*t807*t1012;
  t3441 = -1.*t794*t3304;
  t3465 = t3437 + t3441;
  t3777 = t1482*t1359;
  t3805 = t906*t1644;
  t3816 = t3777 + t3805;
  t5062 = -1.*t2076;
  t5076 = 1. + t5062;
  t1944 = -1.*t296*t1800;
  t2136 = t2076*t2119;
  t2157 = t1944 + t2136;
  t4085 = t2076*t1800;
  t4108 = t296*t2119;
  t4127 = t4085 + t4108;
  t4432 = -1.*t807;
  t4496 = 1. + t4432;
  t4583 = 0.183*t4496;
  t4591 = 0. + t4583;
  t4642 = -0.047*t1482;
  t4667 = 0. + t4642;
  t4806 = -1.*t906;
  t4816 = 1. + t4806;
  t4876 = 0.047*t4816;
  t4891 = 0. + t4876;
  t3857 = t1482*t2466;
  t3865 = t906*t2510;
  t3874 = t3857 + t3865;
  t4996 = 0.183*t794;
  t5012 = 0. + t4996;
  t5094 = -0.3*t5076;
  t5119 = 0.183*t296;
  t5199 = 0. + t5094 + t5119;
  t5274 = 0.183*t5076;
  t5301 = 0.3*t296;
  t5344 = 0. + t5274 + t5301;
  t2786 = -1.*t296*t2775;
  t3149 = t2076*t3092;
  t3165 = t2786 + t3149;
  t4195 = t2076*t2775;
  t4200 = t296*t3092;
  t4229 = t4195 + t4200;
  t3911 = t731*t937*t1482;
  t3949 = t906*t731*t1273;
  t3951 = t3911 + t3949;
  t3363 = -1.*t296*t3343;
  t3708 = t2076*t3465;
  t3771 = t3363 + t3708;
  t4258 = t2076*t3343;
  t4260 = t296*t3465;
  t4289 = t4258 + t4260;

  p_output1(0)=t2157;
  p_output1(1)=t3165;
  p_output1(2)=t3771;
  p_output1(3)=0.;
  p_output1(4)=t3816;
  p_output1(5)=t3874;
  p_output1(6)=t3951;
  p_output1(7)=0.;
  p_output1(8)=t4127;
  p_output1(9)=t4229;
  p_output1(10)=t4289;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2157 + 0.17458*t3816 - 0.6*t4127 + t1359*t4667 + t1644*t4891 + t1755*t5012 + t1800*t5199 + t2119*t5344 + t4591*t625*t731 + var1(0);
  p_output1(13)=0. + 0.183*t3165 + 0.17458*t3874 - 0.6*t4229 + t2466*t4667 + t2510*t4891 + t2601*t5012 + t2775*t5199 + t3092*t5344 + t1163*t4591*t731 + var1(1);
  p_output1(14)=0. + 0.183*t3771 + 0.17458*t3951 - 0.6*t4289 - 1.*t1012*t4591 + t3304*t5012 + t3343*t5199 + t3465*t5344 + t1273*t4891*t731 + t4667*t731*t937 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



