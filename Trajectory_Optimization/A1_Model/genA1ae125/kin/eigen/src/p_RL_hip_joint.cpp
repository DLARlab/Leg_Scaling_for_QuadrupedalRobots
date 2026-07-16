/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_hip_joint.h"

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
  double t494;
  double t1328;
  double t3165;
  double t1362;
  double t3191;
  double t1145;
  double t2508;
  double t4715;
  double t4781;
  double t4909;
  double t4935;
  double t4936;
  double t4938;
  double t519;
  double t1156;
  double t1245;
  double t4927;
  double t4929;
  double t4931;
  double t4933;
  double t5008;
  double t5012;
  double t5033;
  double t5039;
  double t5040;
  double t5043;
  t494 = Cos(var1[3]);
  t1328 = Cos(var1[5]);
  t3165 = Sin(var1[3]);
  t1362 = Sin(var1[4]);
  t3191 = Sin(var1[5]);
  t1145 = Sin(var1[15]);
  t2508 = t494*t1328*t1362;
  t4715 = t3165*t3191;
  t4781 = t2508 + t4715;
  t4909 = Cos(var1[15]);
  t4935 = -1.*t1328*t3165;
  t4936 = t494*t1362*t3191;
  t4938 = t4935 + t4936;
  t519 = Cos(var1[4]);
  t1156 = -0.047*t1145;
  t1245 = 0. + t1156;
  t4927 = -1.*t4909;
  t4929 = 1. + t4927;
  t4931 = 0.047*t4929;
  t4933 = 0. + t4931;
  t5008 = t1328*t3165*t1362;
  t5012 = -1.*t494*t3191;
  t5033 = t5008 + t5012;
  t5039 = t494*t1328;
  t5040 = t3165*t1362*t3191;
  t5043 = t5039 + t5040;

  p_output1(0)=0. + t1245*t4781 + t4933*t4938 + 0.047*(t1145*t4781 + t4909*t4938) - 0.183*t494*t519 + var1(0);
  p_output1(1)=0. + t1245*t5033 + t4933*t5043 + 0.047*(t1145*t5033 + t4909*t5043) - 0.183*t3165*t519 + var1(1);
  p_output1(2)=0. + 0.183*t1362 + t1245*t1328*t519 + t3191*t4933*t519 + 0.047*(t1145*t1328*t519 + t3191*t4909*t519) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



