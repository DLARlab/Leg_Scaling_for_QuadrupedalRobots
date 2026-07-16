/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:09 GMT-05:00
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
  double t778;
  double t952;
  double t481;
  double t1163;
  double t5108;
  double t6501;
  double t4270;
  double t8872;
  double t8224;
  double t8773;
  double t8823;
  double t5521;
  double t7384;
  double t7710;
  double t9133;
  double t9160;
  double t9170;
  double t8893;
  double t8939;
  double t8955;
  double t8148;
  double t8882;
  double t8891;
  double t9288;
  double t9289;
  double t9291;
  double t9298;
  double t9303;
  double t9305;
  double t9063;
  double t9182;
  double t9184;
  double t9198;
  double t9204;
  double t9211;
  t778 = Cos(var1[4]);
  t952 = Sin(var1[3]);
  t481 = Cos(var1[3]);
  t1163 = Sin(var1[4]);
  t5108 = Cos(var1[5]);
  t6501 = Sin(var1[5]);
  t4270 = Cos(var1[6]);
  t8872 = Sin(var1[6]);
  t8224 = t481*t5108*t1163;
  t8773 = t952*t6501;
  t8823 = t8224 + t8773;
  t5521 = -1.*t5108*t952;
  t7384 = t481*t1163*t6501;
  t7710 = t5521 + t7384;
  t9133 = t5108*t952*t1163;
  t9160 = -1.*t481*t6501;
  t9170 = t9133 + t9160;
  t8893 = t481*t5108;
  t8939 = t952*t1163*t6501;
  t8955 = t8893 + t8939;
  t8148 = t4270*t7710;
  t8882 = t8823*t8872;
  t8891 = t8148 + t8882;
  t9288 = -1.*t4270;
  t9289 = 1. + t9288;
  t9291 = -0.047*t9289;
  t9298 = 0. + t9291;
  t9303 = 0.047*t8872;
  t9305 = 0. + t9303;
  t9063 = t4270*t8955;
  t9182 = t9170*t8872;
  t9184 = t9063 + t9182;
  t9198 = t778*t4270*t6501;
  t9204 = t778*t5108*t8872;
  t9211 = t9198 + t9204;

  p_output1(0)=t481*t778;
  p_output1(1)=t778*t952;
  p_output1(2)=-1.*t1163;
  p_output1(3)=0.;
  p_output1(4)=t8891;
  p_output1(5)=t9184;
  p_output1(6)=t9211;
  p_output1(7)=0.;
  p_output1(8)=t4270*t8823 - 1.*t7710*t8872;
  p_output1(9)=-1.*t8872*t8955 + t4270*t9170;
  p_output1(10)=t4270*t5108*t778 - 1.*t6501*t778*t8872;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t481*t778 - 0.047*t8891 + t7710*t9298 + t8823*t9305 + var1(0);
  p_output1(13)=0. - 0.047*t9184 + t8955*t9298 + t9170*t9305 + 0.183*t778*t952 + var1(1);
  p_output1(14)=0. - 0.183*t1163 - 0.047*t9211 + t6501*t778*t9298 + t5108*t778*t9305 + var1(2);
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



