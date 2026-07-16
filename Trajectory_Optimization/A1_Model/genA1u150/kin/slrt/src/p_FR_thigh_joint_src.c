/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint_src.h"

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
  double t84;
  double t3327;
  double t4368;
  double t4046;
  double t5276;
  double t1756;
  double t4305;
  double t5278;
  double t5444;
  double t5925;
  double t6013;
  double t6453;
  double t6508;
  double t264;
  double t683;
  double t6841;
  double t6843;
  double t6847;
  double t6849;
  double t811;
  double t1109;
  double t1332;
  double t1706;
  double t1834;
  double t2457;
  double t3183;
  double t3225;
  double t6553;
  double t6756;
  double t6979;
  double t6983;
  double t6985;
  double t6996;
  double t7010;
  double t7019;
  double t6859;
  double t6867;
  double t7069;
  double t7071;
  double t7082;
  double t7259;
  double t7307;
  double t7364;
  t84 = Cos(var1[3]);
  t3327 = Cos(var1[5]);
  t4368 = Sin(var1[4]);
  t4046 = Sin(var1[3]);
  t5276 = Sin(var1[5]);
  t1756 = Cos(var1[6]);
  t4305 = -1.*t3327*t4046;
  t5278 = t84*t4368*t5276;
  t5444 = t4305 + t5278;
  t5925 = t84*t3327*t4368;
  t6013 = t4046*t5276;
  t6453 = t5925 + t6013;
  t6508 = Sin(var1[6]);
  t264 = Cos(var1[4]);
  t683 = Cos(var1[7]);
  t6841 = t1756*t6453;
  t6843 = -1.*t5444*t6508;
  t6847 = t6841 + t6843;
  t6849 = Sin(var1[7]);
  t811 = -1.*t683;
  t1109 = 1. + t811;
  t1332 = 0.183*t1109;
  t1706 = 0. + t1332;
  t1834 = -1.*t1756;
  t2457 = 1. + t1834;
  t3183 = -0.047*t2457;
  t3225 = 0. + t3183;
  t6553 = 0.047*t6508;
  t6756 = 0. + t6553;
  t6979 = t84*t3327;
  t6983 = t4046*t4368*t5276;
  t6985 = t6979 + t6983;
  t6996 = t3327*t4046*t4368;
  t7010 = -1.*t84*t5276;
  t7019 = t6996 + t7010;
  t6859 = 0.183*t6849;
  t6867 = 0. + t6859;
  t7069 = t1756*t7019;
  t7071 = -1.*t6985*t6508;
  t7082 = t7069 + t7071;
  t7259 = t264*t3327*t1756;
  t7307 = -1.*t264*t5276*t6508;
  t7364 = t7259 + t7307;
  p_output1[0]=0. + t3225*t5444 - 0.17458*(t1756*t5444 + t6453*t6508) + t6453*t6756 + t6847*t6867 + t1706*t264*t84 + 0.183*(-1.*t6847*t6849 + t264*t683*t84) + var1[0];
  p_output1[1]=0. + t1706*t264*t4046 + t3225*t6985 + t6756*t7019 - 0.17458*(t1756*t6985 + t6508*t7019) + t6867*t7082 + 0.183*(t264*t4046*t683 - 1.*t6849*t7082) + var1[1];
  p_output1[2]=0. - 1.*t1706*t4368 + t264*t3225*t5276 - 0.17458*(t1756*t264*t5276 + t264*t3327*t6508) + t264*t3327*t6756 + t6867*t7364 + 0.183*(-1.*t4368*t683 - 1.*t6849*t7364) + var1[2];
}



void p_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
