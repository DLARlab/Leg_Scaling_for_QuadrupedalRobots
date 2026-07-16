/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint.h"

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
  double t3073;
  double t5181;
  double t5587;
  double t5188;
  double t5943;
  double t4730;
  double t5193;
  double t5951;
  double t6421;
  double t6750;
  double t6929;
  double t7242;
  double t7362;
  double t398;
  double t3891;
  double t7784;
  double t7972;
  double t7990;
  double t7997;
  double t476;
  double t1345;
  double t2669;
  double t3049;
  double t5082;
  double t5112;
  double t6875;
  double t6876;
  double t6889;
  double t6896;
  double t8144;
  double t8158;
  double t8262;
  double t8335;
  double t8386;
  double t8387;
  double t7834;
  double t7934;
  double t8538;
  double t8552;
  double t8564;
  double t8787;
  double t8791;
  double t8810;
  t3073 = Cos(var1[3]);
  t5181 = Cos(var1[5]);
  t5587 = Sin(var1[3]);
  t5188 = Sin(var1[4]);
  t5943 = Sin(var1[5]);
  t4730 = Sin(var1[12]);
  t5193 = t3073*t5181*t5188;
  t5951 = t5587*t5943;
  t6421 = t5193 + t5951;
  t6750 = Cos(var1[12]);
  t6929 = -1.*t5181*t5587;
  t7242 = t3073*t5188*t5943;
  t7362 = t6929 + t7242;
  t398 = Cos(var1[13]);
  t3891 = Cos(var1[4]);
  t7784 = Sin(var1[13]);
  t7972 = t6750*t6421;
  t7990 = -1.*t4730*t7362;
  t7997 = t7972 + t7990;
  t476 = -1.*t398;
  t1345 = 1. + t476;
  t2669 = -0.183*t1345;
  t3049 = 0. + t2669;
  t5082 = 0.047*t4730;
  t5112 = 0. + t5082;
  t6875 = -1.*t6750;
  t6876 = 1. + t6875;
  t6889 = -0.047*t6876;
  t6896 = 0. + t6889;
  t8144 = t5181*t5587*t5188;
  t8158 = -1.*t3073*t5943;
  t8262 = t8144 + t8158;
  t8335 = t3073*t5181;
  t8386 = t5587*t5188*t5943;
  t8387 = t8335 + t8386;
  t7834 = -0.183*t7784;
  t7934 = 0. + t7834;
  t8538 = t6750*t8262;
  t8552 = -1.*t4730*t8387;
  t8564 = t8538 + t8552;
  t8787 = t6750*t3891*t5181;
  t8791 = -1.*t3891*t4730*t5943;
  t8810 = t8787 + t8791;

  p_output1(0)=0. + t3049*t3073*t3891 + t5112*t6421 + t6896*t7362 - 0.11079*(t4730*t6421 + t6750*t7362) + t7934*t7997 - 0.183*(t3073*t3891*t398 - 1.*t7784*t7997) + var1(0);
  p_output1(1)=0. + t3049*t3891*t5587 + t5112*t8262 + t6896*t8387 - 0.11079*(t4730*t8262 + t6750*t8387) + t7934*t8564 - 0.183*(t3891*t398*t5587 - 1.*t7784*t8564) + var1(1);
  p_output1(2)=0. + t3891*t5112*t5181 - 1.*t3049*t5188 - 0.11079*(t3891*t4730*t5181 + t3891*t5943*t6750) + t3891*t5943*t6896 + t7934*t8810 - 0.183*(-1.*t398*t5188 - 1.*t7784*t8810) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



