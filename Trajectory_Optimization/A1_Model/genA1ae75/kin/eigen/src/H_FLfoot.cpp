/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:01 GMT-05:00
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
  double t135;
  double t799;
  double t971;
  double t884;
  double t975;
  double t563;
  double t326;
  double t414;
  double t732;
  double t934;
  double t980;
  double t1127;
  double t1251;
  double t1333;
  double t1522;
  double t1736;
  double t1899;
  double t1940;
  double t2072;
  double t92;
  double t2579;
  double t2960;
  double t3031;
  double t3034;
  double t3051;
  double t3056;
  double t3086;
  double t3193;
  double t3263;
  double t3319;
  double t3774;
  double t3915;
  double t3938;
  double t520;
  double t2186;
  double t2317;
  double t2615;
  double t2623;
  double t2654;
  double t2938;
  double t3322;
  double t3373;
  double t3456;
  double t3474;
  double t3549;
  double t3688;
  double t4031;
  double t4100;
  double t4152;
  double t4176;
  double t4311;
  double t4385;
  double t4468;
  double t4526;
  double t5191;
  double t5209;
  double t2491;
  double t2695;
  double t2848;
  double t4750;
  double t4758;
  double t4759;
  double t4827;
  double t4867;
  double t4879;
  double t4922;
  double t5025;
  double t5034;
  double t5072;
  double t5102;
  double t5128;
  double t5143;
  double t4567;
  double t4597;
  double t4611;
  double t5163;
  double t5170;
  double t5234;
  double t5237;
  double t5257;
  double t5286;
  double t5303;
  double t5307;
  double t3432;
  double t3561;
  double t3608;
  double t4762;
  double t4763;
  double t4767;
  double t4721;
  double t4724;
  double t4731;
  double t4144;
  double t4321;
  double t4362;
  double t4769;
  double t4815;
  double t4820;
  t135 = Cos(var1[3]);
  t799 = Cos(var1[5]);
  t971 = Sin(var1[3]);
  t884 = Sin(var1[4]);
  t975 = Sin(var1[5]);
  t563 = Cos(var1[10]);
  t326 = Cos(var1[4]);
  t414 = Sin(var1[10]);
  t732 = Cos(var1[9]);
  t934 = t135*t799*t884;
  t980 = t971*t975;
  t1127 = t934 + t980;
  t1251 = t732*t1127;
  t1333 = Sin(var1[9]);
  t1522 = -1.*t799*t971;
  t1736 = t135*t884*t975;
  t1899 = t1522 + t1736;
  t1940 = -1.*t1333*t1899;
  t2072 = t1251 + t1940;
  t92 = Sin(var1[11]);
  t2579 = Cos(var1[11]);
  t2960 = t799*t971*t884;
  t3031 = -1.*t135*t975;
  t3034 = t2960 + t3031;
  t3051 = t732*t3034;
  t3056 = t135*t799;
  t3086 = t971*t884*t975;
  t3193 = t3056 + t3086;
  t3263 = -1.*t1333*t3193;
  t3319 = t3051 + t3263;
  t3774 = t732*t326*t799;
  t3915 = -1.*t326*t1333*t975;
  t3938 = t3774 + t3915;
  t520 = t135*t326*t414;
  t2186 = t563*t2072;
  t2317 = t520 + t2186;
  t2615 = t563*t135*t326;
  t2623 = -1.*t414*t2072;
  t2654 = t2615 + t2623;
  t2938 = t326*t414*t971;
  t3322 = t563*t3319;
  t3373 = t2938 + t3322;
  t3456 = t563*t326*t971;
  t3474 = -1.*t414*t3319;
  t3549 = t3456 + t3474;
  t3688 = -1.*t414*t884;
  t4031 = t563*t3938;
  t4100 = t3688 + t4031;
  t4152 = -1.*t563*t884;
  t4176 = -1.*t414*t3938;
  t4311 = t4152 + t4176;
  t4385 = t1333*t1127;
  t4468 = t732*t1899;
  t4526 = t4385 + t4468;
  t5191 = -1.*t2579;
  t5209 = 1. + t5191;
  t2491 = -1.*t92*t2317;
  t2695 = t2579*t2654;
  t2848 = t2491 + t2695;
  t4750 = t2579*t2317;
  t4758 = t92*t2654;
  t4759 = t4750 + t4758;
  t4827 = -1.*t563;
  t4867 = 1. + t4827;
  t4879 = 0.183*t4867;
  t4922 = 0. + t4879;
  t5025 = -0.047*t1333;
  t5034 = 0. + t5025;
  t5072 = -1.*t732;
  t5102 = 1. + t5072;
  t5128 = 0.047*t5102;
  t5143 = 0. + t5128;
  t4567 = t1333*t3034;
  t4597 = t732*t3193;
  t4611 = t4567 + t4597;
  t5163 = 0.183*t414;
  t5170 = 0. + t5163;
  t5234 = -0.15*t5209;
  t5237 = 0.183*t92;
  t5257 = 0. + t5234 + t5237;
  t5286 = 0.183*t5209;
  t5303 = 0.15*t92;
  t5307 = 0. + t5286 + t5303;
  t3432 = -1.*t92*t3373;
  t3561 = t2579*t3549;
  t3608 = t3432 + t3561;
  t4762 = t2579*t3373;
  t4763 = t92*t3549;
  t4767 = t4762 + t4763;
  t4721 = t326*t799*t1333;
  t4724 = t732*t326*t975;
  t4731 = t4721 + t4724;
  t4144 = -1.*t92*t4100;
  t4321 = t2579*t4311;
  t4362 = t4144 + t4321;
  t4769 = t2579*t4100;
  t4815 = t92*t4311;
  t4820 = t4769 + t4815;

  p_output1(0)=t2848;
  p_output1(1)=t3608;
  p_output1(2)=t4362;
  p_output1(3)=0.;
  p_output1(4)=t4526;
  p_output1(5)=t4611;
  p_output1(6)=t4731;
  p_output1(7)=0.;
  p_output1(8)=t4759;
  p_output1(9)=t4767;
  p_output1(10)=t4820;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2848 + 0.13205*t4526 - 0.3*t4759 + t135*t326*t4922 + t1127*t5034 + t1899*t5143 + t2072*t5170 + t2317*t5257 + t2654*t5307 + var1(0);
  p_output1(13)=0. + 0.183*t3608 + 0.13205*t4611 - 0.3*t4767 + t3034*t5034 + t3193*t5143 + t3319*t5170 + t3373*t5257 + t3549*t5307 + t326*t4922*t971 + var1(1);
  p_output1(14)=0. + 0.183*t4362 + 0.13205*t4731 - 0.3*t4820 + t3938*t5170 + t4100*t5257 + t4311*t5307 + t326*t5034*t799 - 1.*t4922*t884 + t326*t5143*t975 + var1(2);
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



