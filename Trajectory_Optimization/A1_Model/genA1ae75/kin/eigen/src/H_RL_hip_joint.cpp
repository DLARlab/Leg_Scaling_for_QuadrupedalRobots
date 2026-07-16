/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint.h"

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
  double t949;
  double t634;
  double t2426;
  double t1792;
  double t4998;
  double t6007;
  double t4182;
  double t6770;
  double t5040;
  double t6638;
  double t6697;
  double t6792;
  double t6901;
  double t6915;
  double t7013;
  double t7023;
  double t7041;
  double t7139;
  double t7140;
  double t7186;
  double t6710;
  double t6980;
  double t6996;
  double t9042;
  double t9050;
  double t9152;
  double t9223;
  double t9261;
  double t9272;
  double t7047;
  double t7190;
  double t7212;
  double t7319;
  double t7694;
  double t8224;
  t949 = Cos(var1[4]);
  t634 = Cos(var1[3]);
  t2426 = Sin(var1[4]);
  t1792 = Sin(var1[3]);
  t4998 = Cos(var1[5]);
  t6007 = Sin(var1[5]);
  t4182 = Sin(var1[15]);
  t6770 = Cos(var1[15]);
  t5040 = t634*t4998*t2426;
  t6638 = t1792*t6007;
  t6697 = t5040 + t6638;
  t6792 = -1.*t4998*t1792;
  t6901 = t634*t2426*t6007;
  t6915 = t6792 + t6901;
  t7013 = t4998*t1792*t2426;
  t7023 = -1.*t634*t6007;
  t7041 = t7013 + t7023;
  t7139 = t634*t4998;
  t7140 = t1792*t2426*t6007;
  t7186 = t7139 + t7140;
  t6710 = t4182*t6697;
  t6980 = t6770*t6915;
  t6996 = t6710 + t6980;
  t9042 = -0.047*t4182;
  t9050 = 0. + t9042;
  t9152 = -1.*t6770;
  t9223 = 1. + t9152;
  t9261 = 0.047*t9223;
  t9272 = 0. + t9261;
  t7047 = t4182*t7041;
  t7190 = t6770*t7186;
  t7212 = t7047 + t7190;
  t7319 = t949*t4998*t4182;
  t7694 = t6770*t949*t6007;
  t8224 = t7319 + t7694;

  p_output1(0)=t634*t949;
  p_output1(1)=t1792*t949;
  p_output1(2)=-1.*t2426;
  p_output1(3)=0.;
  p_output1(4)=t6996;
  p_output1(5)=t7212;
  p_output1(6)=t8224;
  p_output1(7)=0.;
  p_output1(8)=t6697*t6770 - 1.*t4182*t6915;
  p_output1(9)=t6770*t7041 - 1.*t4182*t7186;
  p_output1(10)=-1.*t4182*t6007*t949 + t4998*t6770*t949;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t6996 + t6697*t9050 + t6915*t9272 - 0.183*t634*t949 + var1(0);
  p_output1(13)=0. + 0.047*t7212 + t7041*t9050 + t7186*t9272 - 0.183*t1792*t949 + var1(1);
  p_output1(14)=0. + 0.183*t2426 + 0.047*t8224 + t4998*t9050*t949 + t6007*t9272*t949 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



