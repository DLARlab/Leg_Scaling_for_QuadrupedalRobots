/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint.h"

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
  double t2039;
  double t1835;
  double t3381;
  double t3209;
  double t8310;
  double t8830;
  double t4639;
  double t9002;
  double t8809;
  double t8911;
  double t8996;
  double t9005;
  double t9018;
  double t9025;
  double t9058;
  double t9064;
  double t9065;
  double t9090;
  double t9094;
  double t9096;
  t2039 = Cos(var1[4]);
  t1835 = Cos(var1[3]);
  t3381 = Sin(var1[4]);
  t3209 = Sin(var1[3]);
  t8310 = Cos(var1[5]);
  t8830 = Sin(var1[5]);
  t4639 = Sin(var1[12]);
  t9002 = Cos(var1[12]);
  t8809 = t1835*t8310*t3381;
  t8911 = t3209*t8830;
  t8996 = t8809 + t8911;
  t9005 = -1.*t8310*t3209;
  t9018 = t1835*t3381*t8830;
  t9025 = t9005 + t9018;
  t9058 = t8310*t3209*t3381;
  t9064 = -1.*t1835*t8830;
  t9065 = t9058 + t9064;
  t9090 = t1835*t8310;
  t9094 = t3209*t3381*t8830;
  t9096 = t9090 + t9094;

  p_output1(0)=t1835*t2039;
  p_output1(1)=t2039*t3209;
  p_output1(2)=-1.*t3381;
  p_output1(3)=t4639*t8996 + t9002*t9025;
  p_output1(4)=t4639*t9065 + t9002*t9096;
  p_output1(5)=t2039*t4639*t8310 + t2039*t8830*t9002;
  p_output1(6)=t8996*t9002 - 1.*t4639*t9025;
  p_output1(7)=t9002*t9065 - 1.*t4639*t9096;
  p_output1(8)=-1.*t2039*t4639*t8830 + t2039*t8310*t9002;
}


       
Eigen::Matrix<double,3,3> R_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



