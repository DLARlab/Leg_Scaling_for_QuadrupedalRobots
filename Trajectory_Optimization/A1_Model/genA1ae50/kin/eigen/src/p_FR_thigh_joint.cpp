/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint.h"

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
  double t1034;
  double t4361;
  double t4368;
  double t4363;
  double t4370;
  double t4298;
  double t4366;
  double t4371;
  double t4373;
  double t4378;
  double t4379;
  double t4381;
  double t4383;
  double t1244;
  double t1403;
  double t4402;
  double t4404;
  double t4406;
  double t4408;
  double t1759;
  double t1785;
  double t2611;
  double t2647;
  double t4311;
  double t4344;
  double t4346;
  double t4359;
  double t4388;
  double t4391;
  double t4456;
  double t4468;
  double t4477;
  double t4481;
  double t4485;
  double t4486;
  double t4415;
  double t4416;
  double t4498;
  double t4499;
  double t4507;
  double t4554;
  double t4557;
  double t4558;
  t1034 = Cos(var1[3]);
  t4361 = Cos(var1[5]);
  t4368 = Sin(var1[4]);
  t4363 = Sin(var1[3]);
  t4370 = Sin(var1[5]);
  t4298 = Cos(var1[6]);
  t4366 = -1.*t4361*t4363;
  t4371 = t1034*t4368*t4370;
  t4373 = t4366 + t4371;
  t4378 = t1034*t4361*t4368;
  t4379 = t4363*t4370;
  t4381 = t4378 + t4379;
  t4383 = Sin(var1[6]);
  t1244 = Cos(var1[4]);
  t1403 = Cos(var1[7]);
  t4402 = t4298*t4381;
  t4404 = -1.*t4373*t4383;
  t4406 = t4402 + t4404;
  t4408 = Sin(var1[7]);
  t1759 = -1.*t1403;
  t1785 = 1. + t1759;
  t2611 = 0.183*t1785;
  t2647 = 0. + t2611;
  t4311 = -1.*t4298;
  t4344 = 1. + t4311;
  t4346 = -0.047*t4344;
  t4359 = 0. + t4346;
  t4388 = 0.047*t4383;
  t4391 = 0. + t4388;
  t4456 = t1034*t4361;
  t4468 = t4363*t4368*t4370;
  t4477 = t4456 + t4468;
  t4481 = t4361*t4363*t4368;
  t4485 = -1.*t1034*t4370;
  t4486 = t4481 + t4485;
  t4415 = 0.183*t4408;
  t4416 = 0. + t4415;
  t4498 = t4298*t4486;
  t4499 = -1.*t4477*t4383;
  t4507 = t4498 + t4499;
  t4554 = t1244*t4361*t4298;
  t4557 = -1.*t1244*t4370*t4383;
  t4558 = t4554 + t4557;

  p_output1(0)=0. + t1034*t1244*t2647 + t4359*t4373 - 0.13205*(t4298*t4373 + t4381*t4383) + t4381*t4391 + 0.183*(t1034*t1244*t1403 - 1.*t4406*t4408) + t4406*t4416 + var1(0);
  p_output1(1)=0. + t1244*t2647*t4363 + t4359*t4477 + t4391*t4486 - 0.13205*(t4298*t4477 + t4383*t4486) + t4416*t4507 + 0.183*(t1244*t1403*t4363 - 1.*t4408*t4507) + var1(1);
  p_output1(2)=0. - 1.*t2647*t4368 + t1244*t4359*t4370 - 0.13205*(t1244*t4298*t4370 + t1244*t4361*t4383) + t1244*t4361*t4391 + t4416*t4558 + 0.183*(-1.*t1403*t4368 - 1.*t4408*t4558) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



