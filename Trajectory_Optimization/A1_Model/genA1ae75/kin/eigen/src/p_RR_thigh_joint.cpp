/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:45 GMT-05:00
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
  double t2902;
  double t4982;
  double t5267;
  double t5037;
  double t5317;
  double t3574;
  double t5059;
  double t5463;
  double t6059;
  double t6284;
  double t9121;
  double t9124;
  double t9125;
  double t389;
  double t3290;
  double t9158;
  double t9163;
  double t9174;
  double t9175;
  double t801;
  double t2074;
  double t2241;
  double t2468;
  double t4358;
  double t4642;
  double t6476;
  double t9031;
  double t9046;
  double t9077;
  double t9227;
  double t9232;
  double t9233;
  double t9238;
  double t9260;
  double t9276;
  double t9160;
  double t9161;
  double t9303;
  double t9304;
  double t9309;
  double t9365;
  double t9366;
  double t9367;
  t2902 = Cos(var1[3]);
  t4982 = Cos(var1[5]);
  t5267 = Sin(var1[3]);
  t5037 = Sin(var1[4]);
  t5317 = Sin(var1[5]);
  t3574 = Sin(var1[12]);
  t5059 = t2902*t4982*t5037;
  t5463 = t5267*t5317;
  t6059 = t5059 + t5463;
  t6284 = Cos(var1[12]);
  t9121 = -1.*t4982*t5267;
  t9124 = t2902*t5037*t5317;
  t9125 = t9121 + t9124;
  t389 = Cos(var1[13]);
  t3290 = Cos(var1[4]);
  t9158 = Sin(var1[13]);
  t9163 = t6284*t6059;
  t9174 = -1.*t3574*t9125;
  t9175 = t9163 + t9174;
  t801 = -1.*t389;
  t2074 = 1. + t801;
  t2241 = -0.183*t2074;
  t2468 = 0. + t2241;
  t4358 = 0.047*t3574;
  t4642 = 0. + t4358;
  t6476 = -1.*t6284;
  t9031 = 1. + t6476;
  t9046 = -0.047*t9031;
  t9077 = 0. + t9046;
  t9227 = t4982*t5267*t5037;
  t9232 = -1.*t2902*t5317;
  t9233 = t9227 + t9232;
  t9238 = t2902*t4982;
  t9260 = t5267*t5037*t5317;
  t9276 = t9238 + t9260;
  t9160 = -0.183*t9158;
  t9161 = 0. + t9160;
  t9303 = t6284*t9233;
  t9304 = -1.*t3574*t9276;
  t9309 = t9303 + t9304;
  t9365 = t6284*t3290*t4982;
  t9366 = -1.*t3290*t3574*t5317;
  t9367 = t9365 + t9366;

  p_output1(0)=0. + t2468*t2902*t3290 + t4642*t6059 + t9077*t9125 - 0.13205*(t3574*t6059 + t6284*t9125) + t9161*t9175 - 0.183*(t2902*t3290*t389 - 1.*t9158*t9175) + var1(0);
  p_output1(1)=0. + t2468*t3290*t5267 + t4642*t9233 + t9077*t9276 - 0.13205*(t3574*t9233 + t6284*t9276) + t9161*t9309 - 0.183*(t3290*t389*t5267 - 1.*t9158*t9309) + var1(1);
  p_output1(2)=0. + t3290*t4642*t4982 - 1.*t2468*t5037 - 0.13205*(t3290*t3574*t4982 + t3290*t5317*t6284) + t3290*t5317*t9077 + t9161*t9367 - 0.183*(-1.*t389*t5037 - 1.*t9158*t9367) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



