/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint.h"

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
  double t177;
  double t5541;
  double t6911;
  double t5917;
  double t6978;
  double t3015;
  double t6000;
  double t7058;
  double t7071;
  double t7098;
  double t7101;
  double t7129;
  double t7147;
  double t1125;
  double t1744;
  double t7346;
  double t7354;
  double t7375;
  double t7379;
  double t1849;
  double t2250;
  double t2372;
  double t2728;
  double t3690;
  double t3774;
  double t3798;
  double t5060;
  double t7157;
  double t7188;
  double t7783;
  double t7786;
  double t7791;
  double t7803;
  double t7804;
  double t7809;
  double t7404;
  double t7453;
  double t7866;
  double t7874;
  double t7899;
  double t8010;
  double t8023;
  double t8033;
  t177 = Cos(var1[3]);
  t5541 = Cos(var1[5]);
  t6911 = Sin(var1[4]);
  t5917 = Sin(var1[3]);
  t6978 = Sin(var1[5]);
  t3015 = Cos(var1[6]);
  t6000 = -1.*t5541*t5917;
  t7058 = t177*t6911*t6978;
  t7071 = t6000 + t7058;
  t7098 = t177*t5541*t6911;
  t7101 = t5917*t6978;
  t7129 = t7098 + t7101;
  t7147 = Sin(var1[6]);
  t1125 = Cos(var1[4]);
  t1744 = Cos(var1[7]);
  t7346 = t3015*t7129;
  t7354 = -1.*t7071*t7147;
  t7375 = t7346 + t7354;
  t7379 = Sin(var1[7]);
  t1849 = -1.*t1744;
  t2250 = 1. + t1849;
  t2372 = 0.183*t2250;
  t2728 = 0. + t2372;
  t3690 = -1.*t3015;
  t3774 = 1. + t3690;
  t3798 = -0.047*t3774;
  t5060 = 0. + t3798;
  t7157 = 0.047*t7147;
  t7188 = 0. + t7157;
  t7783 = t177*t5541;
  t7786 = t5917*t6911*t6978;
  t7791 = t7783 + t7786;
  t7803 = t5541*t5917*t6911;
  t7804 = -1.*t177*t6978;
  t7809 = t7803 + t7804;
  t7404 = 0.183*t7379;
  t7453 = 0. + t7404;
  t7866 = t3015*t7809;
  t7874 = -1.*t7791*t7147;
  t7899 = t7866 + t7874;
  t8010 = t1125*t5541*t3015;
  t8023 = -1.*t1125*t6978*t7147;
  t8033 = t8010 + t8023;

  p_output1(0)=0. + t1125*t177*t2728 + t5060*t7071 - 0.11079*(t3015*t7071 + t7129*t7147) + t7129*t7188 + 0.183*(t1125*t1744*t177 - 1.*t7375*t7379) + t7375*t7453 + var1(0);
  p_output1(1)=0. + t1125*t2728*t5917 + t5060*t7791 + t7188*t7809 - 0.11079*(t3015*t7791 + t7147*t7809) + t7453*t7899 + 0.183*(t1125*t1744*t5917 - 1.*t7379*t7899) + var1(1);
  p_output1(2)=0. - 1.*t2728*t6911 + t1125*t5060*t6978 - 0.11079*(t1125*t3015*t6978 + t1125*t5541*t7147) + t1125*t5541*t7188 + t7453*t8033 + 0.183*(-1.*t1744*t6911 - 1.*t7379*t8033) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



