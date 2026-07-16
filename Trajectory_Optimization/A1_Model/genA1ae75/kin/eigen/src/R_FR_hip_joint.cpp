/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint.h"

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
  double t4648;
  double t7288;
  double t3827;
  double t8791;
  double t8822;
  double t8827;
  double t8801;
  double t8858;
  double t8848;
  double t8850;
  double t8855;
  double t8823;
  double t8829;
  double t8833;
  double t8878;
  double t8890;
  double t8895;
  double t8866;
  double t8869;
  double t8870;
  t4648 = Cos(var1[4]);
  t7288 = Sin(var1[3]);
  t3827 = Cos(var1[3]);
  t8791 = Sin(var1[4]);
  t8822 = Cos(var1[5]);
  t8827 = Sin(var1[5]);
  t8801 = Cos(var1[6]);
  t8858 = Sin(var1[6]);
  t8848 = t3827*t8822*t8791;
  t8850 = t7288*t8827;
  t8855 = t8848 + t8850;
  t8823 = -1.*t8822*t7288;
  t8829 = t3827*t8791*t8827;
  t8833 = t8823 + t8829;
  t8878 = t8822*t7288*t8791;
  t8890 = -1.*t3827*t8827;
  t8895 = t8878 + t8890;
  t8866 = t3827*t8822;
  t8869 = t7288*t8791*t8827;
  t8870 = t8866 + t8869;

  p_output1(0)=t3827*t4648;
  p_output1(1)=t4648*t7288;
  p_output1(2)=-1.*t8791;
  p_output1(3)=t8801*t8833 + t8855*t8858;
  p_output1(4)=t8801*t8870 + t8858*t8895;
  p_output1(5)=t4648*t8801*t8827 + t4648*t8822*t8858;
  p_output1(6)=t8801*t8855 - 1.*t8833*t8858;
  p_output1(7)=-1.*t8858*t8870 + t8801*t8895;
  p_output1(8)=t4648*t8801*t8822 - 1.*t4648*t8827*t8858;
}


       
Eigen::Matrix<double,3,3> R_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



