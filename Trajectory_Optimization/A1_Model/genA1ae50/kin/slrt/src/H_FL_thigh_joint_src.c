/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:03 GMT-05:00
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
  double t1779;
  double t3672;
  double t4034;
  double t3945;
  double t4040;
  double t409;
  double t3216;
  double t3402;
  double t3534;
  double t4647;
  double t3990;
  double t4055;
  double t4066;
  double t4853;
  double t5174;
  double t5198;
  double t5298;
  double t5299;
  double t5302;
  double t5327;
  double t5340;
  double t5379;
  double t4198;
  double t5235;
  double t5253;
  double t5325;
  double t5389;
  double t5400;
  double t5574;
  double t5599;
  double t5604;
  double t5743;
  double t5787;
  double t5798;
  double t3331;
  double t5260;
  double t5288;
  double t5944;
  double t5951;
  double t6035;
  double t6080;
  double t6113;
  double t6114;
  double t6117;
  double t6175;
  double t6223;
  double t6242;
  double t5801;
  double t5805;
  double t5821;
  double t6352;
  double t6384;
  double t5294;
  double t5402;
  double t5405;
  double t5829;
  double t5834;
  double t5841;
  double t5495;
  double t5605;
  double t5607;
  t1779 = Cos(var1[3]);
  t3672 = Cos(var1[5]);
  t4034 = Sin(var1[3]);
  t3945 = Sin(var1[4]);
  t4040 = Sin(var1[5]);
  t409 = Cos(var1[10]);
  t3216 = Cos(var1[4]);
  t3402 = Sin(var1[10]);
  t3534 = Cos(var1[9]);
  t4647 = Sin(var1[9]);
  t3990 = t1779*t3672*t3945;
  t4055 = t4034*t4040;
  t4066 = t3990 + t4055;
  t4853 = -1.*t3672*t4034;
  t5174 = t1779*t3945*t4040;
  t5198 = t4853 + t5174;
  t5298 = t3672*t4034*t3945;
  t5299 = -1.*t1779*t4040;
  t5302 = t5298 + t5299;
  t5327 = t1779*t3672;
  t5340 = t4034*t3945*t4040;
  t5379 = t5327 + t5340;
  t4198 = t3534*t4066;
  t5235 = -1.*t4647*t5198;
  t5253 = t4198 + t5235;
  t5325 = t3534*t5302;
  t5389 = -1.*t4647*t5379;
  t5400 = t5325 + t5389;
  t5574 = t3534*t3216*t3672;
  t5599 = -1.*t3216*t4647*t4040;
  t5604 = t5574 + t5599;
  t5743 = t4647*t4066;
  t5787 = t3534*t5198;
  t5798 = t5743 + t5787;
  t3331 = t409*t1779*t3216;
  t5260 = -1.*t3402*t5253;
  t5288 = t3331 + t5260;
  t5944 = -1.*t409;
  t5951 = 1. + t5944;
  t6035 = 0.183*t5951;
  t6080 = 0. + t6035;
  t6113 = -0.047*t4647;
  t6114 = 0. + t6113;
  t6117 = -1.*t3534;
  t6175 = 1. + t6117;
  t6223 = 0.047*t6175;
  t6242 = 0. + t6223;
  t5801 = t4647*t5302;
  t5805 = t3534*t5379;
  t5821 = t5801 + t5805;
  t6352 = 0.183*t3402;
  t6384 = 0. + t6352;
  t5294 = t409*t3216*t4034;
  t5402 = -1.*t3402*t5400;
  t5405 = t5294 + t5402;
  t5829 = t3216*t3672*t4647;
  t5834 = t3534*t3216*t4040;
  t5841 = t5829 + t5834;
  t5495 = -1.*t409*t3945;
  t5605 = -1.*t3402*t5604;
  t5607 = t5495 + t5605;
  p_output1[0]=t5288;
  p_output1[1]=t5405;
  p_output1[2]=t5607;
  p_output1[3]=0.;
  p_output1[4]=t5798;
  p_output1[5]=t5821;
  p_output1[6]=t5841;
  p_output1[7]=0.;
  p_output1[8]=t1779*t3216*t3402 + t409*t5253;
  p_output1[9]=t3216*t3402*t4034 + t409*t5400;
  p_output1[10]=-1.*t3402*t3945 + t409*t5604;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t5288 + 0.13205*t5798 + t1779*t3216*t6080 + t4066*t6114 + t5198*t6242 + t5253*t6384 + var1[0];
  p_output1[13]=0. + 0.183*t5405 + 0.13205*t5821 + t3216*t4034*t6080 + t5302*t6114 + t5379*t6242 + t5400*t6384 + var1[1];
  p_output1[14]=0. + 0.183*t5607 + 0.13205*t5841 - 1.*t3945*t6080 + t3216*t3672*t6114 + t3216*t4040*t6242 + t5604*t6384 + var1[2];
  p_output1[15]=1.;
}



void H_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
