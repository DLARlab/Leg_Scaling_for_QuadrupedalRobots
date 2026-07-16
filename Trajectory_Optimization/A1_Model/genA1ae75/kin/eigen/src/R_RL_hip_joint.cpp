/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint.h"

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
  double t385;
  double t320;
  double t3032;
  double t1673;
  double t6996;
  double t7190;
  double t5196;
  double t8679;
  double t7140;
  double t8224;
  double t8462;
  double t8880;
  double t8964;
  double t8989;
  double t9050;
  double t9062;
  double t9261;
  double t9289;
  double t9322;
  double t9325;
  t385 = Cos(var1[4]);
  t320 = Cos(var1[3]);
  t3032 = Sin(var1[4]);
  t1673 = Sin(var1[3]);
  t6996 = Cos(var1[5]);
  t7190 = Sin(var1[5]);
  t5196 = Sin(var1[15]);
  t8679 = Cos(var1[15]);
  t7140 = t320*t6996*t3032;
  t8224 = t1673*t7190;
  t8462 = t7140 + t8224;
  t8880 = -1.*t6996*t1673;
  t8964 = t320*t3032*t7190;
  t8989 = t8880 + t8964;
  t9050 = t6996*t1673*t3032;
  t9062 = -1.*t320*t7190;
  t9261 = t9050 + t9062;
  t9289 = t320*t6996;
  t9322 = t1673*t3032*t7190;
  t9325 = t9289 + t9322;

  p_output1(0)=t320*t385;
  p_output1(1)=t1673*t385;
  p_output1(2)=-1.*t3032;
  p_output1(3)=t5196*t8462 + t8679*t8989;
  p_output1(4)=t5196*t9261 + t8679*t9325;
  p_output1(5)=t385*t5196*t6996 + t385*t7190*t8679;
  p_output1(6)=t8462*t8679 - 1.*t5196*t8989;
  p_output1(7)=t8679*t9261 - 1.*t5196*t9325;
  p_output1(8)=-1.*t385*t5196*t7190 + t385*t6996*t8679;
}


       
Eigen::Matrix<double,3,3> R_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



