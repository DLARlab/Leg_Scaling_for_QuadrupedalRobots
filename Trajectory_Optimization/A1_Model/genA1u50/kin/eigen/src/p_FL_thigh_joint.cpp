/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t2832;
  double t4148;
  double t8402;
  double t4190;
  double t8404;
  double t3109;
  double t4790;
  double t8440;
  double t8447;
  double t8450;
  double t8484;
  double t8487;
  double t8488;
  double t1047;
  double t2997;
  double t8505;
  double t8508;
  double t8510;
  double t8511;
  double t1162;
  double t1181;
  double t2099;
  double t2245;
  double t3184;
  double t3525;
  double t8460;
  double t8461;
  double t8463;
  double t8482;
  double t8531;
  double t8532;
  double t8533;
  double t8537;
  double t8538;
  double t8539;
  double t8506;
  double t8507;
  double t8548;
  double t8549;
  double t8550;
  double t8574;
  double t8575;
  double t8576;
  t2832 = Cos(var1[3]);
  t4148 = Cos(var1[5]);
  t8402 = Sin(var1[3]);
  t4190 = Sin(var1[4]);
  t8404 = Sin(var1[5]);
  t3109 = Sin(var1[9]);
  t4790 = t2832*t4148*t4190;
  t8440 = t8402*t8404;
  t8447 = t4790 + t8440;
  t8450 = Cos(var1[9]);
  t8484 = -1.*t4148*t8402;
  t8487 = t2832*t4190*t8404;
  t8488 = t8484 + t8487;
  t1047 = Cos(var1[10]);
  t2997 = Cos(var1[4]);
  t8505 = Sin(var1[10]);
  t8508 = t8450*t8447;
  t8510 = -1.*t3109*t8488;
  t8511 = t8508 + t8510;
  t1162 = -1.*t1047;
  t1181 = 1. + t1162;
  t2099 = 0.183*t1181;
  t2245 = 0. + t2099;
  t3184 = -0.047*t3109;
  t3525 = 0. + t3184;
  t8460 = -1.*t8450;
  t8461 = 1. + t8460;
  t8463 = 0.047*t8461;
  t8482 = 0. + t8463;
  t8531 = t4148*t8402*t4190;
  t8532 = -1.*t2832*t8404;
  t8533 = t8531 + t8532;
  t8537 = t2832*t4148;
  t8538 = t8402*t4190*t8404;
  t8539 = t8537 + t8538;
  t8506 = 0.183*t8505;
  t8507 = 0. + t8506;
  t8548 = t8450*t8533;
  t8549 = -1.*t3109*t8539;
  t8550 = t8548 + t8549;
  t8574 = t8450*t2997*t4148;
  t8575 = -1.*t2997*t3109*t8404;
  t8576 = t8574 + t8575;

  p_output1(0)=0. + t2245*t2832*t2997 + t3525*t8447 + t8482*t8488 + 0.08953*(t3109*t8447 + t8450*t8488) + t8507*t8511 + 0.183*(t1047*t2832*t2997 - 1.*t8505*t8511) + var1(0);
  p_output1(1)=0. + t2245*t2997*t8402 + t3525*t8533 + t8482*t8539 + 0.08953*(t3109*t8533 + t8450*t8539) + t8507*t8550 + 0.183*(t1047*t2997*t8402 - 1.*t8505*t8550) + var1(1);
  p_output1(2)=0. + t2997*t3525*t4148 - 1.*t2245*t4190 + 0.08953*(t2997*t3109*t4148 + t2997*t8404*t8450) + t2997*t8404*t8482 + t8507*t8576 + 0.183*(-1.*t1047*t4190 - 1.*t8505*t8576) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



