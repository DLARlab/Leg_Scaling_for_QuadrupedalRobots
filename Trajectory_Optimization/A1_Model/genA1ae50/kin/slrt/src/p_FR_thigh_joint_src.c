/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:55 GMT-05:00
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
  double t1944;
  double t2175;
  double t2212;
  double t2198;
  double t2250;
  double t2131;
  double t2199;
  double t2252;
  double t2254;
  double t2265;
  double t2266;
  double t2273;
  double t2275;
  double t2002;
  double t2052;
  double t2361;
  double t2365;
  double t2381;
  double t2383;
  double t2062;
  double t2103;
  double t2109;
  double t2129;
  double t2139;
  double t2156;
  double t2157;
  double t2173;
  double t2290;
  double t2293;
  double t2448;
  double t2457;
  double t2459;
  double t2471;
  double t2476;
  double t2520;
  double t2388;
  double t2400;
  double t2540;
  double t2541;
  double t2544;
  double t2620;
  double t2631;
  double t2632;
  t1944 = Cos(var1[3]);
  t2175 = Cos(var1[5]);
  t2212 = Sin(var1[4]);
  t2198 = Sin(var1[3]);
  t2250 = Sin(var1[5]);
  t2131 = Cos(var1[6]);
  t2199 = -1.*t2175*t2198;
  t2252 = t1944*t2212*t2250;
  t2254 = t2199 + t2252;
  t2265 = t1944*t2175*t2212;
  t2266 = t2198*t2250;
  t2273 = t2265 + t2266;
  t2275 = Sin(var1[6]);
  t2002 = Cos(var1[4]);
  t2052 = Cos(var1[7]);
  t2361 = t2131*t2273;
  t2365 = -1.*t2254*t2275;
  t2381 = t2361 + t2365;
  t2383 = Sin(var1[7]);
  t2062 = -1.*t2052;
  t2103 = 1. + t2062;
  t2109 = 0.183*t2103;
  t2129 = 0. + t2109;
  t2139 = -1.*t2131;
  t2156 = 1. + t2139;
  t2157 = -0.047*t2156;
  t2173 = 0. + t2157;
  t2290 = 0.047*t2275;
  t2293 = 0. + t2290;
  t2448 = t1944*t2175;
  t2457 = t2198*t2212*t2250;
  t2459 = t2448 + t2457;
  t2471 = t2175*t2198*t2212;
  t2476 = -1.*t1944*t2250;
  t2520 = t2471 + t2476;
  t2388 = 0.183*t2383;
  t2400 = 0. + t2388;
  t2540 = t2131*t2520;
  t2541 = -1.*t2459*t2275;
  t2544 = t2540 + t2541;
  t2620 = t2002*t2175*t2131;
  t2631 = -1.*t2002*t2250*t2275;
  t2632 = t2620 + t2631;
  p_output1[0]=0. + t1944*t2002*t2129 + t2173*t2254 - 0.13205*(t2131*t2254 + t2273*t2275) + t2273*t2293 + 0.183*(t1944*t2002*t2052 - 1.*t2381*t2383) + t2381*t2400 + var1[0];
  p_output1[1]=0. + t2002*t2129*t2198 + t2173*t2459 + t2293*t2520 - 0.13205*(t2131*t2459 + t2275*t2520) + t2400*t2544 + 0.183*(t2002*t2052*t2198 - 1.*t2383*t2544) + var1[1];
  p_output1[2]=0. - 1.*t2129*t2212 + t2002*t2173*t2250 - 0.13205*(t2002*t2131*t2250 + t2002*t2175*t2275) + t2002*t2175*t2293 + t2400*t2632 + 0.183*(-1.*t2052*t2212 - 1.*t2383*t2632) + var1[2];
}



void p_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
