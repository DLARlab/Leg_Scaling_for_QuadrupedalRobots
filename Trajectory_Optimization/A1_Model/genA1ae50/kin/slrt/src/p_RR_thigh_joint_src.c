/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint_src.h"

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
  double t8116;
  double t8142;
  double t8148;
  double t8145;
  double t8150;
  double t8129;
  double t8147;
  double t8154;
  double t8164;
  double t8177;
  double t8200;
  double t8201;
  double t8202;
  double t2798;
  double t8121;
  double t8221;
  double t8224;
  double t8225;
  double t8229;
  double t4613;
  double t8080;
  double t8102;
  double t8113;
  double t8137;
  double t8138;
  double t8192;
  double t8194;
  double t8195;
  double t8198;
  double t8270;
  double t8275;
  double t8281;
  double t8284;
  double t8286;
  double t8287;
  double t8222;
  double t8223;
  double t8312;
  double t8313;
  double t8314;
  double t8355;
  double t8356;
  double t8357;
  t8116 = Cos(var1[3]);
  t8142 = Cos(var1[5]);
  t8148 = Sin(var1[3]);
  t8145 = Sin(var1[4]);
  t8150 = Sin(var1[5]);
  t8129 = Sin(var1[12]);
  t8147 = t8116*t8142*t8145;
  t8154 = t8148*t8150;
  t8164 = t8147 + t8154;
  t8177 = Cos(var1[12]);
  t8200 = -1.*t8142*t8148;
  t8201 = t8116*t8145*t8150;
  t8202 = t8200 + t8201;
  t2798 = Cos(var1[13]);
  t8121 = Cos(var1[4]);
  t8221 = Sin(var1[13]);
  t8224 = t8177*t8164;
  t8225 = -1.*t8129*t8202;
  t8229 = t8224 + t8225;
  t4613 = -1.*t2798;
  t8080 = 1. + t4613;
  t8102 = -0.183*t8080;
  t8113 = 0. + t8102;
  t8137 = 0.047*t8129;
  t8138 = 0. + t8137;
  t8192 = -1.*t8177;
  t8194 = 1. + t8192;
  t8195 = -0.047*t8194;
  t8198 = 0. + t8195;
  t8270 = t8142*t8148*t8145;
  t8275 = -1.*t8116*t8150;
  t8281 = t8270 + t8275;
  t8284 = t8116*t8142;
  t8286 = t8148*t8145*t8150;
  t8287 = t8284 + t8286;
  t8222 = -0.183*t8221;
  t8223 = 0. + t8222;
  t8312 = t8177*t8281;
  t8313 = -1.*t8129*t8287;
  t8314 = t8312 + t8313;
  t8355 = t8177*t8121*t8142;
  t8356 = -1.*t8121*t8129*t8150;
  t8357 = t8355 + t8356;
  p_output1[0]=0. + t8113*t8116*t8121 + t8138*t8164 + t8198*t8202 - 0.13205*(t8129*t8164 + t8177*t8202) + t8223*t8229 - 0.183*(t2798*t8116*t8121 - 1.*t8221*t8229) + var1[0];
  p_output1[1]=0. + t8113*t8121*t8148 + t8138*t8281 + t8198*t8287 - 0.13205*(t8129*t8281 + t8177*t8287) + t8223*t8314 - 0.183*(t2798*t8121*t8148 - 1.*t8221*t8314) + var1[1];
  p_output1[2]=0. + t8121*t8138*t8142 - 1.*t8113*t8145 - 0.13205*(t8121*t8129*t8142 + t8121*t8150*t8177) + t8121*t8150*t8198 + t8223*t8357 - 0.183*(-1.*t2798*t8145 - 1.*t8221*t8357) + var1[2];
}



void p_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
