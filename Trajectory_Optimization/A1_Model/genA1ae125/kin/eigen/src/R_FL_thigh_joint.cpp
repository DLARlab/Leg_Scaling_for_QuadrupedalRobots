/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1670;
  double t2227;
  double t2306;
  double t2228;
  double t2319;
  double t1547;
  double t2162;
  double t2172;
  double t2206;
  double t2362;
  double t2303;
  double t2320;
  double t2360;
  double t2372;
  double t2373;
  double t2374;
  double t2388;
  double t2389;
  double t2400;
  double t2420;
  double t2422;
  double t2430;
  double t2361;
  double t2377;
  double t2380;
  double t2405;
  double t2431;
  double t2432;
  double t2466;
  double t2481;
  double t2488;
  t1670 = Cos(var1[3]);
  t2227 = Cos(var1[5]);
  t2306 = Sin(var1[3]);
  t2228 = Sin(var1[4]);
  t2319 = Sin(var1[5]);
  t1547 = Cos(var1[10]);
  t2162 = Cos(var1[4]);
  t2172 = Sin(var1[10]);
  t2206 = Cos(var1[9]);
  t2362 = Sin(var1[9]);
  t2303 = t1670*t2227*t2228;
  t2320 = t2306*t2319;
  t2360 = t2303 + t2320;
  t2372 = -1.*t2227*t2306;
  t2373 = t1670*t2228*t2319;
  t2374 = t2372 + t2373;
  t2388 = t2227*t2306*t2228;
  t2389 = -1.*t1670*t2319;
  t2400 = t2388 + t2389;
  t2420 = t1670*t2227;
  t2422 = t2306*t2228*t2319;
  t2430 = t2420 + t2422;
  t2361 = t2206*t2360;
  t2377 = -1.*t2362*t2374;
  t2380 = t2361 + t2377;
  t2405 = t2206*t2400;
  t2431 = -1.*t2362*t2430;
  t2432 = t2405 + t2431;
  t2466 = t2206*t2162*t2227;
  t2481 = -1.*t2162*t2362*t2319;
  t2488 = t2466 + t2481;

  p_output1(0)=t1547*t1670*t2162 - 1.*t2172*t2380;
  p_output1(1)=t1547*t2162*t2306 - 1.*t2172*t2432;
  p_output1(2)=-1.*t1547*t2228 - 1.*t2172*t2488;
  p_output1(3)=t2360*t2362 + t2206*t2374;
  p_output1(4)=t2362*t2400 + t2206*t2430;
  p_output1(5)=t2162*t2206*t2319 + t2162*t2227*t2362;
  p_output1(6)=t1670*t2162*t2172 + t1547*t2380;
  p_output1(7)=t2162*t2172*t2306 + t1547*t2432;
  p_output1(8)=-1.*t2172*t2228 + t1547*t2488;
}


       
Eigen::Matrix<double,3,3> R_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



