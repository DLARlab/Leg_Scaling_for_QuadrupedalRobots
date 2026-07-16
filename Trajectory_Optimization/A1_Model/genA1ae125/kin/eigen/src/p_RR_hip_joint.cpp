/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint.h"

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
  double t345;
  double t1962;
  double t3324;
  double t2208;
  double t3403;
  double t1196;
  double t2331;
  double t3561;
  double t3569;
  double t3690;
  double t3721;
  double t3723;
  double t3759;
  double t976;
  double t1357;
  double t1835;
  double t3693;
  double t3699;
  double t3703;
  double t3708;
  double t3829;
  double t3830;
  double t3831;
  double t3836;
  double t3837;
  double t3838;
  t345 = Cos(var1[3]);
  t1962 = Cos(var1[5]);
  t3324 = Sin(var1[3]);
  t2208 = Sin(var1[4]);
  t3403 = Sin(var1[5]);
  t1196 = Sin(var1[12]);
  t2331 = t345*t1962*t2208;
  t3561 = t3324*t3403;
  t3569 = t2331 + t3561;
  t3690 = Cos(var1[12]);
  t3721 = -1.*t1962*t3324;
  t3723 = t345*t2208*t3403;
  t3759 = t3721 + t3723;
  t976 = Cos(var1[4]);
  t1357 = 0.047*t1196;
  t1835 = 0. + t1357;
  t3693 = -1.*t3690;
  t3699 = 1. + t3693;
  t3703 = -0.047*t3699;
  t3708 = 0. + t3703;
  t3829 = t1962*t3324*t2208;
  t3830 = -1.*t345*t3403;
  t3831 = t3829 + t3830;
  t3836 = t345*t1962;
  t3837 = t3324*t2208*t3403;
  t3838 = t3836 + t3837;

  p_output1(0)=0. + t1835*t3569 + t3708*t3759 - 0.047*(t1196*t3569 + t3690*t3759) - 0.183*t345*t976 + var1(0);
  p_output1(1)=0. + t1835*t3831 + t3708*t3838 - 0.047*(t1196*t3831 + t3690*t3838) - 0.183*t3324*t976 + var1(1);
  p_output1(2)=0. + 0.183*t2208 + t1835*t1962*t976 + t3403*t3708*t976 - 0.047*(t1196*t1962*t976 + t3403*t3690*t976) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



