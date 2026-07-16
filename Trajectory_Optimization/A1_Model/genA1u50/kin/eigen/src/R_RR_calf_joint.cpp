/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint.h"

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
  double t1436;
  double t2523;
  double t2605;
  double t2559;
  double t2611;
  double t2402;
  double t2276;
  double t2286;
  double t2471;
  double t2562;
  double t2619;
  double t2620;
  double t2951;
  double t2990;
  double t3182;
  double t3256;
  double t3310;
  double t3315;
  double t3316;
  double t1386;
  double t3335;
  double t3342;
  double t3343;
  double t3344;
  double t3345;
  double t3349;
  double t3350;
  double t3351;
  double t3352;
  double t3353;
  double t3483;
  double t3617;
  double t3884;
  double t2329;
  double t3328;
  double t3329;
  double t3336;
  double t3337;
  double t3338;
  double t3341;
  double t3354;
  double t3355;
  double t3357;
  double t3358;
  double t3361;
  double t3468;
  double t3919;
  double t3947;
  double t3961;
  double t3977;
  double t3980;
  t1436 = Cos(var1[3]);
  t2523 = Cos(var1[5]);
  t2605 = Sin(var1[3]);
  t2559 = Sin(var1[4]);
  t2611 = Sin(var1[5]);
  t2402 = Cos(var1[13]);
  t2276 = Cos(var1[4]);
  t2286 = Sin(var1[13]);
  t2471 = Cos(var1[12]);
  t2562 = t1436*t2523*t2559;
  t2619 = t2605*t2611;
  t2620 = t2562 + t2619;
  t2951 = t2471*t2620;
  t2990 = Sin(var1[12]);
  t3182 = -1.*t2523*t2605;
  t3256 = t1436*t2559*t2611;
  t3310 = t3182 + t3256;
  t3315 = -1.*t2990*t3310;
  t3316 = t2951 + t3315;
  t1386 = Sin(var1[14]);
  t3335 = Cos(var1[14]);
  t3342 = t2523*t2605*t2559;
  t3343 = -1.*t1436*t2611;
  t3344 = t3342 + t3343;
  t3345 = t2471*t3344;
  t3349 = t1436*t2523;
  t3350 = t2605*t2559*t2611;
  t3351 = t3349 + t3350;
  t3352 = -1.*t2990*t3351;
  t3353 = t3345 + t3352;
  t3483 = t2471*t2276*t2523;
  t3617 = -1.*t2276*t2990*t2611;
  t3884 = t3483 + t3617;
  t2329 = t1436*t2276*t2286;
  t3328 = t2402*t3316;
  t3329 = t2329 + t3328;
  t3336 = t2402*t1436*t2276;
  t3337 = -1.*t2286*t3316;
  t3338 = t3336 + t3337;
  t3341 = t2276*t2286*t2605;
  t3354 = t2402*t3353;
  t3355 = t3341 + t3354;
  t3357 = t2402*t2276*t2605;
  t3358 = -1.*t2286*t3353;
  t3361 = t3357 + t3358;
  t3468 = -1.*t2286*t2559;
  t3919 = t2402*t3884;
  t3947 = t3468 + t3919;
  t3961 = -1.*t2402*t2559;
  t3977 = -1.*t2286*t3884;
  t3980 = t3961 + t3977;

  p_output1(0)=-1.*t1386*t3329 + t3335*t3338;
  p_output1(1)=-1.*t1386*t3355 + t3335*t3361;
  p_output1(2)=-1.*t1386*t3947 + t3335*t3980;
  p_output1(3)=t2620*t2990 + t2471*t3310;
  p_output1(4)=t2990*t3344 + t2471*t3351;
  p_output1(5)=t2276*t2471*t2611 + t2276*t2523*t2990;
  p_output1(6)=t3329*t3335 + t1386*t3338;
  p_output1(7)=t3335*t3355 + t1386*t3361;
  p_output1(8)=t3335*t3947 + t1386*t3980;
}


       
Eigen::Matrix<double,3,3> R_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



