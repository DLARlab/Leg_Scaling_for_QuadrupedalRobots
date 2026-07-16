/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:52 GMT-05:00
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
  double t91;
  double t1059;
  double t1416;
  double t1179;
  double t2504;
  double t488;
  double t962;
  double t1057;
  double t2985;
  double t3042;
  double t2894;
  double t2916;
  double t2928;
  double t1251;
  double t2537;
  double t2577;
  double t3250;
  double t3261;
  double t3278;
  double t3135;
  double t3151;
  double t3209;
  double t2651;
  double t3008;
  double t3010;
  double t3224;
  double t3292;
  double t3322;
  double t3708;
  double t3770;
  double t3857;
  t91 = Cos(var1[3]);
  t1059 = Cos(var1[5]);
  t1416 = Sin(var1[3]);
  t1179 = Sin(var1[4]);
  t2504 = Sin(var1[5]);
  t488 = Cos(var1[4]);
  t962 = Cos(var1[7]);
  t1057 = Cos(var1[6]);
  t2985 = Sin(var1[6]);
  t3042 = Sin(var1[7]);
  t2894 = -1.*t1059*t1416;
  t2916 = t91*t1179*t2504;
  t2928 = t2894 + t2916;
  t1251 = t91*t1059*t1179;
  t2537 = t1416*t2504;
  t2577 = t1251 + t2537;
  t3250 = t91*t1059;
  t3261 = t1416*t1179*t2504;
  t3278 = t3250 + t3261;
  t3135 = t1059*t1416*t1179;
  t3151 = -1.*t91*t2504;
  t3209 = t3135 + t3151;
  t2651 = t1057*t2577;
  t3008 = -1.*t2928*t2985;
  t3010 = t2651 + t3008;
  t3224 = t1057*t3209;
  t3292 = -1.*t3278*t2985;
  t3322 = t3224 + t3292;
  t3708 = t488*t1059*t1057;
  t3770 = -1.*t488*t2504*t2985;
  t3857 = t3708 + t3770;

  p_output1(0)=-1.*t3010*t3042 + t488*t91*t962;
  p_output1(1)=-1.*t3042*t3322 + t1416*t488*t962;
  p_output1(2)=-1.*t3042*t3857 - 1.*t1179*t962;
  p_output1(3)=t1057*t2928 + t2577*t2985;
  p_output1(4)=t2985*t3209 + t1057*t3278;
  p_output1(5)=t1057*t2504*t488 + t1059*t2985*t488;
  p_output1(6)=t3042*t488*t91 + t3010*t962;
  p_output1(7)=t1416*t3042*t488 + t3322*t962;
  p_output1(8)=-1.*t1179*t3042 + t3857*t962;
}


       
Eigen::Matrix<double,3,3> R_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



