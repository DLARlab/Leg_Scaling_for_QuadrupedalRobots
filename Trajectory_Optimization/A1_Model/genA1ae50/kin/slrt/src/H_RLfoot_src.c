/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot_src.h"

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
  double t868;
  double t1196;
  double t1646;
  double t1394;
  double t1717;
  double t1154;
  double t923;
  double t950;
  double t1177;
  double t1567;
  double t1750;
  double t1774;
  double t1888;
  double t1909;
  double t1927;
  double t1932;
  double t1961;
  double t2069;
  double t2074;
  double t666;
  double t2200;
  double t2371;
  double t2374;
  double t2377;
  double t2380;
  double t2385;
  double t2386;
  double t2394;
  double t2434;
  double t2454;
  double t2661;
  double t2679;
  double t2700;
  double t1100;
  double t2088;
  double t2131;
  double t2215;
  double t2219;
  double t2230;
  double t2340;
  double t2455;
  double t2462;
  double t2506;
  double t2616;
  double t2648;
  double t2657;
  double t2706;
  double t2731;
  double t2768;
  double t2780;
  double t2786;
  double t2806;
  double t2812;
  double t2823;
  double t3029;
  double t3030;
  double t2141;
  double t2239;
  double t2279;
  double t2884;
  double t2885;
  double t2896;
  double t2922;
  double t2927;
  double t2944;
  double t2954;
  double t2965;
  double t2992;
  double t2997;
  double t2998;
  double t3000;
  double t3001;
  double t2841;
  double t2845;
  double t2846;
  double t3025;
  double t3026;
  double t3031;
  double t3032;
  double t3038;
  double t3062;
  double t3085;
  double t3097;
  double t2466;
  double t2652;
  double t2656;
  double t2904;
  double t2906;
  double t2909;
  double t2852;
  double t2854;
  double t2880;
  double t2755;
  double t2788;
  double t2790;
  double t2911;
  double t2918;
  double t2920;
  t868 = Cos(var1[3]);
  t1196 = Cos(var1[5]);
  t1646 = Sin(var1[3]);
  t1394 = Sin(var1[4]);
  t1717 = Sin(var1[5]);
  t1154 = Cos(var1[16]);
  t923 = Cos(var1[4]);
  t950 = Sin(var1[16]);
  t1177 = Cos(var1[15]);
  t1567 = t868*t1196*t1394;
  t1750 = t1646*t1717;
  t1774 = t1567 + t1750;
  t1888 = t1177*t1774;
  t1909 = Sin(var1[15]);
  t1927 = -1.*t1196*t1646;
  t1932 = t868*t1394*t1717;
  t1961 = t1927 + t1932;
  t2069 = -1.*t1909*t1961;
  t2074 = t1888 + t2069;
  t666 = Sin(var1[17]);
  t2200 = Cos(var1[17]);
  t2371 = t1196*t1646*t1394;
  t2374 = -1.*t868*t1717;
  t2377 = t2371 + t2374;
  t2380 = t1177*t2377;
  t2385 = t868*t1196;
  t2386 = t1646*t1394*t1717;
  t2394 = t2385 + t2386;
  t2434 = -1.*t1909*t2394;
  t2454 = t2380 + t2434;
  t2661 = t1177*t923*t1196;
  t2679 = -1.*t923*t1909*t1717;
  t2700 = t2661 + t2679;
  t1100 = t868*t923*t950;
  t2088 = t1154*t2074;
  t2131 = t1100 + t2088;
  t2215 = t1154*t868*t923;
  t2219 = -1.*t950*t2074;
  t2230 = t2215 + t2219;
  t2340 = t923*t950*t1646;
  t2455 = t1154*t2454;
  t2462 = t2340 + t2455;
  t2506 = t1154*t923*t1646;
  t2616 = -1.*t950*t2454;
  t2648 = t2506 + t2616;
  t2657 = -1.*t950*t1394;
  t2706 = t1154*t2700;
  t2731 = t2657 + t2706;
  t2768 = -1.*t1154*t1394;
  t2780 = -1.*t950*t2700;
  t2786 = t2768 + t2780;
  t2806 = t1909*t1774;
  t2812 = t1177*t1961;
  t2823 = t2806 + t2812;
  t3029 = -1.*t2200;
  t3030 = 1. + t3029;
  t2141 = -1.*t666*t2131;
  t2239 = t2200*t2230;
  t2279 = t2141 + t2239;
  t2884 = t2200*t2131;
  t2885 = t666*t2230;
  t2896 = t2884 + t2885;
  t2922 = -1.*t1154;
  t2927 = 1. + t2922;
  t2944 = -0.183*t2927;
  t2954 = 0. + t2944;
  t2965 = -0.047*t1909;
  t2992 = 0. + t2965;
  t2997 = -1.*t1177;
  t2998 = 1. + t2997;
  t3000 = 0.047*t2998;
  t3001 = 0. + t3000;
  t2841 = t1909*t2377;
  t2845 = t1177*t2394;
  t2846 = t2841 + t2845;
  t3025 = -0.183*t950;
  t3026 = 0. + t3025;
  t3031 = -0.1*t3030;
  t3032 = -0.183*t666;
  t3038 = 0. + t3031 + t3032;
  t3062 = -0.183*t3030;
  t3085 = 0.1*t666;
  t3097 = 0. + t3062 + t3085;
  t2466 = -1.*t666*t2462;
  t2652 = t2200*t2648;
  t2656 = t2466 + t2652;
  t2904 = t2200*t2462;
  t2906 = t666*t2648;
  t2909 = t2904 + t2906;
  t2852 = t923*t1196*t1909;
  t2854 = t1177*t923*t1717;
  t2880 = t2852 + t2854;
  t2755 = -1.*t666*t2731;
  t2788 = t2200*t2786;
  t2790 = t2755 + t2788;
  t2911 = t2200*t2731;
  t2918 = t666*t2786;
  t2920 = t2911 + t2918;
  p_output1[0]=t2279;
  p_output1[1]=t2656;
  p_output1[2]=t2790;
  p_output1[3]=0.;
  p_output1[4]=t2823;
  p_output1[5]=t2846;
  p_output1[6]=t2880;
  p_output1[7]=0.;
  p_output1[8]=t2896;
  p_output1[9]=t2909;
  p_output1[10]=t2920;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2279 + 0.13205*t2823 - 0.2*t2896 + t1774*t2992 + t1961*t3001 + t2074*t3026 + t2131*t3038 + t2230*t3097 + t2954*t868*t923 + var1[0];
  p_output1[13]=0. - 0.183*t2656 + 0.13205*t2846 - 0.2*t2909 + t2377*t2992 + t2394*t3001 + t2454*t3026 + t2462*t3038 + t2648*t3097 + t1646*t2954*t923 + var1[1];
  p_output1[14]=0. - 0.183*t2790 + 0.13205*t2880 - 0.2*t2920 - 1.*t1394*t2954 + t2700*t3026 + t2731*t3038 + t2786*t3097 + t1196*t2992*t923 + t1717*t3001*t923 + var1[2];
  p_output1[15]=1.;
}



void H_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
