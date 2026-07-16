/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot.h"

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
  double t3767;
  double t4621;
  double t4803;
  double t4709;
  double t4929;
  double t4079;
  double t3802;
  double t3962;
  double t4166;
  double t4790;
  double t5090;
  double t5113;
  double t5118;
  double t5155;
  double t5162;
  double t5167;
  double t5169;
  double t5231;
  double t5293;
  double t1401;
  double t5488;
  double t5729;
  double t5772;
  double t5848;
  double t5899;
  double t5970;
  double t5980;
  double t6031;
  double t6037;
  double t6042;
  double t6548;
  double t6563;
  double t6566;
  double t3986;
  double t5334;
  double t5342;
  double t5593;
  double t5598;
  double t5621;
  double t5683;
  double t6050;
  double t6075;
  double t6215;
  double t6290;
  double t6335;
  double t6525;
  double t6579;
  double t6616;
  double t6660;
  double t6733;
  double t6798;
  t3767 = Cos(var1[3]);
  t4621 = Cos(var1[5]);
  t4803 = Sin(var1[3]);
  t4709 = Sin(var1[4]);
  t4929 = Sin(var1[5]);
  t4079 = Cos(var1[13]);
  t3802 = Cos(var1[4]);
  t3962 = Sin(var1[13]);
  t4166 = Cos(var1[12]);
  t4790 = t3767*t4621*t4709;
  t5090 = t4803*t4929;
  t5113 = t4790 + t5090;
  t5118 = t4166*t5113;
  t5155 = Sin(var1[12]);
  t5162 = -1.*t4621*t4803;
  t5167 = t3767*t4709*t4929;
  t5169 = t5162 + t5167;
  t5231 = -1.*t5155*t5169;
  t5293 = t5118 + t5231;
  t1401 = Sin(var1[14]);
  t5488 = Cos(var1[14]);
  t5729 = t4621*t4803*t4709;
  t5772 = -1.*t3767*t4929;
  t5848 = t5729 + t5772;
  t5899 = t4166*t5848;
  t5970 = t3767*t4621;
  t5980 = t4803*t4709*t4929;
  t6031 = t5970 + t5980;
  t6037 = -1.*t5155*t6031;
  t6042 = t5899 + t6037;
  t6548 = t4166*t3802*t4621;
  t6563 = -1.*t3802*t5155*t4929;
  t6566 = t6548 + t6563;
  t3986 = t3767*t3802*t3962;
  t5334 = t4079*t5293;
  t5342 = t3986 + t5334;
  t5593 = t4079*t3767*t3802;
  t5598 = -1.*t3962*t5293;
  t5621 = t5593 + t5598;
  t5683 = t3802*t3962*t4803;
  t6050 = t4079*t6042;
  t6075 = t5683 + t6050;
  t6215 = t4079*t3802*t4803;
  t6290 = -1.*t3962*t6042;
  t6335 = t6215 + t6290;
  t6525 = -1.*t3962*t4709;
  t6579 = t4079*t6566;
  t6616 = t6525 + t6579;
  t6660 = -1.*t4079*t4709;
  t6733 = -1.*t3962*t6566;
  t6798 = t6660 + t6733;

  p_output1(0)=-1.*t1401*t5342 + t5488*t5621;
  p_output1(1)=-1.*t1401*t6075 + t5488*t6335;
  p_output1(2)=-1.*t1401*t6616 + t5488*t6798;
  p_output1(3)=t5113*t5155 + t4166*t5169;
  p_output1(4)=t5155*t5848 + t4166*t6031;
  p_output1(5)=t3802*t4166*t4929 + t3802*t4621*t5155;
  p_output1(6)=t5342*t5488 + t1401*t5621;
  p_output1(7)=t5488*t6075 + t1401*t6335;
  p_output1(8)=t5488*t6616 + t1401*t6798;
}


       
Eigen::Matrix<double,3,3> R_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



