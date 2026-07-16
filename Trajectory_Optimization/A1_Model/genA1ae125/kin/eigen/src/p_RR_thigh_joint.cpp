/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint.h"

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
  double t3503;
  double t4059;
  double t4091;
  double t4081;
  double t4107;
  double t4002;
  double t4082;
  double t4108;
  double t4111;
  double t4124;
  double t4196;
  double t4199;
  double t4204;
  double t263;
  double t3532;
  double t4231;
  double t4294;
  double t4298;
  double t4320;
  double t1092;
  double t1622;
  double t1652;
  double t2944;
  double t4053;
  double t4055;
  double t4138;
  double t4147;
  double t4162;
  double t4182;
  double t4366;
  double t4369;
  double t4372;
  double t4380;
  double t4381;
  double t4388;
  double t4264;
  double t4265;
  double t4420;
  double t4421;
  double t4423;
  double t4444;
  double t4445;
  double t4446;
  t3503 = Cos(var1[3]);
  t4059 = Cos(var1[5]);
  t4091 = Sin(var1[3]);
  t4081 = Sin(var1[4]);
  t4107 = Sin(var1[5]);
  t4002 = Sin(var1[12]);
  t4082 = t3503*t4059*t4081;
  t4108 = t4091*t4107;
  t4111 = t4082 + t4108;
  t4124 = Cos(var1[12]);
  t4196 = -1.*t4059*t4091;
  t4199 = t3503*t4081*t4107;
  t4204 = t4196 + t4199;
  t263 = Cos(var1[13]);
  t3532 = Cos(var1[4]);
  t4231 = Sin(var1[13]);
  t4294 = t4124*t4111;
  t4298 = -1.*t4002*t4204;
  t4320 = t4294 + t4298;
  t1092 = -1.*t263;
  t1622 = 1. + t1092;
  t1652 = -0.183*t1622;
  t2944 = 0. + t1652;
  t4053 = 0.047*t4002;
  t4055 = 0. + t4053;
  t4138 = -1.*t4124;
  t4147 = 1. + t4138;
  t4162 = -0.047*t4147;
  t4182 = 0. + t4162;
  t4366 = t4059*t4091*t4081;
  t4369 = -1.*t3503*t4107;
  t4372 = t4366 + t4369;
  t4380 = t3503*t4059;
  t4381 = t4091*t4081*t4107;
  t4388 = t4380 + t4381;
  t4264 = -0.183*t4231;
  t4265 = 0. + t4264;
  t4420 = t4124*t4372;
  t4421 = -1.*t4002*t4388;
  t4423 = t4420 + t4421;
  t4444 = t4124*t3532*t4059;
  t4445 = -1.*t3532*t4002*t4107;
  t4446 = t4444 + t4445;

  p_output1(0)=0. + t2944*t3503*t3532 + t4055*t4111 + t4182*t4204 - 0.13205*(t4002*t4111 + t4124*t4204) + t4265*t4320 - 0.183*(t263*t3503*t3532 - 1.*t4231*t4320) + var1(0);
  p_output1(1)=0. + t2944*t3532*t4091 + t4055*t4372 + t4182*t4388 - 0.13205*(t4002*t4372 + t4124*t4388) + t4265*t4423 - 0.183*(t263*t3532*t4091 - 1.*t4231*t4423) + var1(1);
  p_output1(2)=0. + t3532*t4055*t4059 - 1.*t2944*t4081 - 0.13205*(t3532*t4002*t4059 + t3532*t4107*t4124) + t3532*t4107*t4182 + t4265*t4446 - 0.183*(-1.*t263*t4081 - 1.*t4231*t4446) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



