/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint.h"

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
  double t1002;
  double t2922;
  double t4121;
  double t3259;
  double t4203;
  double t2298;
  double t3356;
  double t4299;
  double t4551;
  double t4661;
  double t4800;
  double t4802;
  double t4804;
  double t1201;
  double t2342;
  double t2353;
  double t4705;
  double t4736;
  double t4773;
  double t4791;
  double t5096;
  double t5126;
  double t5152;
  double t5176;
  double t5192;
  double t5262;
  t1002 = Cos(var1[3]);
  t2922 = Cos(var1[5]);
  t4121 = Sin(var1[3]);
  t3259 = Sin(var1[4]);
  t4203 = Sin(var1[5]);
  t2298 = Sin(var1[9]);
  t3356 = t1002*t2922*t3259;
  t4299 = t4121*t4203;
  t4551 = t3356 + t4299;
  t4661 = Cos(var1[9]);
  t4800 = -1.*t2922*t4121;
  t4802 = t1002*t3259*t4203;
  t4804 = t4800 + t4802;
  t1201 = Cos(var1[4]);
  t2342 = -0.047*t2298;
  t2353 = 0. + t2342;
  t4705 = -1.*t4661;
  t4736 = 1. + t4705;
  t4773 = 0.047*t4736;
  t4791 = 0. + t4773;
  t5096 = t2922*t4121*t3259;
  t5126 = -1.*t1002*t4203;
  t5152 = t5096 + t5126;
  t5176 = t1002*t2922;
  t5192 = t4121*t3259*t4203;
  t5262 = t5176 + t5192;

  p_output1(0)=0. + 0.183*t1002*t1201 + t2353*t4551 + t4791*t4804 + 0.047*(t2298*t4551 + t4661*t4804) + var1(0);
  p_output1(1)=0. + 0.183*t1201*t4121 + t2353*t5152 + t4791*t5262 + 0.047*(t2298*t5152 + t4661*t5262) + var1(1);
  p_output1(2)=0. + t1201*t2353*t2922 - 0.183*t3259 + 0.047*(t1201*t2298*t2922 + t1201*t4203*t4661) + t1201*t4203*t4791 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



