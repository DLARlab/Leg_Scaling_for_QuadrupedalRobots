/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t476;
  double t1786;
  double t2801;
  double t2388;
  double t2858;
  double t69;
  double t759;
  double t1192;
  double t1521;
  double t3583;
  double t2678;
  double t3076;
  double t3084;
  double t3821;
  double t4082;
  double t4274;
  double t4841;
  double t4872;
  double t5835;
  double t6041;
  double t6059;
  double t6072;
  double t3220;
  double t4429;
  double t4467;
  double t5877;
  double t6106;
  double t6120;
  double t6356;
  double t6378;
  double t6385;
  double t6429;
  double t6430;
  double t6479;
  double t1128;
  double t4498;
  double t4759;
  double t7094;
  double t7095;
  double t7163;
  double t7170;
  double t7173;
  double t7253;
  double t7298;
  double t7300;
  double t7302;
  double t7332;
  double t6502;
  double t6522;
  double t6577;
  double t7386;
  double t7395;
  double t4785;
  double t6125;
  double t6234;
  double t6599;
  double t6695;
  double t6775;
  double t6290;
  double t6413;
  double t6416;
  t476 = Cos(var1[3]);
  t1786 = Cos(var1[5]);
  t2801 = Sin(var1[3]);
  t2388 = Sin(var1[4]);
  t2858 = Sin(var1[5]);
  t69 = Cos(var1[10]);
  t759 = Cos(var1[4]);
  t1192 = Sin(var1[10]);
  t1521 = Cos(var1[9]);
  t3583 = Sin(var1[9]);
  t2678 = t476*t1786*t2388;
  t3076 = t2801*t2858;
  t3084 = t2678 + t3076;
  t3821 = -1.*t1786*t2801;
  t4082 = t476*t2388*t2858;
  t4274 = t3821 + t4082;
  t4841 = t1786*t2801*t2388;
  t4872 = -1.*t476*t2858;
  t5835 = t4841 + t4872;
  t6041 = t476*t1786;
  t6059 = t2801*t2388*t2858;
  t6072 = t6041 + t6059;
  t3220 = t1521*t3084;
  t4429 = -1.*t3583*t4274;
  t4467 = t3220 + t4429;
  t5877 = t1521*t5835;
  t6106 = -1.*t3583*t6072;
  t6120 = t5877 + t6106;
  t6356 = t1521*t759*t1786;
  t6378 = -1.*t759*t3583*t2858;
  t6385 = t6356 + t6378;
  t6429 = t3583*t3084;
  t6430 = t1521*t4274;
  t6479 = t6429 + t6430;
  t1128 = t69*t476*t759;
  t4498 = -1.*t1192*t4467;
  t4759 = t1128 + t4498;
  t7094 = -1.*t69;
  t7095 = 1. + t7094;
  t7163 = 0.183*t7095;
  t7170 = 0. + t7163;
  t7173 = -0.047*t3583;
  t7253 = 0. + t7173;
  t7298 = -1.*t1521;
  t7300 = 1. + t7298;
  t7302 = 0.047*t7300;
  t7332 = 0. + t7302;
  t6502 = t3583*t5835;
  t6522 = t1521*t6072;
  t6577 = t6502 + t6522;
  t7386 = 0.183*t1192;
  t7395 = 0. + t7386;
  t4785 = t69*t759*t2801;
  t6125 = -1.*t1192*t6120;
  t6234 = t4785 + t6125;
  t6599 = t759*t1786*t3583;
  t6695 = t1521*t759*t2858;
  t6775 = t6599 + t6695;
  t6290 = -1.*t69*t2388;
  t6413 = -1.*t1192*t6385;
  t6416 = t6290 + t6413;

  p_output1(0)=t4759;
  p_output1(1)=t6234;
  p_output1(2)=t6416;
  p_output1(3)=0.;
  p_output1(4)=t6479;
  p_output1(5)=t6577;
  p_output1(6)=t6775;
  p_output1(7)=0.;
  p_output1(8)=t4467*t69 + t1192*t476*t759;
  p_output1(9)=t6120*t69 + t1192*t2801*t759;
  p_output1(10)=-1.*t1192*t2388 + t6385*t69;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t4759 + 0.17458*t6479 + t3084*t7253 + t4274*t7332 + t4467*t7395 + t476*t7170*t759 + var1(0);
  p_output1(13)=0. + 0.183*t6234 + 0.17458*t6577 + t5835*t7253 + t6072*t7332 + t6120*t7395 + t2801*t7170*t759 + var1(1);
  p_output1(14)=0. + 0.183*t6416 + 0.17458*t6775 - 1.*t2388*t7170 + t6385*t7395 + t1786*t7253*t759 + t2858*t7332*t759 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



