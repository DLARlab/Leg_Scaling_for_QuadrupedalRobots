/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint_src.h"

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
  double t1926;
  double t3399;
  double t3545;
  double t3402;
  double t4729;
  double t3000;
  double t3414;
  double t4842;
  double t5250;
  double t6501;
  double t7232;
  double t7246;
  double t7386;
  double t2452;
  double t7968;
  double t1192;
  double t7996;
  double t8005;
  double t8120;
  double t8189;
  double t8338;
  double t8414;
  double t8498;
  double t8536;
  double t8550;
  double t8600;
  double t8849;
  double t8876;
  double t8878;
  double t1270;
  double t1453;
  double t1824;
  double t1850;
  double t3028;
  double t3391;
  double t6928;
  double t6933;
  double t7203;
  double t7204;
  double t9046;
  double t9067;
  double t9070;
  double t9130;
  double t9165;
  double t9214;
  double t7993;
  double t7995;
  double t8483;
  double t8513;
  double t8515;
  double t9566;
  double t9581;
  double t9726;
  double t8632;
  double t8659;
  double t8836;
  double t9795;
  double t9835;
  double t9843;
  double t9845;
  double t9846;
  double t9857;
  double t9977;
  double t9980;
  double t9981;
  double t9983;
  double t9987;
  double t9988;
  double t9996;
  double t9997;
  double t9999;
  t1926 = Cos(var1[3]);
  t3399 = Cos(var1[5]);
  t3545 = Sin(var1[3]);
  t3402 = Sin(var1[4]);
  t4729 = Sin(var1[5]);
  t3000 = Sin(var1[9]);
  t3414 = t1926*t3399*t3402;
  t4842 = t3545*t4729;
  t5250 = t3414 + t4842;
  t6501 = Cos(var1[9]);
  t7232 = -1.*t3399*t3545;
  t7246 = t1926*t3402*t4729;
  t7386 = t7232 + t7246;
  t2452 = Cos(var1[4]);
  t7968 = Sin(var1[10]);
  t1192 = Cos(var1[10]);
  t7996 = t6501*t5250;
  t8005 = -1.*t3000*t7386;
  t8120 = t7996 + t8005;
  t8189 = Cos(var1[11]);
  t8338 = -1.*t8189;
  t8414 = 1. + t8338;
  t8498 = Sin(var1[11]);
  t8536 = t1926*t2452*t7968;
  t8550 = t1192*t8120;
  t8600 = t8536 + t8550;
  t8849 = t1192*t1926*t2452;
  t8876 = -1.*t7968*t8120;
  t8878 = t8849 + t8876;
  t1270 = -1.*t1192;
  t1453 = 1. + t1270;
  t1824 = 0.183*t1453;
  t1850 = 0. + t1824;
  t3028 = -0.047*t3000;
  t3391 = 0. + t3028;
  t6928 = -1.*t6501;
  t6933 = 1. + t6928;
  t7203 = 0.047*t6933;
  t7204 = 0. + t7203;
  t9046 = t3399*t3545*t3402;
  t9067 = -1.*t1926*t4729;
  t9070 = t9046 + t9067;
  t9130 = t1926*t3399;
  t9165 = t3545*t3402*t4729;
  t9214 = t9130 + t9165;
  t7993 = 0.183*t7968;
  t7995 = 0. + t7993;
  t8483 = -0.15*t8414;
  t8513 = 0.183*t8498;
  t8515 = 0. + t8483 + t8513;
  t9566 = t6501*t9070;
  t9581 = -1.*t3000*t9214;
  t9726 = t9566 + t9581;
  t8632 = 0.183*t8414;
  t8659 = 0.15*t8498;
  t8836 = 0. + t8632 + t8659;
  t9795 = t2452*t7968*t3545;
  t9835 = t1192*t9726;
  t9843 = t9795 + t9835;
  t9845 = t1192*t2452*t3545;
  t9846 = -1.*t7968*t9726;
  t9857 = t9845 + t9846;
  t9977 = t6501*t2452*t3399;
  t9980 = -1.*t2452*t3000*t4729;
  t9981 = t9977 + t9980;
  t9983 = -1.*t7968*t3402;
  t9987 = t1192*t9981;
  t9988 = t9983 + t9987;
  t9996 = -1.*t1192*t3402;
  t9997 = -1.*t7968*t9981;
  t9999 = t9996 + t9997;
  p_output1[0]=0. + t1850*t1926*t2452 + t3391*t5250 + t7204*t7386 + 0.11079*(t3000*t5250 + t6501*t7386) + t7995*t8120 + t8515*t8600 + t8836*t8878 + 0.183*(-1.*t8498*t8600 + t8189*t8878) - 0.15*(t8189*t8600 + t8498*t8878) + var1[0];
  p_output1[1]=0. + t1850*t2452*t3545 + t3391*t9070 + t7204*t9214 + 0.11079*(t3000*t9070 + t6501*t9214) + t7995*t9726 + t8515*t9843 + t8836*t9857 + 0.183*(-1.*t8498*t9843 + t8189*t9857) - 0.15*(t8189*t9843 + t8498*t9857) + var1[1];
  p_output1[2]=0. + t2452*t3391*t3399 - 1.*t1850*t3402 + 0.11079*(t2452*t3000*t3399 + t2452*t4729*t6501) + t2452*t4729*t7204 + t7995*t9981 + t8515*t9988 + t8836*t9999 + 0.183*(-1.*t8498*t9988 + t8189*t9999) - 0.15*(t8189*t9988 + t8498*t9999) + var1[2];
}



void p_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
