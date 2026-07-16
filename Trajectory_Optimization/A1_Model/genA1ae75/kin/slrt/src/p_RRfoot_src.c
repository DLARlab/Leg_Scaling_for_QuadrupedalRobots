/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot_src.h"

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
  double t858;
  double t6437;
  double t6795;
  double t6713;
  double t6834;
  double t2892;
  double t6784;
  double t6840;
  double t6843;
  double t6877;
  double t6910;
  double t6911;
  double t6913;
  double t2045;
  double t6989;
  double t233;
  double t7011;
  double t7015;
  double t7017;
  double t7031;
  double t7054;
  double t7099;
  double t7129;
  double t7183;
  double t7198;
  double t7199;
  double t7208;
  double t7216;
  double t7217;
  double t373;
  double t418;
  double t419;
  double t596;
  double t3780;
  double t6105;
  double t6885;
  double t6898;
  double t6901;
  double t6908;
  double t7331;
  double t7333;
  double t7338;
  double t7340;
  double t7343;
  double t7351;
  double t7001;
  double t7004;
  double t7122;
  double t7159;
  double t7174;
  double t7365;
  double t7371;
  double t7375;
  double t7203;
  double t7204;
  double t7207;
  double t7397;
  double t7398;
  double t7399;
  double t7434;
  double t7441;
  double t7452;
  double t7531;
  double t7532;
  double t7537;
  double t7539;
  double t7541;
  double t7553;
  double t7558;
  double t7564;
  double t7568;
  t858 = Cos(var1[3]);
  t6437 = Cos(var1[5]);
  t6795 = Sin(var1[3]);
  t6713 = Sin(var1[4]);
  t6834 = Sin(var1[5]);
  t2892 = Sin(var1[12]);
  t6784 = t858*t6437*t6713;
  t6840 = t6795*t6834;
  t6843 = t6784 + t6840;
  t6877 = Cos(var1[12]);
  t6910 = -1.*t6437*t6795;
  t6911 = t858*t6713*t6834;
  t6913 = t6910 + t6911;
  t2045 = Cos(var1[4]);
  t6989 = Sin(var1[13]);
  t233 = Cos(var1[13]);
  t7011 = t6877*t6843;
  t7015 = -1.*t2892*t6913;
  t7017 = t7011 + t7015;
  t7031 = Cos(var1[14]);
  t7054 = -1.*t7031;
  t7099 = 1. + t7054;
  t7129 = Sin(var1[14]);
  t7183 = t858*t2045*t6989;
  t7198 = t233*t7017;
  t7199 = t7183 + t7198;
  t7208 = t233*t858*t2045;
  t7216 = -1.*t6989*t7017;
  t7217 = t7208 + t7216;
  t373 = -1.*t233;
  t418 = 1. + t373;
  t419 = -0.183*t418;
  t596 = 0. + t419;
  t3780 = 0.047*t2892;
  t6105 = 0. + t3780;
  t6885 = -1.*t6877;
  t6898 = 1. + t6885;
  t6901 = -0.047*t6898;
  t6908 = 0. + t6901;
  t7331 = t6437*t6795*t6713;
  t7333 = -1.*t858*t6834;
  t7338 = t7331 + t7333;
  t7340 = t858*t6437;
  t7343 = t6795*t6713*t6834;
  t7351 = t7340 + t7343;
  t7001 = -0.183*t6989;
  t7004 = 0. + t7001;
  t7122 = -0.15*t7099;
  t7159 = -0.183*t7129;
  t7174 = 0. + t7122 + t7159;
  t7365 = t6877*t7338;
  t7371 = -1.*t2892*t7351;
  t7375 = t7365 + t7371;
  t7203 = -0.183*t7099;
  t7204 = 0.15*t7129;
  t7207 = 0. + t7203 + t7204;
  t7397 = t2045*t6989*t6795;
  t7398 = t233*t7375;
  t7399 = t7397 + t7398;
  t7434 = t233*t2045*t6795;
  t7441 = -1.*t6989*t7375;
  t7452 = t7434 + t7441;
  t7531 = t6877*t2045*t6437;
  t7532 = -1.*t2045*t2892*t6834;
  t7537 = t7531 + t7532;
  t7539 = -1.*t6989*t6713;
  t7541 = t233*t7537;
  t7553 = t7539 + t7541;
  t7558 = -1.*t233*t6713;
  t7564 = -1.*t6989*t7537;
  t7568 = t7558 + t7564;
  p_output1[0]=0. + t6105*t6843 + t6908*t6913 - 0.13205*(t2892*t6843 + t6877*t6913) + t7004*t7017 + t7174*t7199 + t7207*t7217 - 0.183*(-1.*t7129*t7199 + t7031*t7217) - 0.3*(t7031*t7199 + t7129*t7217) + t2045*t596*t858 + var1[0];
  p_output1[1]=0. + t2045*t596*t6795 + t6105*t7338 + t6908*t7351 - 0.13205*(t2892*t7338 + t6877*t7351) + t7004*t7375 + t7174*t7399 + t7207*t7452 - 0.183*(-1.*t7129*t7399 + t7031*t7452) - 0.3*(t7031*t7399 + t7129*t7452) + var1[1];
  p_output1[2]=0. + t2045*t6105*t6437 - 1.*t596*t6713 - 0.13205*(t2045*t2892*t6437 + t2045*t6834*t6877) + t2045*t6834*t6908 + t7004*t7537 + t7174*t7553 + t7207*t7568 - 0.183*(-1.*t7129*t7553 + t7031*t7568) - 0.3*(t7031*t7553 + t7129*t7568) + var1[2];
}



void p_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
