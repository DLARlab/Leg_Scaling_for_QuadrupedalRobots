/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot.h"

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
  double t914;
  double t3405;
  double t4033;
  double t3442;
  double t4045;
  double t3204;
  double t1814;
  double t1879;
  double t3212;
  double t3852;
  double t4116;
  double t4223;
  double t4550;
  double t4559;
  double t4722;
  double t4754;
  double t4770;
  double t5114;
  double t5285;
  double t124;
  double t5405;
  double t5746;
  double t5767;
  double t5830;
  double t5861;
  double t5875;
  double t5910;
  double t5912;
  double t6024;
  double t6062;
  double t6381;
  double t6414;
  double t6488;
  double t2934;
  double t5291;
  double t5358;
  double t5435;
  double t5484;
  double t5551;
  double t5583;
  double t6083;
  double t6108;
  double t6207;
  double t6229;
  double t6289;
  double t6377;
  double t6562;
  double t6571;
  double t6651;
  double t6660;
  double t6684;
  t914 = Cos(var1[3]);
  t3405 = Cos(var1[5]);
  t4033 = Sin(var1[3]);
  t3442 = Sin(var1[4]);
  t4045 = Sin(var1[5]);
  t3204 = Cos(var1[10]);
  t1814 = Cos(var1[4]);
  t1879 = Sin(var1[10]);
  t3212 = Cos(var1[9]);
  t3852 = t914*t3405*t3442;
  t4116 = t4033*t4045;
  t4223 = t3852 + t4116;
  t4550 = t3212*t4223;
  t4559 = Sin(var1[9]);
  t4722 = -1.*t3405*t4033;
  t4754 = t914*t3442*t4045;
  t4770 = t4722 + t4754;
  t5114 = -1.*t4559*t4770;
  t5285 = t4550 + t5114;
  t124 = Sin(var1[11]);
  t5405 = Cos(var1[11]);
  t5746 = t3405*t4033*t3442;
  t5767 = -1.*t914*t4045;
  t5830 = t5746 + t5767;
  t5861 = t3212*t5830;
  t5875 = t914*t3405;
  t5910 = t4033*t3442*t4045;
  t5912 = t5875 + t5910;
  t6024 = -1.*t4559*t5912;
  t6062 = t5861 + t6024;
  t6381 = t3212*t1814*t3405;
  t6414 = -1.*t1814*t4559*t4045;
  t6488 = t6381 + t6414;
  t2934 = t914*t1814*t1879;
  t5291 = t3204*t5285;
  t5358 = t2934 + t5291;
  t5435 = t3204*t914*t1814;
  t5484 = -1.*t1879*t5285;
  t5551 = t5435 + t5484;
  t5583 = t1814*t1879*t4033;
  t6083 = t3204*t6062;
  t6108 = t5583 + t6083;
  t6207 = t3204*t1814*t4033;
  t6229 = -1.*t1879*t6062;
  t6289 = t6207 + t6229;
  t6377 = -1.*t1879*t3442;
  t6562 = t3204*t6488;
  t6571 = t6377 + t6562;
  t6651 = -1.*t3204*t3442;
  t6660 = -1.*t1879*t6488;
  t6684 = t6651 + t6660;

  p_output1(0)=-1.*t124*t5358 + t5405*t5551;
  p_output1(1)=-1.*t124*t6108 + t5405*t6289;
  p_output1(2)=-1.*t124*t6571 + t5405*t6684;
  p_output1(3)=t4223*t4559 + t3212*t4770;
  p_output1(4)=t4559*t5830 + t3212*t5912;
  p_output1(5)=t1814*t3212*t4045 + t1814*t3405*t4559;
  p_output1(6)=t5358*t5405 + t124*t5551;
  p_output1(7)=t5405*t6108 + t124*t6289;
  p_output1(8)=t5405*t6571 + t124*t6684;
}


       
Eigen::Matrix<double,3,3> R_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



