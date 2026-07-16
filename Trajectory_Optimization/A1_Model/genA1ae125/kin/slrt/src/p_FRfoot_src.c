/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot_src.h"

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
  double t1396;
  double t8265;
  double t8274;
  double t8268;
  double t8276;
  double t6944;
  double t8269;
  double t8279;
  double t8280;
  double t8282;
  double t8283;
  double t8284;
  double t8287;
  double t2824;
  double t8341;
  double t8342;
  double t8343;
  double t2557;
  double t8344;
  double t8364;
  double t8367;
  double t8369;
  double t8371;
  double t8382;
  double t8386;
  double t8390;
  double t8359;
  double t8361;
  double t8363;
  double t4317;
  double t5480;
  double t5782;
  double t5802;
  double t7636;
  double t7905;
  double t8131;
  double t8145;
  double t8289;
  double t8322;
  double t8446;
  double t8447;
  double t8448;
  double t8450;
  double t8451;
  double t8453;
  double t8354;
  double t8357;
  double t8463;
  double t8466;
  double t8467;
  double t8370;
  double t8375;
  double t8380;
  double t8391;
  double t8402;
  double t8405;
  double t8493;
  double t8494;
  double t8495;
  double t8471;
  double t8475;
  double t8476;
  double t8519;
  double t8521;
  double t8522;
  double t8528;
  double t8530;
  double t8531;
  double t8524;
  double t8525;
  double t8526;
  t1396 = Cos(var1[3]);
  t8265 = Cos(var1[5]);
  t8274 = Sin(var1[4]);
  t8268 = Sin(var1[3]);
  t8276 = Sin(var1[5]);
  t6944 = Cos(var1[6]);
  t8269 = -1.*t8265*t8268;
  t8279 = t1396*t8274*t8276;
  t8280 = t8269 + t8279;
  t8282 = t1396*t8265*t8274;
  t8283 = t8268*t8276;
  t8284 = t8282 + t8283;
  t8287 = Sin(var1[6]);
  t2824 = Cos(var1[7]);
  t8341 = t6944*t8284;
  t8342 = -1.*t8280*t8287;
  t8343 = t8341 + t8342;
  t2557 = Cos(var1[4]);
  t8344 = Sin(var1[7]);
  t8364 = Cos(var1[8]);
  t8367 = -1.*t8364;
  t8369 = 1. + t8367;
  t8371 = Sin(var1[8]);
  t8382 = t1396*t2557*t2824;
  t8386 = -1.*t8343*t8344;
  t8390 = t8382 + t8386;
  t8359 = t2824*t8343;
  t8361 = t1396*t2557*t8344;
  t8363 = t8359 + t8361;
  t4317 = -1.*t2824;
  t5480 = 1. + t4317;
  t5782 = 0.183*t5480;
  t5802 = 0. + t5782;
  t7636 = -1.*t6944;
  t7905 = 1. + t7636;
  t8131 = -0.047*t7905;
  t8145 = 0. + t8131;
  t8289 = 0.047*t8287;
  t8322 = 0. + t8289;
  t8446 = t1396*t8265;
  t8447 = t8268*t8274*t8276;
  t8448 = t8446 + t8447;
  t8450 = t8265*t8268*t8274;
  t8451 = -1.*t1396*t8276;
  t8453 = t8450 + t8451;
  t8354 = 0.183*t8344;
  t8357 = 0. + t8354;
  t8463 = t6944*t8453;
  t8466 = -1.*t8448*t8287;
  t8467 = t8463 + t8466;
  t8370 = -0.25*t8369;
  t8375 = 0.183*t8371;
  t8380 = 0. + t8370 + t8375;
  t8391 = 0.183*t8369;
  t8402 = 0.25*t8371;
  t8405 = 0. + t8391 + t8402;
  t8493 = t2557*t2824*t8268;
  t8494 = -1.*t8467*t8344;
  t8495 = t8493 + t8494;
  t8471 = t2824*t8467;
  t8475 = t2557*t8268*t8344;
  t8476 = t8471 + t8475;
  t8519 = t2557*t8265*t6944;
  t8521 = -1.*t2557*t8276*t8287;
  t8522 = t8519 + t8521;
  t8528 = -1.*t2824*t8274;
  t8530 = -1.*t8522*t8344;
  t8531 = t8528 + t8530;
  t8524 = t2824*t8522;
  t8525 = -1.*t8274*t8344;
  t8526 = t8524 + t8525;
  p_output1[0]=0. + t1396*t2557*t5802 + t8145*t8280 - 0.13205*(t6944*t8280 + t8284*t8287) + t8284*t8322 + t8343*t8357 + t8363*t8380 + 0.183*(-1.*t8363*t8371 + t8364*t8390) - 0.5*(t8363*t8364 + t8371*t8390) + t8390*t8405 + var1[0];
  p_output1[1]=0. + t2557*t5802*t8268 + t8145*t8448 + t8322*t8453 - 0.13205*(t6944*t8448 + t8287*t8453) + t8357*t8467 + t8380*t8476 + t8405*t8495 + 0.183*(-1.*t8371*t8476 + t8364*t8495) - 0.5*(t8364*t8476 + t8371*t8495) + var1[1];
  p_output1[2]=0. - 1.*t5802*t8274 + t2557*t8145*t8276 - 0.13205*(t2557*t6944*t8276 + t2557*t8265*t8287) + t2557*t8265*t8322 + t8357*t8522 + t8380*t8526 + t8405*t8531 + 0.183*(-1.*t8371*t8526 + t8364*t8531) - 0.5*(t8364*t8526 + t8371*t8531) + var1[2];
}



void p_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
