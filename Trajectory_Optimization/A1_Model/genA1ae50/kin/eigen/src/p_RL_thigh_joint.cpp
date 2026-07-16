/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint.h"

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
  double t4034;
  double t4667;
  double t4805;
  double t4680;
  double t4853;
  double t4556;
  double t4799;
  double t4890;
  double t4980;
  double t5025;
  double t5102;
  double t5156;
  double t5160;
  double t90;
  double t4354;
  double t5228;
  double t5287;
  double t5297;
  double t5383;
  double t336;
  double t1469;
  double t3314;
  double t3672;
  double t4615;
  double t4660;
  double t5031;
  double t5040;
  double t5074;
  double t5092;
  double t5581;
  double t5603;
  double t5673;
  double t5898;
  double t5938;
  double t5984;
  double t5252;
  double t5254;
  double t6183;
  double t6226;
  double t6255;
  double t6606;
  double t6618;
  double t6631;
  t4034 = Cos(var1[3]);
  t4667 = Cos(var1[5]);
  t4805 = Sin(var1[3]);
  t4680 = Sin(var1[4]);
  t4853 = Sin(var1[5]);
  t4556 = Sin(var1[15]);
  t4799 = t4034*t4667*t4680;
  t4890 = t4805*t4853;
  t4980 = t4799 + t4890;
  t5025 = Cos(var1[15]);
  t5102 = -1.*t4667*t4805;
  t5156 = t4034*t4680*t4853;
  t5160 = t5102 + t5156;
  t90 = Cos(var1[16]);
  t4354 = Cos(var1[4]);
  t5228 = Sin(var1[16]);
  t5287 = t5025*t4980;
  t5297 = -1.*t4556*t5160;
  t5383 = t5287 + t5297;
  t336 = -1.*t90;
  t1469 = 1. + t336;
  t3314 = -0.183*t1469;
  t3672 = 0. + t3314;
  t4615 = -0.047*t4556;
  t4660 = 0. + t4615;
  t5031 = -1.*t5025;
  t5040 = 1. + t5031;
  t5074 = 0.047*t5040;
  t5092 = 0. + t5074;
  t5581 = t4667*t4805*t4680;
  t5603 = -1.*t4034*t4853;
  t5673 = t5581 + t5603;
  t5898 = t4034*t4667;
  t5938 = t4805*t4680*t4853;
  t5984 = t5898 + t5938;
  t5252 = -0.183*t5228;
  t5254 = 0. + t5252;
  t6183 = t5025*t5673;
  t6226 = -1.*t4556*t5984;
  t6255 = t6183 + t6226;
  t6606 = t5025*t4354*t4667;
  t6618 = -1.*t4354*t4556*t4853;
  t6631 = t6606 + t6618;

  p_output1(0)=0. + t3672*t4034*t4354 + t4660*t4980 + t5092*t5160 + 0.13205*(t4556*t4980 + t5025*t5160) + t5254*t5383 - 0.183*(-1.*t5228*t5383 + t4034*t4354*t90) + var1(0);
  p_output1(1)=0. + t3672*t4354*t4805 + t4660*t5673 + t5092*t5984 + 0.13205*(t4556*t5673 + t5025*t5984) + t5254*t6255 - 0.183*(-1.*t5228*t6255 + t4354*t4805*t90) + var1(1);
  p_output1(2)=0. + t4354*t4660*t4667 - 1.*t3672*t4680 + 0.13205*(t4354*t4556*t4667 + t4354*t4853*t5025) + t4354*t4853*t5092 + t5254*t6631 - 0.183*(-1.*t5228*t6631 - 1.*t4680*t90) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



