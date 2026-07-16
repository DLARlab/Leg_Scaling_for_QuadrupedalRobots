/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t943;
  double t608;
  double t4714;
  double t1182;
  double t8333;
  double t8341;
  double t8282;
  double t8358;
  double t8337;
  double t8342;
  double t8356;
  double t8361;
  double t8363;
  double t8364;
  double t8368;
  double t8369;
  double t8371;
  double t8379;
  double t8380;
  double t8383;
  double t8357;
  double t8365;
  double t8366;
  double t8410;
  double t8411;
  double t8413;
  double t8429;
  double t8431;
  double t8434;
  double t8373;
  double t8384;
  double t8385;
  double t8386;
  double t8387;
  double t8388;
  t943 = Cos(var1[4]);
  t608 = Cos(var1[3]);
  t4714 = Sin(var1[4]);
  t1182 = Sin(var1[3]);
  t8333 = Cos(var1[5]);
  t8341 = Sin(var1[5]);
  t8282 = Sin(var1[9]);
  t8358 = Cos(var1[9]);
  t8337 = t608*t8333*t4714;
  t8342 = t1182*t8341;
  t8356 = t8337 + t8342;
  t8361 = -1.*t8333*t1182;
  t8363 = t608*t4714*t8341;
  t8364 = t8361 + t8363;
  t8368 = t8333*t1182*t4714;
  t8369 = -1.*t608*t8341;
  t8371 = t8368 + t8369;
  t8379 = t608*t8333;
  t8380 = t1182*t4714*t8341;
  t8383 = t8379 + t8380;
  t8357 = t8282*t8356;
  t8365 = t8358*t8364;
  t8366 = t8357 + t8365;
  t8410 = -0.047*t8282;
  t8411 = 0. + t8410;
  t8413 = -1.*t8358;
  t8429 = 1. + t8413;
  t8431 = 0.047*t8429;
  t8434 = 0. + t8431;
  t8373 = t8282*t8371;
  t8384 = t8358*t8383;
  t8385 = t8373 + t8384;
  t8386 = t943*t8333*t8282;
  t8387 = t8358*t943*t8341;
  t8388 = t8386 + t8387;

  p_output1(0)=t608*t943;
  p_output1(1)=t1182*t943;
  p_output1(2)=-1.*t4714;
  p_output1(3)=0.;
  p_output1(4)=t8366;
  p_output1(5)=t8385;
  p_output1(6)=t8388;
  p_output1(7)=0.;
  p_output1(8)=t8356*t8358 - 1.*t8282*t8364;
  p_output1(9)=t8358*t8371 - 1.*t8282*t8383;
  p_output1(10)=-1.*t8282*t8341*t943 + t8333*t8358*t943;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t8366 + t8356*t8411 + t8364*t8434 + 0.183*t608*t943 + var1(0);
  p_output1(13)=0. + 0.047*t8385 + t8371*t8411 + t8383*t8434 + 0.183*t1182*t943 + var1(1);
  p_output1(14)=0. - 0.183*t4714 + 0.047*t8388 + t8333*t8411*t943 + t8341*t8434*t943 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



