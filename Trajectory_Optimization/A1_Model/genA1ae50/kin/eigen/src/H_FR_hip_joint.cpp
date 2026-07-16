/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint.h"

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
  double t1679;
  double t3193;
  double t751;
  double t4174;
  double t4187;
  double t4192;
  double t4181;
  double t4216;
  double t4211;
  double t4212;
  double t4213;
  double t4189;
  double t4199;
  double t4205;
  double t4233;
  double t4234;
  double t4235;
  double t4224;
  double t4228;
  double t4230;
  double t4206;
  double t4217;
  double t4223;
  double t4273;
  double t4280;
  double t4284;
  double t4289;
  double t4295;
  double t4298;
  double t4232;
  double t4236;
  double t4237;
  double t4238;
  double t4244;
  double t4245;
  t1679 = Cos(var1[4]);
  t3193 = Sin(var1[3]);
  t751 = Cos(var1[3]);
  t4174 = Sin(var1[4]);
  t4187 = Cos(var1[5]);
  t4192 = Sin(var1[5]);
  t4181 = Cos(var1[6]);
  t4216 = Sin(var1[6]);
  t4211 = t751*t4187*t4174;
  t4212 = t3193*t4192;
  t4213 = t4211 + t4212;
  t4189 = -1.*t4187*t3193;
  t4199 = t751*t4174*t4192;
  t4205 = t4189 + t4199;
  t4233 = t4187*t3193*t4174;
  t4234 = -1.*t751*t4192;
  t4235 = t4233 + t4234;
  t4224 = t751*t4187;
  t4228 = t3193*t4174*t4192;
  t4230 = t4224 + t4228;
  t4206 = t4181*t4205;
  t4217 = t4213*t4216;
  t4223 = t4206 + t4217;
  t4273 = -1.*t4181;
  t4280 = 1. + t4273;
  t4284 = -0.047*t4280;
  t4289 = 0. + t4284;
  t4295 = 0.047*t4216;
  t4298 = 0. + t4295;
  t4232 = t4181*t4230;
  t4236 = t4235*t4216;
  t4237 = t4232 + t4236;
  t4238 = t1679*t4181*t4192;
  t4244 = t1679*t4187*t4216;
  t4245 = t4238 + t4244;

  p_output1(0)=t1679*t751;
  p_output1(1)=t1679*t3193;
  p_output1(2)=-1.*t4174;
  p_output1(3)=0.;
  p_output1(4)=t4223;
  p_output1(5)=t4237;
  p_output1(6)=t4245;
  p_output1(7)=0.;
  p_output1(8)=t4181*t4213 - 1.*t4205*t4216;
  p_output1(9)=-1.*t4216*t4230 + t4181*t4235;
  p_output1(10)=t1679*t4181*t4187 - 1.*t1679*t4192*t4216;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t4223 + t4205*t4289 + t4213*t4298 + 0.183*t1679*t751 + var1(0);
  p_output1(13)=0. + 0.183*t1679*t3193 - 0.047*t4237 + t4230*t4289 + t4235*t4298 + var1(1);
  p_output1(14)=0. - 0.183*t4174 - 0.047*t4245 + t1679*t4192*t4289 + t1679*t4187*t4298 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



