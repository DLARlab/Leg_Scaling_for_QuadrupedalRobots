/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint.h"

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
  double t3329;
  double t4519;
  double t4651;
  double t4521;
  double t5341;
  double t4306;
  double t3474;
  double t3747;
  double t4476;
  double t4531;
  double t5426;
  double t5443;
  double t5499;
  double t5504;
  double t5511;
  double t5526;
  double t5552;
  double t5579;
  double t5638;
  double t1074;
  double t5814;
  double t6074;
  double t6081;
  double t6184;
  double t6208;
  double t6217;
  double t6227;
  double t6243;
  double t6245;
  double t6249;
  double t6964;
  double t7030;
  double t7068;
  double t4282;
  double t5709;
  double t5766;
  double t5838;
  double t5839;
  double t5908;
  double t6039;
  double t6301;
  double t6334;
  double t6678;
  double t6755;
  double t6758;
  double t6900;
  double t7100;
  double t7105;
  double t7225;
  double t7242;
  double t7246;
  t3329 = Cos(var1[3]);
  t4519 = Cos(var1[5]);
  t4651 = Sin(var1[3]);
  t4521 = Sin(var1[4]);
  t5341 = Sin(var1[5]);
  t4306 = Cos(var1[16]);
  t3474 = Cos(var1[4]);
  t3747 = Sin(var1[16]);
  t4476 = Cos(var1[15]);
  t4531 = t3329*t4519*t4521;
  t5426 = t4651*t5341;
  t5443 = t4531 + t5426;
  t5499 = t4476*t5443;
  t5504 = Sin(var1[15]);
  t5511 = -1.*t4519*t4651;
  t5526 = t3329*t4521*t5341;
  t5552 = t5511 + t5526;
  t5579 = -1.*t5504*t5552;
  t5638 = t5499 + t5579;
  t1074 = Sin(var1[17]);
  t5814 = Cos(var1[17]);
  t6074 = t4519*t4651*t4521;
  t6081 = -1.*t3329*t5341;
  t6184 = t6074 + t6081;
  t6208 = t4476*t6184;
  t6217 = t3329*t4519;
  t6227 = t4651*t4521*t5341;
  t6243 = t6217 + t6227;
  t6245 = -1.*t5504*t6243;
  t6249 = t6208 + t6245;
  t6964 = t4476*t3474*t4519;
  t7030 = -1.*t3474*t5504*t5341;
  t7068 = t6964 + t7030;
  t4282 = t3329*t3474*t3747;
  t5709 = t4306*t5638;
  t5766 = t4282 + t5709;
  t5838 = t4306*t3329*t3474;
  t5839 = -1.*t3747*t5638;
  t5908 = t5838 + t5839;
  t6039 = t3474*t3747*t4651;
  t6301 = t4306*t6249;
  t6334 = t6039 + t6301;
  t6678 = t4306*t3474*t4651;
  t6755 = -1.*t3747*t6249;
  t6758 = t6678 + t6755;
  t6900 = -1.*t3747*t4521;
  t7100 = t4306*t7068;
  t7105 = t6900 + t7100;
  t7225 = -1.*t4306*t4521;
  t7242 = -1.*t3747*t7068;
  t7246 = t7225 + t7242;

  p_output1(0)=-1.*t1074*t5766 + t5814*t5908;
  p_output1(1)=-1.*t1074*t6334 + t5814*t6758;
  p_output1(2)=-1.*t1074*t7105 + t5814*t7246;
  p_output1(3)=t5443*t5504 + t4476*t5552;
  p_output1(4)=t5504*t6184 + t4476*t6243;
  p_output1(5)=t3474*t4476*t5341 + t3474*t4519*t5504;
  p_output1(6)=t5766*t5814 + t1074*t5908;
  p_output1(7)=t5814*t6334 + t1074*t6758;
  p_output1(8)=t5814*t7105 + t1074*t7246;
}


       
Eigen::Matrix<double,3,3> R_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



