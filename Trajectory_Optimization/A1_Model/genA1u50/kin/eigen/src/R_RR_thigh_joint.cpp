/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint.h"

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
  double t989;
  double t2144;
  double t2336;
  double t2161;
  double t2342;
  double t984;
  double t1041;
  double t1939;
  double t2001;
  double t2520;
  double t2246;
  double t2362;
  double t2366;
  double t3441;
  double t3463;
  double t3642;
  double t4195;
  double t4288;
  double t4368;
  double t4408;
  double t4494;
  double t4496;
  double t2513;
  double t3659;
  double t3701;
  double t4382;
  double t4565;
  double t4884;
  double t5611;
  double t5837;
  double t5961;
  t989 = Cos(var1[3]);
  t2144 = Cos(var1[5]);
  t2336 = Sin(var1[3]);
  t2161 = Sin(var1[4]);
  t2342 = Sin(var1[5]);
  t984 = Cos(var1[13]);
  t1041 = Cos(var1[4]);
  t1939 = Sin(var1[13]);
  t2001 = Cos(var1[12]);
  t2520 = Sin(var1[12]);
  t2246 = t989*t2144*t2161;
  t2362 = t2336*t2342;
  t2366 = t2246 + t2362;
  t3441 = -1.*t2144*t2336;
  t3463 = t989*t2161*t2342;
  t3642 = t3441 + t3463;
  t4195 = t2144*t2336*t2161;
  t4288 = -1.*t989*t2342;
  t4368 = t4195 + t4288;
  t4408 = t989*t2144;
  t4494 = t2336*t2161*t2342;
  t4496 = t4408 + t4494;
  t2513 = t2001*t2366;
  t3659 = -1.*t2520*t3642;
  t3701 = t2513 + t3659;
  t4382 = t2001*t4368;
  t4565 = -1.*t2520*t4496;
  t4884 = t4382 + t4565;
  t5611 = t2001*t1041*t2144;
  t5837 = -1.*t1041*t2520*t2342;
  t5961 = t5611 + t5837;

  p_output1(0)=-1.*t1939*t3701 + t1041*t984*t989;
  p_output1(1)=-1.*t1939*t4884 + t1041*t2336*t984;
  p_output1(2)=-1.*t1939*t5961 - 1.*t2161*t984;
  p_output1(3)=t2366*t2520 + t2001*t3642;
  p_output1(4)=t2520*t4368 + t2001*t4496;
  p_output1(5)=t1041*t2001*t2342 + t1041*t2144*t2520;
  p_output1(6)=t3701*t984 + t1041*t1939*t989;
  p_output1(7)=t1041*t1939*t2336 + t4884*t984;
  p_output1(8)=-1.*t1939*t2161 + t5961*t984;
}


       
Eigen::Matrix<double,3,3> R_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



