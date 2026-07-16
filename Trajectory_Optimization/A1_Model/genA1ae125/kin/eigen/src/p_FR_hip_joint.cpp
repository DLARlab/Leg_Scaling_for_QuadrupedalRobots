/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint.h"

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
  double t907;
  double t7936;
  double t8535;
  double t8377;
  double t8569;
  double t6000;
  double t8530;
  double t8619;
  double t8633;
  double t8778;
  double t8797;
  double t8823;
  double t8859;
  double t4020;
  double t6490;
  double t7412;
  double t7538;
  double t7917;
  double t8860;
  double t8882;
  double t9102;
  double t9111;
  double t9133;
  double t9152;
  double t9154;
  double t9160;
  t907 = Cos(var1[3]);
  t7936 = Cos(var1[5]);
  t8535 = Sin(var1[4]);
  t8377 = Sin(var1[3]);
  t8569 = Sin(var1[5]);
  t6000 = Cos(var1[6]);
  t8530 = -1.*t7936*t8377;
  t8619 = t907*t8535*t8569;
  t8633 = t8530 + t8619;
  t8778 = t907*t7936*t8535;
  t8797 = t8377*t8569;
  t8823 = t8778 + t8797;
  t8859 = Sin(var1[6]);
  t4020 = Cos(var1[4]);
  t6490 = -1.*t6000;
  t7412 = 1. + t6490;
  t7538 = -0.047*t7412;
  t7917 = 0. + t7538;
  t8860 = 0.047*t8859;
  t8882 = 0. + t8860;
  t9102 = t907*t7936;
  t9111 = t8377*t8535*t8569;
  t9133 = t9102 + t9111;
  t9152 = t7936*t8377*t8535;
  t9154 = -1.*t907*t8569;
  t9160 = t9152 + t9154;

  p_output1(0)=0. + t7917*t8633 - 0.047*(t6000*t8633 + t8823*t8859) + t8823*t8882 + 0.183*t4020*t907 + var1(0);
  p_output1(1)=0. + 0.183*t4020*t8377 + t7917*t9133 + t8882*t9160 - 0.047*(t6000*t9133 + t8859*t9160) + var1(1);
  p_output1(2)=0. - 0.183*t8535 + t4020*t7917*t8569 - 0.047*(t4020*t6000*t8569 + t4020*t7936*t8859) + t4020*t7936*t8882 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



