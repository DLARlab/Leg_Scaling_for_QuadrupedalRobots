/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t4493;
  double t6728;
  double t6745;
  double t6731;
  double t6780;
  double t6679;
  double t6744;
  double t6802;
  double t6810;
  double t6820;
  double t6865;
  double t6869;
  double t6873;
  double t538;
  double t4523;
  double t6940;
  double t6983;
  double t6985;
  double t6986;
  double t700;
  double t3063;
  double t3160;
  double t4428;
  double t6710;
  double t6725;
  double t6826;
  double t6833;
  double t6848;
  double t6858;
  double t7045;
  double t7088;
  double t7090;
  double t7103;
  double t7108;
  double t7112;
  double t6963;
  double t6979;
  double t7133;
  double t7136;
  double t7142;
  double t7224;
  double t7228;
  double t7235;
  t4493 = Cos(var1[3]);
  t6728 = Cos(var1[5]);
  t6745 = Sin(var1[3]);
  t6731 = Sin(var1[4]);
  t6780 = Sin(var1[5]);
  t6679 = Sin(var1[12]);
  t6744 = t4493*t6728*t6731;
  t6802 = t6745*t6780;
  t6810 = t6744 + t6802;
  t6820 = Cos(var1[12]);
  t6865 = -1.*t6728*t6745;
  t6869 = t4493*t6731*t6780;
  t6873 = t6865 + t6869;
  t538 = Cos(var1[13]);
  t4523 = Cos(var1[4]);
  t6940 = Sin(var1[13]);
  t6983 = t6820*t6810;
  t6985 = -1.*t6679*t6873;
  t6986 = t6983 + t6985;
  t700 = -1.*t538;
  t3063 = 1. + t700;
  t3160 = -0.183*t3063;
  t4428 = 0. + t3160;
  t6710 = 0.047*t6679;
  t6725 = 0. + t6710;
  t6826 = -1.*t6820;
  t6833 = 1. + t6826;
  t6848 = -0.047*t6833;
  t6858 = 0. + t6848;
  t7045 = t6728*t6745*t6731;
  t7088 = -1.*t4493*t6780;
  t7090 = t7045 + t7088;
  t7103 = t4493*t6728;
  t7108 = t6745*t6731*t6780;
  t7112 = t7103 + t7108;
  t6963 = -0.183*t6940;
  t6979 = 0. + t6963;
  t7133 = t6820*t7090;
  t7136 = -1.*t6679*t7112;
  t7142 = t7133 + t7136;
  t7224 = t6820*t4523*t6728;
  t7228 = -1.*t4523*t6679*t6780;
  t7235 = t7224 + t7228;

  p_output1(0)=0. + t4428*t4493*t4523 + t6725*t6810 + t6858*t6873 - 0.13205*(t6679*t6810 + t6820*t6873) + t6979*t6986 - 0.183*(t4493*t4523*t538 - 1.*t6940*t6986) + var1(0);
  p_output1(1)=0. + t4428*t4523*t6745 + t6725*t7090 + t6858*t7112 - 0.13205*(t6679*t7090 + t6820*t7112) + t6979*t7142 - 0.183*(t4523*t538*t6745 - 1.*t6940*t7142) + var1(1);
  p_output1(2)=0. + t4523*t6725*t6728 - 1.*t4428*t6731 - 0.13205*(t4523*t6679*t6728 + t4523*t6780*t6820) + t4523*t6780*t6858 + t6979*t7235 - 0.183*(-1.*t538*t6731 - 1.*t6940*t7235) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



