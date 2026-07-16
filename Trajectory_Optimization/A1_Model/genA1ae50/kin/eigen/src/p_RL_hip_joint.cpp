/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:09 GMT-05:00
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
  double t428;
  double t2124;
  double t2375;
  double t2323;
  double t2427;
  double t1349;
  double t2324;
  double t2432;
  double t2451;
  double t2478;
  double t2579;
  double t2694;
  double t2712;
  double t626;
  double t1404;
  double t2005;
  double t2479;
  double t2496;
  double t2549;
  double t2552;
  double t2987;
  double t3015;
  double t3052;
  double t3070;
  double t3071;
  double t3077;
  t428 = Cos(var1[3]);
  t2124 = Cos(var1[5]);
  t2375 = Sin(var1[3]);
  t2323 = Sin(var1[4]);
  t2427 = Sin(var1[5]);
  t1349 = Sin(var1[15]);
  t2324 = t428*t2124*t2323;
  t2432 = t2375*t2427;
  t2451 = t2324 + t2432;
  t2478 = Cos(var1[15]);
  t2579 = -1.*t2124*t2375;
  t2694 = t428*t2323*t2427;
  t2712 = t2579 + t2694;
  t626 = Cos(var1[4]);
  t1404 = -0.047*t1349;
  t2005 = 0. + t1404;
  t2479 = -1.*t2478;
  t2496 = 1. + t2479;
  t2549 = 0.047*t2496;
  t2552 = 0. + t2549;
  t2987 = t2124*t2375*t2323;
  t3015 = -1.*t428*t2427;
  t3052 = t2987 + t3015;
  t3070 = t428*t2124;
  t3071 = t2375*t2323*t2427;
  t3077 = t3070 + t3071;

  p_output1(0)=0. + t2005*t2451 + t2552*t2712 + 0.047*(t1349*t2451 + t2478*t2712) - 0.183*t428*t626 + var1(0);
  p_output1(1)=0. + t2005*t3052 + t2552*t3077 + 0.047*(t1349*t3052 + t2478*t3077) - 0.183*t2375*t626 + var1(1);
  p_output1(2)=0. + 0.183*t2323 + t2005*t2124*t626 + t2427*t2552*t626 + 0.047*(t1349*t2124*t626 + t2427*t2478*t626) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



