/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:36 GMT-05:00
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
  double t2435;
  double t3845;
  double t4548;
  double t3856;
  double t4581;
  double t989;
  double t2489;
  double t2821;
  double t3375;
  double t4761;
  double t4220;
  double t4596;
  double t4731;
  double t4823;
  double t4838;
  double t4862;
  double t5102;
  double t5103;
  double t5147;
  double t5205;
  double t5206;
  double t5237;
  double t4748;
  double t4864;
  double t4933;
  double t5201;
  double t5261;
  double t5265;
  double t5390;
  double t5401;
  double t5431;
  t2435 = Cos(var1[3]);
  t3845 = Cos(var1[5]);
  t4548 = Sin(var1[3]);
  t3856 = Sin(var1[4]);
  t4581 = Sin(var1[5]);
  t989 = Cos(var1[16]);
  t2489 = Cos(var1[4]);
  t2821 = Sin(var1[16]);
  t3375 = Cos(var1[15]);
  t4761 = Sin(var1[15]);
  t4220 = t2435*t3845*t3856;
  t4596 = t4548*t4581;
  t4731 = t4220 + t4596;
  t4823 = -1.*t3845*t4548;
  t4838 = t2435*t3856*t4581;
  t4862 = t4823 + t4838;
  t5102 = t3845*t4548*t3856;
  t5103 = -1.*t2435*t4581;
  t5147 = t5102 + t5103;
  t5205 = t2435*t3845;
  t5206 = t4548*t3856*t4581;
  t5237 = t5205 + t5206;
  t4748 = t3375*t4731;
  t4864 = -1.*t4761*t4862;
  t4933 = t4748 + t4864;
  t5201 = t3375*t5147;
  t5261 = -1.*t4761*t5237;
  t5265 = t5201 + t5261;
  t5390 = t3375*t2489*t3845;
  t5401 = -1.*t2489*t4761*t4581;
  t5431 = t5390 + t5401;

  p_output1(0)=-1.*t2821*t4933 + t2435*t2489*t989;
  p_output1(1)=-1.*t2821*t5265 + t2489*t4548*t989;
  p_output1(2)=-1.*t2821*t5431 - 1.*t3856*t989;
  p_output1(3)=t4731*t4761 + t3375*t4862;
  p_output1(4)=t4761*t5147 + t3375*t5237;
  p_output1(5)=t2489*t3375*t4581 + t2489*t3845*t4761;
  p_output1(6)=t2435*t2489*t2821 + t4933*t989;
  p_output1(7)=t2489*t2821*t4548 + t5265*t989;
  p_output1(8)=-1.*t2821*t3856 + t5431*t989;
}


       
Eigen::Matrix<double,3,3> R_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



