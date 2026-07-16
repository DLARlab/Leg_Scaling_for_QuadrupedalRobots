/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:47 GMT-05:00
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
  double t2034;
  double t4698;
  double t4993;
  double t4728;
  double t5803;
  double t1679;
  double t2713;
  double t4439;
  double t4540;
  double t6806;
  double t4730;
  double t6247;
  double t6539;
  double t7009;
  double t7049;
  double t7194;
  double t8236;
  double t8432;
  double t8470;
  double t8591;
  double t8704;
  double t8787;
  double t6648;
  double t7580;
  double t7954;
  double t8539;
  double t9057;
  double t9114;
  double t9169;
  double t9177;
  double t9187;
  t2034 = Cos(var1[3]);
  t4698 = Cos(var1[5]);
  t4993 = Sin(var1[3]);
  t4728 = Sin(var1[4]);
  t5803 = Sin(var1[5]);
  t1679 = Cos(var1[13]);
  t2713 = Cos(var1[4]);
  t4439 = Sin(var1[13]);
  t4540 = Cos(var1[12]);
  t6806 = Sin(var1[12]);
  t4730 = t2034*t4698*t4728;
  t6247 = t4993*t5803;
  t6539 = t4730 + t6247;
  t7009 = -1.*t4698*t4993;
  t7049 = t2034*t4728*t5803;
  t7194 = t7009 + t7049;
  t8236 = t4698*t4993*t4728;
  t8432 = -1.*t2034*t5803;
  t8470 = t8236 + t8432;
  t8591 = t2034*t4698;
  t8704 = t4993*t4728*t5803;
  t8787 = t8591 + t8704;
  t6648 = t4540*t6539;
  t7580 = -1.*t6806*t7194;
  t7954 = t6648 + t7580;
  t8539 = t4540*t8470;
  t9057 = -1.*t6806*t8787;
  t9114 = t8539 + t9057;
  t9169 = t4540*t2713*t4698;
  t9177 = -1.*t2713*t6806*t5803;
  t9187 = t9169 + t9177;

  p_output1(0)=t1679*t2034*t2713 - 1.*t4439*t7954;
  p_output1(1)=t1679*t2713*t4993 - 1.*t4439*t9114;
  p_output1(2)=-1.*t1679*t4728 - 1.*t4439*t9187;
  p_output1(3)=t6539*t6806 + t4540*t7194;
  p_output1(4)=t6806*t8470 + t4540*t8787;
  p_output1(5)=t2713*t4540*t5803 + t2713*t4698*t6806;
  p_output1(6)=t2034*t2713*t4439 + t1679*t7954;
  p_output1(7)=t2713*t4439*t4993 + t1679*t9114;
  p_output1(8)=-1.*t4439*t4728 + t1679*t9187;
}


       
Eigen::Matrix<double,3,3> R_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



