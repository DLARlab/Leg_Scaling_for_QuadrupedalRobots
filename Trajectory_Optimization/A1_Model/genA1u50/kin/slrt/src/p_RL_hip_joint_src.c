/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_hip_joint_src.h"

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
  double t4045;
  double t4079;
  double t4084;
  double t4082;
  double t4088;
  double t4066;
  double t4083;
  double t4089;
  double t4091;
  double t4093;
  double t4098;
  double t4099;
  double t4100;
  double t4046;
  double t4067;
  double t4078;
  double t4094;
  double t4095;
  double t4096;
  double t4097;
  double t4109;
  double t4110;
  double t4111;
  double t4113;
  double t4114;
  double t4115;
  t4045 = Cos(var1[3]);
  t4079 = Cos(var1[5]);
  t4084 = Sin(var1[3]);
  t4082 = Sin(var1[4]);
  t4088 = Sin(var1[5]);
  t4066 = Sin(var1[15]);
  t4083 = t4045*t4079*t4082;
  t4089 = t4084*t4088;
  t4091 = t4083 + t4089;
  t4093 = Cos(var1[15]);
  t4098 = -1.*t4079*t4084;
  t4099 = t4045*t4082*t4088;
  t4100 = t4098 + t4099;
  t4046 = Cos(var1[4]);
  t4067 = -0.047*t4066;
  t4078 = 0. + t4067;
  t4094 = -1.*t4093;
  t4095 = 1. + t4094;
  t4096 = 0.047*t4095;
  t4097 = 0. + t4096;
  t4109 = t4079*t4084*t4082;
  t4110 = -1.*t4045*t4088;
  t4111 = t4109 + t4110;
  t4113 = t4045*t4079;
  t4114 = t4084*t4082*t4088;
  t4115 = t4113 + t4114;
  p_output1[0]=0. - 0.183*t4045*t4046 + t4078*t4091 + t4097*t4100 + 0.047*(t4066*t4091 + t4093*t4100) + var1[0];
  p_output1[1]=0. - 0.183*t4046*t4084 + t4078*t4111 + t4097*t4115 + 0.047*(t4066*t4111 + t4093*t4115) + var1[1];
  p_output1[2]=0. + t4046*t4078*t4079 + 0.183*t4082 + 0.047*(t4046*t4066*t4079 + t4046*t4088*t4093) + t4046*t4088*t4097 + var1[2];
}



void p_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
