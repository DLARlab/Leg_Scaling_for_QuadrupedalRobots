/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:48 GMT-05:00
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
  double t4085;
  double t5816;
  double t6273;
  double t5950;
  double t6695;
  double t5437;
  double t6044;
  double t6705;
  double t6806;
  double t6979;
  double t7160;
  double t7202;
  double t7237;
  double t2097;
  double t5368;
  double t7552;
  double t7564;
  double t7572;
  double t7581;
  double t2184;
  double t3374;
  double t3678;
  double t3743;
  double t5666;
  double t5768;
  double t7048;
  double t7112;
  double t7119;
  double t7142;
  double t7755;
  double t7798;
  double t7803;
  double t7848;
  double t7863;
  double t7865;
  double t7554;
  double t7560;
  double t7967;
  double t7974;
  double t7983;
  double t8262;
  double t8269;
  double t8282;
  t4085 = Cos(var1[3]);
  t5816 = Cos(var1[5]);
  t6273 = Sin(var1[3]);
  t5950 = Sin(var1[4]);
  t6695 = Sin(var1[5]);
  t5437 = Sin(var1[9]);
  t6044 = t4085*t5816*t5950;
  t6705 = t6273*t6695;
  t6806 = t6044 + t6705;
  t6979 = Cos(var1[9]);
  t7160 = -1.*t5816*t6273;
  t7202 = t4085*t5950*t6695;
  t7237 = t7160 + t7202;
  t2097 = Cos(var1[10]);
  t5368 = Cos(var1[4]);
  t7552 = Sin(var1[10]);
  t7564 = t6979*t6806;
  t7572 = -1.*t5437*t7237;
  t7581 = t7564 + t7572;
  t2184 = -1.*t2097;
  t3374 = 1. + t2184;
  t3678 = 0.183*t3374;
  t3743 = 0. + t3678;
  t5666 = -0.047*t5437;
  t5768 = 0. + t5666;
  t7048 = -1.*t6979;
  t7112 = 1. + t7048;
  t7119 = 0.047*t7112;
  t7142 = 0. + t7119;
  t7755 = t5816*t6273*t5950;
  t7798 = -1.*t4085*t6695;
  t7803 = t7755 + t7798;
  t7848 = t4085*t5816;
  t7863 = t6273*t5950*t6695;
  t7865 = t7848 + t7863;
  t7554 = 0.183*t7552;
  t7560 = 0. + t7554;
  t7967 = t6979*t7803;
  t7974 = -1.*t5437*t7865;
  t7983 = t7967 + t7974;
  t8262 = t6979*t5368*t5816;
  t8269 = -1.*t5368*t5437*t6695;
  t8282 = t8262 + t8269;

  p_output1(0)=0. + t3743*t4085*t5368 + t5768*t6806 + t7142*t7237 + 0.11079*(t5437*t6806 + t6979*t7237) + t7560*t7581 + 0.183*(t2097*t4085*t5368 - 1.*t7552*t7581) + var1(0);
  p_output1(1)=0. + t3743*t5368*t6273 + t5768*t7803 + t7142*t7865 + 0.11079*(t5437*t7803 + t6979*t7865) + t7560*t7983 + 0.183*(t2097*t5368*t6273 - 1.*t7552*t7983) + var1(1);
  p_output1(2)=0. + t5368*t5768*t5816 - 1.*t3743*t5950 + 0.11079*(t5368*t5437*t5816 + t5368*t6695*t6979) + t5368*t6695*t7142 + t7560*t8282 + 0.183*(-1.*t2097*t5950 - 1.*t7552*t8282) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



