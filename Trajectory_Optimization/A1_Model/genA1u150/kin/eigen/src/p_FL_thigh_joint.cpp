/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint.h"

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
  double t3066;
  double t4849;
  double t5101;
  double t4960;
  double t5527;
  double t4079;
  double t5088;
  double t5642;
  double t5704;
  double t5776;
  double t5856;
  double t5877;
  double t5917;
  double t962;
  double t3831;
  double t5968;
  double t6016;
  double t6033;
  double t6034;
  double t1033;
  double t1978;
  double t2030;
  double t2954;
  double t4082;
  double t4166;
  double t5780;
  double t5782;
  double t5791;
  double t5844;
  double t6209;
  double t6217;
  double t6234;
  double t6260;
  double t6290;
  double t6307;
  double t5978;
  double t5999;
  double t6430;
  double t6432;
  double t6470;
  double t7097;
  double t7116;
  double t7134;
  t3066 = Cos(var1[3]);
  t4849 = Cos(var1[5]);
  t5101 = Sin(var1[3]);
  t4960 = Sin(var1[4]);
  t5527 = Sin(var1[5]);
  t4079 = Sin(var1[9]);
  t5088 = t3066*t4849*t4960;
  t5642 = t5101*t5527;
  t5704 = t5088 + t5642;
  t5776 = Cos(var1[9]);
  t5856 = -1.*t4849*t5101;
  t5877 = t3066*t4960*t5527;
  t5917 = t5856 + t5877;
  t962 = Cos(var1[10]);
  t3831 = Cos(var1[4]);
  t5968 = Sin(var1[10]);
  t6016 = t5776*t5704;
  t6033 = -1.*t4079*t5917;
  t6034 = t6016 + t6033;
  t1033 = -1.*t962;
  t1978 = 1. + t1033;
  t2030 = 0.183*t1978;
  t2954 = 0. + t2030;
  t4082 = -0.047*t4079;
  t4166 = 0. + t4082;
  t5780 = -1.*t5776;
  t5782 = 1. + t5780;
  t5791 = 0.047*t5782;
  t5844 = 0. + t5791;
  t6209 = t4849*t5101*t4960;
  t6217 = -1.*t3066*t5527;
  t6234 = t6209 + t6217;
  t6260 = t3066*t4849;
  t6290 = t5101*t4960*t5527;
  t6307 = t6260 + t6290;
  t5978 = 0.183*t5968;
  t5999 = 0. + t5978;
  t6430 = t5776*t6234;
  t6432 = -1.*t4079*t6307;
  t6470 = t6430 + t6432;
  t7097 = t5776*t3831*t4849;
  t7116 = -1.*t3831*t4079*t5527;
  t7134 = t7097 + t7116;

  p_output1(0)=0. + t2954*t3066*t3831 + t4166*t5704 + t5844*t5917 + 0.17458*(t4079*t5704 + t5776*t5917) + t5999*t6034 + 0.183*(-1.*t5968*t6034 + t3066*t3831*t962) + var1(0);
  p_output1(1)=0. + t2954*t3831*t5101 + t4166*t6234 + t5844*t6307 + 0.17458*(t4079*t6234 + t5776*t6307) + t5999*t6470 + 0.183*(-1.*t5968*t6470 + t3831*t5101*t962) + var1(1);
  p_output1(2)=0. + t3831*t4166*t4849 - 1.*t2954*t4960 + 0.17458*(t3831*t4079*t4849 + t3831*t5527*t5776) + t3831*t5527*t5844 + t5999*t7134 + 0.183*(-1.*t5968*t7134 - 1.*t4960*t962) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



