/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint.h"

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
  double t1584;
  double t4600;
  double t5637;
  double t4955;
  double t6348;
  double t3260;
  double t5175;
  double t6353;
  double t6449;
  double t6528;
  double t6538;
  double t6539;
  double t6540;
  double t2622;
  double t3295;
  double t4489;
  double t6532;
  double t6534;
  double t6535;
  double t6537;
  double t6601;
  double t6603;
  double t6604;
  double t6608;
  double t6614;
  double t6617;
  t1584 = Cos(var1[3]);
  t4600 = Cos(var1[5]);
  t5637 = Sin(var1[3]);
  t4955 = Sin(var1[4]);
  t6348 = Sin(var1[5]);
  t3260 = Sin(var1[12]);
  t5175 = t1584*t4600*t4955;
  t6353 = t5637*t6348;
  t6449 = t5175 + t6353;
  t6528 = Cos(var1[12]);
  t6538 = -1.*t4600*t5637;
  t6539 = t1584*t4955*t6348;
  t6540 = t6538 + t6539;
  t2622 = Cos(var1[4]);
  t3295 = 0.047*t3260;
  t4489 = 0. + t3295;
  t6532 = -1.*t6528;
  t6534 = 1. + t6532;
  t6535 = -0.047*t6534;
  t6537 = 0. + t6535;
  t6601 = t4600*t5637*t4955;
  t6603 = -1.*t1584*t6348;
  t6604 = t6601 + t6603;
  t6608 = t1584*t4600;
  t6614 = t5637*t4955*t6348;
  t6617 = t6608 + t6614;

  p_output1(0)=0. - 0.183*t1584*t2622 + t4489*t6449 + t6537*t6540 - 0.047*(t3260*t6449 + t6528*t6540) + var1(0);
  p_output1(1)=0. - 0.183*t2622*t5637 + t4489*t6604 + t6537*t6617 - 0.047*(t3260*t6604 + t6528*t6617) + var1(1);
  p_output1(2)=0. + t2622*t4489*t4600 + 0.183*t4955 - 0.047*(t2622*t3260*t4600 + t2622*t6348*t6528) + t2622*t6348*t6537 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



