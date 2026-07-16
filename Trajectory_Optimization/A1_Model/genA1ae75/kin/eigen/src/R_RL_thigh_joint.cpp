/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_thigh_joint.h"

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
  double t2956;
  double t4493;
  double t4776;
  double t4770;
  double t4870;
  double t1498;
  double t3240;
  double t4459;
  double t4492;
  double t5570;
  double t4771;
  double t4887;
  double t5204;
  double t5625;
  double t5651;
  double t5914;
  double t6543;
  double t6555;
  double t6562;
  double t6654;
  double t6656;
  double t6682;
  double t5378;
  double t6045;
  double t6334;
  double t6564;
  double t6729;
  double t6730;
  double t6881;
  double t6891;
  double t6895;
  t2956 = Cos(var1[3]);
  t4493 = Cos(var1[5]);
  t4776 = Sin(var1[3]);
  t4770 = Sin(var1[4]);
  t4870 = Sin(var1[5]);
  t1498 = Cos(var1[16]);
  t3240 = Cos(var1[4]);
  t4459 = Sin(var1[16]);
  t4492 = Cos(var1[15]);
  t5570 = Sin(var1[15]);
  t4771 = t2956*t4493*t4770;
  t4887 = t4776*t4870;
  t5204 = t4771 + t4887;
  t5625 = -1.*t4493*t4776;
  t5651 = t2956*t4770*t4870;
  t5914 = t5625 + t5651;
  t6543 = t4493*t4776*t4770;
  t6555 = -1.*t2956*t4870;
  t6562 = t6543 + t6555;
  t6654 = t2956*t4493;
  t6656 = t4776*t4770*t4870;
  t6682 = t6654 + t6656;
  t5378 = t4492*t5204;
  t6045 = -1.*t5570*t5914;
  t6334 = t5378 + t6045;
  t6564 = t4492*t6562;
  t6729 = -1.*t5570*t6682;
  t6730 = t6564 + t6729;
  t6881 = t4492*t3240*t4493;
  t6891 = -1.*t3240*t5570*t4870;
  t6895 = t6881 + t6891;

  p_output1(0)=t1498*t2956*t3240 - 1.*t4459*t6334;
  p_output1(1)=t1498*t3240*t4776 - 1.*t4459*t6730;
  p_output1(2)=-1.*t1498*t4770 - 1.*t4459*t6895;
  p_output1(3)=t5204*t5570 + t4492*t5914;
  p_output1(4)=t5570*t6562 + t4492*t6682;
  p_output1(5)=t3240*t4492*t4870 + t3240*t4493*t5570;
  p_output1(6)=t2956*t3240*t4459 + t1498*t6334;
  p_output1(7)=t3240*t4459*t4776 + t1498*t6730;
  p_output1(8)=-1.*t4459*t4770 + t1498*t6895;
}


       
Eigen::Matrix<double,3,3> R_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



