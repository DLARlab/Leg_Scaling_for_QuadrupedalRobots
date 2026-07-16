/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint.h"

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
  double t2613;
  double t4156;
  double t1659;
  double t4236;
  double t4261;
  double t4265;
  double t4246;
  double t4295;
  double t4284;
  double t4289;
  double t4292;
  double t4264;
  double t4268;
  double t4270;
  double t4316;
  double t4320;
  double t4329;
  double t4307;
  double t4308;
  double t4309;
  t2613 = Cos(var1[4]);
  t4156 = Sin(var1[3]);
  t1659 = Cos(var1[3]);
  t4236 = Sin(var1[4]);
  t4261 = Cos(var1[5]);
  t4265 = Sin(var1[5]);
  t4246 = Cos(var1[6]);
  t4295 = Sin(var1[6]);
  t4284 = t1659*t4261*t4236;
  t4289 = t4156*t4265;
  t4292 = t4284 + t4289;
  t4264 = -1.*t4261*t4156;
  t4268 = t1659*t4236*t4265;
  t4270 = t4264 + t4268;
  t4316 = t4261*t4156*t4236;
  t4320 = -1.*t1659*t4265;
  t4329 = t4316 + t4320;
  t4307 = t1659*t4261;
  t4308 = t4156*t4236*t4265;
  t4309 = t4307 + t4308;

  p_output1(0)=t1659*t2613;
  p_output1(1)=t2613*t4156;
  p_output1(2)=-1.*t4236;
  p_output1(3)=t4246*t4270 + t4292*t4295;
  p_output1(4)=t4246*t4309 + t4295*t4329;
  p_output1(5)=t2613*t4246*t4265 + t2613*t4261*t4295;
  p_output1(6)=t4246*t4292 - 1.*t4270*t4295;
  p_output1(7)=-1.*t4295*t4309 + t4246*t4329;
  p_output1(8)=t2613*t4246*t4261 - 1.*t2613*t4265*t4295;
}


       
Eigen::Matrix<double,3,3> R_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



