/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:10 GMT-05:00
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
  double t1040;
  double t1801;
  double t2295;
  double t2121;
  double t2301;
  double t1322;
  double t1075;
  double t1249;
  double t1719;
  double t2163;
  double t2413;
  double t2445;
  double t2455;
  double t2742;
  double t2860;
  double t2937;
  double t2950;
  double t2962;
  double t3225;
  double t391;
  double t3772;
  double t4502;
  double t4692;
  double t4772;
  double t4915;
  double t4994;
  double t5054;
  double t5069;
  double t5078;
  double t5080;
  double t5437;
  double t5471;
  double t5472;
  double t1256;
  double t3324;
  double t3326;
  double t3782;
  double t3897;
  double t4170;
  double t4490;
  double t5083;
  double t5147;
  double t5229;
  double t5304;
  double t5328;
  double t5419;
  double t5476;
  double t5541;
  double t5548;
  double t5645;
  double t5708;
  double t5758;
  double t5768;
  double t5780;
  double t6837;
  double t6852;
  double t3509;
  double t4288;
  double t4444;
  double t5825;
  double t5928;
  double t5964;
  double t6153;
  double t6180;
  double t6184;
  double t6201;
  double t6261;
  double t6285;
  double t6448;
  double t6508;
  double t6572;
  double t6621;
  double t5790;
  double t5793;
  double t5795;
  double t6734;
  double t6820;
  double t6857;
  double t6876;
  double t6957;
  double t6981;
  double t6983;
  double t7048;
  double t5184;
  double t5361;
  double t5399;
  double t6015;
  double t6038;
  double t6046;
  double t5801;
  double t5814;
  double t5821;
  double t5543;
  double t5726;
  double t5731;
  double t6084;
  double t6132;
  double t6136;
  t1040 = Cos(var1[3]);
  t1801 = Cos(var1[5]);
  t2295 = Sin(var1[3]);
  t2121 = Sin(var1[4]);
  t2301 = Sin(var1[5]);
  t1322 = Cos(var1[16]);
  t1075 = Cos(var1[4]);
  t1249 = Sin(var1[16]);
  t1719 = Cos(var1[15]);
  t2163 = t1040*t1801*t2121;
  t2413 = t2295*t2301;
  t2445 = t2163 + t2413;
  t2455 = t1719*t2445;
  t2742 = Sin(var1[15]);
  t2860 = -1.*t1801*t2295;
  t2937 = t1040*t2121*t2301;
  t2950 = t2860 + t2937;
  t2962 = -1.*t2742*t2950;
  t3225 = t2455 + t2962;
  t391 = Sin(var1[17]);
  t3772 = Cos(var1[17]);
  t4502 = t1801*t2295*t2121;
  t4692 = -1.*t1040*t2301;
  t4772 = t4502 + t4692;
  t4915 = t1719*t4772;
  t4994 = t1040*t1801;
  t5054 = t2295*t2121*t2301;
  t5069 = t4994 + t5054;
  t5078 = -1.*t2742*t5069;
  t5080 = t4915 + t5078;
  t5437 = t1719*t1075*t1801;
  t5471 = -1.*t1075*t2742*t2301;
  t5472 = t5437 + t5471;
  t1256 = t1040*t1075*t1249;
  t3324 = t1322*t3225;
  t3326 = t1256 + t3324;
  t3782 = t1322*t1040*t1075;
  t3897 = -1.*t1249*t3225;
  t4170 = t3782 + t3897;
  t4490 = t1075*t1249*t2295;
  t5083 = t1322*t5080;
  t5147 = t4490 + t5083;
  t5229 = t1322*t1075*t2295;
  t5304 = -1.*t1249*t5080;
  t5328 = t5229 + t5304;
  t5419 = -1.*t1249*t2121;
  t5476 = t1322*t5472;
  t5541 = t5419 + t5476;
  t5548 = -1.*t1322*t2121;
  t5645 = -1.*t1249*t5472;
  t5708 = t5548 + t5645;
  t5758 = t2742*t2445;
  t5768 = t1719*t2950;
  t5780 = t5758 + t5768;
  t6837 = -1.*t3772;
  t6852 = 1. + t6837;
  t3509 = -1.*t391*t3326;
  t4288 = t3772*t4170;
  t4444 = t3509 + t4288;
  t5825 = t3772*t3326;
  t5928 = t391*t4170;
  t5964 = t5825 + t5928;
  t6153 = -1.*t1322;
  t6180 = 1. + t6153;
  t6184 = -0.183*t6180;
  t6201 = 0. + t6184;
  t6261 = -0.047*t2742;
  t6285 = 0. + t6261;
  t6448 = -1.*t1719;
  t6508 = 1. + t6448;
  t6572 = 0.047*t6508;
  t6621 = 0. + t6572;
  t5790 = t2742*t4772;
  t5793 = t1719*t5069;
  t5795 = t5790 + t5793;
  t6734 = -0.183*t1249;
  t6820 = 0. + t6734;
  t6857 = -0.15*t6852;
  t6876 = -0.183*t391;
  t6957 = 0. + t6857 + t6876;
  t6981 = -0.183*t6852;
  t6983 = 0.15*t391;
  t7048 = 0. + t6981 + t6983;
  t5184 = -1.*t391*t5147;
  t5361 = t3772*t5328;
  t5399 = t5184 + t5361;
  t6015 = t3772*t5147;
  t6038 = t391*t5328;
  t6046 = t6015 + t6038;
  t5801 = t1075*t1801*t2742;
  t5814 = t1719*t1075*t2301;
  t5821 = t5801 + t5814;
  t5543 = -1.*t391*t5541;
  t5726 = t3772*t5708;
  t5731 = t5543 + t5726;
  t6084 = t3772*t5541;
  t6132 = t391*t5708;
  t6136 = t6084 + t6132;
  p_output1[0]=t4444;
  p_output1[1]=t5399;
  p_output1[2]=t5731;
  p_output1[3]=0.;
  p_output1[4]=t5780;
  p_output1[5]=t5795;
  p_output1[6]=t5821;
  p_output1[7]=0.;
  p_output1[8]=t5964;
  p_output1[9]=t6046;
  p_output1[10]=t6136;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4444 + 0.13205*t5780 - 0.3*t5964 + t1040*t1075*t6201 + t2445*t6285 + t2950*t6621 + t3225*t6820 + t3326*t6957 + t4170*t7048 + var1[0];
  p_output1[13]=0. - 0.183*t5399 + 0.13205*t5795 - 0.3*t6046 + t1075*t2295*t6201 + t4772*t6285 + t5069*t6621 + t5080*t6820 + t5147*t6957 + t5328*t7048 + var1[1];
  p_output1[14]=0. - 0.183*t5731 + 0.13205*t5821 - 0.3*t6136 - 1.*t2121*t6201 + t1075*t1801*t6285 + t1075*t2301*t6621 + t5472*t6820 + t5541*t6957 + t5708*t7048 + var1[2];
  p_output1[15]=1.;
}



void H_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
