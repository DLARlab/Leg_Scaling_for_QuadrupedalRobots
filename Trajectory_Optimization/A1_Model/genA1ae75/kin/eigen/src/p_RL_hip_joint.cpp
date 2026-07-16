/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_hip_joint.h"

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
  double t1015;
  double t4801;
  double t7282;
  double t4835;
  double t7409;
  double t2308;
  double t6696;
  double t7694;
  double t7745;
  double t7818;
  double t8034;
  double t8038;
  double t8051;
  double t1235;
  double t4023;
  double t4171;
  double t7894;
  double t7925;
  double t7971;
  double t8009;
  double t8397;
  double t8454;
  double t8459;
  double t8478;
  double t8588;
  double t8624;
  t1015 = Cos(var1[3]);
  t4801 = Cos(var1[5]);
  t7282 = Sin(var1[3]);
  t4835 = Sin(var1[4]);
  t7409 = Sin(var1[5]);
  t2308 = Sin(var1[15]);
  t6696 = t1015*t4801*t4835;
  t7694 = t7282*t7409;
  t7745 = t6696 + t7694;
  t7818 = Cos(var1[15]);
  t8034 = -1.*t4801*t7282;
  t8038 = t1015*t4835*t7409;
  t8051 = t8034 + t8038;
  t1235 = Cos(var1[4]);
  t4023 = -0.047*t2308;
  t4171 = 0. + t4023;
  t7894 = -1.*t7818;
  t7925 = 1. + t7894;
  t7971 = 0.047*t7925;
  t8009 = 0. + t7971;
  t8397 = t4801*t7282*t4835;
  t8454 = -1.*t1015*t7409;
  t8459 = t8397 + t8454;
  t8478 = t1015*t4801;
  t8588 = t7282*t4835*t7409;
  t8624 = t8478 + t8588;

  p_output1(0)=0. - 0.183*t1015*t1235 + t4171*t7745 + t8009*t8051 + 0.047*(t2308*t7745 + t7818*t8051) + var1(0);
  p_output1(1)=0. - 0.183*t1235*t7282 + t4171*t8459 + t8009*t8624 + 0.047*(t2308*t8459 + t7818*t8624) + var1(1);
  p_output1(2)=0. + t1235*t4171*t4801 + 0.183*t4835 + 0.047*(t1235*t2308*t4801 + t1235*t7409*t7818) + t1235*t7409*t8009 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



