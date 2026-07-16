/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:13 GMT-05:00
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
  double t562;
  double t3810;
  double t3961;
  double t3884;
  double t3977;
  double t3349;
  double t3919;
  double t3980;
  double t3982;
  double t4047;
  double t4058;
  double t4448;
  double t4477;
  double t1827;
  double t2424;
  double t5192;
  double t5213;
  double t5222;
  double t5225;
  double t5268;
  double t5269;
  double t5271;
  double t5274;
  double t5265;
  double t5266;
  double t5267;
  double t5281;
  double t5282;
  double t5283;
  double t2447;
  double t2644;
  double t3038;
  double t3256;
  double t3357;
  double t3468;
  double t3483;
  double t3595;
  double t4630;
  double t4645;
  double t5305;
  double t5306;
  double t5308;
  double t5311;
  double t5314;
  double t5315;
  double t5254;
  double t5263;
  double t5326;
  double t5327;
  double t5340;
  double t5273;
  double t5275;
  double t5276;
  double t5287;
  double t5288;
  double t5289;
  double t5470;
  double t5561;
  double t5622;
  double t5846;
  double t5877;
  double t5883;
  double t6315;
  double t6341;
  double t6344;
  double t6349;
  double t6358;
  double t6363;
  double t6410;
  double t6425;
  double t6427;
  t562 = Cos(var1[3]);
  t3810 = Cos(var1[5]);
  t3961 = Sin(var1[4]);
  t3884 = Sin(var1[3]);
  t3977 = Sin(var1[5]);
  t3349 = Cos(var1[6]);
  t3919 = -1.*t3810*t3884;
  t3980 = t562*t3961*t3977;
  t3982 = t3919 + t3980;
  t4047 = t562*t3810*t3961;
  t4058 = t3884*t3977;
  t4448 = t4047 + t4058;
  t4477 = Sin(var1[6]);
  t1827 = Cos(var1[4]);
  t2424 = Cos(var1[7]);
  t5192 = t3349*t4448;
  t5213 = -1.*t3982*t4477;
  t5222 = t5192 + t5213;
  t5225 = Sin(var1[7]);
  t5268 = Cos(var1[8]);
  t5269 = -1.*t5268;
  t5271 = 1. + t5269;
  t5274 = Sin(var1[8]);
  t5265 = t562*t1827*t2424;
  t5266 = -1.*t5222*t5225;
  t5267 = t5265 + t5266;
  t5281 = t2424*t5222;
  t5282 = t562*t1827*t5225;
  t5283 = t5281 + t5282;
  t2447 = -1.*t2424;
  t2644 = 1. + t2447;
  t3038 = 0.183*t2644;
  t3256 = 0. + t3038;
  t3357 = -1.*t3349;
  t3468 = 1. + t3357;
  t3483 = -0.047*t3468;
  t3595 = 0. + t3483;
  t4630 = 0.047*t4477;
  t4645 = 0. + t4630;
  t5305 = t562*t3810;
  t5306 = t3884*t3961*t3977;
  t5308 = t5305 + t5306;
  t5311 = t3810*t3884*t3961;
  t5314 = -1.*t562*t3977;
  t5315 = t5311 + t5314;
  t5254 = 0.183*t5225;
  t5263 = 0. + t5254;
  t5326 = t3349*t5315;
  t5327 = -1.*t5308*t4477;
  t5340 = t5326 + t5327;
  t5273 = 0.183*t5271;
  t5275 = 0.15*t5274;
  t5276 = 0. + t5273 + t5275;
  t5287 = -0.15*t5271;
  t5288 = 0.183*t5274;
  t5289 = 0. + t5287 + t5288;
  t5470 = t1827*t2424*t3884;
  t5561 = -1.*t5340*t5225;
  t5622 = t5470 + t5561;
  t5846 = t2424*t5340;
  t5877 = t1827*t3884*t5225;
  t5883 = t5846 + t5877;
  t6315 = t1827*t3810*t3349;
  t6341 = -1.*t1827*t3977*t4477;
  t6344 = t6315 + t6341;
  t6349 = -1.*t2424*t3961;
  t6358 = -1.*t6344*t5225;
  t6363 = t6349 + t6358;
  t6410 = t2424*t6344;
  t6425 = -1.*t3961*t5225;
  t6427 = t6410 + t6425;
  p_output1[0]=0. + t3595*t3982 - 0.11079*(t3349*t3982 + t4448*t4477) + t4448*t4645 + t5222*t5263 + t5267*t5276 - 0.3*(t5267*t5274 + t5268*t5283) + 0.183*(t5267*t5268 - 1.*t5274*t5283) + t5283*t5289 + t1827*t3256*t562 + var1[0];
  p_output1[1]=0. + t1827*t3256*t3884 + t3595*t5308 + t4645*t5315 - 0.11079*(t3349*t5308 + t4477*t5315) + t5263*t5340 + t5276*t5622 + t5289*t5883 - 0.3*(t5274*t5622 + t5268*t5883) + 0.183*(t5268*t5622 - 1.*t5274*t5883) + var1[1];
  p_output1[2]=0. - 1.*t3256*t3961 + t1827*t3595*t3977 - 0.11079*(t1827*t3349*t3977 + t1827*t3810*t4477) + t1827*t3810*t4645 + t5263*t6344 + t5276*t6363 + t5289*t6427 - 0.3*(t5274*t6363 + t5268*t6427) + 0.183*(t5268*t6363 - 1.*t5274*t6427) + var1[2];
}



void p_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
