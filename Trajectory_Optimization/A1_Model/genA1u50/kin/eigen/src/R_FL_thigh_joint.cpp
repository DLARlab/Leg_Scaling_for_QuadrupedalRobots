/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint.h"

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
  double t305;
  double t1385;
  double t1635;
  double t1428;
  double t1719;
  double t303;
  double t319;
  double t654;
  double t766;
  double t8519;
  double t1450;
  double t1726;
  double t1907;
  double t8534;
  double t8541;
  double t8586;
  double t8603;
  double t8606;
  double t8608;
  double t8611;
  double t8612;
  double t8619;
  double t5004;
  double t8590;
  double t8591;
  double t8609;
  double t8620;
  double t8623;
  double t8627;
  double t8628;
  double t8629;
  t305 = Cos(var1[3]);
  t1385 = Cos(var1[5]);
  t1635 = Sin(var1[3]);
  t1428 = Sin(var1[4]);
  t1719 = Sin(var1[5]);
  t303 = Cos(var1[10]);
  t319 = Cos(var1[4]);
  t654 = Sin(var1[10]);
  t766 = Cos(var1[9]);
  t8519 = Sin(var1[9]);
  t1450 = t305*t1385*t1428;
  t1726 = t1635*t1719;
  t1907 = t1450 + t1726;
  t8534 = -1.*t1385*t1635;
  t8541 = t305*t1428*t1719;
  t8586 = t8534 + t8541;
  t8603 = t1385*t1635*t1428;
  t8606 = -1.*t305*t1719;
  t8608 = t8603 + t8606;
  t8611 = t305*t1385;
  t8612 = t1635*t1428*t1719;
  t8619 = t8611 + t8612;
  t5004 = t766*t1907;
  t8590 = -1.*t8519*t8586;
  t8591 = t5004 + t8590;
  t8609 = t766*t8608;
  t8620 = -1.*t8519*t8619;
  t8623 = t8609 + t8620;
  t8627 = t766*t319*t1385;
  t8628 = -1.*t319*t8519*t1719;
  t8629 = t8627 + t8628;

  p_output1(0)=t303*t305*t319 - 1.*t654*t8591;
  p_output1(1)=t1635*t303*t319 - 1.*t654*t8623;
  p_output1(2)=-1.*t1428*t303 - 1.*t654*t8629;
  p_output1(3)=t1907*t8519 + t766*t8586;
  p_output1(4)=t8519*t8608 + t766*t8619;
  p_output1(5)=t1719*t319*t766 + t1385*t319*t8519;
  p_output1(6)=t305*t319*t654 + t303*t8591;
  p_output1(7)=t1635*t319*t654 + t303*t8623;
  p_output1(8)=-1.*t1428*t654 + t303*t8629;
}


       
Eigen::Matrix<double,3,3> R_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



