/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t449;
  double t148;
  double t2116;
  double t1416;
  double t2590;
  double t3230;
  double t2539;
  double t3362;
  double t2762;
  double t3265;
  double t3273;
  double t3369;
  double t3430;
  double t3566;
  double t3770;
  double t3902;
  double t3906;
  double t3924;
  double t3988;
  double t4124;
  double t3285;
  double t3607;
  double t3727;
  double t6044;
  double t6047;
  double t6125;
  double t6147;
  double t6169;
  double t6198;
  double t3911;
  double t4228;
  double t4389;
  double t4406;
  double t4407;
  double t4465;
  t449 = Cos(var1[4]);
  t148 = Cos(var1[3]);
  t2116 = Sin(var1[4]);
  t1416 = Sin(var1[3]);
  t2590 = Cos(var1[5]);
  t3230 = Sin(var1[5]);
  t2539 = Sin(var1[9]);
  t3362 = Cos(var1[9]);
  t2762 = t148*t2590*t2116;
  t3265 = t1416*t3230;
  t3273 = t2762 + t3265;
  t3369 = -1.*t2590*t1416;
  t3430 = t148*t2116*t3230;
  t3566 = t3369 + t3430;
  t3770 = t2590*t1416*t2116;
  t3902 = -1.*t148*t3230;
  t3906 = t3770 + t3902;
  t3924 = t148*t2590;
  t3988 = t1416*t2116*t3230;
  t4124 = t3924 + t3988;
  t3285 = t2539*t3273;
  t3607 = t3362*t3566;
  t3727 = t3285 + t3607;
  t6044 = -0.047*t2539;
  t6047 = 0. + t6044;
  t6125 = -1.*t3362;
  t6147 = 1. + t6125;
  t6169 = 0.047*t6147;
  t6198 = 0. + t6169;
  t3911 = t2539*t3906;
  t4228 = t3362*t4124;
  t4389 = t3911 + t4228;
  t4406 = t449*t2590*t2539;
  t4407 = t3362*t449*t3230;
  t4465 = t4406 + t4407;

  p_output1(0)=t148*t449;
  p_output1(1)=t1416*t449;
  p_output1(2)=-1.*t2116;
  p_output1(3)=0.;
  p_output1(4)=t3727;
  p_output1(5)=t4389;
  p_output1(6)=t4465;
  p_output1(7)=0.;
  p_output1(8)=t3273*t3362 - 1.*t2539*t3566;
  p_output1(9)=t3362*t3906 - 1.*t2539*t4124;
  p_output1(10)=-1.*t2539*t3230*t449 + t2590*t3362*t449;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t3727 + 0.183*t148*t449 + t3273*t6047 + t3566*t6198 + var1(0);
  p_output1(13)=0. + 0.047*t4389 + 0.183*t1416*t449 + t3906*t6047 + t4124*t6198 + var1(1);
  p_output1(14)=0. - 0.183*t2116 + 0.047*t4465 + t2590*t449*t6047 + t3230*t449*t6198 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



