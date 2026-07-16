/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint_src.h"

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
  double t4292;
  double t4303;
  double t4306;
  double t4304;
  double t4307;
  double t4298;
  double t4305;
  double t4309;
  double t4310;
  double t4314;
  double t4319;
  double t4320;
  double t4321;
  double t4269;
  double t4293;
  double t4329;
  double t4332;
  double t4333;
  double t4336;
  double t4283;
  double t4285;
  double t4286;
  double t4289;
  double t4299;
  double t4301;
  double t4315;
  double t4316;
  double t4317;
  double t4318;
  double t4344;
  double t4345;
  double t4346;
  double t4348;
  double t4349;
  double t4352;
  double t4330;
  double t4331;
  double t4358;
  double t4359;
  double t4360;
  double t4374;
  double t4375;
  double t4376;
  t4292 = Cos(var1[3]);
  t4303 = Cos(var1[5]);
  t4306 = Sin(var1[3]);
  t4304 = Sin(var1[4]);
  t4307 = Sin(var1[5]);
  t4298 = Sin(var1[15]);
  t4305 = t4292*t4303*t4304;
  t4309 = t4306*t4307;
  t4310 = t4305 + t4309;
  t4314 = Cos(var1[15]);
  t4319 = -1.*t4303*t4306;
  t4320 = t4292*t4304*t4307;
  t4321 = t4319 + t4320;
  t4269 = Cos(var1[16]);
  t4293 = Cos(var1[4]);
  t4329 = Sin(var1[16]);
  t4332 = t4314*t4310;
  t4333 = -1.*t4298*t4321;
  t4336 = t4332 + t4333;
  t4283 = -1.*t4269;
  t4285 = 1. + t4283;
  t4286 = -0.183*t4285;
  t4289 = 0. + t4286;
  t4299 = -0.047*t4298;
  t4301 = 0. + t4299;
  t4315 = -1.*t4314;
  t4316 = 1. + t4315;
  t4317 = 0.047*t4316;
  t4318 = 0. + t4317;
  t4344 = t4303*t4306*t4304;
  t4345 = -1.*t4292*t4307;
  t4346 = t4344 + t4345;
  t4348 = t4292*t4303;
  t4349 = t4306*t4304*t4307;
  t4352 = t4348 + t4349;
  t4330 = -0.183*t4329;
  t4331 = 0. + t4330;
  t4358 = t4314*t4346;
  t4359 = -1.*t4298*t4352;
  t4360 = t4358 + t4359;
  t4374 = t4314*t4293*t4303;
  t4375 = -1.*t4293*t4298*t4307;
  t4376 = t4374 + t4375;
  p_output1[0]=0. + t4289*t4292*t4293 + t4301*t4310 + t4318*t4321 + 0.08953*(t4298*t4310 + t4314*t4321) + t4331*t4336 - 0.183*(t4269*t4292*t4293 - 1.*t4329*t4336) + var1[0];
  p_output1[1]=0. + t4289*t4293*t4306 + t4301*t4346 + t4318*t4352 + 0.08953*(t4298*t4346 + t4314*t4352) + t4331*t4360 - 0.183*(t4269*t4293*t4306 - 1.*t4329*t4360) + var1[1];
  p_output1[2]=0. + t4293*t4301*t4303 - 1.*t4289*t4304 + 0.08953*(t4293*t4298*t4303 + t4293*t4307*t4314) + t4293*t4307*t4318 + t4331*t4376 - 0.183*(-1.*t4269*t4304 - 1.*t4329*t4376) + var1[2];
}



void p_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
