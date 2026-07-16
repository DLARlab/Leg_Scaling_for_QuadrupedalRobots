/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot_src.h"

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
  double t104;
  double t758;
  double t874;
  double t803;
  double t908;
  double t691;
  double t296;
  double t454;
  double t693;
  double t841;
  double t917;
  double t957;
  double t1042;
  double t1092;
  double t1101;
  double t1102;
  double t1116;
  double t1219;
  double t1269;
  double t98;
  double t1512;
  double t1707;
  double t1709;
  double t1728;
  double t1731;
  double t1733;
  double t1751;
  double t1788;
  double t1807;
  double t1811;
  double t2029;
  double t2036;
  double t2043;
  double t663;
  double t1433;
  double t1494;
  double t1522;
  double t1573;
  double t1647;
  double t1699;
  double t1860;
  double t1886;
  double t1916;
  double t1929;
  double t1940;
  double t2010;
  double t2059;
  double t2103;
  double t2115;
  double t2118;
  double t2121;
  double t2197;
  double t2204;
  double t2222;
  double t3220;
  double t3230;
  double t1506;
  double t1676;
  double t1695;
  double t2463;
  double t2474;
  double t2475;
  double t2747;
  double t2769;
  double t2778;
  double t2808;
  double t2868;
  double t2891;
  double t2924;
  double t2978;
  double t2993;
  double t3019;
  double t2224;
  double t2225;
  double t2229;
  double t3147;
  double t3171;
  double t3277;
  double t3313;
  double t3372;
  double t3420;
  double t3455;
  double t3456;
  double t1889;
  double t1977;
  double t1985;
  double t2502;
  double t2614;
  double t2667;
  double t2234;
  double t2286;
  double t2360;
  double t2104;
  double t2158;
  double t2180;
  double t2671;
  double t2725;
  double t2727;
  t104 = Cos(var1[3]);
  t758 = Cos(var1[5]);
  t874 = Sin(var1[3]);
  t803 = Sin(var1[4]);
  t908 = Sin(var1[5]);
  t691 = Cos(var1[10]);
  t296 = Cos(var1[4]);
  t454 = Sin(var1[10]);
  t693 = Cos(var1[9]);
  t841 = t104*t758*t803;
  t917 = t874*t908;
  t957 = t841 + t917;
  t1042 = t693*t957;
  t1092 = Sin(var1[9]);
  t1101 = -1.*t758*t874;
  t1102 = t104*t803*t908;
  t1116 = t1101 + t1102;
  t1219 = -1.*t1092*t1116;
  t1269 = t1042 + t1219;
  t98 = Sin(var1[11]);
  t1512 = Cos(var1[11]);
  t1707 = t758*t874*t803;
  t1709 = -1.*t104*t908;
  t1728 = t1707 + t1709;
  t1731 = t693*t1728;
  t1733 = t104*t758;
  t1751 = t874*t803*t908;
  t1788 = t1733 + t1751;
  t1807 = -1.*t1092*t1788;
  t1811 = t1731 + t1807;
  t2029 = t693*t296*t758;
  t2036 = -1.*t296*t1092*t908;
  t2043 = t2029 + t2036;
  t663 = t104*t296*t454;
  t1433 = t691*t1269;
  t1494 = t663 + t1433;
  t1522 = t691*t104*t296;
  t1573 = -1.*t454*t1269;
  t1647 = t1522 + t1573;
  t1699 = t296*t454*t874;
  t1860 = t691*t1811;
  t1886 = t1699 + t1860;
  t1916 = t691*t296*t874;
  t1929 = -1.*t454*t1811;
  t1940 = t1916 + t1929;
  t2010 = -1.*t454*t803;
  t2059 = t691*t2043;
  t2103 = t2010 + t2059;
  t2115 = -1.*t691*t803;
  t2118 = -1.*t454*t2043;
  t2121 = t2115 + t2118;
  t2197 = t1092*t957;
  t2204 = t693*t1116;
  t2222 = t2197 + t2204;
  t3220 = -1.*t1512;
  t3230 = 1. + t3220;
  t1506 = -1.*t98*t1494;
  t1676 = t1512*t1647;
  t1695 = t1506 + t1676;
  t2463 = t1512*t1494;
  t2474 = t98*t1647;
  t2475 = t2463 + t2474;
  t2747 = -1.*t691;
  t2769 = 1. + t2747;
  t2778 = 0.183*t2769;
  t2808 = 0. + t2778;
  t2868 = -0.047*t1092;
  t2891 = 0. + t2868;
  t2924 = -1.*t693;
  t2978 = 1. + t2924;
  t2993 = 0.047*t2978;
  t3019 = 0. + t2993;
  t2224 = t1092*t1728;
  t2225 = t693*t1788;
  t2229 = t2224 + t2225;
  t3147 = 0.183*t454;
  t3171 = 0. + t3147;
  t3277 = -0.1*t3230;
  t3313 = 0.183*t98;
  t3372 = 0. + t3277 + t3313;
  t3420 = 0.183*t3230;
  t3455 = 0.1*t98;
  t3456 = 0. + t3420 + t3455;
  t1889 = -1.*t98*t1886;
  t1977 = t1512*t1940;
  t1985 = t1889 + t1977;
  t2502 = t1512*t1886;
  t2614 = t98*t1940;
  t2667 = t2502 + t2614;
  t2234 = t296*t758*t1092;
  t2286 = t693*t296*t908;
  t2360 = t2234 + t2286;
  t2104 = -1.*t98*t2103;
  t2158 = t1512*t2121;
  t2180 = t2104 + t2158;
  t2671 = t1512*t2103;
  t2725 = t98*t2121;
  t2727 = t2671 + t2725;
  p_output1[0]=t1695;
  p_output1[1]=t1985;
  p_output1[2]=t2180;
  p_output1[3]=0.;
  p_output1[4]=t2222;
  p_output1[5]=t2229;
  p_output1[6]=t2360;
  p_output1[7]=0.;
  p_output1[8]=t2475;
  p_output1[9]=t2667;
  p_output1[10]=t2727;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1695 + 0.13205*t2222 - 0.2*t2475 + t104*t2808*t296 + t1116*t3019 + t1269*t3171 + t1494*t3372 + t1647*t3456 + t2891*t957 + var1[0];
  p_output1[13]=0. + 0.183*t1985 + 0.13205*t2229 - 0.2*t2667 + t1728*t2891 + t1788*t3019 + t1811*t3171 + t1886*t3372 + t1940*t3456 + t2808*t296*t874 + var1[1];
  p_output1[14]=0. + 0.183*t2180 + 0.13205*t2360 - 0.2*t2727 + t2043*t3171 + t2103*t3372 + t2121*t3456 + t2891*t296*t758 - 1.*t2808*t803 + t296*t3019*t908 + var1[2];
  p_output1[15]=1.;
}



void H_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
