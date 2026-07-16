/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot_src.h"

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
  double t196;
  double t452;
  double t508;
  double t472;
  double t524;
  double t334;
  double t258;
  double t271;
  double t372;
  double t484;
  double t532;
  double t575;
  double t583;
  double t607;
  double t624;
  double t678;
  double t694;
  double t724;
  double t735;
  double t154;
  double t817;
  double t898;
  double t940;
  double t942;
  double t947;
  double t948;
  double t973;
  double t974;
  double t984;
  double t986;
  double t1122;
  double t1139;
  double t1171;
  double t303;
  double t755;
  double t772;
  double t837;
  double t850;
  double t859;
  double t892;
  double t998;
  double t1006;
  double t1041;
  double t1056;
  double t1073;
  double t1105;
  double t1178;
  double t1233;
  double t1375;
  double t1494;
  double t1536;
  double t1633;
  double t1663;
  double t1674;
  double t3161;
  double t3167;
  double t794;
  double t876;
  double t878;
  double t2123;
  double t2131;
  double t2136;
  double t2268;
  double t2322;
  double t2333;
  double t2340;
  double t2421;
  double t2607;
  double t2658;
  double t2695;
  double t2707;
  double t2725;
  double t1807;
  double t1838;
  double t1869;
  double t2896;
  double t3137;
  double t3258;
  double t3323;
  double t3457;
  double t3462;
  double t3496;
  double t3517;
  double t1015;
  double t1094;
  double t1102;
  double t2158;
  double t2166;
  double t2176;
  double t2007;
  double t2019;
  double t2027;
  double t1273;
  double t1556;
  double t1611;
  double t2205;
  double t2213;
  double t2252;
  t196 = Cos(var1[3]);
  t452 = Cos(var1[5]);
  t508 = Sin(var1[3]);
  t472 = Sin(var1[4]);
  t524 = Sin(var1[5]);
  t334 = Cos(var1[13]);
  t258 = Cos(var1[4]);
  t271 = Sin(var1[13]);
  t372 = Cos(var1[12]);
  t484 = t196*t452*t472;
  t532 = t508*t524;
  t575 = t484 + t532;
  t583 = t372*t575;
  t607 = Sin(var1[12]);
  t624 = -1.*t452*t508;
  t678 = t196*t472*t524;
  t694 = t624 + t678;
  t724 = -1.*t607*t694;
  t735 = t583 + t724;
  t154 = Sin(var1[14]);
  t817 = Cos(var1[14]);
  t898 = t452*t508*t472;
  t940 = -1.*t196*t524;
  t942 = t898 + t940;
  t947 = t372*t942;
  t948 = t196*t452;
  t973 = t508*t472*t524;
  t974 = t948 + t973;
  t984 = -1.*t607*t974;
  t986 = t947 + t984;
  t1122 = t372*t258*t452;
  t1139 = -1.*t258*t607*t524;
  t1171 = t1122 + t1139;
  t303 = t196*t258*t271;
  t755 = t334*t735;
  t772 = t303 + t755;
  t837 = t334*t196*t258;
  t850 = -1.*t271*t735;
  t859 = t837 + t850;
  t892 = t258*t271*t508;
  t998 = t334*t986;
  t1006 = t892 + t998;
  t1041 = t334*t258*t508;
  t1056 = -1.*t271*t986;
  t1073 = t1041 + t1056;
  t1105 = -1.*t271*t472;
  t1178 = t334*t1171;
  t1233 = t1105 + t1178;
  t1375 = -1.*t334*t472;
  t1494 = -1.*t271*t1171;
  t1536 = t1375 + t1494;
  t1633 = t607*t575;
  t1663 = t372*t694;
  t1674 = t1633 + t1663;
  t3161 = -1.*t817;
  t3167 = 1. + t3161;
  t794 = -1.*t154*t772;
  t876 = t817*t859;
  t878 = t794 + t876;
  t2123 = t817*t772;
  t2131 = t154*t859;
  t2136 = t2123 + t2131;
  t2268 = -1.*t334;
  t2322 = 1. + t2268;
  t2333 = -0.183*t2322;
  t2340 = 0. + t2333;
  t2421 = 0.047*t607;
  t2607 = 0. + t2421;
  t2658 = -1.*t372;
  t2695 = 1. + t2658;
  t2707 = -0.047*t2695;
  t2725 = 0. + t2707;
  t1807 = t607*t942;
  t1838 = t372*t974;
  t1869 = t1807 + t1838;
  t2896 = -0.183*t271;
  t3137 = 0. + t2896;
  t3258 = -0.15*t3167;
  t3323 = -0.183*t154;
  t3457 = 0. + t3258 + t3323;
  t3462 = -0.183*t3167;
  t3496 = 0.15*t154;
  t3517 = 0. + t3462 + t3496;
  t1015 = -1.*t154*t1006;
  t1094 = t817*t1073;
  t1102 = t1015 + t1094;
  t2158 = t817*t1006;
  t2166 = t154*t1073;
  t2176 = t2158 + t2166;
  t2007 = t258*t452*t607;
  t2019 = t372*t258*t524;
  t2027 = t2007 + t2019;
  t1273 = -1.*t154*t1233;
  t1556 = t817*t1536;
  t1611 = t1273 + t1556;
  t2205 = t817*t1233;
  t2213 = t154*t1536;
  t2252 = t2205 + t2213;
  p_output1[0]=t878;
  p_output1[1]=t1102;
  p_output1[2]=t1611;
  p_output1[3]=0.;
  p_output1[4]=t1674;
  p_output1[5]=t1869;
  p_output1[6]=t2027;
  p_output1[7]=0.;
  p_output1[8]=t2136;
  p_output1[9]=t2176;
  p_output1[10]=t2252;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.13205*t1674 - 0.3*t2136 + t196*t2340*t258 + t2607*t575 + t2725*t694 + t3137*t735 + t3457*t772 + t3517*t859 - 0.183*t878 + var1[0];
  p_output1[13]=0. - 0.183*t1102 - 0.13205*t1869 - 0.3*t2176 + t1006*t3457 + t1073*t3517 + t2340*t258*t508 + t2607*t942 + t2725*t974 + t3137*t986 + var1[1];
  p_output1[14]=0. - 0.183*t1611 - 0.13205*t2027 - 0.3*t2252 + t1171*t3137 + t1233*t3457 + t1536*t3517 + t258*t2607*t452 - 1.*t2340*t472 + t258*t2725*t524 + var1[2];
  p_output1[15]=1.;
}



void H_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
