/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t1780;
  double t4122;
  double t4952;
  double t4526;
  double t5111;
  double t3097;
  double t4663;
  double t5114;
  double t5380;
  double t5525;
  double t5846;
  double t5863;
  double t5891;
  double t1820;
  double t5969;
  double t46;
  double t6132;
  double t6180;
  double t6183;
  double t6206;
  double t6265;
  double t6275;
  double t6304;
  double t6335;
  double t6351;
  double t6361;
  double t6429;
  double t6435;
  double t6438;
  double t411;
  double t626;
  double t627;
  double t1274;
  double t3756;
  double t3995;
  double t5555;
  double t5588;
  double t5751;
  double t5827;
  double t6802;
  double t6823;
  double t6825;
  double t6854;
  double t6885;
  double t6893;
  double t5978;
  double t6045;
  double t6298;
  double t6311;
  double t6323;
  double t7035;
  double t7047;
  double t7056;
  double t6374;
  double t6380;
  double t6426;
  double t7083;
  double t7237;
  double t7277;
  double t7291;
  double t7303;
  double t7345;
  double t7594;
  double t7605;
  double t7608;
  double t7619;
  double t7621;
  double t7635;
  double t7647;
  double t7648;
  double t7649;
  t1780 = Cos(var1[3]);
  t4122 = Cos(var1[5]);
  t4952 = Sin(var1[3]);
  t4526 = Sin(var1[4]);
  t5111 = Sin(var1[5]);
  t3097 = Sin(var1[9]);
  t4663 = t1780*t4122*t4526;
  t5114 = t4952*t5111;
  t5380 = t4663 + t5114;
  t5525 = Cos(var1[9]);
  t5846 = -1.*t4122*t4952;
  t5863 = t1780*t4526*t5111;
  t5891 = t5846 + t5863;
  t1820 = Cos(var1[4]);
  t5969 = Sin(var1[10]);
  t46 = Cos(var1[10]);
  t6132 = t5525*t5380;
  t6180 = -1.*t3097*t5891;
  t6183 = t6132 + t6180;
  t6206 = Cos(var1[11]);
  t6265 = -1.*t6206;
  t6275 = 1. + t6265;
  t6304 = Sin(var1[11]);
  t6335 = t1780*t1820*t5969;
  t6351 = t46*t6183;
  t6361 = t6335 + t6351;
  t6429 = t46*t1780*t1820;
  t6435 = -1.*t5969*t6183;
  t6438 = t6429 + t6435;
  t411 = -1.*t46;
  t626 = 1. + t411;
  t627 = 0.183*t626;
  t1274 = 0. + t627;
  t3756 = -0.047*t3097;
  t3995 = 0. + t3756;
  t5555 = -1.*t5525;
  t5588 = 1. + t5555;
  t5751 = 0.047*t5588;
  t5827 = 0. + t5751;
  t6802 = t4122*t4952*t4526;
  t6823 = -1.*t1780*t5111;
  t6825 = t6802 + t6823;
  t6854 = t1780*t4122;
  t6885 = t4952*t4526*t5111;
  t6893 = t6854 + t6885;
  t5978 = 0.183*t5969;
  t6045 = 0. + t5978;
  t6298 = -0.15*t6275;
  t6311 = 0.183*t6304;
  t6323 = 0. + t6298 + t6311;
  t7035 = t5525*t6825;
  t7047 = -1.*t3097*t6893;
  t7056 = t7035 + t7047;
  t6374 = 0.183*t6275;
  t6380 = 0.15*t6304;
  t6426 = 0. + t6374 + t6380;
  t7083 = t1820*t5969*t4952;
  t7237 = t46*t7056;
  t7277 = t7083 + t7237;
  t7291 = t46*t1820*t4952;
  t7303 = -1.*t5969*t7056;
  t7345 = t7291 + t7303;
  t7594 = t5525*t1820*t4122;
  t7605 = -1.*t1820*t3097*t5111;
  t7608 = t7594 + t7605;
  t7619 = -1.*t5969*t4526;
  t7621 = t46*t7608;
  t7635 = t7619 + t7621;
  t7647 = -1.*t46*t4526;
  t7648 = -1.*t5969*t7608;
  t7649 = t7647 + t7648;
  p_output1[0]=0. + t1274*t1780*t1820 + t3995*t5380 + t5827*t5891 + 0.11079*(t3097*t5380 + t5525*t5891) + t6045*t6183 + t6323*t6361 + t6426*t6438 + 0.183*(-1.*t6304*t6361 + t6206*t6438) - 0.3*(t6206*t6361 + t6304*t6438) + var1[0];
  p_output1[1]=0. + t1274*t1820*t4952 + t3995*t6825 + t5827*t6893 + 0.11079*(t3097*t6825 + t5525*t6893) + t6045*t7056 + t6323*t7277 + t6426*t7345 + 0.183*(-1.*t6304*t7277 + t6206*t7345) - 0.3*(t6206*t7277 + t6304*t7345) + var1[1];
  p_output1[2]=0. + t1820*t3995*t4122 - 1.*t1274*t4526 + 0.11079*(t1820*t3097*t4122 + t1820*t5111*t5525) + t1820*t5111*t5827 + t6045*t7608 + t6323*t7635 + t6426*t7649 + 0.183*(-1.*t6304*t7635 + t6206*t7649) - 0.3*(t6206*t7635 + t6304*t7649) + var1[2];
}



void p_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
