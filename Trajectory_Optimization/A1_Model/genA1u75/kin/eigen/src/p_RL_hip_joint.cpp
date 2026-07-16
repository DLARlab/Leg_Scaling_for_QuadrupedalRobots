/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:59 GMT-05:00
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
  double t764;
  double t2771;
  double t3027;
  double t2834;
  double t3040;
  double t2156;
  double t3021;
  double t4946;
  double t5121;
  double t5423;
  double t5940;
  double t5959;
  double t5999;
  double t1210;
  double t2411;
  double t2693;
  double t5687;
  double t5766;
  double t5767;
  double t5834;
  double t6046;
  double t6048;
  double t6050;
  double t6053;
  double t6054;
  double t6056;
  t764 = Cos(var1[3]);
  t2771 = Cos(var1[5]);
  t3027 = Sin(var1[3]);
  t2834 = Sin(var1[4]);
  t3040 = Sin(var1[5]);
  t2156 = Sin(var1[15]);
  t3021 = t764*t2771*t2834;
  t4946 = t3027*t3040;
  t5121 = t3021 + t4946;
  t5423 = Cos(var1[15]);
  t5940 = -1.*t2771*t3027;
  t5959 = t764*t2834*t3040;
  t5999 = t5940 + t5959;
  t1210 = Cos(var1[4]);
  t2411 = -0.047*t2156;
  t2693 = 0. + t2411;
  t5687 = -1.*t5423;
  t5766 = 1. + t5687;
  t5767 = 0.047*t5766;
  t5834 = 0. + t5767;
  t6046 = t2771*t3027*t2834;
  t6048 = -1.*t764*t3040;
  t6050 = t6046 + t6048;
  t6053 = t764*t2771;
  t6054 = t3027*t2834*t3040;
  t6056 = t6053 + t6054;

  p_output1(0)=0. + t2693*t5121 + t5834*t5999 + 0.047*(t2156*t5121 + t5423*t5999) - 0.183*t1210*t764 + var1(0);
  p_output1(1)=0. - 0.183*t1210*t3027 + t2693*t6050 + t5834*t6056 + 0.047*(t2156*t6050 + t5423*t6056) + var1(1);
  p_output1(2)=0. + t1210*t2693*t2771 + 0.183*t2834 + 0.047*(t1210*t2156*t2771 + t1210*t3040*t5423) + t1210*t3040*t5834 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



