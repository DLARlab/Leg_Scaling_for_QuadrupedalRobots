/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint_src.h"

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
  double t541;
  double t959;
  double t652;
  double t789;
  double t991;
  double t606;
  double t863;
  double t1062;
  double t1172;
  double t1410;
  double t1729;
  double t1791;
  double t1874;
  double t230;
  double t509;
  double t2129;
  double t2269;
  double t2315;
  double t2354;
  double t296;
  double t301;
  double t426;
  double t483;
  double t633;
  double t643;
  double t1526;
  double t1546;
  double t1561;
  double t1693;
  double t2483;
  double t2485;
  double t2546;
  double t2654;
  double t2687;
  double t2694;
  double t2171;
  double t2246;
  double t3348;
  double t4120;
  double t7128;
  double t9160;
  double t9162;
  double t9169;
  double t9349;
  double t9357;
  double t9379;
  double t9522;
  double t9526;
  double t9542;
  double t9612;
  double t9619;
  double t9623;
  double t9639;
  double t9643;
  double t9644;
  double t9724;
  double t9726;
  double t9738;
  double t2010;
  double t9789;
  double t9810;
  double t9952;
  double t9966;
  double t9982;
  double t10015;
  double t10032;
  double t10110;
  double t10112;
  double t10117;
  double t10120;
  double t10128;
  double t9864;
  double t9986;
  double t9988;
  double t9995;
  double t9997;
  double t9998;
  double t10004;
  double t10189;
  double t10196;
  t541 = Sin(var1[3]);
  t959 = Cos(var1[3]);
  t652 = Cos(var1[5]);
  t789 = Sin(var1[4]);
  t991 = Sin(var1[5]);
  t606 = Sin(var1[12]);
  t863 = -1.*t652*t541*t789;
  t1062 = t959*t991;
  t1172 = t863 + t1062;
  t1410 = Cos(var1[12]);
  t1729 = -1.*t959*t652;
  t1791 = -1.*t541*t789*t991;
  t1874 = t1729 + t1791;
  t230 = Cos(var1[13]);
  t509 = Cos(var1[4]);
  t2129 = Sin(var1[13]);
  t2269 = t1410*t1172;
  t2315 = -1.*t606*t1874;
  t2354 = t2269 + t2315;
  t296 = -1.*t230;
  t301 = 1. + t296;
  t426 = -0.183*t301;
  t483 = 0. + t426;
  t633 = 0.047*t606;
  t643 = 0. + t633;
  t1526 = -1.*t1410;
  t1546 = 1. + t1526;
  t1561 = -0.047*t1546;
  t1693 = 0. + t1561;
  t2483 = t959*t652*t789;
  t2485 = t541*t991;
  t2546 = t2483 + t2485;
  t2654 = -1.*t652*t541;
  t2687 = t959*t789*t991;
  t2694 = t2654 + t2687;
  t2171 = -0.183*t2129;
  t2246 = 0. + t2171;
  t3348 = t1410*t2546;
  t4120 = -1.*t606*t2694;
  t7128 = t3348 + t4120;
  t9160 = t1410*t959*t509*t652;
  t9162 = -1.*t959*t509*t606*t991;
  t9169 = t9160 + t9162;
  t9349 = t1410*t509*t652*t541;
  t9357 = -1.*t509*t606*t541*t991;
  t9379 = t9349 + t9357;
  t9522 = -1.*t1410*t652*t789;
  t9526 = t606*t789*t991;
  t9542 = t9522 + t9526;
  t9612 = t652*t541;
  t9619 = -1.*t959*t789*t991;
  t9623 = t9612 + t9619;
  t9639 = -1.*t606*t2546;
  t9643 = t1410*t9623;
  t9644 = t9639 + t9643;
  t9724 = t652*t541*t789;
  t9726 = -1.*t959*t991;
  t9738 = t9724 + t9726;
  t2010 = t1410*t1874;
  t9789 = -1.*t606*t9738;
  t9810 = t9789 + t2010;
  t9952 = -1.*t509*t652*t606;
  t9966 = -1.*t1410*t509*t991;
  t9982 = t9952 + t9966;
  t10015 = -1.*t1410*t2694;
  t10032 = t9639 + t10015;
  t10110 = t959*t652;
  t10112 = t541*t789*t991;
  t10117 = t10110 + t10112;
  t10120 = -1.*t1410*t10117;
  t10128 = t9789 + t10120;
  t9864 = t1410*t9738;
  t9986 = t2246*t9982;
  t9988 = 0.183*t2129*t9982;
  t9995 = t1410*t509*t652;
  t9997 = -1.*t509*t606*t991;
  t9998 = t9995 + t9997;
  t10004 = -0.13205*t9998;
  t10189 = -1.*t606*t10117;
  t10196 = t9864 + t10189;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1693*t1874 + t2246*t2354 - 1.*t483*t509*t541 - 0.183*(-1.*t2129*t2354 - 1.*t230*t509*t541) - 0.13205*(t2010 + t1172*t606) + t1172*t643;
  p_output1[10]=t1693*t2694 - 0.13205*(t1410*t2694 + t2546*t606) + t2546*t643 + t2246*t7128 + t483*t509*t959 - 0.183*(-1.*t2129*t7128 + t230*t509*t959);
  p_output1[11]=0;
  p_output1[12]=t2246*t9169 + t509*t643*t652*t959 - 1.*t483*t789*t959 - 0.183*(-1.*t2129*t9169 - 1.*t230*t789*t959) + t1693*t509*t959*t991 - 0.13205*(t509*t606*t652*t959 + t1410*t509*t959*t991);
  p_output1[13]=t509*t541*t643*t652 - 1.*t483*t541*t789 + t2246*t9379 - 0.183*(-1.*t230*t541*t789 - 1.*t2129*t9379) + t1693*t509*t541*t991 - 0.13205*(t509*t541*t606*t652 + t1410*t509*t541*t991);
  p_output1[14]=-1.*t483*t509 - 1.*t643*t652*t789 + t2246*t9542 - 0.183*(-1.*t230*t509 - 1.*t2129*t9542) - 1.*t1693*t789*t991 - 0.13205*(-1.*t606*t652*t789 - 1.*t1410*t789*t991);
  p_output1[15]=t1693*t2546 + t643*t9623 - 0.13205*(t3348 + t606*t9623) + 0.183*t2129*t9644 + t2246*t9644;
  p_output1[16]=t1874*t643 + t1693*t9738 + 0.183*t2129*t9810 + t2246*t9810 - 0.13205*(t1874*t606 + t9864);
  p_output1[17]=t10004 + t1693*t509*t652 - 1.*t509*t643*t991 + t9986 + t9988;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.183*t10032*t2129 + t10032*t2246 + 0.047*t1410*t2546 - 0.047*t2694*t606 - 0.13205*t7128;
  p_output1[37]=-0.13205*t10196 + 0.183*t10128*t2129 + t10128*t2246 - 0.047*t10117*t606 + 0.047*t1410*t9738;
  p_output1[38]=t10004 + 0.047*t1410*t509*t652 - 0.047*t509*t606*t991 + t9986 + t9988;
  p_output1[39]=-0.183*t230*t7128 - 0.183*t2129*t509*t959 - 0.183*(-1.*t230*t7128 - 1.*t2129*t509*t959);
  p_output1[40]=-0.183*t10196*t230 - 0.183*t2129*t509*t541 - 0.183*(-1.*t10196*t230 - 1.*t2129*t509*t541);
  p_output1[41]=0.183*t2129*t789 - 0.183*t230*t9998 - 0.183*(t2129*t789 - 1.*t230*t9998);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
