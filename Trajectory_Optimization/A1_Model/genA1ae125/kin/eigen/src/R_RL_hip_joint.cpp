/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:34 GMT-05:00
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
  double t123;
  double t50;
  double t5043;
  double t629;
  double t5168;
  double t5185;
  double t5147;
  double t5299;
  double t5181;
  double t5196;
  double t5262;
  double t5302;
  double t5312;
  double t5317;
  double t5329;
  double t5339;
  double t5340;
  double t5352;
  double t5356;
  double t5365;
  t123 = Cos(var1[4]);
  t50 = Cos(var1[3]);
  t5043 = Sin(var1[4]);
  t629 = Sin(var1[3]);
  t5168 = Cos(var1[5]);
  t5185 = Sin(var1[5]);
  t5147 = Sin(var1[15]);
  t5299 = Cos(var1[15]);
  t5181 = t50*t5168*t5043;
  t5196 = t629*t5185;
  t5262 = t5181 + t5196;
  t5302 = -1.*t5168*t629;
  t5312 = t50*t5043*t5185;
  t5317 = t5302 + t5312;
  t5329 = t5168*t629*t5043;
  t5339 = -1.*t50*t5185;
  t5340 = t5329 + t5339;
  t5352 = t50*t5168;
  t5356 = t629*t5043*t5185;
  t5365 = t5352 + t5356;

  p_output1(0)=t123*t50;
  p_output1(1)=t123*t629;
  p_output1(2)=-1.*t5043;
  p_output1(3)=t5147*t5262 + t5299*t5317;
  p_output1(4)=t5147*t5340 + t5299*t5365;
  p_output1(5)=t123*t5147*t5168 + t123*t5185*t5299;
  p_output1(6)=t5262*t5299 - 1.*t5147*t5317;
  p_output1(7)=t5299*t5340 - 1.*t5147*t5365;
  p_output1(8)=-1.*t123*t5147*t5185 + t123*t5168*t5299;
}


       
Eigen::Matrix<double,3,3> R_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



