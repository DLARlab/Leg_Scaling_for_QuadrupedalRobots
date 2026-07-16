/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint_src.h"

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
  double t684;
  double t5826;
  double t6192;
  double t5851;
  double t6309;
  double t4046;
  double t5977;
  double t6578;
  double t6801;
  double t6867;
  double t6877;
  double t6971;
  double t6973;
  double t710;
  double t805;
  double t7216;
  double t7221;
  double t7238;
  double t7298;
  double t7377;
  double t7443;
  double t7448;
  double t7451;
  double t7343;
  double t7356;
  double t7371;
  double t7467;
  double t7472;
  double t7476;
  double t1617;
  double t1655;
  double t1664;
  double t3396;
  double t4366;
  double t4708;
  double t4817;
  double t5085;
  double t6979;
  double t6980;
  double t7796;
  double t7893;
  double t7905;
  double t7970;
  double t7976;
  double t8018;
  double t7304;
  double t7311;
  double t8096;
  double t8172;
  double t8194;
  double t7450;
  double t7452;
  double t7454;
  double t7477;
  double t7480;
  double t7490;
  double t8269;
  double t8339;
  double t8362;
  double t8406;
  double t8432;
  double t8480;
  double t8968;
  double t9001;
  double t9024;
  double t9049;
  double t9057;
  double t9157;
  double t9232;
  double t9343;
  double t9344;
  t684 = Cos(var1[3]);
  t5826 = Cos(var1[5]);
  t6192 = Sin(var1[4]);
  t5851 = Sin(var1[3]);
  t6309 = Sin(var1[5]);
  t4046 = Cos(var1[6]);
  t5977 = -1.*t5826*t5851;
  t6578 = t684*t6192*t6309;
  t6801 = t5977 + t6578;
  t6867 = t684*t5826*t6192;
  t6877 = t5851*t6309;
  t6971 = t6867 + t6877;
  t6973 = Sin(var1[6]);
  t710 = Cos(var1[4]);
  t805 = Cos(var1[7]);
  t7216 = t4046*t6971;
  t7221 = -1.*t6801*t6973;
  t7238 = t7216 + t7221;
  t7298 = Sin(var1[7]);
  t7377 = Cos(var1[8]);
  t7443 = -1.*t7377;
  t7448 = 1. + t7443;
  t7451 = Sin(var1[8]);
  t7343 = t684*t710*t805;
  t7356 = -1.*t7238*t7298;
  t7371 = t7343 + t7356;
  t7467 = t805*t7238;
  t7472 = t684*t710*t7298;
  t7476 = t7467 + t7472;
  t1617 = -1.*t805;
  t1655 = 1. + t1617;
  t1664 = 0.183*t1655;
  t3396 = 0. + t1664;
  t4366 = -1.*t4046;
  t4708 = 1. + t4366;
  t4817 = -0.047*t4708;
  t5085 = 0. + t4817;
  t6979 = 0.047*t6973;
  t6980 = 0. + t6979;
  t7796 = t684*t5826;
  t7893 = t5851*t6192*t6309;
  t7905 = t7796 + t7893;
  t7970 = t5826*t5851*t6192;
  t7976 = -1.*t684*t6309;
  t8018 = t7970 + t7976;
  t7304 = 0.183*t7298;
  t7311 = 0. + t7304;
  t8096 = t4046*t8018;
  t8172 = -1.*t7905*t6973;
  t8194 = t8096 + t8172;
  t7450 = 0.183*t7448;
  t7452 = 0.15*t7451;
  t7454 = 0. + t7450 + t7452;
  t7477 = -0.15*t7448;
  t7480 = 0.183*t7451;
  t7490 = 0. + t7477 + t7480;
  t8269 = t710*t805*t5851;
  t8339 = -1.*t8194*t7298;
  t8362 = t8269 + t8339;
  t8406 = t805*t8194;
  t8432 = t710*t5851*t7298;
  t8480 = t8406 + t8432;
  t8968 = t710*t5826*t4046;
  t9001 = -1.*t710*t6309*t6973;
  t9024 = t8968 + t9001;
  t9049 = -1.*t805*t6192;
  t9057 = -1.*t9024*t7298;
  t9157 = t9049 + t9057;
  t9232 = t805*t9024;
  t9343 = -1.*t6192*t7298;
  t9344 = t9232 + t9343;
  p_output1[0]=0. + t5085*t6801 - 0.11079*(t4046*t6801 + t6971*t6973) + t6971*t6980 + t3396*t684*t710 + t7238*t7311 + t7371*t7454 - 0.15*(t7371*t7451 + t7377*t7476) + 0.183*(t7371*t7377 - 1.*t7451*t7476) + t7476*t7490 + var1[0];
  p_output1[1]=0. + t3396*t5851*t710 + t5085*t7905 + t6980*t8018 - 0.11079*(t4046*t7905 + t6973*t8018) + t7311*t8194 + t7454*t8362 + t7490*t8480 - 0.15*(t7451*t8362 + t7377*t8480) + 0.183*(t7377*t8362 - 1.*t7451*t8480) + var1[1];
  p_output1[2]=0. - 1.*t3396*t6192 + t5085*t6309*t710 + t5826*t6980*t710 - 0.11079*(t4046*t6309*t710 + t5826*t6973*t710) + t7311*t9024 + t7454*t9157 + t7490*t9344 - 0.15*(t7451*t9157 + t7377*t9344) + 0.183*(t7377*t9157 - 1.*t7451*t9344) + var1[2];
}



void p_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
