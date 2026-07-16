/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:41 GMT-05:00
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
  double t819;
  double t1422;
  double t1840;
  double t1764;
  double t1848;
  double t1119;
  double t1019;
  double t1103;
  double t1177;
  double t1807;
  double t1856;
  double t1912;
  double t1983;
  double t2058;
  double t2110;
  double t2122;
  double t2139;
  double t2218;
  double t2460;
  double t551;
  double t2473;
  double t2523;
  double t2538;
  double t2542;
  double t2585;
  double t2837;
  double t2980;
  double t2995;
  double t2996;
  double t3148;
  double t3786;
  double t3801;
  double t3832;
  double t1106;
  double t2468;
  double t2471;
  double t2476;
  double t2490;
  double t2494;
  double t2508;
  double t3388;
  double t3562;
  double t3640;
  double t3732;
  double t3741;
  double t3779;
  double t3839;
  double t3857;
  double t3891;
  double t3934;
  double t3937;
  double t4094;
  double t4234;
  double t4240;
  double t5800;
  double t5816;
  double t2472;
  double t2504;
  double t2506;
  double t4811;
  double t4845;
  double t4941;
  double t5351;
  double t5426;
  double t5438;
  double t5595;
  double t5607;
  double t5622;
  double t5698;
  double t5703;
  double t5724;
  double t5729;
  double t4244;
  double t4269;
  double t4275;
  double t5765;
  double t5780;
  double t5818;
  double t5823;
  double t5826;
  double t5834;
  double t5852;
  double t5855;
  double t3566;
  double t3748;
  double t3753;
  double t4989;
  double t5030;
  double t5264;
  double t4285;
  double t4582;
  double t4698;
  double t3887;
  double t3982;
  double t4050;
  double t5318;
  double t5326;
  double t5349;
  t819 = Cos(var1[3]);
  t1422 = Cos(var1[5]);
  t1840 = Sin(var1[3]);
  t1764 = Sin(var1[4]);
  t1848 = Sin(var1[5]);
  t1119 = Cos(var1[10]);
  t1019 = Cos(var1[4]);
  t1103 = Sin(var1[10]);
  t1177 = Cos(var1[9]);
  t1807 = t819*t1422*t1764;
  t1856 = t1840*t1848;
  t1912 = t1807 + t1856;
  t1983 = t1177*t1912;
  t2058 = Sin(var1[9]);
  t2110 = -1.*t1422*t1840;
  t2122 = t819*t1764*t1848;
  t2139 = t2110 + t2122;
  t2218 = -1.*t2058*t2139;
  t2460 = t1983 + t2218;
  t551 = Sin(var1[11]);
  t2473 = Cos(var1[11]);
  t2523 = t1422*t1840*t1764;
  t2538 = -1.*t819*t1848;
  t2542 = t2523 + t2538;
  t2585 = t1177*t2542;
  t2837 = t819*t1422;
  t2980 = t1840*t1764*t1848;
  t2995 = t2837 + t2980;
  t2996 = -1.*t2058*t2995;
  t3148 = t2585 + t2996;
  t3786 = t1177*t1019*t1422;
  t3801 = -1.*t1019*t2058*t1848;
  t3832 = t3786 + t3801;
  t1106 = t819*t1019*t1103;
  t2468 = t1119*t2460;
  t2471 = t1106 + t2468;
  t2476 = t1119*t819*t1019;
  t2490 = -1.*t1103*t2460;
  t2494 = t2476 + t2490;
  t2508 = t1019*t1103*t1840;
  t3388 = t1119*t3148;
  t3562 = t2508 + t3388;
  t3640 = t1119*t1019*t1840;
  t3732 = -1.*t1103*t3148;
  t3741 = t3640 + t3732;
  t3779 = -1.*t1103*t1764;
  t3839 = t1119*t3832;
  t3857 = t3779 + t3839;
  t3891 = -1.*t1119*t1764;
  t3934 = -1.*t1103*t3832;
  t3937 = t3891 + t3934;
  t4094 = t2058*t1912;
  t4234 = t1177*t2139;
  t4240 = t4094 + t4234;
  t5800 = -1.*t2473;
  t5816 = 1. + t5800;
  t2472 = -1.*t551*t2471;
  t2504 = t2473*t2494;
  t2506 = t2472 + t2504;
  t4811 = t2473*t2471;
  t4845 = t551*t2494;
  t4941 = t4811 + t4845;
  t5351 = -1.*t1119;
  t5426 = 1. + t5351;
  t5438 = 0.183*t5426;
  t5595 = 0. + t5438;
  t5607 = -0.047*t2058;
  t5622 = 0. + t5607;
  t5698 = -1.*t1177;
  t5703 = 1. + t5698;
  t5724 = 0.047*t5703;
  t5729 = 0. + t5724;
  t4244 = t2058*t2542;
  t4269 = t1177*t2995;
  t4275 = t4244 + t4269;
  t5765 = 0.183*t1103;
  t5780 = 0. + t5765;
  t5818 = -0.25*t5816;
  t5823 = 0.183*t551;
  t5826 = 0. + t5818 + t5823;
  t5834 = 0.183*t5816;
  t5852 = 0.25*t551;
  t5855 = 0. + t5834 + t5852;
  t3566 = -1.*t551*t3562;
  t3748 = t2473*t3741;
  t3753 = t3566 + t3748;
  t4989 = t2473*t3562;
  t5030 = t551*t3741;
  t5264 = t4989 + t5030;
  t4285 = t1019*t1422*t2058;
  t4582 = t1177*t1019*t1848;
  t4698 = t4285 + t4582;
  t3887 = -1.*t551*t3857;
  t3982 = t2473*t3937;
  t4050 = t3887 + t3982;
  t5318 = t2473*t3857;
  t5326 = t551*t3937;
  t5349 = t5318 + t5326;
  p_output1[0]=t2506;
  p_output1[1]=t3753;
  p_output1[2]=t4050;
  p_output1[3]=0.;
  p_output1[4]=t4240;
  p_output1[5]=t4275;
  p_output1[6]=t4698;
  p_output1[7]=0.;
  p_output1[8]=t4941;
  p_output1[9]=t5264;
  p_output1[10]=t5349;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2506 + 0.13205*t4240 - 0.5*t4941 + t1912*t5622 + t2139*t5729 + t2460*t5780 + t2471*t5826 + t2494*t5855 + t1019*t5595*t819 + var1[0];
  p_output1[13]=0. + 0.183*t3753 + 0.13205*t4275 - 0.5*t5264 + t1019*t1840*t5595 + t2542*t5622 + t2995*t5729 + t3148*t5780 + t3562*t5826 + t3741*t5855 + var1[1];
  p_output1[14]=0. + 0.183*t4050 + 0.13205*t4698 - 0.5*t5349 - 1.*t1764*t5595 + t1019*t1422*t5622 + t1019*t1848*t5729 + t3832*t5780 + t3857*t5826 + t3937*t5855 + var1[2];
  p_output1[15]=1.;
}



void H_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
