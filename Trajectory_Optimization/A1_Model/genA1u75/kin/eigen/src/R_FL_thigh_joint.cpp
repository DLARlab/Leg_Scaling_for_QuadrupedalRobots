/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:49 GMT-05:00
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
  double t2343;
  double t4776;
  double t5329;
  double t4801;
  double t5385;
  double t1170;
  double t3095;
  double t4548;
  double t4586;
  double t5598;
  double t5256;
  double t5481;
  double t5521;
  double t5601;
  double t5669;
  double t5868;
  double t6372;
  double t6373;
  double t6374;
  double t6387;
  double t6471;
  double t6692;
  double t5549;
  double t5906;
  double t6039;
  double t6378;
  double t6697;
  double t6705;
  double t6796;
  double t6806;
  double t6919;
  t2343 = Cos(var1[3]);
  t4776 = Cos(var1[5]);
  t5329 = Sin(var1[3]);
  t4801 = Sin(var1[4]);
  t5385 = Sin(var1[5]);
  t1170 = Cos(var1[10]);
  t3095 = Cos(var1[4]);
  t4548 = Sin(var1[10]);
  t4586 = Cos(var1[9]);
  t5598 = Sin(var1[9]);
  t5256 = t2343*t4776*t4801;
  t5481 = t5329*t5385;
  t5521 = t5256 + t5481;
  t5601 = -1.*t4776*t5329;
  t5669 = t2343*t4801*t5385;
  t5868 = t5601 + t5669;
  t6372 = t4776*t5329*t4801;
  t6373 = -1.*t2343*t5385;
  t6374 = t6372 + t6373;
  t6387 = t2343*t4776;
  t6471 = t5329*t4801*t5385;
  t6692 = t6387 + t6471;
  t5549 = t4586*t5521;
  t5906 = -1.*t5598*t5868;
  t6039 = t5549 + t5906;
  t6378 = t4586*t6374;
  t6697 = -1.*t5598*t6692;
  t6705 = t6378 + t6697;
  t6796 = t4586*t3095*t4776;
  t6806 = -1.*t3095*t5598*t5385;
  t6919 = t6796 + t6806;

  p_output1(0)=t1170*t2343*t3095 - 1.*t4548*t6039;
  p_output1(1)=t1170*t3095*t5329 - 1.*t4548*t6705;
  p_output1(2)=-1.*t1170*t4801 - 1.*t4548*t6919;
  p_output1(3)=t5521*t5598 + t4586*t5868;
  p_output1(4)=t5598*t6374 + t4586*t6692;
  p_output1(5)=t3095*t4586*t5385 + t3095*t4776*t5598;
  p_output1(6)=t2343*t3095*t4548 + t1170*t6039;
  p_output1(7)=t3095*t4548*t5329 + t1170*t6705;
  p_output1(8)=-1.*t4548*t4801 + t1170*t6919;
}


       
Eigen::Matrix<double,3,3> R_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



