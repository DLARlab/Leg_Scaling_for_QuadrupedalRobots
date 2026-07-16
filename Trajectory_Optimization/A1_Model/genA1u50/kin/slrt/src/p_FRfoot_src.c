/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:05 GMT-05:00
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
  double t201;
  double t5408;
  double t5411;
  double t5409;
  double t5412;
  double t5402;
  double t5410;
  double t5413;
  double t5417;
  double t5419;
  double t5420;
  double t5426;
  double t5428;
  double t205;
  double t5376;
  double t5437;
  double t5438;
  double t5439;
  double t5440;
  double t5447;
  double t5448;
  double t5449;
  double t5452;
  double t5444;
  double t5445;
  double t5446;
  double t5457;
  double t5458;
  double t5459;
  double t5388;
  double t5392;
  double t5393;
  double t5399;
  double t5403;
  double t5404;
  double t5406;
  double t5407;
  double t5429;
  double t5430;
  double t5479;
  double t5480;
  double t5481;
  double t5483;
  double t5484;
  double t5485;
  double t5441;
  double t5442;
  double t5496;
  double t5499;
  double t5500;
  double t5451;
  double t5454;
  double t5455;
  double t5460;
  double t5463;
  double t5464;
  double t5502;
  double t5503;
  double t5504;
  double t5506;
  double t5507;
  double t5508;
  double t5526;
  double t5527;
  double t5528;
  double t5530;
  double t5531;
  double t5532;
  double t5534;
  double t5535;
  double t5536;
  t201 = Cos(var1[3]);
  t5408 = Cos(var1[5]);
  t5411 = Sin(var1[4]);
  t5409 = Sin(var1[3]);
  t5412 = Sin(var1[5]);
  t5402 = Cos(var1[6]);
  t5410 = -1.*t5408*t5409;
  t5413 = t201*t5411*t5412;
  t5417 = t5410 + t5413;
  t5419 = t201*t5408*t5411;
  t5420 = t5409*t5412;
  t5426 = t5419 + t5420;
  t5428 = Sin(var1[6]);
  t205 = Cos(var1[4]);
  t5376 = Cos(var1[7]);
  t5437 = t5402*t5426;
  t5438 = -1.*t5417*t5428;
  t5439 = t5437 + t5438;
  t5440 = Sin(var1[7]);
  t5447 = Cos(var1[8]);
  t5448 = -1.*t5447;
  t5449 = 1. + t5448;
  t5452 = Sin(var1[8]);
  t5444 = t201*t205*t5376;
  t5445 = -1.*t5439*t5440;
  t5446 = t5444 + t5445;
  t5457 = t5376*t5439;
  t5458 = t201*t205*t5440;
  t5459 = t5457 + t5458;
  t5388 = -1.*t5376;
  t5392 = 1. + t5388;
  t5393 = 0.183*t5392;
  t5399 = 0. + t5393;
  t5403 = -1.*t5402;
  t5404 = 1. + t5403;
  t5406 = -0.047*t5404;
  t5407 = 0. + t5406;
  t5429 = 0.047*t5428;
  t5430 = 0. + t5429;
  t5479 = t201*t5408;
  t5480 = t5409*t5411*t5412;
  t5481 = t5479 + t5480;
  t5483 = t5408*t5409*t5411;
  t5484 = -1.*t201*t5412;
  t5485 = t5483 + t5484;
  t5441 = 0.183*t5440;
  t5442 = 0. + t5441;
  t5496 = t5402*t5485;
  t5499 = -1.*t5481*t5428;
  t5500 = t5496 + t5499;
  t5451 = 0.183*t5449;
  t5454 = 0.1*t5452;
  t5455 = 0. + t5451 + t5454;
  t5460 = -0.1*t5449;
  t5463 = 0.183*t5452;
  t5464 = 0. + t5460 + t5463;
  t5502 = t205*t5376*t5409;
  t5503 = -1.*t5500*t5440;
  t5504 = t5502 + t5503;
  t5506 = t5376*t5500;
  t5507 = t205*t5409*t5440;
  t5508 = t5506 + t5507;
  t5526 = t205*t5408*t5402;
  t5527 = -1.*t205*t5412*t5428;
  t5528 = t5526 + t5527;
  t5530 = -1.*t5376*t5411;
  t5531 = -1.*t5528*t5440;
  t5532 = t5530 + t5531;
  t5534 = t5376*t5528;
  t5535 = -1.*t5411*t5440;
  t5536 = t5534 + t5535;
  p_output1[0]=0. + t201*t205*t5399 + t5407*t5417 - 0.08953*(t5402*t5417 + t5426*t5428) + t5426*t5430 + t5439*t5442 + t5446*t5455 - 0.2*(t5446*t5452 + t5447*t5459) + 0.183*(t5446*t5447 - 1.*t5452*t5459) + t5459*t5464 + var1[0];
  p_output1[1]=0. + t205*t5399*t5409 + t5407*t5481 + t5430*t5485 - 0.08953*(t5402*t5481 + t5428*t5485) + t5442*t5500 + t5455*t5504 + t5464*t5508 - 0.2*(t5452*t5504 + t5447*t5508) + 0.183*(t5447*t5504 - 1.*t5452*t5508) + var1[1];
  p_output1[2]=0. - 1.*t5399*t5411 + t205*t5407*t5412 - 0.08953*(t205*t5402*t5412 + t205*t5408*t5428) + t205*t5408*t5430 + t5442*t5528 + t5455*t5532 + t5464*t5536 - 0.2*(t5452*t5532 + t5447*t5536) + 0.183*(t5447*t5532 - 1.*t5452*t5536) + var1[2];
}



void p_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
