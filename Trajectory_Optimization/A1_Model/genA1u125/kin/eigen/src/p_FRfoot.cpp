/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot.h"

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
  double t562;
  double t5518;
  double t5921;
  double t5835;
  double t5931;
  double t4066;
  double t5882;
  double t5968;
  double t6007;
  double t6062;
  double t6063;
  double t6075;
  double t6164;
  double t1086;
  double t6562;
  double t6617;
  double t6695;
  double t627;
  double t6701;
  double t6828;
  double t6835;
  double t6840;
  double t6861;
  double t6941;
  double t7005;
  double t7007;
  double t6785;
  double t6798;
  double t6825;
  double t1871;
  double t1982;
  double t2878;
  double t3573;
  double t4266;
  double t4853;
  double t5335;
  double t5514;
  double t6226;
  double t6230;
  double t7310;
  double t7334;
  double t7339;
  double t7364;
  double t7402;
  double t7417;
  double t6705;
  double t6726;
  double t7536;
  double t7541;
  double t7556;
  double t6850;
  double t6883;
  double t6912;
  double t7014;
  double t7031;
  double t7078;
  double t7638;
  double t7655;
  double t7672;
  double t7575;
  double t7606;
  double t7608;
  double t8063;
  double t8086;
  double t8090;
  double t8177;
  double t8186;
  double t8209;
  double t8106;
  double t8129;
  double t8136;
  t562 = Cos(var1[3]);
  t5518 = Cos(var1[5]);
  t5921 = Sin(var1[4]);
  t5835 = Sin(var1[3]);
  t5931 = Sin(var1[5]);
  t4066 = Cos(var1[6]);
  t5882 = -1.*t5518*t5835;
  t5968 = t562*t5921*t5931;
  t6007 = t5882 + t5968;
  t6062 = t562*t5518*t5921;
  t6063 = t5835*t5931;
  t6075 = t6062 + t6063;
  t6164 = Sin(var1[6]);
  t1086 = Cos(var1[7]);
  t6562 = t4066*t6075;
  t6617 = -1.*t6007*t6164;
  t6695 = t6562 + t6617;
  t627 = Cos(var1[4]);
  t6701 = Sin(var1[7]);
  t6828 = Cos(var1[8]);
  t6835 = -1.*t6828;
  t6840 = 1. + t6835;
  t6861 = Sin(var1[8]);
  t6941 = t562*t627*t1086;
  t7005 = -1.*t6695*t6701;
  t7007 = t6941 + t7005;
  t6785 = t1086*t6695;
  t6798 = t562*t627*t6701;
  t6825 = t6785 + t6798;
  t1871 = -1.*t1086;
  t1982 = 1. + t1871;
  t2878 = 0.183*t1982;
  t3573 = 0. + t2878;
  t4266 = -1.*t4066;
  t4853 = 1. + t4266;
  t5335 = -0.047*t4853;
  t5514 = 0. + t5335;
  t6226 = 0.047*t6164;
  t6230 = 0. + t6226;
  t7310 = t562*t5518;
  t7334 = t5835*t5921*t5931;
  t7339 = t7310 + t7334;
  t7364 = t5518*t5835*t5921;
  t7402 = -1.*t562*t5931;
  t7417 = t7364 + t7402;
  t6705 = 0.183*t6701;
  t6726 = 0. + t6705;
  t7536 = t4066*t7417;
  t7541 = -1.*t7339*t6164;
  t7556 = t7536 + t7541;
  t6850 = -0.25*t6840;
  t6883 = 0.183*t6861;
  t6912 = 0. + t6850 + t6883;
  t7014 = 0.183*t6840;
  t7031 = 0.25*t6861;
  t7078 = 0. + t7014 + t7031;
  t7638 = t627*t1086*t5835;
  t7655 = -1.*t7556*t6701;
  t7672 = t7638 + t7655;
  t7575 = t1086*t7556;
  t7606 = t627*t5835*t6701;
  t7608 = t7575 + t7606;
  t8063 = t627*t5518*t4066;
  t8086 = -1.*t627*t5931*t6164;
  t8090 = t8063 + t8086;
  t8177 = -1.*t1086*t5921;
  t8186 = -1.*t8090*t6701;
  t8209 = t8177 + t8186;
  t8106 = t1086*t8090;
  t8129 = -1.*t5921*t6701;
  t8136 = t8106 + t8129;

  p_output1(0)=0. + t5514*t6007 - 0.15331*(t4066*t6007 + t6075*t6164) + t6075*t6230 + t3573*t562*t627 + t6695*t6726 + t6825*t6912 + 0.183*(-1.*t6825*t6861 + t6828*t7007) - 0.5*(t6825*t6828 + t6861*t7007) + t7007*t7078 + var1(0);
  p_output1(1)=0. + t3573*t5835*t627 + t5514*t7339 + t6230*t7417 - 0.15331*(t4066*t7339 + t6164*t7417) + t6726*t7556 + t6912*t7608 + t7078*t7672 + 0.183*(-1.*t6861*t7608 + t6828*t7672) - 0.5*(t6828*t7608 + t6861*t7672) + var1(1);
  p_output1(2)=0. - 1.*t3573*t5921 + t5514*t5931*t627 + t5518*t6230*t627 - 0.15331*(t4066*t5931*t627 + t5518*t6164*t627) + t6726*t8090 + t6912*t8136 + t7078*t8209 + 0.183*(-1.*t6861*t8136 + t6828*t8209) - 0.5*(t6828*t8136 + t6861*t8209) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



