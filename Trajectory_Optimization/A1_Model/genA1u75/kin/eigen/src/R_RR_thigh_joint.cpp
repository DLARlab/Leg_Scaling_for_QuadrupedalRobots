/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:56 GMT-05:00
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
  double t3038;
  double t3632;
  double t4200;
  double t3930;
  double t4524;
  double t1400;
  double t3121;
  double t3345;
  double t3474;
  double t6001;
  double t4109;
  double t5417;
  double t5734;
  double t6002;
  double t6003;
  double t6092;
  double t6301;
  double t6415;
  double t6480;
  double t6792;
  double t6804;
  double t6822;
  double t5822;
  double t6093;
  double t6115;
  double t6741;
  double t6871;
  double t6896;
  double t7165;
  double t7182;
  double t7216;
  t3038 = Cos(var1[3]);
  t3632 = Cos(var1[5]);
  t4200 = Sin(var1[3]);
  t3930 = Sin(var1[4]);
  t4524 = Sin(var1[5]);
  t1400 = Cos(var1[13]);
  t3121 = Cos(var1[4]);
  t3345 = Sin(var1[13]);
  t3474 = Cos(var1[12]);
  t6001 = Sin(var1[12]);
  t4109 = t3038*t3632*t3930;
  t5417 = t4200*t4524;
  t5734 = t4109 + t5417;
  t6002 = -1.*t3632*t4200;
  t6003 = t3038*t3930*t4524;
  t6092 = t6002 + t6003;
  t6301 = t3632*t4200*t3930;
  t6415 = -1.*t3038*t4524;
  t6480 = t6301 + t6415;
  t6792 = t3038*t3632;
  t6804 = t4200*t3930*t4524;
  t6822 = t6792 + t6804;
  t5822 = t3474*t5734;
  t6093 = -1.*t6001*t6092;
  t6115 = t5822 + t6093;
  t6741 = t3474*t6480;
  t6871 = -1.*t6001*t6822;
  t6896 = t6741 + t6871;
  t7165 = t3474*t3121*t3632;
  t7182 = -1.*t3121*t6001*t4524;
  t7216 = t7165 + t7182;

  p_output1(0)=t1400*t3038*t3121 - 1.*t3345*t6115;
  p_output1(1)=t1400*t3121*t4200 - 1.*t3345*t6896;
  p_output1(2)=-1.*t1400*t3930 - 1.*t3345*t7216;
  p_output1(3)=t5734*t6001 + t3474*t6092;
  p_output1(4)=t6001*t6480 + t3474*t6822;
  p_output1(5)=t3121*t3474*t4524 + t3121*t3632*t6001;
  p_output1(6)=t3038*t3121*t3345 + t1400*t6115;
  p_output1(7)=t3121*t3345*t4200 + t1400*t6896;
  p_output1(8)=-1.*t3345*t3930 + t1400*t7216;
}


       
Eigen::Matrix<double,3,3> R_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



