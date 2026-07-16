/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint.h"

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
  double t733;
  double t3032;
  double t3290;
  double t3120;
  double t3411;
  double t2485;
  double t1577;
  double t2317;
  double t3021;
  double t3125;
  double t3412;
  double t3421;
  double t3430;
  double t3443;
  double t3504;
  double t3510;
  double t3576;
  double t3592;
  double t3600;
  double t497;
  double t3647;
  double t3829;
  double t3921;
  double t4120;
  double t4167;
  double t4303;
  double t4328;
  double t4346;
  double t4383;
  double t4392;
  double t4738;
  double t4865;
  double t4867;
  double t2415;
  double t3609;
  double t3610;
  double t3711;
  double t3725;
  double t3783;
  double t3819;
  double t4495;
  double t4500;
  double t4520;
  double t4567;
  double t4589;
  double t4694;
  double t4889;
  double t4901;
  double t4958;
  double t5014;
  double t5023;
  t733 = Cos(var1[3]);
  t3032 = Cos(var1[5]);
  t3290 = Sin(var1[3]);
  t3120 = Sin(var1[4]);
  t3411 = Sin(var1[5]);
  t2485 = Cos(var1[13]);
  t1577 = Cos(var1[4]);
  t2317 = Sin(var1[13]);
  t3021 = Cos(var1[12]);
  t3125 = t733*t3032*t3120;
  t3412 = t3290*t3411;
  t3421 = t3125 + t3412;
  t3430 = t3021*t3421;
  t3443 = Sin(var1[12]);
  t3504 = -1.*t3032*t3290;
  t3510 = t733*t3120*t3411;
  t3576 = t3504 + t3510;
  t3592 = -1.*t3443*t3576;
  t3600 = t3430 + t3592;
  t497 = Sin(var1[14]);
  t3647 = Cos(var1[14]);
  t3829 = t3032*t3290*t3120;
  t3921 = -1.*t733*t3411;
  t4120 = t3829 + t3921;
  t4167 = t3021*t4120;
  t4303 = t733*t3032;
  t4328 = t3290*t3120*t3411;
  t4346 = t4303 + t4328;
  t4383 = -1.*t3443*t4346;
  t4392 = t4167 + t4383;
  t4738 = t3021*t1577*t3032;
  t4865 = -1.*t1577*t3443*t3411;
  t4867 = t4738 + t4865;
  t2415 = t733*t1577*t2317;
  t3609 = t2485*t3600;
  t3610 = t2415 + t3609;
  t3711 = t2485*t733*t1577;
  t3725 = -1.*t2317*t3600;
  t3783 = t3711 + t3725;
  t3819 = t1577*t2317*t3290;
  t4495 = t2485*t4392;
  t4500 = t3819 + t4495;
  t4520 = t2485*t1577*t3290;
  t4567 = -1.*t2317*t4392;
  t4589 = t4520 + t4567;
  t4694 = -1.*t2317*t3120;
  t4889 = t2485*t4867;
  t4901 = t4694 + t4889;
  t4958 = -1.*t2485*t3120;
  t5014 = -1.*t2317*t4867;
  t5023 = t4958 + t5014;

  p_output1(0)=t3647*t3783 - 1.*t3610*t497;
  p_output1(1)=t3647*t4589 - 1.*t4500*t497;
  p_output1(2)=-1.*t4901*t497 + t3647*t5023;
  p_output1(3)=t3421*t3443 + t3021*t3576;
  p_output1(4)=t3443*t4120 + t3021*t4346;
  p_output1(5)=t1577*t3021*t3411 + t1577*t3032*t3443;
  p_output1(6)=t3610*t3647 + t3783*t497;
  p_output1(7)=t3647*t4500 + t4589*t497;
  p_output1(8)=t3647*t4901 + t497*t5023;
}


       
Eigen::Matrix<double,3,3> R_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



