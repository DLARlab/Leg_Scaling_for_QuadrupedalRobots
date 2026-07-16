/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:58 GMT-05:00
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
  double t1511;
  double t2814;
  double t3080;
  double t2850;
  double t3310;
  double t2307;
  double t1771;
  double t1782;
  double t2646;
  double t2864;
  double t3682;
  double t4033;
  double t4253;
  double t4279;
  double t4651;
  double t4704;
  double t4819;
  double t4854;
  double t4866;
  double t327;
  double t4949;
  double t5365;
  double t5378;
  double t5446;
  double t5448;
  double t5506;
  double t5513;
  double t5560;
  double t5562;
  double t5609;
  double t5799;
  double t5804;
  double t5808;
  double t2228;
  double t4915;
  double t4922;
  double t5084;
  double t5228;
  double t5280;
  double t5341;
  double t5639;
  double t5683;
  double t5711;
  double t5730;
  double t5740;
  double t5787;
  double t5824;
  double t5830;
  double t5855;
  double t5864;
  double t5921;
  t1511 = Cos(var1[3]);
  t2814 = Cos(var1[5]);
  t3080 = Sin(var1[3]);
  t2850 = Sin(var1[4]);
  t3310 = Sin(var1[5]);
  t2307 = Cos(var1[13]);
  t1771 = Cos(var1[4]);
  t1782 = Sin(var1[13]);
  t2646 = Cos(var1[12]);
  t2864 = t1511*t2814*t2850;
  t3682 = t3080*t3310;
  t4033 = t2864 + t3682;
  t4253 = t2646*t4033;
  t4279 = Sin(var1[12]);
  t4651 = -1.*t2814*t3080;
  t4704 = t1511*t2850*t3310;
  t4819 = t4651 + t4704;
  t4854 = -1.*t4279*t4819;
  t4866 = t4253 + t4854;
  t327 = Sin(var1[14]);
  t4949 = Cos(var1[14]);
  t5365 = t2814*t3080*t2850;
  t5378 = -1.*t1511*t3310;
  t5446 = t5365 + t5378;
  t5448 = t2646*t5446;
  t5506 = t1511*t2814;
  t5513 = t3080*t2850*t3310;
  t5560 = t5506 + t5513;
  t5562 = -1.*t4279*t5560;
  t5609 = t5448 + t5562;
  t5799 = t2646*t1771*t2814;
  t5804 = -1.*t1771*t4279*t3310;
  t5808 = t5799 + t5804;
  t2228 = t1511*t1771*t1782;
  t4915 = t2307*t4866;
  t4922 = t2228 + t4915;
  t5084 = t2307*t1511*t1771;
  t5228 = -1.*t1782*t4866;
  t5280 = t5084 + t5228;
  t5341 = t1771*t1782*t3080;
  t5639 = t2307*t5609;
  t5683 = t5341 + t5639;
  t5711 = t2307*t1771*t3080;
  t5730 = -1.*t1782*t5609;
  t5740 = t5711 + t5730;
  t5787 = -1.*t1782*t2850;
  t5824 = t2307*t5808;
  t5830 = t5787 + t5824;
  t5855 = -1.*t2307*t2850;
  t5864 = -1.*t1782*t5808;
  t5921 = t5855 + t5864;

  p_output1(0)=-1.*t327*t4922 + t4949*t5280;
  p_output1(1)=-1.*t327*t5683 + t4949*t5740;
  p_output1(2)=-1.*t327*t5830 + t4949*t5921;
  p_output1(3)=t4033*t4279 + t2646*t4819;
  p_output1(4)=t4279*t5446 + t2646*t5560;
  p_output1(5)=t1771*t2646*t3310 + t1771*t2814*t4279;
  p_output1(6)=t4922*t4949 + t327*t5280;
  p_output1(7)=t4949*t5683 + t327*t5740;
  p_output1(8)=t4949*t5830 + t327*t5921;
}


       
Eigen::Matrix<double,3,3> R_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



