/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot.h"

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
  double t289;
  double t3991;
  double t4131;
  double t4049;
  double t4141;
  double t3202;
  double t4088;
  double t4174;
  double t4184;
  double t4206;
  double t4223;
  double t4226;
  double t4322;
  double t1033;
  double t1988;
  double t4429;
  double t4431;
  double t4433;
  double t4460;
  double t4537;
  double t4549;
  double t4570;
  double t4587;
  double t4510;
  double t4518;
  double t4522;
  double t4597;
  double t4659;
  double t4718;
  double t1990;
  double t2088;
  double t2653;
  double t2743;
  double t3485;
  double t3738;
  double t3936;
  double t3950;
  double t4350;
  double t4354;
  double t4820;
  double t4854;
  double t4877;
  double t4922;
  double t4938;
  double t4940;
  double t4485;
  double t4497;
  double t4975;
  double t4977;
  double t4979;
  double t4574;
  double t4589;
  double t4590;
  double t4724;
  double t4740;
  double t4743;
  double t5045;
  double t5063;
  double t5086;
  double t5101;
  double t5102;
  double t5122;
  double t5470;
  double t5478;
  double t5484;
  double t5535;
  double t5639;
  double t5653;
  double t5668;
  double t5703;
  double t5760;
  t289 = Cos(var1[3]);
  t3991 = Cos(var1[5]);
  t4131 = Sin(var1[4]);
  t4049 = Sin(var1[3]);
  t4141 = Sin(var1[5]);
  t3202 = Cos(var1[6]);
  t4088 = -1.*t3991*t4049;
  t4174 = t289*t4131*t4141;
  t4184 = t4088 + t4174;
  t4206 = t289*t3991*t4131;
  t4223 = t4049*t4141;
  t4226 = t4206 + t4223;
  t4322 = Sin(var1[6]);
  t1033 = Cos(var1[4]);
  t1988 = Cos(var1[7]);
  t4429 = t3202*t4226;
  t4431 = -1.*t4184*t4322;
  t4433 = t4429 + t4431;
  t4460 = Sin(var1[7]);
  t4537 = Cos(var1[8]);
  t4549 = -1.*t4537;
  t4570 = 1. + t4549;
  t4587 = Sin(var1[8]);
  t4510 = t289*t1033*t1988;
  t4518 = -1.*t4433*t4460;
  t4522 = t4510 + t4518;
  t4597 = t1988*t4433;
  t4659 = t289*t1033*t4460;
  t4718 = t4597 + t4659;
  t1990 = -1.*t1988;
  t2088 = 1. + t1990;
  t2653 = 0.183*t2088;
  t2743 = 0. + t2653;
  t3485 = -1.*t3202;
  t3738 = 1. + t3485;
  t3936 = -0.047*t3738;
  t3950 = 0. + t3936;
  t4350 = 0.047*t4322;
  t4354 = 0. + t4350;
  t4820 = t289*t3991;
  t4854 = t4049*t4131*t4141;
  t4877 = t4820 + t4854;
  t4922 = t3991*t4049*t4131;
  t4938 = -1.*t289*t4141;
  t4940 = t4922 + t4938;
  t4485 = 0.183*t4460;
  t4497 = 0. + t4485;
  t4975 = t3202*t4940;
  t4977 = -1.*t4877*t4322;
  t4979 = t4975 + t4977;
  t4574 = 0.183*t4570;
  t4589 = 0.15*t4587;
  t4590 = 0. + t4574 + t4589;
  t4724 = -0.15*t4570;
  t4740 = 0.183*t4587;
  t4743 = 0. + t4724 + t4740;
  t5045 = t1033*t1988*t4049;
  t5063 = -1.*t4979*t4460;
  t5086 = t5045 + t5063;
  t5101 = t1988*t4979;
  t5102 = t1033*t4049*t4460;
  t5122 = t5101 + t5102;
  t5470 = t1033*t3991*t3202;
  t5478 = -1.*t1033*t4141*t4322;
  t5484 = t5470 + t5478;
  t5535 = -1.*t1988*t4131;
  t5639 = -1.*t5484*t4460;
  t5653 = t5535 + t5639;
  t5668 = t1988*t5484;
  t5703 = -1.*t4131*t4460;
  t5760 = t5668 + t5703;

  p_output1(0)=0. + t1033*t2743*t289 + t3950*t4184 - 0.13205*(t3202*t4184 + t4226*t4322) + t4226*t4354 + t4433*t4497 + t4522*t4590 - 0.3*(t4522*t4587 + t4537*t4718) + 0.183*(t4522*t4537 - 1.*t4587*t4718) + t4718*t4743 + var1(0);
  p_output1(1)=0. + t1033*t2743*t4049 + t3950*t4877 + t4354*t4940 - 0.13205*(t3202*t4877 + t4322*t4940) + t4497*t4979 + t4590*t5086 + t4743*t5122 - 0.3*(t4587*t5086 + t4537*t5122) + 0.183*(t4537*t5086 - 1.*t4587*t5122) + var1(1);
  p_output1(2)=0. - 1.*t2743*t4131 + t1033*t3950*t4141 - 0.13205*(t1033*t3202*t4141 + t1033*t3991*t4322) + t1033*t3991*t4354 + t4497*t5484 + t4590*t5653 + t4743*t5760 - 0.3*(t4587*t5653 + t4537*t5760) + 0.183*(t4537*t5653 - 1.*t4587*t5760) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



