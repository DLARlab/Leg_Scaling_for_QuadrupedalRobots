/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint.h"

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
  double t324;
  double t4938;
  double t6170;
  double t5409;
  double t6185;
  double t1193;
  double t3974;
  double t4888;
  double t6665;
  double t6925;
  double t6563;
  double t6591;
  double t6638;
  double t6168;
  double t6235;
  double t6255;
  double t7219;
  double t7236;
  double t7256;
  double t7182;
  double t7211;
  double t7217;
  double t6321;
  double t6780;
  double t6863;
  double t7218;
  double t7276;
  double t7303;
  double t7404;
  double t7495;
  double t7522;
  t324 = Cos(var1[3]);
  t4938 = Cos(var1[5]);
  t6170 = Sin(var1[3]);
  t5409 = Sin(var1[4]);
  t6185 = Sin(var1[5]);
  t1193 = Cos(var1[4]);
  t3974 = Cos(var1[7]);
  t4888 = Cos(var1[6]);
  t6665 = Sin(var1[6]);
  t6925 = Sin(var1[7]);
  t6563 = -1.*t4938*t6170;
  t6591 = t324*t5409*t6185;
  t6638 = t6563 + t6591;
  t6168 = t324*t4938*t5409;
  t6235 = t6170*t6185;
  t6255 = t6168 + t6235;
  t7219 = t324*t4938;
  t7236 = t6170*t5409*t6185;
  t7256 = t7219 + t7236;
  t7182 = t4938*t6170*t5409;
  t7211 = -1.*t324*t6185;
  t7217 = t7182 + t7211;
  t6321 = t4888*t6255;
  t6780 = -1.*t6638*t6665;
  t6863 = t6321 + t6780;
  t7218 = t4888*t7217;
  t7276 = -1.*t7256*t6665;
  t7303 = t7218 + t7276;
  t7404 = t1193*t4938*t4888;
  t7495 = -1.*t1193*t6185*t6665;
  t7522 = t7404 + t7495;

  p_output1(0)=t1193*t324*t3974 - 1.*t6863*t6925;
  p_output1(1)=t1193*t3974*t6170 - 1.*t6925*t7303;
  p_output1(2)=-1.*t3974*t5409 - 1.*t6925*t7522;
  p_output1(3)=t4888*t6638 + t6255*t6665;
  p_output1(4)=t6665*t7217 + t4888*t7256;
  p_output1(5)=t1193*t4888*t6185 + t1193*t4938*t6665;
  p_output1(6)=t3974*t6863 + t1193*t324*t6925;
  p_output1(7)=t1193*t6170*t6925 + t3974*t7303;
  p_output1(8)=-1.*t5409*t6925 + t3974*t7522;
}


       
Eigen::Matrix<double,3,3> R_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



