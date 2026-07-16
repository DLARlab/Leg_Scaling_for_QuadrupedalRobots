/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint_src.h"

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
  double t3819;
  double t10334;
  double t11358;
  double t11013;
  double t11365;
  double t8035;
  double t11017;
  double t11377;
  double t11383;
  double t11389;
  double t11413;
  double t11416;
  double t11417;
  double t3933;
  double t11426;
  double t190;
  double t11433;
  double t11434;
  double t11435;
  double t11440;
  double t11441;
  double t11442;
  double t11447;
  double t11450;
  double t11451;
  double t11452;
  double t11459;
  double t11460;
  double t11462;
  double t1329;
  double t1456;
  double t2186;
  double t3095;
  double t8755;
  double t9273;
  double t11391;
  double t11397;
  double t11402;
  double t11406;
  double t11480;
  double t11482;
  double t11484;
  double t11488;
  double t11489;
  double t11490;
  double t11430;
  double t11432;
  double t11443;
  double t11448;
  double t11449;
  double t11502;
  double t11505;
  double t11506;
  double t11455;
  double t11456;
  double t11457;
  double t11509;
  double t11510;
  double t11511;
  double t11522;
  double t11533;
  double t11537;
  double t11575;
  double t11576;
  double t11577;
  double t11579;
  double t11580;
  double t11581;
  double t11583;
  double t11584;
  double t11586;
  t3819 = Cos(var1[3]);
  t10334 = Cos(var1[5]);
  t11358 = Sin(var1[3]);
  t11013 = Sin(var1[4]);
  t11365 = Sin(var1[5]);
  t8035 = Sin(var1[15]);
  t11017 = t3819*t10334*t11013;
  t11377 = t11358*t11365;
  t11383 = t11017 + t11377;
  t11389 = Cos(var1[15]);
  t11413 = -1.*t10334*t11358;
  t11416 = t3819*t11013*t11365;
  t11417 = t11413 + t11416;
  t3933 = Cos(var1[4]);
  t11426 = Sin(var1[16]);
  t190 = Cos(var1[16]);
  t11433 = t11389*t11383;
  t11434 = -1.*t8035*t11417;
  t11435 = t11433 + t11434;
  t11440 = Cos(var1[17]);
  t11441 = -1.*t11440;
  t11442 = 1. + t11441;
  t11447 = Sin(var1[17]);
  t11450 = t3819*t3933*t11426;
  t11451 = t190*t11435;
  t11452 = t11450 + t11451;
  t11459 = t190*t3819*t3933;
  t11460 = -1.*t11426*t11435;
  t11462 = t11459 + t11460;
  t1329 = -1.*t190;
  t1456 = 1. + t1329;
  t2186 = -0.183*t1456;
  t3095 = 0. + t2186;
  t8755 = -0.047*t8035;
  t9273 = 0. + t8755;
  t11391 = -1.*t11389;
  t11397 = 1. + t11391;
  t11402 = 0.047*t11397;
  t11406 = 0. + t11402;
  t11480 = t10334*t11358*t11013;
  t11482 = -1.*t3819*t11365;
  t11484 = t11480 + t11482;
  t11488 = t3819*t10334;
  t11489 = t11358*t11013*t11365;
  t11490 = t11488 + t11489;
  t11430 = -0.183*t11426;
  t11432 = 0. + t11430;
  t11443 = -0.15*t11442;
  t11448 = -0.183*t11447;
  t11449 = 0. + t11443 + t11448;
  t11502 = t11389*t11484;
  t11505 = -1.*t8035*t11490;
  t11506 = t11502 + t11505;
  t11455 = -0.183*t11442;
  t11456 = 0.15*t11447;
  t11457 = 0. + t11455 + t11456;
  t11509 = t3933*t11426*t11358;
  t11510 = t190*t11506;
  t11511 = t11509 + t11510;
  t11522 = t190*t3933*t11358;
  t11533 = -1.*t11426*t11506;
  t11537 = t11522 + t11533;
  t11575 = t11389*t3933*t10334;
  t11576 = -1.*t3933*t8035*t11365;
  t11577 = t11575 + t11576;
  t11579 = -1.*t11426*t11013;
  t11580 = t190*t11577;
  t11581 = t11579 + t11580;
  t11583 = -1.*t190*t11013;
  t11584 = -1.*t11426*t11577;
  t11586 = t11583 + t11584;
  p_output1[0]=0. + t11406*t11417 + t11432*t11435 + t11449*t11452 + t11457*t11462 - 0.183*(-1.*t11447*t11452 + t11440*t11462) - 0.15*(t11440*t11452 + t11447*t11462) + t3095*t3819*t3933 + 0.13205*(t11389*t11417 + t11383*t8035) + t11383*t9273 + var1[0];
  p_output1[1]=0. + t11406*t11490 + t11432*t11506 + t11449*t11511 + t11457*t11537 - 0.183*(-1.*t11447*t11511 + t11440*t11537) - 0.15*(t11440*t11511 + t11447*t11537) + t11358*t3095*t3933 + 0.13205*(t11389*t11490 + t11484*t8035) + t11484*t9273 + var1[1];
  p_output1[2]=0. + t11432*t11577 + t11449*t11581 + t11457*t11586 - 0.183*(-1.*t11447*t11581 + t11440*t11586) - 0.15*(t11440*t11581 + t11447*t11586) - 1.*t11013*t3095 + t11365*t11406*t3933 + 0.13205*(t11365*t11389*t3933 + t10334*t3933*t8035) + t10334*t3933*t9273 + var1[2];
}



void p_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
