/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_hip_joint.h"

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
  double t659;
  double t588;
  double t1981;
  double t1664;
  double t4389;
  double t5540;
  double t4228;
  double t5780;
  double t4749;
  double t5697;
  double t5715;
  double t5801;
  double t5813;
  double t5909;
  double t6047;
  double t6090;
  double t6120;
  double t6198;
  double t6212;
  double t6235;
  t659 = Cos(var1[4]);
  t588 = Cos(var1[3]);
  t1981 = Sin(var1[4]);
  t1664 = Sin(var1[3]);
  t4389 = Cos(var1[5]);
  t5540 = Sin(var1[5]);
  t4228 = Sin(var1[9]);
  t5780 = Cos(var1[9]);
  t4749 = t588*t4389*t1981;
  t5697 = t1664*t5540;
  t5715 = t4749 + t5697;
  t5801 = -1.*t4389*t1664;
  t5813 = t588*t1981*t5540;
  t5909 = t5801 + t5813;
  t6047 = t4389*t1664*t1981;
  t6090 = -1.*t588*t5540;
  t6120 = t6047 + t6090;
  t6198 = t588*t4389;
  t6212 = t1664*t1981*t5540;
  t6235 = t6198 + t6212;

  p_output1(0)=t588*t659;
  p_output1(1)=t1664*t659;
  p_output1(2)=-1.*t1981;
  p_output1(3)=t4228*t5715 + t5780*t5909;
  p_output1(4)=t4228*t6120 + t5780*t6235;
  p_output1(5)=t4228*t4389*t659 + t5540*t5780*t659;
  p_output1(6)=t5715*t5780 - 1.*t4228*t5909;
  p_output1(7)=t5780*t6120 - 1.*t4228*t6235;
  p_output1(8)=-1.*t4228*t5540*t659 + t4389*t5780*t659;
}


       
Eigen::Matrix<double,3,3> R_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



