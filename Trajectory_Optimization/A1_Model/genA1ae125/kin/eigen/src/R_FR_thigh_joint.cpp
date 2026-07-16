/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:12 GMT-05:00
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
  double t1031;
  double t3274;
  double t4429;
  double t3453;
  double t4432;
  double t1867;
  double t2055;
  double t3264;
  double t4731;
  double t4814;
  double t4631;
  double t4665;
  double t4691;
  double t4397;
  double t4588;
  double t4589;
  double t4987;
  double t5017;
  double t5028;
  double t4837;
  double t4874;
  double t4881;
  double t4592;
  double t4772;
  double t4798;
  double t4906;
  double t5113;
  double t5192;
  double t5319;
  double t5346;
  double t5393;
  t1031 = Cos(var1[3]);
  t3274 = Cos(var1[5]);
  t4429 = Sin(var1[3]);
  t3453 = Sin(var1[4]);
  t4432 = Sin(var1[5]);
  t1867 = Cos(var1[4]);
  t2055 = Cos(var1[7]);
  t3264 = Cos(var1[6]);
  t4731 = Sin(var1[6]);
  t4814 = Sin(var1[7]);
  t4631 = -1.*t3274*t4429;
  t4665 = t1031*t3453*t4432;
  t4691 = t4631 + t4665;
  t4397 = t1031*t3274*t3453;
  t4588 = t4429*t4432;
  t4589 = t4397 + t4588;
  t4987 = t1031*t3274;
  t5017 = t4429*t3453*t4432;
  t5028 = t4987 + t5017;
  t4837 = t3274*t4429*t3453;
  t4874 = -1.*t1031*t4432;
  t4881 = t4837 + t4874;
  t4592 = t3264*t4589;
  t4772 = -1.*t4691*t4731;
  t4798 = t4592 + t4772;
  t4906 = t3264*t4881;
  t5113 = -1.*t5028*t4731;
  t5192 = t4906 + t5113;
  t5319 = t1867*t3274*t3264;
  t5346 = -1.*t1867*t4432*t4731;
  t5393 = t5319 + t5346;

  p_output1(0)=t1031*t1867*t2055 - 1.*t4798*t4814;
  p_output1(1)=t1867*t2055*t4429 - 1.*t4814*t5192;
  p_output1(2)=-1.*t2055*t3453 - 1.*t4814*t5393;
  p_output1(3)=t3264*t4691 + t4589*t4731;
  p_output1(4)=t4731*t4881 + t3264*t5028;
  p_output1(5)=t1867*t3264*t4432 + t1867*t3274*t4731;
  p_output1(6)=t2055*t4798 + t1031*t1867*t4814;
  p_output1(7)=t1867*t4429*t4814 + t2055*t5192;
  p_output1(8)=-1.*t3453*t4814 + t2055*t5393;
}


       
Eigen::Matrix<double,3,3> R_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



