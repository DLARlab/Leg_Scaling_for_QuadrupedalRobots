/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:59 GMT-05:00
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
  double t1528;
  double t3239;
  double t3874;
  double t3243;
  double t3940;
  double t342;
  double t1798;
  double t3155;
  double t3199;
  double t4452;
  double t3287;
  double t3974;
  double t4380;
  double t4577;
  double t4646;
  double t4742;
  double t4989;
  double t5013;
  double t5021;
  double t5037;
  double t5055;
  double t5062;
  double t4450;
  double t4746;
  double t4748;
  double t5024;
  double t5081;
  double t5152;
  double t5349;
  double t5351;
  double t5358;
  t1528 = Cos(var1[3]);
  t3239 = Cos(var1[5]);
  t3874 = Sin(var1[3]);
  t3243 = Sin(var1[4]);
  t3940 = Sin(var1[5]);
  t342 = Cos(var1[10]);
  t1798 = Cos(var1[4]);
  t3155 = Sin(var1[10]);
  t3199 = Cos(var1[9]);
  t4452 = Sin(var1[9]);
  t3287 = t1528*t3239*t3243;
  t3974 = t3874*t3940;
  t4380 = t3287 + t3974;
  t4577 = -1.*t3239*t3874;
  t4646 = t1528*t3243*t3940;
  t4742 = t4577 + t4646;
  t4989 = t3239*t3874*t3243;
  t5013 = -1.*t1528*t3940;
  t5021 = t4989 + t5013;
  t5037 = t1528*t3239;
  t5055 = t3874*t3243*t3940;
  t5062 = t5037 + t5055;
  t4450 = t3199*t4380;
  t4746 = -1.*t4452*t4742;
  t4748 = t4450 + t4746;
  t5024 = t3199*t5021;
  t5081 = -1.*t4452*t5062;
  t5152 = t5024 + t5081;
  t5349 = t3199*t1798*t3239;
  t5351 = -1.*t1798*t4452*t3940;
  t5358 = t5349 + t5351;

  p_output1(0)=t1528*t1798*t342 - 1.*t3155*t4748;
  p_output1(1)=t1798*t342*t3874 - 1.*t3155*t5152;
  p_output1(2)=-1.*t3243*t342 - 1.*t3155*t5358;
  p_output1(3)=t4380*t4452 + t3199*t4742;
  p_output1(4)=t4452*t5021 + t3199*t5062;
  p_output1(5)=t1798*t3199*t3940 + t1798*t3239*t4452;
  p_output1(6)=t1528*t1798*t3155 + t342*t4748;
  p_output1(7)=t1798*t3155*t3874 + t342*t5152;
  p_output1(8)=-1.*t3155*t3243 + t342*t5358;
}


       
Eigen::Matrix<double,3,3> R_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



