/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint_src.h"

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
  double t165;
  double t831;
  double t872;
  double t853;
  double t915;
  double t154;
  double t501;
  double t593;
  double t662;
  double t977;
  double t856;
  double t938;
  double t947;
  double t1003;
  double t1322;
  double t1331;
  double t4233;
  double t4250;
  double t4299;
  double t4528;
  double t4664;
  double t4670;
  double t953;
  double t1832;
  double t2191;
  double t4331;
  double t4721;
  double t4728;
  double t5345;
  double t5355;
  double t5392;
  double t5454;
  double t5480;
  double t5490;
  double t526;
  double t3083;
  double t4153;
  double t5556;
  double t5558;
  double t5559;
  double t5567;
  double t5582;
  double t5583;
  double t5589;
  double t5590;
  double t5592;
  double t5596;
  double t5494;
  double t5500;
  double t5506;
  double t5650;
  double t5652;
  double t4212;
  double t5242;
  double t5267;
  double t5510;
  double t5516;
  double t5523;
  double t5303;
  double t5424;
  double t5442;
  t165 = Cos(var1[3]);
  t831 = Cos(var1[5]);
  t872 = Sin(var1[3]);
  t853 = Sin(var1[4]);
  t915 = Sin(var1[5]);
  t154 = Cos(var1[10]);
  t501 = Cos(var1[4]);
  t593 = Sin(var1[10]);
  t662 = Cos(var1[9]);
  t977 = Sin(var1[9]);
  t856 = t165*t831*t853;
  t938 = t872*t915;
  t947 = t856 + t938;
  t1003 = -1.*t831*t872;
  t1322 = t165*t853*t915;
  t1331 = t1003 + t1322;
  t4233 = t831*t872*t853;
  t4250 = -1.*t165*t915;
  t4299 = t4233 + t4250;
  t4528 = t165*t831;
  t4664 = t872*t853*t915;
  t4670 = t4528 + t4664;
  t953 = t662*t947;
  t1832 = -1.*t977*t1331;
  t2191 = t953 + t1832;
  t4331 = t662*t4299;
  t4721 = -1.*t977*t4670;
  t4728 = t4331 + t4721;
  t5345 = t662*t501*t831;
  t5355 = -1.*t501*t977*t915;
  t5392 = t5345 + t5355;
  t5454 = t977*t947;
  t5480 = t662*t1331;
  t5490 = t5454 + t5480;
  t526 = t154*t165*t501;
  t3083 = -1.*t593*t2191;
  t4153 = t526 + t3083;
  t5556 = -1.*t154;
  t5558 = 1. + t5556;
  t5559 = 0.183*t5558;
  t5567 = 0. + t5559;
  t5582 = -0.047*t977;
  t5583 = 0. + t5582;
  t5589 = -1.*t662;
  t5590 = 1. + t5589;
  t5592 = 0.047*t5590;
  t5596 = 0. + t5592;
  t5494 = t977*t4299;
  t5500 = t662*t4670;
  t5506 = t5494 + t5500;
  t5650 = 0.183*t593;
  t5652 = 0. + t5650;
  t4212 = t154*t501*t872;
  t5242 = -1.*t593*t4728;
  t5267 = t4212 + t5242;
  t5510 = t501*t831*t977;
  t5516 = t662*t501*t915;
  t5523 = t5510 + t5516;
  t5303 = -1.*t154*t853;
  t5424 = -1.*t593*t5392;
  t5442 = t5303 + t5424;
  p_output1[0]=t4153;
  p_output1[1]=t5267;
  p_output1[2]=t5442;
  p_output1[3]=0.;
  p_output1[4]=t5490;
  p_output1[5]=t5506;
  p_output1[6]=t5523;
  p_output1[7]=0.;
  p_output1[8]=t154*t2191 + t165*t501*t593;
  p_output1[9]=t154*t4728 + t501*t593*t872;
  p_output1[10]=t154*t5392 - 1.*t593*t853;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t4153 + 0.13205*t5490 + t165*t501*t5567 + t1331*t5596 + t2191*t5652 + t5583*t947 + var1[0];
  p_output1[13]=0. + 0.183*t5267 + 0.13205*t5506 + t4299*t5583 + t4670*t5596 + t4728*t5652 + t501*t5567*t872 + var1[1];
  p_output1[14]=0. + 0.183*t5442 + 0.13205*t5523 + t5392*t5652 + t501*t5583*t831 - 1.*t5567*t853 + t501*t5596*t915 + var1[2];
  p_output1[15]=1.;
}



void H_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
