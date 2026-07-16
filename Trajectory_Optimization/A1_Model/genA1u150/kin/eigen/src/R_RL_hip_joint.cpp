/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:51 GMT-05:00
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
  double t716;
  double t635;
  double t2096;
  double t1609;
  double t5817;
  double t5880;
  double t4261;
  double t6095;
  double t5824;
  double t6003;
  double t6073;
  double t6108;
  double t6109;
  double t6110;
  double t6157;
  double t6161;
  double t6187;
  double t6197;
  double t6200;
  double t6207;
  t716 = Cos(var1[4]);
  t635 = Cos(var1[3]);
  t2096 = Sin(var1[4]);
  t1609 = Sin(var1[3]);
  t5817 = Cos(var1[5]);
  t5880 = Sin(var1[5]);
  t4261 = Sin(var1[15]);
  t6095 = Cos(var1[15]);
  t5824 = t635*t5817*t2096;
  t6003 = t1609*t5880;
  t6073 = t5824 + t6003;
  t6108 = -1.*t5817*t1609;
  t6109 = t635*t2096*t5880;
  t6110 = t6108 + t6109;
  t6157 = t5817*t1609*t2096;
  t6161 = -1.*t635*t5880;
  t6187 = t6157 + t6161;
  t6197 = t635*t5817;
  t6200 = t1609*t2096*t5880;
  t6207 = t6197 + t6200;

  p_output1(0)=t635*t716;
  p_output1(1)=t1609*t716;
  p_output1(2)=-1.*t2096;
  p_output1(3)=t4261*t6073 + t6095*t6110;
  p_output1(4)=t4261*t6187 + t6095*t6207;
  p_output1(5)=t4261*t5817*t716 + t5880*t6095*t716;
  p_output1(6)=t6073*t6095 - 1.*t4261*t6110;
  p_output1(7)=t6095*t6187 - 1.*t4261*t6207;
  p_output1(8)=-1.*t4261*t5880*t716 + t5817*t6095*t716;
}


       
Eigen::Matrix<double,3,3> R_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



