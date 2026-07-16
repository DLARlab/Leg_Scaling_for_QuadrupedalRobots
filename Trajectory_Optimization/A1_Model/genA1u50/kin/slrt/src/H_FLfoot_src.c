/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:09 GMT-05:00
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
  double t184;
  double t1539;
  double t1566;
  double t1559;
  double t1579;
  double t708;
  double t191;
  double t417;
  double t1001;
  double t1565;
  double t2248;
  double t2412;
  double t3419;
  double t6130;
  double t6183;
  double t6187;
  double t6189;
  double t6196;
  double t6200;
  double t59;
  double t6259;
  double t6295;
  double t6297;
  double t6299;
  double t6300;
  double t6301;
  double t6304;
  double t6306;
  double t6308;
  double t6314;
  double t6342;
  double t6343;
  double t6346;
  double t707;
  double t6215;
  double t6221;
  double t6267;
  double t6269;
  double t6270;
  double t6292;
  double t6315;
  double t6316;
  double t6323;
  double t6330;
  double t6334;
  double t6341;
  double t6348;
  double t6349;
  double t6351;
  double t6366;
  double t6368;
  double t6377;
  double t6380;
  double t6381;
  double t6459;
  double t6463;
  double t6250;
  double t6272;
  double t6284;
  double t6397;
  double t6404;
  double t6410;
  double t6432;
  double t6433;
  double t6434;
  double t6435;
  double t6438;
  double t6441;
  double t6443;
  double t6446;
  double t6447;
  double t6448;
  double t6384;
  double t6385;
  double t6387;
  double t6451;
  double t6454;
  double t6465;
  double t6467;
  double t6472;
  double t6474;
  double t6475;
  double t6477;
  double t6321;
  double t6336;
  double t6340;
  double t6412;
  double t6414;
  double t6416;
  double t6389;
  double t6391;
  double t6393;
  double t6350;
  double t6370;
  double t6376;
  double t6421;
  double t6423;
  double t6426;
  t184 = Cos(var1[3]);
  t1539 = Cos(var1[5]);
  t1566 = Sin(var1[3]);
  t1559 = Sin(var1[4]);
  t1579 = Sin(var1[5]);
  t708 = Cos(var1[10]);
  t191 = Cos(var1[4]);
  t417 = Sin(var1[10]);
  t1001 = Cos(var1[9]);
  t1565 = t184*t1539*t1559;
  t2248 = t1566*t1579;
  t2412 = t1565 + t2248;
  t3419 = t1001*t2412;
  t6130 = Sin(var1[9]);
  t6183 = -1.*t1539*t1566;
  t6187 = t184*t1559*t1579;
  t6189 = t6183 + t6187;
  t6196 = -1.*t6130*t6189;
  t6200 = t3419 + t6196;
  t59 = Sin(var1[11]);
  t6259 = Cos(var1[11]);
  t6295 = t1539*t1566*t1559;
  t6297 = -1.*t184*t1579;
  t6299 = t6295 + t6297;
  t6300 = t1001*t6299;
  t6301 = t184*t1539;
  t6304 = t1566*t1559*t1579;
  t6306 = t6301 + t6304;
  t6308 = -1.*t6130*t6306;
  t6314 = t6300 + t6308;
  t6342 = t1001*t191*t1539;
  t6343 = -1.*t191*t6130*t1579;
  t6346 = t6342 + t6343;
  t707 = t184*t191*t417;
  t6215 = t708*t6200;
  t6221 = t707 + t6215;
  t6267 = t708*t184*t191;
  t6269 = -1.*t417*t6200;
  t6270 = t6267 + t6269;
  t6292 = t191*t417*t1566;
  t6315 = t708*t6314;
  t6316 = t6292 + t6315;
  t6323 = t708*t191*t1566;
  t6330 = -1.*t417*t6314;
  t6334 = t6323 + t6330;
  t6341 = -1.*t417*t1559;
  t6348 = t708*t6346;
  t6349 = t6341 + t6348;
  t6351 = -1.*t708*t1559;
  t6366 = -1.*t417*t6346;
  t6368 = t6351 + t6366;
  t6377 = t6130*t2412;
  t6380 = t1001*t6189;
  t6381 = t6377 + t6380;
  t6459 = -1.*t6259;
  t6463 = 1. + t6459;
  t6250 = -1.*t59*t6221;
  t6272 = t6259*t6270;
  t6284 = t6250 + t6272;
  t6397 = t6259*t6221;
  t6404 = t59*t6270;
  t6410 = t6397 + t6404;
  t6432 = -1.*t708;
  t6433 = 1. + t6432;
  t6434 = 0.183*t6433;
  t6435 = 0. + t6434;
  t6438 = -0.047*t6130;
  t6441 = 0. + t6438;
  t6443 = -1.*t1001;
  t6446 = 1. + t6443;
  t6447 = 0.047*t6446;
  t6448 = 0. + t6447;
  t6384 = t6130*t6299;
  t6385 = t1001*t6306;
  t6387 = t6384 + t6385;
  t6451 = 0.183*t417;
  t6454 = 0. + t6451;
  t6465 = -0.1*t6463;
  t6467 = 0.183*t59;
  t6472 = 0. + t6465 + t6467;
  t6474 = 0.183*t6463;
  t6475 = 0.1*t59;
  t6477 = 0. + t6474 + t6475;
  t6321 = -1.*t59*t6316;
  t6336 = t6259*t6334;
  t6340 = t6321 + t6336;
  t6412 = t6259*t6316;
  t6414 = t59*t6334;
  t6416 = t6412 + t6414;
  t6389 = t191*t1539*t6130;
  t6391 = t1001*t191*t1579;
  t6393 = t6389 + t6391;
  t6350 = -1.*t59*t6349;
  t6370 = t6259*t6368;
  t6376 = t6350 + t6370;
  t6421 = t6259*t6349;
  t6423 = t59*t6368;
  t6426 = t6421 + t6423;
  p_output1[0]=t6284;
  p_output1[1]=t6340;
  p_output1[2]=t6376;
  p_output1[3]=0.;
  p_output1[4]=t6381;
  p_output1[5]=t6387;
  p_output1[6]=t6393;
  p_output1[7]=0.;
  p_output1[8]=t6410;
  p_output1[9]=t6416;
  p_output1[10]=t6426;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t6284 + 0.08953*t6381 - 0.2*t6410 + t184*t191*t6435 + t2412*t6441 + t6189*t6448 + t6200*t6454 + t6221*t6472 + t6270*t6477 + var1[0];
  p_output1[13]=0. + 0.183*t6340 + 0.08953*t6387 - 0.2*t6416 + t1566*t191*t6435 + t6299*t6441 + t6306*t6448 + t6314*t6454 + t6316*t6472 + t6334*t6477 + var1[1];
  p_output1[14]=0. + 0.183*t6376 + 0.08953*t6393 - 0.2*t6426 - 1.*t1559*t6435 + t1539*t191*t6441 + t1579*t191*t6448 + t6346*t6454 + t6349*t6472 + t6368*t6477 + var1[2];
  p_output1[15]=1.;
}



void H_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
