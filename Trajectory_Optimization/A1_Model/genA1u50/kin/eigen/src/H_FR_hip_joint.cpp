/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:32 GMT-05:00
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
  double t811;
  double t2062;
  double t534;
  double t3258;
  double t7857;
  double t7862;
  double t4481;
  double t7883;
  double t7874;
  double t7877;
  double t7879;
  double t7860;
  double t7870;
  double t7871;
  double t7890;
  double t7891;
  double t7892;
  double t7886;
  double t7887;
  double t7888;
  double t7872;
  double t7884;
  double t7885;
  double t7910;
  double t7911;
  double t7913;
  double t7914;
  double t7917;
  double t7918;
  double t7889;
  double t7893;
  double t7894;
  double t7895;
  double t7896;
  double t7897;
  t811 = Cos(var1[4]);
  t2062 = Sin(var1[3]);
  t534 = Cos(var1[3]);
  t3258 = Sin(var1[4]);
  t7857 = Cos(var1[5]);
  t7862 = Sin(var1[5]);
  t4481 = Cos(var1[6]);
  t7883 = Sin(var1[6]);
  t7874 = t534*t7857*t3258;
  t7877 = t2062*t7862;
  t7879 = t7874 + t7877;
  t7860 = -1.*t7857*t2062;
  t7870 = t534*t3258*t7862;
  t7871 = t7860 + t7870;
  t7890 = t7857*t2062*t3258;
  t7891 = -1.*t534*t7862;
  t7892 = t7890 + t7891;
  t7886 = t534*t7857;
  t7887 = t2062*t3258*t7862;
  t7888 = t7886 + t7887;
  t7872 = t4481*t7871;
  t7884 = t7879*t7883;
  t7885 = t7872 + t7884;
  t7910 = -1.*t4481;
  t7911 = 1. + t7910;
  t7913 = -0.047*t7911;
  t7914 = 0. + t7913;
  t7917 = 0.047*t7883;
  t7918 = 0. + t7917;
  t7889 = t4481*t7888;
  t7893 = t7892*t7883;
  t7894 = t7889 + t7893;
  t7895 = t811*t4481*t7862;
  t7896 = t811*t7857*t7883;
  t7897 = t7895 + t7896;

  p_output1(0)=t534*t811;
  p_output1(1)=t2062*t811;
  p_output1(2)=-1.*t3258;
  p_output1(3)=0.;
  p_output1(4)=t7885;
  p_output1(5)=t7894;
  p_output1(6)=t7897;
  p_output1(7)=0.;
  p_output1(8)=t4481*t7879 - 1.*t7871*t7883;
  p_output1(9)=-1.*t7883*t7888 + t4481*t7892;
  p_output1(10)=t4481*t7857*t811 - 1.*t7862*t7883*t811;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t7885 + t7871*t7914 + t7879*t7918 + 0.183*t534*t811 + var1(0);
  p_output1(13)=0. - 0.047*t7894 + t7888*t7914 + t7892*t7918 + 0.183*t2062*t811 + var1(1);
  p_output1(14)=0. - 0.183*t3258 - 0.047*t7897 + t7862*t7914*t811 + t7857*t7918*t811 + var1(2);
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



