/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:11 GMT-05:00
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
  double t2973;
  double t2409;
  double t3344;
  double t3205;
  double t3618;
  double t3816;
  double t3392;
  double t3930;
  double t3741;
  double t3848;
  double t3907;
  double t3932;
  double t3945;
  double t3958;
  double t4402;
  double t4405;
  double t4429;
  double t4465;
  double t4533;
  double t4560;
  t2973 = Cos(var1[4]);
  t2409 = Cos(var1[3]);
  t3344 = Sin(var1[4]);
  t3205 = Sin(var1[3]);
  t3618 = Cos(var1[5]);
  t3816 = Sin(var1[5]);
  t3392 = Sin(var1[15]);
  t3930 = Cos(var1[15]);
  t3741 = t2409*t3618*t3344;
  t3848 = t3205*t3816;
  t3907 = t3741 + t3848;
  t3932 = -1.*t3618*t3205;
  t3945 = t2409*t3344*t3816;
  t3958 = t3932 + t3945;
  t4402 = t3618*t3205*t3344;
  t4405 = -1.*t2409*t3816;
  t4429 = t4402 + t4405;
  t4465 = t2409*t3618;
  t4533 = t3205*t3344*t3816;
  t4560 = t4465 + t4533;

  p_output1(0)=t2409*t2973;
  p_output1(1)=t2973*t3205;
  p_output1(2)=-1.*t3344;
  p_output1(3)=t3392*t3907 + t3930*t3958;
  p_output1(4)=t3392*t4429 + t3930*t4560;
  p_output1(5)=t2973*t3392*t3618 + t2973*t3816*t3930;
  p_output1(6)=t3907*t3930 - 1.*t3392*t3958;
  p_output1(7)=t3930*t4429 - 1.*t3392*t4560;
  p_output1(8)=-1.*t2973*t3392*t3816 + t2973*t3618*t3930;
}


       
Eigen::Matrix<double,3,3> R_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



