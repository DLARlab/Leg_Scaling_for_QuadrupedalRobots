/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint.h"

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
  double t791;
  double t3651;
  double t3848;
  double t3658;
  double t3995;
  double t1774;
  double t2071;
  double t3619;
  double t4501;
  double t4628;
  double t4374;
  double t4429;
  double t4488;
  double t3809;
  double t4006;
  double t4304;
  double t4872;
  double t4874;
  double t4875;
  double t4686;
  double t4703;
  double t4742;
  double t4364;
  double t4591;
  double t4595;
  double t4765;
  double t4956;
  double t4963;
  double t5029;
  double t5031;
  double t5035;
  t791 = Cos(var1[3]);
  t3651 = Cos(var1[5]);
  t3848 = Sin(var1[3]);
  t3658 = Sin(var1[4]);
  t3995 = Sin(var1[5]);
  t1774 = Cos(var1[4]);
  t2071 = Cos(var1[7]);
  t3619 = Cos(var1[6]);
  t4501 = Sin(var1[6]);
  t4628 = Sin(var1[7]);
  t4374 = -1.*t3651*t3848;
  t4429 = t791*t3658*t3995;
  t4488 = t4374 + t4429;
  t3809 = t791*t3651*t3658;
  t4006 = t3848*t3995;
  t4304 = t3809 + t4006;
  t4872 = t791*t3651;
  t4874 = t3848*t3658*t3995;
  t4875 = t4872 + t4874;
  t4686 = t3651*t3848*t3658;
  t4703 = -1.*t791*t3995;
  t4742 = t4686 + t4703;
  t4364 = t3619*t4304;
  t4591 = -1.*t4488*t4501;
  t4595 = t4364 + t4591;
  t4765 = t3619*t4742;
  t4956 = -1.*t4875*t4501;
  t4963 = t4765 + t4956;
  t5029 = t1774*t3651*t3619;
  t5031 = -1.*t1774*t3995*t4501;
  t5035 = t5029 + t5031;

  p_output1(0)=-1.*t4595*t4628 + t1774*t2071*t791;
  p_output1(1)=t1774*t2071*t3848 - 1.*t4628*t4963;
  p_output1(2)=-1.*t2071*t3658 - 1.*t4628*t5035;
  p_output1(3)=t3619*t4488 + t4304*t4501;
  p_output1(4)=t4501*t4742 + t3619*t4875;
  p_output1(5)=t1774*t3619*t3995 + t1774*t3651*t4501;
  p_output1(6)=t2071*t4595 + t1774*t4628*t791;
  p_output1(7)=t1774*t3848*t4628 + t2071*t4963;
  p_output1(8)=-1.*t3658*t4628 + t2071*t5035;
}


       
Eigen::Matrix<double,3,3> R_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



